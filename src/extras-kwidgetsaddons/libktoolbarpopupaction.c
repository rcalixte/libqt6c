#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libktoolbarpopupaction.hpp"
#include "libktoolbarpopupaction.h"

KToolBarPopupAction* k_toolbarpopupaction_new(void* icon, const char* text, void* parent) {
    return KToolBarPopupAction_new((QIcon*)icon, qstring(text), (QObject*)parent);
}

const QMetaObject* k_toolbarpopupaction_meta_object(void* self) {
    return KToolBarPopupAction_MetaObject((KToolBarPopupAction*)self);
}

void k_toolbarpopupaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KToolBarPopupAction_OnMetaObject((KToolBarPopupAction*)self, (intptr_t)callback);
}

const QMetaObject* k_toolbarpopupaction_super_meta_object(void* self) {
    return KToolBarPopupAction_SuperMetaObject((KToolBarPopupAction*)self);
}

void* k_toolbarpopupaction_metacast(void* self, const char* param1) {
    return KToolBarPopupAction_Metacast((KToolBarPopupAction*)self, param1);
}

void k_toolbarpopupaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KToolBarPopupAction_OnMetacast((KToolBarPopupAction*)self, (intptr_t)callback);
}

void* k_toolbarpopupaction_super_metacast(void* self, const char* param1) {
    return KToolBarPopupAction_SuperMetacast((KToolBarPopupAction*)self, param1);
}

int32_t k_toolbarpopupaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToolBarPopupAction_Metacall((KToolBarPopupAction*)self, param1, param2, param3);
}

void k_toolbarpopupaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KToolBarPopupAction_OnMetacall((KToolBarPopupAction*)self, (intptr_t)callback);
}

int32_t k_toolbarpopupaction_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToolBarPopupAction_SuperMetacall((KToolBarPopupAction*)self, param1, param2, param3);
}

const char* k_toolbarpopupaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMenu* k_toolbarpopupaction_popup_menu(void* self) {
    return KToolBarPopupAction_PopupMenu((KToolBarPopupAction*)self);
}

int32_t k_toolbarpopupaction_popup_mode(void* self) {
    return KToolBarPopupAction_PopupMode((KToolBarPopupAction*)self);
}

void k_toolbarpopupaction_set_popup_mode(void* self, int32_t popupMode) {
    KToolBarPopupAction_SetPopupMode((KToolBarPopupAction*)self, popupMode);
}

QWidget* k_toolbarpopupaction_create_widget(void* self, void* parent) {
    return KToolBarPopupAction_CreateWidget((KToolBarPopupAction*)self, (QWidget*)parent);
}

void k_toolbarpopupaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KToolBarPopupAction_OnCreateWidget((KToolBarPopupAction*)self, (intptr_t)callback);
}

QWidget* k_toolbarpopupaction_super_create_widget(void* self, void* parent) {
    return KToolBarPopupAction_SuperCreateWidget((KToolBarPopupAction*)self, (QWidget*)parent);
}

