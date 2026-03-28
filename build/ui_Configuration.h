/********************************************************************************
** Form generated from reading UI file 'Configuration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_H
#define UI_CONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "LazyFillComboBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_configuration_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *configuration_tabs;
    QWidget *general_tab;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget_2;
    QWidget *stationTab;
    QVBoxLayout *verticalLayout_23;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_13;
    QLabel *callsign_label;
    QLabel *grid_label;
    QLineEdit *grid_line_edit;
    QLineEdit *groups_line_edit;
    QLabel *groups_label;
    QLineEdit *callsign_line_edit;
    QCheckBox *avoid_allcall_check_box;
    QLabel *encryption_key_label;
    QLineEdit *encryption_key_line_edit;
    QCheckBox *hide_unencrypted_messages_check_box;
    QComboBox *region_combo_box;
    QLabel *region_label;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_4;
    QLineEdit *status_message_line_edit;
    QLabel *label_17;
    QLabel *label_28;
    QLineEdit *reply_message_line_edit;
    QLineEdit *hb_message_line_edit;
    QLineEdit *cq_message_line_edit;
    QLabel *label_14;
    QLabel *label_27;
    QLineEdit *info_message_line_edit;
    QLabel *label_19;
    QSpacerItem *verticalSpacer_14;
    QWidget *behaviorTab;
    QVBoxLayout *verticalLayout_24;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_26;
    QGroupBox *behaviour_group_box;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *miles_check_box;
    QCheckBox *monitor_off_check_box;
    QCheckBox *transmit_off_check_box;
    QCheckBox *monitor_last_used_check_box;
    QCheckBox *tx_qsy_check_box;
    QCheckBox *avoid_forced_identify_check_box;
    QCheckBox *transmit_directed_check_box;
    QCheckBox *write_logs_check_box;
    QCheckBox *spellcheck_check_box;
    QCheckBox *reset_activity_check_box;
    QCheckBox *checkForUpdates_checkBox;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_155;
    QLabel *ping_label_11;
    QSpinBox *callsign_aging_spin_box;
    QHBoxLayout *horizontalLayout_156;
    QLabel *ping_label_12;
    QSpinBox *activity_aging_spin_box;
    QGroupBox *heartbeatGroupBox;
    QGroupBox *groupBox_12;
    QFormLayout *formLayout_2;
    QLabel *label_24;
    QLineEdit *eot_line_edit;
    QLabel *label_32;
    QLineEdit *mfi_line_edit;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *heartbeatGroupBoxOld;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_15;
    QLabel *ping_label_10;
    QSpinBox *heartbeat_spin_box;
    QSpacerItem *verticalSpacer_2;
    QWidget *autoreplyTab;
    QVBoxLayout *verticalLayout_17;
    QScrollArea *scrollArea_11;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_34;
    QCheckBox *heartbeat_anywhere_check_box;
    QCheckBox *heartbeat_qso_pause_check_box;
    QCheckBox *heartbeat_ack_snr_check_box;
    QFormLayout *formLayout_16;
    QLabel *label_26;
    QLineEdit *hb_blacklist_line_edit;
    QGroupBox *groupBox_9;
    QFormLayout *formLayout;
    QCheckBox *autoreply_on_check_box;
    QCheckBox *relay_disabled_check_box;
    QLabel *label_23;
    QLineEdit *auto_whitelist_line_edit;
    QLabel *label_15;
    QLineEdit *auto_blacklist_line_edit;
    QLabel *label_10;
    QSpinBox *tx_watchdog_spin_box;
    QCheckBox *autoreply_confirmation_check_box;
    QSpacerItem *verticalSpacer_18;
    QWidget *radio_tab;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rig_label;
    QComboBox *rig_combo_box;
    QLabel *CAT_poll_interval_label;
    QSpinBox *CAT_poll_interval_spin_box;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *test_CAT_push_button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *test_PTT_push_button;
    QTabWidget *tabWidget_3;
    QWidget *catTab;
    QVBoxLayout *verticalLayout_25;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_3;
    QLabel *CAT_port_label;
    QComboBox *CAT_port_combo_box;
    QGroupBox *CAT_serial_port_parameters_group_box;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_14;
    QLabel *CAT_baud_label;
    QComboBox *CAT_serial_baud_combo_box;
    QGroupBox *CAT_data_bits_group_box;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *CAT_default_bit_radio_button;
    QRadioButton *CAT_7_bit_radio_button;
    QRadioButton *CAT_8_bit_radio_button;
    QGroupBox *CAT_stop_bits_group_box;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *CAT_default_stop_bit_radio_button;
    QRadioButton *CAT_one_stop_bit_radio_button;
    QRadioButton *CAT_two_stop_bit_radio_button;
    QGroupBox *CAT_handshake_group_box;
    QGridLayout *gridLayout_11;
    QRadioButton *CAT_handshake_default_radio_button;
    QRadioButton *CAT_handshake_none_radio_button;
    QRadioButton *CAT_handshake_xon_radio_button;
    QRadioButton *CAT_handshake_hardware_radio_button;
    QGroupBox *CAT_control_lines_group_box;
    QHBoxLayout *horizontalLayout_8;
    QFormLayout *formLayout_8;
    QComboBox *force_DTR_combo_box;
    QLabel *force_DTR_label;
    QFormLayout *formLayout_9;
    QLabel *force_RTS_label;
    QComboBox *force_RTS_combo_box;
    QSpacerItem *verticalSpacer_15;
    QWidget *optionsTab;
    QVBoxLayout *verticalLayout_12;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_28;
    QGroupBox *PTT_method_group_box;
    QGridLayout *gridLayout_2;
    QRadioButton *PTT_VOX_radio_button;
    QRadioButton *PTT_DTR_radio_button;
    QRadioButton *PTT_CAT_radio_button;
    QRadioButton *PTT_RTS_radio_button;
    QFormLayout *formLayout_4;
    QLabel *PTT_port_label;
    QComboBox *PTT_port_combo_box;
    QGroupBox *mode_group_box;
    QGridLayout *gridLayout_10;
    QRadioButton *mode_USB_radio_button;
    QRadioButton *mode_none_radio_button;
    QRadioButton *mode_data_radio_button;
    QGroupBox *TX_audio_source_group_box;
    QGridLayout *gridLayout_7;
    QRadioButton *TX_source_data_radio_button;
    QRadioButton *TX_source_mic_radio_button;
    QGroupBox *split_operation_group_box;
    QGridLayout *gridLayout_12;
    QRadioButton *split_emulate_radio_button;
    QRadioButton *split_rig_radio_button;
    QRadioButton *split_none_radio_button;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_33;
    QFrame *frame;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QDoubleSpinBox *sbTxDelay;
    QLabel *label_12;
    QLineEdit *ptt_command_line_edit;
    QCheckBox *hold_ptt_check_box;
    QSpacerItem *verticalSpacer_16;
    QWidget *audio_tab;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_29;
    QGroupBox *soundcard_group_box;
    QGridLayout *gridLayout_6;
    LazyFillComboBox *sound_output_combo_box;
    LazyFillComboBox *sound_input_combo_box;
    QLabel *sound_input_label;
    QComboBox *sound_input_channel_combo_box;
    QComboBox *sound_output_channel_combo_box;
    QLabel *sound_output_label;
    QGroupBox *notification_soundcard_group_box;
    QGridLayout *gridLayout_18;
    QLabel *notification_sound_output_label;
    LazyFillComboBox *notification_sound_output_combo_box;
    QGroupBox *save_path_group_box;
    QHBoxLayout *horizontalLayout_5;
    QLabel *save_path_label;
    QLabel *save_path_display_label;
    QPushButton *save_path_select_push_button;
    QGroupBox *split_operation_group_box_2;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBoxPwrBandTxMemory;
    QCheckBox *checkBoxPwrBandTuneMemory;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QWidget *reporting_tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *logging_group_box;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_14;
    QLineEdit *opCallEntry;
    QLabel *label_13;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_30;
    QGroupBox *network_group_box;
    QGridLayout *gridLayout_9;
    QLabel *udp_server_label_2;
    QLabel *label_18;
    QLineEdit *spot_blacklist_line_edit;
    QLineEdit *aprs_server_line_edit;
    QCheckBox *psk_reporter_tcpip_check_box;
    QCheckBox *enable_aprs_spotting_check_box;
    QLabel *label_31;
    QSpinBox *aprs_server_port_spin_box;
    QCheckBox *psk_reporter_check_box;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_16;
    QLineEdit *tcp_server_line_edit;
    QLineEdit *udp_server_line_edit;
    QCheckBox *tcpEnable;
    QLabel *label_16;
    QSpinBox *udp_server_port_spin_box;
    QCheckBox *accept_tcp_requests_check_box;
    QLabel *udp_server_label;
    QSpinBox *tcp_server_port_spin_box;
    QLabel *label_29;
    QSpinBox *tcp_max_connections_spin_box;
    QLabel *label_6;
    QCheckBox *use_dynamic_grid;
    QLabel *label_30;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_20;
    QCheckBox *accept_udp_requests_check_box;
    QCheckBox *udpEnable;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_12;
    QCheckBox *enable_n3fjp_broadcast_check_box;
    QFormLayout *formLayout_20;
    QLabel *n3fjp_server_name_label;
    QLineEdit *n3fjp_server_name_line_edit;
    QLabel *n3fjp_server_port_label;
    QSpinBox *n3fjp_server_port_spin_box;
    QGroupBox *n1mm_group_box;
    QFormLayout *formLayout_15;
    QCheckBox *enable_n1mm_broadcast_check_box;
    QFormLayout *formLayout_22;
    QLabel *n1mm_server_name_label;
    QLineEdit *n1mm_server_name_line_edit;
    QLabel *n1mm_server_port_label;
    QSpinBox *n1mm_server_port_spin_box;
    QWidget *aprsForm;
    QVBoxLayout *verticalLayout_36;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *frequencies_tab;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_31;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_7;
    QLabel *label_8;
    QDoubleSpinBox *calibration_slope_ppm_spin_box;
    QFormLayout *formLayout_14;
    QLabel *label_7;
    QDoubleSpinBox *calibration_intercept_spin_box;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *frequencies_table_view;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *auto_switch_bands_check_box;
    QTableView *stations_table_view;
    QWidget *tx_macros_tab;
    QGridLayout *gridLayout;
    QPushButton *add_macro_push_button;
    QLineEdit *add_macro_line_edit;
    QPushButton *delete_macro_push_button;
    QListView *macros_list_view;
    QWidget *notifications_tab;
    QVBoxLayout *verticalLayout_32;
    QScrollArea *scrollArea_12;
    QWidget *scrollAreaWidgetContents_11;
    QVBoxLayout *verticalLayout_35;
    QCheckBox *notifications_check_box;
    QTableWidget *notifications_table_widget;
    QWidget *colors_tab;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_17;
    QPushButton *font_push_button;
    QTabWidget *tabWidget;
    QWidget *uiTab1;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaContentsWidget_8;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout_15;
    QPushButton *primaryHighlightButton;
    QSpacerItem *verticalSpacer_17;
    QPushButton *tableForegroundButton;
    QLabel *label_25;
    QLabel *tableSelectionBackgroundLabel;
    QLabel *primaryHighlightLabel;
    QSpacerItem *verticalSpacer_11;
    QPushButton *secondaryHighlightButton;
    QLineEdit *secondaryHighlightLineEdit;
    QPushButton *tableBackgroundButton;
    QLabel *tableForegroundLabel;
    QLabel *tableBackgroundLabel;
    QPushButton *tableFontButton;
    QLabel *cqMessagesLabel;
    QLabel *labMyCall;
    QPushButton *pbMyCall;
    QPushButton *cqMessagesButton;
    QLabel *label_20;
    QLineEdit *primaryHighlightLineEdit;
    QPushButton *tableSelectedRowBackgroundButton;
    QSpacerItem *verticalSpacer;
    QLabel *secondaryHighlightLabel;
    QSpacerItem *verticalSpacer_6;
    QWidget *uiTab2;
    QVBoxLayout *verticalLayout_19;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_10;
    QPushButton *txFontButton;
    QPushButton *rxFontButton;
    QPushButton *txForegroundButton;
    QLabel *label_22;
    QLabel *rxLabel;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_21;
    QPushButton *rxBackgroundButton;
    QPushButton *rxForegroundButton;
    QLabel *txForegroundLabel;
    QLabel *rxForegroundLabel;
    QSpacerItem *verticalSpacer_9;
    QWidget *uiTab3;
    QVBoxLayout *verticalLayout_20;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_12;
    QLabel *composeLabel;
    QPushButton *composeBackgroundButton;
    QPushButton *composeForegroundButton;
    QPushButton *composeFontButton;
    QDialogButtonBox *configuration_dialog_button_box;
    QButtonGroup *CAT_stop_bits_button_group;
    QButtonGroup *TX_mode_button_group;
    QButtonGroup *TX_audio_source_button_group;
    QButtonGroup *PTT_method_button_group;
    QButtonGroup *CAT_handshake_button_group;
    QButtonGroup *split_mode_button_group;
    QButtonGroup *CAT_data_bits_button_group;

    void setupUi(QDialog *configuration_dialog)
    {
        if (configuration_dialog->objectName().isEmpty())
            configuration_dialog->setObjectName("configuration_dialog");
        configuration_dialog->resize(717, 600);
        verticalLayout_2 = new QVBoxLayout(configuration_dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 1, -1, -1);
        configuration_tabs = new QTabWidget(configuration_dialog);
        configuration_tabs->setObjectName("configuration_tabs");
        configuration_tabs->setEnabled(true);
        general_tab = new QWidget();
        general_tab->setObjectName("general_tab");
        verticalLayout_4 = new QVBoxLayout(general_tab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        tabWidget_2 = new QTabWidget(general_tab);
        tabWidget_2->setObjectName("tabWidget_2");
        stationTab = new QWidget();
        stationTab->setObjectName("stationTab");
        verticalLayout_23 = new QVBoxLayout(stationTab);
        verticalLayout_23->setObjectName("verticalLayout_23");
        scrollArea = new QScrollArea(stationTab);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 601, 438));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_17 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_17->setObjectName("groupBox_17");
        gridLayout_13 = new QGridLayout(groupBox_17);
        gridLayout_13->setObjectName("gridLayout_13");
        callsign_label = new QLabel(groupBox_17);
        callsign_label->setObjectName("callsign_label");

        gridLayout_13->addWidget(callsign_label, 0, 0, 1, 1);

        grid_label = new QLabel(groupBox_17);
        grid_label->setObjectName("grid_label");

        gridLayout_13->addWidget(grid_label, 1, 0, 1, 1);

        grid_line_edit = new QLineEdit(groupBox_17);
        grid_line_edit->setObjectName("grid_line_edit");
        grid_line_edit->setMaxLength(12);

        gridLayout_13->addWidget(grid_line_edit, 1, 1, 1, 1);

        groups_line_edit = new QLineEdit(groupBox_17);
        groups_line_edit->setObjectName("groups_line_edit");

        gridLayout_13->addWidget(groups_line_edit, 3, 1, 1, 1);

        groups_label = new QLabel(groupBox_17);
        groups_label->setObjectName("groups_label");

        gridLayout_13->addWidget(groups_label, 3, 0, 1, 1);

        callsign_line_edit = new QLineEdit(groupBox_17);
        callsign_line_edit->setObjectName("callsign_line_edit");

        gridLayout_13->addWidget(callsign_line_edit, 0, 1, 1, 1);

        avoid_allcall_check_box = new QCheckBox(groupBox_17);
        avoid_allcall_check_box->setObjectName("avoid_allcall_check_box");
        avoid_allcall_check_box->setChecked(false);

        gridLayout_13->addWidget(avoid_allcall_check_box, 4, 1, 1, 1);

        encryption_key_label = new QLabel(groupBox_17);
        encryption_key_label->setObjectName("encryption_key_label");

        gridLayout_13->addWidget(encryption_key_label, 5, 0, 1, 1);

        encryption_key_line_edit = new QLineEdit(groupBox_17);
        encryption_key_line_edit->setObjectName("encryption_key_line_edit");
        encryption_key_line_edit->setEchoMode(QLineEdit::Password);

        gridLayout_13->addWidget(encryption_key_line_edit, 5, 1, 1, 1);

        hide_unencrypted_messages_check_box = new QCheckBox(groupBox_17);
        hide_unencrypted_messages_check_box->setObjectName("hide_unencrypted_messages_check_box");
        hide_unencrypted_messages_check_box->setChecked(true);

        gridLayout_13->addWidget(hide_unencrypted_messages_check_box, 6, 1, 1, 1);

        region_combo_box = new QComboBox(groupBox_17);
        region_combo_box->setObjectName("region_combo_box");
        region_combo_box->setVisible(false);

        gridLayout_13->addWidget(region_combo_box, 7, 1, 1, 1);

        region_label = new QLabel(groupBox_17);
        region_label->setObjectName("region_label");
        region_label->setVisible(false);

        gridLayout_13->addWidget(region_label, 7, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_17);

        groupBox_16 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_16->setObjectName("groupBox_16");
        gridLayout_4 = new QGridLayout(groupBox_16);
        gridLayout_4->setObjectName("gridLayout_4");
        status_message_line_edit = new QLineEdit(groupBox_16);
        status_message_line_edit->setObjectName("status_message_line_edit");

        gridLayout_4->addWidget(status_message_line_edit, 4, 1, 1, 1);

        label_17 = new QLabel(groupBox_16);
        label_17->setObjectName("label_17");

        gridLayout_4->addWidget(label_17, 2, 0, 1, 1);

        label_28 = new QLabel(groupBox_16);
        label_28->setObjectName("label_28");
        label_28->setVisible(false);

        gridLayout_4->addWidget(label_28, 0, 0, 1, 1);

        reply_message_line_edit = new QLineEdit(groupBox_16);
        reply_message_line_edit->setObjectName("reply_message_line_edit");

        gridLayout_4->addWidget(reply_message_line_edit, 2, 1, 1, 1);

        hb_message_line_edit = new QLineEdit(groupBox_16);
        hb_message_line_edit->setObjectName("hb_message_line_edit");
        hb_message_line_edit->setVisible(false);

        gridLayout_4->addWidget(hb_message_line_edit, 0, 1, 1, 1);

        cq_message_line_edit = new QLineEdit(groupBox_16);
        cq_message_line_edit->setObjectName("cq_message_line_edit");

        gridLayout_4->addWidget(cq_message_line_edit, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_16);
        label_14->setObjectName("label_14");

        gridLayout_4->addWidget(label_14, 3, 0, 1, 1);

        label_27 = new QLabel(groupBox_16);
        label_27->setObjectName("label_27");

        gridLayout_4->addWidget(label_27, 4, 0, 1, 1);

        info_message_line_edit = new QLineEdit(groupBox_16);
        info_message_line_edit->setObjectName("info_message_line_edit");

        gridLayout_4->addWidget(info_message_line_edit, 3, 1, 1, 1);

        label_19 = new QLabel(groupBox_16);
        label_19->setObjectName("label_19");

        gridLayout_4->addWidget(label_19, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_16);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_14);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_23->addWidget(scrollArea);

        tabWidget_2->addTab(stationTab, QString());
        behaviorTab = new QWidget();
        behaviorTab->setObjectName("behaviorTab");
        verticalLayout_24 = new QVBoxLayout(behaviorTab);
        verticalLayout_24->setObjectName("verticalLayout_24");
        scrollArea_2 = new QScrollArea(behaviorTab);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_2->setLineWidth(0);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 601, 489));
        verticalLayout_26 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        behaviour_group_box = new QGroupBox(scrollAreaWidgetContents_2);
        behaviour_group_box->setObjectName("behaviour_group_box");
        verticalLayout_8 = new QVBoxLayout(behaviour_group_box);
        verticalLayout_8->setObjectName("verticalLayout_8");
        miles_check_box = new QCheckBox(behaviour_group_box);
        miles_check_box->setObjectName("miles_check_box");
        miles_check_box->setEnabled(true);

        verticalLayout_8->addWidget(miles_check_box);

        monitor_off_check_box = new QCheckBox(behaviour_group_box);
        monitor_off_check_box->setObjectName("monitor_off_check_box");
        monitor_off_check_box->setChecked(false);

        verticalLayout_8->addWidget(monitor_off_check_box);

        transmit_off_check_box = new QCheckBox(behaviour_group_box);
        transmit_off_check_box->setObjectName("transmit_off_check_box");

        verticalLayout_8->addWidget(transmit_off_check_box);

        monitor_last_used_check_box = new QCheckBox(behaviour_group_box);
        monitor_last_used_check_box->setObjectName("monitor_last_used_check_box");
        monitor_last_used_check_box->setVisible(false);

        verticalLayout_8->addWidget(monitor_last_used_check_box);

        tx_qsy_check_box = new QCheckBox(behaviour_group_box);
        tx_qsy_check_box->setObjectName("tx_qsy_check_box");
        tx_qsy_check_box->setEnabled(true);

        verticalLayout_8->addWidget(tx_qsy_check_box);

        avoid_forced_identify_check_box = new QCheckBox(behaviour_group_box);
        avoid_forced_identify_check_box->setObjectName("avoid_forced_identify_check_box");

        verticalLayout_8->addWidget(avoid_forced_identify_check_box);

        transmit_directed_check_box = new QCheckBox(behaviour_group_box);
        transmit_directed_check_box->setObjectName("transmit_directed_check_box");

        verticalLayout_8->addWidget(transmit_directed_check_box);

        write_logs_check_box = new QCheckBox(behaviour_group_box);
        write_logs_check_box->setObjectName("write_logs_check_box");

        verticalLayout_8->addWidget(write_logs_check_box);

        spellcheck_check_box = new QCheckBox(behaviour_group_box);
        spellcheck_check_box->setObjectName("spellcheck_check_box");

        verticalLayout_8->addWidget(spellcheck_check_box);

        reset_activity_check_box = new QCheckBox(behaviour_group_box);
        reset_activity_check_box->setObjectName("reset_activity_check_box");

        verticalLayout_8->addWidget(reset_activity_check_box);

        checkForUpdates_checkBox = new QCheckBox(behaviour_group_box);
        checkForUpdates_checkBox->setObjectName("checkForUpdates_checkBox");

        verticalLayout_8->addWidget(checkForUpdates_checkBox);


        verticalLayout_26->addWidget(behaviour_group_box);

        groupBox_15 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_15->setObjectName("groupBox_15");
        verticalLayout_22 = new QVBoxLayout(groupBox_15);
        verticalLayout_22->setObjectName("verticalLayout_22");
        horizontalLayout_155 = new QHBoxLayout();
        horizontalLayout_155->setObjectName("horizontalLayout_155");
        ping_label_11 = new QLabel(groupBox_15);
        ping_label_11->setObjectName("ping_label_11");

        horizontalLayout_155->addWidget(ping_label_11);

        callsign_aging_spin_box = new QSpinBox(groupBox_15);
        callsign_aging_spin_box->setObjectName("callsign_aging_spin_box");
        callsign_aging_spin_box->setMinimum(0);
        callsign_aging_spin_box->setMaximum(1440);
        callsign_aging_spin_box->setSingleStep(1);
        callsign_aging_spin_box->setValue(0);

        horizontalLayout_155->addWidget(callsign_aging_spin_box);


        verticalLayout_22->addLayout(horizontalLayout_155);

        horizontalLayout_156 = new QHBoxLayout();
        horizontalLayout_156->setObjectName("horizontalLayout_156");
        ping_label_12 = new QLabel(groupBox_15);
        ping_label_12->setObjectName("ping_label_12");

        horizontalLayout_156->addWidget(ping_label_12);

        activity_aging_spin_box = new QSpinBox(groupBox_15);
        activity_aging_spin_box->setObjectName("activity_aging_spin_box");
        activity_aging_spin_box->setMinimum(0);
        activity_aging_spin_box->setMaximum(1440);
        activity_aging_spin_box->setSingleStep(1);
        activity_aging_spin_box->setValue(2);

        horizontalLayout_156->addWidget(activity_aging_spin_box);


        verticalLayout_22->addLayout(horizontalLayout_156);


        verticalLayout_26->addWidget(groupBox_15);

        heartbeatGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        heartbeatGroupBox->setObjectName("heartbeatGroupBox");
        heartbeatGroupBox->setVisible(false);

        verticalLayout_26->addWidget(heartbeatGroupBox);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_12->setObjectName("groupBox_12");
        formLayout_2 = new QFormLayout(groupBox_12);
        formLayout_2->setObjectName("formLayout_2");
        label_24 = new QLabel(groupBox_12);
        label_24->setObjectName("label_24");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_24);

        eot_line_edit = new QLineEdit(groupBox_12);
        eot_line_edit->setObjectName("eot_line_edit");
        eot_line_edit->setMaxLength(2);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, eot_line_edit);

        label_32 = new QLabel(groupBox_12);
        label_32->setObjectName("label_32");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_32);

        mfi_line_edit = new QLineEdit(groupBox_12);
        mfi_line_edit->setObjectName("mfi_line_edit");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mfi_line_edit);


        verticalLayout_26->addWidget(groupBox_12);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_5);

        heartbeatGroupBoxOld = new QGroupBox(scrollAreaWidgetContents_2);
        heartbeatGroupBoxOld->setObjectName("heartbeatGroupBoxOld");
        heartbeatGroupBoxOld->setVisible(false);
        verticalLayout_21 = new QVBoxLayout(heartbeatGroupBoxOld);
        verticalLayout_21->setObjectName("verticalLayout_21");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        ping_label_10 = new QLabel(heartbeatGroupBoxOld);
        ping_label_10->setObjectName("ping_label_10");
        ping_label_10->setVisible(false);

        horizontalLayout_15->addWidget(ping_label_10);

        heartbeat_spin_box = new QSpinBox(heartbeatGroupBoxOld);
        heartbeat_spin_box->setObjectName("heartbeat_spin_box");
        heartbeat_spin_box->setVisible(false);
        heartbeat_spin_box->setMinimum(0);
        heartbeat_spin_box->setMaximum(1440);
        heartbeat_spin_box->setSingleStep(5);
        heartbeat_spin_box->setValue(30);

        horizontalLayout_15->addWidget(heartbeat_spin_box);


        verticalLayout_21->addLayout(horizontalLayout_15);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_2);


        verticalLayout_26->addWidget(heartbeatGroupBoxOld);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_24->addWidget(scrollArea_2);

        tabWidget_2->addTab(behaviorTab, QString());
        autoreplyTab = new QWidget();
        autoreplyTab->setObjectName("autoreplyTab");
        verticalLayout_17 = new QVBoxLayout(autoreplyTab);
        verticalLayout_17->setObjectName("verticalLayout_17");
        scrollArea_11 = new QScrollArea(autoreplyTab);
        scrollArea_11->setObjectName("scrollArea_11");
        scrollArea_11->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_11->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_11->setLineWidth(0);
        scrollArea_11->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName("scrollAreaWidgetContents_8");
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 601, 438));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_8);
        groupBox_13->setObjectName("groupBox_13");
        verticalLayout_34 = new QVBoxLayout(groupBox_13);
        verticalLayout_34->setObjectName("verticalLayout_34");
        heartbeat_anywhere_check_box = new QCheckBox(groupBox_13);
        heartbeat_anywhere_check_box->setObjectName("heartbeat_anywhere_check_box");

        verticalLayout_34->addWidget(heartbeat_anywhere_check_box);

        heartbeat_qso_pause_check_box = new QCheckBox(groupBox_13);
        heartbeat_qso_pause_check_box->setObjectName("heartbeat_qso_pause_check_box");

        verticalLayout_34->addWidget(heartbeat_qso_pause_check_box);

        heartbeat_ack_snr_check_box = new QCheckBox(groupBox_13);
        heartbeat_ack_snr_check_box->setObjectName("heartbeat_ack_snr_check_box");
        heartbeat_ack_snr_check_box->setVisible(false);

        verticalLayout_34->addWidget(heartbeat_ack_snr_check_box);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName("formLayout_16");
        formLayout_16->setContentsMargins(-1, -1, -1, 0);
        label_26 = new QLabel(groupBox_13);
        label_26->setObjectName("label_26");

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_26);

        hb_blacklist_line_edit = new QLineEdit(groupBox_13);
        hb_blacklist_line_edit->setObjectName("hb_blacklist_line_edit");

        formLayout_16->setWidget(0, QFormLayout::FieldRole, hb_blacklist_line_edit);


        verticalLayout_34->addLayout(formLayout_16);


        verticalLayout_16->addWidget(groupBox_13);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_8);
        groupBox_9->setObjectName("groupBox_9");
        formLayout = new QFormLayout(groupBox_9);
        formLayout->setObjectName("formLayout");
        autoreply_on_check_box = new QCheckBox(groupBox_9);
        autoreply_on_check_box->setObjectName("autoreply_on_check_box");

        formLayout->setWidget(0, QFormLayout::LabelRole, autoreply_on_check_box);

        relay_disabled_check_box = new QCheckBox(groupBox_9);
        relay_disabled_check_box->setObjectName("relay_disabled_check_box");

        formLayout->setWidget(2, QFormLayout::LabelRole, relay_disabled_check_box);

        label_23 = new QLabel(groupBox_9);
        label_23->setObjectName("label_23");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_23);

        auto_whitelist_line_edit = new QLineEdit(groupBox_9);
        auto_whitelist_line_edit->setObjectName("auto_whitelist_line_edit");

        formLayout->setWidget(3, QFormLayout::FieldRole, auto_whitelist_line_edit);

        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName("label_15");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_15);

        auto_blacklist_line_edit = new QLineEdit(groupBox_9);
        auto_blacklist_line_edit->setObjectName("auto_blacklist_line_edit");

        formLayout->setWidget(4, QFormLayout::FieldRole, auto_blacklist_line_edit);

        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName("label_10");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_10);

        tx_watchdog_spin_box = new QSpinBox(groupBox_9);
        tx_watchdog_spin_box->setObjectName("tx_watchdog_spin_box");
        tx_watchdog_spin_box->setMinimum(0);
        tx_watchdog_spin_box->setMaximum(1440);
        tx_watchdog_spin_box->setSingleStep(1);
        tx_watchdog_spin_box->setValue(60);

        formLayout->setWidget(5, QFormLayout::FieldRole, tx_watchdog_spin_box);

        autoreply_confirmation_check_box = new QCheckBox(groupBox_9);
        autoreply_confirmation_check_box->setObjectName("autoreply_confirmation_check_box");

        formLayout->setWidget(1, QFormLayout::LabelRole, autoreply_confirmation_check_box);


        verticalLayout_16->addWidget(groupBox_9);

        verticalSpacer_18 = new QSpacerItem(20, 220, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_18);

        scrollArea_11->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_17->addWidget(scrollArea_11);

        tabWidget_2->addTab(autoreplyTab, QString());

        verticalLayout_4->addWidget(tabWidget_2);

        configuration_tabs->addTab(general_tab, QString());
        radio_tab = new QWidget();
        radio_tab->setObjectName("radio_tab");
        gridLayout_3 = new QGridLayout(radio_tab);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        rig_label = new QLabel(radio_tab);
        rig_label->setObjectName("rig_label");

        horizontalLayout_7->addWidget(rig_label);

        rig_combo_box = new QComboBox(radio_tab);
        rig_combo_box->setObjectName("rig_combo_box");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rig_combo_box->sizePolicy().hasHeightForWidth());
        rig_combo_box->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(rig_combo_box);

        CAT_poll_interval_label = new QLabel(radio_tab);
        CAT_poll_interval_label->setObjectName("CAT_poll_interval_label");

        horizontalLayout_7->addWidget(CAT_poll_interval_label);

        CAT_poll_interval_spin_box = new QSpinBox(radio_tab);
        CAT_poll_interval_spin_box->setObjectName("CAT_poll_interval_spin_box");
        CAT_poll_interval_spin_box->setMinimum(1);

        horizontalLayout_7->addWidget(CAT_poll_interval_spin_box);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        test_CAT_push_button = new QPushButton(radio_tab);
        test_CAT_push_button->setObjectName("test_CAT_push_button");

        horizontalLayout_11->addWidget(test_CAT_push_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        test_PTT_push_button = new QPushButton(radio_tab);
        test_PTT_push_button->setObjectName("test_PTT_push_button");
        test_PTT_push_button->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: red;\n"
"	border-style	: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        test_PTT_push_button->setCheckable(true);

        horizontalLayout_11->addWidget(test_PTT_push_button);


        gridLayout_3->addLayout(horizontalLayout_11, 3, 0, 1, 1);

        tabWidget_3 = new QTabWidget(radio_tab);
        tabWidget_3->setObjectName("tabWidget_3");
        catTab = new QWidget();
        catTab->setObjectName("catTab");
        verticalLayout_25 = new QVBoxLayout(catTab);
        verticalLayout_25->setObjectName("verticalLayout_25");
        scrollArea_3 = new QScrollArea(catTab);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_3->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_3->setLineWidth(0);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 585, 414));
        verticalLayout_27 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        CAT_port_label = new QLabel(scrollAreaWidgetContents_3);
        CAT_port_label->setObjectName("CAT_port_label");

        horizontalLayout_3->addWidget(CAT_port_label);

        CAT_port_combo_box = new QComboBox(scrollAreaWidgetContents_3);
        CAT_port_combo_box->setObjectName("CAT_port_combo_box");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CAT_port_combo_box->sizePolicy().hasHeightForWidth());
        CAT_port_combo_box->setSizePolicy(sizePolicy1);
        CAT_port_combo_box->setEditable(true);
        CAT_port_combo_box->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);

        horizontalLayout_3->addWidget(CAT_port_combo_box);


        verticalLayout_27->addLayout(horizontalLayout_3);

        CAT_serial_port_parameters_group_box = new QGroupBox(scrollAreaWidgetContents_3);
        CAT_serial_port_parameters_group_box->setObjectName("CAT_serial_port_parameters_group_box");
        verticalLayout = new QVBoxLayout(CAT_serial_port_parameters_group_box);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        CAT_baud_label = new QLabel(CAT_serial_port_parameters_group_box);
        CAT_baud_label->setObjectName("CAT_baud_label");

        horizontalLayout_14->addWidget(CAT_baud_label);

        CAT_serial_baud_combo_box = new QComboBox(CAT_serial_port_parameters_group_box);
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->setObjectName("CAT_serial_baud_combo_box");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CAT_serial_baud_combo_box->sizePolicy().hasHeightForWidth());
        CAT_serial_baud_combo_box->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(CAT_serial_baud_combo_box);


        verticalLayout->addLayout(horizontalLayout_14);

        CAT_data_bits_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_data_bits_group_box->setObjectName("CAT_data_bits_group_box");
        horizontalLayout_4 = new QHBoxLayout(CAT_data_bits_group_box);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        CAT_default_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group = new QButtonGroup(configuration_dialog);
        CAT_data_bits_button_group->setObjectName("CAT_data_bits_button_group");
        CAT_data_bits_button_group->addButton(CAT_default_bit_radio_button);
        CAT_default_bit_radio_button->setObjectName("CAT_default_bit_radio_button");
        CAT_default_bit_radio_button->setChecked(true);

        horizontalLayout_4->addWidget(CAT_default_bit_radio_button);

        CAT_7_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group->addButton(CAT_7_bit_radio_button);
        CAT_7_bit_radio_button->setObjectName("CAT_7_bit_radio_button");
        CAT_7_bit_radio_button->setAutoExclusive(true);

        horizontalLayout_4->addWidget(CAT_7_bit_radio_button);

        CAT_8_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group->addButton(CAT_8_bit_radio_button);
        CAT_8_bit_radio_button->setObjectName("CAT_8_bit_radio_button");
        CAT_8_bit_radio_button->setChecked(false);

        horizontalLayout_4->addWidget(CAT_8_bit_radio_button);


        verticalLayout->addWidget(CAT_data_bits_group_box);

        CAT_stop_bits_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_stop_bits_group_box->setObjectName("CAT_stop_bits_group_box");
        horizontalLayout_2 = new QHBoxLayout(CAT_stop_bits_group_box);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        CAT_default_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group = new QButtonGroup(configuration_dialog);
        CAT_stop_bits_button_group->setObjectName("CAT_stop_bits_button_group");
        CAT_stop_bits_button_group->addButton(CAT_default_stop_bit_radio_button);
        CAT_default_stop_bit_radio_button->setObjectName("CAT_default_stop_bit_radio_button");
        CAT_default_stop_bit_radio_button->setChecked(true);

        horizontalLayout_2->addWidget(CAT_default_stop_bit_radio_button);

        CAT_one_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group->addButton(CAT_one_stop_bit_radio_button);
        CAT_one_stop_bit_radio_button->setObjectName("CAT_one_stop_bit_radio_button");

        horizontalLayout_2->addWidget(CAT_one_stop_bit_radio_button);

        CAT_two_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group->addButton(CAT_two_stop_bit_radio_button);
        CAT_two_stop_bit_radio_button->setObjectName("CAT_two_stop_bit_radio_button");
        CAT_two_stop_bit_radio_button->setChecked(false);

        horizontalLayout_2->addWidget(CAT_two_stop_bit_radio_button);


        verticalLayout->addWidget(CAT_stop_bits_group_box);

        CAT_handshake_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_handshake_group_box->setObjectName("CAT_handshake_group_box");
        gridLayout_11 = new QGridLayout(CAT_handshake_group_box);
        gridLayout_11->setObjectName("gridLayout_11");
        CAT_handshake_default_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group = new QButtonGroup(configuration_dialog);
        CAT_handshake_button_group->setObjectName("CAT_handshake_button_group");
        CAT_handshake_button_group->addButton(CAT_handshake_default_radio_button);
        CAT_handshake_default_radio_button->setObjectName("CAT_handshake_default_radio_button");
        CAT_handshake_default_radio_button->setChecked(true);

        gridLayout_11->addWidget(CAT_handshake_default_radio_button, 0, 0, 1, 1);

        CAT_handshake_none_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_none_radio_button);
        CAT_handshake_none_radio_button->setObjectName("CAT_handshake_none_radio_button");
        CAT_handshake_none_radio_button->setChecked(false);

        gridLayout_11->addWidget(CAT_handshake_none_radio_button, 0, 1, 1, 1);

        CAT_handshake_xon_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_xon_radio_button);
        CAT_handshake_xon_radio_button->setObjectName("CAT_handshake_xon_radio_button");

        gridLayout_11->addWidget(CAT_handshake_xon_radio_button, 1, 0, 1, 1);

        CAT_handshake_hardware_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_hardware_radio_button);
        CAT_handshake_hardware_radio_button->setObjectName("CAT_handshake_hardware_radio_button");

        gridLayout_11->addWidget(CAT_handshake_hardware_radio_button, 1, 1, 1, 1);


        verticalLayout->addWidget(CAT_handshake_group_box);

        CAT_control_lines_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_control_lines_group_box->setObjectName("CAT_control_lines_group_box");
        CAT_control_lines_group_box->setChecked(false);
        horizontalLayout_8 = new QHBoxLayout(CAT_control_lines_group_box);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName("formLayout_8");
        force_DTR_combo_box = new QComboBox(CAT_control_lines_group_box);
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->setObjectName("force_DTR_combo_box");

        formLayout_8->setWidget(0, QFormLayout::FieldRole, force_DTR_combo_box);

        force_DTR_label = new QLabel(CAT_control_lines_group_box);
        force_DTR_label->setObjectName("force_DTR_label");

        formLayout_8->setWidget(0, QFormLayout::LabelRole, force_DTR_label);


        horizontalLayout_8->addLayout(formLayout_8);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName("formLayout_9");
        force_RTS_label = new QLabel(CAT_control_lines_group_box);
        force_RTS_label->setObjectName("force_RTS_label");

        formLayout_9->setWidget(0, QFormLayout::LabelRole, force_RTS_label);

        force_RTS_combo_box = new QComboBox(CAT_control_lines_group_box);
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->setObjectName("force_RTS_combo_box");

        formLayout_9->setWidget(0, QFormLayout::FieldRole, force_RTS_combo_box);


        horizontalLayout_8->addLayout(formLayout_9);


        verticalLayout->addWidget(CAT_control_lines_group_box);


        verticalLayout_27->addWidget(CAT_serial_port_parameters_group_box);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_15);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_25->addWidget(scrollArea_3);

        tabWidget_3->addTab(catTab, QString());
        optionsTab = new QWidget();
        optionsTab->setObjectName("optionsTab");
        verticalLayout_12 = new QVBoxLayout(optionsTab);
        verticalLayout_12->setObjectName("verticalLayout_12");
        scrollArea_4 = new QScrollArea(optionsTab);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_4->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_4->setLineWidth(0);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 431, 454));
        verticalLayout_28 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        PTT_method_group_box = new QGroupBox(scrollAreaWidgetContents_4);
        PTT_method_group_box->setObjectName("PTT_method_group_box");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PTT_method_group_box->sizePolicy().hasHeightForWidth());
        PTT_method_group_box->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(PTT_method_group_box);
        gridLayout_2->setObjectName("gridLayout_2");
        PTT_VOX_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group = new QButtonGroup(configuration_dialog);
        PTT_method_button_group->setObjectName("PTT_method_button_group");
        PTT_method_button_group->addButton(PTT_VOX_radio_button);
        PTT_VOX_radio_button->setObjectName("PTT_VOX_radio_button");

        gridLayout_2->addWidget(PTT_VOX_radio_button, 0, 0, 1, 1);

        PTT_DTR_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_DTR_radio_button);
        PTT_DTR_radio_button->setObjectName("PTT_DTR_radio_button");
        PTT_DTR_radio_button->setChecked(true);

        gridLayout_2->addWidget(PTT_DTR_radio_button, 0, 1, 1, 1);

        PTT_CAT_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_CAT_radio_button);
        PTT_CAT_radio_button->setObjectName("PTT_CAT_radio_button");

        gridLayout_2->addWidget(PTT_CAT_radio_button, 1, 0, 1, 1);

        PTT_RTS_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_RTS_radio_button);
        PTT_RTS_radio_button->setObjectName("PTT_RTS_radio_button");

        gridLayout_2->addWidget(PTT_RTS_radio_button, 1, 1, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
        PTT_port_label = new QLabel(PTT_method_group_box);
        PTT_port_label->setObjectName("PTT_port_label");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, PTT_port_label);

        PTT_port_combo_box = new QComboBox(PTT_method_group_box);
        PTT_port_combo_box->setObjectName("PTT_port_combo_box");
        sizePolicy1.setHeightForWidth(PTT_port_combo_box->sizePolicy().hasHeightForWidth());
        PTT_port_combo_box->setSizePolicy(sizePolicy1);
        PTT_port_combo_box->setEditable(true);
        PTT_port_combo_box->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, PTT_port_combo_box);


        gridLayout_2->addLayout(formLayout_4, 2, 0, 2, 2);


        verticalLayout_28->addWidget(PTT_method_group_box);

        mode_group_box = new QGroupBox(scrollAreaWidgetContents_4);
        mode_group_box->setObjectName("mode_group_box");
        gridLayout_10 = new QGridLayout(mode_group_box);
        gridLayout_10->setObjectName("gridLayout_10");
        mode_USB_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group = new QButtonGroup(configuration_dialog);
        TX_mode_button_group->setObjectName("TX_mode_button_group");
        TX_mode_button_group->addButton(mode_USB_radio_button);
        mode_USB_radio_button->setObjectName("mode_USB_radio_button");
        mode_USB_radio_button->setChecked(true);

        gridLayout_10->addWidget(mode_USB_radio_button, 0, 1, 1, 1);

        mode_none_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group->addButton(mode_none_radio_button);
        mode_none_radio_button->setObjectName("mode_none_radio_button");

        gridLayout_10->addWidget(mode_none_radio_button, 0, 0, 1, 1);

        mode_data_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group->addButton(mode_data_radio_button);
        mode_data_radio_button->setObjectName("mode_data_radio_button");

        gridLayout_10->addWidget(mode_data_radio_button, 0, 2, 1, 1);


        verticalLayout_28->addWidget(mode_group_box);

        TX_audio_source_group_box = new QGroupBox(scrollAreaWidgetContents_4);
        TX_audio_source_group_box->setObjectName("TX_audio_source_group_box");
        gridLayout_7 = new QGridLayout(TX_audio_source_group_box);
        gridLayout_7->setObjectName("gridLayout_7");
        TX_source_data_radio_button = new QRadioButton(TX_audio_source_group_box);
        TX_audio_source_button_group = new QButtonGroup(configuration_dialog);
        TX_audio_source_button_group->setObjectName("TX_audio_source_button_group");
        TX_audio_source_button_group->addButton(TX_source_data_radio_button);
        TX_source_data_radio_button->setObjectName("TX_source_data_radio_button");

        gridLayout_7->addWidget(TX_source_data_radio_button, 0, 0, 1, 1);

        TX_source_mic_radio_button = new QRadioButton(TX_audio_source_group_box);
        TX_audio_source_button_group->addButton(TX_source_mic_radio_button);
        TX_source_mic_radio_button->setObjectName("TX_source_mic_radio_button");
        TX_source_mic_radio_button->setChecked(true);

        gridLayout_7->addWidget(TX_source_mic_radio_button, 0, 1, 1, 1);


        verticalLayout_28->addWidget(TX_audio_source_group_box);

        split_operation_group_box = new QGroupBox(scrollAreaWidgetContents_4);
        split_operation_group_box->setObjectName("split_operation_group_box");
        gridLayout_12 = new QGridLayout(split_operation_group_box);
        gridLayout_12->setObjectName("gridLayout_12");
        split_emulate_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group = new QButtonGroup(configuration_dialog);
        split_mode_button_group->setObjectName("split_mode_button_group");
        split_mode_button_group->addButton(split_emulate_radio_button);
        split_emulate_radio_button->setObjectName("split_emulate_radio_button");

        gridLayout_12->addWidget(split_emulate_radio_button, 0, 2, 1, 1);

        split_rig_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group->addButton(split_rig_radio_button);
        split_rig_radio_button->setObjectName("split_rig_radio_button");

        gridLayout_12->addWidget(split_rig_radio_button, 0, 1, 1, 1);

        split_none_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group->addButton(split_none_radio_button);
        split_none_radio_button->setObjectName("split_none_radio_button");
        split_none_radio_button->setChecked(true);

        gridLayout_12->addWidget(split_none_radio_button, 0, 0, 1, 1);


        verticalLayout_28->addWidget(split_operation_group_box);

        groupBox_14 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_14->setObjectName("groupBox_14");
        verticalLayout_33 = new QVBoxLayout(groupBox_14);
        verticalLayout_33->setObjectName("verticalLayout_33");
        frame = new QFrame(groupBox_14);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(0);
        formLayout_3 = new QFormLayout(frame);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        sbTxDelay = new QDoubleSpinBox(frame);
        sbTxDelay->setObjectName("sbTxDelay");
        sbTxDelay->setDecimals(1);
        sbTxDelay->setMinimum(0.000000000000000);
        sbTxDelay->setMaximum(0.500000000000000);
        sbTxDelay->setSingleStep(0.100000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, sbTxDelay);

        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        ptt_command_line_edit = new QLineEdit(frame);
        ptt_command_line_edit->setObjectName("ptt_command_line_edit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ptt_command_line_edit);


        verticalLayout_33->addWidget(frame);

        hold_ptt_check_box = new QCheckBox(groupBox_14);
        hold_ptt_check_box->setObjectName("hold_ptt_check_box");

        verticalLayout_33->addWidget(hold_ptt_check_box);


        verticalLayout_28->addWidget(groupBox_14);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_16);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_12->addWidget(scrollArea_4);

        tabWidget_3->addTab(optionsTab, QString());

        gridLayout_3->addWidget(tabWidget_3, 1, 0, 2, 1);

        configuration_tabs->addTab(radio_tab, QString());
        audio_tab = new QWidget();
        audio_tab->setObjectName("audio_tab");
        verticalLayout_9 = new QVBoxLayout(audio_tab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        scrollArea_5 = new QScrollArea(audio_tab);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_5->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_5->setLineWidth(0);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 647, 493));
        verticalLayout_29 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        soundcard_group_box = new QGroupBox(scrollAreaWidgetContents_5);
        soundcard_group_box->setObjectName("soundcard_group_box");
        gridLayout_6 = new QGridLayout(soundcard_group_box);
        gridLayout_6->setObjectName("gridLayout_6");
        sound_output_combo_box = new LazyFillComboBox(soundcard_group_box);
        sound_output_combo_box->setObjectName("sound_output_combo_box");
        sizePolicy.setHeightForWidth(sound_output_combo_box->sizePolicy().hasHeightForWidth());
        sound_output_combo_box->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(sound_output_combo_box, 1, 1, 1, 1);

        sound_input_combo_box = new LazyFillComboBox(soundcard_group_box);
        sound_input_combo_box->setObjectName("sound_input_combo_box");
        sizePolicy.setHeightForWidth(sound_input_combo_box->sizePolicy().hasHeightForWidth());
        sound_input_combo_box->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(sound_input_combo_box, 0, 1, 1, 1);

        sound_input_label = new QLabel(soundcard_group_box);
        sound_input_label->setObjectName("sound_input_label");

        gridLayout_6->addWidget(sound_input_label, 0, 0, 1, 1);

        sound_input_channel_combo_box = new QComboBox(soundcard_group_box);
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->setObjectName("sound_input_channel_combo_box");

        gridLayout_6->addWidget(sound_input_channel_combo_box, 0, 2, 1, 1);

        sound_output_channel_combo_box = new QComboBox(soundcard_group_box);
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->setObjectName("sound_output_channel_combo_box");

        gridLayout_6->addWidget(sound_output_channel_combo_box, 1, 2, 1, 1);

        sound_output_label = new QLabel(soundcard_group_box);
        sound_output_label->setObjectName("sound_output_label");

        gridLayout_6->addWidget(sound_output_label, 1, 0, 1, 1);


        verticalLayout_29->addWidget(soundcard_group_box);

        notification_soundcard_group_box = new QGroupBox(scrollAreaWidgetContents_5);
        notification_soundcard_group_box->setObjectName("notification_soundcard_group_box");
        gridLayout_18 = new QGridLayout(notification_soundcard_group_box);
        gridLayout_18->setObjectName("gridLayout_18");
        notification_sound_output_label = new QLabel(notification_soundcard_group_box);
        notification_sound_output_label->setObjectName("notification_sound_output_label");

        gridLayout_18->addWidget(notification_sound_output_label, 0, 0, 1, 1);

        notification_sound_output_combo_box = new LazyFillComboBox(notification_soundcard_group_box);
        notification_sound_output_combo_box->setObjectName("notification_sound_output_combo_box");
        sizePolicy.setHeightForWidth(notification_sound_output_combo_box->sizePolicy().hasHeightForWidth());
        notification_sound_output_combo_box->setSizePolicy(sizePolicy);

        gridLayout_18->addWidget(notification_sound_output_combo_box, 0, 1, 1, 1);


        verticalLayout_29->addWidget(notification_soundcard_group_box);

        save_path_group_box = new QGroupBox(scrollAreaWidgetContents_5);
        save_path_group_box->setObjectName("save_path_group_box");
        horizontalLayout_5 = new QHBoxLayout(save_path_group_box);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        save_path_label = new QLabel(save_path_group_box);
        save_path_label->setObjectName("save_path_label");

        horizontalLayout_5->addWidget(save_path_label);

        save_path_display_label = new QLabel(save_path_group_box);
        save_path_display_label->setObjectName("save_path_display_label");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(save_path_display_label->sizePolicy().hasHeightForWidth());
        save_path_display_label->setSizePolicy(sizePolicy4);
        save_path_display_label->setAutoFillBackground(false);
        save_path_display_label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(save_path_display_label);

        save_path_select_push_button = new QPushButton(save_path_group_box);
        save_path_select_push_button->setObjectName("save_path_select_push_button");

        horizontalLayout_5->addWidget(save_path_select_push_button);


        verticalLayout_29->addWidget(save_path_group_box);

        split_operation_group_box_2 = new QGroupBox(scrollAreaWidgetContents_5);
        split_operation_group_box_2->setObjectName("split_operation_group_box_2");
        horizontalLayout_13 = new QHBoxLayout(split_operation_group_box_2);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        checkBoxPwrBandTxMemory = new QCheckBox(split_operation_group_box_2);
        checkBoxPwrBandTxMemory->setObjectName("checkBoxPwrBandTxMemory");

        horizontalLayout_13->addWidget(checkBoxPwrBandTxMemory);

        checkBoxPwrBandTuneMemory = new QCheckBox(split_operation_group_box_2);
        checkBoxPwrBandTuneMemory->setObjectName("checkBoxPwrBandTuneMemory");

        horizontalLayout_13->addWidget(checkBoxPwrBandTuneMemory);


        verticalLayout_29->addWidget(split_operation_group_box_2);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_3);

        widget_2 = new QWidget(scrollAreaWidgetContents_5);
        widget_2->setObjectName("widget_2");

        verticalLayout_29->addWidget(widget_2);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_9->addWidget(scrollArea_5);

        configuration_tabs->addTab(audio_tab, QString());
        reporting_tab = new QWidget();
        reporting_tab->setObjectName("reporting_tab");
        verticalLayout_5 = new QVBoxLayout(reporting_tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        logging_group_box = new QGroupBox(reporting_tab);
        logging_group_box->setObjectName("logging_group_box");
        verticalLayout_7 = new QVBoxLayout(logging_group_box);
        verticalLayout_7->setObjectName("verticalLayout_7");
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName("gridLayout_14");
        opCallEntry = new QLineEdit(logging_group_box);
        opCallEntry->setObjectName("opCallEntry");

        gridLayout_14->addWidget(opCallEntry, 0, 1, 1, 1);

        label_13 = new QLabel(logging_group_box);
        label_13->setObjectName("label_13");

        gridLayout_14->addWidget(label_13, 0, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_14);


        verticalLayout_5->addWidget(logging_group_box);

        scrollArea_6 = new QScrollArea(reporting_tab);
        scrollArea_6->setObjectName("scrollArea_6");
        scrollArea_6->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_6->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_6->setLineWidth(0);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 647, 722));
        verticalLayout_30 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_30->setObjectName("verticalLayout_30");
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        network_group_box = new QGroupBox(scrollAreaWidgetContents_6);
        network_group_box->setObjectName("network_group_box");
        gridLayout_9 = new QGridLayout(network_group_box);
        gridLayout_9->setObjectName("gridLayout_9");
        udp_server_label_2 = new QLabel(network_group_box);
        udp_server_label_2->setObjectName("udp_server_label_2");
        udp_server_label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_9->addWidget(udp_server_label_2, 2, 0, 1, 1);

        label_18 = new QLabel(network_group_box);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_9->addWidget(label_18, 3, 0, 1, 1);

        spot_blacklist_line_edit = new QLineEdit(network_group_box);
        spot_blacklist_line_edit->setObjectName("spot_blacklist_line_edit");

        gridLayout_9->addWidget(spot_blacklist_line_edit, 4, 1, 1, 2);

        aprs_server_line_edit = new QLineEdit(network_group_box);
        aprs_server_line_edit->setObjectName("aprs_server_line_edit");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(aprs_server_line_edit->sizePolicy().hasHeightForWidth());
        aprs_server_line_edit->setSizePolicy(sizePolicy5);
        aprs_server_line_edit->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);

        gridLayout_9->addWidget(aprs_server_line_edit, 2, 1, 1, 2);

        psk_reporter_tcpip_check_box = new QCheckBox(network_group_box);
        psk_reporter_tcpip_check_box->setObjectName("psk_reporter_tcpip_check_box");

        gridLayout_9->addWidget(psk_reporter_tcpip_check_box, 0, 1, 1, 2);

        enable_aprs_spotting_check_box = new QCheckBox(network_group_box);
        enable_aprs_spotting_check_box->setObjectName("enable_aprs_spotting_check_box");
        enable_aprs_spotting_check_box->setChecked(true);

        gridLayout_9->addWidget(enable_aprs_spotting_check_box, 1, 0, 1, 2);

        label_31 = new QLabel(network_group_box);
        label_31->setObjectName("label_31");

        gridLayout_9->addWidget(label_31, 4, 0, 1, 1);

        aprs_server_port_spin_box = new QSpinBox(network_group_box);
        aprs_server_port_spin_box->setObjectName("aprs_server_port_spin_box");
        aprs_server_port_spin_box->setMinimum(0);
        aprs_server_port_spin_box->setMaximum(65534);
        aprs_server_port_spin_box->setValue(14580);

        gridLayout_9->addWidget(aprs_server_port_spin_box, 3, 1, 1, 2);

        psk_reporter_check_box = new QCheckBox(network_group_box);
        psk_reporter_check_box->setObjectName("psk_reporter_check_box");
        psk_reporter_check_box->setChecked(true);

        gridLayout_9->addWidget(psk_reporter_check_box, 0, 0, 1, 1);


        verticalLayout_30->addWidget(network_group_box);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_6);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_16 = new QGridLayout(groupBox_4);
        gridLayout_16->setObjectName("gridLayout_16");
        tcp_server_line_edit = new QLineEdit(groupBox_4);
        tcp_server_line_edit->setObjectName("tcp_server_line_edit");

        gridLayout_16->addWidget(tcp_server_line_edit, 6, 1, 1, 1);

        udp_server_line_edit = new QLineEdit(groupBox_4);
        udp_server_line_edit->setObjectName("udp_server_line_edit");
        sizePolicy5.setHeightForWidth(udp_server_line_edit->sizePolicy().hasHeightForWidth());
        udp_server_line_edit->setSizePolicy(sizePolicy5);
        udp_server_line_edit->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);

        gridLayout_16->addWidget(udp_server_line_edit, 3, 1, 1, 1);

        tcpEnable = new QCheckBox(groupBox_4);
        tcpEnable->setObjectName("tcpEnable");

        gridLayout_16->addWidget(tcpEnable, 6, 2, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_16->addWidget(label_16, 6, 0, 1, 1);

        udp_server_port_spin_box = new QSpinBox(groupBox_4);
        udp_server_port_spin_box->setObjectName("udp_server_port_spin_box");
        udp_server_port_spin_box->setMinimum(0);
        udp_server_port_spin_box->setMaximum(65534);

        gridLayout_16->addWidget(udp_server_port_spin_box, 4, 1, 1, 1);

        accept_tcp_requests_check_box = new QCheckBox(groupBox_4);
        accept_tcp_requests_check_box->setObjectName("accept_tcp_requests_check_box");

        gridLayout_16->addWidget(accept_tcp_requests_check_box, 7, 2, 1, 1);

        udp_server_label = new QLabel(groupBox_4);
        udp_server_label->setObjectName("udp_server_label");
        udp_server_label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_16->addWidget(udp_server_label, 3, 0, 1, 1);

        tcp_server_port_spin_box = new QSpinBox(groupBox_4);
        tcp_server_port_spin_box->setObjectName("tcp_server_port_spin_box");
        tcp_server_port_spin_box->setMaximum(65534);

        gridLayout_16->addWidget(tcp_server_port_spin_box, 7, 1, 1, 1);

        label_29 = new QLabel(groupBox_4);
        label_29->setObjectName("label_29");
        label_29->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_16->addWidget(label_29, 7, 0, 1, 1);

        tcp_max_connections_spin_box = new QSpinBox(groupBox_4);
        tcp_max_connections_spin_box->setObjectName("tcp_max_connections_spin_box");
        tcp_max_connections_spin_box->setMinimum(1);
        tcp_max_connections_spin_box->setMaximum(100);

        gridLayout_16->addWidget(tcp_max_connections_spin_box, 8, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_16->addWidget(label_6, 4, 0, 1, 1);

        use_dynamic_grid = new QCheckBox(groupBox_4);
        use_dynamic_grid->setObjectName("use_dynamic_grid");

        gridLayout_16->addWidget(use_dynamic_grid, 0, 0, 1, 2);

        label_30 = new QLabel(groupBox_4);
        label_30->setObjectName("label_30");
        label_30->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_16->addWidget(label_30, 8, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_16->addItem(verticalSpacer_8, 1, 0, 1, 3);

        verticalSpacer_20 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_16->addItem(verticalSpacer_20, 5, 0, 1, 3);

        accept_udp_requests_check_box = new QCheckBox(groupBox_4);
        accept_udp_requests_check_box->setObjectName("accept_udp_requests_check_box");

        gridLayout_16->addWidget(accept_udp_requests_check_box, 4, 2, 1, 1);

        udpEnable = new QCheckBox(groupBox_4);
        udpEnable->setObjectName("udpEnable");

        gridLayout_16->addWidget(udpEnable, 3, 2, 1, 1);


        verticalLayout_30->addWidget(groupBox_4);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents_6);
        groupBox_11->setObjectName("groupBox_11");
        formLayout_12 = new QFormLayout(groupBox_11);
        formLayout_12->setObjectName("formLayout_12");
        enable_n3fjp_broadcast_check_box = new QCheckBox(groupBox_11);
        enable_n3fjp_broadcast_check_box->setObjectName("enable_n3fjp_broadcast_check_box");

        formLayout_12->setWidget(0, QFormLayout::LabelRole, enable_n3fjp_broadcast_check_box);

        formLayout_20 = new QFormLayout();
        formLayout_20->setObjectName("formLayout_20");
        n3fjp_server_name_label = new QLabel(groupBox_11);
        n3fjp_server_name_label->setObjectName("n3fjp_server_name_label");

        formLayout_20->setWidget(0, QFormLayout::LabelRole, n3fjp_server_name_label);

        n3fjp_server_name_line_edit = new QLineEdit(groupBox_11);
        n3fjp_server_name_line_edit->setObjectName("n3fjp_server_name_line_edit");

        formLayout_20->setWidget(0, QFormLayout::FieldRole, n3fjp_server_name_line_edit);

        n3fjp_server_port_label = new QLabel(groupBox_11);
        n3fjp_server_port_label->setObjectName("n3fjp_server_port_label");

        formLayout_20->setWidget(1, QFormLayout::LabelRole, n3fjp_server_port_label);

        n3fjp_server_port_spin_box = new QSpinBox(groupBox_11);
        n3fjp_server_port_spin_box->setObjectName("n3fjp_server_port_spin_box");

        formLayout_20->setWidget(1, QFormLayout::FieldRole, n3fjp_server_port_spin_box);


        formLayout_12->setLayout(1, QFormLayout::LabelRole, formLayout_20);


        verticalLayout_30->addWidget(groupBox_11);

        n1mm_group_box = new QGroupBox(scrollAreaWidgetContents_6);
        n1mm_group_box->setObjectName("n1mm_group_box");
        formLayout_15 = new QFormLayout(n1mm_group_box);
        formLayout_15->setObjectName("formLayout_15");
        formLayout_15->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        enable_n1mm_broadcast_check_box = new QCheckBox(n1mm_group_box);
        enable_n1mm_broadcast_check_box->setObjectName("enable_n1mm_broadcast_check_box");

        formLayout_15->setWidget(0, QFormLayout::LabelRole, enable_n1mm_broadcast_check_box);

        formLayout_22 = new QFormLayout();
        formLayout_22->setObjectName("formLayout_22");
        n1mm_server_name_label = new QLabel(n1mm_group_box);
        n1mm_server_name_label->setObjectName("n1mm_server_name_label");

        formLayout_22->setWidget(0, QFormLayout::LabelRole, n1mm_server_name_label);

        n1mm_server_name_line_edit = new QLineEdit(n1mm_group_box);
        n1mm_server_name_line_edit->setObjectName("n1mm_server_name_line_edit");

        formLayout_22->setWidget(0, QFormLayout::FieldRole, n1mm_server_name_line_edit);

        n1mm_server_port_label = new QLabel(n1mm_group_box);
        n1mm_server_port_label->setObjectName("n1mm_server_port_label");

        formLayout_22->setWidget(1, QFormLayout::LabelRole, n1mm_server_port_label);

        n1mm_server_port_spin_box = new QSpinBox(n1mm_group_box);
        n1mm_server_port_spin_box->setObjectName("n1mm_server_port_spin_box");

        formLayout_22->setWidget(1, QFormLayout::FieldRole, n1mm_server_port_spin_box);


        formLayout_15->setLayout(1, QFormLayout::LabelRole, formLayout_22);


        verticalLayout_30->addWidget(n1mm_group_box);

        aprsForm = new QWidget(scrollAreaWidgetContents_6);
        aprsForm->setObjectName("aprsForm");
        aprsForm->setMinimumSize(QSize(0, 0));
        verticalLayout_36 = new QVBoxLayout(aprsForm);
        verticalLayout_36->setSpacing(0);
        verticalLayout_36->setObjectName("verticalLayout_36");
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);

        verticalLayout_30->addWidget(aprsForm);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_7);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_4);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_5->addWidget(scrollArea_6);

        configuration_tabs->addTab(reporting_tab, QString());
        frequencies_tab = new QWidget();
        frequencies_tab->setObjectName("frequencies_tab");
        verticalLayout_10 = new QVBoxLayout(frequencies_tab);
        verticalLayout_10->setObjectName("verticalLayout_10");
        scrollArea_7 = new QScrollArea(frequencies_tab);
        scrollArea_7->setObjectName("scrollArea_7");
        scrollArea_7->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_7->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_7->setLineWidth(0);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 647, 493));
        verticalLayout_31 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName("formLayout_7");
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_8);

        calibration_slope_ppm_spin_box = new QDoubleSpinBox(groupBox_3);
        calibration_slope_ppm_spin_box->setObjectName("calibration_slope_ppm_spin_box");
        calibration_slope_ppm_spin_box->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        calibration_slope_ppm_spin_box->setDecimals(4);
        calibration_slope_ppm_spin_box->setMinimum(-999.999900000000025);
        calibration_slope_ppm_spin_box->setMaximum(999.999900000000025);
        calibration_slope_ppm_spin_box->setSingleStep(0.100000000000000);
        calibration_slope_ppm_spin_box->setValue(0.000000000000000);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, calibration_slope_ppm_spin_box);


        horizontalLayout_6->addLayout(formLayout_7);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName("formLayout_14");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        formLayout_14->setWidget(0, QFormLayout::LabelRole, label_7);

        calibration_intercept_spin_box = new QDoubleSpinBox(groupBox_3);
        calibration_intercept_spin_box->setObjectName("calibration_intercept_spin_box");
        calibration_intercept_spin_box->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        calibration_intercept_spin_box->setDecimals(2);
        calibration_intercept_spin_box->setMinimum(-99999.990000000005239);
        calibration_intercept_spin_box->setMaximum(99999.990000000005239);
        calibration_intercept_spin_box->setSingleStep(0.100000000000000);

        formLayout_14->setWidget(0, QFormLayout::FieldRole, calibration_intercept_spin_box);


        horizontalLayout_6->addLayout(formLayout_14);


        verticalLayout_31->addWidget(groupBox_3);

        groupBox = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        frequencies_table_view = new QTableView(groupBox);
        frequencies_table_view->setObjectName("frequencies_table_view");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frequencies_table_view->sizePolicy().hasHeightForWidth());
        frequencies_table_view->setSizePolicy(sizePolicy6);
        frequencies_table_view->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        frequencies_table_view->setDragDropMode(QAbstractItemView::DragDropMode::DragOnly);
        frequencies_table_view->setAlternatingRowColors(true);
        frequencies_table_view->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        frequencies_table_view->setSortingEnabled(true);
        frequencies_table_view->horizontalHeader()->setStretchLastSection(true);
        frequencies_table_view->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(frequencies_table_view);


        verticalLayout_31->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_13 = new QVBoxLayout(groupBox_2);
        verticalLayout_13->setObjectName("verticalLayout_13");
        auto_switch_bands_check_box = new QCheckBox(groupBox_2);
        auto_switch_bands_check_box->setObjectName("auto_switch_bands_check_box");

        verticalLayout_13->addWidget(auto_switch_bands_check_box);

        stations_table_view = new QTableView(groupBox_2);
        stations_table_view->setObjectName("stations_table_view");
        stations_table_view->setEnabled(false);
        stations_table_view->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        stations_table_view->setAcceptDrops(true);
        stations_table_view->setDragEnabled(true);
        stations_table_view->setDragDropOverwriteMode(true);
        stations_table_view->setDragDropMode(QAbstractItemView::DragDropMode::DragDrop);
        stations_table_view->setDefaultDropAction(Qt::DropAction::MoveAction);
        stations_table_view->setAlternatingRowColors(true);
        stations_table_view->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        stations_table_view->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        stations_table_view->setSortingEnabled(true);
        stations_table_view->setWordWrap(true);
        stations_table_view->horizontalHeader()->setCascadingSectionResizes(true);
        stations_table_view->horizontalHeader()->setMinimumSectionSize(100);
        stations_table_view->horizontalHeader()->setDefaultSectionSize(120);
        stations_table_view->horizontalHeader()->setStretchLastSection(true);
        stations_table_view->verticalHeader()->setVisible(false);
        stations_table_view->verticalHeader()->setMinimumSectionSize(24);
        stations_table_view->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout_13->addWidget(stations_table_view);


        verticalLayout_31->addWidget(groupBox_2);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_10->addWidget(scrollArea_7);

        configuration_tabs->addTab(frequencies_tab, QString());
        tx_macros_tab = new QWidget();
        tx_macros_tab->setObjectName("tx_macros_tab");
        gridLayout = new QGridLayout(tx_macros_tab);
        gridLayout->setObjectName("gridLayout");
        add_macro_push_button = new QPushButton(tx_macros_tab);
        add_macro_push_button->setObjectName("add_macro_push_button");

        gridLayout->addWidget(add_macro_push_button, 0, 1, 1, 1);

        add_macro_line_edit = new QLineEdit(tx_macros_tab);
        add_macro_line_edit->setObjectName("add_macro_line_edit");

        gridLayout->addWidget(add_macro_line_edit, 0, 0, 1, 1);

        delete_macro_push_button = new QPushButton(tx_macros_tab);
        delete_macro_push_button->setObjectName("delete_macro_push_button");

        gridLayout->addWidget(delete_macro_push_button, 0, 2, 1, 1);

        macros_list_view = new QListView(tx_macros_tab);
        macros_list_view->setObjectName("macros_list_view");
        macros_list_view->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        macros_list_view->setStyleSheet(QString::fromUtf8("QListView {\n"
"    show-decoration-selected: 1; /* make the selection span the entire width of the view */\n"
"}\n"
"\n"
"QListView::item:alternate {\n"
"    background: #EEEEEE;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    border: 1px solid #6a6ea9;\n"
"}\n"
"\n"
"QListView::item:selected:!active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ABAFE5, stop: 1 #8588B2);\n"
"}\n"
"\n"
"QListView::item:selected:active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #6a6ea9, stop: 1 #888dd9);\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #FAFBFE, stop: 1 #DCDEF1);\n"
"}"));
        macros_list_view->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        macros_list_view->setDefaultDropAction(Qt::DropAction::MoveAction);
        macros_list_view->setAlternatingRowColors(true);
        macros_list_view->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        macros_list_view->setUniformItemSizes(true);

        gridLayout->addWidget(macros_list_view, 1, 0, 1, 3);

        configuration_tabs->addTab(tx_macros_tab, QString());
        notifications_tab = new QWidget();
        notifications_tab->setObjectName("notifications_tab");
        verticalLayout_32 = new QVBoxLayout(notifications_tab);
        verticalLayout_32->setObjectName("verticalLayout_32");
        scrollArea_12 = new QScrollArea(notifications_tab);
        scrollArea_12->setObjectName("scrollArea_12");
        scrollArea_12->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_12->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_12->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName("scrollAreaWidgetContents_11");
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 647, 493));
        verticalLayout_35 = new QVBoxLayout(scrollAreaWidgetContents_11);
        verticalLayout_35->setObjectName("verticalLayout_35");
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        notifications_check_box = new QCheckBox(scrollAreaWidgetContents_11);
        notifications_check_box->setObjectName("notifications_check_box");

        verticalLayout_35->addWidget(notifications_check_box);

        notifications_table_widget = new QTableWidget(scrollAreaWidgetContents_11);
        if (notifications_table_widget->columnCount() < 4)
            notifications_table_widget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        notifications_table_widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        notifications_table_widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        notifications_table_widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        notifications_table_widget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        notifications_table_widget->setObjectName("notifications_table_widget");
        notifications_table_widget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        notifications_table_widget->setAlternatingRowColors(true);
        notifications_table_widget->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        notifications_table_widget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        notifications_table_widget->setShowGrid(false);
        notifications_table_widget->horizontalHeader()->setDefaultSectionSize(125);
        notifications_table_widget->horizontalHeader()->setStretchLastSection(true);
        notifications_table_widget->verticalHeader()->setVisible(false);

        verticalLayout_35->addWidget(notifications_table_widget);

        scrollArea_12->setWidget(scrollAreaWidgetContents_11);

        verticalLayout_32->addWidget(scrollArea_12);

        configuration_tabs->addTab(notifications_tab, QString());
        colors_tab = new QWidget();
        colors_tab->setObjectName("colors_tab");
        verticalLayout_15 = new QVBoxLayout(colors_tab);
        verticalLayout_15->setObjectName("verticalLayout_15");
        groupBox_10 = new QGroupBox(colors_tab);
        groupBox_10->setObjectName("groupBox_10");
        gridLayout_17 = new QGridLayout(groupBox_10);
        gridLayout_17->setObjectName("gridLayout_17");
        font_push_button = new QPushButton(groupBox_10);
        font_push_button->setObjectName("font_push_button");
        font_push_button->setEnabled(true);

        gridLayout_17->addWidget(font_push_button, 0, 0, 1, 1);


        verticalLayout_15->addWidget(groupBox_10);

        tabWidget = new QTabWidget(colors_tab);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabBarAutoHide(false);
        uiTab1 = new QWidget();
        uiTab1->setObjectName("uiTab1");
        verticalLayout_18 = new QVBoxLayout(uiTab1);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(-1, 9, -1, 9);
        scrollArea_8 = new QScrollArea(uiTab1);
        scrollArea_8->setObjectName("scrollArea_8");
        scrollArea_8->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_8->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_8->setLineWidth(0);
        scrollArea_8->setWidgetResizable(true);
        scrollAreaContentsWidget_8 = new QWidget();
        scrollAreaContentsWidget_8->setObjectName("scrollAreaContentsWidget_8");
        scrollAreaContentsWidget_8->setGeometry(QRect(0, 0, 601, 485));
        verticalLayout_14 = new QVBoxLayout(scrollAreaContentsWidget_8);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(0, -1, 0, 0);
        primaryHighlightButton = new QPushButton(scrollAreaContentsWidget_8);
        primaryHighlightButton->setObjectName("primaryHighlightButton");
        primaryHighlightButton->setMinimumSize(QSize(140, 0));

        gridLayout_15->addWidget(primaryHighlightButton, 8, 1, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_15->addItem(verticalSpacer_17, 10, 1, 1, 1);

        tableForegroundButton = new QPushButton(scrollAreaContentsWidget_8);
        tableForegroundButton->setObjectName("tableForegroundButton");

        gridLayout_15->addWidget(tableForegroundButton, 0, 1, 1, 1);

        label_25 = new QLabel(scrollAreaContentsWidget_8);
        label_25->setObjectName("label_25");
        label_25->setWordWrap(true);

        gridLayout_15->addWidget(label_25, 9, 0, 1, 1);

        tableSelectionBackgroundLabel = new QLabel(scrollAreaContentsWidget_8);
        tableSelectionBackgroundLabel->setObjectName("tableSelectionBackgroundLabel");
        tableSelectionBackgroundLabel->setMinimumSize(QSize(80, 20));
        tableSelectionBackgroundLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #3498db}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
"<widget name=\"__qt_fake_top_level\">\n"
"<widget class=\"QLabel\" name=\"labCQ\">\n"
"<property name=\"geometry\">\n"
"<rect>\n"
"<x>12</x>\n"
"<y>32</y>\n"
"<width>302</width>\n"
"<height>25</height>\n"
"</rect>\n"
"</property>\n"
"<property name=\"minimumSize\">\n"
"<size>\n"
"<width>80</width>\n"
"<height>20</height>\n"
"</size>\n"
"</property>\n"
"<property name=\"styleSheet\">\n"
"<string notr=\"true\">QLabel{background-color: #66ff66}</string>\n"
"</property>\n"
"<property name=\"text\">\n"
"<string>K1ABC</string>\n"
"</property>\n"
"<property name=\"alignment\">\n"
"<set>Qt::AlignCenter</set>\n"
"</property>\n"
"</widget>\n"
"</widget>\n"
"<resources/>\n"
"</ui>\n"
""));
        tableSelectionBackgroundLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(tableSelectionBackgroundLabel, 4, 0, 1, 1);

        primaryHighlightLabel = new QLabel(scrollAreaContentsWidget_8);
        primaryHighlightLabel->setObjectName("primaryHighlightLabel");
        primaryHighlightLabel->setMinimumSize(QSize(80, 20));
        primaryHighlightLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #f1c40f}"));
        primaryHighlightLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(primaryHighlightLabel, 8, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_15->addItem(verticalSpacer_11, 7, 1, 1, 1);

        secondaryHighlightButton = new QPushButton(scrollAreaContentsWidget_8);
        secondaryHighlightButton->setObjectName("secondaryHighlightButton");
        secondaryHighlightButton->setMinimumSize(QSize(140, 0));

        gridLayout_15->addWidget(secondaryHighlightButton, 11, 1, 1, 1);

        secondaryHighlightLineEdit = new QLineEdit(scrollAreaContentsWidget_8);
        secondaryHighlightLineEdit->setObjectName("secondaryHighlightLineEdit");

        gridLayout_15->addWidget(secondaryHighlightLineEdit, 12, 1, 1, 1);

        tableBackgroundButton = new QPushButton(scrollAreaContentsWidget_8);
        tableBackgroundButton->setObjectName("tableBackgroundButton");

        gridLayout_15->addWidget(tableBackgroundButton, 3, 1, 1, 1);

        tableForegroundLabel = new QLabel(scrollAreaContentsWidget_8);
        tableForegroundLabel->setObjectName("tableForegroundLabel");
        tableForegroundLabel->setMinimumSize(QSize(80, 20));
        tableForegroundLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: white}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
