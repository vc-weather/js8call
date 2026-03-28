/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AttenuationSlider.hpp"
#include "SignalMeter.hpp"
#include "TransmitTextEdit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionErase_ALL_TXT;
    QAction *actionErase_js8call_log_adi;
    QAction *actionSettings;
    QAction *actionOpen_log_directory;
    QAction *actionCopyright_Notice;
    QAction *actionShow_Band_Activity;
    QAction *actionShow_Call_Activity;
    QAction *actionShow_Waterfall;
    QAction *actionReset_Window_Sizes;
    QAction *actionSort_Band_Activity;
    QAction *actionSort_Call_Activity;
    QAction *actionShow_Waterfall_Controls;
    QAction *actionShow_Band_Activity_Columns;
    QAction *actionShow_Call_Activity_Columns;
    QAction *actionAdd_Log_Entry;
    QAction *actionShow_Frequency_Clock;
    QAction *actionShow_Tooltips;
    QAction *actionShow_Fullscreen;
    QAction *actionHeartbeat;
    QAction *actionCQ;
    QAction *actionShow_Band_Heartbeats_and_ACKs;
    QAction *actionShow_Statusbar;
    QAction *actionSetFrequency;
    QAction *actionSetOffset;
    QAction *actionShow_Message_Inbox;
    QAction *actionCheck_for_Updates;
    QAction *actionFocus_Message_Reply_Area;
    QAction *actionFocus_Band_Activity_Table;
    QAction *actionFocus_Call_Activity_Table;
    QAction *actionModeJS8Normal;
    QAction *actionModeJS8Fast;
    QAction *actionModeJS8Turbo;
    QAction *actionModeJS8Ultra;
    QAction *actionModeJS8HB;
    QAction *actionHeartbeatAcknowledgements;
    QAction *actionFocus_Message_Receive_Area;
    QAction *actionModeMultiDecoder;
    QAction *actionModeAutoreply;
    QAction *actionModeJS8Slow;
    QAction *actionEnable_Monitor_RX;
    QAction *actionEnable_Transmitter_TX;
    QAction *actionEnable_Reporting_SPOT;
    QAction *actionEnable_Tuning_Tone_TUNE;
    QAction *actionShow_Waterfall_Time_Drift_Controls;
    QAction *actionClear_All_Activity;
    QAction *actionClear_Band_Activity;
    QAction *actionClear_RX_Activity;
    QAction *actionClear_Call_Activity;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QSplitter *mainSplitter;
    QWidget *logHorizontalWidget;
    QHBoxLayout *horizontalLayout_16;
    QFrame *logWidget;
    QHBoxLayout *horizontalLayout_17;
    QFrame *frame;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_18;
    QLCDNumber *currentFreq;
    QVBoxLayout *verticalLayout_16;
    QPushButton *dialFreqUpButton;
    QPushButton *dialFreqDownButton;
    QLabel *labDialFreqOffset;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_4;
    QLabel *labCallsign;
    QLabel *labUTC;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_10;
    QFrame *buttonGrid;
    QGridLayout *gridLayout_8;
    QPushButton *monitorTxButton;
    QPushButton *monitorButton;
    QPushButton *logQSOButton;
    QPushButton *tuneButton;
    QPushButton *modeButton;
    QPushButton *spotButton;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSplitter *textHorizontalSplitter;
    QTableWidget *tableWidgetRXAll;
    QSplitter *textVerticalSplitter;
    QTextEdit *textEditRX;
    TransmitTextEdit *extFreeTextMsgEdit;
    QSplitter *callsVerticalSplitter;
    QTextBrowser *callDetailTextBrowser;
    QTableWidget *tableWidgetCalls;
    QWidget *macroHorizonalWidget;
    QGridLayout *gridLayout;
    QPushButton *queryButton;
    QPushButton *snrMacroButton;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *hbMacroButton;
    QPushButton *macrosMacroButton;
    QPushButton *infoMacroButton;
    QPushButton *cqMacroButton;
    QPushButton *startTxButton;
    QPushButton *deselectButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacerSavedDirected;
    QPushButton *replyMacroButton;
    QPushButton *stopTxButton;
    QPushButton *statusMacroButton;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_14;
    QWidget *bandHorizontalWidget;
    QHBoxLayout *horizontalLayoutBand;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_11;
    QPushButton *readFreq;
    SignalMeter *signal_meter_widget;
    AttenuationSlider *outAttenuation;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuConfig;
    QMenu *menuWindow;
    QMenu *menu_Log;
    QMenu *menuControl;
    QMenu *menuFocus;
    QMenu *menuClear_Activity;
    QMenu *menuModeJS8;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(994, 605);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionExit->setMenuRole(QAction::MenuRole::QuitRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout->setEnabled(true);
        actionErase_ALL_TXT = new QAction(MainWindow);
        actionErase_ALL_TXT->setObjectName("actionErase_ALL_TXT");
        actionErase_js8call_log_adi = new QAction(MainWindow);
        actionErase_js8call_log_adi->setObjectName("actionErase_js8call_log_adi");
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionOpen_log_directory = new QAction(MainWindow);
        actionOpen_log_directory->setObjectName("actionOpen_log_directory");
        actionCopyright_Notice = new QAction(MainWindow);
        actionCopyright_Notice->setObjectName("actionCopyright_Notice");
        actionShow_Band_Activity = new QAction(MainWindow);
        actionShow_Band_Activity->setObjectName("actionShow_Band_Activity");
        actionShow_Band_Activity->setCheckable(true);
        actionShow_Band_Activity->setChecked(true);
        actionShow_Call_Activity = new QAction(MainWindow);
        actionShow_Call_Activity->setObjectName("actionShow_Call_Activity");
        actionShow_Call_Activity->setCheckable(true);
        actionShow_Call_Activity->setChecked(true);
        actionShow_Waterfall = new QAction(MainWindow);
        actionShow_Waterfall->setObjectName("actionShow_Waterfall");
        actionShow_Waterfall->setCheckable(true);
        actionShow_Waterfall->setChecked(true);
        actionReset_Window_Sizes = new QAction(MainWindow);
        actionReset_Window_Sizes->setObjectName("actionReset_Window_Sizes");
        actionSort_Band_Activity = new QAction(MainWindow);
        actionSort_Band_Activity->setObjectName("actionSort_Band_Activity");
        actionSort_Call_Activity = new QAction(MainWindow);
        actionSort_Call_Activity->setObjectName("actionSort_Call_Activity");
        actionShow_Waterfall_Controls = new QAction(MainWindow);
        actionShow_Waterfall_Controls->setObjectName("actionShow_Waterfall_Controls");
        actionShow_Waterfall_Controls->setCheckable(true);
        actionShow_Waterfall_Controls->setChecked(true);
        actionShow_Band_Activity_Columns = new QAction(MainWindow);
        actionShow_Band_Activity_Columns->setObjectName("actionShow_Band_Activity_Columns");
        actionShow_Call_Activity_Columns = new QAction(MainWindow);
        actionShow_Call_Activity_Columns->setObjectName("actionShow_Call_Activity_Columns");
        actionAdd_Log_Entry = new QAction(MainWindow);
        actionAdd_Log_Entry->setObjectName("actionAdd_Log_Entry");
        actionAdd_Log_Entry->setShortcutContext(Qt::ShortcutContext::WindowShortcut);
        actionShow_Frequency_Clock = new QAction(MainWindow);
        actionShow_Frequency_Clock->setObjectName("actionShow_Frequency_Clock");
        actionShow_Frequency_Clock->setCheckable(true);
        actionShow_Frequency_Clock->setChecked(true);
        actionShow_Tooltips = new QAction(MainWindow);
        actionShow_Tooltips->setObjectName("actionShow_Tooltips");
        actionShow_Tooltips->setCheckable(true);
        actionShow_Tooltips->setChecked(true);
        actionShow_Fullscreen = new QAction(MainWindow);
        actionShow_Fullscreen->setObjectName("actionShow_Fullscreen");
        actionShow_Fullscreen->setCheckable(true);
        actionHeartbeat = new QAction(MainWindow);
        actionHeartbeat->setObjectName("actionHeartbeat");
        actionCQ = new QAction(MainWindow);
        actionCQ->setObjectName("actionCQ");
        actionShow_Band_Heartbeats_and_ACKs = new QAction(MainWindow);
        actionShow_Band_Heartbeats_and_ACKs->setObjectName("actionShow_Band_Heartbeats_and_ACKs");
        actionShow_Band_Heartbeats_and_ACKs->setCheckable(true);
        actionShow_Statusbar = new QAction(MainWindow);
        actionShow_Statusbar->setObjectName("actionShow_Statusbar");
        actionShow_Statusbar->setCheckable(true);
        actionSetFrequency = new QAction(MainWindow);
        actionSetFrequency->setObjectName("actionSetFrequency");
        actionSetOffset = new QAction(MainWindow);
        actionSetOffset->setObjectName("actionSetOffset");
        actionShow_Message_Inbox = new QAction(MainWindow);
        actionShow_Message_Inbox->setObjectName("actionShow_Message_Inbox");
        actionCheck_for_Updates = new QAction(MainWindow);
        actionCheck_for_Updates->setObjectName("actionCheck_for_Updates");
        actionFocus_Message_Reply_Area = new QAction(MainWindow);
        actionFocus_Message_Reply_Area->setObjectName("actionFocus_Message_Reply_Area");
        actionFocus_Band_Activity_Table = new QAction(MainWindow);
        actionFocus_Band_Activity_Table->setObjectName("actionFocus_Band_Activity_Table");
        actionFocus_Call_Activity_Table = new QAction(MainWindow);
        actionFocus_Call_Activity_Table->setObjectName("actionFocus_Call_Activity_Table");
        actionModeJS8Normal = new QAction(MainWindow);
        actionModeJS8Normal->setObjectName("actionModeJS8Normal");
        actionModeJS8Normal->setCheckable(true);
        actionModeJS8Normal->setChecked(true);
        actionModeJS8Fast = new QAction(MainWindow);
        actionModeJS8Fast->setObjectName("actionModeJS8Fast");
        actionModeJS8Fast->setCheckable(true);
        actionModeJS8Turbo = new QAction(MainWindow);
        actionModeJS8Turbo->setObjectName("actionModeJS8Turbo");
        actionModeJS8Turbo->setCheckable(true);
        actionModeJS8Ultra = new QAction(MainWindow);
        actionModeJS8Ultra->setObjectName("actionModeJS8Ultra");
        actionModeJS8Ultra->setCheckable(true);
        actionModeJS8HB = new QAction(MainWindow);
        actionModeJS8HB->setObjectName("actionModeJS8HB");
        actionModeJS8HB->setCheckable(true);
        actionHeartbeatAcknowledgements = new QAction(MainWindow);
        actionHeartbeatAcknowledgements->setObjectName("actionHeartbeatAcknowledgements");
        actionHeartbeatAcknowledgements->setCheckable(true);
        actionFocus_Message_Receive_Area = new QAction(MainWindow);
        actionFocus_Message_Receive_Area->setObjectName("actionFocus_Message_Receive_Area");
        actionModeMultiDecoder = new QAction(MainWindow);
        actionModeMultiDecoder->setObjectName("actionModeMultiDecoder");
        actionModeMultiDecoder->setCheckable(true);
        actionModeMultiDecoder->setChecked(false);
        actionModeAutoreply = new QAction(MainWindow);
        actionModeAutoreply->setObjectName("actionModeAutoreply");
        actionModeAutoreply->setCheckable(true);
        actionModeJS8Slow = new QAction(MainWindow);
        actionModeJS8Slow->setObjectName("actionModeJS8Slow");
        actionModeJS8Slow->setCheckable(true);
        actionEnable_Monitor_RX = new QAction(MainWindow);
        actionEnable_Monitor_RX->setObjectName("actionEnable_Monitor_RX");
        actionEnable_Monitor_RX->setCheckable(true);
        actionEnable_Transmitter_TX = new QAction(MainWindow);
        actionEnable_Transmitter_TX->setObjectName("actionEnable_Transmitter_TX");
        actionEnable_Transmitter_TX->setCheckable(true);
        actionEnable_Reporting_SPOT = new QAction(MainWindow);
        actionEnable_Reporting_SPOT->setObjectName("actionEnable_Reporting_SPOT");
        actionEnable_Reporting_SPOT->setCheckable(true);
        actionEnable_Tuning_Tone_TUNE = new QAction(MainWindow);
        actionEnable_Tuning_Tone_TUNE->setObjectName("actionEnable_Tuning_Tone_TUNE");
        actionEnable_Tuning_Tone_TUNE->setCheckable(true);
        actionShow_Waterfall_Time_Drift_Controls = new QAction(MainWindow);
        actionShow_Waterfall_Time_Drift_Controls->setObjectName("actionShow_Waterfall_Time_Drift_Controls");
        actionShow_Waterfall_Time_Drift_Controls->setCheckable(true);
        actionShow_Waterfall_Time_Drift_Controls->setChecked(true);
        actionClear_All_Activity = new QAction(MainWindow);
        actionClear_All_Activity->setObjectName("actionClear_All_Activity");
        actionClear_Band_Activity = new QAction(MainWindow);
        actionClear_Band_Activity->setObjectName("actionClear_Band_Activity");
        actionClear_RX_Activity = new QAction(MainWindow);
        actionClear_RX_Activity->setObjectName("actionClear_RX_Activity");
        actionClear_Call_Activity = new QAction(MainWindow);
        actionClear_Call_Activity->setObjectName("actionClear_Call_Activity");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(6, 6, 6, 6);
        mainSplitter = new QSplitter(centralWidget);
        mainSplitter->setObjectName("mainSplitter");
        mainSplitter->setFrameShadow(QFrame::Shadow::Plain);
        mainSplitter->setOrientation(Qt::Orientation::Vertical);
        mainSplitter->setOpaqueResize(true);
        mainSplitter->setHandleWidth(6);
        mainSplitter->setChildrenCollapsible(true);
        logHorizontalWidget = new QWidget(mainSplitter);
        logHorizontalWidget->setObjectName("logHorizontalWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(logHorizontalWidget->sizePolicy().hasHeightForWidth());
        logHorizontalWidget->setSizePolicy(sizePolicy1);
        logHorizontalWidget->setMinimumSize(QSize(0, 125));
        logHorizontalWidget->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_16 = new QHBoxLayout(logHorizontalWidget);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        logWidget = new QFrame(logHorizontalWidget);
        logWidget->setObjectName("logWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(logWidget->sizePolicy().hasHeightForWidth());
        logWidget->setSizePolicy(sizePolicy2);
        logWidget->setMinimumSize(QSize(0, 125));
        logWidget->setMaximumSize(QSize(16777215, 16777215));
        logWidget->setStyleSheet(QString::fromUtf8("QFrame { background:black; }"));
        logWidget->setFrameShape(QFrame::Shape::NoFrame);
        logWidget->setFrameShadow(QFrame::Shadow::Plain);
        horizontalLayout_17 = new QHBoxLayout(logWidget);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(logWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("QFrame { \n"
"	color:white;\n"
"	background-color:rgb(0,0,0);\n"
"}"));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Sunken);
        verticalLayout_12 = new QVBoxLayout(frame);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(10, 6, 0, 6);
        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_6);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(-1, 0, -1, -1);
        currentFreq = new QLCDNumber(frame);
        currentFreq->setObjectName("currentFreq");
        currentFreq->setMinimumSize(QSize(200, 40));
        currentFreq->setFrameShape(QFrame::Shape::NoFrame);
        currentFreq->setFrameShadow(QFrame::Shadow::Plain);
        currentFreq->setLineWidth(0);
        currentFreq->setSmallDecimalPoint(false);
        currentFreq->setDigitCount(10);
        currentFreq->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        currentFreq->setProperty("value", QVariant(1234567890.000000000000000));
        currentFreq->setProperty("intValue", QVariant(1234567890));

        horizontalLayout_18->addWidget(currentFreq);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(-1, -1, 0, -1);
        dialFreqUpButton = new QPushButton(frame);
        dialFreqUpButton->setObjectName("dialFreqUpButton");
        dialFreqUpButton->setMinimumSize(QSize(30, 24));
        dialFreqUpButton->setMaximumSize(QSize(30, 24));
        dialFreqUpButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        dialFreqUpButton->setAutoFillBackground(false);
        dialFreqUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#000;\n"
"	background-image:url(\":/images/artwork/up.png\");\n"
"	background-position: center center;\n"
"	background-repeat:no-repeat;\n"
"	border:1px solid;\n"
"	border-radius:2px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#222;	\n"
"}"));

        verticalLayout_16->addWidget(dialFreqUpButton);

        dialFreqDownButton = new QPushButton(frame);
        dialFreqDownButton->setObjectName("dialFreqDownButton");
        dialFreqDownButton->setMinimumSize(QSize(30, 24));
        dialFreqDownButton->setMaximumSize(QSize(30, 24));
        dialFreqDownButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        dialFreqDownButton->setAutoFillBackground(false);
        dialFreqDownButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#000;\n"
