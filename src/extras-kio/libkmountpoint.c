#include "../libqshareddata.hpp"
#include "libkmountpoint.hpp"
#include "libkmountpoint.h"

KMountPoint__List* k_mountpoint_possible_mount_points() {
    return KMountPoint_PossibleMountPoints();
}

KMountPoint__List* k_mountpoint_current_mount_points() {
    return KMountPoint_CurrentMountPoints();
}

const char* k_mountpoint_mounted_from(void* self) {
    libqt_string _str = KMountPoint_MountedFrom((KMountPoint*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mountpoint_is_on_network(void* self) {
    return KMountPoint_IsOnNetwork((KMountPoint*)self);
}

dev_t k_mountpoint_device_id(void* self) {
    return (int)KMountPoint_DeviceId((KMountPoint*)self);
}

const char* k_mountpoint_real_device_name(void* self) {
    libqt_string _str = KMountPoint_RealDeviceName((KMountPoint*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mountpoint_mount_point(void* self) {
    libqt_string _str = KMountPoint_MountPoint((KMountPoint*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mountpoint_mount_type(void* self) {
    libqt_string _str = KMountPoint_MountType((KMountPoint*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_mountpoint_mount_options(void* self) {
    libqt_list _arr = KMountPoint_MountOptions((KMountPoint*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_mountpoint_mount_options");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

bool k_mountpoint_probably_slow(void* self) {
    return KMountPoint_ProbablySlow((KMountPoint*)self);
}

bool k_mountpoint_test_file_system_flag(void* self, int32_t flag) {
    return KMountPoint_TestFileSystemFlag((KMountPoint*)self, flag);
}

KMountPoint__List* k_mountpoint_possible_mount_points1(int32_t infoNeeded) {
    return KMountPoint_PossibleMountPoints1(infoNeeded);
}

KMountPoint__List* k_mountpoint_current_mount_points1(int32_t infoNeeded) {
    return KMountPoint_CurrentMountPoints1(infoNeeded);
}

void k_mountpoint_delete(void* self) {
    KMountPoint_Delete((KMountPoint*)(self));
}

// Also inherits unprojectable QList<Ptr>

KMountPoint__List* k_mountpoint__list_new() {
    return KMountPoint__List_new();
}

void k_mountpoint__list_delete(void* self) {
    KMountPoint__List_Delete((KMountPoint__List*)(self));
}
