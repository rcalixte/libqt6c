#include "libqcoreevent.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqbuffer.hpp"
#include "libqbuffer.h"

QBuffer* q_buffer_new() {
    return QBuffer_new();
}

QBuffer* q_buffer_new2(void* parent) {
    return QBuffer_new2((QObject*)parent);
}

const QMetaObject* q_buffer_meta_object(void* self) {
    return QBuffer_MetaObject((QBuffer*)self);
}

void q_buffer_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBuffer_OnMetaObject((QBuffer*)self, (intptr_t)callback);
}

const QMetaObject* q_buffer_super_meta_object(void* self) {
    return QBuffer_SuperMetaObject((QBuffer*)self);
}

void* q_buffer_metacast(void* self, const char* param1) {
    return QBuffer_Metacast((QBuffer*)self, param1);
}

void q_buffer_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBuffer_OnMetacast((QBuffer*)self, (intptr_t)callback);
}

void* q_buffer_super_metacast(void* self, const char* param1) {
    return QBuffer_SuperMetacast((QBuffer*)self, param1);
}

int32_t q_buffer_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBuffer_Metacall((QBuffer*)self, param1, param2, param3);
}

void q_buffer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBuffer_OnMetacall((QBuffer*)self, (intptr_t)callback);
}

int32_t q_buffer_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBuffer_SuperMetacall((QBuffer*)self, param1, param2, param3);
}

