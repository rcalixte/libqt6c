#include "libqcoreevent.hpp"
#include "libqfiledevice.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqsavefile.hpp"
#include "libqsavefile.h"

QSaveFile* q_savefile_new(const char* name) {
    return QSaveFile_new(qstring(name));
}

QSaveFile* q_savefile_new2() {
    return QSaveFile_new2();
}

QSaveFile* q_savefile_new3(const char* name, void* parent) {
    return QSaveFile_new3(qstring(name), (QObject*)parent);
}

QSaveFile* q_savefile_new4(void* parent) {
    return QSaveFile_new4((QObject*)parent);
}

const QMetaObject* q_savefile_meta_object(void* self) {
    return QSaveFile_MetaObject((QSaveFile*)self);
}

void q_savefile_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSaveFile_OnMetaObject((QSaveFile*)self, (intptr_t)callback);
}

const QMetaObject* q_savefile_super_meta_object(void* self) {
    return QSaveFile_SuperMetaObject((QSaveFile*)self);
}

void* q_savefile_metacast(void* self, const char* param1) {
    return QSaveFile_Metacast((QSaveFile*)self, param1);
}

void q_savefile_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSaveFile_OnMetacast((QSaveFile*)self, (intptr_t)callback);
}

void* q_savefile_super_metacast(void* self, const char* param1) {
    return QSaveFile_SuperMetacast((QSaveFile*)self, param1);
}

int32_t q_savefile_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSaveFile_Metacall((QSaveFile*)self, param1, param2, param3);
}

void q_savefile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSaveFile_OnMetacall((QSaveFile*)self, (intptr_t)callback);
}

int32_t q_savefile_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSaveFile_SuperMetacall((QSaveFile*)self, param1, param2, param3);
}