"<widget name=\"__qt_fake_top_level\">\n"
"<widget class=\"QLabel\" name=\"labCQ\">\n"
"<property name=\"geometry\">\n"
"<rect>\n"
"<x>12</x>\n"
"<y>32</y>\n"
"<width>302</width>\n"
"<height>25</height>\n"
"</rect>\n"
"</property>\n"
"<property name=\"minimumSize\">\n"
"<size>\n"
"<width>80</width>\n"
"<height>20</height>\n"
"</size>\n"
"</property>\n"
"<property name=\"styleSheet\">\n"
"<string notr=\"true\">QLabel{background-color: #66ff66}</string>\n"
"</property>\n"
"<property name=\"text\">\n"
"<string>K1ABC</string>\n"
"</property>\n"
"<property name=\"alignment\">\n"
"<set>Qt::AlignCenter</set>\n"
"</property>\n"
"</widget>\n"
"</widget>\n"
"<resources/>\n"
"</ui>\n"
""));
        tableForegroundLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(tableForegroundLabel, 0, 0, 1, 1);

        tableBackgroundLabel = new QLabel(scrollAreaContentsWidget_8);
        tableBackgroundLabel->setObjectName("tableBackgroundLabel");
        tableBackgroundLabel->setMinimumSize(QSize(80, 20));
        tableBackgroundLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: white}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
