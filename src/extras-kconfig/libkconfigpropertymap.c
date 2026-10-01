#include "libkcoreconfigskeleton.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlpropertymap.hpp"
#include "../libqvariant.hpp"
#include "libkconfigpropertymap.hpp"
#include "libkconfigpropertymap.h"

KConfigPropertyMap* k_configpropertymap_new(void* config) {
    return KConfigPropertyMap_New((KCoreConfigSkeleton*)config);
}

KConfigPropertyMap* k_configpropertymap_new2(void* config, void* parent) {
    return KConfigPropertyMap_New2((KCoreConfigSkeleton*)config, (QObject*)parent);
}

const QMetaObject* k_configpropertymap_meta_object(const void* self) {
    return KConfigPropertyMap_MetaObject((KConfigPropertyMap*)self);
}

void k_configpropertymap_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KConfigPropertyMap_OnMetaObject((KConfigPropertyMap*)self, (intptr_t)callback);
}

const QMetaObject* k_configpropertymap_super_meta_object(const void* self) {
    return KConfigPropertyMap_SuperMetaObject((KConfigPropertyMap*)self);
}

void* k_configpropertymap_metacast(void* self, const char* param1) {
    return KConfigPropertyMap_Metacast((KConfigPropertyMap*)self, param1);
}

void k_configpropertymap_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KConfigPropertyMap_OnMetacast((KConfigPropertyMap*)self, (intptr_t)callback);
}

void* k_configpropertymap_super_metacast(void* self, const char* param1) {
    return KConfigPropertyMap_SuperMetacast((KConfigPropertyMap*)self, param1);
}

int32_t k_configpropertymap_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigPropertyMap_Metacall((KConfigPropertyMap*)self, param1, param2, param3);
}

void k_configpropertymap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigPropertyMap_OnMetacall((KConfigPropertyMap*)self, (intptr_t)callback);
}

int32_t k_configpropertymap_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigPropertyMap_SuperMetacall((KConfigPropertyMap*)self, param1, param2, param3);
}

const char* k_configpropertymap_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_configpropertymap_is_notify(const void* self) {
    return KConfigPropertyMap_IsNotify((KConfigPropertyMap*)self);
}

void k_configpropertymap_set_notify(void* self, bool notify) {
    KConfigPropertyMap_SetNotify((KConfigPropertyMap*)self, notify);
}

bool k_configpropertymap_is_immutable(const void* self, const char* key) {
    return KConfigPropertyMap_IsImmutable((KConfigPropertyMap*)self, qstring(key));
}

void k_configpropertymap_write_config(void* self) {
    KConfigPropertyMap_WriteConfig((KConfigPropertyMap*)self);
}

QVariant* k_configpropertymap_update_value(void* self, const char* key, const void* input) {
    return KConfigPropertyMap_UpdateValue((KConfigPropertyMap*)self, qstring(key), (QVariant*)input);
}

void k_configpropertymap_on_update_value(void* self, QVariant* (*callback)(void*, const char*, const void*)) {
    KConfigPropertyMap_OnUpdateValue((KConfigPropertyMap*)self, (intptr_t)callback);
}

QVariant* k_configpropertymap_super_update_value(void* self, const char* key, const void* input) {
    return KConfigPropertyMap_SuperUpdateValue((KConfigPropertyMap*)self, qstring(key), (QVariant*)input);
}

const char* k_configpropertymap_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configpropertymap_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_configpropertymap_value(const void* self, const char* key) {
    return QQmlPropertyMap_Value((QQmlPropertyMap*)self, qstring(key));
}

void k_configpropertymap_insert(void* self, const char* key, const void* value) {
    QQmlPropertyMap_Insert((QQmlPropertyMap*)self, qstring(key), (QVariant*)value);
}

