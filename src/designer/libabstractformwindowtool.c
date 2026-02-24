#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractformwindow.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libabstractformwindowtool.hpp"
#include "libabstractformwindowtool.h"

QDesignerFormWindowToolInterface* q_designerformwindowtoolinterface_new() {
    return QDesignerFormWindowToolInterface_new();
}

QDesignerFormWindowToolInterface* q_designerformwindowtoolinterface_new2(void* parent) {
    return QDesignerFormWindowToolInterface_new2((QObject*)parent);
}

const QMetaObject* q_designerformwindowtoolinterface_meta_object(void* self) {
    return QDesignerFormWindowToolInterface_MetaObject((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDesignerFormWindowToolInterface_OnMetaObject((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designerformwindowtoolinterface_super_meta_object(void* self) {
    return QDesignerFormWindowToolInterface_SuperMetaObject((QDesignerFormWindowToolInterface*)self);
}

void* q_designerformwindowtoolinterface_metacast(void* self, const char* param1) {
    return QDesignerFormWindowToolInterface_Metacast((QDesignerFormWindowToolInterface*)self, param1);
}

void q_designerformwindowtoolinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerFormWindowToolInterface_OnMetacast((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void* q_designerformwindowtoolinterface_super_metacast(void* self, const char* param1) {
    return QDesignerFormWindowToolInterface_SuperMetacast((QDesignerFormWindowToolInterface*)self, param1);
}

int32_t q_designerformwindowtoolinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormWindowToolInterface_Metacall((QDesignerFormWindowToolInterface*)self, param1, param2, param3);
}

void q_designerformwindowtoolinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerFormWindowToolInterface_OnMetacall((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowtoolinterface_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormWindowToolInterface_SuperMetacall((QDesignerFormWindowToolInterface*)self, param1, param2, param3);
}

const char* q_designerformwindowtoolinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDesignerFormEditorInterface* q_designerformwindowtoolinterface_core(void* self) {
    return QDesignerFormWindowToolInterface_Core((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)()) {
    QDesignerFormWindowToolInterface_OnCore((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designerformwindowtoolinterface_super_core(void* self) {
    return QDesignerFormWindowToolInterface_SuperCore((QDesignerFormWindowToolInterface*)self);
}

QDesignerFormWindowInterface* q_designerformwindowtoolinterface_form_window(void* self) {
    return QDesignerFormWindowToolInterface_FormWindow((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_form_window(void* self, QDesignerFormWindowInterface* (*callback)()) {
    QDesignerFormWindowToolInterface_OnFormWindow((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

QDesignerFormWindowInterface* q_designerformwindowtoolinterface_super_form_window(void* self) {
    return QDesignerFormWindowToolInterface_SuperFormWindow((QDesignerFormWindowToolInterface*)self);
}

QWidget* q_designerformwindowtoolinterface_editor(void* self) {
    return QDesignerFormWindowToolInterface_Editor((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_editor(void* self, QWidget* (*callback)()) {
    QDesignerFormWindowToolInterface_OnEditor((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowtoolinterface_super_editor(void* self) {
    return QDesignerFormWindowToolInterface_SuperEditor((QDesignerFormWindowToolInterface*)self);
}

QAction* q_designerformwindowtoolinterface_action(void* self) {
    return QDesignerFormWindowToolInterface_Action((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_action(void* self, QAction* (*callback)()) {
    QDesignerFormWindowToolInterface_OnAction((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

QAction* q_designerformwindowtoolinterface_super_action(void* self) {
    return QDesignerFormWindowToolInterface_SuperAction((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_activated(void* self) {
    QDesignerFormWindowToolInterface_Activated((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_activated(void* self, void (*callback)()) {
    QDesignerFormWindowToolInterface_OnActivated((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_super_activated(void* self) {
    QDesignerFormWindowToolInterface_SuperActivated((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_deactivated(void* self) {
    QDesignerFormWindowToolInterface_Deactivated((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_deactivated(void* self, void (*callback)()) {
    QDesignerFormWindowToolInterface_OnDeactivated((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_super_deactivated(void* self) {
    QDesignerFormWindowToolInterface_SuperDeactivated((QDesignerFormWindowToolInterface*)self);
}

bool q_designerformwindowtoolinterface_handle_event(void* self, void* widget, void* managedWidget, void* event) {
    return QDesignerFormWindowToolInterface_HandleEvent((QDesignerFormWindowToolInterface*)self, (QWidget*)widget, (QWidget*)managedWidget, (QEvent*)event);
}

void q_designerformwindowtoolinterface_on_handle_event(void* self, bool (*callback)(void*, void*, void*, void*)) {
    QDesignerFormWindowToolInterface_OnHandleEvent((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowtoolinterface_super_handle_event(void* self, void* widget, void* managedWidget, void* event) {
    return QDesignerFormWindowToolInterface_SuperHandleEvent((QDesignerFormWindowToolInterface*)self, (QWidget*)widget, (QWidget*)managedWidget, (QEvent*)event);
}

const char* q_designerformwindowtoolinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerformwindowtoolinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerformwindowtoolinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerformwindowtoolinterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerformwindowtoolinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerformwindowtoolinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerformwindowtoolinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerformwindowtoolinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerformwindowtoolinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerformwindowtoolinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerformwindowtoolinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerformwindowtoolinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerformwindowtoolinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerformwindowtoolinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerformwindowtoolinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerformwindowtoolinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerformwindowtoolinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerformwindowtoolinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerformwindowtoolinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerformwindowtoolinterface_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_designerformwindowtoolinterface_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerformwindowtoolinterface_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerformwindowtoolinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_designerformwindowtoolinterface_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerformwindowtoolinterface_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_designerformwindowtoolinterface_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_designerformwindowtoolinterface_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_designerformwindowtoolinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerformwindowtoolinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerformwindowtoolinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerformwindowtoolinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerformwindowtoolinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerformwindowtoolinterface_dynamic_property_names\n");
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

QBindingStorage* q_designerformwindowtoolinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerformwindowtoolinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerformwindowtoolinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerformwindowtoolinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerformwindowtoolinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerformwindowtoolinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerformwindowtoolinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerformwindowtoolinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerformwindowtoolinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerformwindowtoolinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_designerformwindowtoolinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerformwindowtoolinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_designerformwindowtoolinterface_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_designerformwindowtoolinterface_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_designerformwindowtoolinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_designerformwindowtoolinterface_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_designerformwindowtoolinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerformwindowtoolinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerformwindowtoolinterface_event(void* self, void* event) {
    return QDesignerFormWindowToolInterface_Event((QDesignerFormWindowToolInterface*)self, (QEvent*)event);
}

bool q_designerformwindowtoolinterface_super_event(void* self, void* event) {
    return QDesignerFormWindowToolInterface_SuperEvent((QDesignerFormWindowToolInterface*)self, (QEvent*)event);
}

void q_designerformwindowtoolinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnEvent((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowtoolinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormWindowToolInterface_EventFilter((QDesignerFormWindowToolInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerformwindowtoolinterface_super_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormWindowToolInterface_SuperEventFilter((QDesignerFormWindowToolInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerformwindowtoolinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerFormWindowToolInterface_OnEventFilter((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_timer_event(void* self, void* event) {
    QDesignerFormWindowToolInterface_TimerEvent((QDesignerFormWindowToolInterface*)self, (QTimerEvent*)event);
}

void q_designerformwindowtoolinterface_super_timer_event(void* self, void* event) {
    QDesignerFormWindowToolInterface_SuperTimerEvent((QDesignerFormWindowToolInterface*)self, (QTimerEvent*)event);
}

void q_designerformwindowtoolinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnTimerEvent((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_child_event(void* self, void* event) {
    QDesignerFormWindowToolInterface_ChildEvent((QDesignerFormWindowToolInterface*)self, (QChildEvent*)event);
}

void q_designerformwindowtoolinterface_super_child_event(void* self, void* event) {
    QDesignerFormWindowToolInterface_SuperChildEvent((QDesignerFormWindowToolInterface*)self, (QChildEvent*)event);
}

void q_designerformwindowtoolinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnChildEvent((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_custom_event(void* self, void* event) {
    QDesignerFormWindowToolInterface_CustomEvent((QDesignerFormWindowToolInterface*)self, (QEvent*)event);
}

void q_designerformwindowtoolinterface_super_custom_event(void* self, void* event) {
    QDesignerFormWindowToolInterface_SuperCustomEvent((QDesignerFormWindowToolInterface*)self, (QEvent*)event);
}

void q_designerformwindowtoolinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnCustomEvent((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_connect_notify(void* self, void* signal) {
    QDesignerFormWindowToolInterface_ConnectNotify((QDesignerFormWindowToolInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowtoolinterface_super_connect_notify(void* self, void* signal) {
    QDesignerFormWindowToolInterface_SuperConnectNotify((QDesignerFormWindowToolInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowtoolinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnConnectNotify((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_disconnect_notify(void* self, void* signal) {
    QDesignerFormWindowToolInterface_DisconnectNotify((QDesignerFormWindowToolInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowtoolinterface_super_disconnect_notify(void* self, void* signal) {
    QDesignerFormWindowToolInterface_SuperDisconnectNotify((QDesignerFormWindowToolInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowtoolinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnDisconnectNotify((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

QObject* q_designerformwindowtoolinterface_sender(void* self) {
    return QDesignerFormWindowToolInterface_Sender((QDesignerFormWindowToolInterface*)self);
}

QObject* q_designerformwindowtoolinterface_super_sender(void* self) {
    return QDesignerFormWindowToolInterface_SuperSender((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerFormWindowToolInterface_OnSender((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowtoolinterface_sender_signal_index(void* self) {
    return QDesignerFormWindowToolInterface_SenderSignalIndex((QDesignerFormWindowToolInterface*)self);
}

int32_t q_designerformwindowtoolinterface_super_sender_signal_index(void* self) {
    return QDesignerFormWindowToolInterface_SuperSenderSignalIndex((QDesignerFormWindowToolInterface*)self);
}

void q_designerformwindowtoolinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerFormWindowToolInterface_OnSenderSignalIndex((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowtoolinterface_receivers(void* self, const char* signal) {
    return QDesignerFormWindowToolInterface_Receivers((QDesignerFormWindowToolInterface*)self, signal);
}

int32_t q_designerformwindowtoolinterface_super_receivers(void* self, const char* signal) {
    return QDesignerFormWindowToolInterface_SuperReceivers((QDesignerFormWindowToolInterface*)self, signal);
}

void q_designerformwindowtoolinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerFormWindowToolInterface_OnReceivers((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowtoolinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerFormWindowToolInterface_IsSignalConnected((QDesignerFormWindowToolInterface*)self, (QMetaMethod*)signal);
}

bool q_designerformwindowtoolinterface_super_is_signal_connected(void* self, void* signal) {
    return QDesignerFormWindowToolInterface_SuperIsSignalConnected((QDesignerFormWindowToolInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowtoolinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormWindowToolInterface_OnIsSignalConnected((QDesignerFormWindowToolInterface*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerformwindowtoolinterface_delete(void* self) {
    QDesignerFormWindowToolInterface_Delete((QDesignerFormWindowToolInterface*)(self));
}
