/********************************************************************************
** Form generated from reading UI file 'messagewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWINDOW_H
#define UI_MESSAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *mainSplitter;
    QTableWidget *messageTableWidget;
    QTextEdit *messageTextEdit;
    QTextEdit *replytextEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *replyPushButton;

    void setupUi(QDialog *MessageWindow)
    {
        if (MessageWindow->objectName().isEmpty())
            MessageWindow->setObjectName("MessageWindow");
        MessageWindow->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(MessageWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        mainSplitter = new QSplitter(MessageWindow);
        mainSplitter->setObjectName("mainSplitter");
        mainSplitter->setOrientation(Qt::Orientation::Vertical);
        mainSplitter->setHandleWidth(6);
        messageTableWidget = new QTableWidget(mainSplitter);
        if (messageTableWidget->columnCount() < 7)
            messageTableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        messageTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        messageTableWidget->setObjectName("messageTableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(messageTableWidget->sizePolicy().hasHeightForWidth());
        messageTableWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        messageTableWidget->setFont(font);
        messageTableWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        messageTableWidget->setAutoScroll(true);
        messageTableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        messageTableWidget->setProperty("showDropIndicator", QVariant(false));
        messageTableWidget->setDragDropOverwriteMode(false);
        messageTableWidget->setAlternatingRowColors(true);
        messageTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        messageTableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        messageTableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        messageTableWidget->setGridStyle(Qt::PenStyle::DotLine);
        messageTableWidget->setSortingEnabled(false);
        messageTableWidget->setWordWrap(false);
        mainSplitter->addWidget(messageTableWidget);
        messageTableWidget->horizontalHeader()->setVisible(true);
        messageTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        messageTableWidget->horizontalHeader()->setMinimumSectionSize(20);
        messageTableWidget->horizontalHeader()->setDefaultSectionSize(30);
        messageTableWidget->horizontalHeader()->setHighlightSections(false);
        messageTableWidget->horizontalHeader()->setStretchLastSection(true);
        messageTableWidget->verticalHeader()->setVisible(false);
        messageTextEdit = new QTextEdit(mainSplitter);
        messageTextEdit->setObjectName("messageTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(messageTextEdit->sizePolicy().hasHeightForWidth());
        messageTextEdit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(14);
        messageTextEdit->setFont(font1);
        messageTextEdit->setVisible(true);
        messageTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit { /*background-color:#ffeaa7*/; }"));
        mainSplitter->addWidget(messageTextEdit);
        replytextEdit = new QTextEdit(mainSplitter);
        replytextEdit->setObjectName("replytextEdit");
        sizePolicy1.setHeightForWidth(replytextEdit->sizePolicy().hasHeightForWidth());
        replytextEdit->setSizePolicy(sizePolicy1);
        replytextEdit->setVisible(false);
        mainSplitter->addWidget(replytextEdit);

        verticalLayout_2->addWidget(mainSplitter);

        widget = new QWidget(MessageWindow);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        replyPushButton = new QPushButton(widget);
        replyPushButton->setObjectName("replyPushButton");
        replyPushButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(replyPushButton);


        verticalLayout_2->addWidget(widget);


        retranslateUi(MessageWindow);

        QMetaObject::connectSlotsByName(MessageWindow);
    } // setupUi

    void retranslateUi(QDialog *MessageWindow)
    {
        MessageWindow->setWindowTitle(QCoreApplication::translate("MessageWindow", "Message History", nullptr));
        QTableWidgetItem *___qtablewidgetitem = messageTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MessageWindow", "\342\232\221", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem->setToolTip(QCoreApplication::translate("MessageWindow", "Read / Unread Status", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem1 = messageTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MessageWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = messageTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MessageWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = messageTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MessageWindow", "Frequency", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = messageTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MessageWindow", "From", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = messageTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MessageWindow", "To", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = messageTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MessageWindow", "Message", nullptr));
#if QT_CONFIG(tooltip)
        messageTableWidget->setToolTip(QCoreApplication::translate("MessageWindow", "<html><head/><body><p>Received band activity is displayed with time since last heard, SNR, and the text received for each frequency offset in the passband.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        replyPushButton->setText(QCoreApplication::translate("MessageWindow", "Reply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageWindow: public Ui_MessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWINDOW_H
