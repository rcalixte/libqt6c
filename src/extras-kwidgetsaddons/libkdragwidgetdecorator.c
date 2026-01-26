#include "../libqcoreevent.hpp"
#include "../libqdrag.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkdragwidgetdecorator.hpp"
#include "libkdragwidgetdecorator.h"

KDragWidgetDecoratorBase* k_dragwidgetdecoratorbase_new(void* parent) {
    return KDragWidgetDecoratorBase_new((QWidget*)parent);
}

KDragWidgetDecoratorBase* k_dragwidgetdecoratorbase_new2() {
    return KDragWidgetDecoratorBase_new2();
}

const QMetaObject* k_dragwidgetdecoratorbase_meta_object(void* self) {
    return KDragWidgetDecoratorBase_MetaObject((KDragWidgetDecoratorBase*)self);
}

void k_dragwidgetdecoratorbase_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDragWidgetDecoratorBase_OnMetaObject((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

const QMetaObject* k_dragwidgetdecoratorbase_qbase_meta_object(void* self) {
    return KDragWidgetDecoratorBase_QBaseMetaObject((KDragWidgetDecoratorBase*)self);
}

void* k_dragwidgetdecoratorbase_metacast(void* self, const char* param1) {
    return KDragWidgetDecoratorBase_Metacast((KDragWidgetDecoratorBase*)self, param1);
}

void k_dragwidgetdecoratorbase_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDragWidgetDecoratorBase_OnMetacast((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void* k_dragwidgetdecoratorbase_qbase_metacast(void* self, const char* param1) {
    return KDragWidgetDecoratorBase_QBaseMetacast((KDragWidgetDecoratorBase*)self, param1);
}

int32_t k_dragwidgetdecoratorbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDragWidgetDecoratorBase_Metacall((KDragWidgetDecoratorBase*)self, param1, param2, param3);
}

void k_dragwidgetdecoratorbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDragWidgetDecoratorBase_OnMetacall((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

int32_t k_dragwidgetdecoratorbase_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDragWidgetDecoratorBase_QBaseMetacall((KDragWidgetDecoratorBase*)self, param1, param2, param3);
}

const char* k_dragwidgetdecoratorbase_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dragwidgetdecoratorbase_set_drag_enabled(void* self, bool enable) {
    KDragWidgetDecoratorBase_SetDragEnabled((KDragWidgetDecoratorBase*)self, enable);
}

bool k_dragwidgetdecoratorbase_is_drag_enabled(void* self) {
    return KDragWidgetDecoratorBase_IsDragEnabled((KDragWidgetDecoratorBase*)self);
}

QWidget* k_dragwidgetdecoratorbase_decorated_widget(void* self) {
    return KDragWidgetDecoratorBase_DecoratedWidget((KDragWidgetDecoratorBase*)self);
}

void k_dragwidgetdecoratorbase_on_decorated_widget(void* self, QWidget* (*callback)()) {
    KDragWidgetDecoratorBase_OnDecoratedWidget((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

QWidget* k_dragwidgetdecoratorbase_qbase_decorated_widget(void* self) {
    return KDragWidgetDecoratorBase_QBaseDecoratedWidget((KDragWidgetDecoratorBase*)self);
}

QDrag* k_dragwidgetdecoratorbase_drag_object(void* self) {
    return KDragWidgetDecoratorBase_DragObject((KDragWidgetDecoratorBase*)self);
}

void k_dragwidgetdecoratorbase_on_drag_object(void* self, QDrag* (*callback)()) {
    KDragWidgetDecoratorBase_OnDragObject((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

QDrag* k_dragwidgetdecoratorbase_qbase_drag_object(void* self) {
    return KDragWidgetDecoratorBase_QBaseDragObject((KDragWidgetDecoratorBase*)self);
}

bool k_dragwidgetdecoratorbase_event_filter(void* self, void* watched, void* event) {
    return KDragWidgetDecoratorBase_EventFilter((KDragWidgetDecoratorBase*)self, (QObject*)watched, (QEvent*)event);
}

void k_dragwidgetdecoratorbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDragWidgetDecoratorBase_OnEventFilter((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

bool k_dragwidgetdecoratorbase_qbase_event_filter(void* self, void* watched, void* event) {
    return KDragWidgetDecoratorBase_QBaseEventFilter((KDragWidgetDecoratorBase*)self, (QObject*)watched, (QEvent*)event);
}

void k_dragwidgetdecoratorbase_start_drag(void* self) {
    KDragWidgetDecoratorBase_StartDrag((KDragWidgetDecoratorBase*)self);
}

void k_dragwidgetdecoratorbase_on_start_drag(void* self, void (*callback)()) {
    KDragWidgetDecoratorBase_OnStartDrag((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_qbase_start_drag(void* self) {
    KDragWidgetDecoratorBase_QBaseStartDrag((KDragWidgetDecoratorBase*)self);
}

const char* k_dragwidgetdecoratorbase_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dragwidgetdecoratorbase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dragwidgetdecoratorbase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dragwidgetdecoratorbase_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_dragwidgetdecoratorbase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_dragwidgetdecoratorbase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_dragwidgetdecoratorbase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_dragwidgetdecoratorbase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_dragwidgetdecoratorbase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_dragwidgetdecoratorbase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_dragwidgetdecoratorbase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_dragwidgetdecoratorbase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_dragwidgetdecoratorbase_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_dragwidgetdecoratorbase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_dragwidgetdecoratorbase_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_dragwidgetdecoratorbase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_dragwidgetdecoratorbase_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_dragwidgetdecoratorbase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_dragwidgetdecoratorbase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_dragwidgetdecoratorbase_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_dragwidgetdecoratorbase_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_dragwidgetdecoratorbase_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_dragwidgetdecoratorbase_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_dragwidgetdecoratorbase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_dragwidgetdecoratorbase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_dragwidgetdecoratorbase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_dragwidgetdecoratorbase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_dragwidgetdecoratorbase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_dragwidgetdecoratorbase_dynamic_property_names\n");
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

QBindingStorage* k_dragwidgetdecoratorbase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_dragwidgetdecoratorbase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_dragwidgetdecoratorbase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_dragwidgetdecoratorbase_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_dragwidgetdecoratorbase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_dragwidgetdecoratorbase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_dragwidgetdecoratorbase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_dragwidgetdecoratorbase_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_dragwidgetdecoratorbase_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_dragwidgetdecoratorbase_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_dragwidgetdecoratorbase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_dragwidgetdecoratorbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_dragwidgetdecoratorbase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_dragwidgetdecoratorbase_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_dragwidgetdecoratorbase_event(void* self, void* event) {
    return KDragWidgetDecoratorBase_Event((KDragWidgetDecoratorBase*)self, (QEvent*)event);
}

bool k_dragwidgetdecoratorbase_qbase_event(void* self, void* event) {
    return KDragWidgetDecoratorBase_QBaseEvent((KDragWidgetDecoratorBase*)self, (QEvent*)event);
}

void k_dragwidgetdecoratorbase_on_event(void* self, bool (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnEvent((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_timer_event(void* self, void* event) {
    KDragWidgetDecoratorBase_TimerEvent((KDragWidgetDecoratorBase*)self, (QTimerEvent*)event);
}

void k_dragwidgetdecoratorbase_qbase_timer_event(void* self, void* event) {
    KDragWidgetDecoratorBase_QBaseTimerEvent((KDragWidgetDecoratorBase*)self, (QTimerEvent*)event);
}

void k_dragwidgetdecoratorbase_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnTimerEvent((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_child_event(void* self, void* event) {
    KDragWidgetDecoratorBase_ChildEvent((KDragWidgetDecoratorBase*)self, (QChildEvent*)event);
}

void k_dragwidgetdecoratorbase_qbase_child_event(void* self, void* event) {
    KDragWidgetDecoratorBase_QBaseChildEvent((KDragWidgetDecoratorBase*)self, (QChildEvent*)event);
}

void k_dragwidgetdecoratorbase_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnChildEvent((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_custom_event(void* self, void* event) {
    KDragWidgetDecoratorBase_CustomEvent((KDragWidgetDecoratorBase*)self, (QEvent*)event);
}

void k_dragwidgetdecoratorbase_qbase_custom_event(void* self, void* event) {
    KDragWidgetDecoratorBase_QBaseCustomEvent((KDragWidgetDecoratorBase*)self, (QEvent*)event);
}

void k_dragwidgetdecoratorbase_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnCustomEvent((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_connect_notify(void* self, void* signal) {
    KDragWidgetDecoratorBase_ConnectNotify((KDragWidgetDecoratorBase*)self, (QMetaMethod*)signal);
}

void k_dragwidgetdecoratorbase_qbase_connect_notify(void* self, void* signal) {
    KDragWidgetDecoratorBase_QBaseConnectNotify((KDragWidgetDecoratorBase*)self, (QMetaMethod*)signal);
}

void k_dragwidgetdecoratorbase_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnConnectNotify((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_disconnect_notify(void* self, void* signal) {
    KDragWidgetDecoratorBase_DisconnectNotify((KDragWidgetDecoratorBase*)self, (QMetaMethod*)signal);
}

void k_dragwidgetdecoratorbase_qbase_disconnect_notify(void* self, void* signal) {
    KDragWidgetDecoratorBase_QBaseDisconnectNotify((KDragWidgetDecoratorBase*)self, (QMetaMethod*)signal);
}

void k_dragwidgetdecoratorbase_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnDisconnectNotify((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

QObject* k_dragwidgetdecoratorbase_sender(void* self) {
    return KDragWidgetDecoratorBase_Sender((KDragWidgetDecoratorBase*)self);
}

QObject* k_dragwidgetdecoratorbase_qbase_sender(void* self) {
    return KDragWidgetDecoratorBase_QBaseSender((KDragWidgetDecoratorBase*)self);
}

void k_dragwidgetdecoratorbase_on_sender(void* self, QObject* (*callback)()) {
    KDragWidgetDecoratorBase_OnSender((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

int32_t k_dragwidgetdecoratorbase_sender_signal_index(void* self) {
    return KDragWidgetDecoratorBase_SenderSignalIndex((KDragWidgetDecoratorBase*)self);
}

int32_t k_dragwidgetdecoratorbase_qbase_sender_signal_index(void* self) {
    return KDragWidgetDecoratorBase_QBaseSenderSignalIndex((KDragWidgetDecoratorBase*)self);
}

void k_dragwidgetdecoratorbase_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDragWidgetDecoratorBase_OnSenderSignalIndex((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

int32_t k_dragwidgetdecoratorbase_receivers(void* self, const char* signal) {
    return KDragWidgetDecoratorBase_Receivers((KDragWidgetDecoratorBase*)self, signal);
}

int32_t k_dragwidgetdecoratorbase_qbase_receivers(void* self, const char* signal) {
    return KDragWidgetDecoratorBase_QBaseReceivers((KDragWidgetDecoratorBase*)self, signal);
}

void k_dragwidgetdecoratorbase_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDragWidgetDecoratorBase_OnReceivers((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

bool k_dragwidgetdecoratorbase_is_signal_connected(void* self, void* signal) {
    return KDragWidgetDecoratorBase_IsSignalConnected((KDragWidgetDecoratorBase*)self, (QMetaMethod*)signal);
}

bool k_dragwidgetdecoratorbase_qbase_is_signal_connected(void* self, void* signal) {
    return KDragWidgetDecoratorBase_QBaseIsSignalConnected((KDragWidgetDecoratorBase*)self, (QMetaMethod*)signal);
}

void k_dragwidgetdecoratorbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDragWidgetDecoratorBase_OnIsSignalConnected((KDragWidgetDecoratorBase*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_dragwidgetdecoratorbase_delete(void* self) {
    KDragWidgetDecoratorBase_Delete((KDragWidgetDecoratorBase*)(self));
}
