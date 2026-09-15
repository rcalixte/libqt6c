#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqqmlpropertymap.hpp"
#include "libqqmlpropertymap.h"

QQmlPropertyMap* q_qmlpropertymap_new() {
    return QQmlPropertyMap_New();
}

QQmlPropertyMap* q_qmlpropertymap_new2(void* parent) {
    return QQmlPropertyMap_New2((QObject*)parent);
}

const QMetaObject* q_qmlpropertymap_meta_object(void* self) {
    return QQmlPropertyMap_MetaObject((QQmlPropertyMap*)self);
}

void q_qmlpropertymap_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlPropertyMap_OnMetaObject((QQmlPropertyMap*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlpropertymap_super_meta_object(void* self) {
    return QQmlPropertyMap_SuperMetaObject((QQmlPropertyMap*)self);
}

void* q_qmlpropertymap_metacast(void* self, const char* param1) {
    return QQmlPropertyMap_Metacast((QQmlPropertyMap*)self, param1);
}

void q_qmlpropertymap_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlPropertyMap_OnMetacast((QQmlPropertyMap*)self, (intptr_t)callback);
}

void* q_qmlpropertymap_super_metacast(void* self, const char* param1) {
    return QQmlPropertyMap_SuperMetacast((QQmlPropertyMap*)self, param1);
}

int32_t q_qmlpropertymap_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlPropertyMap_Metacall((QQmlPropertyMap*)self, param1, param2, param3);
}

void q_qmlpropertymap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlPropertyMap_OnMetacall((QQmlPropertyMap*)self, (intptr_t)callback);
}

int32_t q_qmlpropertymap_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlPropertyMap_SuperMetacall((QQmlPropertyMap*)self, param1, param2, param3);
}

const char* q_qmlpropertymap_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_qmlpropertymap_value(void* self, const char* key) {
    return QQmlPropertyMap_Value((QQmlPropertyMap*)self, qstring(key));
}

void q_qmlpropertymap_insert(void* self, const char* key, void* value) {
    QQmlPropertyMap_Insert((QQmlPropertyMap*)self, qstring(key), (QVariant*)value);
}

