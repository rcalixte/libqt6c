#include "libqaudioformat.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwavedecoder.hpp"
#include "libqwavedecoder.h"

QWaveDecoder* q_wavedecoder_new(void* device) {
    return QWaveDecoder_new((QIODevice*)device);
}

QWaveDecoder* q_wavedecoder_new2(void* device, void* format) {
    return QWaveDecoder_new2((QIODevice*)device, (QAudioFormat*)format);
}

QWaveDecoder* q_wavedecoder_new3(void* device, void* parent) {
    return QWaveDecoder_new3((QIODevice*)device, (QObject*)parent);
}

QWaveDecoder* q_wavedecoder_new4(void* device, void* format, void* parent) {
    return QWaveDecoder_new4((QIODevice*)device, (QAudioFormat*)format, (QObject*)parent);
}

const QMetaObject* q_wavedecoder_meta_object(void* self) {
    return QWaveDecoder_MetaObject((QWaveDecoder*)self);
}

void* q_wavedecoder_metacast(void* self, const char* param1) {
    return QWaveDecoder_Metacast((QWaveDecoder*)self, param1);
}

int32_t q_wavedecoder_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWaveDecoder_Metacall((QWaveDecoder*)self, param1, param2, param3);
}

void q_wavedecoder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWaveDecoder_OnMetacall((QWaveDecoder*)self, (intptr_t)callback);
}

int32_t q_wavedecoder_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWaveDecoder_QBaseMetacall((QWaveDecoder*)self, param1, param2, param3);
}

const char* q_wavedecoder_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioFormat* q_wavedecoder_audio_format(void* self) {
    return QWaveDecoder_AudioFormat((QWaveDecoder*)self);
}

QIODevice* q_wavedecoder_get_device(void* self) {
    return QWaveDecoder_GetDevice((QWaveDecoder*)self);
}

int32_t q_wavedecoder_duration(void* self) {
    return QWaveDecoder_Duration((QWaveDecoder*)self);
}

long long q_wavedecoder_header_length() {
    return QWaveDecoder_HeaderLength();
}

bool q_wavedecoder_open(void* self, int32_t mode) {
    return QWaveDecoder_Open((QWaveDecoder*)self, mode);
}

