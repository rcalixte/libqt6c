#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libktoolbarspaceraction.hpp"
#include "libktoolbarspaceraction.h"

KToolBarSpacerAction* k_toolbarspaceraction_new(void* parent) {
    return KToolBarSpacerAction_new((QObject*)parent);
}

const QMetaObject* k_toolbarspaceraction_meta_object(void* self) {
    return KToolBarSpacerAction_MetaObject((KToolBarSpacerAction*)self);
}

void* k_toolbarspaceraction_metacast(void* self, const char* param1) {
    return KToolBarSpacerAction_Metacast((KToolBarSpacerAction*)self, param1);
}

int32_t k_toolbarspaceraction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToolBarSpacerAction_Metacall((KToolBarSpacerAction*)self, param1, param2, param3);
}

void k_toolbarspaceraction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KToolBarSpacerAction_OnMetacall((KToolBarSpacerAction*)self, (intptr_t)callback);
}

int32_t k_toolbarspaceraction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToolBarSpacerAction_QBaseMetacall((KToolBarSpacerAction*)self, param1, param2, param3);
}

const char* k_toolbarspaceraction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_toolbarspaceraction_create_widget(void* self, void* parent) {
    return KToolBarSpacerAction_CreateWidget((KToolBarSpacerAction*)self, (QWidget*)parent);
}

void k_toolbarspaceraction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnCreateWidget((KToolBarSpacerAction*)self, (intptr_t)callback);
}

QWidget* k_toolbarspaceraction_qbase_create_widget(void* self, void* parent) {
    return KToolBarSpacerAction_QBaseCreateWidget((KToolBarSpacerAction*)self, (QWidget*)parent);
}

const char* k_toolbarspaceraction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_toolbarspaceraction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_toolbarspaceraction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_toolbarspaceraction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_toolbarspaceraction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_toolbarspaceraction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_toolbarspaceraction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_toolbarspaceraction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_toolbarspaceraction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_toolbarspaceraction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_toolbarspaceraction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_toolbarspaceraction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_toolbarspaceraction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_toolbarspaceraction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_toolbarspaceraction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_toolbarspaceraction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_toolbarspaceraction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_toolbarspaceraction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_toolbarspaceraction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_toolbarspaceraction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_toolbarspaceraction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_toolbarspaceraction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_toolbarspaceraction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_toolbarspaceraction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_toolbarspaceraction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_toolbarspaceraction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_toolbarspaceraction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_toolbarspaceraction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_toolbarspaceraction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_toolbarspaceraction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_toolbarspaceraction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_toolbarspaceraction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_toolbarspaceraction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_toolbarspaceraction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_toolbarspaceraction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_toolbarspaceraction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_toolbarspaceraction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_toolbarspaceraction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_toolbarspaceraction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_toolbarspaceraction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_toolbarspaceraction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_toolbarspaceraction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_toolbarspaceraction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_toolbarspaceraction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_toolbarspaceraction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_toolbarspaceraction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_toolbarspaceraction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_toolbarspaceraction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_toolbarspaceraction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_toolbarspaceraction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_toolbarspaceraction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_toolbarspaceraction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_toolbarspaceraction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_toolbarspaceraction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_toolbarspaceraction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_toolbarspaceraction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_toolbarspaceraction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_toolbarspaceraction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_toolbarspaceraction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_toolbarspaceraction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_toolbarspaceraction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_toolbarspaceraction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_toolbarspaceraction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_toolbarspaceraction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_toolbarspaceraction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarspaceraction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_toolbarspaceraction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_toolbarspaceraction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_toolbarspaceraction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_toolbarspaceraction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_toolbarspaceraction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_toolbarspaceraction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_toolbarspaceraction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_toolbarspaceraction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_toolbarspaceraction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_toolbarspaceraction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_toolbarspaceraction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_toolbarspaceraction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_toolbarspaceraction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_toolbarspaceraction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_toolbarspaceraction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_toolbarspaceraction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_toolbarspaceraction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_toolbarspaceraction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_toolbarspaceraction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_toolbarspaceraction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_toolbarspaceraction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_toolbarspaceraction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_toolbarspaceraction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_toolbarspaceraction_dynamic_property_names\n");
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

QBindingStorage* k_toolbarspaceraction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_toolbarspaceraction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_toolbarspaceraction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_toolbarspaceraction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_toolbarspaceraction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_toolbarspaceraction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_toolbarspaceraction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_toolbarspaceraction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_toolbarspaceraction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_toolbarspaceraction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_toolbarspaceraction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_toolbarspaceraction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_toolbarspaceraction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_toolbarspaceraction_event(void* self, void* param1) {
    return KToolBarSpacerAction_Event((KToolBarSpacerAction*)self, (QEvent*)param1);
}

bool k_toolbarspaceraction_qbase_event(void* self, void* param1) {
    return KToolBarSpacerAction_QBaseEvent((KToolBarSpacerAction*)self, (QEvent*)param1);
}

