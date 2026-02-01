#include "libqabstractnetworkcache.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqnetworkdiskcache.hpp"
#include "libqnetworkdiskcache.h"

QNetworkDiskCache* q_networkdiskcache_new() {
    return QNetworkDiskCache_new();
}

QNetworkDiskCache* q_networkdiskcache_new2(void* parent) {
    return QNetworkDiskCache_new2((QObject*)parent);
}

const QMetaObject* q_networkdiskcache_meta_object(void* self) {
    return QNetworkDiskCache_MetaObject((QNetworkDiskCache*)self);
}

void q_networkdiskcache_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QNetworkDiskCache_OnMetaObject((QNetworkDiskCache*)self, (intptr_t)callback);
}

const QMetaObject* q_networkdiskcache_qbase_meta_object(void* self) {
    return QNetworkDiskCache_QBaseMetaObject((QNetworkDiskCache*)self);
}

void* q_networkdiskcache_metacast(void* self, const char* param1) {
    return QNetworkDiskCache_Metacast((QNetworkDiskCache*)self, param1);
}

void q_networkdiskcache_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QNetworkDiskCache_OnMetacast((QNetworkDiskCache*)self, (intptr_t)callback);
}

void* q_networkdiskcache_qbase_metacast(void* self, const char* param1) {
    return QNetworkDiskCache_QBaseMetacast((QNetworkDiskCache*)self, param1);
}

int32_t q_networkdiskcache_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNetworkDiskCache_Metacall((QNetworkDiskCache*)self, param1, param2, param3);
}

void q_networkdiskcache_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QNetworkDiskCache_OnMetacall((QNetworkDiskCache*)self, (intptr_t)callback);
}

int32_t q_networkdiskcache_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNetworkDiskCache_QBaseMetacall((QNetworkDiskCache*)self, param1, param2, param3);
}

