#ifndef MESSAGECRYPTO_HPP
#define MESSAGECRYPTO_HPP

#include <QByteArray>
#include <QCryptographicHash>
#include <QRandomGenerator>
#include <QString>
#include <QStringList>

class MessageCrypto
{
public:
    static QString envelopePrefix() { return QStringLiteral("ENC1 "); }

    static bool hasKey(QString const& key)
    {
        return !key.trimmed().isEmpty();
    }

    static bool isEncrypted(QString const& text)
    {
        return text.trimmed().startsWith(envelopePrefix());
    }

    static QString encrypt(QString const& plaintext, QString const& key)
    {
        if (!hasKey(key) || plaintext.isEmpty()) {
            return plaintext;
        }

        QByteArray const keyHash = hashKey(key);
        QByteArray nonce(12, '\0');
        fillRandom(nonce);

        QByteArray const input = plaintext.toUtf8();
        QByteArray const cipher = xorWithKeystream(input, keyHash, nonce);
        QByteArray const tag = mac(keyHash, nonce, cipher).left(8);

        return QStringLiteral("%1%2 %3 %4")
            .arg(envelopePrefix(),
                 toToken(nonce),
                 toToken(cipher),
                 toToken(tag));
    }

    static bool decrypt(QString const& encoded, QString const& key, QString *plaintext)
    {
        if (!hasKey(key)) {
            return false;
        }

        QStringList const parts = encoded.trimmed().split(' ', Qt::SkipEmptyParts);
        if (parts.size() != 4 || parts.first() != QStringLiteral("ENC1")) {
            return false;
        }

        QByteArray const nonce = fromToken(parts.at(1));
        QByteArray const cipher = fromToken(parts.at(2));
        QByteArray const tag = fromToken(parts.at(3));
        if (nonce.size() != 12 || cipher.isEmpty() || tag.size() != 8) {
            return false;
        }

        QByteArray const keyHash = hashKey(key);
        QByteArray const expected = mac(keyHash, nonce, cipher).left(8);
        if (expected != tag) {
            return false;
        }

        QByteArray const decoded = xorWithKeystream(cipher, keyHash, nonce);
        QString const output = QString::fromUtf8(decoded);
        if (output.isNull()) {
            return false;
        }

        if (plaintext) {
            *plaintext = output;
        }
        return true;
    }

private:
    static QByteArray hashKey(QString const& key)
    {
        return QCryptographicHash::hash(key.toUtf8(), QCryptographicHash::Sha256);
    }

    static QByteArray mac(QByteArray const& keyHash, QByteArray const& nonce, QByteArray const& cipher)
    {
        QByteArray material("JS8CALL-MAC1");
        material += keyHash;
        material += nonce;
        material += cipher;
        return QCryptographicHash::hash(material, QCryptographicHash::Sha256);
    }

    static QByteArray xorWithKeystream(QByteArray const& input, QByteArray const& keyHash, QByteArray const& nonce)
    {
        QByteArray output = input;
        quint32 counter = 0;
        int offset = 0;

        while (offset < output.size()) {
            QByteArray material("JS8CALL-ENC1");
            material += keyHash;
            material += nonce;
            material.append(char((counter >> 24) & 0xff));
            material.append(char((counter >> 16) & 0xff));
            material.append(char((counter >> 8) & 0xff));
            material.append(char(counter & 0xff));

            QByteArray const stream = QCryptographicHash::hash(material, QCryptographicHash::Sha256);
            for (int i = 0; i < stream.size() && offset < output.size(); ++i, ++offset) {
                output[offset] = output.at(offset) ^ stream.at(i);
            }

            ++counter;
        }

        return output;
    }

    static QString toToken(QByteArray const& data)
    {
        return QString::fromLatin1(data.toBase64(QByteArray::Base64Encoding | QByteArray::OmitTrailingEquals));
    }

    static QByteArray fromToken(QString const& token)
    {
        QByteArray padded = token.toLatin1();
        int remainder = padded.size() % 4;
        if (remainder != 0) {
            padded.append(QByteArray(4 - remainder, '='));
        }
        return QByteArray::fromBase64(padded, QByteArray::Base64Encoding);
    }

    static void fillRandom(QByteArray &buffer)
    {
        auto *rng = QRandomGenerator::global();
        for (int i = 0; i < buffer.size(); ++i) {
            buffer[i] = char(rng->bounded(256));
        }
    }
};

#endif // MESSAGECRYPTO_HPP