const char* k_toolbarpopupaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_toolbarpopupaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_toolbarpopupaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_toolbarpopupaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_toolbarpopupaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_toolbarpopupaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_toolbarpopupaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_toolbarpopupaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_toolbarpopupaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_toolbarpopupaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_toolbarpopupaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_toolbarpopupaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_toolbarpopupaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_toolbarpopupaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_toolbarpopupaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_toolbarpopupaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_toolbarpopupaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_toolbarpopupaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_toolbarpopupaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_toolbarpopupaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_toolbarpopupaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_toolbarpopupaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_toolbarpopupaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_toolbarpopupaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_toolbarpopupaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_toolbarpopupaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_toolbarpopupaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_toolbarpopupaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_toolbarpopupaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_toolbarpopupaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_toolbarpopupaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_toolbarpopupaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_toolbarpopupaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_toolbarpopupaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_toolbarpopupaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_toolbarpopupaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_toolbarpopupaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_toolbarpopupaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_toolbarpopupaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_toolbarpopupaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_toolbarpopupaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_toolbarpopupaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_toolbarpopupaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_toolbarpopupaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_toolbarpopupaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_toolbarpopupaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_toolbarpopupaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_toolbarpopupaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_toolbarpopupaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_toolbarpopupaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_toolbarpopupaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_toolbarpopupaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_toolbarpopupaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_toolbarpopupaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_toolbarpopupaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_toolbarpopupaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_toolbarpopupaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_toolbarpopupaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_toolbarpopupaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_toolbarpopupaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_toolbarpopupaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_toolbarpopupaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_toolbarpopupaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_toolbarpopupaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_toolbarpopupaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbarpopupaction_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_toolbarpopupaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_toolbarpopupaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_toolbarpopupaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_toolbarpopupaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_toolbarpopupaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_toolbarpopupaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_toolbarpopupaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_toolbarpopupaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_toolbarpopupaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_toolbarpopupaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_toolbarpopupaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_toolbarpopupaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_toolbarpopupaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_toolbarpopupaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_toolbarpopupaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_toolbarpopupaction_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_toolbarpopupaction_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_toolbarpopupaction_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_toolbarpopupaction_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_toolbarpopupaction_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_toolbarpopupaction_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_toolbarpopupaction_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_toolbarpopupaction_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_toolbarpopupaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_toolbarpopupaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_toolbarpopupaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_toolbarpopupaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_toolbarpopupaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_toolbarpopupaction_dynamic_property_names\n");
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

QBindingStorage* k_toolbarpopupaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_toolbarpopupaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_toolbarpopupaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_toolbarpopupaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_toolbarpopupaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_toolbarpopupaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_toolbarpopupaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_toolbarpopupaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_toolbarpopupaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_toolbarpopupaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_toolbarpopupaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_toolbarpopupaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_toolbarpopupaction_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_toolbarpopupaction_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_toolbarpopupaction_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_toolbarpopupaction_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_toolbarpopupaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_toolbarpopupaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_toolbarpopupaction_event(void* self, void* param1) {
    return KToolBarPopupAction_Event((KToolBarPopupAction*)self, (QEvent*)param1);
}

bool k_toolbarpopupaction_super_event(void* self, void* param1) {
    return KToolBarPopupAction_SuperEvent((KToolBarPopupAction*)self, (QEvent*)param1);
}

void k_toolbarpopupaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KToolBarPopupAction_OnEvent((KToolBarPopupAction*)self, (intptr_t)callback);
}

