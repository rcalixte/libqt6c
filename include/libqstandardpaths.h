#pragma once
#ifndef SRC_QT6C_LIBQSTANDARDPATHS_H
#define SRC_QT6C_LIBQSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#writableLocation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
///
const char* q_standardpaths_writable_location(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#standardLocations)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
///
const char** q_standardpaths_standard_locations(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
/// @param fileName const char*
///
const char* q_standardpaths_locate(int32_t type, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
/// @param fileName const char*
///
const char** q_standardpaths_locate_all(int32_t type, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#displayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
///
const char* q_standardpaths_display_name(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
///
/// Caller is responsible for freeing the returned memory
///
/// @param executableName const char*
///
const char* q_standardpaths_find_executable(const char* executableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#setTestModeEnabled)
///
/// @param testMode bool
///
void q_standardpaths_set_test_mode_enabled(bool testMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#isTestModeEnabled)
///
bool q_standardpaths_is_test_mode_enabled();

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
/// @param fileName const char*
/// @param options flag of enum QStandardPaths__LocateOption
///
const char* q_standardpaths_locate3(int32_t type, const char* fileName, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum QStandardPaths__StandardLocation
/// @param fileName const char*
/// @param options flag of enum QStandardPaths__LocateOption
///
const char** q_standardpaths_locate_all3(int32_t type, const char* fileName, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
///
/// Caller is responsible for freeing the returned memory
///
/// @param executableName const char*
/// @param paths const char**
///
const char* q_standardpaths_find_executable2(const char* executableName, const char* paths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#public-types)

typedef enum {
    QSTANDARDPATHS_STANDARDLOCATION_DESKTOPLOCATION = 0,
    QSTANDARDPATHS_STANDARDLOCATION_DOCUMENTSLOCATION = 1,
    QSTANDARDPATHS_STANDARDLOCATION_FONTSLOCATION = 2,
    QSTANDARDPATHS_STANDARDLOCATION_APPLICATIONSLOCATION = 3,
    QSTANDARDPATHS_STANDARDLOCATION_MUSICLOCATION = 4,
    QSTANDARDPATHS_STANDARDLOCATION_MOVIESLOCATION = 5,
    QSTANDARDPATHS_STANDARDLOCATION_PICTURESLOCATION = 6,
    QSTANDARDPATHS_STANDARDLOCATION_TEMPLOCATION = 7,
    QSTANDARDPATHS_STANDARDLOCATION_HOMELOCATION = 8,
    QSTANDARDPATHS_STANDARDLOCATION_APPLOCALDATALOCATION = 9,
    QSTANDARDPATHS_STANDARDLOCATION_CACHELOCATION = 10,
    QSTANDARDPATHS_STANDARDLOCATION_GENERICDATALOCATION = 11,
    QSTANDARDPATHS_STANDARDLOCATION_RUNTIMELOCATION = 12,
    QSTANDARDPATHS_STANDARDLOCATION_CONFIGLOCATION = 13,
    QSTANDARDPATHS_STANDARDLOCATION_DOWNLOADLOCATION = 14,
    QSTANDARDPATHS_STANDARDLOCATION_GENERICCACHELOCATION = 15,
    QSTANDARDPATHS_STANDARDLOCATION_GENERICCONFIGLOCATION = 16,
    QSTANDARDPATHS_STANDARDLOCATION_APPDATALOCATION = 17,
    QSTANDARDPATHS_STANDARDLOCATION_APPCONFIGLOCATION = 18,
    QSTANDARDPATHS_STANDARDLOCATION_PUBLICSHARELOCATION = 19,
    QSTANDARDPATHS_STANDARDLOCATION_TEMPLATESLOCATION = 20,
    QSTANDARDPATHS_STANDARDLOCATION_STATELOCATION = 21,
    QSTANDARDPATHS_STANDARDLOCATION_GENERICSTATELOCATION = 22
} QStandardPaths__StandardLocation;

/// [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#public-types)

typedef enum {
    QSTANDARDPATHS_LOCATEOPTION_LOCATEFILE = 0,
    QSTANDARDPATHS_LOCATEOPTION_LOCATEDIRECTORY = 1
} QStandardPaths__LocateOption;

#endif