"<widget name=\"__qt_fake_top_level\">\n"
"<widget class=\"QLabel\" name=\"labCQ\">\n"
"<property name=\"geometry\">\n"
"<rect>\n"
"<x>12</x>\n"
"<y>32</y>\n"
"<width>302</width>\n"
"<height>25</height>\n"
"</rect>\n"
"</property>\n"
"<property name=\"minimumSize\">\n"
"<size>\n"
"<width>80</width>\n"
"<height>20</height>\n"
"</size>\n"
"</property>\n"
"<property name=\"styleSheet\">\n"
"<string notr=\"true\">QLabel{background-color: #66ff66}</string>\n"
"</property>\n"
"<property name=\"text\">\n"
"<string>K1ABC</string>\n"
"</property>\n"
"<property name=\"alignment\">\n"
"<set>Qt::AlignCenter</set>\n"
"</property>\n"
"</widget>\n"
"</widget>\n"
"<resources/>\n"
"</ui>\n"
""));
        tableBackgroundLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(tableBackgroundLabel, 3, 0, 1, 1);

        tableFontButton = new QPushButton(scrollAreaContentsWidget_8);
        tableFontButton->setObjectName("tableFontButton");

        gridLayout_15->addWidget(tableFontButton, 1, 1, 1, 1);

        cqMessagesLabel = new QLabel(scrollAreaContentsWidget_8);
        cqMessagesLabel->setObjectName("cqMessagesLabel");
        cqMessagesLabel->setMinimumSize(QSize(80, 20));
        cqMessagesLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #66ff66}"));
        cqMessagesLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(cqMessagesLabel, 5, 0, 1, 1);

        labMyCall = new QLabel(scrollAreaContentsWidget_8);
        labMyCall->setObjectName("labMyCall");
        labMyCall->setMinimumSize(QSize(80, 20));
        labMyCall->setStyleSheet(QString::fromUtf8("QLabel{background-color: #ff6666}"));
        labMyCall->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(labMyCall, 6, 0, 1, 1);

        pbMyCall = new QPushButton(scrollAreaContentsWidget_8);
        pbMyCall->setObjectName("pbMyCall");
        pbMyCall->setMinimumSize(QSize(140, 0));

        gridLayout_15->addWidget(pbMyCall, 6, 1, 1, 1);

        cqMessagesButton = new QPushButton(scrollAreaContentsWidget_8);
        cqMessagesButton->setObjectName("cqMessagesButton");
        cqMessagesButton->setMinimumSize(QSize(140, 0));

        gridLayout_15->addWidget(cqMessagesButton, 5, 1, 1, 1);

        label_20 = new QLabel(scrollAreaContentsWidget_8);
        label_20->setObjectName("label_20");
        label_20->setWordWrap(true);

        gridLayout_15->addWidget(label_20, 12, 0, 1, 1);

        primaryHighlightLineEdit = new QLineEdit(scrollAreaContentsWidget_8);
        primaryHighlightLineEdit->setObjectName("primaryHighlightLineEdit");

        gridLayout_15->addWidget(primaryHighlightLineEdit, 9, 1, 1, 1);

        tableSelectedRowBackgroundButton = new QPushButton(scrollAreaContentsWidget_8);
        tableSelectedRowBackgroundButton->setObjectName("tableSelectedRowBackgroundButton");

        gridLayout_15->addWidget(tableSelectedRowBackgroundButton, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_15->addItem(verticalSpacer, 2, 1, 1, 1);

        secondaryHighlightLabel = new QLabel(scrollAreaContentsWidget_8);
        secondaryHighlightLabel->setObjectName("secondaryHighlightLabel");
        secondaryHighlightLabel->setMinimumSize(QSize(80, 20));
        secondaryHighlightLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #ffff66}"));
        secondaryHighlightLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(secondaryHighlightLabel, 11, 0, 1, 1);


        verticalLayout_14->addLayout(gridLayout_15);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_6);

        scrollArea_8->setWidget(scrollAreaContentsWidget_8);

        verticalLayout_18->addWidget(scrollArea_8);

        tabWidget->addTab(uiTab1, QString());
        uiTab2 = new QWidget();
        uiTab2->setObjectName("uiTab2");
        verticalLayout_19 = new QVBoxLayout(uiTab2);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(-1, 9, -1, 9);
        scrollArea_9 = new QScrollArea(uiTab2);
        scrollArea_9->setObjectName("scrollArea_9");
        scrollArea_9->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_9->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_9->setLineWidth(0);
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName("scrollAreaWidgetContents_9");
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 234, 294));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_9);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_10, 10, 1, 1, 1);

        txFontButton = new QPushButton(scrollAreaWidgetContents_9);
        txFontButton->setObjectName("txFontButton");

        gridLayout_5->addWidget(txFontButton, 9, 1, 1, 1);

        rxFontButton = new QPushButton(scrollAreaWidgetContents_9);
        rxFontButton->setObjectName("rxFontButton");

        gridLayout_5->addWidget(rxFontButton, 5, 1, 1, 1);

        txForegroundButton = new QPushButton(scrollAreaWidgetContents_9);
        txForegroundButton->setObjectName("txForegroundButton");

        gridLayout_5->addWidget(txForegroundButton, 8, 1, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents_9);
        label_22->setObjectName("label_22");

        gridLayout_5->addWidget(label_22, 7, 0, 1, 1);

        rxLabel = new QLabel(scrollAreaWidgetContents_9);
        rxLabel->setObjectName("rxLabel");
        rxLabel->setEnabled(true);
        rxLabel->setMinimumSize(QSize(80, 20));
        rxLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #ffeaa7}"));
        rxLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(rxLabel, 0, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(verticalSpacer_13, 6, 0, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents_9);
        label_21->setObjectName("label_21");

        gridLayout_5->addWidget(label_21, 2, 0, 1, 1);

        rxBackgroundButton = new QPushButton(scrollAreaWidgetContents_9);
        rxBackgroundButton->setObjectName("rxBackgroundButton");
        rxBackgroundButton->setEnabled(true);
        rxBackgroundButton->setMinimumSize(QSize(140, 0));

        gridLayout_5->addWidget(rxBackgroundButton, 0, 1, 1, 1);

        rxForegroundButton = new QPushButton(scrollAreaWidgetContents_9);
        rxForegroundButton->setObjectName("rxForegroundButton");

        gridLayout_5->addWidget(rxForegroundButton, 4, 1, 1, 1);

        txForegroundLabel = new QLabel(scrollAreaWidgetContents_9);
        txForegroundLabel->setObjectName("txForegroundLabel");
        txForegroundLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #ffeaa7}"));
        txForegroundLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(txForegroundLabel, 8, 0, 1, 1);

        rxForegroundLabel = new QLabel(scrollAreaWidgetContents_9);
        rxForegroundLabel->setObjectName("rxForegroundLabel");
        rxForegroundLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #ffeaa7}"));
        rxForegroundLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(rxForegroundLabel, 4, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(verticalSpacer_9, 1, 0, 1, 1);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_19->addWidget(scrollArea_9);

        tabWidget->addTab(uiTab2, QString());
        uiTab3 = new QWidget();
        uiTab3->setObjectName("uiTab3");
        verticalLayout_20 = new QVBoxLayout(uiTab3);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(-1, 9, -1, 9);
        scrollArea_10 = new QScrollArea(uiTab3);
        scrollArea_10->setObjectName("scrollArea_10");
        scrollArea_10->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_10->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea_10->setLineWidth(0);
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName("scrollAreaWidgetContents_10");
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 285, 106));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents_10);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_12, 3, 1, 1, 1);

        composeLabel = new QLabel(scrollAreaWidgetContents_10);
        composeLabel->setObjectName("composeLabel");
        composeLabel->setEnabled(true);
        composeLabel->setMinimumSize(QSize(80, 20));
        composeLabel->setStyleSheet(QString::fromUtf8("QLabel{background-color: #FFF}"));
        composeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(composeLabel, 0, 0, 1, 1);

        composeBackgroundButton = new QPushButton(scrollAreaWidgetContents_10);
        composeBackgroundButton->setObjectName("composeBackgroundButton");

        gridLayout_8->addWidget(composeBackgroundButton, 0, 1, 1, 1);

        composeForegroundButton = new QPushButton(scrollAreaWidgetContents_10);
        composeForegroundButton->setObjectName("composeForegroundButton");

        gridLayout_8->addWidget(composeForegroundButton, 1, 1, 1, 1);

        composeFontButton = new QPushButton(scrollAreaWidgetContents_10);
        composeFontButton->setObjectName("composeFontButton");

        gridLayout_8->addWidget(composeFontButton, 2, 1, 1, 1);

        scrollArea_10->setWidget(scrollAreaWidgetContents_10);

        verticalLayout_20->addWidget(scrollArea_10);

        tabWidget->addTab(uiTab3, QString());

        verticalLayout_15->addWidget(tabWidget);

        configuration_tabs->addTab(colors_tab, QString());

        verticalLayout_2->addWidget(configuration_tabs);

        configuration_dialog_button_box = new QDialogButtonBox(configuration_dialog);
        configuration_dialog_button_box->setObjectName("configuration_dialog_button_box");
        configuration_dialog_button_box->setOrientation(Qt::Orientation::Horizontal);
        configuration_dialog_button_box->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_2->addWidget(configuration_dialog_button_box);

