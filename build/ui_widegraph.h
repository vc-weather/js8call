/********************************************************************************
** Form generated from reading UI file 'widegraph.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDEGRAPH_H
#define UI_WIDEGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_WideGraph
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    CPlotter *widePlot;
    QWidget *controls_widget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *controlTab;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_11;
    QSpinBox *offsetSpinBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_9;
    QPushButton *qsyPushButton;
    QSpinBox *centerSpinBox;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout;
    QCheckBox *filterCheckBox;
    QPushButton *filterCenterSyncButton;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *filterCenter;
    QSpinBox *filterCenterSpinBox;
    QDial *filterCenterDial;
    QVBoxLayout *filterWidth;
    QSpinBox *filterWidthSpinBox;
    QDial *filterWidthDial;
    QSpacerItem *verticalSpacer_3;
    QWidget *displayTab;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_12;
    QSpinBox *fStartSpinBox;
    QSpinBox *bppSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QComboBox *paletteComboBox;
    QPushButton *adjust_palette_push_button;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QSpinBox *fpsSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *waterfallAvgSpinBox;
    QCheckBox *cbFlatten;
    QComboBox *spec2dComboBox;
    QSpinBox *smoSpinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label;
    QSlider *gainSlider;
    QLabel *label_2;
    QSlider *zeroSlider;
    QCheckBox *decodeAttemptCheckBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QSpinBox *sbPercent2dPlot;
    QLabel *label_4;
    QSlider *gain2dSlider;
    QLabel *label_5;
    QSlider *zero2dSlider;
    QGroupBox *groupBox_9;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QSpinBox *filterOpacitySpinBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *timingTab;
    QGridLayout *gridLayout_12;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QSpinBox *driftSpinBox;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_13;
    QPushButton *autoDriftButton;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *autoDriftAutoStopCheckBox;
    QSpinBox *autoDriftStopSpinBox;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_14;
    QPushButton *driftSyncMinuteButton;
    QPushButton *driftSyncEndButton;
    QPushButton *driftSyncButton;
    QPushButton *driftSyncResetButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WideGraph)
    {
        if (WideGraph->objectName().isEmpty())
            WideGraph->setObjectName("WideGraph");
        WideGraph->resize(1166, 211);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WideGraph->sizePolicy().hasHeightForWidth());
        WideGraph->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(WideGraph);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(WideGraph);
        splitter->setObjectName("splitter");
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setVisible(true);
        splitter->setAutoFillBackground(true);
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(6);
        splitter->setChildrenCollapsible(false);
        widePlot = new CPlotter(splitter);
        widePlot->setObjectName("widePlot");
        sizePolicy.setHeightForWidth(widePlot->sizePolicy().hasHeightForWidth());
        widePlot->setSizePolicy(sizePolicy);
        widePlot->setMinimumSize(QSize(400, 10));
        splitter->addWidget(widePlot);
        controls_widget = new QWidget(splitter);
        controls_widget->setObjectName("controls_widget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(controls_widget->sizePolicy().hasHeightForWidth());
        controls_widget->setSizePolicy(sizePolicy1);
        controls_widget->setMinimumSize(QSize(100, 0));
        controls_widget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(controls_widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(controls_widget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tabWidget->setTabBarAutoHide(false);
        controlTab = new QWidget();
        controlTab->setObjectName("controlTab");
        verticalLayout_2 = new QVBoxLayout(controlTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        scrollArea = new QScrollArea(controlTab);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 499, 377));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_7->setObjectName("groupBox_7");
        verticalLayout_11 = new QVBoxLayout(groupBox_7);
        verticalLayout_11->setObjectName("verticalLayout_11");
        offsetSpinBox = new QSpinBox(groupBox_7);
        offsetSpinBox->setObjectName("offsetSpinBox");
        offsetSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        offsetSpinBox->setMaximum(5000);
        offsetSpinBox->setSingleStep(1);
        offsetSpinBox->setValue(1500);

        verticalLayout_11->addWidget(offsetSpinBox);


        verticalLayout_8->addWidget(groupBox_7);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_9 = new QVBoxLayout(groupBox_5);
        verticalLayout_9->setObjectName("verticalLayout_9");
        qsyPushButton = new QPushButton(groupBox_5);
        qsyPushButton->setObjectName("qsyPushButton");
        qsyPushButton->setAutoDefault(false);

        verticalLayout_9->addWidget(qsyPushButton);

        centerSpinBox = new QSpinBox(groupBox_5);
        centerSpinBox->setObjectName("centerSpinBox");
        centerSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        centerSpinBox->setMinimum(500);
        centerSpinBox->setMaximum(5000);
        centerSpinBox->setValue(1500);

        verticalLayout_9->addWidget(centerSpinBox);


        verticalLayout_8->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_10 = new QVBoxLayout(groupBox_6);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        filterCheckBox = new QCheckBox(groupBox_6);
        filterCheckBox->setObjectName("filterCheckBox");

        horizontalLayout->addWidget(filterCheckBox);

        filterCenterSyncButton = new QPushButton(groupBox_6);
        filterCenterSyncButton->setObjectName("filterCenterSyncButton");
        filterCenterSyncButton->setEnabled(false);

        horizontalLayout->addWidget(filterCenterSyncButton);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        filterCenter = new QVBoxLayout();
        filterCenter->setObjectName("filterCenter");
        filterCenterSpinBox = new QSpinBox(groupBox_6);
        filterCenterSpinBox->setObjectName("filterCenterSpinBox");
        filterCenterSpinBox->setMinimum(120);
        filterCenterSpinBox->setMaximum(4880);

        filterCenter->addWidget(filterCenterSpinBox);

        filterCenterDial = new QDial(groupBox_6);
        filterCenterDial->setObjectName("filterCenterDial");
        filterCenterDial->setMinimum(120);
        filterCenterDial->setMaximum(4880);

        filterCenter->addWidget(filterCenterDial);


        horizontalLayout_6->addLayout(filterCenter);

        filterWidth = new QVBoxLayout();
        filterWidth->setObjectName("filterWidth");
        filterWidthSpinBox = new QSpinBox(groupBox_6);
        filterWidthSpinBox->setObjectName("filterWidthSpinBox");
        filterWidthSpinBox->setMinimum(120);
        filterWidthSpinBox->setMaximum(5000);

        filterWidth->addWidget(filterWidthSpinBox);

        filterWidthDial = new QDial(groupBox_6);
        filterWidthDial->setObjectName("filterWidthDial");
        filterWidthDial->setMinimum(120);
        filterWidthDial->setMaximum(5000);

        filterWidth->addWidget(filterWidthDial);


        horizontalLayout_6->addLayout(filterWidth);


        verticalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout_8->addWidget(groupBox_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);

        tabWidget->addTab(controlTab, QString());
        displayTab = new QWidget();
        displayTab->setObjectName("displayTab");
        verticalLayout_3 = new QVBoxLayout(displayTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        scrollArea_2 = new QScrollArea(displayTab);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 499, 762));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_8 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_8->setObjectName("groupBox_8");
        verticalLayout_12 = new QVBoxLayout(groupBox_8);
        verticalLayout_12->setObjectName("verticalLayout_12");
        fStartSpinBox = new QSpinBox(groupBox_8);
        fStartSpinBox->setObjectName("fStartSpinBox");
        fStartSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        fStartSpinBox->setMaximum(5000);
        fStartSpinBox->setSingleStep(100);
        fStartSpinBox->setValue(500);

        verticalLayout_12->addWidget(fStartSpinBox);

        bppSpinBox = new QSpinBox(groupBox_8);
        bppSpinBox->setObjectName("bppSpinBox");
        bppSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        bppSpinBox->setMinimum(1);
        bppSpinBox->setMaximum(1000);
        bppSpinBox->setSingleStep(1);
        bppSpinBox->setValue(5);

        verticalLayout_12->addWidget(bppSpinBox);


        verticalLayout_5->addWidget(groupBox_8);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        paletteComboBox = new QComboBox(groupBox_3);
        paletteComboBox->setObjectName("paletteComboBox");

        verticalLayout_6->addWidget(paletteComboBox);

        adjust_palette_push_button = new QPushButton(groupBox_3);
        adjust_palette_push_button->setObjectName("adjust_palette_push_button");
        adjust_palette_push_button->setAutoDefault(false);

        verticalLayout_6->addWidget(adjust_palette_push_button);


        verticalLayout_5->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        fpsSpinBox = new QSpinBox(groupBox_4);
        fpsSpinBox->setObjectName("fpsSpinBox");
        fpsSpinBox->setMinimum(1);
        fpsSpinBox->setMaximum(100);
        fpsSpinBox->setValue(10);

        verticalLayout_7->addWidget(fpsSpinBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        waterfallAvgSpinBox = new QSpinBox(groupBox_4);
        waterfallAvgSpinBox->setObjectName("waterfallAvgSpinBox");
        waterfallAvgSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        waterfallAvgSpinBox->setMinimum(1);
        waterfallAvgSpinBox->setMaximum(50);

        horizontalLayout_3->addWidget(waterfallAvgSpinBox);

        cbFlatten = new QCheckBox(groupBox_4);
        cbFlatten->setObjectName("cbFlatten");

        horizontalLayout_3->addWidget(cbFlatten);


        verticalLayout_7->addLayout(horizontalLayout_3);

        spec2dComboBox = new QComboBox(groupBox_4);
        spec2dComboBox->addItem(QString());
        spec2dComboBox->addItem(QString());
        spec2dComboBox->addItem(QString());
        spec2dComboBox->setObjectName("spec2dComboBox");

        verticalLayout_7->addWidget(spec2dComboBox);

        smoSpinBox = new QSpinBox(groupBox_4);
        smoSpinBox->setObjectName("smoSpinBox");
        smoSpinBox->setEnabled(false);
        smoSpinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        smoSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        smoSpinBox->setMinimum(1);
        smoSpinBox->setMaximum(7);

        verticalLayout_7->addWidget(smoSpinBox);


        verticalLayout_5->addWidget(groupBox_4);

        groupBox = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox->setObjectName("groupBox");
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        gainSlider = new QSlider(groupBox);
        gainSlider->setObjectName("gainSlider");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gainSlider->sizePolicy().hasHeightForWidth());
        gainSlider->setSizePolicy(sizePolicy3);
        gainSlider->setMinimumSize(QSize(100, 0));
        gainSlider->setMaximumSize(QSize(16777215, 16777215));
        gainSlider->setMinimum(-50);
        gainSlider->setMaximum(50);
        gainSlider->setOrientation(Qt::Orientation::Horizontal);
        gainSlider->setTickPosition(QSlider::TickPosition::TicksAbove);

        formLayout->setWidget(0, QFormLayout::FieldRole, gainSlider);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        zeroSlider = new QSlider(groupBox);
        zeroSlider->setObjectName("zeroSlider");
        sizePolicy3.setHeightForWidth(zeroSlider->sizePolicy().hasHeightForWidth());
        zeroSlider->setSizePolicy(sizePolicy3);
        zeroSlider->setMinimumSize(QSize(100, 0));
        zeroSlider->setMaximumSize(QSize(16777215, 16777215));
        zeroSlider->setMinimum(-50);
        zeroSlider->setMaximum(50);
        zeroSlider->setOrientation(Qt::Orientation::Horizontal);
        zeroSlider->setTickPosition(QSlider::TickPosition::TicksAbove);

        formLayout->setWidget(1, QFormLayout::FieldRole, zeroSlider);


        verticalLayout_4->addLayout(formLayout);

        decodeAttemptCheckBox = new QCheckBox(groupBox);
        decodeAttemptCheckBox->setObjectName("decodeAttemptCheckBox");

        verticalLayout_4->addWidget(decodeAttemptCheckBox);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        sbPercent2dPlot = new QSpinBox(groupBox_2);
        sbPercent2dPlot->setObjectName("sbPercent2dPlot");
        sbPercent2dPlot->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sbPercent2dPlot->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        sbPercent2dPlot->setMaximum(100);
        sbPercent2dPlot->setSingleStep(5);
        sbPercent2dPlot->setValue(0);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sbPercent2dPlot);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        gain2dSlider = new QSlider(groupBox_2);
        gain2dSlider->setObjectName("gain2dSlider");
        sizePolicy3.setHeightForWidth(gain2dSlider->sizePolicy().hasHeightForWidth());
        gain2dSlider->setSizePolicy(sizePolicy3);
        gain2dSlider->setMinimumSize(QSize(100, 0));
        gain2dSlider->setMaximumSize(QSize(16777215, 16777215));
        gain2dSlider->setMinimum(-50);
        gain2dSlider->setMaximum(50);
        gain2dSlider->setOrientation(Qt::Orientation::Horizontal);
        gain2dSlider->setTickPosition(QSlider::TickPosition::TicksAbove);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, gain2dSlider);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        zero2dSlider = new QSlider(groupBox_2);
        zero2dSlider->setObjectName("zero2dSlider");
        sizePolicy3.setHeightForWidth(zero2dSlider->sizePolicy().hasHeightForWidth());
        zero2dSlider->setSizePolicy(sizePolicy3);
        zero2dSlider->setMinimumSize(QSize(100, 0));
        zero2dSlider->setMaximumSize(QSize(16777215, 16777215));
        zero2dSlider->setMinimum(-50);
        zero2dSlider->setMaximum(50);
        zero2dSlider->setOrientation(Qt::Orientation::Horizontal);
        zero2dSlider->setTickPosition(QSlider::TickPosition::TicksAbove);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, zero2dSlider);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_9->setObjectName("groupBox_9");
        formLayout_3 = new QFormLayout(groupBox_9);
        formLayout_3->setObjectName("formLayout_3");
        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName("label_6");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        filterOpacitySpinBox = new QSpinBox(groupBox_9);
        filterOpacitySpinBox->setObjectName("filterOpacitySpinBox");
        filterOpacitySpinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        filterOpacitySpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        filterOpacitySpinBox->setMaximum(100);
        filterOpacitySpinBox->setValue(50);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, filterOpacitySpinBox);


        verticalLayout_5->addWidget(groupBox_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_2);

        tabWidget->addTab(displayTab, QString());
        timingTab = new QWidget();
        timingTab->setObjectName("timingTab");
        gridLayout_12 = new QGridLayout(timingTab);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(2, 2, 2, 2);
        scrollArea_3 = new QScrollArea(timingTab);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 352));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        driftSpinBox = new QSpinBox(scrollAreaWidgetContents);
        driftSpinBox->setObjectName("driftSpinBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(driftSpinBox->sizePolicy().hasHeightForWidth());
        driftSpinBox->setSizePolicy(sizePolicy4);
        driftSpinBox->setMinimumSize(QSize(0, 30));
        driftSpinBox->setWrapping(false);
        driftSpinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        driftSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        driftSpinBox->setMinimum(-30000);
        driftSpinBox->setMaximum(30000);
        driftSpinBox->setSingleStep(100);

        verticalLayout->addWidget(driftSpinBox);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_10->setObjectName("groupBox_10");
        verticalLayout_13 = new QVBoxLayout(groupBox_10);
        verticalLayout_13->setObjectName("verticalLayout_13");
        autoDriftButton = new QPushButton(groupBox_10);
        autoDriftButton->setObjectName("autoDriftButton");
        autoDriftButton->setStyleSheet(QString::fromUtf8("QPushButton:checked { \n"
"  font-weight:bold;\n"
"  color:black;\n"
"}"));
        autoDriftButton->setCheckable(true);

        verticalLayout_13->addWidget(autoDriftButton);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        autoDriftAutoStopCheckBox = new QCheckBox(groupBox_10);
        autoDriftAutoStopCheckBox->setObjectName("autoDriftAutoStopCheckBox");
        autoDriftAutoStopCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(autoDriftAutoStopCheckBox);

        autoDriftStopSpinBox = new QSpinBox(groupBox_10);
        autoDriftStopSpinBox->setObjectName("autoDriftStopSpinBox");
        autoDriftStopSpinBox->setMinimum(1);
        autoDriftStopSpinBox->setMaximum(1024);

        horizontalLayout_4->addWidget(autoDriftStopSpinBox);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_13->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_11->setObjectName("groupBox_11");
        verticalLayout_14 = new QVBoxLayout(groupBox_11);
        verticalLayout_14->setObjectName("verticalLayout_14");
        driftSyncMinuteButton = new QPushButton(groupBox_11);
        driftSyncMinuteButton->setObjectName("driftSyncMinuteButton");

        verticalLayout_14->addWidget(driftSyncMinuteButton);

        driftSyncEndButton = new QPushButton(groupBox_11);
        driftSyncEndButton->setObjectName("driftSyncEndButton");

        verticalLayout_14->addWidget(driftSyncEndButton);

        driftSyncButton = new QPushButton(groupBox_11);
        driftSyncButton->setObjectName("driftSyncButton");

        verticalLayout_14->addWidget(driftSyncButton);

        driftSyncResetButton = new QPushButton(groupBox_11);
        driftSyncResetButton->setObjectName("driftSyncResetButton");

        verticalLayout_14->addWidget(driftSyncResetButton);


        verticalLayout->addWidget(groupBox_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea_3->setWidget(scrollAreaWidgetContents);

        gridLayout_12->addWidget(scrollArea_3, 0, 0, 1, 1);

        tabWidget->addTab(timingTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        splitter->addWidget(controls_widget);

        horizontalLayout_2->addWidget(splitter);


        retranslateUi(WideGraph);

        tabWidget->setCurrentIndex(0);
        spec2dComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WideGraph);
    } // setupUi

    void retranslateUi(QWidget *WideGraph)
    {
        WideGraph->setWindowTitle(QCoreApplication::translate("WideGraph", "Dialog", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("WideGraph", "Offset", nullptr));
        offsetSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " Hz", nullptr));
        offsetSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Offset: ", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("WideGraph", "QSY", nullptr));
#if QT_CONFIG(tooltip)
        qsyPushButton->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Adjust the dial frequency to center the current offset at the center of the bandpass (position defined below).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        qsyPushButton->setText(QCoreApplication::translate("WideGraph", "QSY", nullptr));
        centerSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " Hz", nullptr));
        centerSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Center: ", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("WideGraph", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        filterCheckBox->setToolTip(QCoreApplication::translate("WideGraph", "Enable the software filter", nullptr));
#endif // QT_CONFIG(tooltip)
        filterCheckBox->setText(QCoreApplication::translate("WideGraph", "Enable Filter", nullptr));
#if QT_CONFIG(tooltip)
        filterCenterSyncButton->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Synchronize the filter center to the audio offset</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        filterCenterSyncButton->setText(QCoreApplication::translate("WideGraph", "Sync", nullptr));
        filterCenterSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " Hz", nullptr));
        filterCenterSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Center: ", nullptr));
        filterWidthSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " Hz", nullptr));
        filterWidthSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Width: ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(controlTab), QCoreApplication::translate("WideGraph", "Control", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("WideGraph", "Size", nullptr));
#if QT_CONFIG(tooltip)
        fStartSpinBox->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Frequency at left edge of waterfall</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        fStartSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " Hz", nullptr));
        fStartSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Start: ", nullptr));
#if QT_CONFIG(tooltip)
        bppSpinBox->setToolTip(QCoreApplication::translate("WideGraph", "Compression factor for frequency scale", nullptr));
#endif // QT_CONFIG(tooltip)
        bppSpinBox->setSuffix(QString());
        bppSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Bins Per Pixel: ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("WideGraph", "Palette", nullptr));
#if QT_CONFIG(tooltip)
        paletteComboBox->setToolTip(QCoreApplication::translate("WideGraph", "Select waterfall palette", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        adjust_palette_push_button->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Enter definition for a new color palette.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        adjust_palette_push_button->setText(QCoreApplication::translate("WideGraph", "Adjust...", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("WideGraph", "Scrolling && Averaging", nullptr));
        fpsSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " fps", nullptr));
        fpsSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Scroll Speed: ", nullptr));
#if QT_CONFIG(tooltip)
        waterfallAvgSpinBox->setToolTip(QCoreApplication::translate("WideGraph", "Number of FFTs averaged (controls waterfall scrolling rate)", nullptr));
#endif // QT_CONFIG(tooltip)
        waterfallAvgSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Avg N: ", nullptr));
#if QT_CONFIG(tooltip)
        cbFlatten->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Flatten spectral baseline over the full displayed interval.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbFlatten->setText(QCoreApplication::translate("WideGraph", "Flatten", nullptr));
        spec2dComboBox->setItemText(0, QCoreApplication::translate("WideGraph", "Current", nullptr));
        spec2dComboBox->setItemText(1, QCoreApplication::translate("WideGraph", "Cumulative", nullptr));
        spec2dComboBox->setItemText(2, QCoreApplication::translate("WideGraph", "Linear Avg", nullptr));

#if QT_CONFIG(tooltip)
        spec2dComboBox->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Select data for spectral display</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        smoSpinBox->setToolTip(QCoreApplication::translate("WideGraph", "Smoothing of Linear Average spectrum", nullptr));
#endif // QT_CONFIG(tooltip)
        smoSpinBox->setSuffix(QString());
        smoSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Smooth:  ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WideGraph", "Waterfall", nullptr));
        label->setText(QCoreApplication::translate("WideGraph", "Gain:", nullptr));
#if QT_CONFIG(tooltip)
        gainSlider->setToolTip(QCoreApplication::translate("WideGraph", "Waterfall gain", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("WideGraph", "Zero:", nullptr));
#if QT_CONFIG(tooltip)
        zeroSlider->setToolTip(QCoreApplication::translate("WideGraph", "Waterfall zero", nullptr));
#endif // QT_CONFIG(tooltip)
        decodeAttemptCheckBox->setText(QCoreApplication::translate("WideGraph", "Display Decode Attempts", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WideGraph", "Spectrum", nullptr));
        label_3->setText(QCoreApplication::translate("WideGraph", "Height:", nullptr));
#if QT_CONFIG(tooltip)
        sbPercent2dPlot->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Set fractional size of spectrum in this window.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sbPercent2dPlot->setSuffix(QCoreApplication::translate("WideGraph", " %", nullptr));
        sbPercent2dPlot->setPrefix(QString());
        label_4->setText(QCoreApplication::translate("WideGraph", "Gain:", nullptr));
#if QT_CONFIG(tooltip)
        gain2dSlider->setToolTip(QCoreApplication::translate("WideGraph", "Spectrum gain", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("WideGraph", "Zero:", nullptr));
#if QT_CONFIG(tooltip)
        zero2dSlider->setToolTip(QCoreApplication::translate("WideGraph", "Spectrum zero", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_9->setTitle(QCoreApplication::translate("WideGraph", "Filter", nullptr));
        label_6->setText(QCoreApplication::translate("WideGraph", "Opacity:", nullptr));
        filterOpacitySpinBox->setSuffix(QCoreApplication::translate("WideGraph", "%", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(displayTab), QCoreApplication::translate("WideGraph", "Display", nullptr));
        driftSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " ms", nullptr));
        driftSpinBox->setPrefix(QCoreApplication::translate("WideGraph", "Time Drift: ", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("WideGraph", "Automatic", nullptr));
#if QT_CONFIG(tooltip)
        autoDriftButton->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Automatically synchronize time drift every second to decodes of NORMAL and SLOW signals observed.</p><p>This process is CPU intensive and may cause abnormal decoder behavior if run for extended periods of time. Default operation should be paired with stopping automatic time drift after signals have been decoded. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        autoDriftButton->setText(QCoreApplication::translate("WideGraph", "Start Automatic Time Drift", nullptr));
        autoDriftAutoStopCheckBox->setText(QCoreApplication::translate("WideGraph", "Stop After:", nullptr));
        autoDriftStopSpinBox->setSuffix(QCoreApplication::translate("WideGraph", " decode(s)", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("WideGraph", "Manual", nullptr));
#if QT_CONFIG(tooltip)
        driftSyncMinuteButton->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Observe signals in the waterfall and click this to synchronize your time drift with the start of a minute.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        driftSyncMinuteButton->setText(QCoreApplication::translate("WideGraph", "Set Time Drift to Now (Minute Start)", nullptr));
#if QT_CONFIG(tooltip)
        driftSyncEndButton->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Observe signals in the waterfall and click this to synchronize your time drift with the end of a TX cycle in the current transmission speed.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        driftSyncEndButton->setText(QCoreApplication::translate("WideGraph", "Set Time Drift to Now (TX End)", nullptr));
#if QT_CONFIG(tooltip)
        driftSyncButton->setToolTip(QCoreApplication::translate("WideGraph", "<html><head/><body><p>Observe signals in the waterfall and click this to synchronize your time drift with the start of a TX cycle in the current transmission speed.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        driftSyncButton->setText(QCoreApplication::translate("WideGraph", "Set Time Drift to Now (TX Start)", nullptr));
#if QT_CONFIG(tooltip)
        driftSyncResetButton->setToolTip(QCoreApplication::translate("WideGraph", "Reset your time drift to zero.", nullptr));
#endif // QT_CONFIG(tooltip)
        driftSyncResetButton->setText(QCoreApplication::translate("WideGraph", "Reset Time Drift", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(timingTab), QCoreApplication::translate("WideGraph", "Timing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WideGraph: public Ui_WideGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDEGRAPH_H