"	background-image:url(\":/images/artwork/down.png\");\n"
"	background-position: center center;\n"
"	background-repeat:no-repeat;\n"
"	border:1px solid;\n"
"	border-radius:2px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#222;	\n"
"}"));

        verticalLayout_16->addWidget(dialFreqDownButton);


        horizontalLayout_18->addLayout(verticalLayout_16);


        verticalLayout_12->addLayout(horizontalLayout_18);

        labDialFreqOffset = new QLabel(frame);
        labDialFreqOffset->setObjectName("labDialFreqOffset");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labDialFreqOffset->sizePolicy().hasHeightForWidth());
        labDialFreqOffset->setSizePolicy(sizePolicy4);
        labDialFreqOffset->setVisible(true);
        labDialFreqOffset->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14pt;\n"
"line-height:12pt;\n"
"color : white;\n"
"}"));
        labDialFreqOffset->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labDialFreqOffset->setMargin(0);

        verticalLayout_12->addWidget(labDialFreqOffset);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_5);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(3, 1);

        horizontalLayout_17->addWidget(frame);

        horizontalSpacer_9 = new QSpacerItem(10, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        frame_6 = new QFrame(logWidget);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("QFrame, QLabel { background-color : black; }"));
        frame_6->setFrameShape(QFrame::Shape::NoFrame);
        frame_6->setFrameShadow(QFrame::Shadow::Plain);
        frame_6->setLineWidth(0);
        verticalLayout_15 = new QVBoxLayout(frame_6);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 10, 0, 10);
        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_4);

        labCallsign = new QLabel(frame_6);
        labCallsign->setObjectName("labCallsign");
        sizePolicy4.setHeightForWidth(labCallsign->sizePolicy().hasHeightForWidth());
        labCallsign->setSizePolicy(sizePolicy4);
        labCallsign->setMouseTracking(true);
        labCallsign->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14pt;\n"