#if QT_CONFIG(shortcut)
        callsign_label->setBuddy(callsign_line_edit);
        grid_label->setBuddy(grid_line_edit);
        encryption_key_label->setBuddy(encryption_key_line_edit);
        region_label->setBuddy(region_combo_box);
        ping_label_11->setBuddy(callsign_aging_spin_box);
        ping_label_12->setBuddy(callsign_aging_spin_box);
        label_10->setBuddy(tx_watchdog_spin_box);
        rig_label->setBuddy(rig_combo_box);
        CAT_poll_interval_label->setBuddy(CAT_poll_interval_spin_box);
        CAT_port_label->setBuddy(CAT_port_combo_box);
        CAT_baud_label->setBuddy(CAT_serial_baud_combo_box);
        force_DTR_label->setBuddy(force_DTR_combo_box);
        force_RTS_label->setBuddy(force_RTS_combo_box);
        PTT_port_label->setBuddy(PTT_port_combo_box);
        label_11->setBuddy(sbTxDelay);
        sound_input_label->setBuddy(sound_input_combo_box);
        sound_output_label->setBuddy(sound_output_combo_box);
        notification_sound_output_label->setBuddy(sound_output_combo_box);
        save_path_label->setBuddy(save_path_select_push_button);
        udp_server_label_2->setBuddy(udp_server_line_edit);
        label_18->setBuddy(udp_server_port_spin_box);
        udp_server_label->setBuddy(udp_server_line_edit);
        label_6->setBuddy(udp_server_port_spin_box);
        label_8->setBuddy(calibration_slope_ppm_spin_box);
        label_7->setBuddy(calibration_intercept_spin_box);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget_2, scrollArea);
        QWidget::setTabOrder(scrollArea, callsign_line_edit);
        QWidget::setTabOrder(callsign_line_edit, grid_line_edit);
        QWidget::setTabOrder(grid_line_edit, groups_line_edit);
        QWidget::setTabOrder(groups_line_edit, avoid_allcall_check_box);
        QWidget::setTabOrder(avoid_allcall_check_box, hb_message_line_edit);
        QWidget::setTabOrder(hb_message_line_edit, cq_message_line_edit);
        QWidget::setTabOrder(cq_message_line_edit, reply_message_line_edit);
        QWidget::setTabOrder(reply_message_line_edit, info_message_line_edit);
        QWidget::setTabOrder(info_message_line_edit, status_message_line_edit);
        QWidget::setTabOrder(status_message_line_edit, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, miles_check_box);
        QWidget::setTabOrder(miles_check_box, monitor_off_check_box);
        QWidget::setTabOrder(monitor_off_check_box, tx_qsy_check_box);
        QWidget::setTabOrder(tx_qsy_check_box, avoid_forced_identify_check_box);
        QWidget::setTabOrder(avoid_forced_identify_check_box, transmit_directed_check_box);
        QWidget::setTabOrder(transmit_directed_check_box, spellcheck_check_box);
        QWidget::setTabOrder(spellcheck_check_box, reset_activity_check_box);
        QWidget::setTabOrder(reset_activity_check_box, checkForUpdates_checkBox);
        QWidget::setTabOrder(checkForUpdates_checkBox, callsign_aging_spin_box);
        QWidget::setTabOrder(callsign_aging_spin_box, activity_aging_spin_box);
        QWidget::setTabOrder(activity_aging_spin_box, eot_line_edit);
        QWidget::setTabOrder(eot_line_edit, rig_combo_box);
        QWidget::setTabOrder(rig_combo_box, CAT_poll_interval_spin_box);
        QWidget::setTabOrder(CAT_poll_interval_spin_box, tabWidget_3);
        QWidget::setTabOrder(tabWidget_3, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, CAT_port_combo_box);
        QWidget::setTabOrder(CAT_port_combo_box, CAT_serial_baud_combo_box);
        QWidget::setTabOrder(CAT_serial_baud_combo_box, CAT_default_bit_radio_button);
        QWidget::setTabOrder(CAT_default_bit_radio_button, CAT_7_bit_radio_button);
        QWidget::setTabOrder(CAT_7_bit_radio_button, CAT_8_bit_radio_button);
        QWidget::setTabOrder(CAT_8_bit_radio_button, CAT_default_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_default_stop_bit_radio_button, CAT_one_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_one_stop_bit_radio_button, CAT_two_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_two_stop_bit_radio_button, CAT_handshake_default_radio_button);
        QWidget::setTabOrder(CAT_handshake_default_radio_button, CAT_handshake_none_radio_button);
        QWidget::setTabOrder(CAT_handshake_none_radio_button, CAT_handshake_xon_radio_button);
        QWidget::setTabOrder(CAT_handshake_xon_radio_button, CAT_handshake_hardware_radio_button);
        QWidget::setTabOrder(CAT_handshake_hardware_radio_button, force_DTR_combo_box);
        QWidget::setTabOrder(force_DTR_combo_box, force_RTS_combo_box);
        QWidget::setTabOrder(force_RTS_combo_box, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, PTT_VOX_radio_button);
        QWidget::setTabOrder(PTT_VOX_radio_button, PTT_DTR_radio_button);
        QWidget::setTabOrder(PTT_DTR_radio_button, PTT_CAT_radio_button);
        QWidget::setTabOrder(PTT_CAT_radio_button, PTT_RTS_radio_button);
        QWidget::setTabOrder(PTT_RTS_radio_button, PTT_port_combo_box);
        QWidget::setTabOrder(PTT_port_combo_box, mode_none_radio_button);
        QWidget::setTabOrder(mode_none_radio_button, mode_USB_radio_button);
        QWidget::setTabOrder(mode_USB_radio_button, mode_data_radio_button);
        QWidget::setTabOrder(mode_data_radio_button, TX_source_data_radio_button);
        QWidget::setTabOrder(TX_source_data_radio_button, TX_source_mic_radio_button);
        QWidget::setTabOrder(TX_source_mic_radio_button, split_none_radio_button);
        QWidget::setTabOrder(split_none_radio_button, split_rig_radio_button);
        QWidget::setTabOrder(split_rig_radio_button, split_emulate_radio_button);
        QWidget::setTabOrder(split_emulate_radio_button, ptt_command_line_edit);
        QWidget::setTabOrder(ptt_command_line_edit, sbTxDelay);
        QWidget::setTabOrder(sbTxDelay, hold_ptt_check_box);
        QWidget::setTabOrder(hold_ptt_check_box, test_CAT_push_button);
        QWidget::setTabOrder(test_CAT_push_button, test_PTT_push_button);
        QWidget::setTabOrder(test_PTT_push_button, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, sound_input_combo_box);
        QWidget::setTabOrder(sound_input_combo_box, sound_input_channel_combo_box);
        QWidget::setTabOrder(sound_input_channel_combo_box, sound_output_combo_box);
        QWidget::setTabOrder(sound_output_combo_box, sound_output_channel_combo_box);
        QWidget::setTabOrder(sound_output_channel_combo_box, save_path_select_push_button);
        QWidget::setTabOrder(save_path_select_push_button, checkBoxPwrBandTxMemory);
        QWidget::setTabOrder(checkBoxPwrBandTxMemory, checkBoxPwrBandTuneMemory);
        QWidget::setTabOrder(checkBoxPwrBandTuneMemory, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, opCallEntry);
        QWidget::setTabOrder(opCallEntry, psk_reporter_check_box);
        QWidget::setTabOrder(psk_reporter_check_box, enable_n3fjp_broadcast_check_box);
        QWidget::setTabOrder(enable_n3fjp_broadcast_check_box, n3fjp_server_name_line_edit);
        QWidget::setTabOrder(n3fjp_server_name_line_edit, n3fjp_server_port_spin_box);
        QWidget::setTabOrder(n3fjp_server_port_spin_box, enable_n1mm_broadcast_check_box);
        QWidget::setTabOrder(enable_n1mm_broadcast_check_box, n1mm_server_name_line_edit);
        QWidget::setTabOrder(n1mm_server_name_line_edit, n1mm_server_port_spin_box);
        QWidget::setTabOrder(n1mm_server_port_spin_box, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, calibration_slope_ppm_spin_box);
        QWidget::setTabOrder(calibration_slope_ppm_spin_box, calibration_intercept_spin_box);
        QWidget::setTabOrder(calibration_intercept_spin_box, frequencies_table_view);
        QWidget::setTabOrder(frequencies_table_view, auto_switch_bands_check_box);
        QWidget::setTabOrder(auto_switch_bands_check_box, stations_table_view);
        QWidget::setTabOrder(stations_table_view, add_macro_line_edit);
        QWidget::setTabOrder(add_macro_line_edit, add_macro_push_button);
        QWidget::setTabOrder(add_macro_push_button, delete_macro_push_button);
        QWidget::setTabOrder(delete_macro_push_button, macros_list_view);
        QWidget::setTabOrder(macros_list_view, font_push_button);
        QWidget::setTabOrder(font_push_button, tabWidget);
        QWidget::setTabOrder(tabWidget, scrollArea_8);
        QWidget::setTabOrder(scrollArea_8, tableForegroundButton);
        QWidget::setTabOrder(tableForegroundButton, tableFontButton);
        QWidget::setTabOrder(tableFontButton, tableBackgroundButton);
        QWidget::setTabOrder(tableBackgroundButton, tableSelectedRowBackgroundButton);
        QWidget::setTabOrder(tableSelectedRowBackgroundButton, pbMyCall);
        QWidget::setTabOrder(pbMyCall, primaryHighlightButton);
        QWidget::setTabOrder(primaryHighlightButton, primaryHighlightLineEdit);
        QWidget::setTabOrder(primaryHighlightLineEdit, secondaryHighlightButton);
        QWidget::setTabOrder(secondaryHighlightButton, secondaryHighlightLineEdit);
        QWidget::setTabOrder(secondaryHighlightLineEdit, scrollArea_9);
        QWidget::setTabOrder(scrollArea_9, rxBackgroundButton);
        QWidget::setTabOrder(rxBackgroundButton, rxForegroundButton);
        QWidget::setTabOrder(rxForegroundButton, rxFontButton);
        QWidget::setTabOrder(rxFontButton, txForegroundButton);
        QWidget::setTabOrder(txForegroundButton, txFontButton);
        QWidget::setTabOrder(txFontButton, scrollArea_10);
        QWidget::setTabOrder(scrollArea_10, composeBackgroundButton);
        QWidget::setTabOrder(composeBackgroundButton, composeForegroundButton);
        QWidget::setTabOrder(composeForegroundButton, composeFontButton);
        QWidget::setTabOrder(composeFontButton, configuration_tabs);
        QWidget::setTabOrder(configuration_tabs, write_logs_check_box);
        QWidget::setTabOrder(write_logs_check_box, scrollArea_11);
        QWidget::setTabOrder(scrollArea_11, heartbeat_anywhere_check_box);
        QWidget::setTabOrder(heartbeat_anywhere_check_box, heartbeat_qso_pause_check_box);
        QWidget::setTabOrder(heartbeat_qso_pause_check_box, hb_blacklist_line_edit);
        QWidget::setTabOrder(hb_blacklist_line_edit, autoreply_on_check_box);
        QWidget::setTabOrder(autoreply_on_check_box, cqMessagesButton);
        QWidget::setTabOrder(cqMessagesButton, relay_disabled_check_box);
        QWidget::setTabOrder(relay_disabled_check_box, auto_whitelist_line_edit);
        QWidget::setTabOrder(auto_whitelist_line_edit, auto_blacklist_line_edit);
        QWidget::setTabOrder(auto_blacklist_line_edit, tx_watchdog_spin_box);
        QWidget::setTabOrder(tx_watchdog_spin_box, autoreply_confirmation_check_box);
        QWidget::setTabOrder(autoreply_confirmation_check_box, notification_sound_output_combo_box);
        QWidget::setTabOrder(notification_sound_output_combo_box, scrollArea_12);
        QWidget::setTabOrder(scrollArea_12, notifications_check_box);
        QWidget::setTabOrder(notifications_check_box, notifications_table_widget);

        retranslateUi(configuration_dialog);
        QObject::connect(configuration_dialog_button_box, &QDialogButtonBox::accepted, configuration_dialog, qOverload<>(&QDialog::accept));
        QObject::connect(configuration_dialog_button_box, &QDialogButtonBox::rejected, configuration_dialog, qOverload<>(&QDialog::reject));
        QObject::connect(add_macro_push_button, &QPushButton::clicked, add_macro_line_edit, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(add_macro_line_edit, &QLineEdit::returnPressed, add_macro_push_button, qOverload<>(&QPushButton::setFocus));

        configuration_tabs->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        CAT_serial_baud_combo_box->setCurrentIndex(0);
        PTT_port_combo_box->setCurrentIndex(-1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(configuration_dialog);
    } // setupUi

    void retranslateUi(QDialog *configuration_dialog)
    {
        configuration_dialog->setWindowTitle(QCoreApplication::translate("configuration_dialog", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setToolTip(QCoreApplication::translate("configuration_dialog", "Select tab to change configuration parameters.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_17->setTitle(QCoreApplication::translate("configuration_dialog", "Station Details", nullptr));
        callsign_label->setText(QCoreApplication::translate("configuration_dialog", "My Callsign:", nullptr));
        grid_label->setText(QCoreApplication::translate("configuration_dialog", "My Maidenhead Grid Locator:", nullptr));
#if QT_CONFIG(tooltip)
        grid_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>4 to 12-digit Maidenhead Locator</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        groups_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter a comma separated list of callsign groups (e.g., @GROUP/1, @ARES, @RACES, etc). <br/><br/>Each group behaves similarly to @ALLCALL. Messages that are directed to the group are printed at all participating stations.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groups_line_edit->setText(QString());
        groups_line_edit->setPlaceholderText(QCoreApplication::translate("configuration_dialog", "@GROUP1, ...", nullptr));
        groups_label->setText(QCoreApplication::translate("configuration_dialog", "Callsign Groups (comma separated):", nullptr));
#if QT_CONFIG(tooltip)
        callsign_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "Station callsign.", nullptr));
#endif // QT_CONFIG(tooltip)
        avoid_allcall_check_box->setText(QCoreApplication::translate("configuration_dialog", "Do not participate in the @ALLCALL group", nullptr));
        encryption_key_label->setText(QCoreApplication::translate("configuration_dialog", "Encryption Key:", nullptr));
#if QT_CONFIG(tooltip)
        encryption_key_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "Shared key used to encrypt message payloads and decrypt matching incoming traffic.", nullptr));
#endif // QT_CONFIG(tooltip)
        encryption_key_line_edit->setPlaceholderText(QCoreApplication::translate("configuration_dialog", "Leave blank to disable encryption", nullptr));
#if QT_CONFIG(tooltip)
        hide_unencrypted_messages_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "When enabled, only messages that decrypt with the configured key are shown.", nullptr));
