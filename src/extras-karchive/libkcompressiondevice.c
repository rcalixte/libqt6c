#include "libkfilterbase.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkcompressiondevice.hpp"
#include "libkcompressiondevice.h"

KCompressionDevice* k_compressiondevice_new(void* inputDevice, bool autoDeleteInputDevice, int32_t type) {
    return KCompressionDevice_new((QIODevice*)inputDevice, autoDeleteInputDevice, type);
}

KCompressionDevice* k_compressiondevice_new2(const char* fileName, int32_t type) {
    return KCompressionDevice_new2(qstring(fileName), type);
}

KCompressionDevice* k_compressiondevice_new3(const char* fileName) {
    return KCompressionDevice_new3(qstring(fileName));
}

const QMetaObject* k_compressiondevice_meta_object(void* self) {
    return KCompressionDevice_MetaObject((KCompressionDevice*)self);
}

void* k_compressiondevice_metacast(void* self, const char* param1) {
    return KCompressionDevice_Metacast((KCompressionDevice*)self, param1);
}

int32_t k_compressiondevice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompressionDevice_Metacall((KCompressionDevice*)self, param1, param2, param3);
}

void k_compressiondevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCompressionDevice_OnMetacall((KCompressionDevice*)self, (intptr_t)callback);
}

int32_t k_compressiondevice_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompressionDevice_QBaseMetacall((KCompressionDevice*)self, param1, param2, param3);
}

const char* k_compressiondevice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_compressiondevice_compression_type(void* self) {
    return KCompressionDevice_CompressionType((KCompressionDevice*)self);
}

bool k_compressiondevice_open(void* self, int32_t mode) {
    return KCompressionDevice_Open((KCompressionDevice*)self, mode);
}