void k_toolbarspaceraction_on_event(void* self, bool (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnEvent((KToolBarSpacerAction*)self, (intptr_t)callback);
}

bool k_toolbarspaceraction_event_filter(void* self, void* param1, void* param2) {
    return KToolBarSpacerAction_EventFilter((KToolBarSpacerAction*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_toolbarspaceraction_qbase_event_filter(void* self, void* param1, void* param2) {
    return KToolBarSpacerAction_QBaseEventFilter((KToolBarSpacerAction*)self, (QObject*)param1, (QEvent*)param2);
}

void k_toolbarspaceraction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KToolBarSpacerAction_OnEventFilter((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_delete_widget(void* self, void* widget) {
    KToolBarSpacerAction_DeleteWidget((KToolBarSpacerAction*)self, (QWidget*)widget);
}

void k_toolbarspaceraction_qbase_delete_widget(void* self, void* widget) {
    KToolBarSpacerAction_QBaseDeleteWidget((KToolBarSpacerAction*)self, (QWidget*)widget);
}

void k_toolbarspaceraction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnDeleteWidget((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_timer_event(void* self, void* event) {
    KToolBarSpacerAction_TimerEvent((KToolBarSpacerAction*)self, (QTimerEvent*)event);
}

void k_toolbarspaceraction_qbase_timer_event(void* self, void* event) {
    KToolBarSpacerAction_QBaseTimerEvent((KToolBarSpacerAction*)self, (QTimerEvent*)event);
}

void k_toolbarspaceraction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnTimerEvent((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_child_event(void* self, void* event) {
    KToolBarSpacerAction_ChildEvent((KToolBarSpacerAction*)self, (QChildEvent*)event);
}

void k_toolbarspaceraction_qbase_child_event(void* self, void* event) {
    KToolBarSpacerAction_QBaseChildEvent((KToolBarSpacerAction*)self, (QChildEvent*)event);
}

void k_toolbarspaceraction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnChildEvent((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_custom_event(void* self, void* event) {
    KToolBarSpacerAction_CustomEvent((KToolBarSpacerAction*)self, (QEvent*)event);
}

void k_toolbarspaceraction_qbase_custom_event(void* self, void* event) {
    KToolBarSpacerAction_QBaseCustomEvent((KToolBarSpacerAction*)self, (QEvent*)event);
}

void k_toolbarspaceraction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnCustomEvent((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_connect_notify(void* self, void* signal) {
    KToolBarSpacerAction_ConnectNotify((KToolBarSpacerAction*)self, (QMetaMethod*)signal);
}

void k_toolbarspaceraction_qbase_connect_notify(void* self, void* signal) {
    KToolBarSpacerAction_QBaseConnectNotify((KToolBarSpacerAction*)self, (QMetaMethod*)signal);
}

void k_toolbarspaceraction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnConnectNotify((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_disconnect_notify(void* self, void* signal) {
    KToolBarSpacerAction_DisconnectNotify((KToolBarSpacerAction*)self, (QMetaMethod*)signal);
}

void k_toolbarspaceraction_qbase_disconnect_notify(void* self, void* signal) {
    KToolBarSpacerAction_QBaseDisconnectNotify((KToolBarSpacerAction*)self, (QMetaMethod*)signal);
}

void k_toolbarspaceraction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnDisconnectNotify((KToolBarSpacerAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_toolbarspaceraction_created_widgets(void* self) {
    libqt_list _arr = KToolBarSpacerAction_CreatedWidgets((KToolBarSpacerAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_toolbarspaceraction_qbase_created_widgets(void* self) {
    libqt_list _arr = KToolBarSpacerAction_QBaseCreatedWidgets((KToolBarSpacerAction*)self);
    return _arr;
}

void k_toolbarspaceraction_on_created_widgets(void* self, QWidget** (*callback)()) {
    KToolBarSpacerAction_OnCreatedWidgets((KToolBarSpacerAction*)self, (intptr_t)callback);
}

QObject* k_toolbarspaceraction_sender(void* self) {
    return KToolBarSpacerAction_Sender((KToolBarSpacerAction*)self);
}

QObject* k_toolbarspaceraction_qbase_sender(void* self) {
    return KToolBarSpacerAction_QBaseSender((KToolBarSpacerAction*)self);
}

void k_toolbarspaceraction_on_sender(void* self, QObject* (*callback)()) {
    KToolBarSpacerAction_OnSender((KToolBarSpacerAction*)self, (intptr_t)callback);
}

int32_t k_toolbarspaceraction_sender_signal_index(void* self) {
    return KToolBarSpacerAction_SenderSignalIndex((KToolBarSpacerAction*)self);
}

int32_t k_toolbarspaceraction_qbase_sender_signal_index(void* self) {
    return KToolBarSpacerAction_QBaseSenderSignalIndex((KToolBarSpacerAction*)self);
}

void k_toolbarspaceraction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KToolBarSpacerAction_OnSenderSignalIndex((KToolBarSpacerAction*)self, (intptr_t)callback);
}

int32_t k_toolbarspaceraction_receivers(void* self, const char* signal) {
    return KToolBarSpacerAction_Receivers((KToolBarSpacerAction*)self, signal);
}

int32_t k_toolbarspaceraction_qbase_receivers(void* self, const char* signal) {
    return KToolBarSpacerAction_QBaseReceivers((KToolBarSpacerAction*)self, signal);
}

void k_toolbarspaceraction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KToolBarSpacerAction_OnReceivers((KToolBarSpacerAction*)self, (intptr_t)callback);
}

bool k_toolbarspaceraction_is_signal_connected(void* self, void* signal) {
    return KToolBarSpacerAction_IsSignalConnected((KToolBarSpacerAction*)self, (QMetaMethod*)signal);
}

bool k_toolbarspaceraction_qbase_is_signal_connected(void* self, void* signal) {
    return KToolBarSpacerAction_QBaseIsSignalConnected((KToolBarSpacerAction*)self, (QMetaMethod*)signal);
}

void k_toolbarspaceraction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KToolBarSpacerAction_OnIsSignalConnected((KToolBarSpacerAction*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_toolbarspaceraction_delete(void* self) {
    KToolBarSpacerAction_Delete((KToolBarSpacerAction*)(self));
}