#endif // QT_CONFIG(tooltip)
        hide_unencrypted_messages_check_box->setText(QCoreApplication::translate("configuration_dialog", "Hide messages that do not decrypt with this key", nullptr));
#if QT_CONFIG(tooltip)
        region_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "IARU Region", nullptr));
#endif // QT_CONFIG(tooltip)
        region_label->setText(QCoreApplication::translate("configuration_dialog", "IARU Region:", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("configuration_dialog", "Station Messages", nullptr));
        status_message_line_edit->setText(QCoreApplication::translate("configuration_dialog", "IDLE <MYIDLE> VERSION <MYVERSION>", nullptr));
        label_17->setText(QCoreApplication::translate("configuration_dialog", "Reply Message:", nullptr));
        label_28->setText(QCoreApplication::translate("configuration_dialog", "HB Message:", nullptr));
        reply_message_line_edit->setText(QCoreApplication::translate("configuration_dialog", "HW CPY?", nullptr));
        hb_message_line_edit->setText(QCoreApplication::translate("configuration_dialog", "HB <MYGRID4>", nullptr));
        cq_message_line_edit->setText(QCoreApplication::translate("configuration_dialog", "CQ CQ CQ <MYGRID4>", nullptr));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Station location message</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("configuration_dialog", "Station Info (Rig, Antenna, Location, etc):", nullptr));
        label_27->setText(QCoreApplication::translate("configuration_dialog", "Station Status (Weather, Idle Time, Version, etc):", nullptr));
