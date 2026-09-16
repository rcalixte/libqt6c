#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqquickattachedpropertypropagator.hpp"
#include "libqquickattachedpropertypropagator.h"

QQuickAttachedPropertyPropagator* q_quickattachedpropertypropagator_new() {
    return QQuickAttachedPropertyPropagator_New();
}

QQuickAttachedPropertyPropagator* q_quickattachedpropertypropagator_new2(void* parent) {
    return QQuickAttachedPropertyPropagator_New2((QObject*)parent);
}

const QMetaObject* q_quickattachedpropertypropagator_meta_object(void* self) {
    return QQuickAttachedPropertyPropagator_MetaObject((QQuickAttachedPropertyPropagator*)self);
}

void q_quickattachedpropertypropagator_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickAttachedPropertyPropagator_OnMetaObject((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

const QMetaObject* q_quickattachedpropertypropagator_super_meta_object(void* self) {
    return QQuickAttachedPropertyPropagator_SuperMetaObject((QQuickAttachedPropertyPropagator*)self);
}

void* q_quickattachedpropertypropagator_metacast(void* self, const char* param1) {
    return QQuickAttachedPropertyPropagator_Metacast((QQuickAttachedPropertyPropagator*)self, param1);
}

void q_quickattachedpropertypropagator_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickAttachedPropertyPropagator_OnMetacast((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void* q_quickattachedpropertypropagator_super_metacast(void* self, const char* param1) {
    return QQuickAttachedPropertyPropagator_SuperMetacast((QQuickAttachedPropertyPropagator*)self, param1);
}

int32_t q_quickattachedpropertypropagator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickAttachedPropertyPropagator_Metacall((QQuickAttachedPropertyPropagator*)self, param1, param2, param3);
}

void q_quickattachedpropertypropagator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickAttachedPropertyPropagator_OnMetacall((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

int32_t q_quickattachedpropertypropagator_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickAttachedPropertyPropagator_SuperMetacall((QQuickAttachedPropertyPropagator*)self, param1, param2, param3);
}

const char* q_quickattachedpropertypropagator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QQuickAttachedPropertyPropagator* */ q_quickattachedpropertypropagator_attached_children(void* self) {
    libqt_list _arr = QQuickAttachedPropertyPropagator_AttachedChildren((QQuickAttachedPropertyPropagator*)self);
    return _arr;
}

QQuickAttachedPropertyPropagator* q_quickattachedpropertypropagator_attached_parent(void* self) {
    return QQuickAttachedPropertyPropagator_AttachedParent((QQuickAttachedPropertyPropagator*)self);
}

void q_quickattachedpropertypropagator_initialize(void* self) {
    QQuickAttachedPropertyPropagator_Initialize((QQuickAttachedPropertyPropagator*)self);
}

void q_quickattachedpropertypropagator_on_initialize(void* self, void (*callback)()) {
    QQuickAttachedPropertyPropagator_OnInitialize((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_super_initialize(void* self) {
    QQuickAttachedPropertyPropagator_SuperInitialize((QQuickAttachedPropertyPropagator*)self);
}

void q_quickattachedpropertypropagator_attached_parent_change(void* self, void* newParent, void* oldParent) {
    QQuickAttachedPropertyPropagator_AttachedParentChange((QQuickAttachedPropertyPropagator*)self, (QQuickAttachedPropertyPropagator*)newParent, (QQuickAttachedPropertyPropagator*)oldParent);
}

void q_quickattachedpropertypropagator_on_attached_parent_change(void* self, void (*callback)(void*, void*, void*)) {
    QQuickAttachedPropertyPropagator_OnAttachedParentChange((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_super_attached_parent_change(void* self, void* newParent, void* oldParent) {
    QQuickAttachedPropertyPropagator_SuperAttachedParentChange((QQuickAttachedPropertyPropagator*)self, (QQuickAttachedPropertyPropagator*)newParent, (QQuickAttachedPropertyPropagator*)oldParent);
}

const char* q_quickattachedpropertypropagator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickattachedpropertypropagator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickattachedpropertypropagator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickattachedpropertypropagator_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickattachedpropertypropagator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickattachedpropertypropagator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickattachedpropertypropagator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickattachedpropertypropagator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickattachedpropertypropagator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickattachedpropertypropagator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickattachedpropertypropagator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickattachedpropertypropagator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickattachedpropertypropagator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickattachedpropertypropagator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickattachedpropertypropagator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickattachedpropertypropagator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickattachedpropertypropagator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickattachedpropertypropagator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickattachedpropertypropagator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickattachedpropertypropagator_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickattachedpropertypropagator_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickattachedpropertypropagator_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickattachedpropertypropagator_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickattachedpropertypropagator_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickattachedpropertypropagator_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickattachedpropertypropagator_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickattachedpropertypropagator_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickattachedpropertypropagator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickattachedpropertypropagator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickattachedpropertypropagator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickattachedpropertypropagator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickattachedpropertypropagator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickattachedpropertypropagator_dynamic_property_names\n");
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

QBindingStorage* q_quickattachedpropertypropagator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickattachedpropertypropagator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickattachedpropertypropagator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickattachedpropertypropagator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickattachedpropertypropagator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickattachedpropertypropagator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickattachedpropertypropagator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickattachedpropertypropagator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickattachedpropertypropagator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickattachedpropertypropagator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickattachedpropertypropagator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickattachedpropertypropagator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickattachedpropertypropagator_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickattachedpropertypropagator_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickattachedpropertypropagator_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickattachedpropertypropagator_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickattachedpropertypropagator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickattachedpropertypropagator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickattachedpropertypropagator_event(void* self, void* event) {
    return QQuickAttachedPropertyPropagator_Event((QQuickAttachedPropertyPropagator*)self, (QEvent*)event);
}

bool q_quickattachedpropertypropagator_super_event(void* self, void* event) {
    return QQuickAttachedPropertyPropagator_SuperEvent((QQuickAttachedPropertyPropagator*)self, (QEvent*)event);
}

void q_quickattachedpropertypropagator_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnEvent((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

bool q_quickattachedpropertypropagator_event_filter(void* self, void* watched, void* event) {
    return QQuickAttachedPropertyPropagator_EventFilter((QQuickAttachedPropertyPropagator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickattachedpropertypropagator_super_event_filter(void* self, void* watched, void* event) {
    return QQuickAttachedPropertyPropagator_SuperEventFilter((QQuickAttachedPropertyPropagator*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickattachedpropertypropagator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickAttachedPropertyPropagator_OnEventFilter((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_timer_event(void* self, void* event) {
    QQuickAttachedPropertyPropagator_TimerEvent((QQuickAttachedPropertyPropagator*)self, (QTimerEvent*)event);
}

void q_quickattachedpropertypropagator_super_timer_event(void* self, void* event) {
    QQuickAttachedPropertyPropagator_SuperTimerEvent((QQuickAttachedPropertyPropagator*)self, (QTimerEvent*)event);
}

void q_quickattachedpropertypropagator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnTimerEvent((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_child_event(void* self, void* event) {
    QQuickAttachedPropertyPropagator_ChildEvent((QQuickAttachedPropertyPropagator*)self, (QChildEvent*)event);
}

void q_quickattachedpropertypropagator_super_child_event(void* self, void* event) {
    QQuickAttachedPropertyPropagator_SuperChildEvent((QQuickAttachedPropertyPropagator*)self, (QChildEvent*)event);
}

void q_quickattachedpropertypropagator_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnChildEvent((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_custom_event(void* self, void* event) {
    QQuickAttachedPropertyPropagator_CustomEvent((QQuickAttachedPropertyPropagator*)self, (QEvent*)event);
}

void q_quickattachedpropertypropagator_super_custom_event(void* self, void* event) {
    QQuickAttachedPropertyPropagator_SuperCustomEvent((QQuickAttachedPropertyPropagator*)self, (QEvent*)event);
}

void q_quickattachedpropertypropagator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnCustomEvent((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_connect_notify(void* self, void* signal) {
    QQuickAttachedPropertyPropagator_ConnectNotify((QQuickAttachedPropertyPropagator*)self, (QMetaMethod*)signal);
}

void q_quickattachedpropertypropagator_super_connect_notify(void* self, void* signal) {
    QQuickAttachedPropertyPropagator_SuperConnectNotify((QQuickAttachedPropertyPropagator*)self, (QMetaMethod*)signal);
}

void q_quickattachedpropertypropagator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnConnectNotify((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_disconnect_notify(void* self, void* signal) {
    QQuickAttachedPropertyPropagator_DisconnectNotify((QQuickAttachedPropertyPropagator*)self, (QMetaMethod*)signal);
}

void q_quickattachedpropertypropagator_super_disconnect_notify(void* self, void* signal) {
    QQuickAttachedPropertyPropagator_SuperDisconnectNotify((QQuickAttachedPropertyPropagator*)self, (QMetaMethod*)signal);
}

void q_quickattachedpropertypropagator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnDisconnectNotify((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

QObject* q_quickattachedpropertypropagator_sender(void* self) {
    return QQuickAttachedPropertyPropagator_Sender((QQuickAttachedPropertyPropagator*)self);
}

QObject* q_quickattachedpropertypropagator_super_sender(void* self) {
    return QQuickAttachedPropertyPropagator_SuperSender((QQuickAttachedPropertyPropagator*)self);
}

void q_quickattachedpropertypropagator_on_sender(void* self, QObject* (*callback)()) {
    QQuickAttachedPropertyPropagator_OnSender((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

int32_t q_quickattachedpropertypropagator_sender_signal_index(void* self) {
    return QQuickAttachedPropertyPropagator_SenderSignalIndex((QQuickAttachedPropertyPropagator*)self);
}

int32_t q_quickattachedpropertypropagator_super_sender_signal_index(void* self) {
    return QQuickAttachedPropertyPropagator_SuperSenderSignalIndex((QQuickAttachedPropertyPropagator*)self);
}

void q_quickattachedpropertypropagator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickAttachedPropertyPropagator_OnSenderSignalIndex((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

int32_t q_quickattachedpropertypropagator_receivers(void* self, const char* signal) {
    return QQuickAttachedPropertyPropagator_Receivers((QQuickAttachedPropertyPropagator*)self, signal);
}

int32_t q_quickattachedpropertypropagator_super_receivers(void* self, const char* signal) {
    return QQuickAttachedPropertyPropagator_SuperReceivers((QQuickAttachedPropertyPropagator*)self, signal);
}

void q_quickattachedpropertypropagator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickAttachedPropertyPropagator_OnReceivers((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

bool q_quickattachedpropertypropagator_is_signal_connected(void* self, void* signal) {
    return QQuickAttachedPropertyPropagator_IsSignalConnected((QQuickAttachedPropertyPropagator*)self, (QMetaMethod*)signal);
}

bool q_quickattachedpropertypropagator_super_is_signal_connected(void* self, void* signal) {
    return QQuickAttachedPropertyPropagator_SuperIsSignalConnected((QQuickAttachedPropertyPropagator*)self, (QMetaMethod*)signal);
}

void q_quickattachedpropertypropagator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickAttachedPropertyPropagator_OnIsSignalConnected((QQuickAttachedPropertyPropagator*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickattachedpropertypropagator_delete(void* self) {
    QQuickAttachedPropertyPropagator_Delete((QQuickAttachedPropertyPropagator*)(self));
}