"line-height:12pt;\n"
"color : white;\n"
"}"));
        labCallsign->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(labCallsign);

        labUTC = new QLabel(frame_6);
        labUTC->setObjectName("labUTC");
        sizePolicy4.setHeightForWidth(labUTC->sizePolicy().hasHeightForWidth());
        labUTC->setSizePolicy(sizePolicy4);
        QFont font;
        font.setPointSize(14);
        labUTC->setFont(font);
        labUTC->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14pt;\n"
"line-height:12pt;\n"
"color : white;\n"
"}"));
        labUTC->setFrameShape(QFrame::Shape::NoFrame);
        labUTC->setFrameShadow(QFrame::Shadow::Plain);
        labUTC->setLineWidth(2);
        labUTC->setMidLineWidth(0);
        labUTC->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labUTC->setMargin(5);

        verticalLayout_15->addWidget(labUTC);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer);

        verticalLayout_15->setStretch(0, 1);
        verticalLayout_15->setStretch(3, 1);

        horizontalLayout_17->addWidget(frame_6);

        horizontalSpacer_10 = new QSpacerItem(10, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_10);

        buttonGrid = new QFrame(logWidget);
        buttonGrid->setObjectName("buttonGrid");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(buttonGrid->sizePolicy().hasHeightForWidth());
        buttonGrid->setSizePolicy(sizePolicy5);
        buttonGrid->setMinimumSize(QSize(0, 0));
        buttonGrid->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:lightgray;\n"
"	padding:0.25em 0.25em; font-weight:normal;\n"
"	border-style:solid;\n"
"	border-width:0px;\n"
"	border-radius:2px;\n"
" }\n"
"\n"
"QPushButton:checked { \n"
"  background-color:#6699ff;\n"
"}"));
        buttonGrid->setFrameShape(QFrame::Shape::NoFrame);
        buttonGrid->setFrameShadow(QFrame::Shadow::Plain);
        gridLayout_8 = new QGridLayout(buttonGrid);
        gridLayout_8->setSpacing(10);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        gridLayout_8->setContentsMargins(0, 10, 10, 10);
        monitorTxButton = new QPushButton(buttonGrid);
        monitorTxButton->setObjectName("monitorTxButton");
        monitorTxButton->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(monitorTxButton->sizePolicy().hasHeightForWidth());
        monitorTxButton->setSizePolicy(sizePolicy6);
        monitorTxButton->setMinimumSize(QSize(0, 30));
        monitorTxButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setBold(false);
        monitorTxButton->setFont(font1);
        monitorTxButton->setVisible(true);
        monitorTxButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:lightgray;\n"
"	padding:0.25em 0.25em; font-weight:normal;\n"
"	border-style:solid;\n"
"	border-width:0px;\n"
"	border-radius:2px;\n"
" }\n"
"\n"
"QPushButton:checked { \n"
"  background-color:#22FF22;\n"
"}\n"
"\n"
"QPushButton[transmitting=\"true\"] {\n"
"  background-color:#FF2222;\n"
"}"));
        monitorTxButton->setCheckable(true);
        monitorTxButton->setChecked(false);
        monitorTxButton->setFlat(false);

        gridLayout_8->addWidget(monitorTxButton, 1, 1, 1, 1);

        monitorButton = new QPushButton(buttonGrid);
        monitorButton->setObjectName("monitorButton");
        monitorButton->setEnabled(true);
        sizePolicy6.setHeightForWidth(monitorButton->sizePolicy().hasHeightForWidth());
        monitorButton->setSizePolicy(sizePolicy6);
        monitorButton->setMinimumSize(QSize(0, 30));
        monitorButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        monitorButton->setFont(font2);
        monitorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:lightgray;\n"
