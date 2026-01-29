#include "libkguiitem.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkdualaction.hpp"
#include "libkdualaction.h"

KDualAction* k_dualaction_new(void* parent) {
    return KDualAction_new((QObject*)parent);
}

KDualAction* k_dualaction_new2(const char* inactiveText, const char* activeText, void* parent) {
    return KDualAction_new2(qstring(inactiveText), qstring(activeText), (QObject*)parent);
}

const QMetaObject* k_dualaction_meta_object(void* self) {
    return KDualAction_MetaObject((KDualAction*)self);
}

void k_dualaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDualAction_OnMetaObject((KDualAction*)self, (intptr_t)callback);
}

const QMetaObject* k_dualaction_qbase_meta_object(void* self) {
    return KDualAction_QBaseMetaObject((KDualAction*)self);
}

void* k_dualaction_metacast(void* self, const char* param1) {
    return KDualAction_Metacast((KDualAction*)self, param1);
}

void k_dualaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDualAction_OnMetacast((KDualAction*)self, (intptr_t)callback);
}

void* k_dualaction_qbase_metacast(void* self, const char* param1) {
    return KDualAction_QBaseMetacast((KDualAction*)self, param1);
}

int32_t k_dualaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDualAction_Metacall((KDualAction*)self, param1, param2, param3);
}

void k_dualaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDualAction_OnMetacall((KDualAction*)self, (intptr_t)callback);
}

int32_t k_dualaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDualAction_QBaseMetacall((KDualAction*)self, param1, param2, param3);
}

const char* k_dualaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_active_gui_item(void* self, void* activeGuiItem) {
    KDualAction_SetActiveGuiItem((KDualAction*)self, (KGuiItem*)activeGuiItem);
}

KGuiItem* k_dualaction_active_gui_item(void* self) {
    return KDualAction_ActiveGuiItem((KDualAction*)self);
}

void k_dualaction_set_inactive_gui_item(void* self, void* inactiveGuiItem) {
    KDualAction_SetInactiveGuiItem((KDualAction*)self, (KGuiItem*)inactiveGuiItem);
}

KGuiItem* k_dualaction_inactive_gui_item(void* self) {
    return KDualAction_InactiveGuiItem((KDualAction*)self);
}

void k_dualaction_set_active_icon(void* self, void* activeIcon) {
    KDualAction_SetActiveIcon((KDualAction*)self, (QIcon*)activeIcon);
}

QIcon* k_dualaction_active_icon(void* self) {
    return KDualAction_ActiveIcon((KDualAction*)self);
}

void k_dualaction_set_inactive_icon(void* self, void* inactiveIcon) {
    KDualAction_SetInactiveIcon((KDualAction*)self, (QIcon*)inactiveIcon);
}

QIcon* k_dualaction_inactive_icon(void* self) {
    return KDualAction_InactiveIcon((KDualAction*)self);
}

void k_dualaction_set_active_text(void* self, const char* activeText) {
    KDualAction_SetActiveText((KDualAction*)self, qstring(activeText));
}