bool k_toolbarpopupaction_event_filter(void* self, void* param1, void* param2) {
    return KToolBarPopupAction_EventFilter((KToolBarPopupAction*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_toolbarpopupaction_super_event_filter(void* self, void* param1, void* param2) {
    return KToolBarPopupAction_SuperEventFilter((KToolBarPopupAction*)self, (QObject*)param1, (QEvent*)param2);
}

void k_toolbarpopupaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KToolBarPopupAction_OnEventFilter((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_delete_widget(void* self, void* widget) {
    KToolBarPopupAction_DeleteWidget((KToolBarPopupAction*)self, (QWidget*)widget);
}

void k_toolbarpopupaction_super_delete_widget(void* self, void* widget) {
    KToolBarPopupAction_SuperDeleteWidget((KToolBarPopupAction*)self, (QWidget*)widget);
}

void k_toolbarpopupaction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KToolBarPopupAction_OnDeleteWidget((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_timer_event(void* self, void* event) {
    KToolBarPopupAction_TimerEvent((KToolBarPopupAction*)self, (QTimerEvent*)event);
}

void k_toolbarpopupaction_super_timer_event(void* self, void* event) {
    KToolBarPopupAction_SuperTimerEvent((KToolBarPopupAction*)self, (QTimerEvent*)event);
}

void k_toolbarpopupaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KToolBarPopupAction_OnTimerEvent((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_child_event(void* self, void* event) {
    KToolBarPopupAction_ChildEvent((KToolBarPopupAction*)self, (QChildEvent*)event);
}

void k_toolbarpopupaction_super_child_event(void* self, void* event) {
    KToolBarPopupAction_SuperChildEvent((KToolBarPopupAction*)self, (QChildEvent*)event);
}

void k_toolbarpopupaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KToolBarPopupAction_OnChildEvent((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_custom_event(void* self, void* event) {
    KToolBarPopupAction_CustomEvent((KToolBarPopupAction*)self, (QEvent*)event);
}

void k_toolbarpopupaction_super_custom_event(void* self, void* event) {
    KToolBarPopupAction_SuperCustomEvent((KToolBarPopupAction*)self, (QEvent*)event);
}

void k_toolbarpopupaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KToolBarPopupAction_OnCustomEvent((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_connect_notify(void* self, void* signal) {
    KToolBarPopupAction_ConnectNotify((KToolBarPopupAction*)self, (QMetaMethod*)signal);
}

void k_toolbarpopupaction_super_connect_notify(void* self, void* signal) {
    KToolBarPopupAction_SuperConnectNotify((KToolBarPopupAction*)self, (QMetaMethod*)signal);
}

void k_toolbarpopupaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KToolBarPopupAction_OnConnectNotify((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_disconnect_notify(void* self, void* signal) {
    KToolBarPopupAction_DisconnectNotify((KToolBarPopupAction*)self, (QMetaMethod*)signal);
}

void k_toolbarpopupaction_super_disconnect_notify(void* self, void* signal) {
    KToolBarPopupAction_SuperDisconnectNotify((KToolBarPopupAction*)self, (QMetaMethod*)signal);
}

void k_toolbarpopupaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KToolBarPopupAction_OnDisconnectNotify((KToolBarPopupAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_toolbarpopupaction_created_widgets(void* self) {
    libqt_list _arr = KToolBarPopupAction_CreatedWidgets((KToolBarPopupAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_toolbarpopupaction_super_created_widgets(void* self) {
    libqt_list _arr = KToolBarPopupAction_SuperCreatedWidgets((KToolBarPopupAction*)self);
    return _arr;
}

void k_toolbarpopupaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*callback)()) {
    KToolBarPopupAction_OnCreatedWidgets((KToolBarPopupAction*)self, (intptr_t)callback);
}

QObject* k_toolbarpopupaction_sender(void* self) {
    return KToolBarPopupAction_Sender((KToolBarPopupAction*)self);
}

QObject* k_toolbarpopupaction_super_sender(void* self) {
    return KToolBarPopupAction_SuperSender((KToolBarPopupAction*)self);
}

void k_toolbarpopupaction_on_sender(void* self, QObject* (*callback)()) {
    KToolBarPopupAction_OnSender((KToolBarPopupAction*)self, (intptr_t)callback);
}

int32_t k_toolbarpopupaction_sender_signal_index(void* self) {
    return KToolBarPopupAction_SenderSignalIndex((KToolBarPopupAction*)self);
}

int32_t k_toolbarpopupaction_super_sender_signal_index(void* self) {
    return KToolBarPopupAction_SuperSenderSignalIndex((KToolBarPopupAction*)self);
}

void k_toolbarpopupaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KToolBarPopupAction_OnSenderSignalIndex((KToolBarPopupAction*)self, (intptr_t)callback);
}

int32_t k_toolbarpopupaction_receivers(void* self, const char* signal) {
    return KToolBarPopupAction_Receivers((KToolBarPopupAction*)self, signal);
}

int32_t k_toolbarpopupaction_super_receivers(void* self, const char* signal) {
    return KToolBarPopupAction_SuperReceivers((KToolBarPopupAction*)self, signal);
}

void k_toolbarpopupaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KToolBarPopupAction_OnReceivers((KToolBarPopupAction*)self, (intptr_t)callback);
}

bool k_toolbarpopupaction_is_signal_connected(void* self, void* signal) {
    return KToolBarPopupAction_IsSignalConnected((KToolBarPopupAction*)self, (QMetaMethod*)signal);
}

bool k_toolbarpopupaction_super_is_signal_connected(void* self, void* signal) {
    return KToolBarPopupAction_SuperIsSignalConnected((KToolBarPopupAction*)self, (QMetaMethod*)signal);
}

void k_toolbarpopupaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KToolBarPopupAction_OnIsSignalConnected((KToolBarPopupAction*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_toolbarpopupaction_delete(void* self) {
    KToolBarPopupAction_Delete((KToolBarPopupAction*)(self));
}
