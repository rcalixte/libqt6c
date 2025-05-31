#pragma once
#ifndef SRCQT6C_LIBQLIBRARYINFO_H
#define SRCQT6C_LIBQLIBRARYINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>
#include "libqversionnumber.h"

/// https://doc.qt.io/qt-6/qlibraryinfo.html

/// q_libraryinfo_new constructs a new QLibraryInfo object.
///
/// ``` QLibraryInfo* other ```
QLibraryInfo* q_libraryinfo_new(void* other);

/// q_libraryinfo_new2 constructs a new QLibraryInfo object and invalidates the source QLibraryInfo object.
///
/// ``` QLibraryInfo* other ```
QLibraryInfo* q_libraryinfo_new2(void* other);

/// q_libraryinfo_copy_assign shallow copies `other` into `self`.
///
/// ``` QLibraryInfo* self, QLibraryInfo* other ```
void q_libraryinfo_copy_assign(void* self, void* other);

/// q_libraryinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLibraryInfo* self, QLibraryInfo* other ```
void q_libraryinfo_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#build)
///
///
const char* q_libraryinfo_build();

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#isDebugBuild)
///
///
bool q_libraryinfo_is_debug_build();

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#version)
///
///
QVersionNumber* q_libraryinfo_version();

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#path)
///
/// ``` enum QLibraryInfo__LibraryPath p ```
const char* q_libraryinfo_path(int64_t p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#location)
///
/// ``` enum QLibraryInfo__LibraryPath location ```
const char* q_libraryinfo_location(int64_t location);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#platformPluginArguments)
///
/// ``` const char* platformName ```
const char** q_libraryinfo_platform_plugin_arguments(const char* platformName);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#dtor.QLibraryInfo)
///
/// Delete this object from C++ memory.
///
/// ``` QLibraryInfo* self ```
void q_libraryinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qlibraryinfo.html#types

typedef enum {
    QLIBRARYINFO_LIBRARYPATH_PREFIXPATH = 0,
    QLIBRARYINFO_LIBRARYPATH_DOCUMENTATIONPATH = 1,
    QLIBRARYINFO_LIBRARYPATH_HEADERSPATH = 2,
    QLIBRARYINFO_LIBRARYPATH_LIBRARIESPATH = 3,
    QLIBRARYINFO_LIBRARYPATH_LIBRARYEXECUTABLESPATH = 4,
    QLIBRARYINFO_LIBRARYPATH_BINARIESPATH = 5,
    QLIBRARYINFO_LIBRARYPATH_PLUGINSPATH = 6,
    QLIBRARYINFO_LIBRARYPATH_QMLIMPORTSPATH = 7,
    QLIBRARYINFO_LIBRARYPATH_QML2IMPORTSPATH = 7,
    QLIBRARYINFO_LIBRARYPATH_ARCHDATAPATH = 8,
    QLIBRARYINFO_LIBRARYPATH_DATAPATH = 9,
    QLIBRARYINFO_LIBRARYPATH_TRANSLATIONSPATH = 10,
    QLIBRARYINFO_LIBRARYPATH_EXAMPLESPATH = 11,
    QLIBRARYINFO_LIBRARYPATH_TESTSPATH = 12,
    QLIBRARYINFO_LIBRARYPATH_SETTINGSPATH = 100
} QLibraryInfo__LibraryPath;

#endif
