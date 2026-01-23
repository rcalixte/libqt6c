#include "libqcoreevent.hpp"
#include "libqfile.hpp"
#include "libqfiledevice.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqtemporaryfile.hpp"
#include "libqtemporaryfile.h"

QTemporaryFile* q_temporaryfile_new() {
    return QTemporaryFile_new();
}

QTemporaryFile* q_temporaryfile_new2(const char* templateName) {
    return QTemporaryFile_new2(qstring(templateName));
}

QTemporaryFile* q_temporaryfile_new3(void* parent) {
    return QTemporaryFile_new3((QObject*)parent);
}

QTemporaryFile* q_temporaryfile_new4(const char* templateName, void* parent) {
    return QTemporaryFile_new4(qstring(templateName), (QObject*)parent);
}

const QMetaObject* q_temporaryfile_meta_object(void* self) {
    return QTemporaryFile_MetaObject((QTemporaryFile*)self);
}

void* q_temporaryfile_metacast(void* self, const char* param1) {
    return QTemporaryFile_Metacast((QTemporaryFile*)self, param1);
}

int32_t q_temporaryfile_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTemporaryFile_Metacall((QTemporaryFile*)self, param1, param2, param3);
}

void q_temporaryfile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTemporaryFile_OnMetacall((QTemporaryFile*)self, (intptr_t)callback);
}

int32_t q_temporaryfile_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTemporaryFile_QBaseMetacall((QTemporaryFile*)self, param1, param2, param3);
}

const char* q_temporaryfile_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_temporaryfile_auto_remove(void* self) {
    return QTemporaryFile_AutoRemove((QTemporaryFile*)self);
}

void q_temporaryfile_set_auto_remove(void* self, bool b) {
    QTemporaryFile_SetAutoRemove((QTemporaryFile*)self, b);
}

bool q_temporaryfile_open(void* self) {
    return QTemporaryFile_Open((QTemporaryFile*)self);
}

