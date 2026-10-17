#include "libq3dobject.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libq3dlight.hpp"
#include "libq3dlight.h"

Q3DLight* q_3dlight_new() {
    return Q3DLight_New();
}

Q3DLight* q_3dlight_new2(void* parent) {
    return Q3DLight_New2((QObject*)parent);
}

const QMetaObject* q_3dlight_meta_object(const void* self) {
    return Q3DLight_MetaObject((Q3DLight*)self);
}

void q_3dlight_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    Q3DLight_OnMetaObject((Q3DLight*)self, (intptr_t)callback);
}

const QMetaObject* q_3dlight_super_meta_object(const void* self) {
    return Q3DLight_SuperMetaObject((Q3DLight*)self);
}

void* q_3dlight_metacast(void* self, const char* param1) {
    return Q3DLight_Metacast((Q3DLight*)self, param1);
}

void q_3dlight_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Q3DLight_OnMetacast((Q3DLight*)self, (intptr_t)callback);
}

void* q_3dlight_super_metacast(void* self, const char* param1) {
    return Q3DLight_SuperMetacast((Q3DLight*)self, param1);
}

int32_t q_3dlight_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DLight_Metacall((Q3DLight*)self, param1, param2, param3);
}

void q_3dlight_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Q3DLight_OnMetacall((Q3DLight*)self, (intptr_t)callback);
}

int32_t q_3dlight_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DLight_SuperMetacall((Q3DLight*)self, param1, param2, param3);
}

const char* q_3dlight_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dlight_set_auto_position(void* self, bool enabled) {
    Q3DLight_SetAutoPosition((Q3DLight*)self, enabled);
}

bool q_3dlight_is_auto_position(void* self) {
    return Q3DLight_IsAutoPosition((Q3DLight*)self);
}

void q_3dlight_auto_position_changed(void* self, bool autoPosition) {
    Q3DLight_AutoPositionChanged((Q3DLight*)self, autoPosition);
}

void q_3dlight_on_auto_position_changed(void* self, void (*callback)(void*, bool)) {
    Q3DLight_Connect_AutoPositionChanged((Q3DLight*)self, (intptr_t)callback);
}

const char* q_3dlight_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dlight_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Q3DScene* q_3dlight_parent_scene(void* self) {
    return Q3DObject_ParentScene((Q3DObject*)self);
}

QVector3D* q_3dlight_position(const void* self) {
    return Q3DObject_Position((Q3DObject*)self);
}

void q_3dlight_set_position(void* self, const void* position) {
    Q3DObject_SetPosition((Q3DObject*)self, (QVector3D*)position);
}

void q_3dlight_position_changed(void* self, const void* position) {
    Q3DObject_PositionChanged((Q3DObject*)self, (QVector3D*)position);
}

void q_3dlight_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DObject_Connect_PositionChanged((Q3DObject*)self, (intptr_t)callback);
}

const char* q_3dlight_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dlight_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_3dlight_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_3dlight_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_3dlight_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_3dlight_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_3dlight_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_3dlight_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_3dlight_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_3dlight_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_3dlight_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_3dlight_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_3dlight_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_3dlight_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_3dlight_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_3dlight_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_3dlight_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_3dlight_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_3dlight_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_3dlight_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_3dlight_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_3dlight_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_3dlight_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_3dlight_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_3dlight_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_3dlight_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_3dlight_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_3dlight_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_3dlight_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_3dlight_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_3dlight_dynamic_property_names\n");
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

QBindingStorage* q_3dlight_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_3dlight_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_3dlight_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_3dlight_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_3dlight_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_3dlight_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_3dlight_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_3dlight_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_3dlight_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_3dlight_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_3dlight_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_3dlight_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_3dlight_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_3dlight_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_3dlight_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_3dlight_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_3dlight_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_3dlight_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_3dlight_copy_values_from(void* self, const void* source) {
    Q3DLight_CopyValuesFrom((Q3DLight*)self, (Q3DObject*)source);
}

void q_3dlight_super_copy_values_from(void* self, const void* source) {
    Q3DLight_SuperCopyValuesFrom((Q3DLight*)self, (Q3DObject*)source);
}

void q_3dlight_on_copy_values_from(void* self, void (*callback)(void*, const void*)) {
    Q3DLight_OnCopyValuesFrom((Q3DLight*)self, (intptr_t)callback);
}

