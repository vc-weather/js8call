# Install script for directory: /Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/build/")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/build/js8call.app" USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/MacOS" TYPE PROGRAM RENAME "rigctl-local" FILES "/opt/homebrew/bin/rigctl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/MacOS" TYPE PROGRAM RENAME "rigctld-local" FILES "/opt/homebrew/bin/rigctld")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/Resources/doc/JS8Call" TYPE FILE FILES
    "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/README"
    "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/COPYING"
    "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/INSTALL"
    "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/INSTALL-WSJTX"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/Resources/js8call" TYPE FILE FILES "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/eclipse.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
        get_filename_component (the_qt_conf "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/Resources/qt.conf" REALPATH)
        file (WRITE "${the_qt_conf}"
"[Paths]
")

endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee]|[Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/MacOS/../PlugIns" TYPE DIRECTORY FILES
      "/opt/homebrew/share/qt/plugins/platforms"
      "/opt/homebrew/share/qt/plugins/audio"
      "/opt/homebrew/share/qt/plugins/accessible"
      "/opt/homebrew/share/qt/plugins/imageformats"
      "/opt/homebrew/share/qt/plugins/styles"
      FILES_MATCHING REGEX "/[^/]*\\.dylib$" REGEX "/[^/]*minimal[^/]*\\.dylib$" EXCLUDE REGEX "/[^/]*offscreen[^/]*\\.dylib$" EXCLUDE REGEX "/[^/]*quick[^/]*\\.dylib$" EXCLUDE REGEX "/[^/]*webgl[^/]*\\.dylib$" EXCLUDE REGEX "/[^/]*\\_debug\\.dylib$" EXCLUDE REGEX "/[^/]*\\.dylib\\.dsym$" EXCLUDE)
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
          get_filename_component (the_qt_conf "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/Resources/qt.conf" REALPATH)
          file (APPEND "${the_qt_conf}"
"Plugins = PlugIns
")

endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
        get_filename_component (the_path "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/MacOS/../PlugIns" REALPATH)
        file (GLOB_RECURSE QTPLUGINS "${the_path}/*.dylib")
        set (CMAKE_MODULE_PATH /Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/CMake/Modules /Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/CMake/Modules;/opt/homebrew/Cellar/qt/6.8.2/lib/cmake/Qt6;/opt/homebrew/Cellar/qt/6.8.2/lib/cmake/Qt6/3rdparty/extra-cmake-modules/find-modules;/opt/homebrew/Cellar/qt/6.8.2/lib/cmake/Qt6/3rdparty/kwin)
        include (BundleUtilities)
        set (BU_CHMOD_BUNDLE_ITEMS ON)
        set (gp_tool )
        # canonicalize path in install context
        get_filename_component (the_exe $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/js8call.app/Contents/MacOS/js8call REALPATH)
        fixup_bundle ("${the_exe}" "${QTPLUGINS}" "/opt/homebrew/lib/QtCore.framework/Versions/A")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
