#include "libq3dscene.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvectornd.hpp"
#include "libq3dobject.hpp"
#include "libq3dobject.h"

Q3DObject* q_3dobject_new() {
    return Q3DObject_New();
}

Q3DObject* q_3dobject_new2(void* parent) {
    return Q3DObject_New2((QObject*)parent);
}

const QMetaObject* q_3dobject_meta_object(const void* self) {
    return Q3DObject_MetaObject((Q3DObject*)self);
}

void q_3dobject_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    Q3DObject_OnMetaObject((Q3DObject*)self, (intptr_t)callback);
}

const QMetaObject* q_3dobject_super_meta_object(const void* self) {
    return Q3DObject_SuperMetaObject((Q3DObject*)self);
}

void* q_3dobject_metacast(void* self, const char* param1) {
    return Q3DObject_Metacast((Q3DObject*)self, param1);
}

void q_3dobject_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Q3DObject_OnMetacast((Q3DObject*)self, (intptr_t)callback);
}

void* q_3dobject_super_metacast(void* self, const char* param1) {
    return Q3DObject_SuperMetacast((Q3DObject*)self, param1);
}

int32_t q_3dobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DObject_Metacall((Q3DObject*)self, param1, param2, param3);
}

void q_3dobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Q3DObject_OnMetacall((Q3DObject*)self, (intptr_t)callback);
}

int32_t q_3dobject_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DObject_SuperMetacall((Q3DObject*)self, param1, param2, param3);
}

const char* q_3dobject_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dobject_copy_values_from(void* self, const void* source) {
    Q3DObject_CopyValuesFrom((Q3DObject*)self, (Q3DObject*)source);
}

void q_3dobject_on_copy_values_from(void* self, void (*callback)(void*, const void*)) {
    Q3DObject_OnCopyValuesFrom((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_super_copy_values_from(void* self, const void* source) {
    Q3DObject_SuperCopyValuesFrom((Q3DObject*)self, (Q3DObject*)source);
}

Q3DScene* q_3dobject_parent_scene(void* self) {
    return Q3DObject_ParentScene((Q3DObject*)self);
}

QVector3D* q_3dobject_position(const void* self) {
    return Q3DObject_Position((Q3DObject*)self);
}

void q_3dobject_set_position(void* self, const void* position) {
    Q3DObject_SetPosition((Q3DObject*)self, (QVector3D*)position);
}

void q_3dobject_position_changed(void* self, const void* position) {
    Q3DObject_PositionChanged((Q3DObject*)self, (QVector3D*)position);
}

void q_3dobject_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DObject_Connect_PositionChanged((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_set_dirty(void* self, bool dirty) {
    Q3DObject_SetDirty((Q3DObject*)self, dirty);
}

bool q_3dobject_is_dirty(const void* self) {
    return Q3DObject_IsDirty((Q3DObject*)self);
}

const char* q_3dobject_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dobject_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dobject_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_3dobject_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_3dobject_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_3dobject_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_3dobject_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_3dobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_3dobject_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_3dobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_3dobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_3dobject_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_3dobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_3dobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_3dobject_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_3dobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_3dobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_3dobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_3dobject_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_3dobject_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_3dobject_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_3dobject_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_3dobject_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_3dobject_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_3dobject_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_3dobject_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_3dobject_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_3dobject_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_3dobject_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_3dobject_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_3dobject_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_3dobject_dynamic_property_names\n");
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

QBindingStorage* q_3dobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_3dobject_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_3dobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_3dobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_3dobject_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_3dobject_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_3dobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_3dobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_3dobject_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_3dobject_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_3dobject_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_3dobject_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_3dobject_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_3dobject_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_3dobject_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_3dobject_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_3dobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_3dobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_3dobject_event(void* self, void* event) {
    return Q3DObject_Event((Q3DObject*)self, (QEvent*)event);
}

bool q_3dobject_super_event(void* self, void* event) {
    return Q3DObject_SuperEvent((Q3DObject*)self, (QEvent*)event);
}

void q_3dobject_on_event(void* self, bool (*callback)(void*, void*)) {
    Q3DObject_OnEvent((Q3DObject*)self, (intptr_t)callback);
}

bool q_3dobject_event_filter(void* self, void* watched, void* event) {
    return Q3DObject_EventFilter((Q3DObject*)self, (QObject*)watched, (QEvent*)event);
}

bool q_3dobject_super_event_filter(void* self, void* watched, void* event) {
    return Q3DObject_SuperEventFilter((Q3DObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_3dobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Q3DObject_OnEventFilter((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_timer_event(void* self, void* event) {
    Q3DObject_TimerEvent((Q3DObject*)self, (QTimerEvent*)event);
}

void q_3dobject_super_timer_event(void* self, void* event) {
    Q3DObject_SuperTimerEvent((Q3DObject*)self, (QTimerEvent*)event);
}

void q_3dobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Q3DObject_OnTimerEvent((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_child_event(void* self, void* event) {
    Q3DObject_ChildEvent((Q3DObject*)self, (QChildEvent*)event);
}

void q_3dobject_super_child_event(void* self, void* event) {
    Q3DObject_SuperChildEvent((Q3DObject*)self, (QChildEvent*)event);
}

void q_3dobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    Q3DObject_OnChildEvent((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_custom_event(void* self, void* event) {
    Q3DObject_CustomEvent((Q3DObject*)self, (QEvent*)event);
}

void q_3dobject_super_custom_event(void* self, void* event) {
    Q3DObject_SuperCustomEvent((Q3DObject*)self, (QEvent*)event);
}

void q_3dobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Q3DObject_OnCustomEvent((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_connect_notify(void* self, const void* signal) {
    Q3DObject_ConnectNotify((Q3DObject*)self, (QMetaMethod*)signal);
}

void q_3dobject_super_connect_notify(void* self, const void* signal) {
    Q3DObject_SuperConnectNotify((Q3DObject*)self, (QMetaMethod*)signal);
}

void q_3dobject_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DObject_OnConnectNotify((Q3DObject*)self, (intptr_t)callback);
}

void q_3dobject_disconnect_notify(void* self, const void* signal) {
    Q3DObject_DisconnectNotify((Q3DObject*)self, (QMetaMethod*)signal);
}

void q_3dobject_super_disconnect_notify(void* self, const void* signal) {
    Q3DObject_SuperDisconnectNotify((Q3DObject*)self, (QMetaMethod*)signal);
}

void q_3dobject_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DObject_OnDisconnectNotify((Q3DObject*)self, (intptr_t)callback);
}

QObject* q_3dobject_sender(const void* self) {
    return Q3DObject_Sender((Q3DObject*)self);
}

int32_t q_3dobject_sender_signal_index(const void* self) {
    return Q3DObject_SenderSignalIndex((Q3DObject*)self);
}

int32_t q_3dobject_receivers(const void* self, const char* signal) {
    return Q3DObject_Receivers((Q3DObject*)self, signal);
}

bool q_3dobject_is_signal_connected(const void* self, const void* signal) {
    return Q3DObject_IsSignalConnected((Q3DObject*)self, (QMetaMethod*)signal);
}

void q_3dobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_3dobject_delete(void* self) {
    Q3DObject_Delete((Q3DObject*)(self));
}
