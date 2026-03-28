/********************************************************************************
** Form generated from reading UI file 'messagereplydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEREPLYDIALOG_H
#define UI_MESSAGEREPLYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessageReplyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MessageReplyDialog)
    {
        if (MessageReplyDialog->objectName().isEmpty())
            MessageReplyDialog->setObjectName("MessageReplyDialog");
        MessageReplyDialog->resize(520, 260);
        verticalLayout = new QVBoxLayout(MessageReplyDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(MessageReplyDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(MessageReplyDialog);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(MessageReplyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MessageReplyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MessageReplyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MessageReplyDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MessageReplyDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageReplyDialog)
    {
        MessageReplyDialog->setWindowTitle(QCoreApplication::translate("MessageReplyDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MessageReplyDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageReplyDialog: public Ui_MessageReplyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEREPLYDIALOG_H