void k_configpropertymap_insert2(void* self, libqt_map /* of const char* to QVariant* */ values) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map values_ret;
    values_ret.len = values.len;
    values_ret.keys = (libqt_string*)malloc(values_ret.len * sizeof(libqt_string));
    if (values_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_configpropertymap_insert2\n");
        abort();
    }
    values_ret.values = (QVariant**)malloc(values_ret.len * sizeof(QVariant*));
    if (values_ret.values == NULL) {
        free(values_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_configpropertymap_insert2\n");
        abort();
    }
    const char** values_karr = (const char**)values.keys;
    libqt_string* values_kdest = (libqt_string*)values_ret.keys;
    QVariant** values_varr = (QVariant**)values.values;
    QVariant** values_vdest = (QVariant**)values_ret.values;
    for (size_t i = 0; i < values_ret.len; ++i) {
        values_kdest[i] = qstring(values_karr[i]);
        values_vdest[i] = values_varr[i];
    }
    QQmlPropertyMap_Insert2((QQmlPropertyMap*)self, values_ret);
    free(values_ret.keys);
    free(values_ret.values);
}

void k_configpropertymap_clear(void* self, const char* key) {
    QQmlPropertyMap_Clear((QQmlPropertyMap*)self, qstring(key));
}

void k_configpropertymap_freeze(void* self) {
    QQmlPropertyMap_Freeze((QQmlPropertyMap*)self);
}

const char** k_configpropertymap_keys(const void* self) {
    libqt_list _arr = QQmlPropertyMap_Keys((QQmlPropertyMap*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configpropertymap_keys\n");
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

int32_t k_configpropertymap_count(const void* self) {
    return QQmlPropertyMap_Count((QQmlPropertyMap*)self);
}

int32_t k_configpropertymap_size(const void* self) {
    return QQmlPropertyMap_Size((QQmlPropertyMap*)self);
}

bool k_configpropertymap_is_empty(const void* self) {
    return QQmlPropertyMap_IsEmpty((QQmlPropertyMap*)self);
}

bool k_configpropertymap_contains(const void* self, const char* key) {
    return QQmlPropertyMap_Contains((QQmlPropertyMap*)self, qstring(key));
}

QVariant* k_configpropertymap_operator_subscript(void* self, const char* key) {
    return QQmlPropertyMap_OperatorSubscript((QQmlPropertyMap*)self, qstring(key));
}

QVariant* k_configpropertymap_operator_subscript2(const void* self, const char* key) {
    return QQmlPropertyMap_OperatorSubscript2((QQmlPropertyMap*)self, qstring(key));
}

void k_configpropertymap_value_changed(void* self, const char* key, const void* value) {
    QQmlPropertyMap_ValueChanged((QQmlPropertyMap*)self, qstring(key), (QVariant*)value);
}

void k_configpropertymap_on_value_changed(void* self, void (*callback)(void*, const char*, const void*)) {
    QQmlPropertyMap_Connect_ValueChanged((QQmlPropertyMap*)self, (intptr_t)callback);
}

const char* k_configpropertymap_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configpropertymap_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configpropertymap_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configpropertymap_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configpropertymap_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configpropertymap_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configpropertymap_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configpropertymap_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configpropertymap_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configpropertymap_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_configpropertymap_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_configpropertymap_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configpropertymap_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configpropertymap_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configpropertymap_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_configpropertymap_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configpropertymap_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configpropertymap_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_configpropertymap_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configpropertymap_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configpropertymap_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_configpropertymap_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configpropertymap_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_configpropertymap_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_configpropertymap_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_configpropertymap_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configpropertymap_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_configpropertymap_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_configpropertymap_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_configpropertymap_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configpropertymap_dynamic_property_names\n");
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

QBindingStorage* k_configpropertymap_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configpropertymap_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configpropertymap_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configpropertymap_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configpropertymap_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configpropertymap_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configpropertymap_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_configpropertymap_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_configpropertymap_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_configpropertymap_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_configpropertymap_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_configpropertymap_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_configpropertymap_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_configpropertymap_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_configpropertymap_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_configpropertymap_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_configpropertymap_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configpropertymap_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_configpropertymap_event(void* self, void* event) {
    return KConfigPropertyMap_Event((KConfigPropertyMap*)self, (QEvent*)event);
}

bool k_configpropertymap_super_event(void* self, void* event) {
    return KConfigPropertyMap_SuperEvent((KConfigPropertyMap*)self, (QEvent*)event);
}

void k_configpropertymap_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigPropertyMap_OnEvent((KConfigPropertyMap*)self, (intptr_t)callback);
}

bool k_configpropertymap_event_filter(void* self, void* watched, void* event) {
    return KConfigPropertyMap_EventFilter((KConfigPropertyMap*)self, (QObject*)watched, (QEvent*)event);
}

bool k_configpropertymap_super_event_filter(void* self, void* watched, void* event) {
    return KConfigPropertyMap_SuperEventFilter((KConfigPropertyMap*)self, (QObject*)watched, (QEvent*)event);
}

void k_configpropertymap_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigPropertyMap_OnEventFilter((KConfigPropertyMap*)self, (intptr_t)callback);
}

void k_configpropertymap_timer_event(void* self, void* event) {
    KConfigPropertyMap_TimerEvent((KConfigPropertyMap*)self, (QTimerEvent*)event);
}

void k_configpropertymap_super_timer_event(void* self, void* event) {
    KConfigPropertyMap_SuperTimerEvent((KConfigPropertyMap*)self, (QTimerEvent*)event);
}

void k_configpropertymap_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigPropertyMap_OnTimerEvent((KConfigPropertyMap*)self, (intptr_t)callback);
}

