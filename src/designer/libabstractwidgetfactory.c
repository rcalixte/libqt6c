#include "../libqcoreevent.hpp"
#include "libabstractformeditor.hpp"
#include "../libqlayout.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libabstractwidgetfactory.hpp"
#include "libabstractwidgetfactory.h"

QDesignerWidgetFactoryInterface* q_designerwidgetfactoryinterface_new() {
    return QDesignerWidgetFactoryInterface_new();
}

QDesignerWidgetFactoryInterface* q_designerwidgetfactoryinterface_new2(void* parent) {
    return QDesignerWidgetFactoryInterface_new2((QObject*)parent);
}

const QMetaObject* q_designerwidgetfactoryinterface_meta_object(void* self) {
    return QDesignerWidgetFactoryInterface_MetaObject((QDesignerWidgetFactoryInterface*)self);
}

void q_designerwidgetfactoryinterface_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDesignerWidgetFactoryInterface_OnMetaObject((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designerwidgetfactoryinterface_super_meta_object(void* self) {
    return QDesignerWidgetFactoryInterface_SuperMetaObject((QDesignerWidgetFactoryInterface*)self);
}

void* q_designerwidgetfactoryinterface_metacast(void* self, const char* param1) {
    return QDesignerWidgetFactoryInterface_Metacast((QDesignerWidgetFactoryInterface*)self, param1);
}

void q_designerwidgetfactoryinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerWidgetFactoryInterface_OnMetacast((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void* q_designerwidgetfactoryinterface_super_metacast(void* self, const char* param1) {
    return QDesignerWidgetFactoryInterface_SuperMetacast((QDesignerWidgetFactoryInterface*)self, param1);
}

int32_t q_designerwidgetfactoryinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerWidgetFactoryInterface_Metacall((QDesignerWidgetFactoryInterface*)self, param1, param2, param3);
}

void q_designerwidgetfactoryinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerWidgetFactoryInterface_OnMetacall((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetfactoryinterface_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerWidgetFactoryInterface_SuperMetacall((QDesignerWidgetFactoryInterface*)self, param1, param2, param3);
}

const char* q_designerwidgetfactoryinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDesignerFormEditorInterface* q_designerwidgetfactoryinterface_core(void* self) {
    return QDesignerWidgetFactoryInterface_Core((QDesignerWidgetFactoryInterface*)self);
}

void q_designerwidgetfactoryinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)()) {
    QDesignerWidgetFactoryInterface_OnCore((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designerwidgetfactoryinterface_super_core(void* self) {
    return QDesignerWidgetFactoryInterface_SuperCore((QDesignerWidgetFactoryInterface*)self);
}

QWidget* q_designerwidgetfactoryinterface_container_of_widget(void* self, void* w) {
    return QDesignerWidgetFactoryInterface_ContainerOfWidget((QDesignerWidgetFactoryInterface*)self, (QWidget*)w);
}

void q_designerwidgetfactoryinterface_on_container_of_widget(void* self, QWidget* (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnContainerOfWidget((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

QWidget* q_designerwidgetfactoryinterface_super_container_of_widget(void* self, void* w) {
    return QDesignerWidgetFactoryInterface_SuperContainerOfWidget((QDesignerWidgetFactoryInterface*)self, (QWidget*)w);
}

QWidget* q_designerwidgetfactoryinterface_widget_of_container(void* self, void* w) {
    return QDesignerWidgetFactoryInterface_WidgetOfContainer((QDesignerWidgetFactoryInterface*)self, (QWidget*)w);
}

void q_designerwidgetfactoryinterface_on_widget_of_container(void* self, QWidget* (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnWidgetOfContainer((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

QWidget* q_designerwidgetfactoryinterface_super_widget_of_container(void* self, void* w) {
    return QDesignerWidgetFactoryInterface_SuperWidgetOfContainer((QDesignerWidgetFactoryInterface*)self, (QWidget*)w);
}

QWidget* q_designerwidgetfactoryinterface_create_widget(void* self, const char* name, void* parentWidget) {
    return QDesignerWidgetFactoryInterface_CreateWidget((QDesignerWidgetFactoryInterface*)self, qstring(name), (QWidget*)parentWidget);
}

void q_designerwidgetfactoryinterface_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*)) {
    QDesignerWidgetFactoryInterface_OnCreateWidget((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

QWidget* q_designerwidgetfactoryinterface_super_create_widget(void* self, const char* name, void* parentWidget) {
    return QDesignerWidgetFactoryInterface_SuperCreateWidget((QDesignerWidgetFactoryInterface*)self, qstring(name), (QWidget*)parentWidget);
}

QLayout* q_designerwidgetfactoryinterface_create_layout(void* self, void* widget, void* layout, int type) {
    return QDesignerWidgetFactoryInterface_CreateLayout((QDesignerWidgetFactoryInterface*)self, (QWidget*)widget, (QLayout*)layout, type);
}

void q_designerwidgetfactoryinterface_on_create_layout(void* self, QLayout* (*callback)(void*, void*, void*, int)) {
    QDesignerWidgetFactoryInterface_OnCreateLayout((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

QLayout* q_designerwidgetfactoryinterface_super_create_layout(void* self, void* widget, void* layout, int type) {
    return QDesignerWidgetFactoryInterface_SuperCreateLayout((QDesignerWidgetFactoryInterface*)self, (QWidget*)widget, (QLayout*)layout, type);
}

bool q_designerwidgetfactoryinterface_is_passive_interactor(void* self, void* widget) {
    return QDesignerWidgetFactoryInterface_IsPassiveInteractor((QDesignerWidgetFactoryInterface*)self, (QWidget*)widget);
}

void q_designerwidgetfactoryinterface_on_is_passive_interactor(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnIsPassiveInteractor((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetfactoryinterface_super_is_passive_interactor(void* self, void* widget) {
    return QDesignerWidgetFactoryInterface_SuperIsPassiveInteractor((QDesignerWidgetFactoryInterface*)self, (QWidget*)widget);
}

void q_designerwidgetfactoryinterface_initialize(void* self, void* object) {
    QDesignerWidgetFactoryInterface_Initialize((QDesignerWidgetFactoryInterface*)self, (QObject*)object);
}

void q_designerwidgetfactoryinterface_on_initialize(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnInitialize((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_super_initialize(void* self, void* object) {
    QDesignerWidgetFactoryInterface_SuperInitialize((QDesignerWidgetFactoryInterface*)self, (QObject*)object);
}

const char* q_designerwidgetfactoryinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerwidgetfactoryinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerwidgetfactoryinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetfactoryinterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerwidgetfactoryinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerwidgetfactoryinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerwidgetfactoryinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerwidgetfactoryinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerwidgetfactoryinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerwidgetfactoryinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerwidgetfactoryinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerwidgetfactoryinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerwidgetfactoryinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerwidgetfactoryinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerwidgetfactoryinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerwidgetfactoryinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerwidgetfactoryinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerwidgetfactoryinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerwidgetfactoryinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerwidgetfactoryinterface_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_designerwidgetfactoryinterface_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerwidgetfactoryinterface_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerwidgetfactoryinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_designerwidgetfactoryinterface_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerwidgetfactoryinterface_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_designerwidgetfactoryinterface_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_designerwidgetfactoryinterface_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_designerwidgetfactoryinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerwidgetfactoryinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerwidgetfactoryinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerwidgetfactoryinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerwidgetfactoryinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerwidgetfactoryinterface_dynamic_property_names\n");
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

QBindingStorage* q_designerwidgetfactoryinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerwidgetfactoryinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerwidgetfactoryinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerwidgetfactoryinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerwidgetfactoryinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerwidgetfactoryinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerwidgetfactoryinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerwidgetfactoryinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerwidgetfactoryinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerwidgetfactoryinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_designerwidgetfactoryinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerwidgetfactoryinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_designerwidgetfactoryinterface_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_designerwidgetfactoryinterface_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_designerwidgetfactoryinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_designerwidgetfactoryinterface_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_designerwidgetfactoryinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerwidgetfactoryinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerwidgetfactoryinterface_event(void* self, void* event) {
    return QDesignerWidgetFactoryInterface_Event((QDesignerWidgetFactoryInterface*)self, (QEvent*)event);
}

bool q_designerwidgetfactoryinterface_super_event(void* self, void* event) {
    return QDesignerWidgetFactoryInterface_SuperEvent((QDesignerWidgetFactoryInterface*)self, (QEvent*)event);
}

void q_designerwidgetfactoryinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnEvent((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetfactoryinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerWidgetFactoryInterface_EventFilter((QDesignerWidgetFactoryInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerwidgetfactoryinterface_super_event_filter(void* self, void* watched, void* event) {
    return QDesignerWidgetFactoryInterface_SuperEventFilter((QDesignerWidgetFactoryInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerwidgetfactoryinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerWidgetFactoryInterface_OnEventFilter((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_timer_event(void* self, void* event) {
    QDesignerWidgetFactoryInterface_TimerEvent((QDesignerWidgetFactoryInterface*)self, (QTimerEvent*)event);
}

void q_designerwidgetfactoryinterface_super_timer_event(void* self, void* event) {
    QDesignerWidgetFactoryInterface_SuperTimerEvent((QDesignerWidgetFactoryInterface*)self, (QTimerEvent*)event);
}

void q_designerwidgetfactoryinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnTimerEvent((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_child_event(void* self, void* event) {
    QDesignerWidgetFactoryInterface_ChildEvent((QDesignerWidgetFactoryInterface*)self, (QChildEvent*)event);
}

void q_designerwidgetfactoryinterface_super_child_event(void* self, void* event) {
    QDesignerWidgetFactoryInterface_SuperChildEvent((QDesignerWidgetFactoryInterface*)self, (QChildEvent*)event);
}

void q_designerwidgetfactoryinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnChildEvent((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_custom_event(void* self, void* event) {
    QDesignerWidgetFactoryInterface_CustomEvent((QDesignerWidgetFactoryInterface*)self, (QEvent*)event);
}

void q_designerwidgetfactoryinterface_super_custom_event(void* self, void* event) {
    QDesignerWidgetFactoryInterface_SuperCustomEvent((QDesignerWidgetFactoryInterface*)self, (QEvent*)event);
}

void q_designerwidgetfactoryinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnCustomEvent((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_connect_notify(void* self, void* signal) {
    QDesignerWidgetFactoryInterface_ConnectNotify((QDesignerWidgetFactoryInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetfactoryinterface_super_connect_notify(void* self, void* signal) {
    QDesignerWidgetFactoryInterface_SuperConnectNotify((QDesignerWidgetFactoryInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetfactoryinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnConnectNotify((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_disconnect_notify(void* self, void* signal) {
    QDesignerWidgetFactoryInterface_DisconnectNotify((QDesignerWidgetFactoryInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetfactoryinterface_super_disconnect_notify(void* self, void* signal) {
    QDesignerWidgetFactoryInterface_SuperDisconnectNotify((QDesignerWidgetFactoryInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetfactoryinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnDisconnectNotify((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

QObject* q_designerwidgetfactoryinterface_sender(void* self) {
    return QDesignerWidgetFactoryInterface_Sender((QDesignerWidgetFactoryInterface*)self);
}

QObject* q_designerwidgetfactoryinterface_super_sender(void* self) {
    return QDesignerWidgetFactoryInterface_SuperSender((QDesignerWidgetFactoryInterface*)self);
}

void q_designerwidgetfactoryinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerWidgetFactoryInterface_OnSender((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetfactoryinterface_sender_signal_index(void* self) {
    return QDesignerWidgetFactoryInterface_SenderSignalIndex((QDesignerWidgetFactoryInterface*)self);
}

int32_t q_designerwidgetfactoryinterface_super_sender_signal_index(void* self) {
    return QDesignerWidgetFactoryInterface_SuperSenderSignalIndex((QDesignerWidgetFactoryInterface*)self);
}

void q_designerwidgetfactoryinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerWidgetFactoryInterface_OnSenderSignalIndex((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetfactoryinterface_receivers(void* self, const char* signal) {
    return QDesignerWidgetFactoryInterface_Receivers((QDesignerWidgetFactoryInterface*)self, signal);
}

int32_t q_designerwidgetfactoryinterface_super_receivers(void* self, const char* signal) {
    return QDesignerWidgetFactoryInterface_SuperReceivers((QDesignerWidgetFactoryInterface*)self, signal);
}

void q_designerwidgetfactoryinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerWidgetFactoryInterface_OnReceivers((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetfactoryinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerWidgetFactoryInterface_IsSignalConnected((QDesignerWidgetFactoryInterface*)self, (QMetaMethod*)signal);
}

bool q_designerwidgetfactoryinterface_super_is_signal_connected(void* self, void* signal) {
    return QDesignerWidgetFactoryInterface_SuperIsSignalConnected((QDesignerWidgetFactoryInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetfactoryinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetFactoryInterface_OnIsSignalConnected((QDesignerWidgetFactoryInterface*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerwidgetfactoryinterface_delete(void* self) {
    QDesignerWidgetFactoryInterface_Delete((QDesignerWidgetFactoryInterface*)(self));
}