const char* q_savefile_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_savefile_file_name(void* self) {
    libqt_string _str = QSaveFile_FileName((QSaveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_savefile_on_file_name(void* self, const char* (*callback)()) {
    QSaveFile_OnFileName((QSaveFile*)self, (intptr_t)callback);
}

const char* q_savefile_super_file_name(void* self) {
    libqt_string _str = QSaveFile_SuperFileName((QSaveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_savefile_set_file_name(void* self, const char* name) {
    QSaveFile_SetFileName((QSaveFile*)self, qstring(name));
}

bool q_savefile_open(void* self, int32_t flags) {
    return QSaveFile_Open((QSaveFile*)self, flags);
}

void q_savefile_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QSaveFile_OnOpen((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_super_open(void* self, int32_t flags) {
    return QSaveFile_SuperOpen((QSaveFile*)self, flags);
}

bool q_savefile_commit(void* self) {
    return QSaveFile_Commit((QSaveFile*)self);
}

void q_savefile_cancel_writing(void* self) {
    QSaveFile_CancelWriting((QSaveFile*)self);
}

void q_savefile_set_direct_write_fallback(void* self, bool enabled) {
    QSaveFile_SetDirectWriteFallback((QSaveFile*)self, enabled);
}

bool q_savefile_direct_write_fallback(void* self) {
    return QSaveFile_DirectWriteFallback((QSaveFile*)self);
}

long long q_savefile_write_data(void* self, const char* data, long long lenVal) {
    return QSaveFile_WriteData((QSaveFile*)self, data, lenVal);
}

void q_savefile_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QSaveFile_OnWriteData((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_super_write_data(void* self, const char* data, long long lenVal) {
    return QSaveFile_SuperWriteData((QSaveFile*)self, data, lenVal);
}

const char* q_savefile_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_savefile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_savefile_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

void q_savefile_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

void q_savefile_close(void* self) {
    QFileDevice_Close((QFileDevice*)self);
}

int32_t q_savefile_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

bool q_savefile_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

unsigned char* q_savefile_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

bool q_savefile_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

QDateTime* q_savefile_file_time(void* self, int32_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

bool q_savefile_set_file_time(void* self, void* newDate, int32_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

unsigned char* q_savefile_map3(void* self, long long offset, long long size, int32_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

int32_t q_savefile_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_savefile_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_savefile_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_savefile_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_savefile_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_savefile_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_savefile_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_savefile_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_savefile_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_savefile_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_savefile_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_savefile_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_savefile_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_savefile_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_savefile_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_savefile_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_savefile_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_savefile_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_savefile_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_savefile_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_savefile_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_savefile_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_savefile_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_savefile_write3(void* self, char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_savefile_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_savefile_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_savefile_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_savefile_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_savefile_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_savefile_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_savefile_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_savefile_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_savefile_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_savefile_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_savefile_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_savefile_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_savefile_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_savefile_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_savefile_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_savefile_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_savefile_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_savefile_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_savefile_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_savefile_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_savefile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_savefile_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_savefile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_savefile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_savefile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_savefile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_savefile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_savefile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_savefile_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_savefile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_savefile_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_savefile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_savefile_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_savefile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_savefile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_savefile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_savefile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_savefile_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_savefile_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_savefile_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_savefile_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_savefile_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_savefile_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_savefile_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_savefile_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_savefile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_savefile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_savefile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_savefile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_savefile_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_savefile_dynamic_property_names\n");
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

QBindingStorage* q_savefile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_savefile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_savefile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_savefile_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_savefile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_savefile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_savefile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_savefile_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_savefile_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_savefile_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_savefile_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_savefile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_savefile_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_savefile_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_savefile_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_savefile_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_savefile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_savefile_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_savefile_is_sequential(void* self) {
    return QSaveFile_IsSequential((QSaveFile*)self);
}

bool q_savefile_super_is_sequential(void* self) {
    return QSaveFile_SuperIsSequential((QSaveFile*)self);
}

void q_savefile_on_is_sequential(void* self, bool (*callback)()) {
    QSaveFile_OnIsSequential((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_pos(void* self) {
    return QSaveFile_Pos((QSaveFile*)self);
}

long long q_savefile_super_pos(void* self) {
    return QSaveFile_SuperPos((QSaveFile*)self);
}

void q_savefile_on_pos(void* self, long long (*callback)()) {
    QSaveFile_OnPos((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_seek(void* self, long long offset) {
    return QSaveFile_Seek((QSaveFile*)self, offset);
}

bool q_savefile_super_seek(void* self, long long offset) {
    return QSaveFile_SuperSeek((QSaveFile*)self, offset);
}

void q_savefile_on_seek(void* self, bool (*callback)(void*, long long)) {
    QSaveFile_OnSeek((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_at_end(void* self) {
    return QSaveFile_AtEnd((QSaveFile*)self);
}

bool q_savefile_super_at_end(void* self) {
    return QSaveFile_SuperAtEnd((QSaveFile*)self);
}

void q_savefile_on_at_end(void* self, bool (*callback)()) {
    QSaveFile_OnAtEnd((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_size(void* self) {
    return QSaveFile_Size((QSaveFile*)self);
}

long long q_savefile_super_size(void* self) {
    return QSaveFile_SuperSize((QSaveFile*)self);
}

void q_savefile_on_size(void* self, long long (*callback)()) {
    QSaveFile_OnSize((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_resize(void* self, long long sz) {
    return QSaveFile_Resize((QSaveFile*)self, sz);
}

bool q_savefile_super_resize(void* self, long long sz) {
    return QSaveFile_SuperResize((QSaveFile*)self, sz);
}

void q_savefile_on_resize(void* self, bool (*callback)(void*, long long)) {
    QSaveFile_OnResize((QSaveFile*)self, (intptr_t)callback);
}

int32_t q_savefile_permissions(void* self) {
    return QSaveFile_Permissions((QSaveFile*)self);
}

int32_t q_savefile_super_permissions(void* self) {
    return QSaveFile_SuperPermissions((QSaveFile*)self);
}

void q_savefile_on_permissions(void* self, int32_t (*callback)()) {
    QSaveFile_OnPermissions((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_set_permissions(void* self, int32_t permissionSpec) {
    return QSaveFile_SetPermissions((QSaveFile*)self, permissionSpec);
}

bool q_savefile_super_set_permissions(void* self, int32_t permissionSpec) {
    return QSaveFile_SuperSetPermissions((QSaveFile*)self, permissionSpec);
}

void q_savefile_on_set_permissions(void* self, bool (*callback)(void*, int32_t)) {
    QSaveFile_OnSetPermissions((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_read_data(void* self, char* data, long long maxlen) {
    return QSaveFile_ReadData((QSaveFile*)self, data, maxlen);
}

long long q_savefile_super_read_data(void* self, char* data, long long maxlen) {
    return QSaveFile_SuperReadData((QSaveFile*)self, data, maxlen);
}

void q_savefile_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QSaveFile_OnReadData((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_read_line_data(void* self, char* data, long long maxlen) {
    return QSaveFile_ReadLineData((QSaveFile*)self, data, maxlen);
}

long long q_savefile_super_read_line_data(void* self, char* data, long long maxlen) {
    return QSaveFile_SuperReadLineData((QSaveFile*)self, data, maxlen);
}

void q_savefile_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QSaveFile_OnReadLineData((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_reset(void* self) {
    return QSaveFile_Reset((QSaveFile*)self);
}

bool q_savefile_super_reset(void* self) {
    return QSaveFile_SuperReset((QSaveFile*)self);
}

void q_savefile_on_reset(void* self, bool (*callback)()) {
    QSaveFile_OnReset((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_bytes_available(void* self) {
    return QSaveFile_BytesAvailable((QSaveFile*)self);
}

long long q_savefile_super_bytes_available(void* self) {
    return QSaveFile_SuperBytesAvailable((QSaveFile*)self);
}

void q_savefile_on_bytes_available(void* self, long long (*callback)()) {
    QSaveFile_OnBytesAvailable((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_bytes_to_write(void* self) {
    return QSaveFile_BytesToWrite((QSaveFile*)self);
}

long long q_savefile_super_bytes_to_write(void* self) {
    return QSaveFile_SuperBytesToWrite((QSaveFile*)self);
}

void q_savefile_on_bytes_to_write(void* self, long long (*callback)()) {
    QSaveFile_OnBytesToWrite((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_can_read_line(void* self) {
    return QSaveFile_CanReadLine((QSaveFile*)self);
}

bool q_savefile_super_can_read_line(void* self) {
    return QSaveFile_SuperCanReadLine((QSaveFile*)self);
}

void q_savefile_on_can_read_line(void* self, bool (*callback)()) {
    QSaveFile_OnCanReadLine((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_wait_for_ready_read(void* self, int msecs) {
    return QSaveFile_WaitForReadyRead((QSaveFile*)self, msecs);
}

bool q_savefile_super_wait_for_ready_read(void* self, int msecs) {
    return QSaveFile_SuperWaitForReadyRead((QSaveFile*)self, msecs);
}

void q_savefile_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QSaveFile_OnWaitForReadyRead((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_wait_for_bytes_written(void* self, int msecs) {
    return QSaveFile_WaitForBytesWritten((QSaveFile*)self, msecs);
}

bool q_savefile_super_wait_for_bytes_written(void* self, int msecs) {
    return QSaveFile_SuperWaitForBytesWritten((QSaveFile*)self, msecs);
}

void q_savefile_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QSaveFile_OnWaitForBytesWritten((QSaveFile*)self, (intptr_t)callback);
}

long long q_savefile_skip_data(void* self, long long maxSize) {
    return QSaveFile_SkipData((QSaveFile*)self, maxSize);
}

long long q_savefile_super_skip_data(void* self, long long maxSize) {
    return QSaveFile_SuperSkipData((QSaveFile*)self, maxSize);
}

void q_savefile_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QSaveFile_OnSkipData((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_event(void* self, void* event) {
    return QSaveFile_Event((QSaveFile*)self, (QEvent*)event);
}

bool q_savefile_super_event(void* self, void* event) {
    return QSaveFile_SuperEvent((QSaveFile*)self, (QEvent*)event);
}

void q_savefile_on_event(void* self, bool (*callback)(void*, void*)) {
    QSaveFile_OnEvent((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_event_filter(void* self, void* watched, void* event) {
    return QSaveFile_EventFilter((QSaveFile*)self, (QObject*)watched, (QEvent*)event);
}

bool q_savefile_super_event_filter(void* self, void* watched, void* event) {
    return QSaveFile_SuperEventFilter((QSaveFile*)self, (QObject*)watched, (QEvent*)event);
}

void q_savefile_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSaveFile_OnEventFilter((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_timer_event(void* self, void* event) {
    QSaveFile_TimerEvent((QSaveFile*)self, (QTimerEvent*)event);
}

void q_savefile_super_timer_event(void* self, void* event) {
    QSaveFile_SuperTimerEvent((QSaveFile*)self, (QTimerEvent*)event);
}

void q_savefile_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSaveFile_OnTimerEvent((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_child_event(void* self, void* event) {
    QSaveFile_ChildEvent((QSaveFile*)self, (QChildEvent*)event);
}

void q_savefile_super_child_event(void* self, void* event) {
    QSaveFile_SuperChildEvent((QSaveFile*)self, (QChildEvent*)event);
}

void q_savefile_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSaveFile_OnChildEvent((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_custom_event(void* self, void* event) {
    QSaveFile_CustomEvent((QSaveFile*)self, (QEvent*)event);
}

void q_savefile_super_custom_event(void* self, void* event) {
    QSaveFile_SuperCustomEvent((QSaveFile*)self, (QEvent*)event);
}

void q_savefile_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSaveFile_OnCustomEvent((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_connect_notify(void* self, void* signal) {
    QSaveFile_ConnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

void q_savefile_super_connect_notify(void* self, void* signal) {
    QSaveFile_SuperConnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

void q_savefile_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSaveFile_OnConnectNotify((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_disconnect_notify(void* self, void* signal) {
    QSaveFile_DisconnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

void q_savefile_super_disconnect_notify(void* self, void* signal) {
    QSaveFile_SuperDisconnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

void q_savefile_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSaveFile_OnDisconnectNotify((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_set_open_mode(void* self, int32_t openMode) {
    QSaveFile_SetOpenMode((QSaveFile*)self, openMode);
}

void q_savefile_super_set_open_mode(void* self, int32_t openMode) {
    QSaveFile_SuperSetOpenMode((QSaveFile*)self, openMode);
}

void q_savefile_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QSaveFile_OnSetOpenMode((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_set_error_string(void* self, const char* errorString) {
    QSaveFile_SetErrorString((QSaveFile*)self, qstring(errorString));
}

void q_savefile_super_set_error_string(void* self, const char* errorString) {
    QSaveFile_SuperSetErrorString((QSaveFile*)self, qstring(errorString));
}

void q_savefile_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QSaveFile_OnSetErrorString((QSaveFile*)self, (intptr_t)callback);
}

QObject* q_savefile_sender(void* self) {
    return QSaveFile_Sender((QSaveFile*)self);
}

QObject* q_savefile_super_sender(void* self) {
    return QSaveFile_SuperSender((QSaveFile*)self);
}

void q_savefile_on_sender(void* self, QObject* (*callback)()) {
    QSaveFile_OnSender((QSaveFile*)self, (intptr_t)callback);
}

int32_t q_savefile_sender_signal_index(void* self) {
    return QSaveFile_SenderSignalIndex((QSaveFile*)self);
}

int32_t q_savefile_super_sender_signal_index(void* self) {
    return QSaveFile_SuperSenderSignalIndex((QSaveFile*)self);
}

void q_savefile_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSaveFile_OnSenderSignalIndex((QSaveFile*)self, (intptr_t)callback);
}

int32_t q_savefile_receivers(void* self, const char* signal) {
    return QSaveFile_Receivers((QSaveFile*)self, signal);
}

int32_t q_savefile_super_receivers(void* self, const char* signal) {
    return QSaveFile_SuperReceivers((QSaveFile*)self, signal);
}

void q_savefile_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSaveFile_OnReceivers((QSaveFile*)self, (intptr_t)callback);
}

bool q_savefile_is_signal_connected(void* self, void* signal) {
    return QSaveFile_IsSignalConnected((QSaveFile*)self, (QMetaMethod*)signal);
}

bool q_savefile_super_is_signal_connected(void* self, void* signal) {
    return QSaveFile_SuperIsSignalConnected((QSaveFile*)self, (QMetaMethod*)signal);
}

void q_savefile_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSaveFile_OnIsSignalConnected((QSaveFile*)self, (intptr_t)callback);
}

void q_savefile_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_savefile_delete(void* self) {
    QSaveFile_Delete((QSaveFile*)(self));
}
