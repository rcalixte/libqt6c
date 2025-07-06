#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqwidgetaction.hpp"
#include "libqwidgetaction.h"

QWidgetAction* q_widgetaction_new(void* parent) {
    return QWidgetAction_new((QObject*)parent);
}

const QMetaObject* q_widgetaction_meta_object(void* self) {
    return QWidgetAction_MetaObject((QWidgetAction*)self);
}

void* q_widgetaction_metacast(void* self, const char* param1) {
    return QWidgetAction_Metacast((QWidgetAction*)self, param1);
}

int32_t q_widgetaction_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidgetAction_Metacall((QWidgetAction*)self, param1, param2, param3);
}

void q_widgetaction_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWidgetAction_OnMetacall((QWidgetAction*)self, (intptr_t)slot);
}

int32_t q_widgetaction_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidgetAction_QBaseMetacall((QWidgetAction*)self, param1, param2, param3);
}

const char* q_widgetaction_tr(const char* s) {
    libqt_string _str = QWidgetAction_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* q_widgetaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* q_widgetaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void q_widgetaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

bool q_widgetaction_event(void* self, void* param1) {
    return QWidgetAction_Event((QWidgetAction*)self, (QEvent*)param1);
}

void q_widgetaction_on_event(void* self, bool (*slot)(void*, void*)) {
    QWidgetAction_OnEvent((QWidgetAction*)self, (intptr_t)slot);
}

bool q_widgetaction_qbase_event(void* self, void* param1) {
    return QWidgetAction_QBaseEvent((QWidgetAction*)self, (QEvent*)param1);
}

bool q_widgetaction_event_filter(void* self, void* param1, void* param2) {
    return QWidgetAction_EventFilter((QWidgetAction*)self, (QObject*)param1, (QEvent*)param2);
}

void q_widgetaction_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWidgetAction_OnEventFilter((QWidgetAction*)self, (intptr_t)slot);
}

bool q_widgetaction_qbase_event_filter(void* self, void* param1, void* param2) {
    return QWidgetAction_QBaseEventFilter((QWidgetAction*)self, (QObject*)param1, (QEvent*)param2);
}

QWidget* q_widgetaction_create_widget(void* self, void* parent) {
    return QWidgetAction_CreateWidget((QWidgetAction*)self, (QWidget*)parent);
}

void q_widgetaction_on_create_widget(void* self, QWidget* (*slot)(void*, void*)) {
    QWidgetAction_OnCreateWidget((QWidgetAction*)self, (intptr_t)slot);
}

QWidget* q_widgetaction_qbase_create_widget(void* self, void* parent) {
    return QWidgetAction_QBaseCreateWidget((QWidgetAction*)self, (QWidget*)parent);
}

void q_widgetaction_delete_widget(void* self, void* widget) {
    QWidgetAction_DeleteWidget((QWidgetAction*)self, (QWidget*)widget);
}

void q_widgetaction_on_delete_widget(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnDeleteWidget((QWidgetAction*)self, (intptr_t)slot);
}

void q_widgetaction_qbase_delete_widget(void* self, void* widget) {
    QWidgetAction_QBaseDeleteWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QWidget* */ q_widgetaction_created_widgets(void* self) {
    libqt_list _arr = QWidgetAction_CreatedWidgets((QWidgetAction*)self);
    return _arr;
}

void q_widgetaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*slot)()) {
    QWidgetAction_OnCreatedWidgets((QWidgetAction*)self, (intptr_t)slot);
}

libqt_list /* of QWidget* */ q_widgetaction_qbase_created_widgets(void* self) {
    libqt_list _arr = QWidgetAction_QBaseCreatedWidgets((QWidgetAction*)self);
    return _arr;
}

const char* q_widgetaction_tr2(const char* s, const char* c) {
    libqt_string _str = QWidgetAction_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_widgetaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWidgetAction_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QObject* */ q_widgetaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void q_widgetaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* q_widgetaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void q_widgetaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* q_widgetaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void q_widgetaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* q_widgetaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* q_widgetaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* q_widgetaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* q_widgetaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* q_widgetaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_priority(void* self, int64_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int64_t q_widgetaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void q_widgetaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool q_widgetaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void q_widgetaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* q_widgetaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void q_widgetaction_set_shortcuts(void* self, libqt_list shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void q_widgetaction_set_shortcuts_with_shortcuts(void* self, int64_t shortcuts) {
    QAction_SetShortcutsWithShortcuts((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ q_widgetaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void q_widgetaction_set_shortcut_context(void* self, int64_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int64_t q_widgetaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void q_widgetaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool q_widgetaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void q_widgetaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* q_widgetaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void q_widgetaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool q_widgetaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* q_widgetaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void q_widgetaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool q_widgetaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool q_widgetaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool q_widgetaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void q_widgetaction_activate(void* self, int64_t event) {
    QAction_Activate((QAction*)self, event);
}

void q_widgetaction_set_menu_role(void* self, int64_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int64_t q_widgetaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void q_widgetaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool q_widgetaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void q_widgetaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool q_widgetaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool q_widgetaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void q_widgetaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void q_widgetaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void q_widgetaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void q_widgetaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void q_widgetaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void q_widgetaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void q_widgetaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void q_widgetaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void q_widgetaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void q_widgetaction_on_changed(void* self, void (*slot)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)slot);
}

void q_widgetaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void q_widgetaction_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)slot);
}

void q_widgetaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void q_widgetaction_on_checkable_changed(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)slot);
}

void q_widgetaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void q_widgetaction_on_visible_changed(void* self, void (*slot)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)slot);
}

