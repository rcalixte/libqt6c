#include "libqdir.hpp"
#include <string.h>
#include "libqstorageinfo.hpp"
#include "libqstorageinfo.h"

QStorageInfo* q_storageinfo_new() {
    return QStorageInfo_new();
}

QStorageInfo* q_storageinfo_new2(const char* path) {
    return QStorageInfo_new2(qstring(path));
}

QStorageInfo* q_storageinfo_new3(void* dir) {
    return QStorageInfo_new3((QDir*)dir);
}

QStorageInfo* q_storageinfo_new4(void* other) {
    return QStorageInfo_new4((QStorageInfo*)other);
}

void q_storageinfo_operator_assign(void* self, void* other) {
    QStorageInfo_OperatorAssign((QStorageInfo*)self, (QStorageInfo*)other);
}

void q_storageinfo_swap(void* self, void* other) {
    QStorageInfo_Swap((QStorageInfo*)self, (QStorageInfo*)other);
}

void q_storageinfo_set_path(void* self, const char* path) {
    QStorageInfo_SetPath((QStorageInfo*)self, qstring(path));
}

const char* q_storageinfo_root_path(void* self) {
    libqt_string _str = QStorageInfo_RootPath((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_storageinfo_device(void* self) {
    libqt_string _str = QStorageInfo_Device((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_storageinfo_subvolume(void* self) {
    libqt_string _str = QStorageInfo_Subvolume((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_storageinfo_file_system_type(void* self) {
    libqt_string _str = QStorageInfo_FileSystemType((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_storageinfo_name(void* self) {
    libqt_string _str = QStorageInfo_Name((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_storageinfo_display_name(void* self) {
    libqt_string _str = QStorageInfo_DisplayName((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_storageinfo_bytes_total(void* self) {
    return QStorageInfo_BytesTotal((QStorageInfo*)self);
}

long long q_storageinfo_bytes_free(void* self) {
    return QStorageInfo_BytesFree((QStorageInfo*)self);
}

long long q_storageinfo_bytes_available(void* self) {
    return QStorageInfo_BytesAvailable((QStorageInfo*)self);
}

int32_t q_storageinfo_block_size(void* self) {
    return QStorageInfo_BlockSize((QStorageInfo*)self);
}

bool q_storageinfo_is_root(void* self) {
    return QStorageInfo_IsRoot((QStorageInfo*)self);
}

bool q_storageinfo_is_read_only(void* self) {
    return QStorageInfo_IsReadOnly((QStorageInfo*)self);
}

bool q_storageinfo_is_ready(void* self) {
    return QStorageInfo_IsReady((QStorageInfo*)self);
}

bool q_storageinfo_is_valid(void* self) {
    return QStorageInfo_IsValid((QStorageInfo*)self);
}

void q_storageinfo_refresh(void* self) {
    QStorageInfo_Refresh((QStorageInfo*)self);
}

libqt_list /* of QStorageInfo* */ q_storageinfo_mounted_volumes() {
    libqt_list _arr = QStorageInfo_MountedVolumes();
    return _arr;
}

QStorageInfo* q_storageinfo_root() {
    return QStorageInfo_Root();
}

void q_storageinfo_delete(void* self) {
    QStorageInfo_Delete((QStorageInfo*)(self));
}
