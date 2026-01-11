#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libksycoca.hpp"
#include "libksycoca.h"

KSycoca* k_sycoca_new() {
    return KSycoca_new();
}

const QMetaObject* k_sycoca_meta_object(void* self) {
    return KSycoca_MetaObject((KSycoca*)self);
}

void* k_sycoca_metacast(void* self, const char* param1) {
    return KSycoca_Metacast((KSycoca*)self, param1);
}

int32_t k_sycoca_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSycoca_Metacall((KSycoca*)self, param1, param2, param3);
}

void k_sycoca_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSycoca_OnMetacall((KSycoca*)self, (intptr_t)callback);
}

int32_t k_sycoca_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSycoca_QBaseMetacall((KSycoca*)self, param1, param2, param3);
}

const char* k_sycoca_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KSycoca* k_sycoca_self() {
    return KSycoca_Self();
}

int32_t k_sycoca_version() {
    return KSycoca_Version();
}

bool k_sycoca_is_available() {
    return KSycoca_IsAvailable();
}

QDataStream* k_sycoca_find_entry(void* self, int offset, int32_t* type) {
    return KSycoca_FindEntry((KSycoca*)self, offset, type);
}

QDataStream* k_sycoca_find_factory(void* self, int32_t id) {
    return KSycoca_FindFactory((KSycoca*)self, id);
}

const char* k_sycoca_absolute_file_path() {
    libqt_string _str = KSycoca_AbsoluteFilePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_sycoca_all_resource_dirs(void* self) {
    libqt_list _arr = KSycoca_AllResourceDirs((KSycoca*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sycoca_all_resource_dirs");
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

bool k_sycoca_is_building(void* self) {
    return KSycoca_IsBuilding((KSycoca*)self);
}

void k_sycoca_on_is_building(void* self, bool (*callback)()) {
    KSycoca_OnIsBuilding((KSycoca*)self, (intptr_t)callback);
}

bool k_sycoca_qbase_is_building(void* self) {
    return KSycoca_QBaseIsBuilding((KSycoca*)self);
}

void k_sycoca_disable_auto_rebuild() {
    KSycoca_DisableAutoRebuild();
}

void k_sycoca_flag_error() {
    KSycoca_FlagError();
}

void k_sycoca_ensure_cache_valid(void* self) {
    KSycoca_EnsureCacheValid((KSycoca*)self);
}

void k_sycoca_setup_test_menu() {
    KSycoca_SetupTestMenu();
}

void k_sycoca_database_changed(void* self) {
    KSycoca_DatabaseChanged((KSycoca*)self);
}

void k_sycoca_connect_notify(void* self, void* signal) {
    KSycoca_ConnectNotify((KSycoca*)self, (QMetaMethod*)signal);
}

void k_sycoca_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSycoca_OnConnectNotify((KSycoca*)self, (intptr_t)callback);
}

void k_sycoca_qbase_connect_notify(void* self, void* signal) {
    KSycoca_QBaseConnectNotify((KSycoca*)self, (QMetaMethod*)signal);
}

const char* k_sycoca_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sycoca_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sycoca_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sycoca_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sycoca_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sycoca_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sycoca_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sycoca_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sycoca_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sycoca_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sycoca_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sycoca_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_sycoca_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sycoca_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sycoca_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sycoca_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_sycoca_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sycoca_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sycoca_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sycoca_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sycoca_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sycoca_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_sycoca_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sycoca_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sycoca_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sycoca_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sycoca_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sycoca_dynamic_property_names");
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

QBindingStorage* k_sycoca_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sycoca_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sycoca_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sycoca_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sycoca_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sycoca_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sycoca_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_sycoca_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_sycoca_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_sycoca_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_sycoca_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_sycoca_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sycoca_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sycoca_event(void* self, void* event) {
    return KSycoca_Event((KSycoca*)self, (QEvent*)event);
}

bool k_sycoca_qbase_event(void* self, void* event) {
    return KSycoca_QBaseEvent((KSycoca*)self, (QEvent*)event);
}

void k_sycoca_on_event(void* self, bool (*callback)(void*, void*)) {
    KSycoca_OnEvent((KSycoca*)self, (intptr_t)callback);
}

bool k_sycoca_event_filter(void* self, void* watched, void* event) {
    return KSycoca_EventFilter((KSycoca*)self, (QObject*)watched, (QEvent*)event);
}

bool k_sycoca_qbase_event_filter(void* self, void* watched, void* event) {
    return KSycoca_QBaseEventFilter((KSycoca*)self, (QObject*)watched, (QEvent*)event);
}

void k_sycoca_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSycoca_OnEventFilter((KSycoca*)self, (intptr_t)callback);
}

void k_sycoca_timer_event(void* self, void* event) {
    KSycoca_TimerEvent((KSycoca*)self, (QTimerEvent*)event);
}

void k_sycoca_qbase_timer_event(void* self, void* event) {
    KSycoca_QBaseTimerEvent((KSycoca*)self, (QTimerEvent*)event);
}

void k_sycoca_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSycoca_OnTimerEvent((KSycoca*)self, (intptr_t)callback);
}

void k_sycoca_child_event(void* self, void* event) {
    KSycoca_ChildEvent((KSycoca*)self, (QChildEvent*)event);
}

void k_sycoca_qbase_child_event(void* self, void* event) {
    KSycoca_QBaseChildEvent((KSycoca*)self, (QChildEvent*)event);
}

void k_sycoca_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSycoca_OnChildEvent((KSycoca*)self, (intptr_t)callback);
}