void q_qmlpropertymap_insert2(void* self, libqt_map /* of const char* to QVariant* */ values) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map values_ret;
    values_ret.len = values.len;
    values_ret.keys = (libqt_string*)malloc(values_ret.len * sizeof(libqt_string));
    if (values_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlpropertymap_insert2\n");
        abort();
    }
    values_ret.values = (QVariant**)malloc(values_ret.len * sizeof(QVariant*));
    if (values_ret.values == NULL) {
        free(values_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlpropertymap_insert2\n");
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

void q_qmlpropertymap_clear(void* self, const char* key) {
    QQmlPropertyMap_Clear((QQmlPropertyMap*)self, qstring(key));
}

void q_qmlpropertymap_freeze(void* self) {
    QQmlPropertyMap_Freeze((QQmlPropertyMap*)self);
}

const char** q_qmlpropertymap_keys(void* self) {
    libqt_list _arr = QQmlPropertyMap_Keys((QQmlPropertyMap*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlpropertymap_keys\n");
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

int32_t q_qmlpropertymap_count(void* self) {
    return QQmlPropertyMap_Count((QQmlPropertyMap*)self);
}

int32_t q_qmlpropertymap_size(void* self) {
    return QQmlPropertyMap_Size((QQmlPropertyMap*)self);
}

bool q_qmlpropertymap_is_empty(void* self) {
    return QQmlPropertyMap_IsEmpty((QQmlPropertyMap*)self);
}

bool q_qmlpropertymap_contains(void* self, const char* key) {
    return QQmlPropertyMap_Contains((QQmlPropertyMap*)self, qstring(key));
}

QVariant* q_qmlpropertymap_operator_subscript(void* self, const char* key) {
    return QQmlPropertyMap_OperatorSubscript((QQmlPropertyMap*)self, qstring(key));
}

QVariant* q_qmlpropertymap_operator_subscript2(void* self, const char* key) {
    return QQmlPropertyMap_OperatorSubscript2((QQmlPropertyMap*)self, qstring(key));
}

void q_qmlpropertymap_value_changed(void* self, const char* key, void* value) {
    QQmlPropertyMap_ValueChanged((QQmlPropertyMap*)self, qstring(key), (QVariant*)value);
}

void q_qmlpropertymap_on_value_changed(void* self, void (*callback)(void*, const char*, void*)) {
    QQmlPropertyMap_Connect_ValueChanged((QQmlPropertyMap*)self, (intptr_t)callback);
}

QVariant* q_qmlpropertymap_update_value(void* self, const char* key, void* input) {
    return QQmlPropertyMap_UpdateValue((QQmlPropertyMap*)self, qstring(key), (QVariant*)input);
}

void q_qmlpropertymap_on_update_value(void* self, QVariant* (*callback)(void*, const char*, void*)) {
    QQmlPropertyMap_OnUpdateValue((QQmlPropertyMap*)self, (intptr_t)callback);
}

QVariant* q_qmlpropertymap_super_update_value(void* self, const char* key, void* input) {
    return QQmlPropertyMap_SuperUpdateValue((QQmlPropertyMap*)self, qstring(key), (QVariant*)input);
}

const char* q_qmlpropertymap_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlpropertymap_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlpropertymap_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlpropertymap_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlpropertymap_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlpropertymap_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlpropertymap_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlpropertymap_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlpropertymap_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlpropertymap_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlpropertymap_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlpropertymap_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlpropertymap_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlpropertymap_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlpropertymap_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlpropertymap_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlpropertymap_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlpropertymap_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlpropertymap_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlpropertymap_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlpropertymap_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlpropertymap_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlpropertymap_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlpropertymap_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlpropertymap_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlpropertymap_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlpropertymap_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlpropertymap_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlpropertymap_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlpropertymap_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlpropertymap_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlpropertymap_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlpropertymap_dynamic_property_names\n");
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

QBindingStorage* q_qmlpropertymap_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlpropertymap_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlpropertymap_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlpropertymap_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlpropertymap_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlpropertymap_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlpropertymap_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlpropertymap_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlpropertymap_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlpropertymap_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlpropertymap_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlpropertymap_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlpropertymap_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlpropertymap_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlpropertymap_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlpropertymap_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlpropertymap_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlpropertymap_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlpropertymap_event(void* self, void* event) {
    return QQmlPropertyMap_Event((QQmlPropertyMap*)self, (QEvent*)event);
}

bool q_qmlpropertymap_super_event(void* self, void* event) {
    return QQmlPropertyMap_SuperEvent((QQmlPropertyMap*)self, (QEvent*)event);
}

void q_qmlpropertymap_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlPropertyMap_OnEvent((QQmlPropertyMap*)self, (intptr_t)callback);
}

bool q_qmlpropertymap_event_filter(void* self, void* watched, void* event) {
    return QQmlPropertyMap_EventFilter((QQmlPropertyMap*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlpropertymap_super_event_filter(void* self, void* watched, void* event) {
    return QQmlPropertyMap_SuperEventFilter((QQmlPropertyMap*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlpropertymap_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlPropertyMap_OnEventFilter((QQmlPropertyMap*)self, (intptr_t)callback);
}

void q_qmlpropertymap_timer_event(void* self, void* event) {
    QQmlPropertyMap_TimerEvent((QQmlPropertyMap*)self, (QTimerEvent*)event);
}

void q_qmlpropertymap_super_timer_event(void* self, void* event) {
    QQmlPropertyMap_SuperTimerEvent((QQmlPropertyMap*)self, (QTimerEvent*)event);
}

void q_qmlpropertymap_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlPropertyMap_OnTimerEvent((QQmlPropertyMap*)self, (intptr_t)callback);
}

void q_qmlpropertymap_child_event(void* self, void* event) {
    QQmlPropertyMap_ChildEvent((QQmlPropertyMap*)self, (QChildEvent*)event);
}

void q_qmlpropertymap_super_child_event(void* self, void* event) {
    QQmlPropertyMap_SuperChildEvent((QQmlPropertyMap*)self, (QChildEvent*)event);
}

void q_qmlpropertymap_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlPropertyMap_OnChildEvent((QQmlPropertyMap*)self, (intptr_t)callback);
}

void q_qmlpropertymap_custom_event(void* self, void* event) {
    QQmlPropertyMap_CustomEvent((QQmlPropertyMap*)self, (QEvent*)event);
}

void q_qmlpropertymap_super_custom_event(void* self, void* event) {
    QQmlPropertyMap_SuperCustomEvent((QQmlPropertyMap*)self, (QEvent*)event);
}

void q_qmlpropertymap_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlPropertyMap_OnCustomEvent((QQmlPropertyMap*)self, (intptr_t)callback);
}

void q_qmlpropertymap_connect_notify(void* self, void* signal) {
    QQmlPropertyMap_ConnectNotify((QQmlPropertyMap*)self, (QMetaMethod*)signal);
}

void q_qmlpropertymap_super_connect_notify(void* self, void* signal) {
    QQmlPropertyMap_SuperConnectNotify((QQmlPropertyMap*)self, (QMetaMethod*)signal);
}

void q_qmlpropertymap_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlPropertyMap_OnConnectNotify((QQmlPropertyMap*)self, (intptr_t)callback);
}

void q_qmlpropertymap_disconnect_notify(void* self, void* signal) {
    QQmlPropertyMap_DisconnectNotify((QQmlPropertyMap*)self, (QMetaMethod*)signal);
}

void q_qmlpropertymap_super_disconnect_notify(void* self, void* signal) {
    QQmlPropertyMap_SuperDisconnectNotify((QQmlPropertyMap*)self, (QMetaMethod*)signal);
}

void q_qmlpropertymap_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlPropertyMap_OnDisconnectNotify((QQmlPropertyMap*)self, (intptr_t)callback);
}

QObject* q_qmlpropertymap_sender(void* self) {
    return QQmlPropertyMap_Sender((QQmlPropertyMap*)self);
}

QObject* q_qmlpropertymap_super_sender(void* self) {
    return QQmlPropertyMap_SuperSender((QQmlPropertyMap*)self);
}

void q_qmlpropertymap_on_sender(void* self, QObject* (*callback)()) {
    QQmlPropertyMap_OnSender((QQmlPropertyMap*)self, (intptr_t)callback);
}

int32_t q_qmlpropertymap_sender_signal_index(void* self) {
    return QQmlPropertyMap_SenderSignalIndex((QQmlPropertyMap*)self);
}

int32_t q_qmlpropertymap_super_sender_signal_index(void* self) {
    return QQmlPropertyMap_SuperSenderSignalIndex((QQmlPropertyMap*)self);
}

void q_qmlpropertymap_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlPropertyMap_OnSenderSignalIndex((QQmlPropertyMap*)self, (intptr_t)callback);
}

int32_t q_qmlpropertymap_receivers(void* self, const char* signal) {
    return QQmlPropertyMap_Receivers((QQmlPropertyMap*)self, signal);
}

int32_t q_qmlpropertymap_super_receivers(void* self, const char* signal) {
    return QQmlPropertyMap_SuperReceivers((QQmlPropertyMap*)self, signal);
}

void q_qmlpropertymap_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlPropertyMap_OnReceivers((QQmlPropertyMap*)self, (intptr_t)callback);
}

bool q_qmlpropertymap_is_signal_connected(void* self, void* signal) {
    return QQmlPropertyMap_IsSignalConnected((QQmlPropertyMap*)self, (QMetaMethod*)signal);
}

bool q_qmlpropertymap_super_is_signal_connected(void* self, void* signal) {
    return QQmlPropertyMap_SuperIsSignalConnected((QQmlPropertyMap*)self, (QMetaMethod*)signal);
}

void q_qmlpropertymap_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlPropertyMap_OnIsSignalConnected((QQmlPropertyMap*)self, (intptr_t)callback);
}

void q_qmlpropertymap_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlpropertymap_delete(void* self) {
    QQmlPropertyMap_Delete((QQmlPropertyMap*)(self));
}