void k_compressiondevice_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KCompressionDevice_OnOpen((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_qbase_open(void* self, int32_t mode) {
    return KCompressionDevice_QBaseOpen((KCompressionDevice*)self, mode);
}

void k_compressiondevice_close(void* self) {
    KCompressionDevice_Close((KCompressionDevice*)self);
}

void k_compressiondevice_on_close(void* self, void (*callback)()) {
    KCompressionDevice_OnClose((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_qbase_close(void* self) {
    KCompressionDevice_QBaseClose((KCompressionDevice*)self);
}

void k_compressiondevice_set_orig_file_name(void* self, const char* fileName) {
    KCompressionDevice_SetOrigFileName((KCompressionDevice*)self, qstring(fileName));
}

void k_compressiondevice_set_skip_headers(void* self) {
    KCompressionDevice_SetSkipHeaders((KCompressionDevice*)self);
}

bool k_compressiondevice_seek(void* self, long long param1) {
    return KCompressionDevice_Seek((KCompressionDevice*)self, param1);
}

void k_compressiondevice_on_seek(void* self, bool (*callback)(void*, long long)) {
    KCompressionDevice_OnSeek((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_qbase_seek(void* self, long long param1) {
    return KCompressionDevice_QBaseSeek((KCompressionDevice*)self, param1);
}

bool k_compressiondevice_at_end(void* self) {
    return KCompressionDevice_AtEnd((KCompressionDevice*)self);
}

void k_compressiondevice_on_at_end(void* self, bool (*callback)()) {
    KCompressionDevice_OnAtEnd((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_qbase_at_end(void* self) {
    return KCompressionDevice_QBaseAtEnd((KCompressionDevice*)self);
}

KFilterBase* k_compressiondevice_filter_for_compression_type(int32_t type) {
    return KCompressionDevice_FilterForCompressionType(type);
}

int32_t k_compressiondevice_compression_type_for_mime_type(const char* mimetype) {
    return KCompressionDevice_CompressionTypeForMimeType(qstring(mimetype));
}

int32_t k_compressiondevice_error(void* self) {
    return KCompressionDevice_Error((KCompressionDevice*)self);
}

long long k_compressiondevice_read_data(void* self, char* data, long long maxlen) {
    return KCompressionDevice_ReadData((KCompressionDevice*)self, data, maxlen);
}

void k_compressiondevice_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    KCompressionDevice_OnReadData((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_qbase_read_data(void* self, char* data, long long maxlen) {
    return KCompressionDevice_QBaseReadData((KCompressionDevice*)self, data, maxlen);
}

long long k_compressiondevice_write_data(void* self, const char* data, long long lenVal) {
    return KCompressionDevice_WriteData((KCompressionDevice*)self, data, lenVal);
}

void k_compressiondevice_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    KCompressionDevice_OnWriteData((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_qbase_write_data(void* self, const char* data, long long lenVal) {
    return KCompressionDevice_QBaseWriteData((KCompressionDevice*)self, data, lenVal);
}

KFilterBase* k_compressiondevice_filter_base(void* self) {
    return KCompressionDevice_FilterBase((KCompressionDevice*)self);
}

void k_compressiondevice_on_filter_base(void* self, KFilterBase* (*callback)()) {
    KCompressionDevice_OnFilterBase((KCompressionDevice*)self, (intptr_t)callback);
}

KFilterBase* k_compressiondevice_qbase_filter_base(void* self) {
    return KCompressionDevice_QBaseFilterBase((KCompressionDevice*)self);
}

const char* k_compressiondevice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_compressiondevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_compressiondevice_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void k_compressiondevice_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool k_compressiondevice_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool k_compressiondevice_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool k_compressiondevice_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool k_compressiondevice_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t k_compressiondevice_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t k_compressiondevice_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t k_compressiondevice_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void k_compressiondevice_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t k_compressiondevice_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void k_compressiondevice_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long k_compressiondevice_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* k_compressiondevice_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_compressiondevice_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_compressiondevice_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* k_compressiondevice_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_compressiondevice_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void k_compressiondevice_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void k_compressiondevice_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool k_compressiondevice_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long k_compressiondevice_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long k_compressiondevice_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long k_compressiondevice_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long k_compressiondevice_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* k_compressiondevice_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_compressiondevice_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void k_compressiondevice_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool k_compressiondevice_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool k_compressiondevice_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* k_compressiondevice_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_compressiondevice_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void k_compressiondevice_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void k_compressiondevice_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void k_compressiondevice_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void k_compressiondevice_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void k_compressiondevice_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void k_compressiondevice_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void k_compressiondevice_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void k_compressiondevice_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void k_compressiondevice_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void k_compressiondevice_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void k_compressiondevice_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* k_compressiondevice_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_compressiondevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_compressiondevice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_compressiondevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_compressiondevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_compressiondevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_compressiondevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_compressiondevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_compressiondevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_compressiondevice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_compressiondevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_compressiondevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_compressiondevice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_compressiondevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_compressiondevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_compressiondevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_compressiondevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_compressiondevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_compressiondevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_compressiondevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_compressiondevice_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_compressiondevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_compressiondevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_compressiondevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_compressiondevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_compressiondevice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_compressiondevice_dynamic_property_names\n");
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

QBindingStorage* k_compressiondevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_compressiondevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_compressiondevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_compressiondevice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_compressiondevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_compressiondevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_compressiondevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_compressiondevice_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_compressiondevice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_compressiondevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_compressiondevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_compressiondevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_compressiondevice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_compressiondevice_is_sequential(void* self) {
    return KCompressionDevice_IsSequential((KCompressionDevice*)self);
}

bool k_compressiondevice_qbase_is_sequential(void* self) {
    return KCompressionDevice_QBaseIsSequential((KCompressionDevice*)self);
}

void k_compressiondevice_on_is_sequential(void* self, bool (*callback)()) {
    KCompressionDevice_OnIsSequential((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_pos(void* self) {
    return KCompressionDevice_Pos((KCompressionDevice*)self);
}

long long k_compressiondevice_qbase_pos(void* self) {
    return KCompressionDevice_QBasePos((KCompressionDevice*)self);
}

void k_compressiondevice_on_pos(void* self, long long (*callback)()) {
    KCompressionDevice_OnPos((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_size(void* self) {
    return KCompressionDevice_Size((KCompressionDevice*)self);
}

long long k_compressiondevice_qbase_size(void* self) {
    return KCompressionDevice_QBaseSize((KCompressionDevice*)self);
}

void k_compressiondevice_on_size(void* self, long long (*callback)()) {
    KCompressionDevice_OnSize((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_reset(void* self) {
    return KCompressionDevice_Reset((KCompressionDevice*)self);
}

bool k_compressiondevice_qbase_reset(void* self) {
    return KCompressionDevice_QBaseReset((KCompressionDevice*)self);
}

void k_compressiondevice_on_reset(void* self, bool (*callback)()) {
    KCompressionDevice_OnReset((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_bytes_available(void* self) {
    return KCompressionDevice_BytesAvailable((KCompressionDevice*)self);
}

long long k_compressiondevice_qbase_bytes_available(void* self) {
    return KCompressionDevice_QBaseBytesAvailable((KCompressionDevice*)self);
}

void k_compressiondevice_on_bytes_available(void* self, long long (*callback)()) {
    KCompressionDevice_OnBytesAvailable((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_bytes_to_write(void* self) {
    return KCompressionDevice_BytesToWrite((KCompressionDevice*)self);
}

long long k_compressiondevice_qbase_bytes_to_write(void* self) {
    return KCompressionDevice_QBaseBytesToWrite((KCompressionDevice*)self);
}

void k_compressiondevice_on_bytes_to_write(void* self, long long (*callback)()) {
    KCompressionDevice_OnBytesToWrite((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_can_read_line(void* self) {
    return KCompressionDevice_CanReadLine((KCompressionDevice*)self);
}

bool k_compressiondevice_qbase_can_read_line(void* self) {
    return KCompressionDevice_QBaseCanReadLine((KCompressionDevice*)self);
}

void k_compressiondevice_on_can_read_line(void* self, bool (*callback)()) {
    KCompressionDevice_OnCanReadLine((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_wait_for_ready_read(void* self, int msecs) {
    return KCompressionDevice_WaitForReadyRead((KCompressionDevice*)self, msecs);
}

bool k_compressiondevice_qbase_wait_for_ready_read(void* self, int msecs) {
    return KCompressionDevice_QBaseWaitForReadyRead((KCompressionDevice*)self, msecs);
}

void k_compressiondevice_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    KCompressionDevice_OnWaitForReadyRead((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_wait_for_bytes_written(void* self, int msecs) {
    return KCompressionDevice_WaitForBytesWritten((KCompressionDevice*)self, msecs);
}

bool k_compressiondevice_qbase_wait_for_bytes_written(void* self, int msecs) {
    return KCompressionDevice_QBaseWaitForBytesWritten((KCompressionDevice*)self, msecs);
}

void k_compressiondevice_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    KCompressionDevice_OnWaitForBytesWritten((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_read_line_data(void* self, char* data, long long maxlen) {
    return KCompressionDevice_ReadLineData((KCompressionDevice*)self, data, maxlen);
}

long long k_compressiondevice_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return KCompressionDevice_QBaseReadLineData((KCompressionDevice*)self, data, maxlen);
}

void k_compressiondevice_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    KCompressionDevice_OnReadLineData((KCompressionDevice*)self, (intptr_t)callback);
}

long long k_compressiondevice_skip_data(void* self, long long maxSize) {
    return KCompressionDevice_SkipData((KCompressionDevice*)self, maxSize);
}

long long k_compressiondevice_qbase_skip_data(void* self, long long maxSize) {
    return KCompressionDevice_QBaseSkipData((KCompressionDevice*)self, maxSize);
}

void k_compressiondevice_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    KCompressionDevice_OnSkipData((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_event(void* self, void* event) {
    return KCompressionDevice_Event((KCompressionDevice*)self, (QEvent*)event);
}

bool k_compressiondevice_qbase_event(void* self, void* event) {
    return KCompressionDevice_QBaseEvent((KCompressionDevice*)self, (QEvent*)event);
}

void k_compressiondevice_on_event(void* self, bool (*callback)(void*, void*)) {
    KCompressionDevice_OnEvent((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_event_filter(void* self, void* watched, void* event) {
    return KCompressionDevice_EventFilter((KCompressionDevice*)self, (QObject*)watched, (QEvent*)event);
}

bool k_compressiondevice_qbase_event_filter(void* self, void* watched, void* event) {
    return KCompressionDevice_QBaseEventFilter((KCompressionDevice*)self, (QObject*)watched, (QEvent*)event);
}

void k_compressiondevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCompressionDevice_OnEventFilter((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_timer_event(void* self, void* event) {
    KCompressionDevice_TimerEvent((KCompressionDevice*)self, (QTimerEvent*)event);
}

void k_compressiondevice_qbase_timer_event(void* self, void* event) {
    KCompressionDevice_QBaseTimerEvent((KCompressionDevice*)self, (QTimerEvent*)event);
}

void k_compressiondevice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCompressionDevice_OnTimerEvent((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_child_event(void* self, void* event) {
    KCompressionDevice_ChildEvent((KCompressionDevice*)self, (QChildEvent*)event);
}

void k_compressiondevice_qbase_child_event(void* self, void* event) {
    KCompressionDevice_QBaseChildEvent((KCompressionDevice*)self, (QChildEvent*)event);
}

void k_compressiondevice_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCompressionDevice_OnChildEvent((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_custom_event(void* self, void* event) {
    KCompressionDevice_CustomEvent((KCompressionDevice*)self, (QEvent*)event);
}

void k_compressiondevice_qbase_custom_event(void* self, void* event) {
    KCompressionDevice_QBaseCustomEvent((KCompressionDevice*)self, (QEvent*)event);
}

void k_compressiondevice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCompressionDevice_OnCustomEvent((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_connect_notify(void* self, void* signal) {
    KCompressionDevice_ConnectNotify((KCompressionDevice*)self, (QMetaMethod*)signal);
}

void k_compressiondevice_qbase_connect_notify(void* self, void* signal) {
    KCompressionDevice_QBaseConnectNotify((KCompressionDevice*)self, (QMetaMethod*)signal);
}

void k_compressiondevice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCompressionDevice_OnConnectNotify((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_disconnect_notify(void* self, void* signal) {
    KCompressionDevice_DisconnectNotify((KCompressionDevice*)self, (QMetaMethod*)signal);
}

void k_compressiondevice_qbase_disconnect_notify(void* self, void* signal) {
    KCompressionDevice_QBaseDisconnectNotify((KCompressionDevice*)self, (QMetaMethod*)signal);
}

void k_compressiondevice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCompressionDevice_OnDisconnectNotify((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_set_open_mode(void* self, int32_t openMode) {
    KCompressionDevice_SetOpenMode((KCompressionDevice*)self, openMode);
}

void k_compressiondevice_qbase_set_open_mode(void* self, int32_t openMode) {
    KCompressionDevice_QBaseSetOpenMode((KCompressionDevice*)self, openMode);
}

void k_compressiondevice_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    KCompressionDevice_OnSetOpenMode((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_set_error_string(void* self, const char* errorString) {
    KCompressionDevice_SetErrorString((KCompressionDevice*)self, qstring(errorString));
}

void k_compressiondevice_qbase_set_error_string(void* self, const char* errorString) {
    KCompressionDevice_QBaseSetErrorString((KCompressionDevice*)self, qstring(errorString));
}

void k_compressiondevice_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KCompressionDevice_OnSetErrorString((KCompressionDevice*)self, (intptr_t)callback);
}

QObject* k_compressiondevice_sender(void* self) {
    return KCompressionDevice_Sender((KCompressionDevice*)self);
}

QObject* k_compressiondevice_qbase_sender(void* self) {
    return KCompressionDevice_QBaseSender((KCompressionDevice*)self);
}

void k_compressiondevice_on_sender(void* self, QObject* (*callback)()) {
    KCompressionDevice_OnSender((KCompressionDevice*)self, (intptr_t)callback);
}

int32_t k_compressiondevice_sender_signal_index(void* self) {
    return KCompressionDevice_SenderSignalIndex((KCompressionDevice*)self);
}

int32_t k_compressiondevice_qbase_sender_signal_index(void* self) {
    return KCompressionDevice_QBaseSenderSignalIndex((KCompressionDevice*)self);
}

void k_compressiondevice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCompressionDevice_OnSenderSignalIndex((KCompressionDevice*)self, (intptr_t)callback);
}

int32_t k_compressiondevice_receivers(void* self, const char* signal) {
    return KCompressionDevice_Receivers((KCompressionDevice*)self, signal);
}

int32_t k_compressiondevice_qbase_receivers(void* self, const char* signal) {
    return KCompressionDevice_QBaseReceivers((KCompressionDevice*)self, signal);
}

void k_compressiondevice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCompressionDevice_OnReceivers((KCompressionDevice*)self, (intptr_t)callback);
}

bool k_compressiondevice_is_signal_connected(void* self, void* signal) {
    return KCompressionDevice_IsSignalConnected((KCompressionDevice*)self, (QMetaMethod*)signal);
}

bool k_compressiondevice_qbase_is_signal_connected(void* self, void* signal) {
    return KCompressionDevice_QBaseIsSignalConnected((KCompressionDevice*)self, (QMetaMethod*)signal);
}

void k_compressiondevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCompressionDevice_OnIsSignalConnected((KCompressionDevice*)self, (intptr_t)callback);
}

void k_compressiondevice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_compressiondevice_delete(void* self) {
    KCompressionDevice_Delete((KCompressionDevice*)(self));
}
