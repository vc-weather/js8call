/********************************************************************************
** Form generated from reading UI file 'logqso.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGQSO_H
#define UI_LOGQSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogQSO
{
public:
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *operatorLabel;
    QLineEdit *loggedOperator;
    QLabel *lab1;
    QLineEdit *call;
    QLabel *lab2;
    QGridLayout *gridLayout;
    QPushButton *start_now_button;
    QDateTimeEdit *start_date_time;
    QSpacerItem *horizontalSpacer;
    QLabel *lab2_3;
    QGridLayout *gridLayout_2;
    QPushButton *end_now_button;
    QDateTimeEdit *end_date_time;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lab4;
    QLineEdit *mode;
    QLabel *lab5;
    QLineEdit *band;
    QGridLayout *gridLayout_4;
    QLineEdit *sent;
    QLabel *lab7;
    QLineEdit *rcvd;
    QLabel *lab8;
    QLineEdit *grid;
    QLabel *lab9;
    QLineEdit *name;
    QLabel *lab10;
    QLineEdit *comments;
    QCheckBox *cbComments;
    QLabel *lab6;
    QGroupBox *additionalFields;
    QFormLayout *formLayout_2;
    QPushButton *add_new_field_button;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *field_button_layout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogQSO)
    {
        if (LogQSO->objectName().isEmpty())
            LogQSO->setObjectName("LogQSO");
        LogQSO->resize(600, 450);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogQSO->sizePolicy().hasHeightForWidth());
        LogQSO->setSizePolicy(sizePolicy);
        LogQSO->setMinimumSize(QSize(300, 0));
        verticalLayout_11 = new QVBoxLayout(LogQSO);
        verticalLayout_11->setObjectName("verticalLayout_11");
        scrollArea = new QScrollArea(LogQSO);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 561, 509));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 9, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(-1, 6, 6, 6);
        operatorLabel = new QLabel(scrollAreaWidgetContents);
        operatorLabel->setObjectName("operatorLabel");
        QFont font;
        font.setPointSize(10);
        operatorLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, operatorLabel);

        loggedOperator = new QLineEdit(scrollAreaWidgetContents);
        loggedOperator->setObjectName("loggedOperator");
        loggedOperator->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, loggedOperator);

        lab1 = new QLabel(scrollAreaWidgetContents);
        lab1->setObjectName("lab1");
        lab1->setFont(font);
        lab1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, lab1);

        call = new QLineEdit(scrollAreaWidgetContents);
        call->setObjectName("call");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(call->sizePolicy().hasHeightForWidth());
        call->setSizePolicy(sizePolicy1);
        call->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, call);

        lab2 = new QLabel(scrollAreaWidgetContents);
        lab2->setObjectName("lab2");
        lab2->setFont(font);
        lab2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, lab2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, 0, -1);
        start_now_button = new QPushButton(scrollAreaWidgetContents);
        start_now_button->setObjectName("start_now_button");

        gridLayout->addWidget(start_now_button, 0, 1, 1, 1);

        start_date_time = new QDateTimeEdit(scrollAreaWidgetContents);
        start_date_time->setObjectName("start_date_time");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(start_date_time->sizePolicy().hasHeightForWidth());
        start_date_time->setSizePolicy(sizePolicy2);
        start_date_time->setTimeSpec(Qt::UTC);

        gridLayout->addWidget(start_date_time, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        formLayout->setLayout(2, QFormLayout::FieldRole, gridLayout);

        lab2_3 = new QLabel(scrollAreaWidgetContents);
        lab2_3->setObjectName("lab2_3");
        lab2_3->setFont(font);
        lab2_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, lab2_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        end_now_button = new QPushButton(scrollAreaWidgetContents);
        end_now_button->setObjectName("end_now_button");

        gridLayout_2->addWidget(end_now_button, 0, 1, 1, 1);

        end_date_time = new QDateTimeEdit(scrollAreaWidgetContents);
        end_date_time->setObjectName("end_date_time");
        sizePolicy2.setHeightForWidth(end_date_time->sizePolicy().hasHeightForWidth());
        end_date_time->setSizePolicy(sizePolicy2);
        end_date_time->setTimeSpec(Qt::UTC);

        gridLayout_2->addWidget(end_date_time, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        formLayout->setLayout(3, QFormLayout::FieldRole, gridLayout_2);

        lab4 = new QLabel(scrollAreaWidgetContents);
        lab4->setObjectName("lab4");
        lab4->setFont(font);
        lab4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, lab4);

        mode = new QLineEdit(scrollAreaWidgetContents);
        mode->setObjectName("mode");
        mode->setMaximumSize(QSize(75, 16777215));
        mode->setAlignment(Qt::AlignmentFlag::AlignCenter);
        mode->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, mode);

        lab5 = new QLabel(scrollAreaWidgetContents);
        lab5->setObjectName("lab5");
        lab5->setFont(font);
        lab5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, lab5);

        band = new QLineEdit(scrollAreaWidgetContents);
        band->setObjectName("band");
        band->setMaximumSize(QSize(75, 16777215));
        band->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, band);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, -1, -1);

        formLayout->setLayout(6, QFormLayout::LabelRole, gridLayout_4);

        sent = new QLineEdit(scrollAreaWidgetContents);
        sent->setObjectName("sent");
        sent->setMaximumSize(QSize(75, 16777215));
        sent->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(7, QFormLayout::FieldRole, sent);

        lab7 = new QLabel(scrollAreaWidgetContents);
        lab7->setObjectName("lab7");
        lab7->setFont(font);
        lab7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(8, QFormLayout::LabelRole, lab7);

        rcvd = new QLineEdit(scrollAreaWidgetContents);
        rcvd->setObjectName("rcvd");
        rcvd->setMaximumSize(QSize(75, 16777215));
        rcvd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, rcvd);

        lab8 = new QLabel(scrollAreaWidgetContents);
        lab8->setObjectName("lab8");
        lab8->setFont(font);
        lab8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(9, QFormLayout::LabelRole, lab8);

        grid = new QLineEdit(scrollAreaWidgetContents);
        grid->setObjectName("grid");
        grid->setMaximumSize(QSize(75, 16777215));
        grid->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(9, QFormLayout::FieldRole, grid);

        lab9 = new QLabel(scrollAreaWidgetContents);
        lab9->setObjectName("lab9");
        lab9->setEnabled(true);
        lab9->setFont(font);
        lab9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(10, QFormLayout::LabelRole, lab9);

        name = new QLineEdit(scrollAreaWidgetContents);
        name->setObjectName("name");
        name->setEnabled(true);
        name->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(10, QFormLayout::FieldRole, name);

        lab10 = new QLabel(scrollAreaWidgetContents);
        lab10->setObjectName("lab10");
        lab10->setEnabled(true);
        lab10->setFont(font);

        formLayout->setWidget(11, QFormLayout::LabelRole, lab10);

        comments = new QLineEdit(scrollAreaWidgetContents);
        comments->setObjectName("comments");
        comments->setEnabled(true);

        formLayout->setWidget(11, QFormLayout::FieldRole, comments);

        cbComments = new QCheckBox(scrollAreaWidgetContents);
        cbComments->setObjectName("cbComments");

        formLayout->setWidget(12, QFormLayout::FieldRole, cbComments);

        lab6 = new QLabel(scrollAreaWidgetContents);
        lab6->setObjectName("lab6");
        lab6->setFont(font);
        lab6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, lab6);


        verticalLayout->addLayout(formLayout);

        additionalFields = new QGroupBox(scrollAreaWidgetContents);
        additionalFields->setObjectName("additionalFields");
        formLayout_2 = new QFormLayout(additionalFields);
        formLayout_2->setObjectName("formLayout_2");

        verticalLayout->addWidget(additionalFields);

        add_new_field_button = new QPushButton(scrollAreaWidgetContents);
        add_new_field_button->setObjectName("add_new_field_button");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(add_new_field_button->sizePolicy().hasHeightForWidth());
        add_new_field_button->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(add_new_field_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        field_button_layout = new QHBoxLayout();
        field_button_layout->setObjectName("field_button_layout");
        field_button_layout->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(field_button_layout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_11->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(LogQSO);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Save);

        verticalLayout_11->addWidget(buttonBox);

        QWidget::setTabOrder(call, start_date_time);
        QWidget::setTabOrder(start_date_time, start_now_button);
        QWidget::setTabOrder(start_now_button, end_date_time);
        QWidget::setTabOrder(end_date_time, end_now_button);
        QWidget::setTabOrder(end_now_button, mode);
        QWidget::setTabOrder(mode, band);
        QWidget::setTabOrder(band, sent);
        QWidget::setTabOrder(sent, rcvd);
        QWidget::setTabOrder(rcvd, grid);
        QWidget::setTabOrder(grid, name);
        QWidget::setTabOrder(name, comments);
        QWidget::setTabOrder(comments, cbComments);
        QWidget::setTabOrder(cbComments, add_new_field_button);
        QWidget::setTabOrder(add_new_field_button, scrollArea);
        QWidget::setTabOrder(scrollArea, loggedOperator);

        retranslateUi(LogQSO);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogQSO, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogQSO, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogQSO);
    } // setupUi

    void retranslateUi(QDialog *LogQSO)
    {
        operatorLabel->setText(QCoreApplication::translate("LogQSO", "Operator Callsign:", nullptr));
        lab1->setText(QCoreApplication::translate("LogQSO", "Contact Callsign:", nullptr));
        lab2->setText(QCoreApplication::translate("LogQSO", "Start:", nullptr));
        start_now_button->setText(QCoreApplication::translate("LogQSO", "Now", nullptr));
        start_date_time->setDisplayFormat(QCoreApplication::translate("LogQSO", "yyyy-MM-dd HH:mm:ss", nullptr));
        lab2_3->setText(QCoreApplication::translate("LogQSO", "End:", nullptr));
        end_now_button->setText(QCoreApplication::translate("LogQSO", "Now", nullptr));
        end_date_time->setDisplayFormat(QCoreApplication::translate("LogQSO", "yyyy-MM-dd HH:mm:ss", nullptr));
        lab4->setText(QCoreApplication::translate("LogQSO", "Mode:", nullptr));
        lab5->setText(QCoreApplication::translate("LogQSO", "Band:", nullptr));
        lab7->setText(QCoreApplication::translate("LogQSO", "Signal Report Received:", nullptr));
        lab8->setText(QCoreApplication::translate("LogQSO", "Grid:", nullptr));
        lab9->setText(QCoreApplication::translate("LogQSO", "Name:", nullptr));
        lab10->setText(QCoreApplication::translate("LogQSO", "Comments:", nullptr));
        cbComments->setText(QCoreApplication::translate("LogQSO", "Retain Comments", nullptr));
        lab6->setText(QCoreApplication::translate("LogQSO", "Signal Report Sent:", nullptr));
        additionalFields->setTitle(QCoreApplication::translate("LogQSO", "Additional Fields", nullptr));
        add_new_field_button->setText(QCoreApplication::translate("LogQSO", "Add New Field", nullptr));
        (void)LogQSO;
    } // retranslateUi

};

namespace Ui {
    class LogQSO: public Ui_LogQSO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGQSO_H
