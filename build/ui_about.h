/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CAboutDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTxt;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CAboutDlg)
    {
        if (CAboutDlg->objectName().isEmpty())
            CAboutDlg->setObjectName("CAboutDlg");
        CAboutDlg->setWindowModality(Qt::WindowModality::NonModal);
        CAboutDlg->resize(192, 116);
        verticalLayout = new QVBoxLayout(CAboutDlg);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelTxt = new QLabel(CAboutDlg);
        labelTxt->setObjectName("labelTxt");
        labelTxt->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelTxt->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(labelTxt);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(CAboutDlg);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CAboutDlg);
        QObject::connect(okButton, &QPushButton::clicked, CAboutDlg, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(CAboutDlg);
    } // setupUi

    void retranslateUi(QDialog *CAboutDlg)
    {
        CAboutDlg->setWindowTitle(QCoreApplication::translate("CAboutDlg", "About JS8Call", nullptr));
        labelTxt->setText(QString());
        okButton->setText(QCoreApplication::translate("CAboutDlg", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAboutDlg: public Ui_CAboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
