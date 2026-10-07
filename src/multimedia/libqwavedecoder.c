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
    return QWaveDecoder_New((QIODevice*)device);
}

QWaveDecoder* q_wavedecoder_new2(void* device, const void* format) {
    return QWaveDecoder_New2((QIODevice*)device, (QAudioFormat*)format);
}

QWaveDecoder* q_wavedecoder_new3(void* device, void* parent) {
    return QWaveDecoder_New3((QIODevice*)device, (QObject*)parent);
}

QWaveDecoder* q_wavedecoder_new4(void* device, const void* format, void* parent) {
    return QWaveDecoder_New4((QIODevice*)device, (QAudioFormat*)format, (QObject*)parent);
}

const QMetaObject* q_wavedecoder_meta_object(const void* self) {
    return QWaveDecoder_MetaObject((QWaveDecoder*)self);
}

void q_wavedecoder_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QWaveDecoder_OnMetaObject((QWaveDecoder*)self, (intptr_t)callback);
}

const QMetaObject* q_wavedecoder_super_meta_object(const void* self) {
    return QWaveDecoder_SuperMetaObject((QWaveDecoder*)self);
}

void* q_wavedecoder_metacast(void* self, const char* param1) {
    return QWaveDecoder_Metacast((QWaveDecoder*)self, param1);
}

void q_wavedecoder_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWaveDecoder_OnMetacast((QWaveDecoder*)self, (intptr_t)callback);
}

void* q_wavedecoder_super_metacast(void* self, const char* param1) {
    return QWaveDecoder_SuperMetacast((QWaveDecoder*)self, param1);
}

int32_t q_wavedecoder_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWaveDecoder_Metacall((QWaveDecoder*)self, param1, param2, param3);
}

void q_wavedecoder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWaveDecoder_OnMetacall((QWaveDecoder*)self, (intptr_t)callback);
}

int32_t q_wavedecoder_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWaveDecoder_SuperMetacall((QWaveDecoder*)self, param1, param2, param3);
}

const char* q_wavedecoder_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioFormat* q_wavedecoder_audio_format(const void* self) {
    return QWaveDecoder_AudioFormat((QWaveDecoder*)self);
}

QIODevice* q_wavedecoder_get_device(void* self) {
    return QWaveDecoder_GetDevice((QWaveDecoder*)self);
}

int32_t q_wavedecoder_duration(const void* self) {
    return QWaveDecoder_Duration((QWaveDecoder*)self);
}

int64_t q_wavedecoder_header_length() {
    return QWaveDecoder_HeaderLength();
}

bool q_wavedecoder_open(void* self, int32_t mode) {
    return QWaveDecoder_Open((QWaveDecoder*)self, mode);
}