#if QT_CONFIG(tooltip)
        info_message_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Station location message that is transmitted in response to &quot;@&quot; directed queries.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_19->setText(QCoreApplication::translate("configuration_dialog", "CQ Message:", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(stationTab), QCoreApplication::translate("configuration_dialog", "Station", nullptr));
        behaviour_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Behavior", nullptr));
#if QT_CONFIG(tooltip)
        miles_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Show distance to DX station in miles rather than kilometers.", nullptr));
#endif // QT_CONFIG(tooltip)
        miles_check_box->setText(QCoreApplication::translate("configuration_dialog", "Display dista&nce in miles", nullptr));
#if QT_CONFIG(tooltip)
        monitor_off_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Don't start decoding until the monitor button is clicked.", nullptr));
#endif // QT_CONFIG(tooltip)
        monitor_off_check_box->setText(QCoreApplication::translate("configuration_dialog", "Receiver (RX) off at startup", nullptr));
        transmit_off_check_box->setText(QCoreApplication::translate("configuration_dialog", "Transmitter (TX) off at startup", nullptr));
#if QT_CONFIG(tooltip)
        monitor_last_used_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check this if you wish to automatically return to the last monitored frequency when monitor is enabled, leave it unchecked if you wish to have the current rig frequency maintained.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        monitor_last_used_check_box->setText(QCoreApplication::translate("configuration_dialog", "Monitor returns to last used frequency", nullptr));
#if QT_CONFIG(tooltip)
        tx_qsy_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Some rigs are not able to process CAT commands while transmitting. This means that if you are operating in split mode you may have to uncheck this option.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tx_qsy_check_box->setText(QCoreApplication::translate("configuration_dialog", "Allow Tx frequency changes while transmitting", nullptr));
        avoid_forced_identify_check_box->setText(QCoreApplication::translate("configuration_dialog", "Allow sending standard messages without callsign", nullptr));
        transmit_directed_check_box->setText(QCoreApplication::translate("configuration_dialog", "Immediately transmit CQ, Reply, Info, Saved, and Directed messages from the menu", nullptr));
        write_logs_check_box->setText(QCoreApplication::translate("configuration_dialog", "Write log files (ALL.TXT, DIRECTED.TXT, etc) of decoded text", nullptr));
        spellcheck_check_box->setText(QCoreApplication::translate("configuration_dialog", "Suggest alternative word choices for more efficient message transmission", nullptr));
        reset_activity_check_box->setText(QCoreApplication::translate("configuration_dialog", "Reset the Band Activity, Call Activity, and RX history at startup", nullptr));
        checkForUpdates_checkBox->setText(QCoreApplication::translate("configuration_dialog", "Check for software updates at startup", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("configuration_dialog", "Aging", nullptr));
        ping_label_11->setText(QCoreApplication::translate("configuration_dialog", "Remove callsigns from call activity after:", nullptr));
#if QT_CONFIG(tooltip)
        callsign_aging_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of minutes between unattended pings</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        callsign_aging_spin_box->setSpecialValueText(QCoreApplication::translate("configuration_dialog", "Disabled", nullptr));
        callsign_aging_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " minutes", nullptr));
        callsign_aging_spin_box->setPrefix(QString());
        ping_label_12->setText(QCoreApplication::translate("configuration_dialog", "Remove messages from band activity after:", nullptr));
