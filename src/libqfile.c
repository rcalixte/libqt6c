#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatetime.hpp"
#include "libqfiledevice.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqfile.hpp"
#include "libqfile.h"

/// https://doc.qt.io/qt-6/qfile.html

/// q_file_new constructs a new QFile object.
///
///
QFile* q_file_new() {
    return QFile_new();
}

/// q_file_new2 constructs a new QFile object.
///
/// ``` const char* name ```
QFile* q_file_new2(const char* name) {
    return QFile_new2(qstring(name));
}

/// q_file_new3 constructs a new QFile object.
///
/// ``` QObject* parent ```
QFile* q_file_new3(void* parent) {
    return QFile_new3((QObject*)parent);
}

/// q_file_new4 constructs a new QFile object.
///
/// ``` const char* name, QObject* parent ```
QFile* q_file_new4(const char* name, void* parent) {
    return QFile_new4(qstring(name), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFile* self ```
QMetaObject* q_file_meta_object(void* self) {
    return QFile_MetaObject((QFile*)self);
}

/// ``` QFile* self, const char* param1 ```
void* q_file_metacast(void* self, const char* param1) {
    return QFile_Metacast((QFile*)self, param1);
}

/// ``` QFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_file_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFile_Metacall((QFile*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, int32_t (*slot)(QFile*, enum QMetaObject__Call, int, void*) ```
void q_file_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFile_OnMetacall((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_file_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFile_QBaseMetacall((QFile*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_file_tr(const char* s) {
    libqt_string _str = QFile_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// ``` QFile* self ```
const char* q_file_file_name(void* self) {
    libqt_string _str = QFile_FileName((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, const char* (*slot)() ```
void q_file_on_file_name(void* self, const char* (*slot)()) {
    QFile_OnFileName((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self ```
const char* q_file_qbase_file_name(void* self) {
    libqt_string _str = QFile_QBaseFileName((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
///
/// ``` QFile* self, const char* name ```
void q_file_set_file_name(void* self, const char* name) {
    QFile_SetFileName((QFile*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#encodeName)
///
/// ``` const char* fileName ```
char* q_file_encode_name(const char* fileName) {
    libqt_string _str = QFile_EncodeName(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// ``` const char* localFileName ```
const char* q_file_decode_name(const char* localFileName) {
    libqt_string _str = QFile_DecodeName(qstring(localFileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// ``` const char* localFileName ```
const char* q_file_decode_name_with_local_file_name(const char* localFileName) {
    libqt_string _str = QFile_DecodeNameWithLocalFileName(localFileName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// ``` QFile* self ```
bool q_file_exists(void* self) {
    return QFile_Exists((QFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// ``` const char* fileName ```
bool q_file_exists_with_file_name(const char* fileName) {
    return QFile_ExistsWithFileName(qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// ``` QFile* self ```
const char* q_file_sym_link_target(void* self) {
    libqt_string _str = QFile_SymLinkTarget((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// ``` const char* fileName ```
const char* q_file_sym_link_target_with_file_name(const char* fileName) {
    libqt_string _str = QFile_SymLinkTargetWithFileName(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// ``` QFile* self ```
bool q_file_remove(void* self) {
    return QFile_Remove((QFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// ``` const char* fileName ```
bool q_file_remove_with_file_name(const char* fileName) {
    return QFile_RemoveWithFileName(qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// ``` QFile* self ```
bool q_file_move_to_trash(void* self) {
    return QFile_MoveToTrash((QFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// ``` const char* fileName ```
bool q_file_move_to_trash_with_file_name(const char* fileName) {
    return QFile_MoveToTrashWithFileName(qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// ``` QFile* self, const char* newName ```
bool q_file_rename(void* self, const char* newName) {
    return QFile_Rename((QFile*)self, qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// ``` const char* oldName, const char* newName ```
bool q_file_rename2(const char* oldName, const char* newName) {
    return QFile_Rename2(qstring(oldName), qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// ``` QFile* self, const char* newName ```
bool q_file_link(void* self, const char* newName) {
    return QFile_Link((QFile*)self, qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// ``` const char* fileName, const char* newName ```
bool q_file_link2(const char* fileName, const char* newName) {
    return QFile_Link2(qstring(fileName), qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// ``` QFile* self, const char* newName ```
bool q_file_copy(void* self, const char* newName) {
    return QFile_Copy((QFile*)self, qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// ``` const char* fileName, const char* newName ```
bool q_file_copy2(const char* fileName, const char* newName) {
    return QFile_Copy2(qstring(fileName), qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int flags ```
bool q_file_open(void* self, int64_t flags) {
    return QFile_Open((QFile*)self, flags);
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QFile_OnOpen((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self, int flags ```
bool q_file_qbase_open(void* self, int64_t flags) {
    return QFile_QBaseOpen((QFile*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int flags, int permissions ```
bool q_file_open2(void* self, int64_t flags, int64_t permissions) {
    return QFile_Open2((QFile*)self, flags, permissions);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int fd, int ioFlags ```
bool q_file_open4(void* self, int fd, int64_t ioFlags) {
    return QFile_Open4((QFile*)self, fd, ioFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// ``` QFile* self ```
long long q_file_size(void* self) {
    return QFile_Size((QFile*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_size(void* self, long long (*slot)()) {
    QFile_OnSize((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self ```
long long q_file_qbase_size(void* self) {
    return QFile_QBaseSize((QFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// ``` QFile* self, long long sz ```
bool q_file_resize(void* self, long long sz) {
    return QFile_Resize((QFile*)self, sz);
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, bool (*slot)(QFile*, long long) ```
void q_file_on_resize(void* self, bool (*slot)(void*, long long)) {
    QFile_OnResize((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self, long long sz ```
bool q_file_qbase_resize(void* self, long long sz) {
    return QFile_QBaseResize((QFile*)self, sz);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// ``` const char* filename, long long sz ```
bool q_file_resize2(const char* filename, long long sz) {
    return QFile_Resize2(qstring(filename), sz);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// ``` QFile* self ```
int64_t q_file_permissions(void* self) {
    return QFile_Permissions((QFile*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, int64_t (*slot)() ```
void q_file_on_permissions(void* self, int64_t (*slot)()) {
    QFile_OnPermissions((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self ```
int64_t q_file_qbase_permissions(void* self) {
    return QFile_QBasePermissions((QFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// ``` const char* filename ```
int64_t q_file_permissions_with_filename(const char* filename) {
    return QFile_PermissionsWithFilename(qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// ``` QFile* self, int permissionSpec ```
bool q_file_set_permissions(void* self, int64_t permissionSpec) {
    return QFile_SetPermissions((QFile*)self, permissionSpec);
}

/// Allows for overriding the related default method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_set_permissions(void* self, bool (*slot)(void*, int64_t)) {
    QFile_OnSetPermissions((QFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFile* self, int permissionSpec ```
bool q_file_qbase_set_permissions(void* self, int64_t permissionSpec) {
    return QFile_QBaseSetPermissions((QFile*)self, permissionSpec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// ``` const char* filename, int permissionSpec ```
bool q_file_set_permissions2(const char* filename, int64_t permissionSpec) {
    return QFile_SetPermissions2(qstring(filename), permissionSpec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_file_tr2(const char* s, const char* c) {
    libqt_string _str = QFile_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_file_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFile_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int fd, int ioFlags, int handleFlags ```
bool q_file_open33(void* self, int fd, int64_t ioFlags, int64_t handleFlags) {
    return QFile_Open33((QFile*)self, fd, ioFlags, handleFlags);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QFile* self ```
int64_t q_file_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QFile* self ```
void q_file_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QFile* self ```
int32_t q_file_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QFile* self ```
bool q_file_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFile* self, long long offset, long long size ```
unsigned char* q_file_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QFile* self, unsigned char* address ```
bool q_file_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QFile* self, enum QFileDevice__FileTime time ```
QDateTime* q_file_file_time(void* self, int64_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QFile* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_file_set_file_time(void* self, void* newDate, int64_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFile* self, long long offset, long long size, int flags ```
unsigned char* q_file_map3(void* self, long long offset, long long size, int64_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QFile* self ```
int64_t q_file_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QFile* self, bool enabled ```
void q_file_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QFile* self ```
bool q_file_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QFile* self ```
bool q_file_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QFile* self ```
bool q_file_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QFile* self ```
bool q_file_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QFile* self ```
int32_t q_file_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QFile* self ```
int32_t q_file_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QFile* self ```
int32_t q_file_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QFile* self, int channel ```
void q_file_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QFile* self ```
int32_t q_file_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QFile* self, int channel ```
void q_file_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFile* self, long long maxlen ```
char* q_file_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QFile* self ```
char* q_file_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFile* self ```
char* q_file_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QFile* self ```
void q_file_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QFile* self ```
void q_file_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QFile* self ```
void q_file_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QFile* self ```
bool q_file_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFile* self, const char* data, long long lenVal ```
long long q_file_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFile* self, const char* data ```
long long q_file_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFile* self, const char* data ```
long long q_file_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFile* self, long long maxlen ```
char* q_file_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QFile* self, long long maxSize ```
long long q_file_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QFile* self, char c ```
void q_file_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QFile* self, char c ```
bool q_file_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QFile* self, char* c ```
bool q_file_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QFile* self ```
const char* q_file_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QFile* self ```
void q_file_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*) ```
void q_file_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QFile* self, int channel ```
void q_file_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*, int) ```
void q_file_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QFile* self, long long bytes ```
void q_file_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*, long long) ```
void q_file_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QFile* self, int channel, long long bytes ```
void q_file_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*, int, long long) ```
void q_file_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QFile* self ```
void q_file_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*) ```
void q_file_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QFile* self ```
void q_file_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*) ```
void q_file_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFile* self, long long maxlen ```
char* q_file_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFile* self ```
const char* q_file_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFile* self, const char* name ```
void q_file_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFile* self ```
bool q_file_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFile* self ```
bool q_file_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFile* self ```
bool q_file_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFile* self ```
bool q_file_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFile* self, bool b ```
bool q_file_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFile* self ```
QThread* q_file_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFile* self, QThread* thread ```
void q_file_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFile* self, int interval ```
int32_t q_file_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFile* self, int id ```
void q_file_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFile* self ```
libqt_list /* of QObject* */ q_file_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFile* self, QObject* parent ```
void q_file_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFile* self, QObject* filterObj ```
void q_file_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFile* self, QObject* obj ```
void q_file_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_file_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_file_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_file_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_file_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFile* self ```
void q_file_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFile* self ```
void q_file_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFile* self, const char* name, QVariant* value ```
bool q_file_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFile* self, const char* name ```
QVariant* q_file_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFile* self ```
const char** q_file_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFile* self ```
QBindingStorage* q_file_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFile* self ```
QBindingStorage* q_file_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFile* self ```
void q_file_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFile* self, void (*slot)(QObject*) ```
void q_file_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFile* self ```
QObject* q_file_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFile* self, const char* classname ```
bool q_file_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFile* self ```
void q_file_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_file_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_file_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_file_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFile* self, QObject* param1 ```
void q_file_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFile* self, void (*slot)(QObject*, QObject*) ```
void q_file_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
void q_file_close(void* self) {
    QFile_Close((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
void q_file_qbase_close(void* self) {
    QFile_QBaseClose((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)() ```
void q_file_on_close(void* self, void (*slot)()) {
    QFile_OnClose((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_is_sequential(void* self) {
    return QFile_IsSequential((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_is_sequential(void* self) {
    return QFile_QBaseIsSequential((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_is_sequential(void* self, bool (*slot)()) {
    QFile_OnIsSequential((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
long long q_file_pos(void* self) {
    return QFile_Pos((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
long long q_file_qbase_pos(void* self) {
    return QFile_QBasePos((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_pos(void* self, long long (*slot)()) {
    QFile_OnPos((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, long long offset ```
bool q_file_seek(void* self, long long offset) {
    return QFile_Seek((QFile*)self, offset);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, long long offset ```
bool q_file_qbase_seek(void* self, long long offset) {
    return QFile_QBaseSeek((QFile*)self, offset);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, long long) ```
void q_file_on_seek(void* self, bool (*slot)(void*, long long)) {
    QFile_OnSeek((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_at_end(void* self) {
    return QFile_AtEnd((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_at_end(void* self) {
    return QFile_QBaseAtEnd((QFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_at_end(void* self, bool (*slot)()) {
    QFile_OnAtEnd((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read_data(void* self, char* data, long long maxlen) {
    return QFile_ReadData((QFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_qbase_read_data(void* self, char* data, long long maxlen) {
    return QFile_QBaseReadData((QFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, char*, long long) ```
void q_file_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QFile_OnReadData((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, const char* data, long long lenVal ```
long long q_file_write_data(void* self, const char* data, long long lenVal) {
    return QFile_WriteData((QFile*)self, data, lenVal);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, const char* data, long long lenVal ```
long long q_file_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QFile_QBaseWriteData((QFile*)self, data, lenVal);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, const char*, long long) ```
void q_file_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QFile_OnWriteData((QFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read_line_data(void* self, char* data, long long maxlen) {
    return QFile_ReadLineData((QFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QFile_QBaseReadLineData((QFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, char*, long long) ```
void q_file_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QFile_OnReadLineData((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_reset(void* self) {
    return QFile_Reset((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_reset(void* self) {
    return QFile_QBaseReset((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_reset(void* self, bool (*slot)()) {
    QFile_OnReset((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
long long q_file_bytes_available(void* self) {
    return QFile_BytesAvailable((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
long long q_file_qbase_bytes_available(void* self) {
    return QFile_QBaseBytesAvailable((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_bytes_available(void* self, long long (*slot)()) {
    QFile_OnBytesAvailable((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
long long q_file_bytes_to_write(void* self) {
    return QFile_BytesToWrite((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
long long q_file_qbase_bytes_to_write(void* self) {
    return QFile_QBaseBytesToWrite((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_bytes_to_write(void* self, long long (*slot)()) {
    QFile_OnBytesToWrite((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_can_read_line(void* self) {
    return QFile_CanReadLine((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_can_read_line(void* self) {
    return QFile_QBaseCanReadLine((QFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_can_read_line(void* self, bool (*slot)()) {
    QFile_OnCanReadLine((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_wait_for_ready_read(void* self, int msecs) {
    return QFile_WaitForReadyRead((QFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_qbase_wait_for_ready_read(void* self, int msecs) {
    return QFile_QBaseWaitForReadyRead((QFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QFile_OnWaitForReadyRead((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_wait_for_bytes_written(void* self, int msecs) {
    return QFile_WaitForBytesWritten((QFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QFile_QBaseWaitForBytesWritten((QFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QFile_OnWaitForBytesWritten((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, long long maxSize ```
long long q_file_skip_data(void* self, long long maxSize) {
    return QFile_SkipData((QFile*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, long long maxSize ```
long long q_file_qbase_skip_data(void* self, long long maxSize) {
    return QFile_QBaseSkipData((QFile*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, long long) ```
void q_file_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QFile_OnSkipData((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
bool q_file_event(void* self, void* event) {
    return QFile_Event((QFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
bool q_file_qbase_event(void* self, void* event) {
    return QFile_QBaseEvent((QFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, QEvent*) ```
void q_file_on_event(void* self, bool (*slot)(void*, void*)) {
    QFile_OnEvent((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QObject* watched, QEvent* event ```
bool q_file_event_filter(void* self, void* watched, void* event) {
    return QFile_EventFilter((QFile*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QObject* watched, QEvent* event ```
bool q_file_qbase_event_filter(void* self, void* watched, void* event) {
    return QFile_QBaseEventFilter((QFile*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, QObject*, QEvent*) ```
void q_file_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFile_OnEventFilter((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QTimerEvent* event ```
void q_file_timer_event(void* self, void* event) {
    QFile_TimerEvent((QFile*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QTimerEvent* event ```
void q_file_qbase_timer_event(void* self, void* event) {
    QFile_QBaseTimerEvent((QFile*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QTimerEvent*) ```
void q_file_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFile_OnTimerEvent((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QChildEvent* event ```
void q_file_child_event(void* self, void* event) {
    QFile_ChildEvent((QFile*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QChildEvent* event ```
void q_file_qbase_child_event(void* self, void* event) {
    QFile_QBaseChildEvent((QFile*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QChildEvent*) ```
void q_file_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFile_OnChildEvent((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
void q_file_custom_event(void* self, void* event) {
    QFile_CustomEvent((QFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
void q_file_qbase_custom_event(void* self, void* event) {
    QFile_QBaseCustomEvent((QFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QEvent*) ```
void q_file_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFile_OnCustomEvent((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_connect_notify(void* self, void* signal) {
    QFile_ConnectNotify((QFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_qbase_connect_notify(void* self, void* signal) {
    QFile_QBaseConnectNotify((QFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QMetaMethod*) ```
void q_file_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFile_OnConnectNotify((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_disconnect_notify(void* self, void* signal) {
    QFile_DisconnectNotify((QFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_qbase_disconnect_notify(void* self, void* signal) {
    QFile_QBaseDisconnectNotify((QFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QMetaMethod*) ```
void q_file_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFile_OnDisconnectNotify((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, int openMode ```
void q_file_set_open_mode(void* self, int64_t openMode) {
    QFile_SetOpenMode((QFile*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, int openMode ```
void q_file_qbase_set_open_mode(void* self, int64_t openMode) {
    QFile_QBaseSetOpenMode((QFile*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, int) ```
void q_file_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QFile_OnSetOpenMode((QFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, const char* errorString ```
void q_file_set_error_string(void* self, const char* errorString) {
    QFile_SetErrorString((QFile*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, const char* errorString ```
void q_file_qbase_set_error_string(void* self, const char* errorString) {
    QFile_QBaseSetErrorString((QFile*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, const char*) ```
void q_file_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QFile_OnSetErrorString((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
QObject* q_file_sender(void* self) {
    return QFile_Sender((QFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
QObject* q_file_qbase_sender(void* self) {
    return QFile_QBaseSender((QFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, QObject* (*slot)() ```
void q_file_on_sender(void* self, QObject* (*slot)()) {
    QFile_OnSender((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
int32_t q_file_sender_signal_index(void* self) {
    return QFile_SenderSignalIndex((QFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
int32_t q_file_qbase_sender_signal_index(void* self) {
    return QFile_QBaseSenderSignalIndex((QFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, int32_t (*slot)() ```
void q_file_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFile_OnSenderSignalIndex((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, const char* signal ```
int32_t q_file_receivers(void* self, const char* signal) {
    return QFile_Receivers((QFile*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, const char* signal ```
int32_t q_file_qbase_receivers(void* self, const char* signal) {
    return QFile_QBaseReceivers((QFile*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, int32_t (*slot)(QFile*, const char*) ```
void q_file_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFile_OnReceivers((QFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
bool q_file_is_signal_connected(void* self, void* signal) {
    return QFile_IsSignalConnected((QFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
bool q_file_qbase_is_signal_connected(void* self, void* signal) {
    return QFile_QBaseIsSignalConnected((QFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, QMetaMethod*) ```
void q_file_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFile_OnIsSignalConnected((QFile*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFile* self ```
void q_file_delete(void* self) {
    QFile_Delete((QFile*)(self));
}