void k_configpropertymap_child_event(void* self, void* event) {
    KConfigPropertyMap_ChildEvent((KConfigPropertyMap*)self, (QChildEvent*)event);
}

void k_configpropertymap_super_child_event(void* self, void* event) {
    KConfigPropertyMap_SuperChildEvent((KConfigPropertyMap*)self, (QChildEvent*)event);
}

void k_configpropertymap_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigPropertyMap_OnChildEvent((KConfigPropertyMap*)self, (intptr_t)callback);
}

void k_configpropertymap_custom_event(void* self, void* event) {
    KConfigPropertyMap_CustomEvent((KConfigPropertyMap*)self, (QEvent*)event);
}

void k_configpropertymap_super_custom_event(void* self, void* event) {
    KConfigPropertyMap_SuperCustomEvent((KConfigPropertyMap*)self, (QEvent*)event);
}

void k_configpropertymap_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigPropertyMap_OnCustomEvent((KConfigPropertyMap*)self, (intptr_t)callback);
}

void k_configpropertymap_connect_notify(void* self, const void* signal) {
    KConfigPropertyMap_ConnectNotify((KConfigPropertyMap*)self, (QMetaMethod*)signal);
}

void k_configpropertymap_super_connect_notify(void* self, const void* signal) {
    KConfigPropertyMap_SuperConnectNotify((KConfigPropertyMap*)self, (QMetaMethod*)signal);
}

void k_configpropertymap_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KConfigPropertyMap_OnConnectNotify((KConfigPropertyMap*)self, (intptr_t)callback);
}

void k_configpropertymap_disconnect_notify(void* self, const void* signal) {
    KConfigPropertyMap_DisconnectNotify((KConfigPropertyMap*)self, (QMetaMethod*)signal);
}

void k_configpropertymap_super_disconnect_notify(void* self, const void* signal) {
    KConfigPropertyMap_SuperDisconnectNotify((KConfigPropertyMap*)self, (QMetaMethod*)signal);
}

void k_configpropertymap_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KConfigPropertyMap_OnDisconnectNotify((KConfigPropertyMap*)self, (intptr_t)callback);
}

QObject* k_configpropertymap_sender(const void* self) {
    return KConfigPropertyMap_Sender((KConfigPropertyMap*)self);
}

int32_t k_configpropertymap_sender_signal_index(const void* self) {
    return KConfigPropertyMap_SenderSignalIndex((KConfigPropertyMap*)self);
}

int32_t k_configpropertymap_receivers(const void* self, const char* signal) {
    return KConfigPropertyMap_Receivers((KConfigPropertyMap*)self, signal);
}

bool k_configpropertymap_is_signal_connected(const void* self, const void* signal) {
    return KConfigPropertyMap_IsSignalConnected((KConfigPropertyMap*)self, (QMetaMethod*)signal);
}

void k_configpropertymap_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configpropertymap_delete(void* self) {
    KConfigPropertyMap_Delete((KConfigPropertyMap*)(self));
}