#if QT_CONFIG(tooltip)
        activity_aging_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of minutes between unattended pings</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        activity_aging_spin_box->setSpecialValueText(QCoreApplication::translate("configuration_dialog", "Disabled", nullptr));
        activity_aging_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " minutes", nullptr));
        activity_aging_spin_box->setPrefix(QString());
        heartbeatGroupBox->setTitle(QCoreApplication::translate("configuration_dialog", "Heartbeat (HB)", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("configuration_dialog", "Customization", nullptr));
        label_24->setText(QCoreApplication::translate("configuration_dialog", "End of Transmission Character Indicator:", nullptr));
#if QT_CONFIG(tooltip)
        eot_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Character to display when a transmission has been detected to have ended. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        eot_line_edit->setText(QCoreApplication::translate("configuration_dialog", "\342\231\242", nullptr));
        label_32->setText(QCoreApplication::translate("configuration_dialog", "Missing Frame Character Indicator:", nullptr));
#if QT_CONFIG(tooltip)
        mfi_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Character sequence to display when a transmission has been detected to have a missing frame. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mfi_line_edit->setText(QCoreApplication::translate("configuration_dialog", "\342\200\246\342\200\246", nullptr));
        heartbeatGroupBoxOld->setTitle(QCoreApplication::translate("configuration_dialog", "Heartbeat (HB)", nullptr));
        ping_label_10->setText(QCoreApplication::translate("configuration_dialog", "Heartbeat interval:", nullptr));
#if QT_CONFIG(tooltip)
        heartbeat_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of minutes between unattended heartbeat transmissions.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        heartbeat_spin_box->setSpecialValueText(QCoreApplication::translate("configuration_dialog", "Disabled", nullptr));
        heartbeat_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " minutes", nullptr));
        heartbeat_spin_box->setPrefix(QCoreApplication::translate("configuration_dialog", "every ", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(behaviorTab), QCoreApplication::translate("configuration_dialog", "Behavior", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("configuration_dialog", "Heartbeat Network", nullptr));
        heartbeat_anywhere_check_box->setText(QCoreApplication::translate("configuration_dialog", "Allow heartbeat transmissions outside of heartbeat sub-channel (500Hz - 1000Hz)", nullptr));
        heartbeat_qso_pause_check_box->setText(QCoreApplication::translate("configuration_dialog", "Pause heartbeat transmissions while in a QSO (i.e., callsign is selected)", nullptr));
        heartbeat_ack_snr_check_box->setText(QCoreApplication::translate("configuration_dialog", "Send SNR report when acknowledging heartbeats", nullptr));
        label_26->setText(QCoreApplication::translate("configuration_dialog", "Never acknowledge heartbeats from these callsigns (comma separated):", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("configuration_dialog", "Autoreply", nullptr));
        autoreply_on_check_box->setText(QCoreApplication::translate("configuration_dialog", "Turn autoreply on at startup", nullptr));
        relay_disabled_check_box->setText(QCoreApplication::translate("configuration_dialog", "Disable message relay (>) when autoreply is enabled", nullptr));
        label_23->setText(QCoreApplication::translate("configuration_dialog", "Only autoreply to these callsigns (comma separated):", nullptr));
        label_15->setText(QCoreApplication::translate("configuration_dialog", "Never autoreply to these callsigns (comma separated):", nullptr));
        label_10->setText(QCoreApplication::translate("configuration_dialog", "Idle timeout - disable autoreply after:", nullptr));
#if QT_CONFIG(tooltip)
        tx_watchdog_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of minutes before unattended heartbeat transmissions are aborted.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tx_watchdog_spin_box->setSpecialValueText(QCoreApplication::translate("configuration_dialog", "Disabled", nullptr));
        tx_watchdog_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " minutes of inactivity", nullptr));
        tx_watchdog_spin_box->setPrefix(QString());
        autoreply_confirmation_check_box->setText(QCoreApplication::translate("configuration_dialog", "Ask for confirmation before sending autoreply transmissions", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(autoreplyTab), QCoreApplication::translate("configuration_dialog", "Networking && Autoreply", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(general_tab), QCoreApplication::translate("configuration_dialog", "Genera&l", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(general_tab), QCoreApplication::translate("configuration_dialog", "General station details and settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        rig_label->setText(QCoreApplication::translate("configuration_dialog", "Rig:", nullptr));
        CAT_poll_interval_label->setText(QCoreApplication::translate("configuration_dialog", "Poll Interval:", nullptr));
#if QT_CONFIG(tooltip)
        CAT_poll_interval_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Interval to poll rig for status. Longer intervals will mean that changes to the rig will take longer to be detected.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_poll_interval_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " s", nullptr));
#if QT_CONFIG(tooltip)
        test_CAT_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Attempt to connect to the radio with these settings.</p><p>The button will turn green if the connection is successful or red if there is a problem.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        test_CAT_push_button->setText(QCoreApplication::translate("configuration_dialog", "Test CAT", nullptr));
#if QT_CONFIG(tooltip)
        test_PTT_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Attempt to activate the transmitter.\n"
"Click again to deactivate. Normally no power should be\n"
"output since there is no audio being generated at this time.\n"
"Check that any Tx indication on your radio and/or your\n"
"radio interface behave as expected.", nullptr));
#endif // QT_CONFIG(tooltip)
        test_PTT_push_button->setText(QCoreApplication::translate("configuration_dialog", "Test PTT", nullptr));
        CAT_port_label->setText(QCoreApplication::translate("configuration_dialog", "Port:", nullptr));
#if QT_CONFIG(tooltip)
        CAT_port_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Serial port used for CAT control.", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_port_combo_box->setCurrentText(QString());
        CAT_serial_port_parameters_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Parameters", nullptr));
        CAT_baud_label->setText(QCoreApplication::translate("configuration_dialog", "Baud Rate:", nullptr));
        CAT_serial_baud_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "1200", nullptr));
        CAT_serial_baud_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "2400", nullptr));
        CAT_serial_baud_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "4800", nullptr));
        CAT_serial_baud_combo_box->setItemText(3, QCoreApplication::translate("configuration_dialog", "9600", nullptr));
        CAT_serial_baud_combo_box->setItemText(4, QCoreApplication::translate("configuration_dialog", "19200", nullptr));
        CAT_serial_baud_combo_box->setItemText(5, QCoreApplication::translate("configuration_dialog", "38400", nullptr));
        CAT_serial_baud_combo_box->setItemText(6, QCoreApplication::translate("configuration_dialog", "57600", nullptr));
        CAT_serial_baud_combo_box->setItemText(7, QCoreApplication::translate("configuration_dialog", "115200", nullptr));

#if QT_CONFIG(tooltip)
        CAT_serial_baud_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Serial port data rate which must match the setting of your radio.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CAT_data_bits_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of data bits used to communicate with your radio's CAT interface (usually eight).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_data_bits_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Data Bits", nullptr));
        CAT_default_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "D&efault", nullptr));
        CAT_7_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Se&ven", nullptr));
        CAT_8_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "E&ight", nullptr));
#if QT_CONFIG(tooltip)
        CAT_stop_bits_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of stop bits used when communicating with your radio's CAT interface</p><p>(consult you radio's manual for details).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_stop_bits_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Stop Bits", nullptr));
        CAT_default_stop_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Default", nullptr));
        CAT_one_stop_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "On&e", nullptr));
        CAT_two_stop_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "T&wo", nullptr));
#if QT_CONFIG(tooltip)
        CAT_handshake_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Flow control protocol used between this computer and your radio's CAT interface (usually &quot;None&quot; but some require &quot;Hardware&quot;).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_handshake_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Handshake", nullptr));
        CAT_handshake_default_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Default", nullptr));
        CAT_handshake_none_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&None", nullptr));
#if QT_CONFIG(tooltip)
        CAT_handshake_xon_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Software flow control (very rare on CAT interfaces).", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_handshake_xon_radio_button->setText(QCoreApplication::translate("configuration_dialog", "XON/XOFF", nullptr));
#if QT_CONFIG(tooltip)
        CAT_handshake_hardware_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Flow control using the RTS and CTS RS-232 control lines\n"
"not often used but some radios have it as an option and \n"
"a few, particularly some Kenwood rigs, require it).", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_handshake_hardware_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&Hardware", nullptr));
#if QT_CONFIG(tooltip)
        CAT_control_lines_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Special control of CAT port control lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_control_lines_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Force Control Lines", nullptr));
        force_DTR_combo_box->setItemText(0, QString());
        force_DTR_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "High", nullptr));
        force_DTR_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Low", nullptr));

        force_DTR_label->setText(QCoreApplication::translate("configuration_dialog", "DTR:", nullptr));
        force_RTS_label->setText(QCoreApplication::translate("configuration_dialog", "RTS:", nullptr));
        force_RTS_combo_box->setItemText(0, QString());
        force_RTS_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "High", nullptr));
        force_RTS_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Low", nullptr));

        tabWidget_3->setTabText(tabWidget_3->indexOf(catTab), QCoreApplication::translate("configuration_dialog", "CAT Control", nullptr));
#if QT_CONFIG(tooltip)
        PTT_method_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "How this program activates the PTT on your radio", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_method_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "PTT Method", nullptr));
#if QT_CONFIG(tooltip)
        PTT_VOX_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>No PTT activation, instead the radio's automatic VOX is used to key the transmitter.</p><p>Use this if you have no radio interface hardware.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_VOX_radio_button->setText(QCoreApplication::translate("configuration_dialog", "VO&X", nullptr));
#if QT_CONFIG(tooltip)
        PTT_DTR_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Use the RS-232 DTR control line to toggle your radio's PTT, requires hardware to inteface the line.</p><p>Some commercial interface units also use this method.</p><p>The DTR control line of the CAT serial port may be used for this or a DTR control line on a different serial port may be used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_DTR_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&DTR", nullptr));
#if QT_CONFIG(tooltip)
        PTT_CAT_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Some radios support PTT via CAT commands,\n"
"use this option if your radio supports it and you have no\n"
"other hardware interface for PTT.", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_CAT_radio_button->setText(QCoreApplication::translate("configuration_dialog", "C&AT", nullptr));
#if QT_CONFIG(tooltip)
        PTT_RTS_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Use the RS-232 RTS control line to toggle your radio's PTT, requires hardware to inteface the line.</p><p>Some commercial interface units also use this method.</p><p>The RTS control line of the CAT serial port may be used for this or a RTS control line on a different serial port may be used. Note that this option is not available on the CAT serial port when hardware flow control is used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_RTS_radio_button->setText(QCoreApplication::translate("configuration_dialog", "R&TS", nullptr));
        PTT_port_label->setText(QCoreApplication::translate("configuration_dialog", "Port:", nullptr));
#if QT_CONFIG(tooltip)
        PTT_port_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Select the RS-232 serial port utilised for PTT control, this option is available when DTR or RTS is selected above as a transmit method.</p><p>This port can be the same one as the one used for CAT control.</p><p>For some interface types the special value CAT may be chosen, this is used for non-serial CAT interfaces that can control serial port control lines remotely (OmniRig for example).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_port_combo_box->setCurrentText(QString());
#if QT_CONFIG(tooltip)
        mode_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Modulation mode selected on radio.", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Mode", nullptr));
#if QT_CONFIG(tooltip)
        mode_USB_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>USB is usually the correct modulation mode,</p><p>unless the radio has a special data or packet mode setting</p><p>for AFSK operation.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_USB_radio_button->setText(QCoreApplication::translate("configuration_dialog", "US&B", nullptr));
#if QT_CONFIG(tooltip)
        mode_none_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Don't allow the program to set the radio mode\n"
"(not recommended but use if the wrong mode\n"
"or bandwidth is selected).", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_none_radio_button->setText(QCoreApplication::translate("configuration_dialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        mode_data_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "If this is availabe then it is usually the correct mode for this program.", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_data_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Data/P&kt", nullptr));
#if QT_CONFIG(tooltip)
        TX_audio_source_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Some radios can select the audio input using a CAT command,\n"
