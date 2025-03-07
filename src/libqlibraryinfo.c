#include <string.h>
#include "libqversionnumber.hpp"
#include "libqlibraryinfo.hpp"
#include "libqlibraryinfo.h"

/// https://doc.qt.io/qt-6/qlibraryinfo.html

/// q_libraryinfo_new constructs a new QLibraryInfo object.
///
/// ``` QLibraryInfo* other ```
QLibraryInfo* q_libraryinfo_new(void* other) {
    return QLibraryInfo_new((QLibraryInfo*)other);
}

/// q_libraryinfo_new2 constructs a new QLibraryInfo object and invalidates the source QLibraryInfo object.
///
/// ``` QLibraryInfo* other ```
QLibraryInfo* q_libraryinfo_new2(void* other) {
    return QLibraryInfo_new2((QLibraryInfo*)other);
}

/// q_libraryinfo_copy_assign shallow copies `other` into `self`.
///
/// ``` QLibraryInfo* self, QLibraryInfo* other ```
void q_libraryinfo_copy_assign(void* self, void* other) {
    QLibraryInfo_CopyAssign((QLibraryInfo*)self, (QLibraryInfo*)other);
}

/// q_libraryinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLibraryInfo* self, QLibraryInfo* other ```
void q_libraryinfo_move_assign(void* self, void* other) {
    QLibraryInfo_MoveAssign((QLibraryInfo*)self, (QLibraryInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#build)
///
///
const char* q_libraryinfo_build() {
    return QLibraryInfo_Build();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#isDebugBuild)
///
///
bool q_libraryinfo_is_debug_build() {
    return QLibraryInfo_IsDebugBuild();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#version)
///
///
QVersionNumber* q_libraryinfo_version() {
    return QLibraryInfo_Version();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#path)
///
/// ``` enum QLibraryInfo__LibraryPath p ```
const char* q_libraryinfo_path(int64_t p) {
    libqt_string _str = QLibraryInfo_Path(p);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#location)
///
/// ``` enum QLibraryInfo__LibraryPath location ```
const char* q_libraryinfo_location(int64_t location) {
    libqt_string _str = QLibraryInfo_Location(location);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#platformPluginArguments)
///
/// ``` const char* platformName ```
const char** q_libraryinfo_platform_plugin_arguments(const char* platformName) {
    libqt_list _arr = QLibraryInfo_PlatformPluginArguments(qstring(platformName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QLibraryInfo* self ```
void q_libraryinfo_delete(void* self) {
    QLibraryInfo_Delete((QLibraryInfo*)(self));
}