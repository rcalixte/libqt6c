#pragma once
#ifndef SRCQT6C_LIBQSTANDARDPATHS_H
#define SRCQT6C_LIBQSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstandardpaths.html

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#writableLocation)
///
/// ``` enum QStandardPaths__StandardLocation typeVal ```
const char* q_standardpaths_writable_location(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#standardLocations)
///
/// ``` enum QStandardPaths__StandardLocation typeVal ```
const char** q_standardpaths_standard_locations(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
///
/// ``` enum QStandardPaths__StandardLocation typeVal, const char* fileName ```
const char* q_standardpaths_locate(int64_t typeVal, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
///
/// ``` enum QStandardPaths__StandardLocation typeVal, const char* fileName ```
const char** q_standardpaths_locate_all(int64_t typeVal, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#displayName)
///
/// ``` enum QStandardPaths__StandardLocation typeVal ```
const char* q_standardpaths_display_name(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
///
/// ``` const char* executableName ```
const char* q_standardpaths_find_executable(const char* executableName);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#setTestModeEnabled)
///
/// ``` bool testMode ```
void q_standardpaths_set_test_mode_enabled(bool testMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#isTestModeEnabled)
///
///
bool q_standardpaths_is_test_mode_enabled();

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
///
/// ``` enum QStandardPaths__StandardLocation typeVal, const char* fileName, int options ```
const char* q_standardpaths_locate3(int64_t typeVal, const char* fileName, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
///
/// ``` enum QStandardPaths__StandardLocation typeVal, const char* fileName, int options ```
const char** q_standardpaths_locate_all3(int64_t typeVal, const char* fileName, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
///
/// ``` const char* executableName, const char* paths[] ```
const char* q_standardpaths_find_executable2(const char* executableName, const char* paths[]);

/// https://doc.qt.io/qt-6/qstandardpaths.html#types

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

typedef enum {
    QSTANDARDPATHS_LOCATEOPTION_LOCATEFILE = 0,
    QSTANDARDPATHS_LOCATEOPTION_LOCATEDIRECTORY = 1
} QStandardPaths__LocateOption;

#endif