const char* q_networkdiskcache_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkdiskcache_cache_directory(void* self) {
    libqt_string _str = QNetworkDiskCache_CacheDirectory((QNetworkDiskCache*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkdiskcache_set_cache_directory(void* self, const char* cacheDir) {
    QNetworkDiskCache_SetCacheDirectory((QNetworkDiskCache*)self, qstring(cacheDir));
}

long long q_networkdiskcache_maximum_cache_size(void* self) {
    return QNetworkDiskCache_MaximumCacheSize((QNetworkDiskCache*)self);
}

void q_networkdiskcache_set_maximum_cache_size(void* self, long long size) {
    QNetworkDiskCache_SetMaximumCacheSize((QNetworkDiskCache*)self, size);
}

long long q_networkdiskcache_cache_size(void* self) {
    return QNetworkDiskCache_CacheSize((QNetworkDiskCache*)self);
}

void q_networkdiskcache_on_cache_size(void* self, long long (*callback)()) {
    QNetworkDiskCache_OnCacheSize((QNetworkDiskCache*)self, (intptr_t)callback);
}

long long q_networkdiskcache_qbase_cache_size(void* self) {
    return QNetworkDiskCache_QBaseCacheSize((QNetworkDiskCache*)self);
}

QNetworkCacheMetaData* q_networkdiskcache_meta_data(void* self, void* url) {
    return QNetworkDiskCache_MetaData((QNetworkDiskCache*)self, (QUrl*)url);
}

void q_networkdiskcache_on_meta_data(void* self, QNetworkCacheMetaData* (*callback)(void*, void*)) {
    QNetworkDiskCache_OnMetaData((QNetworkDiskCache*)self, (intptr_t)callback);
}

QNetworkCacheMetaData* q_networkdiskcache_qbase_meta_data(void* self, void* url) {
    return QNetworkDiskCache_QBaseMetaData((QNetworkDiskCache*)self, (QUrl*)url);
}

void q_networkdiskcache_update_meta_data(void* self, void* metaData) {
    QNetworkDiskCache_UpdateMetaData((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

void q_networkdiskcache_on_update_meta_data(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnUpdateMetaData((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_qbase_update_meta_data(void* self, void* metaData) {
    QNetworkDiskCache_QBaseUpdateMetaData((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

QIODevice* q_networkdiskcache_data(void* self, void* url) {
    return QNetworkDiskCache_Data((QNetworkDiskCache*)self, (QUrl*)url);
}

void q_networkdiskcache_on_data(void* self, QIODevice* (*callback)(void*, void*)) {
    QNetworkDiskCache_OnData((QNetworkDiskCache*)self, (intptr_t)callback);
}

QIODevice* q_networkdiskcache_qbase_data(void* self, void* url) {
    return QNetworkDiskCache_QBaseData((QNetworkDiskCache*)self, (QUrl*)url);
}

bool q_networkdiskcache_remove(void* self, void* url) {
    return QNetworkDiskCache_Remove((QNetworkDiskCache*)self, (QUrl*)url);
}

void q_networkdiskcache_on_remove(void* self, bool (*callback)(void*, void*)) {
    QNetworkDiskCache_OnRemove((QNetworkDiskCache*)self, (intptr_t)callback);
}

bool q_networkdiskcache_qbase_remove(void* self, void* url) {
    return QNetworkDiskCache_QBaseRemove((QNetworkDiskCache*)self, (QUrl*)url);
}

QIODevice* q_networkdiskcache_prepare(void* self, void* metaData) {
    return QNetworkDiskCache_Prepare((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

void q_networkdiskcache_on_prepare(void* self, QIODevice* (*callback)(void*, void*)) {
    QNetworkDiskCache_OnPrepare((QNetworkDiskCache*)self, (intptr_t)callback);
}

QIODevice* q_networkdiskcache_qbase_prepare(void* self, void* metaData) {
    return QNetworkDiskCache_QBasePrepare((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

void q_networkdiskcache_insert(void* self, void* device) {
    QNetworkDiskCache_Insert((QNetworkDiskCache*)self, (QIODevice*)device);
}

void q_networkdiskcache_on_insert(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnInsert((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_qbase_insert(void* self, void* device) {
    QNetworkDiskCache_QBaseInsert((QNetworkDiskCache*)self, (QIODevice*)device);
}

QNetworkCacheMetaData* q_networkdiskcache_file_meta_data(void* self, const char* fileName) {
    return QNetworkDiskCache_FileMetaData((QNetworkDiskCache*)self, qstring(fileName));
}

void q_networkdiskcache_clear(void* self) {
    QNetworkDiskCache_Clear((QNetworkDiskCache*)self);
}

void q_networkdiskcache_on_clear(void* self, void (*callback)()) {
    QNetworkDiskCache_OnClear((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_qbase_clear(void* self) {
    QNetworkDiskCache_QBaseClear((QNetworkDiskCache*)self);
}

long long q_networkdiskcache_expire(void* self) {
    return QNetworkDiskCache_Expire((QNetworkDiskCache*)self);
}

void q_networkdiskcache_on_expire(void* self, long long (*callback)()) {
    QNetworkDiskCache_OnExpire((QNetworkDiskCache*)self, (intptr_t)callback);
}

long long q_networkdiskcache_qbase_expire(void* self) {
    return QNetworkDiskCache_QBaseExpire((QNetworkDiskCache*)self);
}

const char* q_networkdiskcache_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkdiskcache_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkdiskcache_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkdiskcache_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_networkdiskcache_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_networkdiskcache_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_networkdiskcache_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_networkdiskcache_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_networkdiskcache_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_networkdiskcache_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_networkdiskcache_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_networkdiskcache_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_networkdiskcache_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_networkdiskcache_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_networkdiskcache_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_networkdiskcache_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_networkdiskcache_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_networkdiskcache_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_networkdiskcache_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_networkdiskcache_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_networkdiskcache_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_networkdiskcache_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_networkdiskcache_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_networkdiskcache_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_networkdiskcache_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_networkdiskcache_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_networkdiskcache_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_networkdiskcache_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_networkdiskcache_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_networkdiskcache_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_networkdiskcache_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_networkdiskcache_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkdiskcache_dynamic_property_names\n");
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

QBindingStorage* q_networkdiskcache_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_networkdiskcache_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_networkdiskcache_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_networkdiskcache_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_networkdiskcache_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_networkdiskcache_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_networkdiskcache_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_networkdiskcache_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_networkdiskcache_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_networkdiskcache_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_networkdiskcache_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_networkdiskcache_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_networkdiskcache_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_networkdiskcache_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_networkdiskcache_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_networkdiskcache_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_networkdiskcache_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_networkdiskcache_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_networkdiskcache_event(void* self, void* event) {
    return QNetworkDiskCache_Event((QNetworkDiskCache*)self, (QEvent*)event);
}

bool q_networkdiskcache_qbase_event(void* self, void* event) {
    return QNetworkDiskCache_QBaseEvent((QNetworkDiskCache*)self, (QEvent*)event);
}

void q_networkdiskcache_on_event(void* self, bool (*callback)(void*, void*)) {
    QNetworkDiskCache_OnEvent((QNetworkDiskCache*)self, (intptr_t)callback);
}

bool q_networkdiskcache_event_filter(void* self, void* watched, void* event) {
    return QNetworkDiskCache_EventFilter((QNetworkDiskCache*)self, (QObject*)watched, (QEvent*)event);
}

bool q_networkdiskcache_qbase_event_filter(void* self, void* watched, void* event) {
    return QNetworkDiskCache_QBaseEventFilter((QNetworkDiskCache*)self, (QObject*)watched, (QEvent*)event);
}

void q_networkdiskcache_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QNetworkDiskCache_OnEventFilter((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_timer_event(void* self, void* event) {
    QNetworkDiskCache_TimerEvent((QNetworkDiskCache*)self, (QTimerEvent*)event);
}

void q_networkdiskcache_qbase_timer_event(void* self, void* event) {
    QNetworkDiskCache_QBaseTimerEvent((QNetworkDiskCache*)self, (QTimerEvent*)event);
}

void q_networkdiskcache_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnTimerEvent((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_child_event(void* self, void* event) {
    QNetworkDiskCache_ChildEvent((QNetworkDiskCache*)self, (QChildEvent*)event);
}

void q_networkdiskcache_qbase_child_event(void* self, void* event) {
    QNetworkDiskCache_QBaseChildEvent((QNetworkDiskCache*)self, (QChildEvent*)event);
}

void q_networkdiskcache_on_child_event(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnChildEvent((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_custom_event(void* self, void* event) {
    QNetworkDiskCache_CustomEvent((QNetworkDiskCache*)self, (QEvent*)event);
}

void q_networkdiskcache_qbase_custom_event(void* self, void* event) {
    QNetworkDiskCache_QBaseCustomEvent((QNetworkDiskCache*)self, (QEvent*)event);
}

void q_networkdiskcache_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnCustomEvent((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_connect_notify(void* self, void* signal) {
    QNetworkDiskCache_ConnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

void q_networkdiskcache_qbase_connect_notify(void* self, void* signal) {
    QNetworkDiskCache_QBaseConnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

void q_networkdiskcache_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnConnectNotify((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_disconnect_notify(void* self, void* signal) {
    QNetworkDiskCache_DisconnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

void q_networkdiskcache_qbase_disconnect_notify(void* self, void* signal) {
    QNetworkDiskCache_QBaseDisconnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

void q_networkdiskcache_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QNetworkDiskCache_OnDisconnectNotify((QNetworkDiskCache*)self, (intptr_t)callback);
}

QObject* q_networkdiskcache_sender(void* self) {
    return QNetworkDiskCache_Sender((QNetworkDiskCache*)self);
}

QObject* q_networkdiskcache_qbase_sender(void* self) {
    return QNetworkDiskCache_QBaseSender((QNetworkDiskCache*)self);
}

void q_networkdiskcache_on_sender(void* self, QObject* (*callback)()) {
    QNetworkDiskCache_OnSender((QNetworkDiskCache*)self, (intptr_t)callback);
}

int32_t q_networkdiskcache_sender_signal_index(void* self) {
    return QNetworkDiskCache_SenderSignalIndex((QNetworkDiskCache*)self);
}

int32_t q_networkdiskcache_qbase_sender_signal_index(void* self) {
    return QNetworkDiskCache_QBaseSenderSignalIndex((QNetworkDiskCache*)self);
}

void q_networkdiskcache_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QNetworkDiskCache_OnSenderSignalIndex((QNetworkDiskCache*)self, (intptr_t)callback);
}

int32_t q_networkdiskcache_receivers(void* self, const char* signal) {
    return QNetworkDiskCache_Receivers((QNetworkDiskCache*)self, signal);
}

int32_t q_networkdiskcache_qbase_receivers(void* self, const char* signal) {
    return QNetworkDiskCache_QBaseReceivers((QNetworkDiskCache*)self, signal);
}

void q_networkdiskcache_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QNetworkDiskCache_OnReceivers((QNetworkDiskCache*)self, (intptr_t)callback);
}

bool q_networkdiskcache_is_signal_connected(void* self, void* signal) {
    return QNetworkDiskCache_IsSignalConnected((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

bool q_networkdiskcache_qbase_is_signal_connected(void* self, void* signal) {
    return QNetworkDiskCache_QBaseIsSignalConnected((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

void q_networkdiskcache_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QNetworkDiskCache_OnIsSignalConnected((QNetworkDiskCache*)self, (intptr_t)callback);
}

void q_networkdiskcache_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_networkdiskcache_delete(void* self) {
    QNetworkDiskCache_Delete((QNetworkDiskCache*)(self));
}
