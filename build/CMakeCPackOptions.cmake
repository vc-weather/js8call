# This file is configured at cmake time, and loaded at cpack time.
# To pass variables to cpack from cmake, they must be configured
# in this file.

set (CPACK_SET_DESTDIR true)

set (CPACK_PACKAGE_VENDOR "Jordan Sherer, KN4CRD")
set (CPACK_PACKAGE_CONTACT "Jordan Sherer <kn4crd@gmail.com>")
set (CPACK_PACKAGE_DESCRIPTION_SUMMARY "JS8Call - Digital Modes for Weak Signal Communications in Amateur Radio.")
set (CPACK_RESOURCE_FILE_LICENSE "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/COPYING")
set (CPACK_PACKAGE_INSTALL_DIRECTORY ${CPACK_PACKAGE_NAME})
set (CPACK_PACKAGE_EXECUTABLES js8call "JS8Call")
set (CPACK_CREATE_DESKTOP_LINKS js8call)
set (CPACK_STRIP_FILES TRUE)

#
# components
#
#set (CPACK_COMPONENTS_ALL runtime)
#set (CPACK_COMPONENT_RUNTIME_DISPLAY_NAME "JS8Call Application")
#set (CPACK_COMPONENT_RUNTIME_DESCRIPTION "")

if (CPACK_GENERATOR MATCHES "NSIS")
  set (CPACK_SET_DESTDIR FALSE)
  set (CPACK_STRIP_FILES FALSE)	# breaks Qt packaging on Windows

  set (CPACK_NSIS_INSTALL_ROOT "C:\\Program Files\\js8call")
  set (CMAKE_INSTALL_PREFIX "C:\\Program Files") # Add this for improved build-system output

#  if(CMAKE_CL_64) 
    set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES64") 
    set(CPACK_NSIS_PACKAGE_NAME "${CPACK_PACKAGE_INSTALL_DIRECTORY} (Win64)") 
    set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "${CPACK_PACKAGE_NAME} ${CPACK_PACKAGE_VERSION} (Win64)") 
#  else() 
#    set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES") 
#    set(CPACK_NSIS_PACKAGE_NAME "${CPACK_PACKAGE_INSTALL_DIRECTORY}") 
#    set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "${CPACK_PACKAGE_NAME} ${CPACK_PACKAGE_VERSION}") 
#  endif()

  # set the install/unistall icon used for the installer itself
  # There is a bug in NSI that does not handle full unix paths properly.
  set (CPACK_NSIS_MUI_ICON "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/icons/windows-icons\\js8call.ico")
  set (CPACK_NSIS_MUI_UNIICON "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/icons/windows-icons\\js8call.ico")
  # set the package header icon for MUI
  set (CPACK_PACKAGE_ICON "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/icons/windows-icons\\installer_logo.bmp")
  # tell cpack to create links to the doc files
  set (CPACK_NSIS_MENU_LINKS
    "https://groups.io/g/js8call" "JS8Call Web Site"
    )
  # Use the icon from wsjtx for add-remove programs
  set (CPACK_NSIS_INSTALLED_ICON_NAME "bin\\\\js8call.exe")

  set (CPACK_NSIS_DISPLAY_NAME "${CPACK_PACKAGE_DESCRIPTION_SUMMARY}")
  set (CPACK_NSIS_HELP_LINK "https://groups.io/g/js8call")
  set (CPACK_NSIS_URL_INFO_ABOUT "https://groups.io/g/js8call")
  set (CPACK_NSIS_CONTACT "${CPACK_PACKAGE_CONTACT}")
  set (CPACK_NSIS_MUI_FINISHPAGE_RUN "js8call.exe")
  set (CPACK_NSIS_MODIFY_PATH ON)
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "PackageMaker")
  set (CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_FILE_NAME}-pkg")
  set (CPACK_PACKAGE_DEFAULT_LOCATION "/Applications")
  set (CPACK_PACKAGING_INSTALL_PREFIX "/")
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "DragNDrop")
  set (CPACK_DMG_VOLUME_NAME "JS8Call")
  set (CPACK_DMG_BACKGROUND_IMAGE "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/icons/Darwin/DragNDrop Background.png")
  set (CPACK_DMG_DS_STORE "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/Darwin/js8call_DMG.DS_Store")
  set (CPACK_BUNDLE_NAME "")
  set (CPACK_PACKAGE_ICON "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/build/js8call.icns")
  set (CPACK_BUNDLE_ICON "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/build/js8call.icns")
  set (CPACK_BUNDLE_STARTUP_COMMAND "/Users/jessemorquecho/Documents/Vibecoding/JS8Call/js8call/Mac-js8call-startup.sh")
  set (CPACK_PACKAGING_INSTALL_PREFIX "/")
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "WIX")
  # Reset CPACK_PACKAGE_VERSION to deal with WiX restriction.
  # But the file names still use the full CMake_VERSION value:
  set (CPACK_PACKAGE_FILE_NAME
    "${CPACK_PACKAGE_NAME}--${CPACK_SYSTEM_NAME}")
  set (CPACK_SOURCE_PACKAGE_FILE_NAME
    "${CPACK_PACKAGE_NAME}--Source")

  if (NOT CPACK_WIX_SIZEOF_VOID_P)
    set (CPACK_WIX_SIZEOF_VOID_P "8")
  endif ()
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "DEB")
  set (CPACK_PACKAGE_FILE_NAME ${CPACK_PACKAGE_NAME}_${CPACK_PACKAGE_VERSION}_${CPACK_DEBIAN_PACKAGE_ARCHITECTURE})
  set (CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} Debian)
endif ("${CPACK_GENERATOR}" STREQUAL "DEB")

if ("${CPACK_GENERATOR}" STREQUAL "RPM")
  set (CPACK_PACKAGE_FILE_NAME ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}.${CPACK_RPM_PACKAGE_ARCHITECTURE})
endif ("${CPACK_GENERATOR}" STREQUAL "RPM")

message (STATUS "CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")
