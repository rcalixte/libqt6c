#include "libqcoreevent.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqiodevice.hpp"
#include "libqiodevice.h"

QIODevice* q_iodevice_new() {
    return QIODevice_new();
}

QIODevice* q_iodevice_new2(void* parent) {
    return QIODevice_new2((QObject*)parent);
}

const QMetaObject* q_iodevice_meta_object(void* self) {
    return QIODevice_MetaObject((QIODevice*)self);
}

void* q_iodevice_metacast(void* self, const char* param1) {
    return QIODevice_Metacast((QIODevice*)self, param1);
}

int32_t q_iodevice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QIODevice_Metacall((QIODevice*)self, param1, param2, param3);
}

void q_iodevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QIODevice_OnMetacall((QIODevice*)self, (intptr_t)callback);
}

int32_t q_iodevice_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QIODevice_QBaseMetacall((QIODevice*)self, param1, param2, param3);
}

const char* q_iodevice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_iodevice_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_iodevice_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_iodevice_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_iodevice_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_iodevice_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_iodevice_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

bool q_iodevice_is_sequential(void* self) {
    return QIODevice_IsSequential((QIODevice*)self);
}

void q_iodevice_on_is_sequential(void* self, bool (*callback)()) {
    QIODevice_OnIsSequential((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_is_sequential(void* self) {
    return QIODevice_QBaseIsSequential((QIODevice*)self);
}

int32_t q_iodevice_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_iodevice_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_iodevice_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_iodevice_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_iodevice_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_iodevice_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

bool q_iodevice_open(void* self, int32_t mode) {
    return QIODevice_Open((QIODevice*)self, mode);
}

void q_iodevice_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QIODevice_OnOpen((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_open(void* self, int32_t mode) {
    return QIODevice_QBaseOpen((QIODevice*)self, mode);
}

void q_iodevice_close(void* self) {
    QIODevice_Close((QIODevice*)self);
}

void q_iodevice_on_close(void* self, void (*callback)()) {
    QIODevice_OnClose((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_qbase_close(void* self) {
    QIODevice_QBaseClose((QIODevice*)self);
}

long long q_iodevice_pos(void* self) {
    return QIODevice_Pos((QIODevice*)self);
}

void q_iodevice_on_pos(void* self, long long (*callback)()) {
    QIODevice_OnPos((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_pos(void* self) {
    return QIODevice_QBasePos((QIODevice*)self);
}

long long q_iodevice_size(void* self) {
    return QIODevice_Size((QIODevice*)self);
}

void q_iodevice_on_size(void* self, long long (*callback)()) {
    QIODevice_OnSize((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_size(void* self) {
    return QIODevice_QBaseSize((QIODevice*)self);
}

bool q_iodevice_seek(void* self, long long pos) {
    return QIODevice_Seek((QIODevice*)self, pos);
}

void q_iodevice_on_seek(void* self, bool (*callback)(void*, long long)) {
    QIODevice_OnSeek((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_seek(void* self, long long pos) {
    return QIODevice_QBaseSeek((QIODevice*)self, pos);
}

bool q_iodevice_at_end(void* self) {
    return QIODevice_AtEnd((QIODevice*)self);
}

void q_iodevice_on_at_end(void* self, bool (*callback)()) {
    QIODevice_OnAtEnd((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_at_end(void* self) {
    return QIODevice_QBaseAtEnd((QIODevice*)self);
}

bool q_iodevice_reset(void* self) {
    return QIODevice_Reset((QIODevice*)self);
}

void q_iodevice_on_reset(void* self, bool (*callback)()) {
    QIODevice_OnReset((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_reset(void* self) {
    return QIODevice_QBaseReset((QIODevice*)self);
}

long long q_iodevice_bytes_available(void* self) {
    return QIODevice_BytesAvailable((QIODevice*)self);
}

void q_iodevice_on_bytes_available(void* self, long long (*callback)()) {
    QIODevice_OnBytesAvailable((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_bytes_available(void* self) {
    return QIODevice_QBaseBytesAvailable((QIODevice*)self);
}

long long q_iodevice_bytes_to_write(void* self) {
    return QIODevice_BytesToWrite((QIODevice*)self);
}

void q_iodevice_on_bytes_to_write(void* self, long long (*callback)()) {
    QIODevice_OnBytesToWrite((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_bytes_to_write(void* self) {
    return QIODevice_QBaseBytesToWrite((QIODevice*)self);
}

long long q_iodevice_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_iodevice_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_iodevice_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_iodevice_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_iodevice_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_iodevice_can_read_line(void* self) {
    return QIODevice_CanReadLine((QIODevice*)self);
}

void q_iodevice_on_can_read_line(void* self, bool (*callback)()) {
    QIODevice_OnCanReadLine((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_can_read_line(void* self) {
    return QIODevice_QBaseCanReadLine((QIODevice*)self);
}

void q_iodevice_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_iodevice_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_iodevice_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_iodevice_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_iodevice_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_iodevice_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_iodevice_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_iodevice_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_iodevice_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_iodevice_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

bool q_iodevice_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_WaitForReadyRead((QIODevice*)self, msecs);
}

void q_iodevice_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QIODevice_OnWaitForReadyRead((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_QBaseWaitForReadyRead((QIODevice*)self, msecs);
}

bool q_iodevice_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_WaitForBytesWritten((QIODevice*)self, msecs);
}

void q_iodevice_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QIODevice_OnWaitForBytesWritten((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_QBaseWaitForBytesWritten((QIODevice*)self, msecs);
}

void q_iodevice_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_iodevice_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_iodevice_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_iodevice_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_iodevice_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_iodevice_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_iodevice_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_iodevice_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_iodevice_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_iodevice_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_iodevice_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_read_data(void* self, char* data, long long maxlen) {
    return QIODevice_ReadData((QIODevice*)self, data, maxlen);
}

void q_iodevice_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QIODevice_OnReadData((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_read_data(void* self, char* data, long long maxlen) {
    return QIODevice_QBaseReadData((QIODevice*)self, data, maxlen);
}

long long q_iodevice_read_line_data(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLineData((QIODevice*)self, data, maxlen);
}

void q_iodevice_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QIODevice_OnReadLineData((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QIODevice_QBaseReadLineData((QIODevice*)self, data, maxlen);
}

long long q_iodevice_skip_data(void* self, long long maxSize) {
    return QIODevice_SkipData((QIODevice*)self, maxSize);
}

void q_iodevice_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QIODevice_OnSkipData((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_skip_data(void* self, long long maxSize) {
    return QIODevice_QBaseSkipData((QIODevice*)self, maxSize);
}

long long q_iodevice_write_data(void* self, const char* data, long long lenVal) {
    return QIODevice_WriteData((QIODevice*)self, data, lenVal);
}

void q_iodevice_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QIODevice_OnWriteData((QIODevice*)self, (intptr_t)callback);
}

long long q_iodevice_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QIODevice_QBaseWriteData((QIODevice*)self, data, lenVal);
}

void q_iodevice_set_open_mode(void* self, int32_t openMode) {
    QIODevice_SetOpenMode((QIODevice*)self, openMode);
}

void q_iodevice_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QIODevice_OnSetOpenMode((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_qbase_set_open_mode(void* self, int32_t openMode) {
    QIODevice_QBaseSetOpenMode((QIODevice*)self, openMode);
}

void q_iodevice_set_error_string(void* self, const char* errorString) {
    QIODevice_SetErrorString((QIODevice*)self, qstring(errorString));
}

void q_iodevice_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QIODevice_OnSetErrorString((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_qbase_set_error_string(void* self, const char* errorString) {
    QIODevice_QBaseSetErrorString((QIODevice*)self, qstring(errorString));
}

const char* q_iodevice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_iodevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_iodevice_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_iodevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_iodevice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_iodevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_iodevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_iodevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_iodevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_iodevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_iodevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_iodevice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_iodevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_iodevice_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_iodevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_iodevice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_iodevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_iodevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_iodevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_iodevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_iodevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_iodevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_iodevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_iodevice_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_iodevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_iodevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_iodevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_iodevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_iodevice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_iodevice_dynamic_property_names\n");
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

QBindingStorage* q_iodevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_iodevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_iodevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_iodevice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_iodevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_iodevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_iodevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_iodevice_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_iodevice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_iodevice_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_iodevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_iodevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_iodevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_iodevice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_iodevice_event(void* self, void* event) {
    return QIODevice_Event((QIODevice*)self, (QEvent*)event);
}

bool q_iodevice_qbase_event(void* self, void* event) {
    return QIODevice_QBaseEvent((QIODevice*)self, (QEvent*)event);
}

void q_iodevice_on_event(void* self, bool (*callback)(void*, void*)) {
    QIODevice_OnEvent((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_event_filter(void* self, void* watched, void* event) {
    return QIODevice_EventFilter((QIODevice*)self, (QObject*)watched, (QEvent*)event);
}

bool q_iodevice_qbase_event_filter(void* self, void* watched, void* event) {
    return QIODevice_QBaseEventFilter((QIODevice*)self, (QObject*)watched, (QEvent*)event);
}

void q_iodevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QIODevice_OnEventFilter((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_timer_event(void* self, void* event) {
    QIODevice_TimerEvent((QIODevice*)self, (QTimerEvent*)event);
}

void q_iodevice_qbase_timer_event(void* self, void* event) {
    QIODevice_QBaseTimerEvent((QIODevice*)self, (QTimerEvent*)event);
}

void q_iodevice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QIODevice_OnTimerEvent((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_child_event(void* self, void* event) {
    QIODevice_ChildEvent((QIODevice*)self, (QChildEvent*)event);
}

void q_iodevice_qbase_child_event(void* self, void* event) {
    QIODevice_QBaseChildEvent((QIODevice*)self, (QChildEvent*)event);
}

void q_iodevice_on_child_event(void* self, void (*callback)(void*, void*)) {
    QIODevice_OnChildEvent((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_custom_event(void* self, void* event) {
    QIODevice_CustomEvent((QIODevice*)self, (QEvent*)event);
}

void q_iodevice_qbase_custom_event(void* self, void* event) {
    QIODevice_QBaseCustomEvent((QIODevice*)self, (QEvent*)event);
}

void q_iodevice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QIODevice_OnCustomEvent((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_connect_notify(void* self, void* signal) {
    QIODevice_ConnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

void q_iodevice_qbase_connect_notify(void* self, void* signal) {
    QIODevice_QBaseConnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

void q_iodevice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QIODevice_OnConnectNotify((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_disconnect_notify(void* self, void* signal) {
    QIODevice_DisconnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

void q_iodevice_qbase_disconnect_notify(void* self, void* signal) {
    QIODevice_QBaseDisconnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

void q_iodevice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QIODevice_OnDisconnectNotify((QIODevice*)self, (intptr_t)callback);
}

QObject* q_iodevice_sender(void* self) {
    return QIODevice_Sender((QIODevice*)self);
}

QObject* q_iodevice_qbase_sender(void* self) {
    return QIODevice_QBaseSender((QIODevice*)self);
}

void q_iodevice_on_sender(void* self, QObject* (*callback)()) {
    QIODevice_OnSender((QIODevice*)self, (intptr_t)callback);
}

int32_t q_iodevice_sender_signal_index(void* self) {
    return QIODevice_SenderSignalIndex((QIODevice*)self);
}

int32_t q_iodevice_qbase_sender_signal_index(void* self) {
    return QIODevice_QBaseSenderSignalIndex((QIODevice*)self);
}

void q_iodevice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QIODevice_OnSenderSignalIndex((QIODevice*)self, (intptr_t)callback);
}

int32_t q_iodevice_receivers(void* self, const char* signal) {
    return QIODevice_Receivers((QIODevice*)self, signal);
}

int32_t q_iodevice_qbase_receivers(void* self, const char* signal) {
    return QIODevice_QBaseReceivers((QIODevice*)self, signal);
}

void q_iodevice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QIODevice_OnReceivers((QIODevice*)self, (intptr_t)callback);
}

bool q_iodevice_is_signal_connected(void* self, void* signal) {
    return QIODevice_IsSignalConnected((QIODevice*)self, (QMetaMethod*)signal);
}

bool q_iodevice_qbase_is_signal_connected(void* self, void* signal) {
    return QIODevice_QBaseIsSignalConnected((QIODevice*)self, (QMetaMethod*)signal);
}

void q_iodevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QIODevice_OnIsSignalConnected((QIODevice*)self, (intptr_t)callback);
}

void q_iodevice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_iodevice_delete(void* self) {
    QIODevice_Delete((QIODevice*)(self));
}