void k_sycoca_custom_event(void* self, void* event) {
    KSycoca_CustomEvent((KSycoca*)self, (QEvent*)event);
}

void k_sycoca_qbase_custom_event(void* self, void* event) {
    KSycoca_QBaseCustomEvent((KSycoca*)self, (QEvent*)event);
}

void k_sycoca_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSycoca_OnCustomEvent((KSycoca*)self, (intptr_t)callback);
}

void k_sycoca_disconnect_notify(void* self, void* signal) {
    KSycoca_DisconnectNotify((KSycoca*)self, (QMetaMethod*)signal);
}

void k_sycoca_qbase_disconnect_notify(void* self, void* signal) {
    KSycoca_QBaseDisconnectNotify((KSycoca*)self, (QMetaMethod*)signal);
}

void k_sycoca_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSycoca_OnDisconnectNotify((KSycoca*)self, (intptr_t)callback);
}

QObject* k_sycoca_sender(void* self) {
    return KSycoca_Sender((KSycoca*)self);
}

QObject* k_sycoca_qbase_sender(void* self) {
    return KSycoca_QBaseSender((KSycoca*)self);
}

void k_sycoca_on_sender(void* self, QObject* (*callback)()) {
    KSycoca_OnSender((KSycoca*)self, (intptr_t)callback);
}

int32_t k_sycoca_sender_signal_index(void* self) {
    return KSycoca_SenderSignalIndex((KSycoca*)self);
}

int32_t k_sycoca_qbase_sender_signal_index(void* self) {
    return KSycoca_QBaseSenderSignalIndex((KSycoca*)self);
}

void k_sycoca_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSycoca_OnSenderSignalIndex((KSycoca*)self, (intptr_t)callback);
}

int32_t k_sycoca_receivers(void* self, const char* signal) {
    return KSycoca_Receivers((KSycoca*)self, signal);
}

int32_t k_sycoca_qbase_receivers(void* self, const char* signal) {
    return KSycoca_QBaseReceivers((KSycoca*)self, signal);
}

void k_sycoca_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSycoca_OnReceivers((KSycoca*)self, (intptr_t)callback);
}

bool k_sycoca_is_signal_connected(void* self, void* signal) {
    return KSycoca_IsSignalConnected((KSycoca*)self, (QMetaMethod*)signal);
}

bool k_sycoca_qbase_is_signal_connected(void* self, void* signal) {
    return KSycoca_QBaseIsSignalConnected((KSycoca*)self, (QMetaMethod*)signal);
}

void k_sycoca_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSycoca_OnIsSignalConnected((KSycoca*)self, (intptr_t)callback);
}

void k_sycoca_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sycoca_delete(void* self) {
    KSycoca_Delete((KSycoca*)(self));
}
