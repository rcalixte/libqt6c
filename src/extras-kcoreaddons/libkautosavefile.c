#include "../libqcoreevent.hpp"
#include "../libqfile.hpp"
#include "../libqfiledevice.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libkautosavefile.hpp"
#include "libkautosavefile.h"

KAutoSaveFile* k_autosavefile_new(void* filename) {
    return KAutoSaveFile_new((QUrl*)filename);
}

KAutoSaveFile* k_autosavefile_new2() {
    return KAutoSaveFile_new2();
}

KAutoSaveFile* k_autosavefile_new3(void* filename, void* parent) {
    return KAutoSaveFile_new3((QUrl*)filename, (QObject*)parent);
}

KAutoSaveFile* k_autosavefile_new4(void* parent) {
    return KAutoSaveFile_new4((QObject*)parent);
}

const QMetaObject* k_autosavefile_meta_object(void* self) {
    return KAutoSaveFile_MetaObject((KAutoSaveFile*)self);
}

void* k_autosavefile_metacast(void* self, const char* param1) {
    return KAutoSaveFile_Metacast((KAutoSaveFile*)self, param1);
}

int32_t k_autosavefile_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAutoSaveFile_Metacall((KAutoSaveFile*)self, param1, param2, param3);
}

void k_autosavefile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KAutoSaveFile_OnMetacall((KAutoSaveFile*)self, (intptr_t)callback);
}

int32_t k_autosavefile_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAutoSaveFile_QBaseMetacall((KAutoSaveFile*)self, param1, param2, param3);
}

const char* k_autosavefile_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_autosavefile_managed_file(void* self) {
    return KAutoSaveFile_ManagedFile((KAutoSaveFile*)self);
}

void k_autosavefile_set_managed_file(void* self, void* filename) {
    KAutoSaveFile_SetManagedFile((KAutoSaveFile*)self, (QUrl*)filename);
}

void k_autosavefile_release_lock(void* self) {
    KAutoSaveFile_ReleaseLock((KAutoSaveFile*)self);
}