const char* k_dualaction_active_text(void* self) {
    libqt_string _str = KDualAction_ActiveText((KDualAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_inactive_text(void* self, const char* inactiveText) {
    KDualAction_SetInactiveText((KDualAction*)self, qstring(inactiveText));
}

const char* k_dualaction_inactive_text(void* self) {
    libqt_string _str = KDualAction_InactiveText((KDualAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_active_tool_tip(void* self, const char* activeToolTip) {
    KDualAction_SetActiveToolTip((KDualAction*)self, qstring(activeToolTip));
}

const char* k_dualaction_active_tool_tip(void* self) {
    libqt_string _str = KDualAction_ActiveToolTip((KDualAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_inactive_tool_tip(void* self, const char* inactiveToolTip) {
    KDualAction_SetInactiveToolTip((KDualAction*)self, qstring(inactiveToolTip));
}

const char* k_dualaction_inactive_tool_tip(void* self) {
    libqt_string _str = KDualAction_InactiveToolTip((KDualAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_icon_for_states(void* self, void* icon) {
    KDualAction_SetIconForStates((KDualAction*)self, (QIcon*)icon);
}

bool k_dualaction_is_active(void* self) {
    return KDualAction_IsActive((KDualAction*)self);
}

void k_dualaction_set_auto_toggle(void* self, bool autoToggle) {
    KDualAction_SetAutoToggle((KDualAction*)self, autoToggle);
}

bool k_dualaction_auto_toggle(void* self) {
    return KDualAction_AutoToggle((KDualAction*)self);
}

void k_dualaction_set_active(void* self, bool state) {
    KDualAction_SetActive((KDualAction*)self, state);
}

void k_dualaction_active_changed(void* self, bool param1) {
    KDualAction_ActiveChanged((KDualAction*)self, param1);
}

void k_dualaction_on_active_changed(void* self, void (*callback)(void*, bool)) {
    KDualAction_Connect_ActiveChanged((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_active_changed_by_user(void* self, bool param1) {
    KDualAction_ActiveChangedByUser((KDualAction*)self, param1);
}

void k_dualaction_on_active_changed_by_user(void* self, void (*callback)(void*, bool)) {
    KDualAction_Connect_ActiveChangedByUser((KDualAction*)self, (intptr_t)callback);
}

const char* k_dualaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dualaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QObject* */ k_dualaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_dualaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_dualaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_dualaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_dualaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_dualaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_dualaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_dualaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_dualaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_dualaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_dualaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_dualaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_dualaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_dualaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_dualaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_dualaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_dualaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_dualaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_dualaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_dualaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_dualaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_dualaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_dualaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_dualaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_dualaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_dualaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_dualaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_dualaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_dualaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_dualaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_dualaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_dualaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_dualaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_dualaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_dualaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_dualaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_dualaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_dualaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_dualaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_dualaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_dualaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_dualaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_dualaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_dualaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_dualaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_dualaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_dualaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_dualaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_dualaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_dualaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_dualaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_dualaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_dualaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_dualaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_dualaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_dualaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_dualaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_dualaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_dualaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_dualaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_dualaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_dualaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_dualaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_dualaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_dualaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_dualaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dualaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_dualaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_dualaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_dualaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_dualaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_dualaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_dualaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_dualaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_dualaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_dualaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_dualaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_dualaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_dualaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_dualaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_dualaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_dualaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_dualaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_dualaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_dualaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_dualaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_dualaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_dualaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_dualaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_dualaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_dualaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_dualaction_dynamic_property_names\n");
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

QBindingStorage* k_dualaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_dualaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_dualaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_dualaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_dualaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_dualaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_dualaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_dualaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_dualaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_dualaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_dualaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_dualaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_dualaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_dualaction_event(void* self, void* param1) {
    return KDualAction_Event((KDualAction*)self, (QEvent*)param1);
}

bool k_dualaction_qbase_event(void* self, void* param1) {
    return KDualAction_QBaseEvent((KDualAction*)self, (QEvent*)param1);
}

void k_dualaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KDualAction_OnEvent((KDualAction*)self, (intptr_t)callback);
}

bool k_dualaction_event_filter(void* self, void* watched, void* event) {
    return KDualAction_EventFilter((KDualAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_dualaction_qbase_event_filter(void* self, void* watched, void* event) {
    return KDualAction_QBaseEventFilter((KDualAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_dualaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDualAction_OnEventFilter((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_timer_event(void* self, void* event) {
    KDualAction_TimerEvent((KDualAction*)self, (QTimerEvent*)event);
}

void k_dualaction_qbase_timer_event(void* self, void* event) {
    KDualAction_QBaseTimerEvent((KDualAction*)self, (QTimerEvent*)event);
}

void k_dualaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDualAction_OnTimerEvent((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_child_event(void* self, void* event) {
    KDualAction_ChildEvent((KDualAction*)self, (QChildEvent*)event);
}

void k_dualaction_qbase_child_event(void* self, void* event) {
    KDualAction_QBaseChildEvent((KDualAction*)self, (QChildEvent*)event);
}

void k_dualaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDualAction_OnChildEvent((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_custom_event(void* self, void* event) {
    KDualAction_CustomEvent((KDualAction*)self, (QEvent*)event);
}

void k_dualaction_qbase_custom_event(void* self, void* event) {
    KDualAction_QBaseCustomEvent((KDualAction*)self, (QEvent*)event);
}

void k_dualaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDualAction_OnCustomEvent((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_connect_notify(void* self, void* signal) {
    KDualAction_ConnectNotify((KDualAction*)self, (QMetaMethod*)signal);
}

void k_dualaction_qbase_connect_notify(void* self, void* signal) {
    KDualAction_QBaseConnectNotify((KDualAction*)self, (QMetaMethod*)signal);
}

void k_dualaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDualAction_OnConnectNotify((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_disconnect_notify(void* self, void* signal) {
    KDualAction_DisconnectNotify((KDualAction*)self, (QMetaMethod*)signal);
}

void k_dualaction_qbase_disconnect_notify(void* self, void* signal) {
    KDualAction_QBaseDisconnectNotify((KDualAction*)self, (QMetaMethod*)signal);
}

void k_dualaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDualAction_OnDisconnectNotify((KDualAction*)self, (intptr_t)callback);
}

QObject* k_dualaction_sender(void* self) {
    return KDualAction_Sender((KDualAction*)self);
}

QObject* k_dualaction_qbase_sender(void* self) {
    return KDualAction_QBaseSender((KDualAction*)self);
}

void k_dualaction_on_sender(void* self, QObject* (*callback)()) {
    KDualAction_OnSender((KDualAction*)self, (intptr_t)callback);
}

int32_t k_dualaction_sender_signal_index(void* self) {
    return KDualAction_SenderSignalIndex((KDualAction*)self);
}

int32_t k_dualaction_qbase_sender_signal_index(void* self) {
    return KDualAction_QBaseSenderSignalIndex((KDualAction*)self);
}

void k_dualaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDualAction_OnSenderSignalIndex((KDualAction*)self, (intptr_t)callback);
}

int32_t k_dualaction_receivers(void* self, const char* signal) {
    return KDualAction_Receivers((KDualAction*)self, signal);
}

int32_t k_dualaction_qbase_receivers(void* self, const char* signal) {
    return KDualAction_QBaseReceivers((KDualAction*)self, signal);
}

void k_dualaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDualAction_OnReceivers((KDualAction*)self, (intptr_t)callback);
}

bool k_dualaction_is_signal_connected(void* self, void* signal) {
    return KDualAction_IsSignalConnected((KDualAction*)self, (QMetaMethod*)signal);
}

bool k_dualaction_qbase_is_signal_connected(void* self, void* signal) {
    return KDualAction_QBaseIsSignalConnected((KDualAction*)self, (QMetaMethod*)signal);
}

void k_dualaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDualAction_OnIsSignalConnected((KDualAction*)self, (intptr_t)callback);
}

void k_dualaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_dualaction_delete(void* self) {
    KDualAction_Delete((KDualAction*)(self));
}
