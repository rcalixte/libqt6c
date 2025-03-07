#include "libqdir.hpp"
#include <string.h>
#include "libqstorageinfo.hpp"
#include "libqstorageinfo.h"

/// https://doc.qt.io/qt-6/qstorageinfo.html

/// q_storageinfo_new constructs a new QStorageInfo object.
///
///
QStorageInfo* q_storageinfo_new() {
    return QStorageInfo_new();
}

/// q_storageinfo_new2 constructs a new QStorageInfo object.
///
/// ``` const char* path ```
QStorageInfo* q_storageinfo_new2(const char* path) {
    return QStorageInfo_new2(qstring(path));
}

/// q_storageinfo_new3 constructs a new QStorageInfo object.
///
/// ``` QDir* dir ```
QStorageInfo* q_storageinfo_new3(void* dir) {
    return QStorageInfo_new3((QDir*)dir);
}

/// q_storageinfo_new4 constructs a new QStorageInfo object.
///
/// ``` QStorageInfo* other ```
QStorageInfo* q_storageinfo_new4(void* other) {
    return QStorageInfo_new4((QStorageInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#operator=)
///
/// ``` QStorageInfo* self, QStorageInfo* other ```
void q_storageinfo_operator_assign(void* self, void* other) {
    QStorageInfo_OperatorAssign((QStorageInfo*)self, (QStorageInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
///
/// ``` QStorageInfo* self, QStorageInfo* other ```
void q_storageinfo_swap(void* self, void* other) {
    QStorageInfo_Swap((QStorageInfo*)self, (QStorageInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
///
/// ``` QStorageInfo* self, const char* path ```
void q_storageinfo_set_path(void* self, const char* path) {
    QStorageInfo_SetPath((QStorageInfo*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
///
/// ``` QStorageInfo* self ```
const char* q_storageinfo_root_path(void* self) {
    libqt_string _str = QStorageInfo_RootPath((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#device)
///
/// ``` QStorageInfo* self ```
char* q_storageinfo_device(void* self) {
    libqt_string _str = QStorageInfo_Device((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
///
/// ``` QStorageInfo* self ```
char* q_storageinfo_subvolume(void* self) {
    libqt_string _str = QStorageInfo_Subvolume((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
///
/// ``` QStorageInfo* self ```
char* q_storageinfo_file_system_type(void* self) {
    libqt_string _str = QStorageInfo_FileSystemType((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#name)
///
/// ``` QStorageInfo* self ```
const char* q_storageinfo_name(void* self) {
    libqt_string _str = QStorageInfo_Name((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
///
/// ``` QStorageInfo* self ```
const char* q_storageinfo_display_name(void* self) {
    libqt_string _str = QStorageInfo_DisplayName((QStorageInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
///
/// ``` QStorageInfo* self ```
long long q_storageinfo_bytes_total(void* self) {
    return QStorageInfo_BytesTotal((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
///
/// ``` QStorageInfo* self ```
long long q_storageinfo_bytes_free(void* self) {
    return QStorageInfo_BytesFree((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
///
/// ``` QStorageInfo* self ```
long long q_storageinfo_bytes_available(void* self) {
    return QStorageInfo_BytesAvailable((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
///
/// ``` QStorageInfo* self ```
int32_t q_storageinfo_block_size(void* self) {
    return QStorageInfo_BlockSize((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_root(void* self) {
    return QStorageInfo_IsRoot((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_read_only(void* self) {
    return QStorageInfo_IsReadOnly((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_ready(void* self) {
    return QStorageInfo_IsReady((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_valid(void* self) {
    return QStorageInfo_IsValid((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
///
/// ``` QStorageInfo* self ```
void q_storageinfo_refresh(void* self) {
    QStorageInfo_Refresh((QStorageInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
///
///
libqt_list /* of QStorageInfo* */ q_storageinfo_mounted_volumes() {
    libqt_list _arr = QStorageInfo_MountedVolumes();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#root)
///
///
QStorageInfo* q_storageinfo_root() {
    return QStorageInfo_Root();
}

/// Delete this object from C++ memory.
///
/// ``` QStorageInfo* self ```
void q_storageinfo_delete(void* self) {
    QStorageInfo_Delete((QStorageInfo*)(self));
}