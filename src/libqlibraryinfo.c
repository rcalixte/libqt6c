#include "libqversionnumber.hpp"
#include "libqlibraryinfo.hpp"
#include "libqlibraryinfo.h"

QLibraryInfo* q_libraryinfo_new(void* other) {
    return QLibraryInfo_new((QLibraryInfo*)other);
}

QLibraryInfo* q_libraryinfo_new2(void* other) {
    return QLibraryInfo_new2((QLibraryInfo*)other);
}

void q_libraryinfo_copy_assign(void* self, void* other) {
    QLibraryInfo_CopyAssign((QLibraryInfo*)self, (QLibraryInfo*)other);
}

void q_libraryinfo_move_assign(void* self, void* other) {
    QLibraryInfo_MoveAssign((QLibraryInfo*)self, (QLibraryInfo*)other);
}

const char* q_libraryinfo_build() {
    return QLibraryInfo_Build();
}

bool q_libraryinfo_is_debug_build() {
    return QLibraryInfo_IsDebugBuild();
}

bool q_libraryinfo_is_shared_build() {
    return QLibraryInfo_IsSharedBuild();
}

QVersionNumber* q_libraryinfo_version() {
    return QLibraryInfo_Version();
}

const char* q_libraryinfo_path(int64_t p) {
    libqt_string _str = QLibraryInfo_Path(p);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_libraryinfo_paths(int64_t p) {
    libqt_list _arr = QLibraryInfo_Paths(p);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_libraryinfo_location(int64_t location) {
    libqt_string _str = QLibraryInfo_Location(location);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_libraryinfo_platform_plugin_arguments(const char* platformName) {
    libqt_list _arr = QLibraryInfo_PlatformPluginArguments(qstring(platformName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_libraryinfo_delete(void* self) {
    QLibraryInfo_Delete((QLibraryInfo*)(self));
}