"	padding:0.25em 0.25em; font-weight:normal;\n"
"	border-style:solid;\n"
"	border-width:0px;\n"
"	border-radius:2px;\n"
" }\n"
"\n"
"QPushButton:checked { \n"
"  background-color:#22FF22;\n"
"}"));
        monitorButton->setCheckable(true);
        monitorButton->setChecked(false);
        monitorButton->setFlat(false);

        gridLayout_8->addWidget(monitorButton, 1, 0, 1, 1);

        logQSOButton = new QPushButton(buttonGrid);
        logQSOButton->setObjectName("logQSOButton");
        logQSOButton->setEnabled(true);
        sizePolicy6.setHeightForWidth(logQSOButton->sizePolicy().hasHeightForWidth());
        logQSOButton->setSizePolicy(sizePolicy6);
        logQSOButton->setMinimumSize(QSize(0, 30));
        logQSOButton->setMaximumSize(QSize(16777215, 16777215));
        logQSOButton->setFont(font2);
        logQSOButton->setVisible(true);
        logQSOButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:lightgray;\n"
"	padding:0.25em 0.25em; font-weight:normal;\n"
"	border-style:solid;\n"
"	border-width:0px;\n"
"	border-radius:2px;\n"
" }\n"
"\n"
"QPushButton:checked { \n"
"  background-color:#6699ff;\n"
"}"));
        logQSOButton->setFlat(false);

        gridLayout_8->addWidget(logQSOButton, 2, 1, 1, 1);

        tuneButton = new QPushButton(buttonGrid);
        tuneButton->setObjectName("tuneButton");
        tuneButton->setEnabled(true);
        sizePolicy6.setHeightForWidth(tuneButton->sizePolicy().hasHeightForWidth());
        tuneButton->setSizePolicy(sizePolicy6);
        tuneButton->setMinimumSize(QSize(0, 30));
        tuneButton->setMaximumSize(QSize(16777215, 16777215));
        tuneButton->setFont(font2);
        tuneButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:lightgray;\n"
"	padding:0.25em 0.25em; font-weight:normal;\n"
"	border-style:solid;\n"
"	border-width:0px;\n"
"	border-radius:2px;\n"
" }\n"
"\n"
"QPushButton:checked { \n"
"  background-color:#6699ff;\n"
"}"));
        tuneButton->setCheckable(true);
        tuneButton->setFlat(false);

        gridLayout_8->addWidget(tuneButton, 2, 2, 1, 1);

        modeButton = new QPushButton(buttonGrid);
        modeButton->setObjectName("modeButton");
        modeButton->setEnabled(true);
        sizePolicy6.setHeightForWidth(modeButton->sizePolicy().hasHeightForWidth());
        modeButton->setSizePolicy(sizePolicy6);
        modeButton->setMinimumSize(QSize(0, 30));
        modeButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setBold(true);
        modeButton->setFont(font3);
        modeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding:0.25em 0.25em; font-weight:bold;\n"
"border-style:solid;\n"
"border-width:0px;\n"
"border-radius:2px;\n"
"background-color:#6699ff;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"background-color:#6699ff;\n"
"}"));
        modeButton->setCheckable(true);
        modeButton->setFlat(false);

        gridLayout_8->addWidget(modeButton, 1, 2, 1, 1);

        spotButton = new QPushButton(buttonGrid);
        spotButton->setObjectName("spotButton");
        spotButton->setEnabled(true);
        sizePolicy6.setHeightForWidth(spotButton->sizePolicy().hasHeightForWidth());
        spotButton->setSizePolicy(sizePolicy6);
        spotButton->setMinimumSize(QSize(0, 30));
        spotButton->setMaximumSize(QSize(16777215, 16777215));
        spotButton->setFont(font2);
        spotButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color:lightgray;\n"