bool q_3dlight_event(void* self, void* event) {
    return Q3DLight_Event((Q3DLight*)self, (QEvent*)event);
}

bool q_3dlight_super_event(void* self, void* event) {
    return Q3DLight_SuperEvent((Q3DLight*)self, (QEvent*)event);
}

void q_3dlight_on_event(void* self, bool (*callback)(void*, void*)) {
    Q3DLight_OnEvent((Q3DLight*)self, (intptr_t)callback);
}

bool q_3dlight_event_filter(void* self, void* watched, void* event) {
    return Q3DLight_EventFilter((Q3DLight*)self, (QObject*)watched, (QEvent*)event);
}

bool q_3dlight_super_event_filter(void* self, void* watched, void* event) {
    return Q3DLight_SuperEventFilter((Q3DLight*)self, (QObject*)watched, (QEvent*)event);
}

void q_3dlight_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Q3DLight_OnEventFilter((Q3DLight*)self, (intptr_t)callback);
}

void q_3dlight_timer_event(void* self, void* event) {
    Q3DLight_TimerEvent((Q3DLight*)self, (QTimerEvent*)event);
}

void q_3dlight_super_timer_event(void* self, void* event) {
    Q3DLight_SuperTimerEvent((Q3DLight*)self, (QTimerEvent*)event);
}

void q_3dlight_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Q3DLight_OnTimerEvent((Q3DLight*)self, (intptr_t)callback);
}

void q_3dlight_child_event(void* self, void* event) {
    Q3DLight_ChildEvent((Q3DLight*)self, (QChildEvent*)event);
}

void q_3dlight_super_child_event(void* self, void* event) {
    Q3DLight_SuperChildEvent((Q3DLight*)self, (QChildEvent*)event);
}

void q_3dlight_on_child_event(void* self, void (*callback)(void*, void*)) {
    Q3DLight_OnChildEvent((Q3DLight*)self, (intptr_t)callback);
}

void q_3dlight_custom_event(void* self, void* event) {
    Q3DLight_CustomEvent((Q3DLight*)self, (QEvent*)event);
}

void q_3dlight_super_custom_event(void* self, void* event) {
    Q3DLight_SuperCustomEvent((Q3DLight*)self, (QEvent*)event);
}

void q_3dlight_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Q3DLight_OnCustomEvent((Q3DLight*)self, (intptr_t)callback);
}

void q_3dlight_connect_notify(void* self, const void* signal) {
    Q3DLight_ConnectNotify((Q3DLight*)self, (QMetaMethod*)signal);
}

void q_3dlight_super_connect_notify(void* self, const void* signal) {
    Q3DLight_SuperConnectNotify((Q3DLight*)self, (QMetaMethod*)signal);
}

void q_3dlight_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DLight_OnConnectNotify((Q3DLight*)self, (intptr_t)callback);
}

void q_3dlight_disconnect_notify(void* self, const void* signal) {
    Q3DLight_DisconnectNotify((Q3DLight*)self, (QMetaMethod*)signal);
}

void q_3dlight_super_disconnect_notify(void* self, const void* signal) {
    Q3DLight_SuperDisconnectNotify((Q3DLight*)self, (QMetaMethod*)signal);
}

void q_3dlight_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DLight_OnDisconnectNotify((Q3DLight*)self, (intptr_t)callback);
}

void q_3dlight_set_dirty(void* self, bool dirty) {
    Q3DLight_SetDirty((Q3DLight*)self, dirty);
}

bool q_3dlight_is_dirty(const void* self) {
    return Q3DLight_IsDirty((Q3DLight*)self);
}

QObject* q_3dlight_sender(const void* self) {
    return Q3DLight_Sender((Q3DLight*)self);
}

int32_t q_3dlight_sender_signal_index(const void* self) {
    return Q3DLight_SenderSignalIndex((Q3DLight*)self);
}

int32_t q_3dlight_receivers(const void* self, const char* signal) {
    return Q3DLight_Receivers((Q3DLight*)self, signal);
}

bool q_3dlight_is_signal_connected(const void* self, const void* signal) {
    return Q3DLight_IsSignalConnected((Q3DLight*)self, (QMetaMethod*)signal);
}

void q_3dlight_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_3dlight_delete(void* self) {
    Q3DLight_Delete((Q3DLight*)(self));
}