void q_wavedecoder_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QWaveDecoder_OnOpen((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_qbase_open(void* self, int32_t mode) {
    return QWaveDecoder_QBaseOpen((QWaveDecoder*)self, mode);
}

void q_wavedecoder_close(void* self) {
    QWaveDecoder_Close((QWaveDecoder*)self);
}

void q_wavedecoder_on_close(void* self, void (*callback)()) {
    QWaveDecoder_OnClose((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_qbase_close(void* self) {
    QWaveDecoder_QBaseClose((QWaveDecoder*)self);
}

bool q_wavedecoder_seek(void* self, long long pos) {
    return QWaveDecoder_Seek((QWaveDecoder*)self, pos);
}

void q_wavedecoder_on_seek(void* self, bool (*callback)(void*, long long)) {
    QWaveDecoder_OnSeek((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_qbase_seek(void* self, long long pos) {
    return QWaveDecoder_QBaseSeek((QWaveDecoder*)self, pos);
}

long long q_wavedecoder_pos(void* self) {
    return QWaveDecoder_Pos((QWaveDecoder*)self);
}

void q_wavedecoder_on_pos(void* self, long long (*callback)()) {
    QWaveDecoder_OnPos((QWaveDecoder*)self, (intptr_t)callback);
}

long long q_wavedecoder_qbase_pos(void* self) {
    return QWaveDecoder_QBasePos((QWaveDecoder*)self);
}

void q_wavedecoder_set_i_o_device(void* self, void* device) {
    QWaveDecoder_SetIODevice((QWaveDecoder*)self, (QIODevice*)device);
}

long long q_wavedecoder_size(void* self) {
    return QWaveDecoder_Size((QWaveDecoder*)self);
}

void q_wavedecoder_on_size(void* self, long long (*callback)()) {
    QWaveDecoder_OnSize((QWaveDecoder*)self, (intptr_t)callback);
}

long long q_wavedecoder_qbase_size(void* self) {
    return QWaveDecoder_QBaseSize((QWaveDecoder*)self);
}

bool q_wavedecoder_is_sequential(void* self) {
    return QWaveDecoder_IsSequential((QWaveDecoder*)self);
}

void q_wavedecoder_on_is_sequential(void* self, bool (*callback)()) {
    QWaveDecoder_OnIsSequential((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_qbase_is_sequential(void* self) {
    return QWaveDecoder_QBaseIsSequential((QWaveDecoder*)self);
}

long long q_wavedecoder_bytes_available(void* self) {
    return QWaveDecoder_BytesAvailable((QWaveDecoder*)self);
}

void q_wavedecoder_on_bytes_available(void* self, long long (*callback)()) {
    QWaveDecoder_OnBytesAvailable((QWaveDecoder*)self, (intptr_t)callback);
}

long long q_wavedecoder_qbase_bytes_available(void* self) {
    return QWaveDecoder_QBaseBytesAvailable((QWaveDecoder*)self);
}

void q_wavedecoder_format_known(void* self) {
    QWaveDecoder_FormatKnown((QWaveDecoder*)self);
}

void q_wavedecoder_on_format_known(void* self, void (*callback)(void*)) {
    QWaveDecoder_Connect_FormatKnown((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_parsing_error(void* self) {
    QWaveDecoder_ParsingError((QWaveDecoder*)self);
}

void q_wavedecoder_on_parsing_error(void* self, void (*callback)(void*)) {
    QWaveDecoder_Connect_ParsingError((QWaveDecoder*)self, (intptr_t)callback);
}

const char* q_wavedecoder_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wavedecoder_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_wavedecoder_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_wavedecoder_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_wavedecoder_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_wavedecoder_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_wavedecoder_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_wavedecoder_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_wavedecoder_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_wavedecoder_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_wavedecoder_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_wavedecoder_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_wavedecoder_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_wavedecoder_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_wavedecoder_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_wavedecoder_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_wavedecoder_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_wavedecoder_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wavedecoder_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_wavedecoder_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_wavedecoder_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_wavedecoder_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_wavedecoder_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_wavedecoder_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_wavedecoder_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_wavedecoder_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_wavedecoder_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_wavedecoder_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_wavedecoder_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_wavedecoder_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_wavedecoder_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_wavedecoder_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wavedecoder_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_wavedecoder_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_wavedecoder_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_wavedecoder_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_wavedecoder_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_wavedecoder_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_wavedecoder_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_wavedecoder_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_wavedecoder_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_wavedecoder_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_wavedecoder_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_wavedecoder_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_wavedecoder_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wavedecoder_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wavedecoder_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_wavedecoder_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_wavedecoder_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_wavedecoder_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_wavedecoder_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_wavedecoder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_wavedecoder_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_wavedecoder_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_wavedecoder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_wavedecoder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_wavedecoder_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_wavedecoder_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_wavedecoder_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_wavedecoder_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_wavedecoder_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_wavedecoder_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_wavedecoder_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_wavedecoder_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_wavedecoder_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_wavedecoder_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_wavedecoder_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_wavedecoder_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_wavedecoder_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_wavedecoder_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_wavedecoder_dynamic_property_names");
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

QBindingStorage* q_wavedecoder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_wavedecoder_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_wavedecoder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_wavedecoder_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_wavedecoder_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_wavedecoder_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_wavedecoder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_wavedecoder_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_wavedecoder_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_wavedecoder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_wavedecoder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_wavedecoder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_wavedecoder_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_wavedecoder_at_end(void* self) {
    return QWaveDecoder_AtEnd((QWaveDecoder*)self);
}

bool q_wavedecoder_qbase_at_end(void* self) {
    return QWaveDecoder_QBaseAtEnd((QWaveDecoder*)self);
}

void q_wavedecoder_on_at_end(void* self, bool (*callback)()) {
    QWaveDecoder_OnAtEnd((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_reset(void* self) {
    return QWaveDecoder_Reset((QWaveDecoder*)self);
}

bool q_wavedecoder_qbase_reset(void* self) {
    return QWaveDecoder_QBaseReset((QWaveDecoder*)self);
}

void q_wavedecoder_on_reset(void* self, bool (*callback)()) {
    QWaveDecoder_OnReset((QWaveDecoder*)self, (intptr_t)callback);
}

long long q_wavedecoder_bytes_to_write(void* self) {
    return QWaveDecoder_BytesToWrite((QWaveDecoder*)self);
}

long long q_wavedecoder_qbase_bytes_to_write(void* self) {
    return QWaveDecoder_QBaseBytesToWrite((QWaveDecoder*)self);
}

void q_wavedecoder_on_bytes_to_write(void* self, long long (*callback)()) {
    QWaveDecoder_OnBytesToWrite((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_can_read_line(void* self) {
    return QWaveDecoder_CanReadLine((QWaveDecoder*)self);
}

bool q_wavedecoder_qbase_can_read_line(void* self) {
    return QWaveDecoder_QBaseCanReadLine((QWaveDecoder*)self);
}

void q_wavedecoder_on_can_read_line(void* self, bool (*callback)()) {
    QWaveDecoder_OnCanReadLine((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_wait_for_ready_read(void* self, int msecs) {
    return QWaveDecoder_WaitForReadyRead((QWaveDecoder*)self, msecs);
}

bool q_wavedecoder_qbase_wait_for_ready_read(void* self, int msecs) {
    return QWaveDecoder_QBaseWaitForReadyRead((QWaveDecoder*)self, msecs);
}

void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QWaveDecoder_OnWaitForReadyRead((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs) {
    return QWaveDecoder_WaitForBytesWritten((QWaveDecoder*)self, msecs);
}

bool q_wavedecoder_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QWaveDecoder_QBaseWaitForBytesWritten((QWaveDecoder*)self, msecs);
}

void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QWaveDecoder_OnWaitForBytesWritten((QWaveDecoder*)self, (intptr_t)callback);
}

long long q_wavedecoder_read_line_data(void* self, char* data, long long maxlen) {
    return QWaveDecoder_ReadLineData((QWaveDecoder*)self, data, maxlen);
}

long long q_wavedecoder_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QWaveDecoder_QBaseReadLineData((QWaveDecoder*)self, data, maxlen);
}

void q_wavedecoder_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QWaveDecoder_OnReadLineData((QWaveDecoder*)self, (intptr_t)callback);
}

long long q_wavedecoder_skip_data(void* self, long long maxSize) {
    return QWaveDecoder_SkipData((QWaveDecoder*)self, maxSize);
}

long long q_wavedecoder_qbase_skip_data(void* self, long long maxSize) {
    return QWaveDecoder_QBaseSkipData((QWaveDecoder*)self, maxSize);
}

void q_wavedecoder_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QWaveDecoder_OnSkipData((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_event(void* self, void* event) {
    return QWaveDecoder_Event((QWaveDecoder*)self, (QEvent*)event);
}

bool q_wavedecoder_qbase_event(void* self, void* event) {
    return QWaveDecoder_QBaseEvent((QWaveDecoder*)self, (QEvent*)event);
}

void q_wavedecoder_on_event(void* self, bool (*callback)(void*, void*)) {
    QWaveDecoder_OnEvent((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_event_filter(void* self, void* watched, void* event) {
    return QWaveDecoder_EventFilter((QWaveDecoder*)self, (QObject*)watched, (QEvent*)event);
}

bool q_wavedecoder_qbase_event_filter(void* self, void* watched, void* event) {
    return QWaveDecoder_QBaseEventFilter((QWaveDecoder*)self, (QObject*)watched, (QEvent*)event);
}

void q_wavedecoder_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWaveDecoder_OnEventFilter((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_timer_event(void* self, void* event) {
    QWaveDecoder_TimerEvent((QWaveDecoder*)self, (QTimerEvent*)event);
}

void q_wavedecoder_qbase_timer_event(void* self, void* event) {
    QWaveDecoder_QBaseTimerEvent((QWaveDecoder*)self, (QTimerEvent*)event);
}

void q_wavedecoder_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnTimerEvent((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_child_event(void* self, void* event) {
    QWaveDecoder_ChildEvent((QWaveDecoder*)self, (QChildEvent*)event);
}

void q_wavedecoder_qbase_child_event(void* self, void* event) {
    QWaveDecoder_QBaseChildEvent((QWaveDecoder*)self, (QChildEvent*)event);
}

void q_wavedecoder_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnChildEvent((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_custom_event(void* self, void* event) {
    QWaveDecoder_CustomEvent((QWaveDecoder*)self, (QEvent*)event);
}

void q_wavedecoder_qbase_custom_event(void* self, void* event) {
    QWaveDecoder_QBaseCustomEvent((QWaveDecoder*)self, (QEvent*)event);
}

void q_wavedecoder_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnCustomEvent((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_connect_notify(void* self, void* signal) {
    QWaveDecoder_ConnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_qbase_connect_notify(void* self, void* signal) {
    QWaveDecoder_QBaseConnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnConnectNotify((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_disconnect_notify(void* self, void* signal) {
    QWaveDecoder_DisconnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_qbase_disconnect_notify(void* self, void* signal) {
    QWaveDecoder_QBaseDisconnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnDisconnectNotify((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_set_open_mode(void* self, int32_t openMode) {
    QWaveDecoder_SetOpenMode((QWaveDecoder*)self, openMode);
}

void q_wavedecoder_qbase_set_open_mode(void* self, int32_t openMode) {
    QWaveDecoder_QBaseSetOpenMode((QWaveDecoder*)self, openMode);
}

void q_wavedecoder_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QWaveDecoder_OnSetOpenMode((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_set_error_string(void* self, const char* errorString) {
    QWaveDecoder_SetErrorString((QWaveDecoder*)self, qstring(errorString));
}

void q_wavedecoder_qbase_set_error_string(void* self, const char* errorString) {
    QWaveDecoder_QBaseSetErrorString((QWaveDecoder*)self, qstring(errorString));
}

void q_wavedecoder_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QWaveDecoder_OnSetErrorString((QWaveDecoder*)self, (intptr_t)callback);
}

QObject* q_wavedecoder_sender(void* self) {
    return QWaveDecoder_Sender((QWaveDecoder*)self);
}

QObject* q_wavedecoder_qbase_sender(void* self) {
    return QWaveDecoder_QBaseSender((QWaveDecoder*)self);
}

void q_wavedecoder_on_sender(void* self, QObject* (*callback)()) {
    QWaveDecoder_OnSender((QWaveDecoder*)self, (intptr_t)callback);
}

int32_t q_wavedecoder_sender_signal_index(void* self) {
    return QWaveDecoder_SenderSignalIndex((QWaveDecoder*)self);
}

int32_t q_wavedecoder_qbase_sender_signal_index(void* self) {
    return QWaveDecoder_QBaseSenderSignalIndex((QWaveDecoder*)self);
}

void q_wavedecoder_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWaveDecoder_OnSenderSignalIndex((QWaveDecoder*)self, (intptr_t)callback);
}

int32_t q_wavedecoder_receivers(void* self, const char* signal) {
    return QWaveDecoder_Receivers((QWaveDecoder*)self, signal);
}

int32_t q_wavedecoder_qbase_receivers(void* self, const char* signal) {
    return QWaveDecoder_QBaseReceivers((QWaveDecoder*)self, signal);
}

void q_wavedecoder_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWaveDecoder_OnReceivers((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_is_signal_connected(void* self, void* signal) {
    return QWaveDecoder_IsSignalConnected((QWaveDecoder*)self, (QMetaMethod*)signal);
}

bool q_wavedecoder_qbase_is_signal_connected(void* self, void* signal) {
    return QWaveDecoder_QBaseIsSignalConnected((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWaveDecoder_OnIsSignalConnected((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_wavedecoder_delete(void* self) {
    QWaveDecoder_Delete((QWaveDecoder*)(self));
}