"        padding:0.25em 0.25em; font-weight:normal;\n"
"        border-style:solid;\n"
"        border-width:0px;\n"
"        border-radius:2px;\n"
" }\n"
"\n"
"QPushButton:checked {\n"
"  background-color:#6699ff;\n"
"}"));
        spotButton->setCheckable(true);
        spotButton->setFlat(false);

        gridLayout_8->addWidget(spotButton, 2, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        gridLayout_8->addItem(verticalSpacer_7, 0, 0, 1, 3);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        gridLayout_8->addItem(verticalSpacer_8, 3, 0, 1, 3);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(3, 1);
        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 1);
        gridLayout_8->setColumnStretch(2, 1);

        horizontalLayout_17->addWidget(buttonGrid);


        horizontalLayout_16->addWidget(logWidget);

        mainSplitter->addWidget(logHorizontalWidget);
        textHorizontalSplitter = new QSplitter(mainSplitter);
        textHorizontalSplitter->setObjectName("textHorizontalSplitter");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(4);
        sizePolicy7.setHeightForWidth(textHorizontalSplitter->sizePolicy().hasHeightForWidth());
        textHorizontalSplitter->setSizePolicy(sizePolicy7);
        textHorizontalSplitter->setMinimumSize(QSize(0, 75));
        textHorizontalSplitter->setOrientation(Qt::Orientation::Horizontal);
        textHorizontalSplitter->setHandleWidth(6);
        tableWidgetRXAll = new QTableWidget(textHorizontalSplitter);
        if (tableWidgetRXAll->columnCount() < 6)
            tableWidgetRXAll->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRXAll->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetRXAll->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetRXAll->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetRXAll->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetRXAll->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetRXAll->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetRXAll->setObjectName("tableWidgetRXAll");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy8.setHorizontalStretch(6);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(tableWidgetRXAll->sizePolicy().hasHeightForWidth());
        tableWidgetRXAll->setSizePolicy(sizePolicy8);
        QFont font4;
        font4.setPointSize(12);
        tableWidgetRXAll->setFont(font4);
        tableWidgetRXAll->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        tableWidgetRXAll->setAutoScroll(false);
        tableWidgetRXAll->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidgetRXAll->setProperty("showDropIndicator", QVariant(false));
        tableWidgetRXAll->setDragDropOverwriteMode(false);
        tableWidgetRXAll->setAlternatingRowColors(true);
        tableWidgetRXAll->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidgetRXAll->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidgetRXAll->setTextElideMode(Qt::TextElideMode::ElideLeft);
        tableWidgetRXAll->setGridStyle(Qt::PenStyle::DotLine);
        tableWidgetRXAll->setSortingEnabled(false);
        tableWidgetRXAll->setWordWrap(false);
        textHorizontalSplitter->addWidget(tableWidgetRXAll);
        tableWidgetRXAll->horizontalHeader()->setVisible(false);
        tableWidgetRXAll->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetRXAll->horizontalHeader()->setMinimumSectionSize(20);
        tableWidgetRXAll->horizontalHeader()->setDefaultSectionSize(30);
        tableWidgetRXAll->horizontalHeader()->setHighlightSections(false);
        tableWidgetRXAll->horizontalHeader()->setStretchLastSection(true);
        tableWidgetRXAll->verticalHeader()->setVisible(false);
        textVerticalSplitter = new QSplitter(textHorizontalSplitter);
        textVerticalSplitter->setObjectName("textVerticalSplitter");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy9.setHorizontalStretch(10);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(textVerticalSplitter->sizePolicy().hasHeightForWidth());
        textVerticalSplitter->setSizePolicy(sizePolicy9);
        textVerticalSplitter->setOrientation(Qt::Orientation::Vertical);
        textVerticalSplitter->setHandleWidth(6);
        textEditRX = new QTextEdit(textVerticalSplitter);
        textEditRX->setObjectName("textEditRX");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy10.setHorizontalStretch(4);
        sizePolicy10.setVerticalStretch(2);
        sizePolicy10.setHeightForWidth(textEditRX->sizePolicy().hasHeightForWidth());
        textEditRX->setSizePolicy(sizePolicy10);
        QFont font5;
        font5.setPointSize(14);
        font5.setItalic(false);
        textEditRX->setFont(font5);
        textEditRX->setAutoFillBackground(true);
        textEditRX->setStyleSheet(QString::fromUtf8("QTextEdit { background-color:#ffeaa7; }"));
        textEditRX->setUndoRedoEnabled(false);
        textEditRX->setReadOnly(true);
        textVerticalSplitter->addWidget(textEditRX);
        extFreeTextMsgEdit = new TransmitTextEdit(textVerticalSplitter);
        extFreeTextMsgEdit->setObjectName("extFreeTextMsgEdit");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy11.setHorizontalStretch(4);
        sizePolicy11.setVerticalStretch(1);
        sizePolicy11.setHeightForWidth(extFreeTextMsgEdit->sizePolicy().hasHeightForWidth());
        extFreeTextMsgEdit->setSizePolicy(sizePolicy11);
        extFreeTextMsgEdit->setFont(font);
        extFreeTextMsgEdit->setStyleSheet(QString::fromUtf8("QTextEdit { background:rgb(255, 255, 255); }\n"
"\n"
"QTextEdit[readOnly=\"true\"] { \n"
"	background:#EEE;\n"
"	font-style:italic;\n"
"}\n"
"\n"
"QTextEdit[transmitting=\"true\"] { \n"
"	background:#EEE;\n"
"	font-style:italic;\n"
"}"));
        extFreeTextMsgEdit->setAcceptRichText(false);
        textVerticalSplitter->addWidget(extFreeTextMsgEdit);
        textHorizontalSplitter->addWidget(textVerticalSplitter);
        callsVerticalSplitter = new QSplitter(textHorizontalSplitter);
        callsVerticalSplitter->setObjectName("callsVerticalSplitter");
        sizePolicy9.setHeightForWidth(callsVerticalSplitter->sizePolicy().hasHeightForWidth());
        callsVerticalSplitter->setSizePolicy(sizePolicy9);
        callsVerticalSplitter->setOrientation(Qt::Orientation::Vertical);
        callsVerticalSplitter->setHandleWidth(6);
        callDetailTextBrowser = new QTextBrowser(callsVerticalSplitter);
        callDetailTextBrowser->setObjectName("callDetailTextBrowser");
        callDetailTextBrowser->setVisible(false);
        callDetailTextBrowser->setFrameShape(QFrame::Shape::Box);
        callsVerticalSplitter->addWidget(callDetailTextBrowser);
        tableWidgetCalls = new QTableWidget(callsVerticalSplitter);
        if (tableWidgetCalls->columnCount() < 13)
            tableWidgetCalls->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(10, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(11, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetCalls->setHorizontalHeaderItem(12, __qtablewidgetitem18);
        tableWidgetCalls->setObjectName("tableWidgetCalls");
        tableWidgetCalls->setFont(font4);
        tableWidgetCalls->setAutoScroll(false);
        tableWidgetCalls->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidgetCalls->setProperty("showDropIndicator", QVariant(false));
        tableWidgetCalls->setAlternatingRowColors(true);
        tableWidgetCalls->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidgetCalls->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidgetCalls->setTextElideMode(Qt::TextElideMode::ElideRight);
        tableWidgetCalls->setGridStyle(Qt::PenStyle::DotLine);
        tableWidgetCalls->setWordWrap(false);
        callsVerticalSplitter->addWidget(tableWidgetCalls);
        tableWidgetCalls->horizontalHeader()->setVisible(false);
        tableWidgetCalls->horizontalHeader()->setMinimumSectionSize(20);
        tableWidgetCalls->horizontalHeader()->setDefaultSectionSize(30);
        tableWidgetCalls->horizontalHeader()->setHighlightSections(false);
        tableWidgetCalls->horizontalHeader()->setStretchLastSection(true);
        tableWidgetCalls->verticalHeader()->setVisible(false);
        textHorizontalSplitter->addWidget(callsVerticalSplitter);
        mainSplitter->addWidget(textHorizontalSplitter);
        macroHorizonalWidget = new QWidget(mainSplitter);
        macroHorizonalWidget->setObjectName("macroHorizonalWidget");
        sizePolicy6.setHeightForWidth(macroHorizonalWidget->sizePolicy().hasHeightForWidth());
        macroHorizonalWidget->setSizePolicy(sizePolicy6);
        macroHorizonalWidget->setMinimumSize(QSize(0, 40));
        macroHorizonalWidget->setMaximumSize(QSize(16777215, 30));
        gridLayout = new QGridLayout(macroHorizonalWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        queryButton = new QPushButton(macroHorizonalWidget);
        queryButton->setObjectName("queryButton");
        queryButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(queryButton, 1, 13, 1, 1);

        snrMacroButton = new QPushButton(macroHorizonalWidget);
        snrMacroButton->setObjectName("snrMacroButton");
        snrMacroButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(snrMacroButton, 1, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 1, 7, 1, 1);

        hbMacroButton = new QPushButton(macroHorizonalWidget);
        hbMacroButton->setObjectName("hbMacroButton");
        hbMacroButton->setMinimumSize(QSize(0, 30));
        hbMacroButton->setAutoFillBackground(true);
        hbMacroButton->setStyleSheet(QString::fromUtf8("QPushButton:checked { \n"
"  font-weight:bold;\n"
"  color:black;\n"
"}"));
        hbMacroButton->setCheckable(true);

        gridLayout->addWidget(hbMacroButton, 1, 0, 1, 1);

        macrosMacroButton = new QPushButton(macroHorizonalWidget);
        macrosMacroButton->setObjectName("macrosMacroButton");
        macrosMacroButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(macrosMacroButton, 1, 8, 1, 1);

        infoMacroButton = new QPushButton(macroHorizonalWidget);
        infoMacroButton->setObjectName("infoMacroButton");
        infoMacroButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(infoMacroButton, 1, 5, 1, 1);

        cqMacroButton = new QPushButton(macroHorizonalWidget);
        cqMacroButton->setObjectName("cqMacroButton");
        cqMacroButton->setMinimumSize(QSize(0, 30));
        cqMacroButton->setAutoFillBackground(true);
        cqMacroButton->setStyleSheet(QString::fromUtf8("QPushButton:checked { \n"
"  font-weight:bold;\n"
"  color:black;\n"
"}"));
        cqMacroButton->setCheckable(true);
        cqMacroButton->setFlat(false);

        gridLayout->addWidget(cqMacroButton, 1, 1, 1, 1);

        startTxButton = new QPushButton(macroHorizonalWidget);
        startTxButton->setObjectName("startTxButton");
        startTxButton->setEnabled(false);
        startTxButton->setMinimumSize(QSize(0, 30));
        startTxButton->setAutoFillBackground(false);
        startTxButton->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"background-color: #22FF22;\n"
"color:#222;\n"
"}\n"
"QPushButton[transmitting=\"true\"]{\n"
"background:#FF2222;\n"
"color:#222;\n"
"}"));
        startTxButton->setCheckable(true);

        gridLayout->addWidget(startTxButton, 1, 17, 1, 1);

        deselectButton = new QPushButton(macroHorizonalWidget);
        deselectButton->setObjectName("deselectButton");
        sizePolicy4.setHeightForWidth(deselectButton->sizePolicy().hasHeightForWidth());
        deselectButton->setSizePolicy(sizePolicy4);
        deselectButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(deselectButton, 1, 14, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 16, 1, 1);

        horizontalSpacerSavedDirected = new QSpacerItem(20, 10, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacerSavedDirected, 1, 9, 1, 1);

        replyMacroButton = new QPushButton(macroHorizonalWidget);
        replyMacroButton->setObjectName("replyMacroButton");
        replyMacroButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(replyMacroButton, 1, 3, 1, 1);

        stopTxButton = new QPushButton(macroHorizonalWidget);
        stopTxButton->setObjectName("stopTxButton");
        stopTxButton->setMinimumSize(QSize(75, 30));

        gridLayout->addWidget(stopTxButton, 1, 18, 1, 1);

        statusMacroButton = new QPushButton(macroHorizonalWidget);
        statusMacroButton->setObjectName("statusMacroButton");
        statusMacroButton->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(statusMacroButton, 1, 6, 1, 1);

        mainSplitter->addWidget(macroHorizonalWidget);
        frame_5 = new QFrame(mainSplitter);
        frame_5->setObjectName("frame_5");
        QSizePolicy sizePolicy12(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy12);
        frame_5->setMinimumSize(QSize(0, 10));
        frame_5->setFrameShape(QFrame::Shape::NoFrame);
        frame_5->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_14 = new QVBoxLayout(frame_5);
        verticalLayout_14->setSpacing(4);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        bandHorizontalWidget = new QWidget(frame_5);
        bandHorizontalWidget->setObjectName("bandHorizontalWidget");
        sizePolicy.setHeightForWidth(bandHorizontalWidget->sizePolicy().hasHeightForWidth());
        bandHorizontalWidget->setSizePolicy(sizePolicy);
        horizontalLayoutBand = new QHBoxLayout(bandHorizontalWidget);
        horizontalLayoutBand->setSpacing(0);
        horizontalLayoutBand->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutBand->setObjectName("horizontalLayoutBand");
        horizontalLayoutBand->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(bandHorizontalWidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy13(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy13);
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget { background-color:black; }\n"
""));
        verticalLayout_11 = new QVBoxLayout(widget_3);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        readFreq = new QPushButton(widget_3);
        readFreq->setObjectName("readFreq");
        readFreq->setEnabled(false);
        QSizePolicy sizePolicy14(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(readFreq->sizePolicy().hasHeightForWidth());
        readFreq->setSizePolicy(sizePolicy14);
        readFreq->setMinimumSize(QSize(40, 30));
        readFreq->setMaximumSize(QSize(16777215, 16777215));
        readFreq->setVisible(true);
        readFreq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-family: helvetica;\n"
"font-size: 9pt;\n"
"font-weight: bold;\n"
"background-color: white;\n"
"color: black;\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-color: gray;\n"
"min-width:40px;\n"
"min-height:30px;\n"
"}\n"
"QPushButton[state=\"error\"] {\n"
"background-color: red;\n"
"}\n"
"QPushButton[state=\"warning\"] {\n"
"background-color: orange;\n"
"}\n"
"QPushButton[state=\"ok\"] {\n"
"background-color: #22ff22;\n"
"}"));

        verticalLayout_11->addWidget(readFreq);

        signal_meter_widget = new SignalMeter(widget_3);
        signal_meter_widget->setObjectName("signal_meter_widget");
        QSizePolicy sizePolicy15(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy15.setHorizontalStretch(1);
        sizePolicy15.setVerticalStretch(1);
        sizePolicy15.setHeightForWidth(signal_meter_widget->sizePolicy().hasHeightForWidth());
        signal_meter_widget->setSizePolicy(sizePolicy15);
        signal_meter_widget->setMinimumSize(QSize(75, 1));
        signal_meter_widget->setMaximumSize(QSize(16777215, 16777215));
        signal_meter_widget->setStyleSheet(QString::fromUtf8("QLabel { color: white }"));

        verticalLayout_11->addWidget(signal_meter_widget);


        horizontalLayoutBand->addWidget(widget_3);

        outAttenuation = new AttenuationSlider(bandHorizontalWidget);
        outAttenuation->setObjectName("outAttenuation");
        QSizePolicy sizePolicy16(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy16.setHorizontalStretch(1);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(outAttenuation->sizePolicy().hasHeightForWidth());
        outAttenuation->setSizePolicy(sizePolicy16);
        outAttenuation->setMinimumSize(QSize(48, 1));
        QFont font6;
        font6.setPointSize(16);
        outAttenuation->setFont(font6);
        outAttenuation->setMaximum(450);
        outAttenuation->setValue(100);
        outAttenuation->setOrientation(Qt::Orientation::Vertical);
        outAttenuation->setInvertedAppearance(true);
        outAttenuation->setInvertedControls(true);
        outAttenuation->setTickPosition(QSlider::TickPosition::TicksBothSides);
        outAttenuation->setTickInterval(50);

        horizontalLayoutBand->addWidget(outAttenuation);


        verticalLayout_14->addWidget(bandHorizontalWidget);

        mainSplitter->addWidget(frame_5);

        verticalLayout_6->addWidget(mainSplitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 994, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuConfig = new QMenu(menuBar);
        menuConfig->setObjectName("menuConfig");
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName("menuWindow");
        menu_Log = new QMenu(menuBar);
        menu_Log->setObjectName("menu_Log");
        menuControl = new QMenu(menuBar);
        menuControl->setObjectName("menuControl");
        menuFocus = new QMenu(menuControl);
        menuFocus->setObjectName("menuFocus");
        menuClear_Activity = new QMenu(menuControl);
        menuClear_Activity->setObjectName("menuClear_Activity");
        menuModeJS8 = new QMenu(menuBar);
        menuModeJS8->setObjectName("menuModeJS8");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConfig->menuAction());
        menuBar->addAction(menuModeJS8->menuAction());
        menuBar->addAction(menu_Log->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuControl->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionCopyright_Notice);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_for_Updates);
        menuHelp->addAction(actionAbout);
        menuWindow->addAction(actionShow_Frequency_Clock);
        menuWindow->addSeparator();
        menuWindow->addAction(actionShow_Band_Activity);
        menuWindow->addAction(actionShow_Band_Heartbeats_and_ACKs);
        menuWindow->addAction(actionShow_Band_Activity_Columns);
        menuWindow->addAction(actionSort_Band_Activity);
        menuWindow->addSeparator();
        menuWindow->addAction(actionShow_Call_Activity);
        menuWindow->addAction(actionShow_Call_Activity_Columns);
        menuWindow->addAction(actionSort_Call_Activity);
        menuWindow->addSeparator();
        menuWindow->addAction(actionShow_Waterfall);
        menuWindow->addAction(actionShow_Waterfall_Controls);
        menuWindow->addAction(actionShow_Waterfall_Time_Drift_Controls);
        menuWindow->addSeparator();
        menuWindow->addAction(actionShow_Fullscreen);
        menuWindow->addAction(actionShow_Statusbar);
        menuWindow->addAction(actionShow_Tooltips);
        menuWindow->addSeparator();
        menuWindow->addAction(actionShow_Message_Inbox);
        menuWindow->addSeparator();
        menuWindow->addAction(actionReset_Window_Sizes);
        menu_Log->addAction(actionAdd_Log_Entry);
        menu_Log->addSeparator();
        menu_Log->addAction(actionOpen_log_directory);
        menu_Log->addSeparator();
        menu_Log->addAction(actionErase_ALL_TXT);
        menu_Log->addAction(actionErase_js8call_log_adi);
        menuControl->addAction(actionEnable_Monitor_RX);
        menuControl->addAction(actionEnable_Transmitter_TX);
        menuControl->addAction(actionEnable_Reporting_SPOT);
        menuControl->addAction(actionEnable_Tuning_Tone_TUNE);
        menuControl->addSeparator();
        menuControl->addAction(actionSetFrequency);
        menuControl->addAction(actionSetOffset);
        menuControl->addAction(menuFocus->menuAction());
        menuControl->addSeparator();
        menuControl->addAction(actionHeartbeat);
        menuControl->addAction(actionCQ);
        menuControl->addSeparator();
        menuControl->addAction(menuClear_Activity->menuAction());
        menuFocus->addAction(actionFocus_Message_Receive_Area);
        menuFocus->addAction(actionFocus_Message_Reply_Area);
        menuFocus->addAction(actionFocus_Band_Activity_Table);
        menuFocus->addAction(actionFocus_Call_Activity_Table);
        menuClear_Activity->addAction(actionClear_All_Activity);
        menuClear_Activity->addSeparator();
        menuClear_Activity->addAction(actionClear_Band_Activity);
        menuClear_Activity->addAction(actionClear_RX_Activity);
        menuClear_Activity->addAction(actionClear_Call_Activity);
        menuModeJS8->addAction(actionModeJS8Slow);
        menuModeJS8->addAction(actionModeJS8Normal);
        menuModeJS8->addAction(actionModeJS8Fast);
        menuModeJS8->addAction(actionModeJS8Turbo);
        menuModeJS8->addAction(actionModeJS8Ultra);
        menuModeJS8->addSeparator();
        menuModeJS8->addAction(actionModeMultiDecoder);
        menuModeJS8->addSeparator();
        menuModeJS8->addAction(actionModeAutoreply);
        menuModeJS8->addAction(actionModeJS8HB);
        menuModeJS8->addAction(actionHeartbeatAcknowledgements);
        menuModeJS8->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "JS8Call", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About &JS8Call", nullptr));
        actionErase_ALL_TXT->setText(QCoreApplication::translate("MainWindow", "&Erase ALL.TXT", nullptr));
        actionErase_js8call_log_adi->setText(QCoreApplication::translate("MainWindow", "Erase &js8call_log.adi", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "&Settings...", nullptr));
#if QT_CONFIG(shortcut)
        actionSettings->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_log_directory->setText(QCoreApplication::translate("MainWindow", "&Open Log Directory...", nullptr));
        actionCopyright_Notice->setText(QCoreApplication::translate("MainWindow", "&Copyright notice", nullptr));
        actionShow_Band_Activity->setText(QCoreApplication::translate("MainWindow", "Show &Band Activity", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Band_Activity->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Call_Activity->setText(QCoreApplication::translate("MainWindow", "Show &Call Activity", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Call_Activity->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Waterfall->setText(QCoreApplication::translate("MainWindow", "Show &Waterfall", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Waterfall->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset_Window_Sizes->setText(QCoreApplication::translate("MainWindow", "Reset Frame Si&zes", nullptr));
        actionSort_Band_Activity->setText(QCoreApplication::translate("MainWindow", "Sort Band Activity By...", nullptr));
        actionSort_Call_Activity->setText(QCoreApplication::translate("MainWindow", "Sort Call Activity By...", nullptr));
        actionShow_Waterfall_Controls->setText(QCoreApplication::translate("MainWindow", "Show Wa&terfall Controls", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Waterfall_Controls->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Band_Activity_Columns->setText(QCoreApplication::translate("MainWindow", "Show Band Activity Columns...", nullptr));
        actionShow_Call_Activity_Columns->setText(QCoreApplication::translate("MainWindow", "Show Call Activity Columns...", nullptr));
        actionAdd_Log_Entry->setText(QCoreApplication::translate("MainWindow", "&Add Log Entry...", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd_Log_Entry->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Frequency_Clock->setText(QCoreApplication::translate("MainWindow", "Show &Frequency && Clock", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Frequency_Clock->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Tooltips->setText(QCoreApplication::translate("MainWindow", "Show Toolti&ps", nullptr));
        actionShow_Fullscreen->setText(QCoreApplication::translate("MainWindow", "Show Full&screen", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Fullscreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHeartbeat->setText(QCoreApplication::translate("MainWindow", "Send &Heartbeat...", nullptr));
        actionCQ->setText(QCoreApplication::translate("MainWindow", "Send C&Q Message...", nullptr));
        actionShow_Band_Heartbeats_and_ACKs->setText(QCoreApplication::translate("MainWindow", "Show Band &Heartbeats and ACKs", nullptr));
        actionShow_Statusbar->setText(QCoreApplication::translate("MainWindow", "Show Statusba&r", nullptr));
        actionSetFrequency->setText(QCoreApplication::translate("MainWindow", "Set &Frequency...", nullptr));
        actionSetOffset->setText(QCoreApplication::translate("MainWindow", "Set &Offset...", nullptr));
        actionShow_Message_Inbox->setText(QCoreApplication::translate("MainWindow", "Show Message &Inbox...", nullptr));
        actionCheck_for_Updates->setText(QCoreApplication::translate("MainWindow", "Check for &Updates", nullptr));
        actionFocus_Message_Reply_Area->setText(QCoreApplication::translate("MainWindow", "Message Reply Area", nullptr));
#if QT_CONFIG(shortcut)
        actionFocus_Message_Reply_Area->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFocus_Band_Activity_Table->setText(QCoreApplication::translate("MainWindow", "Band Activity Table", nullptr));
#if QT_CONFIG(shortcut)
        actionFocus_Band_Activity_Table->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFocus_Call_Activity_Table->setText(QCoreApplication::translate("MainWindow", "Call Activity Table", nullptr));
#if QT_CONFIG(shortcut)
        actionFocus_Call_Activity_Table->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionModeJS8Normal->setText(QCoreApplication::translate("MainWindow", "JS8 (&Normal, 15s, 50Hz, ~16 WPM)", nullptr));
        actionModeJS8Fast->setText(QCoreApplication::translate("MainWindow", "JS8 (&Fast, 10s, 80Hz, ~24 WPM)", nullptr));
        actionModeJS8Turbo->setText(QCoreApplication::translate("MainWindow", "JS8 (&Turbo, 6s, 160Hz, ~40 WPM)", nullptr));
        actionModeJS8Ultra->setText(QCoreApplication::translate("MainWindow", "JS8 (&Ultra, 4s, 250Hz, ~60WPM)", nullptr));
        actionModeJS8HB->setText(QCoreApplication::translate("MainWindow", "Enable Heartbeat Networking (&HB)", nullptr));
        actionHeartbeatAcknowledgements->setText(QCoreApplication::translate("MainWindow", "Enable Heartbeat Acknowledgments (AC&K)", nullptr));
        actionFocus_Message_Receive_Area->setText(QCoreApplication::translate("MainWindow", "Message Receive Area", nullptr));
#if QT_CONFIG(shortcut)
        actionFocus_Message_Receive_Area->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionModeMultiDecoder->setText(QCoreApplication::translate("MainWindow", "Enable Simultaneous Decoding of All Speeds (&MULTI)", nullptr));
        actionModeAutoreply->setText(QCoreApplication::translate("MainWindow", "Enable Autoreply (&AUTO)", nullptr));
        actionModeJS8Slow->setText(QCoreApplication::translate("MainWindow", "JS8 (&Slow, 30s, 25Hz, ~8 WPM)", nullptr));
        actionEnable_Monitor_RX->setText(QCoreApplication::translate("MainWindow", "Enable Receiver (&RX)", nullptr));
        actionEnable_Transmitter_TX->setText(QCoreApplication::translate("MainWindow", "Enable Transmitter (&TX)", nullptr));
        actionEnable_Reporting_SPOT->setText(QCoreApplication::translate("MainWindow", "Enable Reporting (&SPOT)", nullptr));
        actionEnable_Tuning_Tone_TUNE->setText(QCoreApplication::translate("MainWindow", "Enable Tuning Tone (T&UNE)", nullptr));
        actionShow_Waterfall_Time_Drift_Controls->setText(QCoreApplication::translate("MainWindow", "Show Time &Drift Controls...", nullptr));
        actionClear_All_Activity->setText(QCoreApplication::translate("MainWindow", "Clear &All Activity", nullptr));
        actionClear_Band_Activity->setText(QCoreApplication::translate("MainWindow", "Clear &Band Activity", nullptr));
        actionClear_RX_Activity->setText(QCoreApplication::translate("MainWindow", "Clear &RX Activity", nullptr));
        actionClear_Call_Activity->setText(QCoreApplication::translate("MainWindow", "Clear &Call Activity", nullptr));
#if QT_CONFIG(tooltip)
        currentFreq->setToolTip(QCoreApplication::translate("MainWindow", "Set Current Frequency", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dialFreqUpButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Adjust VFO frequency up</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dialFreqDownButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Adjust VFO frequency down</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labDialFreqOffset->setToolTip(QCoreApplication::translate("MainWindow", "Set Current Frequency Offset", nullptr));
#endif // QT_CONFIG(tooltip)
        labDialFreqOffset->setText(QCoreApplication::translate("MainWindow", "1500 Hz", nullptr));
#if QT_CONFIG(tooltip)
        labCallsign->setToolTip(QCoreApplication::translate("MainWindow", "Set Callsign and Grid", nullptr));
#endif // QT_CONFIG(tooltip)
        labCallsign->setText(QCoreApplication::translate("MainWindow", "Callsign", nullptr));
        labUTC->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">01:23:45<br/>2015 Jun 17 </span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        monitorTxButton->setToolTip(QCoreApplication::translate("MainWindow", "Enable or disable the transmitter", nullptr));
#endif // QT_CONFIG(tooltip)
        monitorTxButton->setText(QCoreApplication::translate("MainWindow", "TX", nullptr));
#if QT_CONFIG(tooltip)
        monitorButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enable or disable the receiver</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        monitorButton->setText(QCoreApplication::translate("MainWindow", "RX", nullptr));
#if QT_CONFIG(tooltip)
        logQSOButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Insert a new entry into the log</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        logQSOButton->setText(QCoreApplication::translate("MainWindow", "LOG", nullptr));
#if QT_CONFIG(tooltip)
        tuneButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Transmit a tuning tone</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tuneButton->setText(QCoreApplication::translate("MainWindow", "TUNE", nullptr));
#if QT_CONFIG(tooltip)
        modeButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Set the JS8 mode settings</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        modeButton->setText(QCoreApplication::translate("MainWindow", "JS8", nullptr));
#if QT_CONFIG(tooltip)
        spotButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Spot to reporting networks</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spotButton->setText(QCoreApplication::translate("MainWindow", "SPOT", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetRXAll->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Offset", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetRXAll->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetRXAll->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "SNR", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetRXAll->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Time Delta", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetRXAll->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetRXAll->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Message(s)", nullptr));
#if QT_CONFIG(tooltip)
        tableWidgetRXAll->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Received band activity is displayed with time since last heard, SNR, and the text received for each frequency offset in the passband.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        textEditRX->setPlaceholderText(QCoreApplication::translate("MainWindow", "INCOMING AND OUTGOING MESSAGES WILL APPEAR HERE.", nullptr));
        extFreeTextMsgEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "TYPE YOUR OUTGOING MESSAGES HERE.", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetCalls->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\342\230\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetCalls->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Callsigns", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetCalls->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetCalls->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "SNR", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetCalls->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Offset", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetCalls->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Time Delta", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetCalls->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetCalls->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Grid", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetCalls->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Distance", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetCalls->horizontalHeaderItem(9);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem15->setToolTip(QCoreApplication::translate("MainWindow", "Azimuth", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetCalls->horizontalHeaderItem(10);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "\342\234\223", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem16->setToolTip(QCoreApplication::translate("MainWindow", "Worked Before", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetCalls->horizontalHeaderItem(11);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetCalls->horizontalHeaderItem(12);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
#if QT_CONFIG(tooltip)
        tableWidgetCalls->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Received callsigns are displayed with time since last heard, SNR, and grid locator (if reported).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        queryButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Send a directed message to another station</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        queryButton->setText(QCoreApplication::translate("MainWindow", "Directed", nullptr));
#if QT_CONFIG(tooltip)
        snrMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Send an signal report</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        snrMacroButton->setText(QCoreApplication::translate("MainWindow", "SNR", nullptr));
#if QT_CONFIG(tooltip)
        hbMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\">Send a Heartbeat message</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        hbMacroButton->setText(QCoreApplication::translate("MainWindow", "HB", nullptr));
#if QT_CONFIG(tooltip)
        macrosMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Send a saved message</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        macrosMacroButton->setText(QCoreApplication::translate("MainWindow", "Saved", nullptr));
#if QT_CONFIG(tooltip)
        infoMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Send your station information message</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        infoMacroButton->setText(QCoreApplication::translate("MainWindow", "INFO", nullptr));
#if QT_CONFIG(tooltip)
        cqMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Send a CQ message</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cqMacroButton->setText(QCoreApplication::translate("MainWindow", "CQ", nullptr));
#if QT_CONFIG(tooltip)
        startTxButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Start transmitting</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        startTxButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
#if QT_CONFIG(tooltip)
        deselectButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Deselect the current callsign for directed messaging</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        deselectButton->setText(QCoreApplication::translate("MainWindow", "Deselect", nullptr));
#if QT_CONFIG(tooltip)
        replyMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Reply to a CQ</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        replyMacroButton->setText(QCoreApplication::translate("MainWindow", "REPLY", nullptr));
#if QT_CONFIG(tooltip)
        stopTxButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Stop transmitting</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        stopTxButton->setText(QCoreApplication::translate("MainWindow", "Halt", nullptr));
#if QT_CONFIG(tooltip)
        statusMacroButton->setToolTip(QCoreApplication::translate("MainWindow", "Send your station status message", nullptr));
#endif // QT_CONFIG(tooltip)
        statusMacroButton->setText(QCoreApplication::translate("MainWindow", "STATUS", nullptr));
#if QT_CONFIG(tooltip)
        readFreq->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If orange or red there has been a rig control failure, click to reset and read the dial frequency.  S implies split mode.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        readFreq->setText(QCoreApplication::translate("MainWindow", "CAT", nullptr));
#if QT_CONFIG(tooltip)
        signal_meter_widget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>30dB recommended when only noise present<br/>Green when good<br/>Red when clipping may occur<br/>Yellow when too low</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        outAttenuation->setToolTip(QCoreApplication::translate("MainWindow", "Adjust Tx audio level", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuConfig->setTitle(QCoreApplication::translate("MainWindow", "&Configurations", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menu_Log->setTitle(QCoreApplication::translate("MainWindow", "&Log", nullptr));
        menuControl->setTitle(QCoreApplication::translate("MainWindow", "C&ontrol", nullptr));
        menuFocus->setTitle(QCoreApplication::translate("MainWindow", "Set Fo&cus...", nullptr));
        menuClear_Activity->setTitle(QCoreApplication::translate("MainWindow", "Clear &Activity...", nullptr));
        menuModeJS8->setTitle(QCoreApplication::translate("MainWindow", "&Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
