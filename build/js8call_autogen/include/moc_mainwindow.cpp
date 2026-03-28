/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "apiSetMaxConnections",
    "",
    "n",
    "apiSetServer",
    "host",
    "port",
    "apiStartServer",
    "apiStopServer",
    "aprsClientEnqueueSpot",
    "by_call",
    "from_call",
    "grid",
    "comment",
    "aprsClientEnqueueThirdParty",
    "text",
    "aprsClientSetSkipPercent",
    "skipPercent",
    "aprsClientSetServer",
    "aprsClientSetPaused",
    "paused",
    "aprsClientSetLocalStation",
    "mycall",
    "passcode",
    "aprsClientSendReports",
    "pskReporterSendReport",
    "pskReporterSetLocalStation",
    "pskReporterAddRemoteStation",
    "Radio::Frequency",
    "spotClientSetLocalStation",
    "spotClientEnqueueCmd",
    "spotClientEnqueueSpot",
    "decodedLineReady",
    "t",
    "playNotification",
    "name",
    "initializeNotificationAudioOutputStream",
    "QAudioDevice",
    "initializeAudioOutputStream",
    "channels",
    "msBuffered",
    "stopAudioOutputStream",
    "startAudioInputStream",
    "framesPerBuffer",
    "AudioDevice*",
    "sink",
    "AudioDevice::Channel",
    "suspendAudioInputStream",
    "resumeAudioInputStream",
    "startDetector",
    "FFTSize",
    "detectorClose",
    "finished",
    "transmitFrequency",
    "endTransmitMessage",
    "quick",
    "tune",
    "sendMessage",
    "frequency",
    "submode",
    "SoundOutput*",
    "outAttenuationChanged",
    "toggleShorthand",
    "showSoundInError",
    "errorMsg",
    "showSoundOutError",
    "showStatusMessage",
    "statusMsg",
    "dataSink",
    "frames",
    "guiUpdate",
    "setXIT",
    "qsy",
    "hzDelta",
    "drifted",
    "prev",
    "cur",
    "setFreqOffsetForRestore",
    "freq",
    "shouldRestore",
    "tryRestoreFreqOffset",
    "changeFreq",
    "hasExistingMessageBufferToMe",
    "int*",
    "pOffset",
    "hasExistingMessageBuffer",
    "offset",
    "drift",
    "pPrevOffset",
    "hasClosedExistingMessageBuffer",
    "logCallActivity",
    "CallDetail",
    "d",
    "spot",
    "logHeardGraph",
    "from",
    "to",
    "lookupCallInCompoundCache",
    "call",
    "cacheActivity",
    "key",
    "restoreActivity",
    "clearActivity",
    "clearBandActivity",
    "clearRXActivity",
    "clearCallActivity",
    "createGroupCallsignTableRows",
    "QTableWidget*",
    "table",
    "selectedCall",
    "bool&",
    "showIconColumn",
    "displayTextForFreq",
    "date",
    "isTx",
    "isNewLine",
    "isLast",
    "writeNoticeTextToUI",
    "writeMessageTextToUI",
    "block",
    "isMessageQueuedForTransmit",
    "isInDecodeDelayThreshold",
    "seconds",
    "prependMessageText",
    "addMessageText",
    "clear",
    "selectFirstPlaceholder",
    "confirmThenEnqueueMessage",
    "timeout",
    "priority",
    "message",
    "Callback",
    "c",
    "enqueueMessage",
    "resetMessage",
    "resetMessageUI",
    "restoreMessage",
    "initializeDummyData",
    "initializeGroupMessageDummyData",
    "ensureCallsignSet",
    "alert",
    "ensureKeyNotStuck",
    "ensureNotIdle",
    "ensureCanTransmit",
    "ensureCreateMessageReady",
    "createMessage",
    "bool*",
    "pDisableTypeahead",
    "appendMessage",
    "isData",
    "createMessageTransmitQueue",
    "reset",
    "resetMessageTransmitQueue",
    "popMessageFrame",
    "std::pair<QString,int>",
    "tryNotify",
    "processDecodeEvent",
    "JS8::Event::Variant",
    "prepareEncryptedOutgoingText",
    "decryptMaybeEncryptedText",
    "QString*",
    "plaintext",
    "rewriteVisibleText",
    "filteredInboxMessages",
    "QList<std::pair<int,Message>>",
    "msgs",
    "hideUnencryptedMessages",
    "initialize_fonts",
    "on_menuModeJS8_aboutToShow",
    "on_menuControl_aboutToShow",
    "on_actionCheck_for_Updates_triggered",
    "on_actionEnable_Monitor_RX_toggled",
    "checked",
    "on_actionEnable_Transmitter_TX_toggled",
    "on_actionEnable_Reporting_SPOT_toggled",
    "on_actionEnable_Tuning_Tone_TUNE_toggled",
    "on_menuWindow_aboutToShow",
    "on_actionFocus_Message_Receive_Area_triggered",
    "on_actionFocus_Message_Reply_Area_triggered",
    "on_actionFocus_Band_Activity_Table_triggered",
    "on_actionFocus_Call_Activity_Table_triggered",
    "on_actionClear_All_Activity_triggered",
    "on_actionClear_Band_Activity_triggered",
    "on_actionClear_RX_Activity_triggered",
    "on_actionClear_Call_Activity_triggered",
    "on_actionSetOffset_triggered",
    "on_actionShow_Fullscreen_triggered",
    "on_actionShow_Statusbar_triggered",
    "on_actionShow_Frequency_Clock_triggered",
    "on_actionShow_Band_Activity_triggered",
    "on_actionShow_Band_Heartbeats_and_ACKs_triggered",
    "on_actionShow_Call_Activity_triggered",
    "on_actionShow_Waterfall_triggered",
    "on_actionShow_Waterfall_Controls_triggered",
    "on_actionShow_Waterfall_Time_Drift_Controls_triggered",
    "on_actionReset_Window_Sizes_triggered",
    "on_actionSettings_triggered",
    "openSettings",
    "tab",
    "prepareApi",
    "prepareSpotting",
    "on_spotButton_clicked",
    "on_monitorButton_clicked",
    "on_actionAbout_triggered",
    "resetPushButtonToggleText",
    "QPushButton*",
    "btn",
    "on_stopTxButton_clicked",
    "on_dialFreqUpButton_clicked",
    "on_dialFreqDownButton_clicked",
    "on_actionAdd_Log_Entry_triggered",
    "on_actionOpen_log_directory_triggered",
    "on_actionCopyright_Notice_triggered",
    "decode",
    "k",
    "isDecodeReady",
    "k0",
    "qint32*",
    "pCurrentDecodeStart",
    "pNextDecodeStart",
    "pStart",
    "pSz",
    "pCycle",
    "decodeEnqueueReady",
    "decodeEnqueueReadyExperiment",
    "decodeProcessQueue",
    "pSubmode",
    "decodeStart",
    "decodeBusy",
    "b",
    "decodeDone",
    "on_startTxButton_toggled",
    "toggleTx",
    "start",
    "on_logQSOButton_clicked",
    "on_actionModeJS8HB_toggled",
    "on_actionModeJS8Normal_triggered",
    "on_actionModeJS8Fast_triggered",
    "on_actionModeJS8Turbo_triggered",
    "on_actionModeJS8Slow_triggered",
    "on_actionModeJS8Ultra_triggered",
    "on_actionHeartbeatAcknowledgements_toggled",
    "on_actionModeMultiDecoder_toggled",
    "on_actionModeAutoreply_toggled",
    "canCurrentModeSendHeartbeat",
    "prepareMonitorControls",
    "prepareHeartbeatMode",
    "enabled",
    "f11f12",
    "on_actionErase_ALL_TXT_triggered",
    "on_actionErase_js8call_log_adi_triggered",
    "startTx",
    "startTx2",
    "stopTx",
    "stopTx2",
    "buildFrequencyMenu",
    "QMenu*",
    "menu",
    "buildHeartbeatMenu",
    "buildCQMenu",
    "buildRepeatMenu",
    "button",
    "isLowInterval",
    "interval",
    "sendHeartbeat",
    "sendHeartbeatAck",
    "snr",
    "extra",
    "on_hbMacroButton_toggled",
    "on_hbMacroButton_clicked",
    "sendCQ",
    "repeat",
    "on_cqMacroButton_toggled",
    "on_cqMacroButton_clicked",
    "on_replyMacroButton_clicked",
    "on_snrMacroButton_clicked",
    "on_infoMacroButton_clicked",
    "on_statusMacroButton_clicked",
    "setShowColumn",
    "tableKey",
    "columnKey",
    "value",
    "showColumn",
    "default_",
    "buildShowColumnsMenu",
    "setSortBy",
    "getSortBy",
    "defaultValue",
    "getSortByReverse",
    "SortByReverse",
    "buildSortByMenu",
    "QList<std::pair<QString,QString>>",
    "values",
    "buildBandActivitySortByMenu",
    "buildCallActivitySortByMenu",
    "buildQueryMenu",
    "callsign",
    "buildMacroValues",
    "QMap<QString,QString>",
    "buildSuggestionsMenu",
    "QTextEdit*",
    "edit",
    "point",
    "buildSavedMessagesMenu",
    "buildRelayMenu",
    "buildRelayAction",
    "QAction*",
    "buildEditMenu",
    "on_queryButton_pressed",
    "on_macrosMacroButton_pressed",
    "on_deselectButton_pressed",
    "on_tableWidgetRXAll_cellClicked",
    "row",
    "col",
    "on_tableWidgetRXAll_cellDoubleClicked",
    "generateCallDetail",
    "on_tableWidgetCalls_cellClicked",
    "on_tableWidgetCalls_cellDoubleClicked",
    "buildMessageFrames",
    "QList<std::pair<QString,int>>",
    "prepareNextMessageFrame",
    "isFreqOffsetFree",
    "f",
    "bw",
    "findFreeFreqOffset",
    "fmin",
    "fmax",
    "checkRepeat",
    "setDrift",
    "on_tuneButton_clicked",
    "acceptQSO",
    "Frequency",
    "dial_freq",
    "mode",
    "rpt_sent",
    "rpt_received",
    "comments",
    "QSO_date_on",
    "operator_call",
    "my_call",
    "my_grid",
    "ADIF",
    "QVariantMap",
    "additionalFields",
    "on_readFreq_clicked",
    "on_outAttenuation_valueChanged",
    "rigOpen",
    "handle_transceiver_update",
    "Transceiver::TransceiverState",
    "handle_transceiver_failure",
    "reason",
    "band_changed",
    "monitor",
    "end_tuning",
    "stop_tuning",
    "stopTuneATU",
    "auto_tx_mode",
    "on_monitorButton_toggled",
    "on_monitorTxButton_toggled",
    "on_tuneButton_toggled",
    "on_spotButton_toggled",
    "emitPTT",
    "on",
    "emitTones",
    "udpNetworkMessage",
    "Message",
    "tcpNetworkMessage",
    "networkMessage",
    "canSendNetworkMessage",
    "sendNetworkMessage",
    "type",
    "params",
    "pskReporterError",
    "TxAgain",
    "checkVersion",
    "alertOnUpToDate",
    "checkStartupWarnings",
    "clearCallsignSelected",
    "refreshTextDisplay",
    "manualBandHop",
    "StationList::Station",
    "station"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     249,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      37,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1, 1508,    2, 0x04,    1 /* Private */,
       4,    2, 1511,    2, 0x04,    3 /* Private */,
       7,    0, 1516,    2, 0x04,    6 /* Private */,
       8,    0, 1517,    2, 0x04,    7 /* Private */,
       9,    4, 1518,    2, 0x04,    8 /* Private */,
      14,    3, 1527,    2, 0x04,   13 /* Private */,
      16,    1, 1534,    2, 0x04,   17 /* Private */,
      18,    2, 1537,    2, 0x04,   19 /* Private */,
      19,    1, 1542,    2, 0x04,   22 /* Private */,
      21,    2, 1545,    2, 0x04,   24 /* Private */,
      24,    0, 1550,    2, 0x04,   27 /* Private */,
      25,    1, 1551,    2, 0x04,   28 /* Private */,
      26,    3, 1554,    2, 0x04,   30 /* Private */,
      27,    5, 1561,    2, 0x04,   34 /* Private */,
      29,    3, 1572,    2, 0x04,   40 /* Private */,
      30,   11, 1579,    2, 0x04,   44 /* Private */,
      31,    6, 1602,    2, 0x04,   56 /* Private */,
      32,    1, 1615,    2, 0x04,   63 /* Private */,
      34,    1, 1618,    2, 0x04,   65 /* Private */,
      36,    2, 1621,    2, 0x104,   67 /* Private | MethodIsConst  */,
      38,    3, 1626,    2, 0x104,   70 /* Private | MethodIsConst  */,
      41,    0, 1633,    2, 0x104,   74 /* Private | MethodIsConst  */,
      42,    4, 1634,    2, 0x104,   75 /* Private | MethodIsConst  */,
      47,    0, 1643,    2, 0x104,   80 /* Private | MethodIsConst  */,
      48,    0, 1644,    2, 0x104,   81 /* Private | MethodIsConst  */,
      49,    1, 1645,    2, 0x104,   82 /* Private | MethodIsConst  */,
      50,    1, 1648,    2, 0x104,   84 /* Private | MethodIsConst  */,
      51,    0, 1651,    2, 0x104,   86 /* Private | MethodIsConst  */,
      52,    0, 1652,    2, 0x104,   87 /* Private | MethodIsConst  */,
      53,    1, 1653,    2, 0x104,   88 /* Private | MethodIsConst  */,
      54,    1, 1656,    2, 0x104,   90 /* Private | MethodIsConst  */,
      54,    0, 1659,    2, 0x124,   92 /* Private | MethodCloned | MethodIsConst  */,
      56,    1, 1660,    2, 0x104,   93 /* Private | MethodIsConst  */,
      56,    0, 1663,    2, 0x124,   95 /* Private | MethodCloned | MethodIsConst  */,
      57,    4, 1664,    2, 0x104,   96 /* Private | MethodIsConst  */,
      61,    1, 1673,    2, 0x104,  101 /* Private | MethodIsConst  */,
      62,    0, 1676,    2, 0x104,  103 /* Private | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      63,    1, 1677,    2, 0x0a,  104 /* Public */,
      65,    1, 1680,    2, 0x0a,  106 /* Public */,
      66,    1, 1683,    2, 0x0a,  108 /* Public */,
      68,    1, 1686,    2, 0x0a,  110 /* Public */,
      70,    0, 1689,    2, 0x0a,  112 /* Public */,
      71,    1, 1690,    2, 0x0a,  113 /* Public */,
      72,    1, 1693,    2, 0x0a,  115 /* Public */,
      74,    2, 1696,    2, 0x0a,  117 /* Public */,
      77,    2, 1701,    2, 0x0a,  120 /* Public */,
      80,    0, 1706,    2, 0x0a,  123 /* Public */,
      81,    1, 1707,    2, 0x0a,  124 /* Public */,
      82,    1, 1710,    2, 0x0a,  126 /* Public */,
      85,    4, 1713,    2, 0x0a,  128 /* Public */,
      89,    1, 1722,    2, 0x0a,  133 /* Public */,
      90,    2, 1725,    2, 0x0a,  135 /* Public */,
      90,    1, 1730,    2, 0x2a,  138 /* Public | MethodCloned */,
      94,    2, 1733,    2, 0x0a,  140 /* Public */,
      97,    1, 1738,    2, 0x0a,  143 /* Public */,
      99,    1, 1741,    2, 0x0a,  145 /* Public */,
     101,    1, 1744,    2, 0x0a,  147 /* Public */,
     102,    0, 1747,    2, 0x0a,  149 /* Public */,
     103,    0, 1748,    2, 0x0a,  150 /* Public */,
     104,    0, 1749,    2, 0x0a,  151 /* Public */,
     105,    0, 1750,    2, 0x0a,  152 /* Public */,
     106,    3, 1751,    2, 0x0a,  153 /* Public */,
     112,    6, 1758,    2, 0x0a,  157 /* Public */,
     117,    2, 1771,    2, 0x0a,  164 /* Public */,
     118,    5, 1776,    2, 0x0a,  167 /* Public */,
     118,    4, 1787,    2, 0x2a,  173 /* Public | MethodCloned */,
     120,    0, 1796,    2, 0x0a,  178 /* Public */,
     121,    1, 1797,    2, 0x0a,  179 /* Public */,
     123,    1, 1800,    2, 0x0a,  181 /* Public */,
     124,    3, 1803,    2, 0x0a,  183 /* Public */,
     124,    2, 1810,    2, 0x2a,  187 /* Public | MethodCloned */,
     124,    1, 1815,    2, 0x2a,  190 /* Public | MethodCloned */,
     127,    5, 1818,    2, 0x0a,  192 /* Public */,
     133,    4, 1829,    2, 0x0a,  198 /* Public */,
     134,    0, 1838,    2, 0x0a,  203 /* Public */,
     135,    0, 1839,    2, 0x0a,  204 /* Public */,
     136,    0, 1840,    2, 0x0a,  205 /* Public */,
     137,    0, 1841,    2, 0x0a,  206 /* Public */,
     138,    0, 1842,    2, 0x0a,  207 /* Public */,
     139,    1, 1843,    2, 0x0a,  208 /* Public */,
     139,    0, 1846,    2, 0x2a,  210 /* Public | MethodCloned */,
     141,    1, 1847,    2, 0x0a,  211 /* Public */,
     142,    0, 1850,    2, 0x0a,  213 /* Public */,
     143,    0, 1851,    2, 0x0a,  214 /* Public */,
     144,    1, 1852,    2, 0x0a,  215 /* Public */,
     145,    2, 1855,    2, 0x0a,  217 /* Public */,
     148,    3, 1860,    2, 0x0a,  220 /* Public */,
     150,    4, 1867,    2, 0x0a,  224 /* Public */,
     152,    0, 1876,    2, 0x0a,  229 /* Public */,
     153,    0, 1877,    2, 0x0a,  230 /* Public */,
     155,    1, 1878,    2, 0x0a,  231 /* Public */,
     156,    1, 1881,    2, 0x0a,  233 /* Public */,
     158,    1, 1884,    2, 0x0a,  235 /* Public */,
     159,    2, 1887,    2, 0x10a,  237 /* Public | MethodIsConst  */,
     162,    1, 1892,    2, 0x10a,  240 /* Public | MethodIsConst  */,
     163,    1, 1895,    2, 0x10a,  242 /* Public | MethodIsConst  */,
     166,    0, 1898,    2, 0x10a,  244 /* Public | MethodIsConst  */,
     167,    0, 1899,    2, 0x08,  245 /* Private */,
     168,    0, 1900,    2, 0x08,  246 /* Private */,
     169,    0, 1901,    2, 0x08,  247 /* Private */,
     170,    0, 1902,    2, 0x08,  248 /* Private */,
     171,    1, 1903,    2, 0x08,  249 /* Private */,
     173,    1, 1906,    2, 0x08,  251 /* Private */,
     174,    1, 1909,    2, 0x08,  253 /* Private */,
     175,    1, 1912,    2, 0x08,  255 /* Private */,
     176,    0, 1915,    2, 0x08,  257 /* Private */,
     177,    0, 1916,    2, 0x08,  258 /* Private */,
     178,    0, 1917,    2, 0x08,  259 /* Private */,
     179,    0, 1918,    2, 0x08,  260 /* Private */,
     180,    0, 1919,    2, 0x08,  261 /* Private */,
     181,    0, 1920,    2, 0x08,  262 /* Private */,
     182,    0, 1921,    2, 0x08,  263 /* Private */,
     183,    0, 1922,    2, 0x08,  264 /* Private */,
     184,    0, 1923,    2, 0x08,  265 /* Private */,
     185,    0, 1924,    2, 0x08,  266 /* Private */,
     186,    1, 1925,    2, 0x08,  267 /* Private */,
     187,    1, 1928,    2, 0x08,  269 /* Private */,
     188,    1, 1931,    2, 0x08,  271 /* Private */,
     189,    1, 1934,    2, 0x08,  273 /* Private */,
     190,    1, 1937,    2, 0x08,  275 /* Private */,
     191,    1, 1940,    2, 0x08,  277 /* Private */,
     192,    1, 1943,    2, 0x08,  279 /* Private */,
     193,    1, 1946,    2, 0x08,  281 /* Private */,
     194,    1, 1949,    2, 0x08,  283 /* Private */,
     195,    0, 1952,    2, 0x08,  285 /* Private */,
     196,    0, 1953,    2, 0x08,  286 /* Private */,
     197,    1, 1954,    2, 0x08,  287 /* Private */,
     197,    0, 1957,    2, 0x28,  289 /* Private | MethodCloned */,
     199,    0, 1958,    2, 0x08,  290 /* Private */,
     200,    0, 1959,    2, 0x08,  291 /* Private */,
     201,    1, 1960,    2, 0x08,  292 /* Private */,
     202,    1, 1963,    2, 0x08,  294 /* Private */,
     203,    0, 1966,    2, 0x08,  296 /* Private */,
     204,    1, 1967,    2, 0x08,  297 /* Private */,
     207,    0, 1970,    2, 0x08,  299 /* Private */,
     208,    0, 1971,    2, 0x08,  300 /* Private */,
     209,    0, 1972,    2, 0x08,  301 /* Private */,
     210,    0, 1973,    2, 0x08,  302 /* Private */,
     211,    0, 1974,    2, 0x08,  303 /* Private */,
     212,    0, 1975,    2, 0x08,  304 /* Private */,
     213,    1, 1976,    2, 0x08,  305 /* Private */,
     215,    8, 1979,    2, 0x08,  307 /* Private */,
     223,    2, 1996,    2, 0x08,  316 /* Private */,
     224,    2, 2001,    2, 0x08,  319 /* Private */,
     225,    1, 2006,    2, 0x08,  322 /* Private */,
     227,    0, 2009,    2, 0x08,  324 /* Private */,
     228,    1, 2010,    2, 0x08,  325 /* Private */,
     230,    0, 2013,    2, 0x08,  327 /* Private */,
     231,    1, 2014,    2, 0x08,  328 /* Private */,
     232,    1, 2017,    2, 0x08,  330 /* Private */,
     234,    0, 2020,    2, 0x08,  332 /* Private */,
     235,    1, 2021,    2, 0x08,  333 /* Private */,
     236,    0, 2024,    2, 0x08,  335 /* Private */,
     237,    0, 2025,    2, 0x08,  336 /* Private */,
     238,    0, 2026,    2, 0x08,  337 /* Private */,
     239,    0, 2027,    2, 0x08,  338 /* Private */,
     240,    0, 2028,    2, 0x08,  339 /* Private */,
     241,    1, 2029,    2, 0x08,  340 /* Private */,
     242,    1, 2032,    2, 0x08,  342 /* Private */,
     243,    1, 2035,    2, 0x08,  344 /* Private */,
     244,    0, 2038,    2, 0x108,  346 /* Private | MethodIsConst  */,
     245,    0, 2039,    2, 0x08,  347 /* Private */,
     246,    1, 2040,    2, 0x08,  348 /* Private */,
     248,    1, 2043,    2, 0x08,  350 /* Private */,
     249,    0, 2046,    2, 0x08,  352 /* Private */,
     250,    0, 2047,    2, 0x08,  353 /* Private */,
     251,    0, 2048,    2, 0x08,  354 /* Private */,
     252,    0, 2049,    2, 0x08,  355 /* Private */,
     253,    0, 2050,    2, 0x08,  356 /* Private */,
     254,    0, 2051,    2, 0x08,  357 /* Private */,
     255,    1, 2052,    2, 0x08,  358 /* Private */,
     258,    1, 2055,    2, 0x08,  360 /* Private */,
     259,    1, 2058,    2, 0x08,  362 /* Private */,
     260,    4, 2061,    2, 0x08,  364 /* Private */,
     264,    0, 2070,    2, 0x08,  369 /* Private */,
     265,    3, 2071,    2, 0x08,  370 /* Private */,
     268,    1, 2078,    2, 0x08,  374 /* Private */,
     269,    0, 2081,    2, 0x08,  376 /* Private */,
     270,    1, 2082,    2, 0x08,  377 /* Private */,
     270,    0, 2085,    2, 0x28,  379 /* Private | MethodCloned */,
     272,    1, 2086,    2, 0x08,  380 /* Private */,
     273,    0, 2089,    2, 0x08,  382 /* Private */,
     274,    0, 2090,    2, 0x08,  383 /* Private */,
     275,    0, 2091,    2, 0x08,  384 /* Private */,
     276,    0, 2092,    2, 0x08,  385 /* Private */,
     277,    0, 2093,    2, 0x08,  386 /* Private */,
     278,    3, 2094,    2, 0x08,  387 /* Private */,
     282,    3, 2101,    2, 0x08,  391 /* Private */,
     282,    2, 2108,    2, 0x28,  395 /* Private | MethodCloned */,
     284,    2, 2113,    2, 0x08,  398 /* Private */,
     285,    2, 2118,    2, 0x08,  401 /* Private */,
     286,    2, 2123,    2, 0x108,  404 /* Private | MethodIsConst  */,
     288,    2, 2128,    2, 0x108,  407 /* Private | MethodIsConst  */,
     290,    4, 2133,    2, 0x08,  410 /* Private */,
     293,    1, 2142,    2, 0x08,  415 /* Private */,
     294,    1, 2145,    2, 0x08,  417 /* Private */,
     295,    2, 2148,    2, 0x08,  419 /* Private */,
     297,    0, 2153,    2, 0x08,  422 /* Private */,
     299,    3, 2154,    2, 0x08,  423 /* Private */,
     303,    1, 2161,    2, 0x08,  427 /* Private */,
     304,    1, 2164,    2, 0x08,  429 /* Private */,
     305,    1, 2167,    2, 0x08,  431 /* Private */,
     307,    2, 2170,    2, 0x08,  433 /* Private */,
     308,    0, 2175,    2, 0x08,  436 /* Private */,
     309,    0, 2176,    2, 0x08,  437 /* Private */,
     310,    0, 2177,    2, 0x08,  438 /* Private */,
     311,    2, 2178,    2, 0x08,  439 /* Private */,
     314,    2, 2183,    2, 0x08,  442 /* Private */,
     315,    1, 2188,    2, 0x08,  445 /* Private */,
     316,    2, 2191,    2, 0x08,  447 /* Private */,
     317,    2, 2196,    2, 0x08,  450 /* Private */,
     318,    3, 2201,    2, 0x08,  453 /* Private */,
     320,    0, 2208,    2, 0x08,  457 /* Private */,
     321,    2, 2209,    2, 0x08,  458 /* Private */,
     324,    3, 2214,    2, 0x08,  461 /* Private */,
     327,    0, 2221,    2, 0x08,  465 /* Private */,
     328,    1, 2222,    2, 0x08,  466 /* Private */,
     329,    1, 2225,    2, 0x08,  468 /* Private */,
     330,   16, 2228,    2, 0x08,  470 /* Private */,
     344,    0, 2261,    2, 0x08,  487 /* Private */,
     345,    1, 2262,    2, 0x08,  488 /* Private */,
     346,    0, 2265,    2, 0x08,  490 /* Private */,
     347,    1, 2266,    2, 0x08,  491 /* Private */,
     349,    1, 2269,    2, 0x08,  493 /* Private */,
     351,    0, 2272,    2, 0x08,  495 /* Private */,
     352,    1, 2273,    2, 0x08,  496 /* Private */,
     353,    0, 2276,    2, 0x08,  498 /* Private */,
     354,    0, 2277,    2, 0x08,  499 /* Private */,
     355,    0, 2278,    2, 0x08,  500 /* Private */,
     356,    1, 2279,    2, 0x08,  501 /* Private */,
     357,    1, 2282,    2, 0x08,  503 /* Private */,
     358,    1, 2285,    2, 0x08,  505 /* Private */,
     359,    1, 2288,    2, 0x08,  507 /* Private */,
     360,    1, 2291,    2, 0x08,  509 /* Private */,
     361,    1, 2294,    2, 0x08,  511 /* Private */,
     363,    0, 2297,    2, 0x08,  513 /* Private */,
     364,    1, 2298,    2, 0x08,  514 /* Private */,
     366,    1, 2301,    2, 0x08,  516 /* Private */,
     367,    1, 2304,    2, 0x08,  518 /* Private */,
     368,    0, 2307,    2, 0x08,  520 /* Private */,
     369,    2, 2308,    2, 0x08,  521 /* Private */,
     369,    3, 2313,    2, 0x08,  524 /* Private */,
     372,    1, 2320,    2, 0x08,  528 /* Private */,
     373,    0, 2323,    2, 0x08,  530 /* Private */,
     374,    1, 2324,    2, 0x08,  531 /* Private */,
     376,    0, 2327,    2, 0x08,  533 /* Private */,
     377,    0, 2328,    2, 0x08,  534 /* Private */,
     378,    0, 2329,    2, 0x08,  535 /* Private */,
     379,    1, 2330,    2, 0x08,  536 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   15,
    QMetaType::Void, QMetaType::Float,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    5,    6,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 28, QMetaType::QString, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QByteArray,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, 0x80000000 | 37, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 37, QMetaType::UInt, QMetaType::UInt,    2,   39,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Int, 0x80000000 | 44, 0x80000000 | 46,    2,   43,   45,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, 0x80000000 | 60, 0x80000000 | 46,   58,   59,    2,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Void, QMetaType::LongLong,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   75,   76,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   78,   79,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Bool, 0x80000000 | 83,   84,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Bool, 0x80000000 | 83,   59,   86,   87,   88,
    QMetaType::Bool, QMetaType::Int,   86,
    QMetaType::Void, 0x80000000 | 91, QMetaType::Bool,   92,   93,
    QMetaType::Void, 0x80000000 | 91,   92,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   95,   96,
    QMetaType::QString, QMetaType::QString,   98,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 107, QMetaType::QString, 0x80000000 | 110,  108,  109,  111,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QDateTime, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   15,   78,  113,  114,  115,  116,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString,  113,   15,
    QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::Int,  113,   15,   78,  114,  119,
    QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Int, QMetaType::Bool,  113,   15,   78,  114,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,  122,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   15,  125,  126,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,  125,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, 0x80000000 | 131,  128,  129,  130,   86,  132,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, 0x80000000 | 131,  129,  130,   86,  132,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,  140,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::QString, QMetaType::QString, 0x80000000 | 146,   15,  147,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool, 0x80000000 | 146,   15,  149,  147,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 146,   15,  151,  149,  147,
    QMetaType::Void,
    0x80000000 | 154,
    QMetaType::Void, QMetaType::QString,  100,
    QMetaType::Void, 0x80000000 | 157,    2,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 160,   15,  161,
    QMetaType::Bool, 0x80000000 | 160,   15,
    0x80000000 | 164, 0x80000000 | 164,  165,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  198,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 205,  206,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,  214,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 217, 0x80000000 | 217, 0x80000000 | 217, 0x80000000 | 217, 0x80000000 | 217,   59,  214,  216,  218,  219,  220,  221,  222,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,  214,  216,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,  214,  216,
    QMetaType::Bool, 0x80000000 | 217,  226,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  229,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  233,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  247,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 256,  257,
    QMetaType::Void, 0x80000000 | 256,  257,
    QMetaType::Void, 0x80000000 | 256,  257,
    QMetaType::Void, 0x80000000 | 256, 0x80000000 | 205, QMetaType::Bool, 0x80000000 | 83,  257,  261,  262,  263,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   96,  266,  267,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  271,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,  279,  280,  281,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,  279,  280,  283,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,  279,  280,
    QMetaType::Void, 0x80000000 | 256, QMetaType::QString,  257,  279,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  100,  281,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,  100,  287,
    0x80000000 | 289, QMetaType::QString, QMetaType::QString,  100,  287,
    QMetaType::Void, 0x80000000 | 256, QMetaType::QString, QMetaType::QString, 0x80000000 | 291,  257,  100,  287,  292,
    QMetaType::Void, 0x80000000 | 256,  257,
    QMetaType::Void, 0x80000000 | 256,  257,
    QMetaType::Void, 0x80000000 | 256, QMetaType::QString,    2,  296,
    0x80000000 | 298,
    QMetaType::Void, 0x80000000 | 256, 0x80000000 | 300, QMetaType::QPoint,  257,  301,  302,
    QMetaType::Void, 0x80000000 | 256,  257,
    QMetaType::Void, 0x80000000 | 256,  257,
    0x80000000 | 306, QMetaType::QString,   98,
    QMetaType::Void, 0x80000000 | 256, 0x80000000 | 300,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  312,  313,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  312,  313,
    QMetaType::QString, QMetaType::QString,  109,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  312,  313,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  312,  313,
    0x80000000 | 319, QMetaType::QString, QMetaType::Bool, 0x80000000 | 146,   15,  149,  147,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,  322,  323,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  325,  326,  323,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, 0x80000000 | 331, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, 0x80000000 | 342,    2,   98,   12,  332,  333,   59,  334,  335,  336,   35,  337,  338,  339,  340,  341,  343,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 348,    2,
    QMetaType::Void, QMetaType::QString,  350,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  362,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 365,  130,
    QMetaType::Void, 0x80000000 | 365,  130,
    QMetaType::Void, 0x80000000 | 365,  130,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  370,  130,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 342,  370,  130,  371,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  375,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 380,  381,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'apiSetMaxConnections'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'apiSetServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'apiStartServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'apiStopServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aprsClientEnqueueSpot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'aprsClientEnqueueThirdParty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'aprsClientSetSkipPercent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'aprsClientSetServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'aprsClientSetPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'aprsClientSetLocalStation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'aprsClientSendReports'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pskReporterSendReport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pskReporterSetLocalStation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'pskReporterAddRemoteStation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<Radio::Frequency, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'spotClientSetLocalStation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'spotClientEnqueueCmd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'spotClientEnqueueSpot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'decodedLineReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'playNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'initializeNotificationAudioOutputStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QAudioDevice &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'initializeAudioOutputStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'stopAudioOutputStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startAudioInputStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice::Channel, std::false_type>,
        // method 'suspendAudioInputStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeAudioInputStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startDetector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice::Channel, std::false_type>,
        // method 'FFTSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'detectorClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transmitFrequency'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'endTransmitMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'endTransmitMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tune'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'tune'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<SoundOutput *, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice::Channel, std::false_type>,
        // method 'outAttenuationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'toggleShorthand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSoundInError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showSoundOutError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showStatusMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dataSink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'guiUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setXIT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'qsy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'drifted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setFreqOffsetForRestore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'tryRestoreFreqOffset'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'changeFreq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hasExistingMessageBufferToMe'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int *, std::false_type>,
        // method 'hasExistingMessageBuffer'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int *, std::false_type>,
        // method 'hasClosedExistingMessageBuffer'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'logCallActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CallDetail, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'logCallActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CallDetail, std::false_type>,
        // method 'logHeardGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'lookupCallInCompoundCache'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'cacheActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'restoreActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'clearActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearBandActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearRXActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearCallActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGroupCallsignTableRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool &, std::false_type>,
        // method 'displayTextForFreq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'writeNoticeTextToUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'writeMessageTextToUI'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'writeMessageTextToUI'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isMessageQueuedForTransmit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isInDecodeDelayThreshold'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'prependMessageText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'addMessageText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addMessageText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addMessageText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'confirmThenEnqueueMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Callback, std::false_type>,
        // method 'enqueueMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Callback, std::false_type>,
        // method 'resetMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetMessageUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restoreMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializeDummyData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializeGroupMessageDummyData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ensureCallsignSet'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ensureCallsignSet'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ensureKeyNotStuck'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'ensureNotIdle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ensureCanTransmit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ensureCreateMessageReady'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createMessage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'appendMessage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'createMessageTransmitQueue'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'resetMessageTransmitQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'popMessageFrame'
        QtPrivate::TypeAndForceComplete<QPair<QString,int>, std::false_type>,
        // method 'tryNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'processDecodeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<JS8::Event::Variant const &, std::false_type>,
        // method 'prepareEncryptedOutgoingText'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'decryptMaybeEncryptedText'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString *, std::false_type>,
        // method 'rewriteVisibleText'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString *, std::false_type>,
        // method 'filteredInboxMessages'
        QtPrivate::TypeAndForceComplete<QList<QPair<int,Message>>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QPair<int,Message>> const &, std::false_type>,
        // method 'hideUnencryptedMessages'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'initialize_fonts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuModeJS8_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuControl_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCheck_for_Updates_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEnable_Monitor_RX_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionEnable_Transmitter_TX_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionEnable_Reporting_SPOT_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionEnable_Tuning_Tone_TUNE_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_menuWindow_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFocus_Message_Receive_Area_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFocus_Message_Reply_Area_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFocus_Band_Activity_Table_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFocus_Call_Activity_Table_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClear_All_Activity_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClear_Band_Activity_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClear_RX_Activity_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClear_Call_Activity_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSetOffset_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShow_Fullscreen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Statusbar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Frequency_Clock_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Band_Activity_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Band_Heartbeats_and_ACKs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Call_Activity_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Waterfall_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Waterfall_Controls_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_Waterfall_Time_Drift_Controls_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionReset_Window_Sizes_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSettings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'openSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prepareApi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prepareSpotting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spotButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_monitorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetPushButtonToggleText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        // method 'on_stopTxButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dialFreqUpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dialFreqDownButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_Log_Entry_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_log_directory_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopyright_Notice_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decode'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'isDecodeReady'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32 *, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32 *, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32 *, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32 *, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32 *, std::false_type>,
        // method 'decodeEnqueueReady'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'decodeEnqueueReadyExperiment'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'decodeProcessQueue'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32 *, std::false_type>,
        // method 'decodeStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decodeBusy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'decodeDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startTxButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleTx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_logQSOButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionModeJS8HB_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionModeJS8Normal_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionModeJS8Fast_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionModeJS8Turbo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionModeJS8Slow_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionModeJS8Ultra_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHeartbeatAcknowledgements_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionModeMultiDecoder_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionModeAutoreply_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'canCurrentModeSendHeartbeat'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'prepareMonitorControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prepareHeartbeatMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'f11f12'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionErase_ALL_TXT_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionErase_js8call_log_adi_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTx2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopTx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopTx2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buildFrequencyMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildHeartbeatMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildCQMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildRepeatMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int *, std::false_type>,
        // method 'sendHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendHeartbeatAck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_hbMacroButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_hbMacroButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendCQ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendCQ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cqMacroButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_cqMacroButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_replyMacroButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_snrMacroButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_infoMacroButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_statusMacroButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setShowColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'buildShowColumnsMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setSortBy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getSortBy'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'getSortByReverse'
        QtPrivate::TypeAndForceComplete<SortByReverse, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'buildSortByMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QPair<QString,QString> >, std::false_type>,
        // method 'buildBandActivitySortByMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildCallActivitySortByMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildQueryMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'buildMacroValues'
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>,
        // method 'buildSuggestionsMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextEdit *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'buildSavedMessagesMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildRelayMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        // method 'buildRelayAction'
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'buildEditMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextEdit *, std::false_type>,
        // method 'on_queryButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_macrosMacroButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deselectButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidgetRXAll_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidgetRXAll_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'generateCallDetail'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_tableWidgetCalls_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidgetCalls_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'buildMessageFrames'
        QtPrivate::TypeAndForceComplete<QList<QPair<QString,int>>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'prepareNextMessageFrame'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isFreqOffsetFree'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'findFreeFreqOffset'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'checkRepeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDrift'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tuneButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'acceptQSO'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Frequency, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap const &, std::false_type>,
        // method 'on_readFreq_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_outAttenuation_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rigOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handle_transceiver_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Transceiver::TransceiverState const &, std::false_type>,
        // method 'handle_transceiver_failure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'band_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'monitor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'end_tuning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop_tuning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopTuneATU'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'auto_tx_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_monitorButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_monitorTxButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_tuneButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_spotButton_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitPTT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitTones'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'udpNetworkMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message const &, std::false_type>,
        // method 'tcpNetworkMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message const &, std::false_type>,
        // method 'networkMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message const &, std::false_type>,
        // method 'canSendNetworkMessage'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendNetworkMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'sendNetworkMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'pskReporterError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'TxAgain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'checkStartupWarnings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearCallsignSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshTextDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'manualBandHop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const StationList::Station, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->apiSetMaxConnections((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->apiSetServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 2: _t->apiStartServer(); break;
        case 3: _t->apiStopServer(); break;
        case 4: _t->aprsClientEnqueueSpot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 5: _t->aprsClientEnqueueThirdParty((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->aprsClientSetSkipPercent((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 7: _t->aprsClientSetServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 8: _t->aprsClientSetPaused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->aprsClientSetLocalStation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->aprsClientSendReports(); break;
        case 11: _t->pskReporterSendReport((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->pskReporterSetLocalStation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->pskReporterAddRemoteStation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Radio::Frequency>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 14: _t->spotClientSetLocalStation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->spotClientEnqueueCmd((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[11]))); break;
        case 16: _t->spotClientEnqueueSpot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 17: _t->decodedLineReady((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 18: _t->playNotification((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->initializeNotificationAudioOutputStream((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 20: _t->initializeAudioOutputStream((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 21: _t->stopAudioOutputStream(); break;
        case 22: _t->startAudioInputStream((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<AudioDevice::Channel>>(_a[4]))); break;
        case 23: _t->suspendAudioInputStream(); break;
        case 24: _t->resumeAudioInputStream(); break;
        case 25: _t->startDetector((*reinterpret_cast< std::add_pointer_t<AudioDevice::Channel>>(_a[1]))); break;
        case 26: _t->FFTSize((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 27: _t->detectorClose(); break;
        case 28: _t->finished(); break;
        case 29: _t->transmitFrequency((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->endTransmitMessage((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->endTransmitMessage(); break;
        case 32: _t->tune((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->tune(); break;
        case 34: _t->sendMessage((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<SoundOutput*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<AudioDevice::Channel>>(_a[4]))); break;
        case 35: _t->outAttenuationChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 36: _t->toggleShorthand(); break;
        case 37: _t->showSoundInError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->showSoundOutError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->showStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->dataSink((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 41: _t->guiUpdate(); break;
        case 42: _t->setXIT((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 43: _t->qsy((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->drifted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 45: _t->setFreqOffsetForRestore((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 46: { bool _r = _t->tryRestoreFreqOffset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->changeFreq((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 48: { bool _r = _t->hasExistingMessageBufferToMe((*reinterpret_cast< std::add_pointer_t<int*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { bool _r = _t->hasExistingMessageBuffer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int*>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->hasClosedExistingMessageBuffer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->logCallActivity((*reinterpret_cast< std::add_pointer_t<CallDetail>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 52: _t->logCallActivity((*reinterpret_cast< std::add_pointer_t<CallDetail>>(_a[1]))); break;
        case 53: _t->logHeardGraph((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 54: { QString _r = _t->lookupCallInCompoundCache((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->cacheActivity((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 56: _t->restoreActivity((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 57: _t->clearActivity(); break;
        case 58: _t->clearBandActivity(); break;
        case 59: _t->clearRXActivity(); break;
        case 60: _t->clearCallActivity(); break;
        case 61: _t->createGroupCallsignTableRows((*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[3]))); break;
        case 62: _t->displayTextForFreq((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 63: _t->writeNoticeTextToUI((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 64: { int _r = _t->writeMessageTextToUI((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 65: { int _r = _t->writeMessageTextToUI((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 66: { bool _r = _t->isMessageQueuedForTransmit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: { bool _r = _t->isInDecodeDelayThreshold((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->prependMessageText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 69: _t->addMessageText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 70: _t->addMessageText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 71: _t->addMessageText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 72: _t->confirmThenEnqueueMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<Callback>>(_a[5]))); break;
        case 73: _t->enqueueMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Callback>>(_a[4]))); break;
        case 74: _t->resetMessage(); break;
        case 75: _t->resetMessageUI(); break;
        case 76: _t->restoreMessage(); break;
        case 77: _t->initializeDummyData(); break;
        case 78: _t->initializeGroupMessageDummyData(); break;
        case 79: { bool _r = _t->ensureCallsignSet((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: { bool _r = _t->ensureCallsignSet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: { bool _r = _t->ensureKeyNotStuck((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: { bool _r = _t->ensureNotIdle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 83: { bool _r = _t->ensureCanTransmit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: { bool _r = _t->ensureCreateMessageReady((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 85: { QString _r = _t->createMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 86: { QString _r = _t->appendMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 87: { QString _r = _t->createMessageTransmitQueue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->resetMessageTransmitQueue(); break;
        case 89: { std::pair<QString,int> _r = _t->popMessageFrame();
            if (_a[0]) *reinterpret_cast< std::pair<QString,int>*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->tryNotify((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 91: _t->processDecodeEvent((*reinterpret_cast< std::add_pointer_t<JS8::Event::Variant>>(_a[1]))); break;
        case 92: { QString _r = _t->prepareEncryptedOutgoingText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 93: { bool _r = _t->decryptMaybeEncryptedText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 94: { bool _r = _t->rewriteVisibleText((*reinterpret_cast< std::add_pointer_t<QString*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 95: { QList<std::pair<int,Message>> _r = _t->filteredInboxMessages((*reinterpret_cast< std::add_pointer_t<QList<std::pair<int,Message>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<std::pair<int,Message>>*>(_a[0]) = std::move(_r); }  break;
        case 96: { bool _r = _t->hideUnencryptedMessages();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 97: _t->initialize_fonts(); break;
        case 98: _t->on_menuModeJS8_aboutToShow(); break;
        case 99: _t->on_menuControl_aboutToShow(); break;
        case 100: _t->on_actionCheck_for_Updates_triggered(); break;
        case 101: _t->on_actionEnable_Monitor_RX_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 102: _t->on_actionEnable_Transmitter_TX_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 103: _t->on_actionEnable_Reporting_SPOT_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 104: _t->on_actionEnable_Tuning_Tone_TUNE_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 105: _t->on_menuWindow_aboutToShow(); break;
        case 106: _t->on_actionFocus_Message_Receive_Area_triggered(); break;
        case 107: _t->on_actionFocus_Message_Reply_Area_triggered(); break;
        case 108: _t->on_actionFocus_Band_Activity_Table_triggered(); break;
        case 109: _t->on_actionFocus_Call_Activity_Table_triggered(); break;
        case 110: _t->on_actionClear_All_Activity_triggered(); break;
        case 111: _t->on_actionClear_Band_Activity_triggered(); break;
        case 112: _t->on_actionClear_RX_Activity_triggered(); break;
        case 113: _t->on_actionClear_Call_Activity_triggered(); break;
        case 114: _t->on_actionSetOffset_triggered(); break;
        case 115: _t->on_actionShow_Fullscreen_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 116: _t->on_actionShow_Statusbar_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 117: _t->on_actionShow_Frequency_Clock_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 118: _t->on_actionShow_Band_Activity_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 119: _t->on_actionShow_Band_Heartbeats_and_ACKs_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 120: _t->on_actionShow_Call_Activity_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 121: _t->on_actionShow_Waterfall_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 122: _t->on_actionShow_Waterfall_Controls_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 123: _t->on_actionShow_Waterfall_Time_Drift_Controls_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 124: _t->on_actionReset_Window_Sizes_triggered(); break;
        case 125: _t->on_actionSettings_triggered(); break;
        case 126: _t->openSettings((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 127: _t->openSettings(); break;
        case 128: _t->prepareApi(); break;
        case 129: _t->prepareSpotting(); break;
        case 130: _t->on_spotButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 131: _t->on_monitorButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 132: _t->on_actionAbout_triggered(); break;
        case 133: _t->resetPushButtonToggleText((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1]))); break;
        case 134: _t->on_stopTxButton_clicked(); break;
        case 135: _t->on_dialFreqUpButton_clicked(); break;
        case 136: _t->on_dialFreqDownButton_clicked(); break;
        case 137: _t->on_actionAdd_Log_Entry_triggered(); break;
        case 138: _t->on_actionOpen_log_directory_triggered(); break;
        case 139: _t->on_actionCopyright_Notice_triggered(); break;
        case 140: { bool _r = _t->decode((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 141: { bool _r = _t->isDecodeReady((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint32>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint32>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<qint32*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<qint32*>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<qint32*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint32*>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<qint32*>>(_a[8])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 142: { bool _r = _t->decodeEnqueueReady((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint32>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 143: { bool _r = _t->decodeEnqueueReadyExperiment((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint32>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 144: { bool _r = _t->decodeProcessQueue((*reinterpret_cast< std::add_pointer_t<qint32*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 145: _t->decodeStart(); break;
        case 146: _t->decodeBusy((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 147: _t->decodeDone(); break;
        case 148: _t->on_startTxButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 149: _t->toggleTx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 150: _t->on_logQSOButton_clicked(); break;
        case 151: _t->on_actionModeJS8HB_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 152: _t->on_actionModeJS8Normal_triggered(); break;
        case 153: _t->on_actionModeJS8Fast_triggered(); break;
        case 154: _t->on_actionModeJS8Turbo_triggered(); break;
        case 155: _t->on_actionModeJS8Slow_triggered(); break;
        case 156: _t->on_actionModeJS8Ultra_triggered(); break;
        case 157: _t->on_actionHeartbeatAcknowledgements_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 158: _t->on_actionModeMultiDecoder_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 159: _t->on_actionModeAutoreply_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 160: { bool _r = _t->canCurrentModeSendHeartbeat();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 161: _t->prepareMonitorControls(); break;
        case 162: _t->prepareHeartbeatMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 163: _t->f11f12((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 164: _t->on_actionErase_ALL_TXT_triggered(); break;
        case 165: _t->on_actionErase_js8call_log_adi_triggered(); break;
        case 166: _t->startTx(); break;
        case 167: _t->startTx2(); break;
        case 168: _t->stopTx(); break;
        case 169: _t->stopTx2(); break;
        case 170: _t->buildFrequencyMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 171: _t->buildHeartbeatMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 172: _t->buildCQMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 173: _t->buildRepeatMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int*>>(_a[4]))); break;
        case 174: _t->sendHeartbeat(); break;
        case 175: _t->sendHeartbeatAck((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 176: _t->on_hbMacroButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 177: _t->on_hbMacroButton_clicked(); break;
        case 178: _t->sendCQ((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 179: _t->sendCQ(); break;
        case 180: _t->on_cqMacroButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 181: _t->on_cqMacroButton_clicked(); break;
        case 182: _t->on_replyMacroButton_clicked(); break;
        case 183: _t->on_snrMacroButton_clicked(); break;
        case 184: _t->on_infoMacroButton_clicked(); break;
        case 185: _t->on_statusMacroButton_clicked(); break;
        case 186: _t->setShowColumn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 187: { bool _r = _t->showColumn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 188: { bool _r = _t->showColumn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 189: _t->buildShowColumnsMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 190: _t->setSortBy((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 191: { QString _r = _t->getSortBy((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 192: { SortByReverse _r = _t->getSortByReverse((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< SortByReverse*>(_a[0]) = std::move(_r); }  break;
        case 193: _t->buildSortByMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<QString,QString>>>>(_a[4]))); break;
        case 194: _t->buildBandActivitySortByMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 195: _t->buildCallActivitySortByMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 196: _t->buildQueryMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 197: { QMap<QString,QString> _r = _t->buildMacroValues();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 198: _t->buildSuggestionsMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTextEdit*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[3]))); break;
        case 199: _t->buildSavedMessagesMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 200: _t->buildRelayMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1]))); break;
        case 201: { QAction* _r = _t->buildRelayAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 202: _t->buildEditMenu((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTextEdit*>>(_a[2]))); break;
        case 203: _t->on_queryButton_pressed(); break;
        case 204: _t->on_macrosMacroButton_pressed(); break;
        case 205: _t->on_deselectButton_pressed(); break;
        case 206: _t->on_tableWidgetRXAll_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 207: _t->on_tableWidgetRXAll_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 208: { QString _r = _t->generateCallDetail((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 209: _t->on_tableWidgetCalls_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 210: _t->on_tableWidgetCalls_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 211: { QList<std::pair<QString,int>> _r = _t->buildMessageFrames((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<std::pair<QString,int>>*>(_a[0]) = std::move(_r); }  break;
        case 212: { bool _r = _t->prepareNextMessageFrame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 213: { bool _r = _t->isFreqOffsetFree((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 214: { int _r = _t->findFreeFreqOffset((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 215: _t->checkRepeat(); break;
        case 216: _t->setDrift((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 217: _t->on_tuneButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 218: _t->acceptQSO((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Frequency>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[16]))); break;
        case 219: _t->on_readFreq_clicked(); break;
        case 220: _t->on_outAttenuation_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 221: _t->rigOpen(); break;
        case 222: _t->handle_transceiver_update((*reinterpret_cast< std::add_pointer_t<Transceiver::TransceiverState>>(_a[1]))); break;
        case 223: _t->handle_transceiver_failure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 224: _t->band_changed(); break;
        case 225: _t->monitor((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 226: _t->end_tuning(); break;
        case 227: _t->stop_tuning(); break;
        case 228: _t->stopTuneATU(); break;
        case 229: _t->auto_tx_mode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 230: _t->on_monitorButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 231: _t->on_monitorTxButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 232: _t->on_tuneButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 233: _t->on_spotButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 234: _t->emitPTT((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 235: _t->emitTones(); break;
        case 236: _t->udpNetworkMessage((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 237: _t->tcpNetworkMessage((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 238: _t->networkMessage((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 239: { bool _r = _t->canSendNetworkMessage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 240: _t->sendNetworkMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 241: _t->sendNetworkMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[3]))); break;
        case 242: _t->pskReporterError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 243: _t->TxAgain(); break;
        case 244: _t->checkVersion((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 245: _t->checkStartupWarnings(); break;
        case 246: _t->clearCallsignSelected(); break;
        case 247: _t->refreshTextDisplay(); break;
        case 248: _t->manualBandHop((*reinterpret_cast< std::add_pointer_t<StationList::Station>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Radio::Frequency >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice::Channel >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice::Channel >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice::Channel >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        case 198:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTextEdit* >(); break;
            }
            break;
        case 202:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTextEdit* >(); break;
            }
            break;
        case 222:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Transceiver::TransceiverState >(); break;
            }
            break;
        case 248:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< StationList::Station >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MainWindow::*)(int );
            if (_q_method_type _q_method = &MainWindow::apiSetMaxConnections; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , quint16 );
            if (_q_method_type _q_method = &MainWindow::apiSetServer; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::apiStartServer; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::apiStopServer; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , QString , QString );
            if (_q_method_type _q_method = &MainWindow::aprsClientEnqueueSpot; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , QString );
            if (_q_method_type _q_method = &MainWindow::aprsClientEnqueueThirdParty; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(float );
            if (_q_method_type _q_method = &MainWindow::aprsClientSetSkipPercent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , quint16 );
            if (_q_method_type _q_method = &MainWindow::aprsClientSetServer; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(bool );
            if (_q_method_type _q_method = &MainWindow::aprsClientSetPaused; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString );
            if (_q_method_type _q_method = &MainWindow::aprsClientSetLocalStation; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::aprsClientSendReports; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(bool );
            if (_q_method_type _q_method = &MainWindow::pskReporterSendReport; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , QString );
            if (_q_method_type _q_method = &MainWindow::pskReporterSetLocalStation; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , Radio::Frequency , QString , int );
            if (_q_method_type _q_method = &MainWindow::pskReporterAddRemoteStation; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , QString );
            if (_q_method_type _q_method = &MainWindow::spotClientSetLocalStation; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , QString , QString , QString , QString , QString , int , int , int , int );
            if (_q_method_type _q_method = &MainWindow::spotClientEnqueueCmd; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QString , QString , int , int , int , int );
            if (_q_method_type _q_method = &MainWindow::spotClientEnqueueSpot; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QByteArray );
            if (_q_method_type _q_method = &MainWindow::decodedLineReady; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(const QString & );
            if (_q_method_type _q_method = &MainWindow::playNotification; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(const QAudioDevice & , unsigned  ) const;
            if (_q_method_type _q_method = &MainWindow::initializeNotificationAudioOutputStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QAudioDevice , unsigned  , unsigned  ) const;
            if (_q_method_type _q_method = &MainWindow::initializeAudioOutputStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)() const;
            if (_q_method_type _q_method = &MainWindow::stopAudioOutputStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QAudioDevice const & , int , AudioDevice * , AudioDevice::Channel ) const;
            if (_q_method_type _q_method = &MainWindow::startAudioInputStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)() const;
            if (_q_method_type _q_method = &MainWindow::suspendAudioInputStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)() const;
            if (_q_method_type _q_method = &MainWindow::resumeAudioInputStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(AudioDevice::Channel ) const;
            if (_q_method_type _q_method = &MainWindow::startDetector; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(unsigned  ) const;
            if (_q_method_type _q_method = &MainWindow::FFTSize; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)() const;
            if (_q_method_type _q_method = &MainWindow::detectorClose; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)() const;
            if (_q_method_type _q_method = &MainWindow::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(double ) const;
            if (_q_method_type _q_method = &MainWindow::transmitFrequency; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(bool ) const;
            if (_q_method_type _q_method = &MainWindow::endTransmitMessage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(bool ) const;
            if (_q_method_type _q_method = &MainWindow::tune; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(double , int , SoundOutput * , AudioDevice::Channel ) const;
            if (_q_method_type _q_method = &MainWindow::sendMessage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(qreal ) const;
            if (_q_method_type _q_method = &MainWindow::outAttenuationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)() const;
            if (_q_method_type _q_method = &MainWindow::toggleShorthand; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 249)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 249;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 249)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 249;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::apiSetMaxConnections(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::apiSetServer(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::apiStartServer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::apiStopServer()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::aprsClientEnqueueSpot(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::aprsClientEnqueueThirdParty(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::aprsClientSetSkipPercent(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::aprsClientSetServer(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::aprsClientSetPaused(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::aprsClientSetLocalStation(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::aprsClientSendReports()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainWindow::pskReporterSendReport(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::pskReporterSetLocalStation(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::pskReporterAddRemoteStation(QString _t1, QString _t2, Radio::Frequency _t3, QString _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::spotClientSetLocalStation(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::spotClientEnqueueCmd(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, int _t8, int _t9, int _t10, int _t11)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::spotClientEnqueueSpot(QString _t1, QString _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::decodedLineReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::playNotification(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindow::initializeNotificationAudioOutputStream(const QAudioDevice & _t1, unsigned  _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MainWindow::initializeAudioOutputStream(QAudioDevice _t1, unsigned  _t2, unsigned  _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindow::stopAudioOutputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainWindow::startAudioInputStream(QAudioDevice const & _t1, int _t2, AudioDevice * _t3, AudioDevice::Channel _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MainWindow::suspendAudioInputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MainWindow::resumeAudioInputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MainWindow::startDetector(AudioDevice::Channel _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MainWindow::FFTSize(unsigned  _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MainWindow::detectorClose()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void MainWindow::finished()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void MainWindow::transmitFrequency(double _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MainWindow::endTransmitMessage(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 30, _a);
}

// SIGNAL 32
void MainWindow::tune(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 32, _a);
}

// SIGNAL 34
void MainWindow::sendMessage(double _t1, int _t2, SoundOutput * _t3, AudioDevice::Channel _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MainWindow::outAttenuationChanged(qreal _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MainWindow::toggleShorthand()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 36, nullptr);
}
QT_WARNING_POP
