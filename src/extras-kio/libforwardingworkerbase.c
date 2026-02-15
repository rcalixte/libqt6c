#include "libudsentry.hpp"
#include "libworkerbase.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libforwardingworkerbase.hpp"
#include "libforwardingworkerbase.h"

KIO__ForwardingWorkerBase* k_io__forwardingworkerbase_new(char* protocol, char* poolSocket, char* appSocket) {
    return KIO__ForwardingWorkerBase_new(qstring(protocol), qstring(poolSocket), qstring(appSocket));
}

const QMetaObject* k_io__forwardingworkerbase_meta_object(void* self) {
    return KIO__ForwardingWorkerBase_MetaObject((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__ForwardingWorkerBase_OnMetaObject((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

const QMetaObject* k_io__forwardingworkerbase_qbase_meta_object(void* self) {
    return KIO__ForwardingWorkerBase_QBaseMetaObject((KIO__ForwardingWorkerBase*)self);
}

void* k_io__forwardingworkerbase_metacast(void* self, const char* param1) {
    return KIO__ForwardingWorkerBase_Metacast((KIO__ForwardingWorkerBase*)self, param1);
}

void k_io__forwardingworkerbase_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__ForwardingWorkerBase_OnMetacast((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void* k_io__forwardingworkerbase_qbase_metacast(void* self, const char* param1) {
    return KIO__ForwardingWorkerBase_QBaseMetacast((KIO__ForwardingWorkerBase*)self, param1);
}

int32_t k_io__forwardingworkerbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ForwardingWorkerBase_Metacall((KIO__ForwardingWorkerBase*)self, param1, param2, param3);
}

void k_io__forwardingworkerbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__ForwardingWorkerBase_OnMetacall((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

int32_t k_io__forwardingworkerbase_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ForwardingWorkerBase_QBaseMetacall((KIO__ForwardingWorkerBase*)self, param1, param2, param3);
}

const char* k_io__forwardingworkerbase_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__WorkerResult* k_io__forwardingworkerbase_get(void* self, void* url) {
    return KIO__ForwardingWorkerBase_Get((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

void k_io__forwardingworkerbase_on_get(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnGet((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_get(void* self, void* url) {
    return KIO__ForwardingWorkerBase_QBaseGet((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__forwardingworkerbase_put(void* self, void* url, int permissions, int32_t flags) {
    return KIO__ForwardingWorkerBase_Put((KIO__ForwardingWorkerBase*)self, (QUrl*)url, permissions, flags);
}

void k_io__forwardingworkerbase_on_put(void* self, KIO__WorkerResult* (*callback)(void*, void*, int, int32_t)) {
    KIO__ForwardingWorkerBase_OnPut((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_put(void* self, void* url, int permissions, int32_t flags) {
    return KIO__ForwardingWorkerBase_QBasePut((KIO__ForwardingWorkerBase*)self, (QUrl*)url, permissions, flags);
}

KIO__WorkerResult* k_io__forwardingworkerbase_stat(void* self, void* url) {
    return KIO__ForwardingWorkerBase_Stat((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

void k_io__forwardingworkerbase_on_stat(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnStat((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_stat(void* self, void* url) {
    return KIO__ForwardingWorkerBase_QBaseStat((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__forwardingworkerbase_mimetype(void* self, void* url) {
    return KIO__ForwardingWorkerBase_Mimetype((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

void k_io__forwardingworkerbase_on_mimetype(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnMimetype((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_mimetype(void* self, void* url) {
    return KIO__ForwardingWorkerBase_QBaseMimetype((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__forwardingworkerbase_list_dir(void* self, void* url) {
    return KIO__ForwardingWorkerBase_ListDir((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

void k_io__forwardingworkerbase_on_list_dir(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnListDir((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_list_dir(void* self, void* url) {
    return KIO__ForwardingWorkerBase_QBaseListDir((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__forwardingworkerbase_mkdir(void* self, void* url, int permissions) {
    return KIO__ForwardingWorkerBase_Mkdir((KIO__ForwardingWorkerBase*)self, (QUrl*)url, permissions);
}

void k_io__forwardingworkerbase_on_mkdir(void* self, KIO__WorkerResult* (*callback)(void*, void*, int)) {
    KIO__ForwardingWorkerBase_OnMkdir((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_mkdir(void* self, void* url, int permissions) {
    return KIO__ForwardingWorkerBase_QBaseMkdir((KIO__ForwardingWorkerBase*)self, (QUrl*)url, permissions);
}

KIO__WorkerResult* k_io__forwardingworkerbase_rename(void* self, void* src, void* dest, int32_t flags) {
    return KIO__ForwardingWorkerBase_Rename((KIO__ForwardingWorkerBase*)self, (QUrl*)src, (QUrl*)dest, flags);
}

void k_io__forwardingworkerbase_on_rename(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int32_t)) {
    KIO__ForwardingWorkerBase_OnRename((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_rename(void* self, void* src, void* dest, int32_t flags) {
    return KIO__ForwardingWorkerBase_QBaseRename((KIO__ForwardingWorkerBase*)self, (QUrl*)src, (QUrl*)dest, flags);
}

KIO__WorkerResult* k_io__forwardingworkerbase_symlink(void* self, const char* target, void* dest, int32_t flags) {
    return KIO__ForwardingWorkerBase_Symlink((KIO__ForwardingWorkerBase*)self, qstring(target), (QUrl*)dest, flags);
}

void k_io__forwardingworkerbase_on_symlink(void* self, KIO__WorkerResult* (*callback)(void*, const char*, void*, int32_t)) {
    KIO__ForwardingWorkerBase_OnSymlink((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_symlink(void* self, const char* target, void* dest, int32_t flags) {
    return KIO__ForwardingWorkerBase_QBaseSymlink((KIO__ForwardingWorkerBase*)self, qstring(target), (QUrl*)dest, flags);
}

KIO__WorkerResult* k_io__forwardingworkerbase_chmod(void* self, void* url, int permissions) {
    return KIO__ForwardingWorkerBase_Chmod((KIO__ForwardingWorkerBase*)self, (QUrl*)url, permissions);
}

void k_io__forwardingworkerbase_on_chmod(void* self, KIO__WorkerResult* (*callback)(void*, void*, int)) {
    KIO__ForwardingWorkerBase_OnChmod((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_chmod(void* self, void* url, int permissions) {
    return KIO__ForwardingWorkerBase_QBaseChmod((KIO__ForwardingWorkerBase*)self, (QUrl*)url, permissions);
}

KIO__WorkerResult* k_io__forwardingworkerbase_set_modification_time(void* self, void* url, void* mtime) {
    return KIO__ForwardingWorkerBase_SetModificationTime((KIO__ForwardingWorkerBase*)self, (QUrl*)url, (QDateTime*)mtime);
}

void k_io__forwardingworkerbase_on_set_modification_time(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*)) {
    KIO__ForwardingWorkerBase_OnSetModificationTime((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_set_modification_time(void* self, void* url, void* mtime) {
    return KIO__ForwardingWorkerBase_QBaseSetModificationTime((KIO__ForwardingWorkerBase*)self, (QUrl*)url, (QDateTime*)mtime);
}

KIO__WorkerResult* k_io__forwardingworkerbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags) {
    return KIO__ForwardingWorkerBase_Copy((KIO__ForwardingWorkerBase*)self, (QUrl*)src, (QUrl*)dest, permissions, flags);
}

void k_io__forwardingworkerbase_on_copy(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int, int32_t)) {
    KIO__ForwardingWorkerBase_OnCopy((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags) {
    return KIO__ForwardingWorkerBase_QBaseCopy((KIO__ForwardingWorkerBase*)self, (QUrl*)src, (QUrl*)dest, permissions, flags);
}

KIO__WorkerResult* k_io__forwardingworkerbase_del(void* self, void* url, bool isfile) {
    return KIO__ForwardingWorkerBase_Del((KIO__ForwardingWorkerBase*)self, (QUrl*)url, isfile);
}

void k_io__forwardingworkerbase_on_del(void* self, KIO__WorkerResult* (*callback)(void*, void*, bool)) {
    KIO__ForwardingWorkerBase_OnDel((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_del(void* self, void* url, bool isfile) {
    return KIO__ForwardingWorkerBase_QBaseDel((KIO__ForwardingWorkerBase*)self, (QUrl*)url, isfile);
}

bool k_io__forwardingworkerbase_rewrite_url(void* self, void* url, void* newURL) {
    return KIO__ForwardingWorkerBase_RewriteUrl((KIO__ForwardingWorkerBase*)self, (QUrl*)url, (QUrl*)newURL);
}

void k_io__forwardingworkerbase_on_rewrite_url(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__ForwardingWorkerBase_OnRewriteUrl((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

bool k_io__forwardingworkerbase_qbase_rewrite_url(void* self, void* url, void* newURL) {
    return KIO__ForwardingWorkerBase_QBaseRewriteUrl((KIO__ForwardingWorkerBase*)self, (QUrl*)url, (QUrl*)newURL);
}

void k_io__forwardingworkerbase_adjust_u_d_s_entry(void* self, void* entry, int32_t creationMode) {
    KIO__ForwardingWorkerBase_AdjustUDSEntry((KIO__ForwardingWorkerBase*)self, (KIO__UDSEntry*)entry, creationMode);
}

void k_io__forwardingworkerbase_on_adjust_u_d_s_entry(void* self, void (*callback)(void*, void*, int32_t)) {
    KIO__ForwardingWorkerBase_OnAdjustUDSEntry((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_qbase_adjust_u_d_s_entry(void* self, void* entry, int32_t creationMode) {
    KIO__ForwardingWorkerBase_QBaseAdjustUDSEntry((KIO__ForwardingWorkerBase*)self, (KIO__UDSEntry*)entry, creationMode);
}

QUrl* k_io__forwardingworkerbase_processed_url(void* self) {
    return KIO__ForwardingWorkerBase_ProcessedUrl((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_processed_url(void* self, QUrl* (*callback)()) {
    KIO__ForwardingWorkerBase_OnProcessedUrl((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

QUrl* k_io__forwardingworkerbase_qbase_processed_url(void* self) {
    return KIO__ForwardingWorkerBase_QBaseProcessedUrl((KIO__ForwardingWorkerBase*)self);
}

QUrl* k_io__forwardingworkerbase_requested_url(void* self) {
    return KIO__ForwardingWorkerBase_RequestedUrl((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_requested_url(void* self, QUrl* (*callback)()) {
    KIO__ForwardingWorkerBase_OnRequestedUrl((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

QUrl* k_io__forwardingworkerbase_qbase_requested_url(void* self) {
    return KIO__ForwardingWorkerBase_QBaseRequestedUrl((KIO__ForwardingWorkerBase*)self);
}

const char* k_io__forwardingworkerbase_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__forwardingworkerbase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__forwardingworkerbase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__forwardingworkerbase_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__forwardingworkerbase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__forwardingworkerbase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__forwardingworkerbase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__forwardingworkerbase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__forwardingworkerbase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__forwardingworkerbase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__forwardingworkerbase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__forwardingworkerbase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__forwardingworkerbase_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__forwardingworkerbase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__forwardingworkerbase_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__forwardingworkerbase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__forwardingworkerbase_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__forwardingworkerbase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__forwardingworkerbase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__forwardingworkerbase_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__forwardingworkerbase_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__forwardingworkerbase_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__forwardingworkerbase_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__forwardingworkerbase_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__forwardingworkerbase_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__forwardingworkerbase_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__forwardingworkerbase_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__forwardingworkerbase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__forwardingworkerbase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__forwardingworkerbase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__forwardingworkerbase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__forwardingworkerbase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__forwardingworkerbase_dynamic_property_names\n");
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

QBindingStorage* k_io__forwardingworkerbase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__forwardingworkerbase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__forwardingworkerbase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__forwardingworkerbase_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__forwardingworkerbase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__forwardingworkerbase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__forwardingworkerbase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__forwardingworkerbase_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__forwardingworkerbase_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__forwardingworkerbase_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__forwardingworkerbase_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__forwardingworkerbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__forwardingworkerbase_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__forwardingworkerbase_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__forwardingworkerbase_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__forwardingworkerbase_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__forwardingworkerbase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__forwardingworkerbase_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_exit(void* self) {
    KIO__WorkerBase_Exit((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_dispatch_loop(void* self) {
    KIO__WorkerBase_DispatchLoop((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_data(void* self, char* data) {
    KIO__WorkerBase_Data((KIO__WorkerBase*)self, qstring(data));
}

void k_io__forwardingworkerbase_data_req(void* self) {
    KIO__WorkerBase_DataReq((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_worker_status(void* self, const char* host, bool connected) {
    KIO__WorkerBase_WorkerStatus((KIO__WorkerBase*)self, qstring(host), connected);
}

void k_io__forwardingworkerbase_stat_entry(void* self, void* _entry) {
    KIO__WorkerBase_StatEntry((KIO__WorkerBase*)self, (KIO__UDSEntry*)_entry);
}

void k_io__forwardingworkerbase_list_entries(void* self, libqt_list /* of KIO__UDSEntry* */ _entry) {
    KIO__WorkerBase_ListEntries((KIO__WorkerBase*)self, _entry);
}

bool k_io__forwardingworkerbase_can_resume(void* self, uint64_t offset) {
    return KIO__WorkerBase_CanResume((KIO__WorkerBase*)self, offset);
}

void k_io__forwardingworkerbase_can_resume2(void* self) {
    KIO__WorkerBase_CanResume2((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_total_size(void* self, uint64_t _bytes) {
    KIO__WorkerBase_TotalSize((KIO__WorkerBase*)self, _bytes);
}

void k_io__forwardingworkerbase_processed_size(void* self, uint64_t _bytes) {
    KIO__WorkerBase_ProcessedSize((KIO__WorkerBase*)self, _bytes);
}

void k_io__forwardingworkerbase_position(void* self, uint64_t _pos) {
    KIO__WorkerBase_Position((KIO__WorkerBase*)self, _pos);
}

void k_io__forwardingworkerbase_written(void* self, uint64_t _bytes) {
    KIO__WorkerBase_Written((KIO__WorkerBase*)self, _bytes);
}

void k_io__forwardingworkerbase_truncated(void* self, uint64_t _length) {
    KIO__WorkerBase_Truncated((KIO__WorkerBase*)self, _length);
}

void k_io__forwardingworkerbase_speed(void* self, uint64_t _bytes_per_second) {
    KIO__WorkerBase_Speed((KIO__WorkerBase*)self, _bytes_per_second);
}

void k_io__forwardingworkerbase_redirection(void* self, void* _url) {
    KIO__WorkerBase_Redirection((KIO__WorkerBase*)self, (QUrl*)_url);
}

void k_io__forwardingworkerbase_error_page(void* self) {
    KIO__WorkerBase_ErrorPage((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_mime_type(void* self, const char* _type) {
    KIO__WorkerBase_MimeType((KIO__WorkerBase*)self, qstring(_type));
}

void k_io__forwardingworkerbase_warning(void* self, const char* msg) {
    KIO__WorkerBase_Warning((KIO__WorkerBase*)self, qstring(msg));
}

void k_io__forwardingworkerbase_info_message(void* self, const char* msg) {
    KIO__WorkerBase_InfoMessage((KIO__WorkerBase*)self, qstring(msg));
}

int32_t k_io__forwardingworkerbase_message_box(void* self, int32_t type, const char* text) {
    return KIO__WorkerBase_MessageBox((KIO__WorkerBase*)self, type, qstring(text));
}

int32_t k_io__forwardingworkerbase_message_box2(void* self, const char* text, int32_t type) {
    return KIO__WorkerBase_MessageBox2((KIO__WorkerBase*)self, qstring(text), type);
}

int32_t k_io__forwardingworkerbase_ssl_error(void* self, libqt_map /* of const char* to QVariant* */ sslData) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map sslData_ret;
    sslData_ret.len = sslData.len;
    sslData_ret.keys = (libqt_string*)malloc(sslData_ret.len * sizeof(libqt_string));
    if (sslData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_io__forwardingworkerbase_ssl_error\n");
        abort();
    }
    sslData_ret.values = (QVariant**)malloc(sslData_ret.len * sizeof(QVariant*));
    if (sslData_ret.values == NULL) {
        free(sslData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_io__forwardingworkerbase_ssl_error\n");
        abort();
    }
    const char** sslData_karr = (const char**)sslData.keys;
    libqt_string* sslData_kdest = (libqt_string*)sslData_ret.keys;
    QVariant** sslData_varr = (QVariant**)sslData.values;
    QVariant** sslData_vdest = (QVariant**)sslData_ret.values;
    for (size_t i = 0; i < sslData_ret.len; ++i) {
        sslData_kdest[i] = qstring(sslData_karr[i]);
        sslData_vdest[i] = sslData_varr[i];
    }
    int32_t _out = KIO__WorkerBase_SslError((KIO__WorkerBase*)self, sslData_ret);
    free(sslData_ret.keys);
    free(sslData_ret.values);
    return _out;
}

void k_io__forwardingworkerbase_set_meta_data(void* self, const char* key, const char* value) {
    KIO__WorkerBase_SetMetaData((KIO__WorkerBase*)self, qstring(key), qstring(value));
}

bool k_io__forwardingworkerbase_has_meta_data(void* self, const char* key) {
    return KIO__WorkerBase_HasMetaData((KIO__WorkerBase*)self, qstring(key));
}

const char* k_io__forwardingworkerbase_meta_data(void* self, const char* key) {
    libqt_string _str = KIO__WorkerBase_MetaData((KIO__WorkerBase*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__MetaData* k_io__forwardingworkerbase_all_meta_data(void* self) {
    return KIO__WorkerBase_AllMetaData((KIO__WorkerBase*)self);
}

libqt_map /* of const char* to QVariant* */ k_io__forwardingworkerbase_map_config(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = KIO__WorkerBase_MapConfig((KIO__WorkerBase*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_io__forwardingworkerbase_map_config\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_io__forwardingworkerbase_map_config\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

bool k_io__forwardingworkerbase_config_value(void* self, const char* key, bool defaultValue) {
    return KIO__WorkerBase_ConfigValue((KIO__WorkerBase*)self, qstring(key), defaultValue);
}

int32_t k_io__forwardingworkerbase_config_value2(void* self, const char* key, int defaultValue) {
    return KIO__WorkerBase_ConfigValue2((KIO__WorkerBase*)self, qstring(key), defaultValue);
}

const char* k_io__forwardingworkerbase_config_value3(void* self, const char* key) {
    libqt_string _str = KIO__WorkerBase_ConfigValue3((KIO__WorkerBase*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigGroup* k_io__forwardingworkerbase_config(void* self) {
    return KIO__WorkerBase_Config((KIO__WorkerBase*)self);
}

KRemoteEncoding* k_io__forwardingworkerbase_remote_encoding(void* self) {
    return KIO__WorkerBase_RemoteEncoding((KIO__WorkerBase*)self);
}

int32_t k_io__forwardingworkerbase_connect_timeout(void* self) {
    return KIO__WorkerBase_ConnectTimeout((KIO__WorkerBase*)self);
}

int32_t k_io__forwardingworkerbase_proxy_connect_timeout(void* self) {
    return KIO__WorkerBase_ProxyConnectTimeout((KIO__WorkerBase*)self);
}

int32_t k_io__forwardingworkerbase_response_timeout(void* self) {
    return KIO__WorkerBase_ResponseTimeout((KIO__WorkerBase*)self);
}

int32_t k_io__forwardingworkerbase_read_timeout(void* self) {
    return KIO__WorkerBase_ReadTimeout((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_set_timeout_special_command(void* self, int timeout) {
    KIO__WorkerBase_SetTimeoutSpecialCommand((KIO__WorkerBase*)self, timeout);
}

int32_t k_io__forwardingworkerbase_read_data(void* self, char* buffer) {
    return KIO__WorkerBase_ReadData((KIO__WorkerBase*)self, qstring(buffer));
}

void k_io__forwardingworkerbase_list_entry(void* self, void* entry) {
    KIO__WorkerBase_ListEntry((KIO__WorkerBase*)self, (KIO__UDSEntry*)entry);
}

void k_io__forwardingworkerbase_connect_worker(void* self, const char* path) {
    KIO__WorkerBase_ConnectWorker((KIO__WorkerBase*)self, qstring(path));
}

void k_io__forwardingworkerbase_disconnect_worker(void* self) {
    KIO__WorkerBase_DisconnectWorker((KIO__WorkerBase*)self);
}

int32_t k_io__forwardingworkerbase_open_password_dialog(void* self, void* info) {
    return KIO__WorkerBase_OpenPasswordDialog((KIO__WorkerBase*)self, (KIO__AuthInfo*)info);
}

bool k_io__forwardingworkerbase_check_cached_authentication(void* self, void* info) {
    return KIO__WorkerBase_CheckCachedAuthentication((KIO__WorkerBase*)self, (KIO__AuthInfo*)info);
}

bool k_io__forwardingworkerbase_cache_authentication(void* self, void* info) {
    return KIO__WorkerBase_CacheAuthentication((KIO__WorkerBase*)self, (KIO__AuthInfo*)info);
}

int32_t k_io__forwardingworkerbase_wait_for_answer(void* self, int expected1, int expected2, char* data) {
    return KIO__WorkerBase_WaitForAnswer((KIO__WorkerBase*)self, expected1, expected2, qstring(data));
}

void k_io__forwardingworkerbase_send_meta_data(void* self) {
    KIO__WorkerBase_SendMetaData((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_send_and_keep_meta_data(void* self) {
    KIO__WorkerBase_SendAndKeepMetaData((KIO__WorkerBase*)self);
}

bool k_io__forwardingworkerbase_was_killed(void* self) {
    return KIO__WorkerBase_WasKilled((KIO__WorkerBase*)self);
}

void k_io__forwardingworkerbase_lookup_host(void* self, const char* host) {
    KIO__WorkerBase_LookupHost((KIO__WorkerBase*)self, qstring(host));
}

int32_t k_io__forwardingworkerbase_wait_for_host_info(void* self, void* info) {
    return KIO__WorkerBase_WaitForHostInfo((KIO__WorkerBase*)self, (QHostInfo*)info);
}

int32_t k_io__forwardingworkerbase_request_privilege_operation(void* self, const char* operationDetails) {
    return KIO__WorkerBase_RequestPrivilegeOperation((KIO__WorkerBase*)self, qstring(operationDetails));
}

void k_io__forwardingworkerbase_add_temporary_authorization(void* self, const char* action) {
    KIO__WorkerBase_AddTemporaryAuthorization((KIO__WorkerBase*)self, qstring(action));
}

void k_io__forwardingworkerbase_set_incoming_meta_data(void* self, void* metaData) {
    KIO__WorkerBase_SetIncomingMetaData((KIO__WorkerBase*)self, (KIO__MetaData*)metaData);
}

int32_t k_io__forwardingworkerbase_message_box3(void* self, int32_t type, const char* text, const char* title) {
    return KIO__WorkerBase_MessageBox3((KIO__WorkerBase*)self, type, qstring(text), qstring(title));
}

int32_t k_io__forwardingworkerbase_message_box4(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText) {
    return KIO__WorkerBase_MessageBox4((KIO__WorkerBase*)self, type, qstring(text), qstring(title), qstring(primaryActionText));
}

int32_t k_io__forwardingworkerbase_message_box5(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText) {
    return KIO__WorkerBase_MessageBox5((KIO__WorkerBase*)self, type, qstring(text), qstring(title), qstring(primaryActionText), qstring(secondaryActionText));
}

int32_t k_io__forwardingworkerbase_message_box32(void* self, const char* text, int32_t type, const char* title) {
    return KIO__WorkerBase_MessageBox32((KIO__WorkerBase*)self, qstring(text), type, qstring(title));
}

int32_t k_io__forwardingworkerbase_message_box42(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText) {
    return KIO__WorkerBase_MessageBox42((KIO__WorkerBase*)self, qstring(text), type, qstring(title), qstring(primaryActionText));
}

int32_t k_io__forwardingworkerbase_message_box52(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText) {
    return KIO__WorkerBase_MessageBox52((KIO__WorkerBase*)self, qstring(text), type, qstring(title), qstring(primaryActionText), qstring(secondaryActionText));
}

int32_t k_io__forwardingworkerbase_message_box6(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* dontAskAgainName) {
    return KIO__WorkerBase_MessageBox6((KIO__WorkerBase*)self, qstring(text), type, qstring(title), qstring(primaryActionText), qstring(secondaryActionText), qstring(dontAskAgainName));
}

const char* k_io__forwardingworkerbase_config_value22(void* self, const char* key, const char* defaultValue) {
    libqt_string _str = KIO__WorkerBase_ConfigValue22((KIO__WorkerBase*)self, qstring(key), qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__forwardingworkerbase_set_timeout_special_command2(void* self, int timeout, char* data) {
    KIO__WorkerBase_SetTimeoutSpecialCommand2((KIO__WorkerBase*)self, timeout, qstring(data));
}

int32_t k_io__forwardingworkerbase_open_password_dialog2(void* self, void* info, const char* errorMsg) {
    return KIO__WorkerBase_OpenPasswordDialog2((KIO__WorkerBase*)self, (KIO__AuthInfo*)info, qstring(errorMsg));
}

int32_t k_io__forwardingworkerbase_wait_for_answer4(void* self, int expected1, int expected2, char* data, int* pCmd) {
    return KIO__WorkerBase_WaitForAnswer4((KIO__WorkerBase*)self, expected1, expected2, qstring(data), pCmd);
}

bool k_io__forwardingworkerbase_event(void* self, void* event) {
    return KIO__ForwardingWorkerBase_Event((KIO__ForwardingWorkerBase*)self, (QEvent*)event);
}

bool k_io__forwardingworkerbase_qbase_event(void* self, void* event) {
    return KIO__ForwardingWorkerBase_QBaseEvent((KIO__ForwardingWorkerBase*)self, (QEvent*)event);
}

void k_io__forwardingworkerbase_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnEvent((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

bool k_io__forwardingworkerbase_event_filter(void* self, void* watched, void* event) {
    return KIO__ForwardingWorkerBase_EventFilter((KIO__ForwardingWorkerBase*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__forwardingworkerbase_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__ForwardingWorkerBase_QBaseEventFilter((KIO__ForwardingWorkerBase*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__forwardingworkerbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__ForwardingWorkerBase_OnEventFilter((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_timer_event(void* self, void* event) {
    KIO__ForwardingWorkerBase_TimerEvent((KIO__ForwardingWorkerBase*)self, (QTimerEvent*)event);
}

void k_io__forwardingworkerbase_qbase_timer_event(void* self, void* event) {
    KIO__ForwardingWorkerBase_QBaseTimerEvent((KIO__ForwardingWorkerBase*)self, (QTimerEvent*)event);
}

void k_io__forwardingworkerbase_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnTimerEvent((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_child_event(void* self, void* event) {
    KIO__ForwardingWorkerBase_ChildEvent((KIO__ForwardingWorkerBase*)self, (QChildEvent*)event);
}

void k_io__forwardingworkerbase_qbase_child_event(void* self, void* event) {
    KIO__ForwardingWorkerBase_QBaseChildEvent((KIO__ForwardingWorkerBase*)self, (QChildEvent*)event);
}

void k_io__forwardingworkerbase_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnChildEvent((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_custom_event(void* self, void* event) {
    KIO__ForwardingWorkerBase_CustomEvent((KIO__ForwardingWorkerBase*)self, (QEvent*)event);
}

void k_io__forwardingworkerbase_qbase_custom_event(void* self, void* event) {
    KIO__ForwardingWorkerBase_QBaseCustomEvent((KIO__ForwardingWorkerBase*)self, (QEvent*)event);
}

void k_io__forwardingworkerbase_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnCustomEvent((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_connect_notify(void* self, void* signal) {
    KIO__ForwardingWorkerBase_ConnectNotify((KIO__ForwardingWorkerBase*)self, (QMetaMethod*)signal);
}

void k_io__forwardingworkerbase_qbase_connect_notify(void* self, void* signal) {
    KIO__ForwardingWorkerBase_QBaseConnectNotify((KIO__ForwardingWorkerBase*)self, (QMetaMethod*)signal);
}

void k_io__forwardingworkerbase_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnConnectNotify((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_disconnect_notify(void* self, void* signal) {
    KIO__ForwardingWorkerBase_DisconnectNotify((KIO__ForwardingWorkerBase*)self, (QMetaMethod*)signal);
}

void k_io__forwardingworkerbase_qbase_disconnect_notify(void* self, void* signal) {
    KIO__ForwardingWorkerBase_QBaseDisconnectNotify((KIO__ForwardingWorkerBase*)self, (QMetaMethod*)signal);
}

void k_io__forwardingworkerbase_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnDisconnectNotify((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_app_connection_made(void* self) {
    KIO__ForwardingWorkerBase_AppConnectionMade((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_qbase_app_connection_made(void* self) {
    KIO__ForwardingWorkerBase_QBaseAppConnectionMade((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_app_connection_made(void* self, void (*callback)()) {
    KIO__ForwardingWorkerBase_OnAppConnectionMade((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass) {
    KIO__ForwardingWorkerBase_SetHost((KIO__ForwardingWorkerBase*)self, qstring(host), port, qstring(user), qstring(pass));
}

void k_io__forwardingworkerbase_qbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass) {
    KIO__ForwardingWorkerBase_QBaseSetHost((KIO__ForwardingWorkerBase*)self, qstring(host), port, qstring(user), qstring(pass));
}

void k_io__forwardingworkerbase_on_set_host(void* self, void (*callback)(void*, const char*, unsigned short, const char*, const char*)) {
    KIO__ForwardingWorkerBase_OnSetHost((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_open_connection(void* self) {
    return KIO__ForwardingWorkerBase_OpenConnection((KIO__ForwardingWorkerBase*)self);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_open_connection(void* self) {
    return KIO__ForwardingWorkerBase_QBaseOpenConnection((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_open_connection(void* self, KIO__WorkerResult* (*callback)()) {
    KIO__ForwardingWorkerBase_OnOpenConnection((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_close_connection(void* self) {
    KIO__ForwardingWorkerBase_CloseConnection((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_qbase_close_connection(void* self) {
    KIO__ForwardingWorkerBase_QBaseCloseConnection((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_close_connection(void* self, void (*callback)()) {
    KIO__ForwardingWorkerBase_OnCloseConnection((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_open(void* self, void* url, int32_t mode) {
    return KIO__ForwardingWorkerBase_Open((KIO__ForwardingWorkerBase*)self, (QUrl*)url, mode);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_open(void* self, void* url, int32_t mode) {
    return KIO__ForwardingWorkerBase_QBaseOpen((KIO__ForwardingWorkerBase*)self, (QUrl*)url, mode);
}

void k_io__forwardingworkerbase_on_open(void* self, KIO__WorkerResult* (*callback)(void*, void*, int32_t)) {
    KIO__ForwardingWorkerBase_OnOpen((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_read(void* self, uint64_t size) {
    return KIO__ForwardingWorkerBase_Read((KIO__ForwardingWorkerBase*)self, size);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_read(void* self, uint64_t size) {
    return KIO__ForwardingWorkerBase_QBaseRead((KIO__ForwardingWorkerBase*)self, size);
}

void k_io__forwardingworkerbase_on_read(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t)) {
    KIO__ForwardingWorkerBase_OnRead((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_write(void* self, char* data) {
    return KIO__ForwardingWorkerBase_Write((KIO__ForwardingWorkerBase*)self, qstring(data));
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_write(void* self, char* data) {
    return KIO__ForwardingWorkerBase_QBaseWrite((KIO__ForwardingWorkerBase*)self, qstring(data));
}

void k_io__forwardingworkerbase_on_write(void* self, KIO__WorkerResult* (*callback)(void*, libqt_string)) {
    KIO__ForwardingWorkerBase_OnWrite((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_seek(void* self, uint64_t offset) {
    return KIO__ForwardingWorkerBase_Seek((KIO__ForwardingWorkerBase*)self, offset);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_seek(void* self, uint64_t offset) {
    return KIO__ForwardingWorkerBase_QBaseSeek((KIO__ForwardingWorkerBase*)self, offset);
}

void k_io__forwardingworkerbase_on_seek(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t)) {
    KIO__ForwardingWorkerBase_OnSeek((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_truncate(void* self, uint64_t size) {
    return KIO__ForwardingWorkerBase_Truncate((KIO__ForwardingWorkerBase*)self, size);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_truncate(void* self, uint64_t size) {
    return KIO__ForwardingWorkerBase_QBaseTruncate((KIO__ForwardingWorkerBase*)self, size);
}

void k_io__forwardingworkerbase_on_truncate(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t)) {
    KIO__ForwardingWorkerBase_OnTruncate((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_close(void* self) {
    return KIO__ForwardingWorkerBase_Close((KIO__ForwardingWorkerBase*)self);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_close(void* self) {
    return KIO__ForwardingWorkerBase_QBaseClose((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_close(void* self, KIO__WorkerResult* (*callback)()) {
    KIO__ForwardingWorkerBase_OnClose((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_chown(void* self, void* url, const char* owner, const char* group) {
    return KIO__ForwardingWorkerBase_Chown((KIO__ForwardingWorkerBase*)self, (QUrl*)url, qstring(owner), qstring(group));
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_chown(void* self, void* url, const char* owner, const char* group) {
    return KIO__ForwardingWorkerBase_QBaseChown((KIO__ForwardingWorkerBase*)self, (QUrl*)url, qstring(owner), qstring(group));
}

void k_io__forwardingworkerbase_on_chown(void* self, KIO__WorkerResult* (*callback)(void*, void*, const char*, const char*)) {
    KIO__ForwardingWorkerBase_OnChown((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_special(void* self, char* data) {
    return KIO__ForwardingWorkerBase_Special((KIO__ForwardingWorkerBase*)self, qstring(data));
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_special(void* self, char* data) {
    return KIO__ForwardingWorkerBase_QBaseSpecial((KIO__ForwardingWorkerBase*)self, qstring(data));
}

void k_io__forwardingworkerbase_on_special(void* self, KIO__WorkerResult* (*callback)(void*, libqt_string)) {
    KIO__ForwardingWorkerBase_OnSpecial((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__forwardingworkerbase_file_system_free_space(void* self, void* url) {
    return KIO__ForwardingWorkerBase_FileSystemFreeSpace((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__forwardingworkerbase_qbase_file_system_free_space(void* self, void* url) {
    return KIO__ForwardingWorkerBase_QBaseFileSystemFreeSpace((KIO__ForwardingWorkerBase*)self, (QUrl*)url);
}

void k_io__forwardingworkerbase_on_file_system_free_space(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnFileSystemFreeSpace((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_worker_status2(void* self) {
    KIO__ForwardingWorkerBase_WorkerStatus2((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_qbase_worker_status2(void* self) {
    KIO__ForwardingWorkerBase_QBaseWorkerStatus2((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_worker_status2(void* self, void (*callback)()) {
    KIO__ForwardingWorkerBase_OnWorkerStatus2((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_reparse_configuration(void* self) {
    KIO__ForwardingWorkerBase_ReparseConfiguration((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_qbase_reparse_configuration(void* self) {
    KIO__ForwardingWorkerBase_QBaseReparseConfiguration((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_reparse_configuration(void* self, void (*callback)()) {
    KIO__ForwardingWorkerBase_OnReparseConfiguration((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

QObject* k_io__forwardingworkerbase_sender(void* self) {
    return KIO__ForwardingWorkerBase_Sender((KIO__ForwardingWorkerBase*)self);
}

QObject* k_io__forwardingworkerbase_qbase_sender(void* self) {
    return KIO__ForwardingWorkerBase_QBaseSender((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_sender(void* self, QObject* (*callback)()) {
    KIO__ForwardingWorkerBase_OnSender((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

int32_t k_io__forwardingworkerbase_sender_signal_index(void* self) {
    return KIO__ForwardingWorkerBase_SenderSignalIndex((KIO__ForwardingWorkerBase*)self);
}

int32_t k_io__forwardingworkerbase_qbase_sender_signal_index(void* self) {
    return KIO__ForwardingWorkerBase_QBaseSenderSignalIndex((KIO__ForwardingWorkerBase*)self);
}

void k_io__forwardingworkerbase_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__ForwardingWorkerBase_OnSenderSignalIndex((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

int32_t k_io__forwardingworkerbase_receivers(void* self, const char* signal) {
    return KIO__ForwardingWorkerBase_Receivers((KIO__ForwardingWorkerBase*)self, signal);
}

int32_t k_io__forwardingworkerbase_qbase_receivers(void* self, const char* signal) {
    return KIO__ForwardingWorkerBase_QBaseReceivers((KIO__ForwardingWorkerBase*)self, signal);
}

void k_io__forwardingworkerbase_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__ForwardingWorkerBase_OnReceivers((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

bool k_io__forwardingworkerbase_is_signal_connected(void* self, void* signal) {
    return KIO__ForwardingWorkerBase_IsSignalConnected((KIO__ForwardingWorkerBase*)self, (QMetaMethod*)signal);
}

bool k_io__forwardingworkerbase_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__ForwardingWorkerBase_QBaseIsSignalConnected((KIO__ForwardingWorkerBase*)self, (QMetaMethod*)signal);
}

void k_io__forwardingworkerbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__ForwardingWorkerBase_OnIsSignalConnected((KIO__ForwardingWorkerBase*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__forwardingworkerbase_delete(void* self) {
    KIO__ForwardingWorkerBase_Delete((KIO__ForwardingWorkerBase*)(self));
}
