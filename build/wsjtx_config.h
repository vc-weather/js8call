#ifndef WSJTX_CONFIG_H__
#define WSJTX_CONFIG_H__

#ifdef __cplusplus
extern "C"  {
#endif

#define WSJTX_VERSION_MAJOR 2
#define WSJTX_VERSION_MINOR 3
#define WSJTX_VERSION_PATCH 2-devel

#define CMAKE_INSTALL_DATAROOTDIR "js8call.app/Contents/Resources"
#define CMAKE_INSTALL_DOCDIR "js8call.app/Contents/Resources/doc/JS8Call"
#define CMAKE_INSTALL_DATADIR "js8call.app/Contents/Resources"
#define CMAKE_PROJECT_NAME "js8call"
#define PROJECT_HOMEPAGE "https://groups.io/g/js8call"
#define PROJECT_SUMMARY_DESCRIPTION "JS8Call - Digital Modes for Weak Signal Communications in Amateur Radio."

#define WSJT_SHARED_RUNTIME 0
#define WSJT_QDEBUG_TO_FILE 0
#define WSJT_QDEBUG_IN_RELEASE 0
#define WSJT_TRACE_CAT 0
#define WSJT_TRACE_CAT_POLLS 0
#define WSJT_HAMLIB_TRACE 0
#define WSJT_HAMLIB_VERBOSE_TRACE 0
#define WSJT_ENABLE_EXPERIMENTAL_FEATURES 0
#define WSJT_RIG_NONE_CAN_SPLIT 0

#define WSJTX_STRINGIZE1(x) #x
#define WSJTX_STRINGIZE(x) WSJTX_STRINGIZE1(x)

/* consistent UNICODE behaviour */
#ifndef UNICODE
#	undef _UNICODE
#else
#	ifndef _UNICODE
#		define _UNICODE
#	endif
#endif

#ifdef __cplusplus
}
#endif

#endif
