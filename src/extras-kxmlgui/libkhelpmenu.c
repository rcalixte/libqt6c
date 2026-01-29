#include "../extras-kcoreaddons/libkaboutdata.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkhelpmenu.hpp"
#include "libkhelpmenu.h"

KHelpMenu* k_helpmenu_new(void* parent) {
    return KHelpMenu_new((QWidget*)parent);
}

KHelpMenu* k_helpmenu_new2(void* parent, const char* unused) {
    return KHelpMenu_new2((QWidget*)parent, qstring(unused));
}

KHelpMenu* k_helpmenu_new3() {
    return KHelpMenu_new3();
}

KHelpMenu* k_helpmenu_new4(void* parent, void* aboutData, bool showWhatsThis) {
    return KHelpMenu_new4((QWidget*)parent, (KAboutData*)aboutData, showWhatsThis);
}

KHelpMenu* k_helpmenu_new5(void* parent, void* aboutData) {
    return KHelpMenu_new5((QWidget*)parent, (KAboutData*)aboutData);
}

KHelpMenu* k_helpmenu_new6(void* parent, const char* unused, bool showWhatsThis) {
    return KHelpMenu_new6((QWidget*)parent, qstring(unused), showWhatsThis);
}

const QMetaObject* k_helpmenu_meta_object(void* self) {
    return KHelpMenu_MetaObject((KHelpMenu*)self);
}

void k_helpmenu_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KHelpMenu_OnMetaObject((KHelpMenu*)self, (intptr_t)callback);
}

const QMetaObject* k_helpmenu_qbase_meta_object(void* self) {
    return KHelpMenu_QBaseMetaObject((KHelpMenu*)self);
}

void* k_helpmenu_metacast(void* self, const char* param1) {
    return KHelpMenu_Metacast((KHelpMenu*)self, param1);
}

void k_helpmenu_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KHelpMenu_OnMetacast((KHelpMenu*)self, (intptr_t)callback);
}

void* k_helpmenu_qbase_metacast(void* self, const char* param1) {
    return KHelpMenu_QBaseMetacast((KHelpMenu*)self, param1);
}

int32_t k_helpmenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KHelpMenu_Metacall((KHelpMenu*)self, param1, param2, param3);
}

void k_helpmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KHelpMenu_OnMetacall((KHelpMenu*)self, (intptr_t)callback);
}

int32_t k_helpmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KHelpMenu_QBaseMetacall((KHelpMenu*)self, param1, param2, param3);
}

const char* k_helpmenu_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_helpmenu_set_show_whats_this(void* self, bool showWhatsThis) {
    KHelpMenu_SetShowWhatsThis((KHelpMenu*)self, showWhatsThis);
}

QMenu* k_helpmenu_menu(void* self) {
    return KHelpMenu_Menu((KHelpMenu*)self);
}

QAction* k_helpmenu_action(void* self, int32_t id) {
    return KHelpMenu_Action((KHelpMenu*)self, id);
}

void k_helpmenu_app_help_activated(void* self) {
    KHelpMenu_AppHelpActivated((KHelpMenu*)self);
}

void k_helpmenu_context_help_activated(void* self) {
    KHelpMenu_ContextHelpActivated((KHelpMenu*)self);
}

void k_helpmenu_about_application(void* self) {
    KHelpMenu_AboutApplication((KHelpMenu*)self);
}

void k_helpmenu_about_k_d_e(void* self) {
    KHelpMenu_AboutKDE((KHelpMenu*)self);
}

void k_helpmenu_report_bug(void* self) {
    KHelpMenu_ReportBug((KHelpMenu*)self);
}

void k_helpmenu_switch_application_language(void* self) {
    KHelpMenu_SwitchApplicationLanguage((KHelpMenu*)self);
}

void k_helpmenu_donate(void* self) {
    KHelpMenu_Donate((KHelpMenu*)self);
}

void k_helpmenu_show_about_application(void* self) {
    KHelpMenu_ShowAboutApplication((KHelpMenu*)self);
}

void k_helpmenu_on_show_about_application(void* self, void (*callback)(void*)) {
    KHelpMenu_Connect_ShowAboutApplication((KHelpMenu*)self, (intptr_t)callback);
}

const char* k_helpmenu_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_helpmenu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_helpmenu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_helpmenu_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_helpmenu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_helpmenu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_helpmenu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_helpmenu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_helpmenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_helpmenu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_helpmenu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_helpmenu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_helpmenu_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_helpmenu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_helpmenu_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_helpmenu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_helpmenu_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_helpmenu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_helpmenu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_helpmenu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_helpmenu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_helpmenu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_helpmenu_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_helpmenu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_helpmenu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_helpmenu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_helpmenu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_helpmenu_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_helpmenu_dynamic_property_names\n");
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

QBindingStorage* k_helpmenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_helpmenu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_helpmenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_helpmenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_helpmenu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_helpmenu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_helpmenu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_helpmenu_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_helpmenu_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_helpmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_helpmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_helpmenu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_helpmenu_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_helpmenu_event(void* self, void* event) {
    return KHelpMenu_Event((KHelpMenu*)self, (QEvent*)event);
}