void k_autosavefile_on_release_lock(void* self, void (*callback)()) {
    KAutoSaveFile_OnReleaseLock((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_qbase_release_lock(void* self) {
    KAutoSaveFile_QBaseReleaseLock((KAutoSaveFile*)self);
}

bool k_autosavefile_open(void* self, int32_t openmode) {
    return KAutoSaveFile_Open((KAutoSaveFile*)self, openmode);
}

void k_autosavefile_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KAutoSaveFile_OnOpen((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_qbase_open(void* self, int32_t openmode) {
    return KAutoSaveFile_QBaseOpen((KAutoSaveFile*)self, openmode);
}

libqt_list /* of KAutoSaveFile* */ k_autosavefile_stale_files(void* url) {
    libqt_list _arr = KAutoSaveFile_StaleFiles((QUrl*)url);
    return _arr;
}

libqt_list /* of KAutoSaveFile* */ k_autosavefile_all_stale_files() {
    libqt_list _arr = KAutoSaveFile_AllStaleFiles();
    return _arr;
}

const char* k_autosavefile_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_autosavefile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KAutoSaveFile* */ k_autosavefile_stale_files2(void* url, const char* applicationName) {
    libqt_list _arr = KAutoSaveFile_StaleFiles2((QUrl*)url, qstring(applicationName));
    return _arr;
}

libqt_list /* of KAutoSaveFile* */ k_autosavefile_all_stale_files1(const char* applicationName) {
    libqt_list _arr = KAutoSaveFile_AllStaleFiles1(qstring(applicationName));
    return _arr;
}

void k_autosavefile_set_file_name(void* self, const char* name) {
    QFile_SetFileName((QFile*)self, qstring(name));
}

char* k_autosavefile_encode_name(const char* fileName) {
    libqt_string _str = QFile_EncodeName(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_autosavefile_decode_name(const char* localFileName) {
    libqt_string _str = QFile_DecodeName(qstring(localFileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_autosavefile_decode_name2(const char* localFileName) {
    libqt_string _str = QFile_DecodeName2(localFileName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_autosavefile_exists(void* self) {
    return QFile_Exists((QFile*)self);
}

bool k_autosavefile_exists2(const char* fileName) {
    return QFile_Exists2(qstring(fileName));
}

const char* k_autosavefile_sym_link_target(void* self) {
    libqt_string _str = QFile_SymLinkTarget((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_autosavefile_sym_link_target2(const char* fileName) {
    libqt_string _str = QFile_SymLinkTarget2(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_autosavefile_remove(void* self) {
    return QFile_Remove((QFile*)self);
}

bool k_autosavefile_remove2(const char* fileName) {
    return QFile_Remove2(qstring(fileName));
}

bool k_autosavefile_move_to_trash(void* self) {
    return QFile_MoveToTrash((QFile*)self);
}

bool k_autosavefile_move_to_trash2(const char* fileName) {
    return QFile_MoveToTrash2(qstring(fileName));
}

bool k_autosavefile_rename(void* self, const char* newName) {
    return QFile_Rename((QFile*)self, qstring(newName));
}

bool k_autosavefile_rename2(const char* oldName, const char* newName) {
    return QFile_Rename2(qstring(oldName), qstring(newName));
}

bool k_autosavefile_link(void* self, const char* newName) {
    return QFile_Link((QFile*)self, qstring(newName));
}

bool k_autosavefile_link2(const char* fileName, const char* newName) {
    return QFile_Link2(qstring(fileName), qstring(newName));
}

bool k_autosavefile_copy(void* self, const char* newName) {
    return QFile_Copy((QFile*)self, qstring(newName));
}

bool k_autosavefile_copy2(const char* fileName, const char* newName) {
    return QFile_Copy2(qstring(fileName), qstring(newName));
}

bool k_autosavefile_open2(void* self, int32_t flags, int32_t permissions) {
    return QFile_Open2((QFile*)self, flags, permissions);
}

bool k_autosavefile_open4(void* self, int fd, int32_t ioFlags) {
    return QFile_Open4((QFile*)self, fd, ioFlags);
}

bool k_autosavefile_resize2(const char* filename, long long sz) {
    return QFile_Resize2(qstring(filename), sz);
}

int32_t k_autosavefile_permissions2(const char* filename) {
    return QFile_Permissions2(qstring(filename));
}

bool k_autosavefile_set_permissions2(const char* filename, int32_t permissionSpec) {
    return QFile_SetPermissions2(qstring(filename), permissionSpec);
}

bool k_autosavefile_open33(void* self, int fd, int32_t ioFlags, int32_t handleFlags) {
    return QFile_Open33((QFile*)self, fd, ioFlags, handleFlags);
}

int32_t k_autosavefile_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

void k_autosavefile_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

int32_t k_autosavefile_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

bool k_autosavefile_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

unsigned char* k_autosavefile_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

bool k_autosavefile_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

QDateTime* k_autosavefile_file_time(void* self, int32_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

bool k_autosavefile_set_file_time(void* self, void* newDate, int32_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

unsigned char* k_autosavefile_map3(void* self, long long offset, long long size, int32_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

int32_t k_autosavefile_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void k_autosavefile_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool k_autosavefile_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool k_autosavefile_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool k_autosavefile_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool k_autosavefile_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t k_autosavefile_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t k_autosavefile_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t k_autosavefile_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void k_autosavefile_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t k_autosavefile_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void k_autosavefile_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long k_autosavefile_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* k_autosavefile_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_autosavefile_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_autosavefile_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* k_autosavefile_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_autosavefile_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void k_autosavefile_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void k_autosavefile_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool k_autosavefile_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long k_autosavefile_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long k_autosavefile_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long k_autosavefile_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long k_autosavefile_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* k_autosavefile_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_autosavefile_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void k_autosavefile_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool k_autosavefile_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool k_autosavefile_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* k_autosavefile_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_autosavefile_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void k_autosavefile_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void k_autosavefile_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void k_autosavefile_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void k_autosavefile_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void k_autosavefile_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void k_autosavefile_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void k_autosavefile_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void k_autosavefile_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void k_autosavefile_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void k_autosavefile_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void k_autosavefile_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* k_autosavefile_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_autosavefile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_autosavefile_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_autosavefile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_autosavefile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_autosavefile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_autosavefile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_autosavefile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_autosavefile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_autosavefile_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_autosavefile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_autosavefile_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_autosavefile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_autosavefile_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_autosavefile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_autosavefile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_autosavefile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_autosavefile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_autosavefile_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_autosavefile_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_autosavefile_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_autosavefile_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_autosavefile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_autosavefile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_autosavefile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_autosavefile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_autosavefile_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_autosavefile_dynamic_property_names\n");
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

QBindingStorage* k_autosavefile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_autosavefile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_autosavefile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_autosavefile_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_autosavefile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_autosavefile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_autosavefile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_autosavefile_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_autosavefile_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_autosavefile_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_autosavefile_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_autosavefile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_autosavefile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_autosavefile_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const char* k_autosavefile_file_name(void* self) {
    libqt_string _str = KAutoSaveFile_FileName((KAutoSaveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_autosavefile_qbase_file_name(void* self) {
    libqt_string _str = KAutoSaveFile_QBaseFileName((KAutoSaveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_autosavefile_on_file_name(void* self, const char* (*callback)()) {
    KAutoSaveFile_OnFileName((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_size(void* self) {
    return KAutoSaveFile_Size((KAutoSaveFile*)self);
}

long long k_autosavefile_qbase_size(void* self) {
    return KAutoSaveFile_QBaseSize((KAutoSaveFile*)self);
}

void k_autosavefile_on_size(void* self, long long (*callback)()) {
    KAutoSaveFile_OnSize((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_resize(void* self, long long sz) {
    return KAutoSaveFile_Resize((KAutoSaveFile*)self, sz);
}

bool k_autosavefile_qbase_resize(void* self, long long sz) {
    return KAutoSaveFile_QBaseResize((KAutoSaveFile*)self, sz);
}

void k_autosavefile_on_resize(void* self, bool (*callback)(void*, long long)) {
    KAutoSaveFile_OnResize((KAutoSaveFile*)self, (intptr_t)callback);
}

int32_t k_autosavefile_permissions(void* self) {
    return KAutoSaveFile_Permissions((KAutoSaveFile*)self);
}

int32_t k_autosavefile_qbase_permissions(void* self) {
    return KAutoSaveFile_QBasePermissions((KAutoSaveFile*)self);
}

void k_autosavefile_on_permissions(void* self, int32_t (*callback)()) {
    KAutoSaveFile_OnPermissions((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_set_permissions(void* self, int32_t permissionSpec) {
    return KAutoSaveFile_SetPermissions((KAutoSaveFile*)self, permissionSpec);
}

bool k_autosavefile_qbase_set_permissions(void* self, int32_t permissionSpec) {
    return KAutoSaveFile_QBaseSetPermissions((KAutoSaveFile*)self, permissionSpec);
}

void k_autosavefile_on_set_permissions(void* self, bool (*callback)(void*, int32_t)) {
    KAutoSaveFile_OnSetPermissions((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_close(void* self) {
    KAutoSaveFile_Close((KAutoSaveFile*)self);
}

void k_autosavefile_qbase_close(void* self) {
    KAutoSaveFile_QBaseClose((KAutoSaveFile*)self);
}

void k_autosavefile_on_close(void* self, void (*callback)()) {
    KAutoSaveFile_OnClose((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_is_sequential(void* self) {
    return KAutoSaveFile_IsSequential((KAutoSaveFile*)self);
}

bool k_autosavefile_qbase_is_sequential(void* self) {
    return KAutoSaveFile_QBaseIsSequential((KAutoSaveFile*)self);
}

void k_autosavefile_on_is_sequential(void* self, bool (*callback)()) {
    KAutoSaveFile_OnIsSequential((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_pos(void* self) {
    return KAutoSaveFile_Pos((KAutoSaveFile*)self);
}

long long k_autosavefile_qbase_pos(void* self) {
    return KAutoSaveFile_QBasePos((KAutoSaveFile*)self);
}

void k_autosavefile_on_pos(void* self, long long (*callback)()) {
    KAutoSaveFile_OnPos((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_seek(void* self, long long offset) {
    return KAutoSaveFile_Seek((KAutoSaveFile*)self, offset);
}

bool k_autosavefile_qbase_seek(void* self, long long offset) {
    return KAutoSaveFile_QBaseSeek((KAutoSaveFile*)self, offset);
}

void k_autosavefile_on_seek(void* self, bool (*callback)(void*, long long)) {
    KAutoSaveFile_OnSeek((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_at_end(void* self) {
    return KAutoSaveFile_AtEnd((KAutoSaveFile*)self);
}

bool k_autosavefile_qbase_at_end(void* self) {
    return KAutoSaveFile_QBaseAtEnd((KAutoSaveFile*)self);
}

void k_autosavefile_on_at_end(void* self, bool (*callback)()) {
    KAutoSaveFile_OnAtEnd((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_read_data(void* self, char* data, long long maxlen) {
    return KAutoSaveFile_ReadData((KAutoSaveFile*)self, data, maxlen);
}

long long k_autosavefile_qbase_read_data(void* self, char* data, long long maxlen) {
    return KAutoSaveFile_QBaseReadData((KAutoSaveFile*)self, data, maxlen);
}

void k_autosavefile_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    KAutoSaveFile_OnReadData((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_write_data(void* self, const char* data, long long lenVal) {
    return KAutoSaveFile_WriteData((KAutoSaveFile*)self, data, lenVal);
}

long long k_autosavefile_qbase_write_data(void* self, const char* data, long long lenVal) {
    return KAutoSaveFile_QBaseWriteData((KAutoSaveFile*)self, data, lenVal);
}

void k_autosavefile_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    KAutoSaveFile_OnWriteData((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_read_line_data(void* self, char* data, long long maxlen) {
    return KAutoSaveFile_ReadLineData((KAutoSaveFile*)self, data, maxlen);
}

long long k_autosavefile_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return KAutoSaveFile_QBaseReadLineData((KAutoSaveFile*)self, data, maxlen);
}

void k_autosavefile_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    KAutoSaveFile_OnReadLineData((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_reset(void* self) {
    return KAutoSaveFile_Reset((KAutoSaveFile*)self);
}

bool k_autosavefile_qbase_reset(void* self) {
    return KAutoSaveFile_QBaseReset((KAutoSaveFile*)self);
}

void k_autosavefile_on_reset(void* self, bool (*callback)()) {
    KAutoSaveFile_OnReset((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_bytes_available(void* self) {
    return KAutoSaveFile_BytesAvailable((KAutoSaveFile*)self);
}

long long k_autosavefile_qbase_bytes_available(void* self) {
    return KAutoSaveFile_QBaseBytesAvailable((KAutoSaveFile*)self);
}

void k_autosavefile_on_bytes_available(void* self, long long (*callback)()) {
    KAutoSaveFile_OnBytesAvailable((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_bytes_to_write(void* self) {
    return KAutoSaveFile_BytesToWrite((KAutoSaveFile*)self);
}

long long k_autosavefile_qbase_bytes_to_write(void* self) {
    return KAutoSaveFile_QBaseBytesToWrite((KAutoSaveFile*)self);
}

void k_autosavefile_on_bytes_to_write(void* self, long long (*callback)()) {
    KAutoSaveFile_OnBytesToWrite((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_can_read_line(void* self) {
    return KAutoSaveFile_CanReadLine((KAutoSaveFile*)self);
}

bool k_autosavefile_qbase_can_read_line(void* self) {
    return KAutoSaveFile_QBaseCanReadLine((KAutoSaveFile*)self);
}

void k_autosavefile_on_can_read_line(void* self, bool (*callback)()) {
    KAutoSaveFile_OnCanReadLine((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_wait_for_ready_read(void* self, int msecs) {
    return KAutoSaveFile_WaitForReadyRead((KAutoSaveFile*)self, msecs);
}

bool k_autosavefile_qbase_wait_for_ready_read(void* self, int msecs) {
    return KAutoSaveFile_QBaseWaitForReadyRead((KAutoSaveFile*)self, msecs);
}

void k_autosavefile_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    KAutoSaveFile_OnWaitForReadyRead((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_wait_for_bytes_written(void* self, int msecs) {
    return KAutoSaveFile_WaitForBytesWritten((KAutoSaveFile*)self, msecs);
}

bool k_autosavefile_qbase_wait_for_bytes_written(void* self, int msecs) {
    return KAutoSaveFile_QBaseWaitForBytesWritten((KAutoSaveFile*)self, msecs);
}

void k_autosavefile_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    KAutoSaveFile_OnWaitForBytesWritten((KAutoSaveFile*)self, (intptr_t)callback);
}

long long k_autosavefile_skip_data(void* self, long long maxSize) {
    return KAutoSaveFile_SkipData((KAutoSaveFile*)self, maxSize);
}

long long k_autosavefile_qbase_skip_data(void* self, long long maxSize) {
    return KAutoSaveFile_QBaseSkipData((KAutoSaveFile*)self, maxSize);
}

void k_autosavefile_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    KAutoSaveFile_OnSkipData((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_event(void* self, void* event) {
    return KAutoSaveFile_Event((KAutoSaveFile*)self, (QEvent*)event);
}

bool k_autosavefile_qbase_event(void* self, void* event) {
    return KAutoSaveFile_QBaseEvent((KAutoSaveFile*)self, (QEvent*)event);
}

void k_autosavefile_on_event(void* self, bool (*callback)(void*, void*)) {
    KAutoSaveFile_OnEvent((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_event_filter(void* self, void* watched, void* event) {
    return KAutoSaveFile_EventFilter((KAutoSaveFile*)self, (QObject*)watched, (QEvent*)event);
}

bool k_autosavefile_qbase_event_filter(void* self, void* watched, void* event) {
    return KAutoSaveFile_QBaseEventFilter((KAutoSaveFile*)self, (QObject*)watched, (QEvent*)event);
}

void k_autosavefile_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KAutoSaveFile_OnEventFilter((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_timer_event(void* self, void* event) {
    KAutoSaveFile_TimerEvent((KAutoSaveFile*)self, (QTimerEvent*)event);
}

void k_autosavefile_qbase_timer_event(void* self, void* event) {
    KAutoSaveFile_QBaseTimerEvent((KAutoSaveFile*)self, (QTimerEvent*)event);
}

void k_autosavefile_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KAutoSaveFile_OnTimerEvent((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_child_event(void* self, void* event) {
    KAutoSaveFile_ChildEvent((KAutoSaveFile*)self, (QChildEvent*)event);
}

void k_autosavefile_qbase_child_event(void* self, void* event) {
    KAutoSaveFile_QBaseChildEvent((KAutoSaveFile*)self, (QChildEvent*)event);
}

void k_autosavefile_on_child_event(void* self, void (*callback)(void*, void*)) {
    KAutoSaveFile_OnChildEvent((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_custom_event(void* self, void* event) {
    KAutoSaveFile_CustomEvent((KAutoSaveFile*)self, (QEvent*)event);
}

void k_autosavefile_qbase_custom_event(void* self, void* event) {
    KAutoSaveFile_QBaseCustomEvent((KAutoSaveFile*)self, (QEvent*)event);
}

void k_autosavefile_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KAutoSaveFile_OnCustomEvent((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_connect_notify(void* self, void* signal) {
    KAutoSaveFile_ConnectNotify((KAutoSaveFile*)self, (QMetaMethod*)signal);
}

void k_autosavefile_qbase_connect_notify(void* self, void* signal) {
    KAutoSaveFile_QBaseConnectNotify((KAutoSaveFile*)self, (QMetaMethod*)signal);
}

void k_autosavefile_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KAutoSaveFile_OnConnectNotify((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_disconnect_notify(void* self, void* signal) {
    KAutoSaveFile_DisconnectNotify((KAutoSaveFile*)self, (QMetaMethod*)signal);
}

void k_autosavefile_qbase_disconnect_notify(void* self, void* signal) {
    KAutoSaveFile_QBaseDisconnectNotify((KAutoSaveFile*)self, (QMetaMethod*)signal);
}

void k_autosavefile_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KAutoSaveFile_OnDisconnectNotify((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_set_open_mode(void* self, int32_t openMode) {
    KAutoSaveFile_SetOpenMode((KAutoSaveFile*)self, openMode);
}

void k_autosavefile_qbase_set_open_mode(void* self, int32_t openMode) {
    KAutoSaveFile_QBaseSetOpenMode((KAutoSaveFile*)self, openMode);
}

void k_autosavefile_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    KAutoSaveFile_OnSetOpenMode((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_set_error_string(void* self, const char* errorString) {
    KAutoSaveFile_SetErrorString((KAutoSaveFile*)self, qstring(errorString));
}

void k_autosavefile_qbase_set_error_string(void* self, const char* errorString) {
    KAutoSaveFile_QBaseSetErrorString((KAutoSaveFile*)self, qstring(errorString));
}

void k_autosavefile_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KAutoSaveFile_OnSetErrorString((KAutoSaveFile*)self, (intptr_t)callback);
}

QObject* k_autosavefile_sender(void* self) {
    return KAutoSaveFile_Sender((KAutoSaveFile*)self);
}

QObject* k_autosavefile_qbase_sender(void* self) {
    return KAutoSaveFile_QBaseSender((KAutoSaveFile*)self);
}

void k_autosavefile_on_sender(void* self, QObject* (*callback)()) {
    KAutoSaveFile_OnSender((KAutoSaveFile*)self, (intptr_t)callback);
}

int32_t k_autosavefile_sender_signal_index(void* self) {
    return KAutoSaveFile_SenderSignalIndex((KAutoSaveFile*)self);
}

int32_t k_autosavefile_qbase_sender_signal_index(void* self) {
    return KAutoSaveFile_QBaseSenderSignalIndex((KAutoSaveFile*)self);
}

void k_autosavefile_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KAutoSaveFile_OnSenderSignalIndex((KAutoSaveFile*)self, (intptr_t)callback);
}

int32_t k_autosavefile_receivers(void* self, const char* signal) {
    return KAutoSaveFile_Receivers((KAutoSaveFile*)self, signal);
}

int32_t k_autosavefile_qbase_receivers(void* self, const char* signal) {
    return KAutoSaveFile_QBaseReceivers((KAutoSaveFile*)self, signal);
}

void k_autosavefile_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KAutoSaveFile_OnReceivers((KAutoSaveFile*)self, (intptr_t)callback);
}

bool k_autosavefile_is_signal_connected(void* self, void* signal) {
    return KAutoSaveFile_IsSignalConnected((KAutoSaveFile*)self, (QMetaMethod*)signal);
}

bool k_autosavefile_qbase_is_signal_connected(void* self, void* signal) {
    return KAutoSaveFile_QBaseIsSignalConnected((KAutoSaveFile*)self, (QMetaMethod*)signal);
}

void k_autosavefile_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KAutoSaveFile_OnIsSignalConnected((KAutoSaveFile*)self, (intptr_t)callback);
}

void k_autosavefile_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_autosavefile_delete(void* self) {
    KAutoSaveFile_Delete((KAutoSaveFile*)(self));
}
