#include "libqcoreevent.hpp"
#include "libqfiledevice.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqfile.hpp"
#include "libqfile.h"

QFile* q_file_new() {
    return QFile_new();
}

QFile* q_file_new2(const char* name) {
    return QFile_new2(qstring(name));
}

QFile* q_file_new3(void* parent) {
    return QFile_new3((QObject*)parent);
}

QFile* q_file_new4(const char* name, void* parent) {
    return QFile_new4(qstring(name), (QObject*)parent);
}

const QMetaObject* q_file_meta_object(void* self) {
    return QFile_MetaObject((QFile*)self);
}

void* q_file_metacast(void* self, const char* param1) {
    return QFile_Metacast((QFile*)self, param1);
}

int32_t q_file_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFile_Metacall((QFile*)self, param1, param2, param3);
}

void q_file_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFile_OnMetacall((QFile*)self, (intptr_t)callback);
}

int32_t q_file_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFile_QBaseMetacall((QFile*)self, param1, param2, param3);
}

const char* q_file_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_file_file_name(void* self) {
    libqt_string _str = QFile_FileName((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_file_on_file_name(void* self, const char* (*callback)()) {
    QFile_OnFileName((QFile*)self, (intptr_t)callback);
}

const char* q_file_qbase_file_name(void* self) {
    libqt_string _str = QFile_QBaseFileName((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_file_set_file_name(void* self, const char* name) {
    QFile_SetFileName((QFile*)self, qstring(name));
}

char* q_file_encode_name(const char* fileName) {
    libqt_string _str = QFile_EncodeName(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_file_decode_name(const char* localFileName) {
    libqt_string _str = QFile_DecodeName(qstring(localFileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_file_decode_name2(const char* localFileName) {
    libqt_string _str = QFile_DecodeName2(localFileName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_file_exists(void* self) {
    return QFile_Exists((QFile*)self);
}

bool q_file_exists2(const char* fileName) {
    return QFile_Exists2(qstring(fileName));
}

const char* q_file_sym_link_target(void* self) {
    libqt_string _str = QFile_SymLinkTarget((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_file_sym_link_target2(const char* fileName) {
    libqt_string _str = QFile_SymLinkTarget2(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_file_remove(void* self) {
    return QFile_Remove((QFile*)self);
}

bool q_file_remove2(const char* fileName) {
    return QFile_Remove2(qstring(fileName));
}

bool q_file_move_to_trash(void* self) {
    return QFile_MoveToTrash((QFile*)self);
}

bool q_file_move_to_trash2(const char* fileName) {
    return QFile_MoveToTrash2(qstring(fileName));
}

bool q_file_rename(void* self, const char* newName) {
    return QFile_Rename((QFile*)self, qstring(newName));
}

bool q_file_rename2(const char* oldName, const char* newName) {
    return QFile_Rename2(qstring(oldName), qstring(newName));
}

bool q_file_link(void* self, const char* newName) {
    return QFile_Link((QFile*)self, qstring(newName));
}

bool q_file_link2(const char* fileName, const char* newName) {
    return QFile_Link2(qstring(fileName), qstring(newName));
}

bool q_file_copy(void* self, const char* newName) {
    return QFile_Copy((QFile*)self, qstring(newName));
}

bool q_file_copy2(const char* fileName, const char* newName) {
    return QFile_Copy2(qstring(fileName), qstring(newName));
}

bool q_file_open(void* self, int32_t flags) {
    return QFile_Open((QFile*)self, flags);
}

void q_file_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QFile_OnOpen((QFile*)self, (intptr_t)callback);
}

bool q_file_qbase_open(void* self, int32_t flags) {
    return QFile_QBaseOpen((QFile*)self, flags);
}

bool q_file_open2(void* self, int32_t flags, int32_t permissions) {
    return QFile_Open2((QFile*)self, flags, permissions);
}

bool q_file_open4(void* self, int fd, int32_t ioFlags) {
    return QFile_Open4((QFile*)self, fd, ioFlags);
}

long long q_file_size(void* self) {
    return QFile_Size((QFile*)self);
}

void q_file_on_size(void* self, long long (*callback)()) {
    QFile_OnSize((QFile*)self, (intptr_t)callback);
}

long long q_file_qbase_size(void* self) {
    return QFile_QBaseSize((QFile*)self);
}

bool q_file_resize(void* self, long long sz) {
    return QFile_Resize((QFile*)self, sz);
}

void q_file_on_resize(void* self, bool (*callback)(void*, long long)) {
    QFile_OnResize((QFile*)self, (intptr_t)callback);
}

bool q_file_qbase_resize(void* self, long long sz) {
    return QFile_QBaseResize((QFile*)self, sz);
}

bool q_file_resize2(const char* filename, long long sz) {
    return QFile_Resize2(qstring(filename), sz);
}

int32_t q_file_permissions(void* self) {
    return QFile_Permissions((QFile*)self);
}

void q_file_on_permissions(void* self, int32_t (*callback)()) {
    QFile_OnPermissions((QFile*)self, (intptr_t)callback);
}

int32_t q_file_qbase_permissions(void* self) {
    return QFile_QBasePermissions((QFile*)self);
}

int32_t q_file_permissions2(const char* filename) {
    return QFile_Permissions2(qstring(filename));
}

bool q_file_set_permissions(void* self, int32_t permissionSpec) {
    return QFile_SetPermissions((QFile*)self, permissionSpec);
}

void q_file_on_set_permissions(void* self, bool (*callback)(void*, int32_t)) {
    QFile_OnSetPermissions((QFile*)self, (intptr_t)callback);
}

bool q_file_qbase_set_permissions(void* self, int32_t permissionSpec) {
    return QFile_QBaseSetPermissions((QFile*)self, permissionSpec);
}

bool q_file_set_permissions2(const char* filename, int32_t permissionSpec) {
    return QFile_SetPermissions2(qstring(filename), permissionSpec);
}

const char* q_file_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_file_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_file_open33(void* self, int fd, int32_t ioFlags, int32_t handleFlags) {
    return QFile_Open33((QFile*)self, fd, ioFlags, handleFlags);
}

int32_t q_file_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

void q_file_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

int32_t q_file_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

bool q_file_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

unsigned char* q_file_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

bool q_file_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

QDateTime* q_file_file_time(void* self, int32_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

bool q_file_set_file_time(void* self, void* newDate, int32_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

unsigned char* q_file_map3(void* self, long long offset, long long size, int32_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

int32_t q_file_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_file_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_file_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_file_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_file_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_file_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_file_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_file_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_file_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_file_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_file_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_file_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_file_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_file_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_file_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_file_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_file_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_file_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_file_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_file_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_file_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_file_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_file_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_file_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_file_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_file_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_file_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_file_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_file_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_file_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_file_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_file_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_file_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_file_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_file_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_file_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_file_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_file_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_file_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_file_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_file_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_file_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_file_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_file_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_file_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_file_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_file_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_file_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_file_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_file_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_file_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_file_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_file_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_file_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_file_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_file_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_file_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_file_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_file_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_file_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_file_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_file_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_file_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_file_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_file_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_file_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_file_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_file_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_file_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_file_dynamic_property_names");
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

QBindingStorage* q_file_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_file_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_file_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_file_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_file_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_file_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_file_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_file_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_file_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_file_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_file_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_file_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_file_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_file_close(void* self) {
    QFile_Close((QFile*)self);
}

void q_file_qbase_close(void* self) {
    QFile_QBaseClose((QFile*)self);
}

void q_file_on_close(void* self, void (*callback)()) {
    QFile_OnClose((QFile*)self, (intptr_t)callback);
}

bool q_file_is_sequential(void* self) {
    return QFile_IsSequential((QFile*)self);
}

bool q_file_qbase_is_sequential(void* self) {
    return QFile_QBaseIsSequential((QFile*)self);
}

void q_file_on_is_sequential(void* self, bool (*callback)()) {
    QFile_OnIsSequential((QFile*)self, (intptr_t)callback);
}

long long q_file_pos(void* self) {
    return QFile_Pos((QFile*)self);
}

long long q_file_qbase_pos(void* self) {
    return QFile_QBasePos((QFile*)self);
}

void q_file_on_pos(void* self, long long (*callback)()) {
    QFile_OnPos((QFile*)self, (intptr_t)callback);
}

bool q_file_seek(void* self, long long offset) {
    return QFile_Seek((QFile*)self, offset);
}

bool q_file_qbase_seek(void* self, long long offset) {
    return QFile_QBaseSeek((QFile*)self, offset);
}

void q_file_on_seek(void* self, bool (*callback)(void*, long long)) {
    QFile_OnSeek((QFile*)self, (intptr_t)callback);
}

bool q_file_at_end(void* self) {
    return QFile_AtEnd((QFile*)self);
}

bool q_file_qbase_at_end(void* self) {
    return QFile_QBaseAtEnd((QFile*)self);
}

void q_file_on_at_end(void* self, bool (*callback)()) {
    QFile_OnAtEnd((QFile*)self, (intptr_t)callback);
}

long long q_file_read_data(void* self, char* data, long long maxlen) {
    return QFile_ReadData((QFile*)self, data, maxlen);
}

long long q_file_qbase_read_data(void* self, char* data, long long maxlen) {
    return QFile_QBaseReadData((QFile*)self, data, maxlen);
}

void q_file_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QFile_OnReadData((QFile*)self, (intptr_t)callback);
}

long long q_file_write_data(void* self, const char* data, long long lenVal) {
    return QFile_WriteData((QFile*)self, data, lenVal);
}

long long q_file_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QFile_QBaseWriteData((QFile*)self, data, lenVal);
}

void q_file_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QFile_OnWriteData((QFile*)self, (intptr_t)callback);
}

long long q_file_read_line_data(void* self, char* data, long long maxlen) {
    return QFile_ReadLineData((QFile*)self, data, maxlen);
}

long long q_file_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QFile_QBaseReadLineData((QFile*)self, data, maxlen);
}

void q_file_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QFile_OnReadLineData((QFile*)self, (intptr_t)callback);
}

bool q_file_reset(void* self) {
    return QFile_Reset((QFile*)self);
}

bool q_file_qbase_reset(void* self) {
    return QFile_QBaseReset((QFile*)self);
}

void q_file_on_reset(void* self, bool (*callback)()) {
    QFile_OnReset((QFile*)self, (intptr_t)callback);
}

long long q_file_bytes_available(void* self) {
    return QFile_BytesAvailable((QFile*)self);
}

long long q_file_qbase_bytes_available(void* self) {
    return QFile_QBaseBytesAvailable((QFile*)self);
}

void q_file_on_bytes_available(void* self, long long (*callback)()) {
    QFile_OnBytesAvailable((QFile*)self, (intptr_t)callback);
}

long long q_file_bytes_to_write(void* self) {
    return QFile_BytesToWrite((QFile*)self);
}

long long q_file_qbase_bytes_to_write(void* self) {
    return QFile_QBaseBytesToWrite((QFile*)self);
}

void q_file_on_bytes_to_write(void* self, long long (*callback)()) {
    QFile_OnBytesToWrite((QFile*)self, (intptr_t)callback);
}

bool q_file_can_read_line(void* self) {
    return QFile_CanReadLine((QFile*)self);
}

bool q_file_qbase_can_read_line(void* self) {
    return QFile_QBaseCanReadLine((QFile*)self);
}

void q_file_on_can_read_line(void* self, bool (*callback)()) {
    QFile_OnCanReadLine((QFile*)self, (intptr_t)callback);
}

bool q_file_wait_for_ready_read(void* self, int msecs) {
    return QFile_WaitForReadyRead((QFile*)self, msecs);
}

bool q_file_qbase_wait_for_ready_read(void* self, int msecs) {
    return QFile_QBaseWaitForReadyRead((QFile*)self, msecs);
}

void q_file_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QFile_OnWaitForReadyRead((QFile*)self, (intptr_t)callback);
}

bool q_file_wait_for_bytes_written(void* self, int msecs) {
    return QFile_WaitForBytesWritten((QFile*)self, msecs);
}

bool q_file_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QFile_QBaseWaitForBytesWritten((QFile*)self, msecs);
}

void q_file_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QFile_OnWaitForBytesWritten((QFile*)self, (intptr_t)callback);
}

long long q_file_skip_data(void* self, long long maxSize) {
    return QFile_SkipData((QFile*)self, maxSize);
}

long long q_file_qbase_skip_data(void* self, long long maxSize) {
    return QFile_QBaseSkipData((QFile*)self, maxSize);
}

void q_file_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QFile_OnSkipData((QFile*)self, (intptr_t)callback);
}

bool q_file_event(void* self, void* event) {
    return QFile_Event((QFile*)self, (QEvent*)event);
}

bool q_file_qbase_event(void* self, void* event) {
    return QFile_QBaseEvent((QFile*)self, (QEvent*)event);
}

void q_file_on_event(void* self, bool (*callback)(void*, void*)) {
    QFile_OnEvent((QFile*)self, (intptr_t)callback);
}

bool q_file_event_filter(void* self, void* watched, void* event) {
    return QFile_EventFilter((QFile*)self, (QObject*)watched, (QEvent*)event);
}

bool q_file_qbase_event_filter(void* self, void* watched, void* event) {
    return QFile_QBaseEventFilter((QFile*)self, (QObject*)watched, (QEvent*)event);
}

void q_file_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFile_OnEventFilter((QFile*)self, (intptr_t)callback);
}

void q_file_timer_event(void* self, void* event) {
    QFile_TimerEvent((QFile*)self, (QTimerEvent*)event);
}

void q_file_qbase_timer_event(void* self, void* event) {
    QFile_QBaseTimerEvent((QFile*)self, (QTimerEvent*)event);
}

void q_file_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFile_OnTimerEvent((QFile*)self, (intptr_t)callback);
}

void q_file_child_event(void* self, void* event) {
    QFile_ChildEvent((QFile*)self, (QChildEvent*)event);
}

void q_file_qbase_child_event(void* self, void* event) {
    QFile_QBaseChildEvent((QFile*)self, (QChildEvent*)event);
}

void q_file_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFile_OnChildEvent((QFile*)self, (intptr_t)callback);
}

void q_file_custom_event(void* self, void* event) {
    QFile_CustomEvent((QFile*)self, (QEvent*)event);
}

void q_file_qbase_custom_event(void* self, void* event) {
    QFile_QBaseCustomEvent((QFile*)self, (QEvent*)event);
}

void q_file_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFile_OnCustomEvent((QFile*)self, (intptr_t)callback);
}

void q_file_connect_notify(void* self, void* signal) {
    QFile_ConnectNotify((QFile*)self, (QMetaMethod*)signal);
}

void q_file_qbase_connect_notify(void* self, void* signal) {
    QFile_QBaseConnectNotify((QFile*)self, (QMetaMethod*)signal);
}

void q_file_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFile_OnConnectNotify((QFile*)self, (intptr_t)callback);
}

void q_file_disconnect_notify(void* self, void* signal) {
    QFile_DisconnectNotify((QFile*)self, (QMetaMethod*)signal);
}

void q_file_qbase_disconnect_notify(void* self, void* signal) {
    QFile_QBaseDisconnectNotify((QFile*)self, (QMetaMethod*)signal);
}

void q_file_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFile_OnDisconnectNotify((QFile*)self, (intptr_t)callback);
}

void q_file_set_open_mode(void* self, int32_t openMode) {
    QFile_SetOpenMode((QFile*)self, openMode);
}

void q_file_qbase_set_open_mode(void* self, int32_t openMode) {
    QFile_QBaseSetOpenMode((QFile*)self, openMode);
}

void q_file_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QFile_OnSetOpenMode((QFile*)self, (intptr_t)callback);
}

void q_file_set_error_string(void* self, const char* errorString) {
    QFile_SetErrorString((QFile*)self, qstring(errorString));
}

void q_file_qbase_set_error_string(void* self, const char* errorString) {
    QFile_QBaseSetErrorString((QFile*)self, qstring(errorString));
}

void q_file_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QFile_OnSetErrorString((QFile*)self, (intptr_t)callback);
}

QObject* q_file_sender(void* self) {
    return QFile_Sender((QFile*)self);
}

QObject* q_file_qbase_sender(void* self) {
    return QFile_QBaseSender((QFile*)self);
}

void q_file_on_sender(void* self, QObject* (*callback)()) {
    QFile_OnSender((QFile*)self, (intptr_t)callback);
}

int32_t q_file_sender_signal_index(void* self) {
    return QFile_SenderSignalIndex((QFile*)self);
}

int32_t q_file_qbase_sender_signal_index(void* self) {
    return QFile_QBaseSenderSignalIndex((QFile*)self);
}

void q_file_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFile_OnSenderSignalIndex((QFile*)self, (intptr_t)callback);
}

int32_t q_file_receivers(void* self, const char* signal) {
    return QFile_Receivers((QFile*)self, signal);
}

int32_t q_file_qbase_receivers(void* self, const char* signal) {
    return QFile_QBaseReceivers((QFile*)self, signal);
}

void q_file_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFile_OnReceivers((QFile*)self, (intptr_t)callback);
}

bool q_file_is_signal_connected(void* self, void* signal) {
    return QFile_IsSignalConnected((QFile*)self, (QMetaMethod*)signal);
}

bool q_file_qbase_is_signal_connected(void* self, void* signal) {
    return QFile_QBaseIsSignalConnected((QFile*)self, (QMetaMethod*)signal);
}

void q_file_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFile_OnIsSignalConnected((QFile*)self, (intptr_t)callback);
}

void q_file_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_file_delete(void* self) {
    QFile_Delete((QFile*)(self));
}