bool k_helpmenu_qbase_event(void* self, void* event) {
    return KHelpMenu_QBaseEvent((KHelpMenu*)self, (QEvent*)event);
}

void k_helpmenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KHelpMenu_OnEvent((KHelpMenu*)self, (intptr_t)callback);
}

bool k_helpmenu_event_filter(void* self, void* watched, void* event) {
    return KHelpMenu_EventFilter((KHelpMenu*)self, (QObject*)watched, (QEvent*)event);
}

bool k_helpmenu_qbase_event_filter(void* self, void* watched, void* event) {
    return KHelpMenu_QBaseEventFilter((KHelpMenu*)self, (QObject*)watched, (QEvent*)event);
}

void k_helpmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KHelpMenu_OnEventFilter((KHelpMenu*)self, (intptr_t)callback);
}

void k_helpmenu_timer_event(void* self, void* event) {
    KHelpMenu_TimerEvent((KHelpMenu*)self, (QTimerEvent*)event);
}

void k_helpmenu_qbase_timer_event(void* self, void* event) {
    KHelpMenu_QBaseTimerEvent((KHelpMenu*)self, (QTimerEvent*)event);
}

void k_helpmenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KHelpMenu_OnTimerEvent((KHelpMenu*)self, (intptr_t)callback);
}

void k_helpmenu_child_event(void* self, void* event) {
    KHelpMenu_ChildEvent((KHelpMenu*)self, (QChildEvent*)event);
}

void k_helpmenu_qbase_child_event(void* self, void* event) {
    KHelpMenu_QBaseChildEvent((KHelpMenu*)self, (QChildEvent*)event);
}

void k_helpmenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KHelpMenu_OnChildEvent((KHelpMenu*)self, (intptr_t)callback);
}

void k_helpmenu_custom_event(void* self, void* event) {
    KHelpMenu_CustomEvent((KHelpMenu*)self, (QEvent*)event);
}

void k_helpmenu_qbase_custom_event(void* self, void* event) {
    KHelpMenu_QBaseCustomEvent((KHelpMenu*)self, (QEvent*)event);
}

void k_helpmenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KHelpMenu_OnCustomEvent((KHelpMenu*)self, (intptr_t)callback);
}

void k_helpmenu_connect_notify(void* self, void* signal) {
    KHelpMenu_ConnectNotify((KHelpMenu*)self, (QMetaMethod*)signal);
}

void k_helpmenu_qbase_connect_notify(void* self, void* signal) {
    KHelpMenu_QBaseConnectNotify((KHelpMenu*)self, (QMetaMethod*)signal);
}

void k_helpmenu_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KHelpMenu_OnConnectNotify((KHelpMenu*)self, (intptr_t)callback);
}

void k_helpmenu_disconnect_notify(void* self, void* signal) {
    KHelpMenu_DisconnectNotify((KHelpMenu*)self, (QMetaMethod*)signal);
}

void k_helpmenu_qbase_disconnect_notify(void* self, void* signal) {
    KHelpMenu_QBaseDisconnectNotify((KHelpMenu*)self, (QMetaMethod*)signal);
}

void k_helpmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KHelpMenu_OnDisconnectNotify((KHelpMenu*)self, (intptr_t)callback);
}

QObject* k_helpmenu_sender(void* self) {
    return KHelpMenu_Sender((KHelpMenu*)self);
}

QObject* k_helpmenu_qbase_sender(void* self) {
    return KHelpMenu_QBaseSender((KHelpMenu*)self);
}

void k_helpmenu_on_sender(void* self, QObject* (*callback)()) {
    KHelpMenu_OnSender((KHelpMenu*)self, (intptr_t)callback);
}

int32_t k_helpmenu_sender_signal_index(void* self) {
    return KHelpMenu_SenderSignalIndex((KHelpMenu*)self);
}

int32_t k_helpmenu_qbase_sender_signal_index(void* self) {
    return KHelpMenu_QBaseSenderSignalIndex((KHelpMenu*)self);
}

void k_helpmenu_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KHelpMenu_OnSenderSignalIndex((KHelpMenu*)self, (intptr_t)callback);
}

int32_t k_helpmenu_receivers(void* self, const char* signal) {
    return KHelpMenu_Receivers((KHelpMenu*)self, signal);
}

int32_t k_helpmenu_qbase_receivers(void* self, const char* signal) {
    return KHelpMenu_QBaseReceivers((KHelpMenu*)self, signal);
}

void k_helpmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KHelpMenu_OnReceivers((KHelpMenu*)self, (intptr_t)callback);
}

bool k_helpmenu_is_signal_connected(void* self, void* signal) {
    return KHelpMenu_IsSignalConnected((KHelpMenu*)self, (QMetaMethod*)signal);
}

bool k_helpmenu_qbase_is_signal_connected(void* self, void* signal) {
    return KHelpMenu_QBaseIsSignalConnected((KHelpMenu*)self, (QMetaMethod*)signal);
}

void k_helpmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KHelpMenu_OnIsSignalConnected((KHelpMenu*)self, (intptr_t)callback);
}

void k_helpmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_helpmenu_delete(void* self) {
    KHelpMenu_Delete((KHelpMenu*)(self));
}