const char* q_temporaryfile_file_name(void* self) {
    libqt_string _str = QTemporaryFile_FileName((QTemporaryFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporaryfile_on_file_name(void* self, const char* (*callback)()) {
    QTemporaryFile_OnFileName((QTemporaryFile*)self, (intptr_t)callback);
}

const char* q_temporaryfile_qbase_file_name(void* self) {
    libqt_string _str = QTemporaryFile_QBaseFileName((QTemporaryFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporaryfile_file_template(void* self) {
    libqt_string _str = QTemporaryFile_FileTemplate((QTemporaryFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporaryfile_set_file_template(void* self, const char* name) {
    QTemporaryFile_SetFileTemplate((QTemporaryFile*)self, qstring(name));
}

bool q_temporaryfile_rename(void* self, const char* newName) {
    return QTemporaryFile_Rename((QTemporaryFile*)self, qstring(newName));
}

QTemporaryFile* q_temporaryfile_create_native_file(const char* fileName) {
    return QTemporaryFile_CreateNativeFile(qstring(fileName));
}

QTemporaryFile* q_temporaryfile_create_native_file2(void* file) {
    return QTemporaryFile_CreateNativeFile2((QFile*)file);
}

bool q_temporaryfile_open2(void* self, int32_t flags) {
    return QTemporaryFile_Open2((QTemporaryFile*)self, flags);
}

void q_temporaryfile_on_open2(void* self, bool (*callback)(void*, int32_t)) {
    QTemporaryFile_OnOpen2((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_qbase_open2(void* self, int32_t flags) {
    return QTemporaryFile_QBaseOpen2((QTemporaryFile*)self, flags);
}

const char* q_temporaryfile_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporaryfile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporaryfile_set_file_name(void* self, const char* name) {
    QFile_SetFileName((QFile*)self, qstring(name));
}

char* q_temporaryfile_encode_name(const char* fileName) {
    libqt_string _str = QFile_EncodeName(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporaryfile_decode_name(const char* localFileName) {
    libqt_string _str = QFile_DecodeName(qstring(localFileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporaryfile_decode_name2(const char* localFileName) {
    libqt_string _str = QFile_DecodeName2(localFileName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_temporaryfile_exists(void* self) {
    return QFile_Exists((QFile*)self);
}

bool q_temporaryfile_exists2(const char* fileName) {
    return QFile_Exists2(qstring(fileName));
}

const char* q_temporaryfile_sym_link_target(void* self) {
    libqt_string _str = QFile_SymLinkTarget((QFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporaryfile_sym_link_target2(const char* fileName) {
    libqt_string _str = QFile_SymLinkTarget2(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_temporaryfile_remove(void* self) {
    return QFile_Remove((QFile*)self);
}

bool q_temporaryfile_remove2(const char* fileName) {
    return QFile_Remove2(qstring(fileName));
}

bool q_temporaryfile_move_to_trash(void* self) {
    return QFile_MoveToTrash((QFile*)self);
}

bool q_temporaryfile_move_to_trash2(const char* fileName) {
    return QFile_MoveToTrash2(qstring(fileName));
}

bool q_temporaryfile_rename2(const char* oldName, const char* newName) {
    return QFile_Rename2(qstring(oldName), qstring(newName));
}

bool q_temporaryfile_link(void* self, const char* newName) {
    return QFile_Link((QFile*)self, qstring(newName));
}

bool q_temporaryfile_link2(const char* fileName, const char* newName) {
    return QFile_Link2(qstring(fileName), qstring(newName));
}

bool q_temporaryfile_copy(void* self, const char* newName) {
    return QFile_Copy((QFile*)self, qstring(newName));
}

bool q_temporaryfile_copy2(const char* fileName, const char* newName) {
    return QFile_Copy2(qstring(fileName), qstring(newName));
}

bool q_temporaryfile_open4(void* self, int fd, int32_t ioFlags) {
    return QFile_Open4((QFile*)self, fd, ioFlags);
}

bool q_temporaryfile_resize2(const char* filename, long long sz) {
    return QFile_Resize2(qstring(filename), sz);
}

int32_t q_temporaryfile_permissions2(const char* filename) {
    return QFile_Permissions2(qstring(filename));
}

bool q_temporaryfile_set_permissions2(const char* filename, int32_t permissionSpec) {
    return QFile_SetPermissions2(qstring(filename), permissionSpec);
}

bool q_temporaryfile_open33(void* self, int fd, int32_t ioFlags, int32_t handleFlags) {
    return QFile_Open33((QFile*)self, fd, ioFlags, handleFlags);
}

int32_t q_temporaryfile_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

void q_temporaryfile_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

int32_t q_temporaryfile_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

bool q_temporaryfile_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

unsigned char* q_temporaryfile_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

bool q_temporaryfile_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

QDateTime* q_temporaryfile_file_time(void* self, int32_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

bool q_temporaryfile_set_file_time(void* self, void* newDate, int32_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

unsigned char* q_temporaryfile_map3(void* self, long long offset, long long size, int32_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

int32_t q_temporaryfile_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_temporaryfile_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_temporaryfile_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_temporaryfile_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_temporaryfile_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_temporaryfile_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_temporaryfile_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_temporaryfile_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_temporaryfile_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_temporaryfile_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_temporaryfile_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_temporaryfile_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_temporaryfile_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_temporaryfile_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_temporaryfile_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_temporaryfile_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_temporaryfile_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporaryfile_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_temporaryfile_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_temporaryfile_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_temporaryfile_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_temporaryfile_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_temporaryfile_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_temporaryfile_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_temporaryfile_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_temporaryfile_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_temporaryfile_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_temporaryfile_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_temporaryfile_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_temporaryfile_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_temporaryfile_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporaryfile_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_temporaryfile_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_temporaryfile_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_temporaryfile_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_temporaryfile_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_temporaryfile_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_temporaryfile_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_temporaryfile_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_temporaryfile_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_temporaryfile_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_temporaryfile_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_temporaryfile_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_temporaryfile_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporaryfile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporaryfile_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_temporaryfile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_temporaryfile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_temporaryfile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_temporaryfile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_temporaryfile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_temporaryfile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_temporaryfile_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_temporaryfile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_temporaryfile_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_temporaryfile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_temporaryfile_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_temporaryfile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_temporaryfile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_temporaryfile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_temporaryfile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_temporaryfile_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_temporaryfile_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_temporaryfile_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_temporaryfile_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_temporaryfile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_temporaryfile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_temporaryfile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_temporaryfile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_temporaryfile_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_temporaryfile_dynamic_property_names\n");
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

QBindingStorage* q_temporaryfile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_temporaryfile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_temporaryfile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_temporaryfile_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_temporaryfile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_temporaryfile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_temporaryfile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_temporaryfile_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_temporaryfile_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_temporaryfile_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_temporaryfile_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_temporaryfile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_temporaryfile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_temporaryfile_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

long long q_temporaryfile_size(void* self) {
    return QTemporaryFile_Size((QTemporaryFile*)self);
}

long long q_temporaryfile_qbase_size(void* self) {
    return QTemporaryFile_QBaseSize((QTemporaryFile*)self);
}

void q_temporaryfile_on_size(void* self, long long (*callback)()) {
    QTemporaryFile_OnSize((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_resize(void* self, long long sz) {
    return QTemporaryFile_Resize((QTemporaryFile*)self, sz);
}

bool q_temporaryfile_qbase_resize(void* self, long long sz) {
    return QTemporaryFile_QBaseResize((QTemporaryFile*)self, sz);
}

void q_temporaryfile_on_resize(void* self, bool (*callback)(void*, long long)) {
    QTemporaryFile_OnResize((QTemporaryFile*)self, (intptr_t)callback);
}

int32_t q_temporaryfile_permissions(void* self) {
    return QTemporaryFile_Permissions((QTemporaryFile*)self);
}

int32_t q_temporaryfile_qbase_permissions(void* self) {
    return QTemporaryFile_QBasePermissions((QTemporaryFile*)self);
}

void q_temporaryfile_on_permissions(void* self, int32_t (*callback)()) {
    QTemporaryFile_OnPermissions((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_set_permissions(void* self, int32_t permissionSpec) {
    return QTemporaryFile_SetPermissions((QTemporaryFile*)self, permissionSpec);
}

bool q_temporaryfile_qbase_set_permissions(void* self, int32_t permissionSpec) {
    return QTemporaryFile_QBaseSetPermissions((QTemporaryFile*)self, permissionSpec);
}

void q_temporaryfile_on_set_permissions(void* self, bool (*callback)(void*, int32_t)) {
    QTemporaryFile_OnSetPermissions((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_close(void* self) {
    QTemporaryFile_Close((QTemporaryFile*)self);
}

void q_temporaryfile_qbase_close(void* self) {
    QTemporaryFile_QBaseClose((QTemporaryFile*)self);
}

void q_temporaryfile_on_close(void* self, void (*callback)()) {
    QTemporaryFile_OnClose((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_is_sequential(void* self) {
    return QTemporaryFile_IsSequential((QTemporaryFile*)self);
}

bool q_temporaryfile_qbase_is_sequential(void* self) {
    return QTemporaryFile_QBaseIsSequential((QTemporaryFile*)self);
}

void q_temporaryfile_on_is_sequential(void* self, bool (*callback)()) {
    QTemporaryFile_OnIsSequential((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_pos(void* self) {
    return QTemporaryFile_Pos((QTemporaryFile*)self);
}

long long q_temporaryfile_qbase_pos(void* self) {
    return QTemporaryFile_QBasePos((QTemporaryFile*)self);
}

void q_temporaryfile_on_pos(void* self, long long (*callback)()) {
    QTemporaryFile_OnPos((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_seek(void* self, long long offset) {
    return QTemporaryFile_Seek((QTemporaryFile*)self, offset);
}

bool q_temporaryfile_qbase_seek(void* self, long long offset) {
    return QTemporaryFile_QBaseSeek((QTemporaryFile*)self, offset);
}

void q_temporaryfile_on_seek(void* self, bool (*callback)(void*, long long)) {
    QTemporaryFile_OnSeek((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_at_end(void* self) {
    return QTemporaryFile_AtEnd((QTemporaryFile*)self);
}

bool q_temporaryfile_qbase_at_end(void* self) {
    return QTemporaryFile_QBaseAtEnd((QTemporaryFile*)self);
}

void q_temporaryfile_on_at_end(void* self, bool (*callback)()) {
    QTemporaryFile_OnAtEnd((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_read_data(void* self, char* data, long long maxlen) {
    return QTemporaryFile_ReadData((QTemporaryFile*)self, data, maxlen);
}

long long q_temporaryfile_qbase_read_data(void* self, char* data, long long maxlen) {
    return QTemporaryFile_QBaseReadData((QTemporaryFile*)self, data, maxlen);
}

void q_temporaryfile_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QTemporaryFile_OnReadData((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_write_data(void* self, const char* data, long long lenVal) {
    return QTemporaryFile_WriteData((QTemporaryFile*)self, data, lenVal);
}

long long q_temporaryfile_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QTemporaryFile_QBaseWriteData((QTemporaryFile*)self, data, lenVal);
}

void q_temporaryfile_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QTemporaryFile_OnWriteData((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_read_line_data(void* self, char* data, long long maxlen) {
    return QTemporaryFile_ReadLineData((QTemporaryFile*)self, data, maxlen);
}

long long q_temporaryfile_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QTemporaryFile_QBaseReadLineData((QTemporaryFile*)self, data, maxlen);
}

void q_temporaryfile_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QTemporaryFile_OnReadLineData((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_reset(void* self) {
    return QTemporaryFile_Reset((QTemporaryFile*)self);
}

bool q_temporaryfile_qbase_reset(void* self) {
    return QTemporaryFile_QBaseReset((QTemporaryFile*)self);
}

void q_temporaryfile_on_reset(void* self, bool (*callback)()) {
    QTemporaryFile_OnReset((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_bytes_available(void* self) {
    return QTemporaryFile_BytesAvailable((QTemporaryFile*)self);
}

long long q_temporaryfile_qbase_bytes_available(void* self) {
    return QTemporaryFile_QBaseBytesAvailable((QTemporaryFile*)self);
}

void q_temporaryfile_on_bytes_available(void* self, long long (*callback)()) {
    QTemporaryFile_OnBytesAvailable((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_bytes_to_write(void* self) {
    return QTemporaryFile_BytesToWrite((QTemporaryFile*)self);
}

long long q_temporaryfile_qbase_bytes_to_write(void* self) {
    return QTemporaryFile_QBaseBytesToWrite((QTemporaryFile*)self);
}

void q_temporaryfile_on_bytes_to_write(void* self, long long (*callback)()) {
    QTemporaryFile_OnBytesToWrite((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_can_read_line(void* self) {
    return QTemporaryFile_CanReadLine((QTemporaryFile*)self);
}

bool q_temporaryfile_qbase_can_read_line(void* self) {
    return QTemporaryFile_QBaseCanReadLine((QTemporaryFile*)self);
}

void q_temporaryfile_on_can_read_line(void* self, bool (*callback)()) {
    QTemporaryFile_OnCanReadLine((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_wait_for_ready_read(void* self, int msecs) {
    return QTemporaryFile_WaitForReadyRead((QTemporaryFile*)self, msecs);
}

bool q_temporaryfile_qbase_wait_for_ready_read(void* self, int msecs) {
    return QTemporaryFile_QBaseWaitForReadyRead((QTemporaryFile*)self, msecs);
}

void q_temporaryfile_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QTemporaryFile_OnWaitForReadyRead((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_wait_for_bytes_written(void* self, int msecs) {
    return QTemporaryFile_WaitForBytesWritten((QTemporaryFile*)self, msecs);
}

bool q_temporaryfile_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QTemporaryFile_QBaseWaitForBytesWritten((QTemporaryFile*)self, msecs);
}

void q_temporaryfile_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QTemporaryFile_OnWaitForBytesWritten((QTemporaryFile*)self, (intptr_t)callback);
}

long long q_temporaryfile_skip_data(void* self, long long maxSize) {
    return QTemporaryFile_SkipData((QTemporaryFile*)self, maxSize);
}

long long q_temporaryfile_qbase_skip_data(void* self, long long maxSize) {
    return QTemporaryFile_QBaseSkipData((QTemporaryFile*)self, maxSize);
}

void q_temporaryfile_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QTemporaryFile_OnSkipData((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_event(void* self, void* event) {
    return QTemporaryFile_Event((QTemporaryFile*)self, (QEvent*)event);
}

bool q_temporaryfile_qbase_event(void* self, void* event) {
    return QTemporaryFile_QBaseEvent((QTemporaryFile*)self, (QEvent*)event);
}

void q_temporaryfile_on_event(void* self, bool (*callback)(void*, void*)) {
    QTemporaryFile_OnEvent((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_event_filter(void* self, void* watched, void* event) {
    return QTemporaryFile_EventFilter((QTemporaryFile*)self, (QObject*)watched, (QEvent*)event);
}

bool q_temporaryfile_qbase_event_filter(void* self, void* watched, void* event) {
    return QTemporaryFile_QBaseEventFilter((QTemporaryFile*)self, (QObject*)watched, (QEvent*)event);
}

void q_temporaryfile_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTemporaryFile_OnEventFilter((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_timer_event(void* self, void* event) {
    QTemporaryFile_TimerEvent((QTemporaryFile*)self, (QTimerEvent*)event);
}

void q_temporaryfile_qbase_timer_event(void* self, void* event) {
    QTemporaryFile_QBaseTimerEvent((QTemporaryFile*)self, (QTimerEvent*)event);
}

void q_temporaryfile_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTemporaryFile_OnTimerEvent((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_child_event(void* self, void* event) {
    QTemporaryFile_ChildEvent((QTemporaryFile*)self, (QChildEvent*)event);
}

void q_temporaryfile_qbase_child_event(void* self, void* event) {
    QTemporaryFile_QBaseChildEvent((QTemporaryFile*)self, (QChildEvent*)event);
}

void q_temporaryfile_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTemporaryFile_OnChildEvent((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_custom_event(void* self, void* event) {
    QTemporaryFile_CustomEvent((QTemporaryFile*)self, (QEvent*)event);
}

void q_temporaryfile_qbase_custom_event(void* self, void* event) {
    QTemporaryFile_QBaseCustomEvent((QTemporaryFile*)self, (QEvent*)event);
}

void q_temporaryfile_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTemporaryFile_OnCustomEvent((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_connect_notify(void* self, void* signal) {
    QTemporaryFile_ConnectNotify((QTemporaryFile*)self, (QMetaMethod*)signal);
}

void q_temporaryfile_qbase_connect_notify(void* self, void* signal) {
    QTemporaryFile_QBaseConnectNotify((QTemporaryFile*)self, (QMetaMethod*)signal);
}

void q_temporaryfile_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTemporaryFile_OnConnectNotify((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_disconnect_notify(void* self, void* signal) {
    QTemporaryFile_DisconnectNotify((QTemporaryFile*)self, (QMetaMethod*)signal);
}

void q_temporaryfile_qbase_disconnect_notify(void* self, void* signal) {
    QTemporaryFile_QBaseDisconnectNotify((QTemporaryFile*)self, (QMetaMethod*)signal);
}

void q_temporaryfile_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTemporaryFile_OnDisconnectNotify((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_set_open_mode(void* self, int32_t openMode) {
    QTemporaryFile_SetOpenMode((QTemporaryFile*)self, openMode);
}

void q_temporaryfile_qbase_set_open_mode(void* self, int32_t openMode) {
    QTemporaryFile_QBaseSetOpenMode((QTemporaryFile*)self, openMode);
}

void q_temporaryfile_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QTemporaryFile_OnSetOpenMode((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_set_error_string(void* self, const char* errorString) {
    QTemporaryFile_SetErrorString((QTemporaryFile*)self, qstring(errorString));
}

void q_temporaryfile_qbase_set_error_string(void* self, const char* errorString) {
    QTemporaryFile_QBaseSetErrorString((QTemporaryFile*)self, qstring(errorString));
}

void q_temporaryfile_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QTemporaryFile_OnSetErrorString((QTemporaryFile*)self, (intptr_t)callback);
}

QObject* q_temporaryfile_sender(void* self) {
    return QTemporaryFile_Sender((QTemporaryFile*)self);
}

QObject* q_temporaryfile_qbase_sender(void* self) {
    return QTemporaryFile_QBaseSender((QTemporaryFile*)self);
}

void q_temporaryfile_on_sender(void* self, QObject* (*callback)()) {
    QTemporaryFile_OnSender((QTemporaryFile*)self, (intptr_t)callback);
}

int32_t q_temporaryfile_sender_signal_index(void* self) {
    return QTemporaryFile_SenderSignalIndex((QTemporaryFile*)self);
}

int32_t q_temporaryfile_qbase_sender_signal_index(void* self) {
    return QTemporaryFile_QBaseSenderSignalIndex((QTemporaryFile*)self);
}

void q_temporaryfile_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTemporaryFile_OnSenderSignalIndex((QTemporaryFile*)self, (intptr_t)callback);
}

int32_t q_temporaryfile_receivers(void* self, const char* signal) {
    return QTemporaryFile_Receivers((QTemporaryFile*)self, signal);
}

int32_t q_temporaryfile_qbase_receivers(void* self, const char* signal) {
    return QTemporaryFile_QBaseReceivers((QTemporaryFile*)self, signal);
}

void q_temporaryfile_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTemporaryFile_OnReceivers((QTemporaryFile*)self, (intptr_t)callback);
}

bool q_temporaryfile_is_signal_connected(void* self, void* signal) {
    return QTemporaryFile_IsSignalConnected((QTemporaryFile*)self, (QMetaMethod*)signal);
}

bool q_temporaryfile_qbase_is_signal_connected(void* self, void* signal) {
    return QTemporaryFile_QBaseIsSignalConnected((QTemporaryFile*)self, (QMetaMethod*)signal);
}

void q_temporaryfile_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTemporaryFile_OnIsSignalConnected((QTemporaryFile*)self, (intptr_t)callback);
}

void q_temporaryfile_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_temporaryfile_delete(void* self) {
    QTemporaryFile_Delete((QTemporaryFile*)(self));
}
