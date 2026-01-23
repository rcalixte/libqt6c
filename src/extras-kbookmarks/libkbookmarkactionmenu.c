#include "../extras-kwidgetsaddons/libkactionmenu.hpp"
#include "libkbookmark.hpp"
#include "libkbookmarkactioninterface.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libkbookmarkactionmenu.hpp"
#include "libkbookmarkactionmenu.h"

KBookmarkActionMenu* k_bookmarkactionmenu_new(void* bm, void* parent) {
    return KBookmarkActionMenu_new((KBookmark*)bm, (QObject*)parent);
}

KBookmarkActionMenu* k_bookmarkactionmenu_new2(void* bm, const char* text, void* parent) {
    return KBookmarkActionMenu_new2((KBookmark*)bm, qstring(text), (QObject*)parent);
}

const QMetaObject* k_bookmarkactionmenu_meta_object(void* self) {
    return KBookmarkActionMenu_MetaObject((KBookmarkActionMenu*)self);
}

void* k_bookmarkactionmenu_metacast(void* self, const char* param1) {
    return KBookmarkActionMenu_Metacast((KBookmarkActionMenu*)self, param1);
}

int32_t k_bookmarkactionmenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkActionMenu_Metacall((KBookmarkActionMenu*)self, param1, param2, param3);
}

void k_bookmarkactionmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBookmarkActionMenu_OnMetacall((KBookmarkActionMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkactionmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkActionMenu_QBaseMetacall((KBookmarkActionMenu*)self, param1, param2, param3);
}

const char* k_bookmarkactionmenu_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkactionmenu_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkactionmenu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_add_action(void* self, void* action) {
    KActionMenu_AddAction((KActionMenu*)self, (QAction*)action);
}

QAction* k_bookmarkactionmenu_add_separator(void* self) {
    return KActionMenu_AddSeparator((KActionMenu*)self);
}

void k_bookmarkactionmenu_insert_action(void* self, void* before, void* action) {
    KActionMenu_InsertAction((KActionMenu*)self, (QAction*)before, (QAction*)action);
}

QAction* k_bookmarkactionmenu_insert_separator(void* self, void* before) {
    return KActionMenu_InsertSeparator((KActionMenu*)self, (QAction*)before);
}

void k_bookmarkactionmenu_remove_action(void* self, void* action) {
    KActionMenu_RemoveAction((KActionMenu*)self, (QAction*)action);
}

int32_t k_bookmarkactionmenu_popup_mode(void* self) {
    return KActionMenu_PopupMode((KActionMenu*)self);
}

void k_bookmarkactionmenu_set_popup_mode(void* self, int32_t popupMode) {
    KActionMenu_SetPopupMode((KActionMenu*)self, popupMode);
}

void k_bookmarkactionmenu_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_bookmarkactionmenu_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_bookmarkactionmenu_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_bookmarkactionmenu_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_bookmarkactionmenu_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_bookmarkactionmenu_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_bookmarkactionmenu_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_bookmarkactionmenu_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_bookmarkactionmenu_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_bookmarkactionmenu_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_bookmarkactionmenu_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_bookmarkactionmenu_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_bookmarkactionmenu_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_bookmarkactionmenu_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_bookmarkactionmenu_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_bookmarkactionmenu_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_bookmarkactionmenu_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_bookmarkactionmenu_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_bookmarkactionmenu_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_bookmarkactionmenu_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_bookmarkactionmenu_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_bookmarkactionmenu_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_bookmarkactionmenu_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_bookmarkactionmenu_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_bookmarkactionmenu_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_bookmarkactionmenu_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_bookmarkactionmenu_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_bookmarkactionmenu_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_bookmarkactionmenu_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_bookmarkactionmenu_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_bookmarkactionmenu_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_bookmarkactionmenu_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_bookmarkactionmenu_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_bookmarkactionmenu_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_bookmarkactionmenu_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_bookmarkactionmenu_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_bookmarkactionmenu_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_bookmarkactionmenu_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_bookmarkactionmenu_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_bookmarkactionmenu_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_bookmarkactionmenu_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_bookmarkactionmenu_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_bookmarkactionmenu_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_bookmarkactionmenu_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_bookmarkactionmenu_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_bookmarkactionmenu_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_bookmarkactionmenu_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_bookmarkactionmenu_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_bookmarkactionmenu_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_bookmarkactionmenu_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_bookmarkactionmenu_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_bookmarkactionmenu_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_bookmarkactionmenu_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_bookmarkactionmenu_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_bookmarkactionmenu_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_bookmarkactionmenu_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_bookmarkactionmenu_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_bookmarkactionmenu_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_bookmarkactionmenu_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_bookmarkactionmenu_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_bookmarkactionmenu_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_bookmarkactionmenu_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_bookmarkactionmenu_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_bookmarkactionmenu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkactionmenu_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bookmarkactionmenu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bookmarkactionmenu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bookmarkactionmenu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bookmarkactionmenu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bookmarkactionmenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bookmarkactionmenu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_bookmarkactionmenu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_bookmarkactionmenu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_bookmarkactionmenu_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_bookmarkactionmenu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_bookmarkactionmenu_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_bookmarkactionmenu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_bookmarkactionmenu_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_bookmarkactionmenu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_bookmarkactionmenu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_bookmarkactionmenu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bookmarkactionmenu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bookmarkactionmenu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bookmarkactionmenu_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_bookmarkactionmenu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bookmarkactionmenu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bookmarkactionmenu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bookmarkactionmenu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bookmarkactionmenu_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmarkactionmenu_dynamic_property_names\n");
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

QBindingStorage* k_bookmarkactionmenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bookmarkactionmenu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bookmarkactionmenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bookmarkactionmenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bookmarkactionmenu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bookmarkactionmenu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_bookmarkactionmenu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_bookmarkactionmenu_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_bookmarkactionmenu_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_bookmarkactionmenu_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_bookmarkactionmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bookmarkactionmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_bookmarkactionmenu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_bookmarkactionmenu_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const KBookmark* k_bookmarkactionmenu_bookmark(void* self) {
    return KBookmarkActionInterface_Bookmark((KBookmarkActionInterface*)self);
}

QWidget* k_bookmarkactionmenu_create_widget(void* self, void* parent) {
    return KBookmarkActionMenu_CreateWidget((KBookmarkActionMenu*)self, (QWidget*)parent);
}

QWidget* k_bookmarkactionmenu_qbase_create_widget(void* self, void* parent) {
    return KBookmarkActionMenu_QBaseCreateWidget((KBookmarkActionMenu*)self, (QWidget*)parent);
}

void k_bookmarkactionmenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnCreateWidget((KBookmarkActionMenu*)self, (intptr_t)callback);
}

