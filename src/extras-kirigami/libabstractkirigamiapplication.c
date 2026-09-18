#include "libkirigamiactioncollection.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsortfilterproxymodel.hpp"
#include "libabstractkirigamiapplication.hpp"
#include "libabstractkirigamiapplication.h"

AbstractKirigamiApplication* q_abstractkirigamiapplication_new() {
    return AbstractKirigamiApplication_New();
}

AbstractKirigamiApplication* q_abstractkirigamiapplication_new2(void* parent) {
    return AbstractKirigamiApplication_New2((QObject*)parent);
}

const QMetaObject* q_abstractkirigamiapplication_meta_object(void* self) {
    return AbstractKirigamiApplication_MetaObject((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    AbstractKirigamiApplication_OnMetaObject((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

const QMetaObject* q_abstractkirigamiapplication_super_meta_object(void* self) {
    return AbstractKirigamiApplication_SuperMetaObject((AbstractKirigamiApplication*)self);
}

void* q_abstractkirigamiapplication_metacast(void* self, const char* param1) {
    return AbstractKirigamiApplication_Metacast((AbstractKirigamiApplication*)self, param1);
}

void q_abstractkirigamiapplication_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    AbstractKirigamiApplication_OnMetacast((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void* q_abstractkirigamiapplication_super_metacast(void* self, const char* param1) {
    return AbstractKirigamiApplication_SuperMetacast((AbstractKirigamiApplication*)self, param1);
}

int32_t q_abstractkirigamiapplication_metacall(void* self, int32_t param1, int param2, void* param3) {
    return AbstractKirigamiApplication_Metacall((AbstractKirigamiApplication*)self, param1, param2, param3);
}

void q_abstractkirigamiapplication_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    AbstractKirigamiApplication_OnMetacall((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

int32_t q_abstractkirigamiapplication_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return AbstractKirigamiApplication_SuperMetacall((AbstractKirigamiApplication*)self, param1, param2, param3);
}

const char* q_abstractkirigamiapplication_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KirigamiActionCollection* */ q_abstractkirigamiapplication_action_collections(void* self) {
    libqt_list _arr = AbstractKirigamiApplication_ActionCollections((AbstractKirigamiApplication*)self);
    return _arr;
}

void q_abstractkirigamiapplication_on_action_collections(void* self, libqt_list /* of KirigamiActionCollection* */ (*callback)()) {
    AbstractKirigamiApplication_OnActionCollections((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

libqt_list /* of KirigamiActionCollection* */ q_abstractkirigamiapplication_super_action_collections(void* self) {
    libqt_list _arr = AbstractKirigamiApplication_SuperActionCollections((AbstractKirigamiApplication*)self);
    return _arr;
}

KirigamiActionCollection* q_abstractkirigamiapplication_main_collection(void* self) {
    return AbstractKirigamiApplication_MainCollection((AbstractKirigamiApplication*)self);
}

QSortFilterProxyModel* q_abstractkirigamiapplication_actions_model(void* self) {
    return AbstractKirigamiApplication_ActionsModel((AbstractKirigamiApplication*)self);
}

QAbstractListModel* q_abstractkirigamiapplication_shortcuts_model(void* self) {
    return AbstractKirigamiApplication_ShortcutsModel((AbstractKirigamiApplication*)self);
}

QAction* q_abstractkirigamiapplication_action(void* self, const char* actionName) {
    return AbstractKirigamiApplication_Action((AbstractKirigamiApplication*)self, qstring(actionName));
}

QObject* q_abstractkirigamiapplication_configuration_view(void* self) {
    return AbstractKirigamiApplication_ConfigurationView((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_set_configuration_view(void* self, void* configurationView) {
    AbstractKirigamiApplication_SetConfigurationView((AbstractKirigamiApplication*)self, (QObject*)configurationView);
}

void q_abstractkirigamiapplication_open_about_page(void* self) {
    AbstractKirigamiApplication_OpenAboutPage((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_open_about_page(void* self, void (*callback)(void*)) {
    AbstractKirigamiApplication_Connect_OpenAboutPage((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_open_about_k_d_e_page(void* self) {
    AbstractKirigamiApplication_OpenAboutKDEPage((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_open_about_k_d_e_page(void* self, void (*callback)(void*)) {
    AbstractKirigamiApplication_Connect_OpenAboutKDEPage((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_open_k_command_bar_action(void* self) {
    AbstractKirigamiApplication_OpenKCommandBarAction((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_open_k_command_bar_action(void* self, void (*callback)(void*)) {
    AbstractKirigamiApplication_Connect_OpenKCommandBarAction((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_shortcuts_editor_action(void* self) {
    AbstractKirigamiApplication_ShortcutsEditorAction((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_shortcuts_editor_action(void* self, void (*callback)(void*)) {
    AbstractKirigamiApplication_Connect_ShortcutsEditorAction((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_configuration_view_changed(void* self) {
    AbstractKirigamiApplication_ConfigurationViewChanged((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_configuration_view_changed(void* self, void (*callback)(void*)) {
    AbstractKirigamiApplication_Connect_ConfigurationViewChanged((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_setup_actions(void* self) {
    AbstractKirigamiApplication_SetupActions((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_setup_actions(void* self, void (*callback)()) {
    AbstractKirigamiApplication_OnSetupActions((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_super_setup_actions(void* self) {
    AbstractKirigamiApplication_SuperSetupActions((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_read_settings(void* self) {
    AbstractKirigamiApplication_ReadSettings((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_read_settings(void* self, void (*callback)()) {
    AbstractKirigamiApplication_OnReadSettings((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_super_read_settings(void* self) {
    AbstractKirigamiApplication_SuperReadSettings((AbstractKirigamiApplication*)self);
}

const char* q_abstractkirigamiapplication_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractkirigamiapplication_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractkirigamiapplication_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractkirigamiapplication_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractkirigamiapplication_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractkirigamiapplication_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractkirigamiapplication_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractkirigamiapplication_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractkirigamiapplication_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractkirigamiapplication_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractkirigamiapplication_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractkirigamiapplication_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_abstractkirigamiapplication_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_abstractkirigamiapplication_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractkirigamiapplication_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractkirigamiapplication_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractkirigamiapplication_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractkirigamiapplication_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractkirigamiapplication_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractkirigamiapplication_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_abstractkirigamiapplication_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractkirigamiapplication_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractkirigamiapplication_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_abstractkirigamiapplication_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractkirigamiapplication_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_abstractkirigamiapplication_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_abstractkirigamiapplication_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_abstractkirigamiapplication_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractkirigamiapplication_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractkirigamiapplication_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractkirigamiapplication_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractkirigamiapplication_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstractkirigamiapplication_dynamic_property_names\n");
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

QBindingStorage* q_abstractkirigamiapplication_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractkirigamiapplication_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractkirigamiapplication_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractkirigamiapplication_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstractkirigamiapplication_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractkirigamiapplication_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractkirigamiapplication_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstractkirigamiapplication_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_abstractkirigamiapplication_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_abstractkirigamiapplication_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_abstractkirigamiapplication_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstractkirigamiapplication_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_abstractkirigamiapplication_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_abstractkirigamiapplication_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_abstractkirigamiapplication_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_abstractkirigamiapplication_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_abstractkirigamiapplication_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractkirigamiapplication_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstractkirigamiapplication_event(void* self, void* event) {
    return AbstractKirigamiApplication_Event((AbstractKirigamiApplication*)self, (QEvent*)event);
}

bool q_abstractkirigamiapplication_super_event(void* self, void* event) {
    return AbstractKirigamiApplication_SuperEvent((AbstractKirigamiApplication*)self, (QEvent*)event);
}

void q_abstractkirigamiapplication_on_event(void* self, bool (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnEvent((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

bool q_abstractkirigamiapplication_event_filter(void* self, void* watched, void* event) {
    return AbstractKirigamiApplication_EventFilter((AbstractKirigamiApplication*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractkirigamiapplication_super_event_filter(void* self, void* watched, void* event) {
    return AbstractKirigamiApplication_SuperEventFilter((AbstractKirigamiApplication*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractkirigamiapplication_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    AbstractKirigamiApplication_OnEventFilter((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_timer_event(void* self, void* event) {
    AbstractKirigamiApplication_TimerEvent((AbstractKirigamiApplication*)self, (QTimerEvent*)event);
}

void q_abstractkirigamiapplication_super_timer_event(void* self, void* event) {
    AbstractKirigamiApplication_SuperTimerEvent((AbstractKirigamiApplication*)self, (QTimerEvent*)event);
}

void q_abstractkirigamiapplication_on_timer_event(void* self, void (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnTimerEvent((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_child_event(void* self, void* event) {
    AbstractKirigamiApplication_ChildEvent((AbstractKirigamiApplication*)self, (QChildEvent*)event);
}

void q_abstractkirigamiapplication_super_child_event(void* self, void* event) {
    AbstractKirigamiApplication_SuperChildEvent((AbstractKirigamiApplication*)self, (QChildEvent*)event);
}

void q_abstractkirigamiapplication_on_child_event(void* self, void (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnChildEvent((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_custom_event(void* self, void* event) {
    AbstractKirigamiApplication_CustomEvent((AbstractKirigamiApplication*)self, (QEvent*)event);
}

void q_abstractkirigamiapplication_super_custom_event(void* self, void* event) {
    AbstractKirigamiApplication_SuperCustomEvent((AbstractKirigamiApplication*)self, (QEvent*)event);
}

void q_abstractkirigamiapplication_on_custom_event(void* self, void (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnCustomEvent((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_connect_notify(void* self, void* signal) {
    AbstractKirigamiApplication_ConnectNotify((AbstractKirigamiApplication*)self, (QMetaMethod*)signal);
}

void q_abstractkirigamiapplication_super_connect_notify(void* self, void* signal) {
    AbstractKirigamiApplication_SuperConnectNotify((AbstractKirigamiApplication*)self, (QMetaMethod*)signal);
}

void q_abstractkirigamiapplication_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnConnectNotify((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_disconnect_notify(void* self, void* signal) {
    AbstractKirigamiApplication_DisconnectNotify((AbstractKirigamiApplication*)self, (QMetaMethod*)signal);
}

void q_abstractkirigamiapplication_super_disconnect_notify(void* self, void* signal) {
    AbstractKirigamiApplication_SuperDisconnectNotify((AbstractKirigamiApplication*)self, (QMetaMethod*)signal);
}

void q_abstractkirigamiapplication_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnDisconnectNotify((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

QObject* q_abstractkirigamiapplication_sender(void* self) {
    return AbstractKirigamiApplication_Sender((AbstractKirigamiApplication*)self);
}

QObject* q_abstractkirigamiapplication_super_sender(void* self) {
    return AbstractKirigamiApplication_SuperSender((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_sender(void* self, QObject* (*callback)()) {
    AbstractKirigamiApplication_OnSender((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

int32_t q_abstractkirigamiapplication_sender_signal_index(void* self) {
    return AbstractKirigamiApplication_SenderSignalIndex((AbstractKirigamiApplication*)self);
}

int32_t q_abstractkirigamiapplication_super_sender_signal_index(void* self) {
    return AbstractKirigamiApplication_SuperSenderSignalIndex((AbstractKirigamiApplication*)self);
}

void q_abstractkirigamiapplication_on_sender_signal_index(void* self, int32_t (*callback)()) {
    AbstractKirigamiApplication_OnSenderSignalIndex((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

int32_t q_abstractkirigamiapplication_receivers(void* self, const char* signal) {
    return AbstractKirigamiApplication_Receivers((AbstractKirigamiApplication*)self, signal);
}

int32_t q_abstractkirigamiapplication_super_receivers(void* self, const char* signal) {
    return AbstractKirigamiApplication_SuperReceivers((AbstractKirigamiApplication*)self, signal);
}

void q_abstractkirigamiapplication_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    AbstractKirigamiApplication_OnReceivers((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

bool q_abstractkirigamiapplication_is_signal_connected(void* self, void* signal) {
    return AbstractKirigamiApplication_IsSignalConnected((AbstractKirigamiApplication*)self, (QMetaMethod*)signal);
}

bool q_abstractkirigamiapplication_super_is_signal_connected(void* self, void* signal) {
    return AbstractKirigamiApplication_SuperIsSignalConnected((AbstractKirigamiApplication*)self, (QMetaMethod*)signal);
}

void q_abstractkirigamiapplication_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    AbstractKirigamiApplication_OnIsSignalConnected((AbstractKirigamiApplication*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractkirigamiapplication_delete(void* self) {
    AbstractKirigamiApplication_Delete((AbstractKirigamiApplication*)(self));
}