"this setting allows you to select which audio input will be used\n"
"(if it is available then generally the Rear/Data option is best).", nullptr));
#endif // QT_CONFIG(tooltip)
        TX_audio_source_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Transmit Audio Source", nullptr));
        TX_source_data_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Rear&/Data", nullptr));
        TX_source_mic_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&Front/Mic", nullptr));
        split_operation_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Split Operation", nullptr));
        split_emulate_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Fake It", nullptr));
        split_rig_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Rig", nullptr));
        split_none_radio_button->setText(QCoreApplication::translate("configuration_dialog", "None", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("configuration_dialog", "Advanced", nullptr));
        label_11->setText(QCoreApplication::translate("configuration_dialog", "Tx delay:", nullptr));
#if QT_CONFIG(tooltip)
        sbTxDelay->setToolTip(QCoreApplication::translate("configuration_dialog", "Minimum delay between assertion of PTT and start of Tx audio.", nullptr));
#endif // QT_CONFIG(tooltip)
        sbTxDelay->setSuffix(QCoreApplication::translate("configuration_dialog", "  s", nullptr));
        label_12->setText(QCoreApplication::translate("configuration_dialog", "PTT command:", nullptr));
        hold_ptt_check_box->setText(QCoreApplication::translate("configuration_dialog", "Hold PTT between frames while there are more to be transmitted", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(optionsTab), QCoreApplication::translate("configuration_dialog", "Rig Options", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(radio_tab), QCoreApplication::translate("configuration_dialog", "&Radio", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(radio_tab), QCoreApplication::translate("configuration_dialog", "Radio interface configuration settings.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        soundcard_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Souncard", nullptr));
#endif // QT_CONFIG(tooltip)
        soundcard_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Modulation Soundcard", nullptr));
#if QT_CONFIG(tooltip)
        sound_output_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio CODEC to use for transmitting.\n"
"If this is your default device for system sounds then\n"
"ensure that all system sounds are disabled otherwise\n"
"you will broadcast any systems sounds generated during\n"
"transmitting periods.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sound_input_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio CODEC to use for receiving.", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_input_label->setText(QCoreApplication::translate("configuration_dialog", "&Input:", nullptr));
        sound_input_channel_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "Mono", nullptr));
        sound_input_channel_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "Left", nullptr));
        sound_input_channel_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Right", nullptr));
        sound_input_channel_combo_box->setItemText(3, QCoreApplication::translate("configuration_dialog", "Both", nullptr));

#if QT_CONFIG(tooltip)
        sound_input_channel_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the channel to use for receiving.", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_output_channel_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "Mono", nullptr));
        sound_output_channel_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "Left", nullptr));
        sound_output_channel_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Right", nullptr));
        sound_output_channel_combo_box->setItemText(3, QCoreApplication::translate("configuration_dialog", "Both", nullptr));

#if QT_CONFIG(tooltip)
        sound_output_channel_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio channel used for transmission.\n"
"Unless you have multiple radios connected on different\n"
"channels; then you will usually want to select mono or\n"
"both here.", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_output_label->setText(QCoreApplication::translate("configuration_dialog", "Ou&tput:", nullptr));
        notification_soundcard_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Notification Soundcard", nullptr));
        notification_sound_output_label->setText(QCoreApplication::translate("configuration_dialog", "O&utput:", nullptr));
#if QT_CONFIG(tooltip)
        notification_sound_output_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio CODEC to use for notifications.\n"
"If this is your default device for system sounds and transmission then\n"
"ensure that all system sounds are disabled otherwise\n"
"you will broadcast any systems sounds and notifications generated during\n"
"transmitting periods.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        save_path_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Save Directory", nullptr));
#endif // QT_CONFIG(tooltip)
        save_path_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Save Directory", nullptr));
        save_path_label->setText(QCoreApplication::translate("configuration_dialog", "Loc&ation:", nullptr));
#if QT_CONFIG(tooltip)
        save_path_display_label->setToolTip(QCoreApplication::translate("configuration_dialog", "Path to which .WAV files are saved.", nullptr));
#endif // QT_CONFIG(tooltip)
        save_path_display_label->setText(QCoreApplication::translate("configuration_dialog", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        save_path_select_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Click to select a different save directory for .WAV files.", nullptr));
#endif // QT_CONFIG(tooltip)
        save_path_select_push_button->setText(QCoreApplication::translate("configuration_dialog", "S&elect", nullptr));
#if QT_CONFIG(tooltip)
        split_operation_group_box_2->setToolTip(QCoreApplication::translate("configuration_dialog", "Power Memory By Band", nullptr));
#endif // QT_CONFIG(tooltip)
        split_operation_group_box_2->setTitle(QCoreApplication::translate("configuration_dialog", "Remember power settings by band", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxPwrBandTxMemory->setToolTip(QCoreApplication::translate("configuration_dialog", "Enable power memory during transmit", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxPwrBandTxMemory->setText(QCoreApplication::translate("configuration_dialog", "Transmit", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxPwrBandTuneMemory->setToolTip(QCoreApplication::translate("configuration_dialog", "Enable power memory during tuning", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxPwrBandTuneMemory->setText(QCoreApplication::translate("configuration_dialog", "Tune", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(audio_tab), QCoreApplication::translate("configuration_dialog", "&Audio", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(audio_tab), QCoreApplication::translate("configuration_dialog", "Audio interface settings", nullptr));
#endif // QT_CONFIG(tooltip)
        logging_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Logging", nullptr));
#if QT_CONFIG(tooltip)
        opCallEntry->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>The callsign of the operator, if different from the station callsign.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("configuration_dialog", "Operator Callsign (if different than Station Callsign):", nullptr));
        network_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Network Services", nullptr));
        udp_server_label_2->setText(QCoreApplication::translate("configuration_dialog", "APRS Server:", nullptr));
        label_18->setText(QCoreApplication::translate("configuration_dialog", "APRS Server Port:", nullptr));
#if QT_CONFIG(tooltip)
        aprs_server_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Optional hostname of APRS server to send spots to.</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this field will disable the spotting to APRS.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        aprs_server_line_edit->setText(QCoreApplication::translate("configuration_dialog", "rotate.aprs2.net", nullptr));
#if QT_CONFIG(tooltip)
        psk_reporter_tcpip_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check this option if a reliable connection is needed</p><p>Most users do not need this, the default uses UDP which is more efficient. Only check this if you have evidence that UDP traffic from you to PSK Reporter is being lost.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        psk_reporter_tcpip_check_box->setText(QCoreApplication::translate("configuration_dialog", "Use TCP/IP connection", nullptr));
        enable_aprs_spotting_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable spotting @APRSIS messages to the APRS-IS network", nullptr));
        label_31->setText(QCoreApplication::translate("configuration_dialog", "Never send spotting reports from these callsigns (comma separated):", nullptr));
#if QT_CONFIG(tooltip)
        aprs_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the service port number of the APRS server that should receive updates. If this is zero no updates will be broadcast.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        psk_reporter_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>The program can send your station details and all decoded signals with grid squares as spots to the http://pskreporter.info web site.</p><p>This is used for reverse beacon analysis which is very useful for assessing propagation and system performance.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        psk_reporter_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable spotting to reporting networks (JS8NET, PSKReporter, etc)", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("configuration_dialog", "API", nullptr));
#if QT_CONFIG(tooltip)
        udp_server_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Optional hostname of network service to receive decodes.</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this field will disable the broadcasting of UDP status updates.</p></body></htm"
                        "l>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tcpEnable->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enable the application to send API information over a TCP Server</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tcpEnable->setText(QCoreApplication::translate("configuration_dialog", "Enable TCP Server API", nullptr));
        label_16->setText(QCoreApplication::translate("configuration_dialog", "TCP Server Hostname:", nullptr));
#if QT_CONFIG(tooltip)
        udp_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the service port number of the UDP server that should receive updates. If this is zero no updates will be broadcast.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        accept_tcp_requests_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>With this enabled the app will accept certain requests back from a TCP client that receives decode messages.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accept_tcp_requests_check_box->setText(QCoreApplication::translate("configuration_dialog", "Accept TCP Requests", nullptr));
        udp_server_label->setText(QCoreApplication::translate("configuration_dialog", "UDP Server Hostname:", nullptr));
#if QT_CONFIG(tooltip)
        tcp_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the service port number of the TCP server. If this is zero then TCP server will not be started.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_29->setText(QCoreApplication::translate("configuration_dialog", "TCP Server Port:", nullptr));
#if QT_CONFIG(tooltip)
        tcp_max_connections_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the maximum number of API connections allowed to the TCP server</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("configuration_dialog", "UDP Server Port:", nullptr));
#if QT_CONFIG(tooltip)
        use_dynamic_grid->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check to allow changes to grid, qtc, etc from external programs</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        use_dynamic_grid->setText(QCoreApplication::translate("configuration_dialog", "Allow setting station information (Grid, Info, Status, etc) from the APIs", nullptr));
        label_30->setText(QCoreApplication::translate("configuration_dialog", "TCP Max Connections:", nullptr));
#if QT_CONFIG(tooltip)
        accept_udp_requests_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>With this enabled the app will accept certain requests back from a UDP server that receives decode messages.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accept_udp_requests_check_box->setText(QCoreApplication::translate("configuration_dialog", "Accept UDP Requests", nullptr));
#if QT_CONFIG(tooltip)
        udpEnable->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enable the application to send API information to UDP Servers</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        udpEnable->setText(QCoreApplication::translate("configuration_dialog", "Enable UDP Server API", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("configuration_dialog", "N3FJP Logger", nullptr));
        enable_n3fjp_broadcast_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable sending logged contacts to N3FJP logging software", nullptr));
        n3fjp_server_name_label->setText(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>N3FJP Server:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        n3fjp_server_name_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Optional host name of N3FJP software to receive logged contacts. This is usually 'localhost' or ip address 127.0.0.1</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this field will dis"
                        "able broadcasting of ADIF information via UDP.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        n3fjp_server_port_label->setText(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>N3FJP Server Port:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        n3fjp_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the port number that should be used for N3FJP log information. For N3FJP, this value should be 1100. If this is zero, no contacts will be sent.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        n1mm_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "N1MM Logger", nullptr));
#if QT_CONFIG(tooltip)
        enable_n1mm_broadcast_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>When checked, the app will broadcast a logged contact in ADIF format to the configured hostname and port. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_n1mm_broadcast_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable sending logged contacts to N1MM logging software", nullptr));
        n1mm_server_name_label->setText(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>N1MM Server:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        n1mm_server_name_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Optional host name of N1MM Logger+ program to receive ADIF UDP broadcasts. This is usually 'localhost' or ip address 127.0.0.1</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this fiel"
                        "d will disable broadcasting of ADIF information via UDP.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        n1mm_server_port_label->setText(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>N1MM Server Port:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        n1mm_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the port number that should be used for UDP broadcasts of ADIF log information. For N1MM Logger+, this value should be 2333. If this is zero, no updates will be broadcast.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        configuration_tabs->setTabText(configuration_tabs->indexOf(reporting_tab), QCoreApplication::translate("configuration_dialog", "Reportin&g", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(reporting_tab), QCoreApplication::translate("configuration_dialog", "Reporting and logging settings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        groupBox_3->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>See &quot;Frequency Calibration&quot; in the User Guide for details of how to determine these parameters for your radio.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("configuration_dialog", "Frequency Calibration", nullptr));
        label_8->setText(QCoreApplication::translate("configuration_dialog", "Slope:", nullptr));
        calibration_slope_ppm_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " ppm", nullptr));
        label_7->setText(QCoreApplication::translate("configuration_dialog", "Intercept:", nullptr));
        calibration_intercept_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " Hz", nullptr));
        groupBox->setTitle(QCoreApplication::translate("configuration_dialog", "Frequencies", nullptr));
#if QT_CONFIG(tooltip)
        frequencies_table_view->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Right click to maintain the working frequencies list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("configuration_dialog", "Frequency Schedule", nullptr));
        auto_switch_bands_check_box->setText(QCoreApplication::translate("configuration_dialog", "Automatically switch bands / frequencies at specific times of day", nullptr));
#if QT_CONFIG(tooltip)
        stations_table_view->setToolTip(QCoreApplication::translate("configuration_dialog", "Items may be edited.\n"
"Right click for insert and delete options.", nullptr));
#endif // QT_CONFIG(tooltip)
        configuration_tabs->setTabText(configuration_tabs->indexOf(frequencies_tab), QCoreApplication::translate("configuration_dialog", "&Frequencies", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(frequencies_tab), QCoreApplication::translate("configuration_dialog", "Default frequencies and band specific station details setup", nullptr));
#endif // QT_CONFIG(tooltip)
        add_macro_push_button->setText(QCoreApplication::translate("configuration_dialog", "&Add", nullptr));
        delete_macro_push_button->setText(QCoreApplication::translate("configuration_dialog", "&Delete", nullptr));
#if QT_CONFIG(tooltip)
        macros_list_view->setToolTip(QCoreApplication::translate("configuration_dialog", "Drag and drop items to rearrange order\n"
"Right click for item specific actions\n"
"Click, SHIFT+Click and, CRTL+Click to select items", nullptr));
#endif // QT_CONFIG(tooltip)
        configuration_tabs->setTabText(configuration_tabs->indexOf(tx_macros_tab), QCoreApplication::translate("configuration_dialog", "Saved &Messages", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(tx_macros_tab), QCoreApplication::translate("configuration_dialog", "Canned free text messages setup", nullptr));
#endif // QT_CONFIG(tooltip)
        notifications_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable Notifications", nullptr));
        QTableWidgetItem *___qtablewidgetitem = notifications_table_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("configuration_dialog", "Event", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = notifications_table_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("configuration_dialog", "Enabled", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = notifications_table_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("configuration_dialog", "Sound File", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(notifications_tab), QCoreApplication::translate("configuration_dialog", "&Notifications", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("configuration_dialog", "Global", nullptr));
#if QT_CONFIG(tooltip)
        font_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Set the font characteristics for the application.", nullptr));
#endif // QT_CONFIG(tooltip)
        font_push_button->setText(QCoreApplication::translate("configuration_dialog", "Application Font", nullptr));
        primaryHighlightButton->setText(QCoreApplication::translate("configuration_dialog", "Primary Highlight Background", nullptr));
        tableForegroundButton->setText(QCoreApplication::translate("configuration_dialog", "Foreground Color", nullptr));
        label_25->setText(QCoreApplication::translate("configuration_dialog", "Highlight these words or callsigns with the primary background color (comma separated):", nullptr));
        tableSelectionBackgroundLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        primaryHighlightLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        secondaryHighlightButton->setText(QCoreApplication::translate("configuration_dialog", "Secondary Highlight Background", nullptr));
        tableBackgroundButton->setText(QCoreApplication::translate("configuration_dialog", "Table Background", nullptr));
        tableForegroundLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        tableBackgroundLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        tableFontButton->setText(QCoreApplication::translate("configuration_dialog", "Font", nullptr));
        cqMessagesLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        labMyCall->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        pbMyCall->setText(QCoreApplication::translate("configuration_dialog", "Directed Messages Background", nullptr));
        cqMessagesButton->setText(QCoreApplication::translate("configuration_dialog", "CQ Messages Background", nullptr));
        label_20->setText(QCoreApplication::translate("configuration_dialog", "Highlight these words or callsigns with the secondary background color (comma separated):", nullptr));
        tableSelectedRowBackgroundButton->setText(QCoreApplication::translate("configuration_dialog", "Selected Row Background", nullptr));
        secondaryHighlightLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(uiTab1), QCoreApplication::translate("configuration_dialog", "Band && Call Activity", nullptr));
        txFontButton->setText(QCoreApplication::translate("configuration_dialog", "Font", nullptr));
        rxFontButton->setText(QCoreApplication::translate("configuration_dialog", "Font", nullptr));
        txForegroundButton->setText(QCoreApplication::translate("configuration_dialog", "Foreground Color", nullptr));
        label_22->setText(QCoreApplication::translate("configuration_dialog", "Transmitted:", nullptr));
        rxLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        label_21->setText(QCoreApplication::translate("configuration_dialog", "Received:", nullptr));
        rxBackgroundButton->setText(QCoreApplication::translate("configuration_dialog", "Textbox Background Color", nullptr));
        rxForegroundButton->setText(QCoreApplication::translate("configuration_dialog", "Foreground Color", nullptr));
        txForegroundLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        rxForegroundLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(uiTab2), QCoreApplication::translate("configuration_dialog", "Messages", nullptr));
        composeLabel->setText(QCoreApplication::translate("configuration_dialog", "K1ABC", nullptr));
        composeBackgroundButton->setText(QCoreApplication::translate("configuration_dialog", " Textbox Background Color", nullptr));
        composeForegroundButton->setText(QCoreApplication::translate("configuration_dialog", "Foreground Color", nullptr));
        composeFontButton->setText(QCoreApplication::translate("configuration_dialog", "Font", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(uiTab3), QCoreApplication::translate("configuration_dialog", "Composition", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(colors_tab), QCoreApplication::translate("configuration_dialog", "&UI", nullptr));
#if QT_CONFIG(tooltip)
        configuration_dialog_button_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Discard or apply configuration changes including\n"
"resetting the radio interface and applying any\n"
"soundcard changes", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class configuration_dialog: public Ui_configuration_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_H