void q_widgetaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void q_widgetaction_on_triggered(void* self, void (*slot)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)slot);
}

void q_widgetaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void q_widgetaction_on_hovered(void* self, void (*slot)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)slot);
}

void q_widgetaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void q_widgetaction_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)slot);
}

bool q_widgetaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void q_widgetaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void q_widgetaction_on_triggered1(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)slot);
}

const char* q_widgetaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widgetaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_widgetaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_widgetaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_widgetaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_widgetaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_widgetaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_widgetaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_widgetaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_widgetaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_widgetaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_widgetaction_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_widgetaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_widgetaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_widgetaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_widgetaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_widgetaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_widgetaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_widgetaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_widgetaction_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_widgetaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_widgetaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_widgetaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_widgetaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_widgetaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_widgetaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_widgetaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_widgetaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_widgetaction_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_widgetaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_widgetaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_widgetaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_widgetaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_widgetaction_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_widgetaction_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_widgetaction_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_widgetaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_widgetaction_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_widgetaction_timer_event(void* self, void* event) {
    QWidgetAction_TimerEvent((QWidgetAction*)self, (QTimerEvent*)event);
}

void q_widgetaction_qbase_timer_event(void* self, void* event) {
    QWidgetAction_QBaseTimerEvent((QWidgetAction*)self, (QTimerEvent*)event);
}

void q_widgetaction_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnTimerEvent((QWidgetAction*)self, (intptr_t)slot);
}

void q_widgetaction_child_event(void* self, void* event) {
    QWidgetAction_ChildEvent((QWidgetAction*)self, (QChildEvent*)event);
}

void q_widgetaction_qbase_child_event(void* self, void* event) {
    QWidgetAction_QBaseChildEvent((QWidgetAction*)self, (QChildEvent*)event);
}

void q_widgetaction_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnChildEvent((QWidgetAction*)self, (intptr_t)slot);
}

void q_widgetaction_custom_event(void* self, void* event) {
    QWidgetAction_CustomEvent((QWidgetAction*)self, (QEvent*)event);
}

void q_widgetaction_qbase_custom_event(void* self, void* event) {
    QWidgetAction_QBaseCustomEvent((QWidgetAction*)self, (QEvent*)event);
}

void q_widgetaction_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnCustomEvent((QWidgetAction*)self, (intptr_t)slot);
}

void q_widgetaction_connect_notify(void* self, void* signal) {
    QWidgetAction_ConnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

void q_widgetaction_qbase_connect_notify(void* self, void* signal) {
    QWidgetAction_QBaseConnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

void q_widgetaction_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnConnectNotify((QWidgetAction*)self, (intptr_t)slot);
}

void q_widgetaction_disconnect_notify(void* self, void* signal) {
    QWidgetAction_DisconnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

void q_widgetaction_qbase_disconnect_notify(void* self, void* signal) {
    QWidgetAction_QBaseDisconnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

void q_widgetaction_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnDisconnectNotify((QWidgetAction*)self, (intptr_t)slot);
}

QObject* q_widgetaction_sender(void* self) {
    return QWidgetAction_Sender((QWidgetAction*)self);
}

QObject* q_widgetaction_qbase_sender(void* self) {
    return QWidgetAction_QBaseSender((QWidgetAction*)self);
}

void q_widgetaction_on_sender(void* self, QObject* (*slot)()) {
    QWidgetAction_OnSender((QWidgetAction*)self, (intptr_t)slot);
}

int32_t q_widgetaction_sender_signal_index(void* self) {
    return QWidgetAction_SenderSignalIndex((QWidgetAction*)self);
}

int32_t q_widgetaction_qbase_sender_signal_index(void* self) {
    return QWidgetAction_QBaseSenderSignalIndex((QWidgetAction*)self);
}

void q_widgetaction_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWidgetAction_OnSenderSignalIndex((QWidgetAction*)self, (intptr_t)slot);
}

int32_t q_widgetaction_receivers(void* self, const char* signal) {
    return QWidgetAction_Receivers((QWidgetAction*)self, signal);
}

int32_t q_widgetaction_qbase_receivers(void* self, const char* signal) {
    return QWidgetAction_QBaseReceivers((QWidgetAction*)self, signal);
}

void q_widgetaction_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWidgetAction_OnReceivers((QWidgetAction*)self, (intptr_t)slot);
}

bool q_widgetaction_is_signal_connected(void* self, void* signal) {
    return QWidgetAction_IsSignalConnected((QWidgetAction*)self, (QMetaMethod*)signal);
}

bool q_widgetaction_qbase_is_signal_connected(void* self, void* signal) {
    return QWidgetAction_QBaseIsSignalConnected((QWidgetAction*)self, (QMetaMethod*)signal);
}

void q_widgetaction_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWidgetAction_OnIsSignalConnected((QWidgetAction*)self, (intptr_t)slot);
}

void q_widgetaction_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_widgetaction_delete(void* self) {
    QWidgetAction_Delete((QWidgetAction*)(self));
}