const char* q_buffer_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_buffer_buffer(void* self) {
    libqt_string _str = QBuffer_Buffer((QBuffer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_buffer_buffer2(void* self) {
    libqt_string _str = QBuffer_Buffer2((QBuffer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buffer_set_data(void* self, char* data) {
    QBuffer_SetData((QBuffer*)self, qstring(data));
}

void q_buffer_set_data2(void* self, const char* data, int64_t lenVal) {
    QBuffer_SetData2((QBuffer*)self, data, lenVal);
}

const char* q_buffer_data(void* self) {
    libqt_string _str = QBuffer_Data((QBuffer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_buffer_open(void* self, int32_t openMode) {
    return QBuffer_Open((QBuffer*)self, openMode);
}

void q_buffer_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QBuffer_OnOpen((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_super_open(void* self, int32_t openMode) {
    return QBuffer_SuperOpen((QBuffer*)self, openMode);
}

void q_buffer_close(void* self) {
    QBuffer_Close((QBuffer*)self);
}

void q_buffer_on_close(void* self, void (*callback)()) {
    QBuffer_OnClose((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_super_close(void* self) {
    QBuffer_SuperClose((QBuffer*)self);
}

long long q_buffer_size(void* self) {
    return QBuffer_Size((QBuffer*)self);
}

void q_buffer_on_size(void* self, long long (*callback)()) {
    QBuffer_OnSize((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_super_size(void* self) {
    return QBuffer_SuperSize((QBuffer*)self);
}

long long q_buffer_pos(void* self) {
    return QBuffer_Pos((QBuffer*)self);
}

void q_buffer_on_pos(void* self, long long (*callback)()) {
    QBuffer_OnPos((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_super_pos(void* self) {
    return QBuffer_SuperPos((QBuffer*)self);
}

bool q_buffer_seek(void* self, long long off) {
    return QBuffer_Seek((QBuffer*)self, off);
}

void q_buffer_on_seek(void* self, bool (*callback)(void*, long long)) {
    QBuffer_OnSeek((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_super_seek(void* self, long long off) {
    return QBuffer_SuperSeek((QBuffer*)self, off);
}

bool q_buffer_at_end(void* self) {
    return QBuffer_AtEnd((QBuffer*)self);
}

void q_buffer_on_at_end(void* self, bool (*callback)()) {
    QBuffer_OnAtEnd((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_super_at_end(void* self) {
    return QBuffer_SuperAtEnd((QBuffer*)self);
}

bool q_buffer_can_read_line(void* self) {
    return QBuffer_CanReadLine((QBuffer*)self);
}

void q_buffer_on_can_read_line(void* self, bool (*callback)()) {
    QBuffer_OnCanReadLine((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_super_can_read_line(void* self) {
    return QBuffer_SuperCanReadLine((QBuffer*)self);
}

void q_buffer_connect_notify(void* self, void* param1) {
    QBuffer_ConnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

void q_buffer_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBuffer_OnConnectNotify((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_super_connect_notify(void* self, void* param1) {
    QBuffer_SuperConnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

void q_buffer_disconnect_notify(void* self, void* param1) {
    QBuffer_DisconnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

void q_buffer_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBuffer_OnDisconnectNotify((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_super_disconnect_notify(void* self, void* param1) {
    QBuffer_SuperDisconnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

long long q_buffer_read_data(void* self, char* data, long long maxlen) {
    return QBuffer_ReadData((QBuffer*)self, data, maxlen);
}

void q_buffer_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QBuffer_OnReadData((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_super_read_data(void* self, char* data, long long maxlen) {
    return QBuffer_SuperReadData((QBuffer*)self, data, maxlen);
}

long long q_buffer_write_data(void* self, const char* data, long long lenVal) {
    return QBuffer_WriteData((QBuffer*)self, data, lenVal);
}

void q_buffer_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QBuffer_OnWriteData((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_super_write_data(void* self, const char* data, long long lenVal) {
    return QBuffer_SuperWriteData((QBuffer*)self, data, lenVal);
}

const char* q_buffer_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_buffer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_buffer_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_buffer_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_buffer_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_buffer_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_buffer_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_buffer_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_buffer_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_buffer_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_buffer_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_buffer_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_buffer_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_buffer_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_buffer_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_buffer_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_buffer_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_buffer_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_buffer_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buffer_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_buffer_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_buffer_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_buffer_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_buffer_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_buffer_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_buffer_write3(void* self, char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_buffer_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_buffer_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_buffer_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_buffer_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_buffer_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_buffer_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_buffer_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buffer_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_buffer_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_buffer_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_buffer_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_buffer_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_buffer_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_buffer_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_buffer_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_buffer_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_buffer_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_buffer_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_buffer_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_buffer_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_buffer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_buffer_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_buffer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_buffer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_buffer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_buffer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_buffer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_buffer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_buffer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_buffer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_buffer_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_buffer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_buffer_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_buffer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_buffer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_buffer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_buffer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_buffer_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_buffer_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_buffer_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_buffer_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_buffer_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_buffer_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_buffer_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_buffer_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_buffer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_buffer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_buffer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_buffer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_buffer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_buffer_dynamic_property_names\n");
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

QBindingStorage* q_buffer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_buffer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_buffer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_buffer_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_buffer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_buffer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_buffer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_buffer_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_buffer_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_buffer_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_buffer_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_buffer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_buffer_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_buffer_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_buffer_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_buffer_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_buffer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_buffer_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_buffer_is_sequential(void* self) {
    return QBuffer_IsSequential((QBuffer*)self);
}

bool q_buffer_super_is_sequential(void* self) {
    return QBuffer_SuperIsSequential((QBuffer*)self);
}

void q_buffer_on_is_sequential(void* self, bool (*callback)()) {
    QBuffer_OnIsSequential((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_reset(void* self) {
    return QBuffer_Reset((QBuffer*)self);
}

bool q_buffer_super_reset(void* self) {
    return QBuffer_SuperReset((QBuffer*)self);
}

void q_buffer_on_reset(void* self, bool (*callback)()) {
    QBuffer_OnReset((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_bytes_available(void* self) {
    return QBuffer_BytesAvailable((QBuffer*)self);
}

long long q_buffer_super_bytes_available(void* self) {
    return QBuffer_SuperBytesAvailable((QBuffer*)self);
}

void q_buffer_on_bytes_available(void* self, long long (*callback)()) {
    QBuffer_OnBytesAvailable((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_bytes_to_write(void* self) {
    return QBuffer_BytesToWrite((QBuffer*)self);
}

long long q_buffer_super_bytes_to_write(void* self) {
    return QBuffer_SuperBytesToWrite((QBuffer*)self);
}

void q_buffer_on_bytes_to_write(void* self, long long (*callback)()) {
    QBuffer_OnBytesToWrite((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_wait_for_ready_read(void* self, int msecs) {
    return QBuffer_WaitForReadyRead((QBuffer*)self, msecs);
}

bool q_buffer_super_wait_for_ready_read(void* self, int msecs) {
    return QBuffer_SuperWaitForReadyRead((QBuffer*)self, msecs);
}

void q_buffer_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QBuffer_OnWaitForReadyRead((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_wait_for_bytes_written(void* self, int msecs) {
    return QBuffer_WaitForBytesWritten((QBuffer*)self, msecs);
}

bool q_buffer_super_wait_for_bytes_written(void* self, int msecs) {
    return QBuffer_SuperWaitForBytesWritten((QBuffer*)self, msecs);
}

void q_buffer_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QBuffer_OnWaitForBytesWritten((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_read_line_data(void* self, char* data, long long maxlen) {
    return QBuffer_ReadLineData((QBuffer*)self, data, maxlen);
}

long long q_buffer_super_read_line_data(void* self, char* data, long long maxlen) {
    return QBuffer_SuperReadLineData((QBuffer*)self, data, maxlen);
}

void q_buffer_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QBuffer_OnReadLineData((QBuffer*)self, (intptr_t)callback);
}

long long q_buffer_skip_data(void* self, long long maxSize) {
    return QBuffer_SkipData((QBuffer*)self, maxSize);
}

long long q_buffer_super_skip_data(void* self, long long maxSize) {
    return QBuffer_SuperSkipData((QBuffer*)self, maxSize);
}

void q_buffer_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QBuffer_OnSkipData((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_event(void* self, void* event) {
    return QBuffer_Event((QBuffer*)self, (QEvent*)event);
}

bool q_buffer_super_event(void* self, void* event) {
    return QBuffer_SuperEvent((QBuffer*)self, (QEvent*)event);
}

void q_buffer_on_event(void* self, bool (*callback)(void*, void*)) {
    QBuffer_OnEvent((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_event_filter(void* self, void* watched, void* event) {
    return QBuffer_EventFilter((QBuffer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_buffer_super_event_filter(void* self, void* watched, void* event) {
    return QBuffer_SuperEventFilter((QBuffer*)self, (QObject*)watched, (QEvent*)event);
}

void q_buffer_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBuffer_OnEventFilter((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_timer_event(void* self, void* event) {
    QBuffer_TimerEvent((QBuffer*)self, (QTimerEvent*)event);
}

void q_buffer_super_timer_event(void* self, void* event) {
    QBuffer_SuperTimerEvent((QBuffer*)self, (QTimerEvent*)event);
}

void q_buffer_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBuffer_OnTimerEvent((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_child_event(void* self, void* event) {
    QBuffer_ChildEvent((QBuffer*)self, (QChildEvent*)event);
}

void q_buffer_super_child_event(void* self, void* event) {
    QBuffer_SuperChildEvent((QBuffer*)self, (QChildEvent*)event);
}

void q_buffer_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBuffer_OnChildEvent((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_custom_event(void* self, void* event) {
    QBuffer_CustomEvent((QBuffer*)self, (QEvent*)event);
}

void q_buffer_super_custom_event(void* self, void* event) {
    QBuffer_SuperCustomEvent((QBuffer*)self, (QEvent*)event);
}

void q_buffer_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBuffer_OnCustomEvent((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_set_open_mode(void* self, int32_t openMode) {
    QBuffer_SetOpenMode((QBuffer*)self, openMode);
}

void q_buffer_super_set_open_mode(void* self, int32_t openMode) {
    QBuffer_SuperSetOpenMode((QBuffer*)self, openMode);
}

void q_buffer_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QBuffer_OnSetOpenMode((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_set_error_string(void* self, const char* errorString) {
    QBuffer_SetErrorString((QBuffer*)self, qstring(errorString));
}

void q_buffer_super_set_error_string(void* self, const char* errorString) {
    QBuffer_SuperSetErrorString((QBuffer*)self, qstring(errorString));
}

void q_buffer_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QBuffer_OnSetErrorString((QBuffer*)self, (intptr_t)callback);
}

QObject* q_buffer_sender(void* self) {
    return QBuffer_Sender((QBuffer*)self);
}

QObject* q_buffer_super_sender(void* self) {
    return QBuffer_SuperSender((QBuffer*)self);
}

void q_buffer_on_sender(void* self, QObject* (*callback)()) {
    QBuffer_OnSender((QBuffer*)self, (intptr_t)callback);
}

int32_t q_buffer_sender_signal_index(void* self) {
    return QBuffer_SenderSignalIndex((QBuffer*)self);
}

int32_t q_buffer_super_sender_signal_index(void* self) {
    return QBuffer_SuperSenderSignalIndex((QBuffer*)self);
}

void q_buffer_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBuffer_OnSenderSignalIndex((QBuffer*)self, (intptr_t)callback);
}

int32_t q_buffer_receivers(void* self, const char* signal) {
    return QBuffer_Receivers((QBuffer*)self, signal);
}

int32_t q_buffer_super_receivers(void* self, const char* signal) {
    return QBuffer_SuperReceivers((QBuffer*)self, signal);
}

void q_buffer_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBuffer_OnReceivers((QBuffer*)self, (intptr_t)callback);
}

bool q_buffer_is_signal_connected(void* self, void* signal) {
    return QBuffer_IsSignalConnected((QBuffer*)self, (QMetaMethod*)signal);
}

bool q_buffer_super_is_signal_connected(void* self, void* signal) {
    return QBuffer_SuperIsSignalConnected((QBuffer*)self, (QMetaMethod*)signal);
}

void q_buffer_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBuffer_OnIsSignalConnected((QBuffer*)self, (intptr_t)callback);
}

void q_buffer_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_buffer_delete(void* self) {
    QBuffer_Delete((QBuffer*)(self));
}