void q_wavedecoder_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QWaveDecoder_OnOpen((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_super_open(void* self, int32_t mode) {
    return QWaveDecoder_SuperOpen((QWaveDecoder*)self, mode);
}

void q_wavedecoder_close(void* self) {
    QWaveDecoder_Close((QWaveDecoder*)self);
}

void q_wavedecoder_on_close(void* self, void (*callback)(void*)) {
    QWaveDecoder_OnClose((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_super_close(void* self) {
    QWaveDecoder_SuperClose((QWaveDecoder*)self);
}

bool q_wavedecoder_seek(void* self, int64_t pos) {
    return QWaveDecoder_Seek((QWaveDecoder*)self, pos);
}

void q_wavedecoder_on_seek(void* self, bool (*callback)(void*, int64_t)) {
    QWaveDecoder_OnSeek((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_super_seek(void* self, int64_t pos) {
    return QWaveDecoder_SuperSeek((QWaveDecoder*)self, pos);
}

int64_t q_wavedecoder_pos(const void* self) {
    return QWaveDecoder_Pos((QWaveDecoder*)self);
}

void q_wavedecoder_on_pos(void* self, int64_t (*callback)(const void*)) {
    QWaveDecoder_OnPos((QWaveDecoder*)self, (intptr_t)callback);
}

int64_t q_wavedecoder_super_pos(const void* self) {
    return QWaveDecoder_SuperPos((QWaveDecoder*)self);
}

void q_wavedecoder_set_i_o_device(void* self, void* device) {
    QWaveDecoder_SetIODevice((QWaveDecoder*)self, (QIODevice*)device);
}

int64_t q_wavedecoder_size(const void* self) {
    return QWaveDecoder_Size((QWaveDecoder*)self);
}

void q_wavedecoder_on_size(void* self, int64_t (*callback)(const void*)) {
    QWaveDecoder_OnSize((QWaveDecoder*)self, (intptr_t)callback);
}

int64_t q_wavedecoder_super_size(const void* self) {
    return QWaveDecoder_SuperSize((QWaveDecoder*)self);
}

bool q_wavedecoder_is_sequential(const void* self) {
    return QWaveDecoder_IsSequential((QWaveDecoder*)self);
}

void q_wavedecoder_on_is_sequential(void* self, bool (*callback)(const void*)) {
    QWaveDecoder_OnIsSequential((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_super_is_sequential(const void* self) {
    return QWaveDecoder_SuperIsSequential((QWaveDecoder*)self);
}

int64_t q_wavedecoder_bytes_available(const void* self) {
    return QWaveDecoder_BytesAvailable((QWaveDecoder*)self);
}

void q_wavedecoder_on_bytes_available(void* self, int64_t (*callback)(const void*)) {
    QWaveDecoder_OnBytesAvailable((QWaveDecoder*)self, (intptr_t)callback);
}

int64_t q_wavedecoder_super_bytes_available(const void* self) {
    return QWaveDecoder_SuperBytesAvailable((QWaveDecoder*)self);
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

QIODeviceBase* q_wavedecoder_as_q_i_o_device_base(const void* self) {
    return QIODevice_AsQIODeviceBase((QIODevice*)self);
}

int32_t q_wavedecoder_open_mode(const void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_wavedecoder_is_text_mode_enabled(const void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_wavedecoder_is_open(const void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_wavedecoder_is_readable(const void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_wavedecoder_is_writable(const void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_wavedecoder_read_channel_count(const void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_wavedecoder_write_channel_count(const void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_wavedecoder_current_read_channel(const void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_wavedecoder_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_wavedecoder_current_write_channel(const void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_wavedecoder_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

int64_t q_wavedecoder_read(void* self, char* data, int64_t maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

const char* q_wavedecoder_read2(void* self, int64_t maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wavedecoder_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_wavedecoder_read_line(void* self, char* data, int64_t maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

const char* q_wavedecoder_read_line2(void* self) {
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

bool q_wavedecoder_is_transaction_started(const void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

int64_t q_wavedecoder_write(void* self, const char* data, int64_t lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

int64_t q_wavedecoder_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

int64_t q_wavedecoder_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

int64_t q_wavedecoder_peek(void* self, char* data, int64_t maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

const char* q_wavedecoder_peek2(void* self, int64_t maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_wavedecoder_skip(void* self, int64_t maxSize) {
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

const char* q_wavedecoder_error_string(const void* self) {
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

void q_wavedecoder_bytes_written(void* self, int64_t bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_wavedecoder_on_bytes_written(void* self, void (*callback)(void*, int64_t)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_wavedecoder_channel_bytes_written(void* self, int channel, int64_t bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_wavedecoder_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t)) {
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

const char* q_wavedecoder_read_line1(void* self, int64_t maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wavedecoder_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wavedecoder_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_wavedecoder_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_wavedecoder_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_wavedecoder_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_wavedecoder_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_wavedecoder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_wavedecoder_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_wavedecoder_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_wavedecoder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_wavedecoder_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_wavedecoder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_wavedecoder_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_wavedecoder_children(const void* self) {
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

QMetaObject__Connection* q_wavedecoder_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_wavedecoder_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_wavedecoder_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_wavedecoder_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_wavedecoder_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_wavedecoder_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_wavedecoder_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_wavedecoder_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_wavedecoder_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_wavedecoder_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_wavedecoder_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_wavedecoder_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_wavedecoder_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_wavedecoder_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_wavedecoder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_wavedecoder_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_wavedecoder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_wavedecoder_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_wavedecoder_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_wavedecoder_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_wavedecoder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_wavedecoder_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_wavedecoder_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_wavedecoder_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_wavedecoder_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_wavedecoder_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_wavedecoder_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_wavedecoder_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_wavedecoder_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_wavedecoder_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_wavedecoder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_wavedecoder_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_wavedecoder_at_end(const void* self) {
    return QWaveDecoder_AtEnd((QWaveDecoder*)self);
}

bool q_wavedecoder_super_at_end(const void* self) {
    return QWaveDecoder_SuperAtEnd((QWaveDecoder*)self);
}

void q_wavedecoder_on_at_end(void* self, bool (*callback)(const void*)) {
    QWaveDecoder_OnAtEnd((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_reset(void* self) {
    return QWaveDecoder_Reset((QWaveDecoder*)self);
}

bool q_wavedecoder_super_reset(void* self) {
    return QWaveDecoder_SuperReset((QWaveDecoder*)self);
}

void q_wavedecoder_on_reset(void* self, bool (*callback)(void*)) {
    QWaveDecoder_OnReset((QWaveDecoder*)self, (intptr_t)callback);
}

int64_t q_wavedecoder_bytes_to_write(const void* self) {
    return QWaveDecoder_BytesToWrite((QWaveDecoder*)self);
}

int64_t q_wavedecoder_super_bytes_to_write(const void* self) {
    return QWaveDecoder_SuperBytesToWrite((QWaveDecoder*)self);
}

void q_wavedecoder_on_bytes_to_write(void* self, int64_t (*callback)(const void*)) {
    QWaveDecoder_OnBytesToWrite((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_can_read_line(const void* self) {
    return QWaveDecoder_CanReadLine((QWaveDecoder*)self);
}

bool q_wavedecoder_super_can_read_line(const void* self) {
    return QWaveDecoder_SuperCanReadLine((QWaveDecoder*)self);
}

void q_wavedecoder_on_can_read_line(void* self, bool (*callback)(const void*)) {
    QWaveDecoder_OnCanReadLine((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_wait_for_ready_read(void* self, int msecs) {
    return QWaveDecoder_WaitForReadyRead((QWaveDecoder*)self, msecs);
}

bool q_wavedecoder_super_wait_for_ready_read(void* self, int msecs) {
    return QWaveDecoder_SuperWaitForReadyRead((QWaveDecoder*)self, msecs);
}

void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QWaveDecoder_OnWaitForReadyRead((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs) {
    return QWaveDecoder_WaitForBytesWritten((QWaveDecoder*)self, msecs);
}

bool q_wavedecoder_super_wait_for_bytes_written(void* self, int msecs) {
    return QWaveDecoder_SuperWaitForBytesWritten((QWaveDecoder*)self, msecs);
}

void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QWaveDecoder_OnWaitForBytesWritten((QWaveDecoder*)self, (intptr_t)callback);
}

int64_t q_wavedecoder_read_line_data(void* self, char* data, int64_t maxlen) {
    return QWaveDecoder_ReadLineData((QWaveDecoder*)self, data, maxlen);
}

int64_t q_wavedecoder_super_read_line_data(void* self, char* data, int64_t maxlen) {
    return QWaveDecoder_SuperReadLineData((QWaveDecoder*)self, data, maxlen);
}

void q_wavedecoder_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t)) {
    QWaveDecoder_OnReadLineData((QWaveDecoder*)self, (intptr_t)callback);
}

int64_t q_wavedecoder_skip_data(void* self, int64_t maxSize) {
    return QWaveDecoder_SkipData((QWaveDecoder*)self, maxSize);
}

int64_t q_wavedecoder_super_skip_data(void* self, int64_t maxSize) {
    return QWaveDecoder_SuperSkipData((QWaveDecoder*)self, maxSize);
}

void q_wavedecoder_on_skip_data(void* self, int64_t (*callback)(void*, int64_t)) {
    QWaveDecoder_OnSkipData((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_event(void* self, void* event) {
    return QWaveDecoder_Event((QWaveDecoder*)self, (QEvent*)event);
}

bool q_wavedecoder_super_event(void* self, void* event) {
    return QWaveDecoder_SuperEvent((QWaveDecoder*)self, (QEvent*)event);
}

void q_wavedecoder_on_event(void* self, bool (*callback)(void*, void*)) {
    QWaveDecoder_OnEvent((QWaveDecoder*)self, (intptr_t)callback);
}

bool q_wavedecoder_event_filter(void* self, void* watched, void* event) {
    return QWaveDecoder_EventFilter((QWaveDecoder*)self, (QObject*)watched, (QEvent*)event);
}

bool q_wavedecoder_super_event_filter(void* self, void* watched, void* event) {
    return QWaveDecoder_SuperEventFilter((QWaveDecoder*)self, (QObject*)watched, (QEvent*)event);
}

void q_wavedecoder_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWaveDecoder_OnEventFilter((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_timer_event(void* self, void* event) {
    QWaveDecoder_TimerEvent((QWaveDecoder*)self, (QTimerEvent*)event);
}

void q_wavedecoder_super_timer_event(void* self, void* event) {
    QWaveDecoder_SuperTimerEvent((QWaveDecoder*)self, (QTimerEvent*)event);
}

void q_wavedecoder_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnTimerEvent((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_child_event(void* self, void* event) {
    QWaveDecoder_ChildEvent((QWaveDecoder*)self, (QChildEvent*)event);
}

void q_wavedecoder_super_child_event(void* self, void* event) {
    QWaveDecoder_SuperChildEvent((QWaveDecoder*)self, (QChildEvent*)event);
}

void q_wavedecoder_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnChildEvent((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_custom_event(void* self, void* event) {
    QWaveDecoder_CustomEvent((QWaveDecoder*)self, (QEvent*)event);
}

void q_wavedecoder_super_custom_event(void* self, void* event) {
    QWaveDecoder_SuperCustomEvent((QWaveDecoder*)self, (QEvent*)event);
}

void q_wavedecoder_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWaveDecoder_OnCustomEvent((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_connect_notify(void* self, const void* signal) {
    QWaveDecoder_ConnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_super_connect_notify(void* self, const void* signal) {
    QWaveDecoder_SuperConnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QWaveDecoder_OnConnectNotify((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_disconnect_notify(void* self, const void* signal) {
    QWaveDecoder_DisconnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_super_disconnect_notify(void* self, const void* signal) {
    QWaveDecoder_SuperDisconnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QWaveDecoder_OnDisconnectNotify((QWaveDecoder*)self, (intptr_t)callback);
}

void q_wavedecoder_set_open_mode(void* self, int32_t openMode) {
    QWaveDecoder_SetOpenMode((QWaveDecoder*)self, openMode);
}

void q_wavedecoder_set_error_string(void* self, const char* errorString) {
    QWaveDecoder_SetErrorString((QWaveDecoder*)self, qstring(errorString));
}

QObject* q_wavedecoder_sender(const void* self) {
    return QWaveDecoder_Sender((QWaveDecoder*)self);
}

int32_t q_wavedecoder_sender_signal_index(const void* self) {
    return QWaveDecoder_SenderSignalIndex((QWaveDecoder*)self);
}

int32_t q_wavedecoder_receivers(const void* self, const char* signal) {
    return QWaveDecoder_Receivers((QWaveDecoder*)self, signal);
}

bool q_wavedecoder_is_signal_connected(const void* self, const void* signal) {
    return QWaveDecoder_IsSignalConnected((QWaveDecoder*)self, (QMetaMethod*)signal);
}

void q_wavedecoder_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_wavedecoder_delete(void* self) {
    QWaveDecoder_Delete((QWaveDecoder*)(self));
}