bool k_bookmarkactionmenu_event(void* self, void* param1) {
    return KBookmarkActionMenu_Event((KBookmarkActionMenu*)self, (QEvent*)param1);
}

bool k_bookmarkactionmenu_qbase_event(void* self, void* param1) {
    return KBookmarkActionMenu_QBaseEvent((KBookmarkActionMenu*)self, (QEvent*)param1);
}

void k_bookmarkactionmenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnEvent((KBookmarkActionMenu*)self, (intptr_t)callback);
}

bool k_bookmarkactionmenu_event_filter(void* self, void* param1, void* param2) {
    return KBookmarkActionMenu_EventFilter((KBookmarkActionMenu*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_bookmarkactionmenu_qbase_event_filter(void* self, void* param1, void* param2) {
    return KBookmarkActionMenu_QBaseEventFilter((KBookmarkActionMenu*)self, (QObject*)param1, (QEvent*)param2);
}

void k_bookmarkactionmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBookmarkActionMenu_OnEventFilter((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_delete_widget(void* self, void* widget) {
    KBookmarkActionMenu_DeleteWidget((KBookmarkActionMenu*)self, (QWidget*)widget);
}

void k_bookmarkactionmenu_qbase_delete_widget(void* self, void* widget) {
    KBookmarkActionMenu_QBaseDeleteWidget((KBookmarkActionMenu*)self, (QWidget*)widget);
}

void k_bookmarkactionmenu_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnDeleteWidget((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_timer_event(void* self, void* event) {
    KBookmarkActionMenu_TimerEvent((KBookmarkActionMenu*)self, (QTimerEvent*)event);
}

void k_bookmarkactionmenu_qbase_timer_event(void* self, void* event) {
    KBookmarkActionMenu_QBaseTimerEvent((KBookmarkActionMenu*)self, (QTimerEvent*)event);
}

void k_bookmarkactionmenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnTimerEvent((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_child_event(void* self, void* event) {
    KBookmarkActionMenu_ChildEvent((KBookmarkActionMenu*)self, (QChildEvent*)event);
}

void k_bookmarkactionmenu_qbase_child_event(void* self, void* event) {
    KBookmarkActionMenu_QBaseChildEvent((KBookmarkActionMenu*)self, (QChildEvent*)event);
}

void k_bookmarkactionmenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnChildEvent((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_custom_event(void* self, void* event) {
    KBookmarkActionMenu_CustomEvent((KBookmarkActionMenu*)self, (QEvent*)event);
}

void k_bookmarkactionmenu_qbase_custom_event(void* self, void* event) {
    KBookmarkActionMenu_QBaseCustomEvent((KBookmarkActionMenu*)self, (QEvent*)event);
}

void k_bookmarkactionmenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnCustomEvent((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_connect_notify(void* self, void* signal) {
    KBookmarkActionMenu_ConnectNotify((KBookmarkActionMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkactionmenu_qbase_connect_notify(void* self, void* signal) {
    KBookmarkActionMenu_QBaseConnectNotify((KBookmarkActionMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkactionmenu_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnConnectNotify((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_disconnect_notify(void* self, void* signal) {
    KBookmarkActionMenu_DisconnectNotify((KBookmarkActionMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkactionmenu_qbase_disconnect_notify(void* self, void* signal) {
    KBookmarkActionMenu_QBaseDisconnectNotify((KBookmarkActionMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkactionmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnDisconnectNotify((KBookmarkActionMenu*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_bookmarkactionmenu_created_widgets(void* self) {
    libqt_list _arr = KBookmarkActionMenu_CreatedWidgets((KBookmarkActionMenu*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_bookmarkactionmenu_qbase_created_widgets(void* self) {
    libqt_list _arr = KBookmarkActionMenu_QBaseCreatedWidgets((KBookmarkActionMenu*)self);
    return _arr;
}

void k_bookmarkactionmenu_on_created_widgets(void* self, QWidget** (*callback)()) {
    KBookmarkActionMenu_OnCreatedWidgets((KBookmarkActionMenu*)self, (intptr_t)callback);
}

QObject* k_bookmarkactionmenu_sender(void* self) {
    return KBookmarkActionMenu_Sender((KBookmarkActionMenu*)self);
}

QObject* k_bookmarkactionmenu_qbase_sender(void* self) {
    return KBookmarkActionMenu_QBaseSender((KBookmarkActionMenu*)self);
}

void k_bookmarkactionmenu_on_sender(void* self, QObject* (*callback)()) {
    KBookmarkActionMenu_OnSender((KBookmarkActionMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkactionmenu_sender_signal_index(void* self) {
    return KBookmarkActionMenu_SenderSignalIndex((KBookmarkActionMenu*)self);
}

int32_t k_bookmarkactionmenu_qbase_sender_signal_index(void* self) {
    return KBookmarkActionMenu_QBaseSenderSignalIndex((KBookmarkActionMenu*)self);
}

void k_bookmarkactionmenu_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBookmarkActionMenu_OnSenderSignalIndex((KBookmarkActionMenu*)self, (intptr_t)callback);
}

int32_t k_bookmarkactionmenu_receivers(void* self, const char* signal) {
    return KBookmarkActionMenu_Receivers((KBookmarkActionMenu*)self, signal);
}

int32_t k_bookmarkactionmenu_qbase_receivers(void* self, const char* signal) {
    return KBookmarkActionMenu_QBaseReceivers((KBookmarkActionMenu*)self, signal);
}

void k_bookmarkactionmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBookmarkActionMenu_OnReceivers((KBookmarkActionMenu*)self, (intptr_t)callback);
}

bool k_bookmarkactionmenu_is_signal_connected(void* self, void* signal) {
    return KBookmarkActionMenu_IsSignalConnected((KBookmarkActionMenu*)self, (QMetaMethod*)signal);
}

bool k_bookmarkactionmenu_qbase_is_signal_connected(void* self, void* signal) {
    return KBookmarkActionMenu_QBaseIsSignalConnected((KBookmarkActionMenu*)self, (QMetaMethod*)signal);
}

void k_bookmarkactionmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBookmarkActionMenu_OnIsSignalConnected((KBookmarkActionMenu*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bookmarkactionmenu_delete(void* self) {
    KBookmarkActionMenu_Delete((KBookmarkActionMenu*)(self));
}
