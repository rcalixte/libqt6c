#include "libqdatetime.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqfiledevice.hpp"
#include "libqfiledevice.h"

const QMetaObject* q_filedevice_meta_object(void* self) {
    return QFileDevice_MetaObject((QFileDevice*)self);
}

void* q_filedevice_metacast(void* self, const char* param1) {
    return QFileDevice_Metacast((QFileDevice*)self, param1);
}

int32_t q_filedevice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileDevice_Metacall((QFileDevice*)self, param1, param2, param3);
}

const char* q_filedevice_tr(const char* s) {
    libqt_string _str = QFileDevice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_filedevice_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

void q_filedevice_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

void q_filedevice_close(void* self) {
    QFileDevice_Close((QFileDevice*)self);
}

bool q_filedevice_is_sequential(void* self) {
    return QFileDevice_IsSequential((QFileDevice*)self);
}

int32_t q_filedevice_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

const char* q_filedevice_file_name(void* self) {
    libqt_string _str = QFileDevice_FileName((QFileDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_filedevice_pos(void* self) {
    return QFileDevice_Pos((QFileDevice*)self);
}

bool q_filedevice_seek(void* self, long long offset) {
    return QFileDevice_Seek((QFileDevice*)self, offset);
}

bool q_filedevice_at_end(void* self) {
    return QFileDevice_AtEnd((QFileDevice*)self);
}

bool q_filedevice_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

long long q_filedevice_size(void* self) {
    return QFileDevice_Size((QFileDevice*)self);
}

bool q_filedevice_resize(void* self, long long sz) {
    return QFileDevice_Resize((QFileDevice*)self, sz);
}

int64_t q_filedevice_permissions(void* self) {
    return QFileDevice_Permissions((QFileDevice*)self);
}

bool q_filedevice_set_permissions(void* self, int64_t permissionSpec) {
    return QFileDevice_SetPermissions((QFileDevice*)self, permissionSpec);
}

unsigned char* q_filedevice_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

bool q_filedevice_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

QDateTime* q_filedevice_file_time(void* self, int64_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

bool q_filedevice_set_file_time(void* self, void* newDate, int64_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

const char* q_filedevice_tr2(const char* s, const char* c) {
    libqt_string _str = QFileDevice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFileDevice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

unsigned char* q_filedevice_map3(void* self, long long offset, long long size, int64_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

int64_t q_filedevice_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_filedevice_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_filedevice_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_filedevice_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_filedevice_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_filedevice_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_filedevice_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_filedevice_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_filedevice_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_filedevice_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_filedevice_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_filedevice_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

bool q_filedevice_open(void* self, int64_t mode) {
    return QIODevice_Open((QIODevice*)self, mode);
}

bool q_filedevice_reset(void* self) {
    return QIODevice_Reset((QIODevice*)self);
}

long long q_filedevice_bytes_available(void* self) {
    return QIODevice_BytesAvailable((QIODevice*)self);
}

long long q_filedevice_bytes_to_write(void* self) {
    return QIODevice_BytesToWrite((QIODevice*)self);
}

long long q_filedevice_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_filedevice_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_filedevice_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_filedevice_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_filedevice_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_filedevice_can_read_line(void* self) {
    return QIODevice_CanReadLine((QIODevice*)self);
}

void q_filedevice_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_filedevice_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_filedevice_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_filedevice_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_filedevice_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_filedevice_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

long long q_filedevice_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

long long q_filedevice_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_filedevice_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_filedevice_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

bool q_filedevice_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_WaitForReadyRead((QIODevice*)self, msecs);
}

bool q_filedevice_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_WaitForBytesWritten((QIODevice*)self, msecs);
}

void q_filedevice_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_filedevice_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_filedevice_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_filedevice_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedevice_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_filedevice_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

void q_filedevice_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_filedevice_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

void q_filedevice_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_filedevice_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

void q_filedevice_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_filedevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

void q_filedevice_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_filedevice_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

void q_filedevice_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_filedevice_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

char* q_filedevice_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_filedevice_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_filedevice_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_filedevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedevice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_filedevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_filedevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_filedevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_filedevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_filedevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_filedevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_filedevice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_filedevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_filedevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_filedevice_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_filedevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_filedevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_filedevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_filedevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_filedevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_filedevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_filedevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_filedevice_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_filedevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_filedevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_filedevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_filedevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_filedevice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_filedevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_filedevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_filedevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_filedevice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_filedevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_filedevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_filedevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_filedevice_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_filedevice_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_filedevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_filedevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_filedevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_filedevice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_filedevice_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_filedevice_delete(void* self) {
    QFileDevice_Delete((QFileDevice*)(self));
}
