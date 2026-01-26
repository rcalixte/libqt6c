#include "../extras-kwidgetsaddons/libktoggleaction.hpp"
#include "libktoolbar.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libktoggletoolbaraction.hpp"
#include "libktoggletoolbaraction.h"

KToggleToolBarAction* k_toggletoolbaraction_new(void* toolBar, const char* text, void* parent) {
    return KToggleToolBarAction_new((KToolBar*)toolBar, qstring(text), (QObject*)parent);
}

const QMetaObject* k_toggletoolbaraction_meta_object(void* self) {
    return KToggleToolBarAction_MetaObject((KToggleToolBarAction*)self);
}

void k_toggletoolbaraction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KToggleToolBarAction_OnMetaObject((KToggleToolBarAction*)self, (intptr_t)callback);
}

const QMetaObject* k_toggletoolbaraction_qbase_meta_object(void* self) {
    return KToggleToolBarAction_QBaseMetaObject((KToggleToolBarAction*)self);
}

void* k_toggletoolbaraction_metacast(void* self, const char* param1) {
    return KToggleToolBarAction_Metacast((KToggleToolBarAction*)self, param1);
}

void k_toggletoolbaraction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KToggleToolBarAction_OnMetacast((KToggleToolBarAction*)self, (intptr_t)callback);
}

void* k_toggletoolbaraction_qbase_metacast(void* self, const char* param1) {
    return KToggleToolBarAction_QBaseMetacast((KToggleToolBarAction*)self, param1);
}

int32_t k_toggletoolbaraction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToggleToolBarAction_Metacall((KToggleToolBarAction*)self, param1, param2, param3);
}

void k_toggletoolbaraction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KToggleToolBarAction_OnMetacall((KToggleToolBarAction*)self, (intptr_t)callback);
}

int32_t k_toggletoolbaraction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToggleToolBarAction_QBaseMetacall((KToggleToolBarAction*)self, param1, param2, param3);
}

const char* k_toggletoolbaraction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KToolBar* k_toggletoolbaraction_tool_bar(void* self) {
    return KToggleToolBarAction_ToolBar((KToggleToolBarAction*)self);
}

bool k_toggletoolbaraction_event_filter(void* self, void* watched, void* event) {
    return KToggleToolBarAction_EventFilter((KToggleToolBarAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_toggletoolbaraction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KToggleToolBarAction_OnEventFilter((KToggleToolBarAction*)self, (intptr_t)callback);
}

bool k_toggletoolbaraction_qbase_event_filter(void* self, void* watched, void* event) {
    return KToggleToolBarAction_QBaseEventFilter((KToggleToolBarAction*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_toggletoolbaraction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_toggletoolbaraction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_checked_state(void* self, void* checkedItem) {
    KToggleAction_SetCheckedState((KToggleAction*)self, (KGuiItem*)checkedItem);
}

libqt_list /* of QObject* */ k_toggletoolbaraction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_toggletoolbaraction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_toggletoolbaraction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_toggletoolbaraction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_toggletoolbaraction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_toggletoolbaraction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_toggletoolbaraction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_toggletoolbaraction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_toggletoolbaraction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_toggletoolbaraction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_toggletoolbaraction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_toggletoolbaraction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_toggletoolbaraction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_toggletoolbaraction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_toggletoolbaraction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_toggletoolbaraction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_toggletoolbaraction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_toggletoolbaraction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_toggletoolbaraction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_toggletoolbaraction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_toggletoolbaraction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_toggletoolbaraction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_toggletoolbaraction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_toggletoolbaraction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_toggletoolbaraction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_toggletoolbaraction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_toggletoolbaraction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_toggletoolbaraction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_toggletoolbaraction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_toggletoolbaraction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_toggletoolbaraction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_toggletoolbaraction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_toggletoolbaraction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_toggletoolbaraction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_toggletoolbaraction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_toggletoolbaraction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_toggletoolbaraction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_toggletoolbaraction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_toggletoolbaraction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_toggletoolbaraction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_toggletoolbaraction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_toggletoolbaraction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_toggletoolbaraction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_toggletoolbaraction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_toggletoolbaraction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_toggletoolbaraction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_toggletoolbaraction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_toggletoolbaraction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_toggletoolbaraction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_toggletoolbaraction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_toggletoolbaraction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_toggletoolbaraction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_toggletoolbaraction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_toggletoolbaraction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_toggletoolbaraction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_toggletoolbaraction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_toggletoolbaraction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_toggletoolbaraction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_toggletoolbaraction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_toggletoolbaraction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toggletoolbaraction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_toggletoolbaraction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_toggletoolbaraction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_toggletoolbaraction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_toggletoolbaraction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_toggletoolbaraction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_toggletoolbaraction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_toggletoolbaraction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_toggletoolbaraction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_toggletoolbaraction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_toggletoolbaraction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_toggletoolbaraction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_toggletoolbaraction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_toggletoolbaraction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_toggletoolbaraction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_toggletoolbaraction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_toggletoolbaraction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_toggletoolbaraction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_toggletoolbaraction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_toggletoolbaraction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_toggletoolbaraction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_toggletoolbaraction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_toggletoolbaraction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_toggletoolbaraction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_toggletoolbaraction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_toggletoolbaraction_dynamic_property_names\n");
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

QBindingStorage* k_toggletoolbaraction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_toggletoolbaraction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_toggletoolbaraction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_toggletoolbaraction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_toggletoolbaraction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_toggletoolbaraction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_toggletoolbaraction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_toggletoolbaraction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_toggletoolbaraction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_toggletoolbaraction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_toggletoolbaraction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_toggletoolbaraction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_toggletoolbaraction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_toggletoolbaraction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_toggletoolbaraction_event(void* self, void* param1) {
    return KToggleToolBarAction_Event((KToggleToolBarAction*)self, (QEvent*)param1);
}

bool k_toggletoolbaraction_qbase_event(void* self, void* param1) {
    return KToggleToolBarAction_QBaseEvent((KToggleToolBarAction*)self, (QEvent*)param1);
}

void k_toggletoolbaraction_on_event(void* self, bool (*callback)(void*, void*)) {
    KToggleToolBarAction_OnEvent((KToggleToolBarAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_timer_event(void* self, void* event) {
    KToggleToolBarAction_TimerEvent((KToggleToolBarAction*)self, (QTimerEvent*)event);
}

void k_toggletoolbaraction_qbase_timer_event(void* self, void* event) {
    KToggleToolBarAction_QBaseTimerEvent((KToggleToolBarAction*)self, (QTimerEvent*)event);
}

void k_toggletoolbaraction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KToggleToolBarAction_OnTimerEvent((KToggleToolBarAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_child_event(void* self, void* event) {
    KToggleToolBarAction_ChildEvent((KToggleToolBarAction*)self, (QChildEvent*)event);
}

void k_toggletoolbaraction_qbase_child_event(void* self, void* event) {
    KToggleToolBarAction_QBaseChildEvent((KToggleToolBarAction*)self, (QChildEvent*)event);
}

void k_toggletoolbaraction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KToggleToolBarAction_OnChildEvent((KToggleToolBarAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_custom_event(void* self, void* event) {
    KToggleToolBarAction_CustomEvent((KToggleToolBarAction*)self, (QEvent*)event);
}

void k_toggletoolbaraction_qbase_custom_event(void* self, void* event) {
    KToggleToolBarAction_QBaseCustomEvent((KToggleToolBarAction*)self, (QEvent*)event);
}

void k_toggletoolbaraction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KToggleToolBarAction_OnCustomEvent((KToggleToolBarAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_connect_notify(void* self, void* signal) {
    KToggleToolBarAction_ConnectNotify((KToggleToolBarAction*)self, (QMetaMethod*)signal);
}

void k_toggletoolbaraction_qbase_connect_notify(void* self, void* signal) {
    KToggleToolBarAction_QBaseConnectNotify((KToggleToolBarAction*)self, (QMetaMethod*)signal);
}

void k_toggletoolbaraction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KToggleToolBarAction_OnConnectNotify((KToggleToolBarAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_disconnect_notify(void* self, void* signal) {
    KToggleToolBarAction_DisconnectNotify((KToggleToolBarAction*)self, (QMetaMethod*)signal);
}

void k_toggletoolbaraction_qbase_disconnect_notify(void* self, void* signal) {
    KToggleToolBarAction_QBaseDisconnectNotify((KToggleToolBarAction*)self, (QMetaMethod*)signal);
}

void k_toggletoolbaraction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KToggleToolBarAction_OnDisconnectNotify((KToggleToolBarAction*)self, (intptr_t)callback);
}

QObject* k_toggletoolbaraction_sender(void* self) {
    return KToggleToolBarAction_Sender((KToggleToolBarAction*)self);
}

QObject* k_toggletoolbaraction_qbase_sender(void* self) {
    return KToggleToolBarAction_QBaseSender((KToggleToolBarAction*)self);
}

void k_toggletoolbaraction_on_sender(void* self, QObject* (*callback)()) {
    KToggleToolBarAction_OnSender((KToggleToolBarAction*)self, (intptr_t)callback);
}

int32_t k_toggletoolbaraction_sender_signal_index(void* self) {
    return KToggleToolBarAction_SenderSignalIndex((KToggleToolBarAction*)self);
}

int32_t k_toggletoolbaraction_qbase_sender_signal_index(void* self) {
    return KToggleToolBarAction_QBaseSenderSignalIndex((KToggleToolBarAction*)self);
}

void k_toggletoolbaraction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KToggleToolBarAction_OnSenderSignalIndex((KToggleToolBarAction*)self, (intptr_t)callback);
}

int32_t k_toggletoolbaraction_receivers(void* self, const char* signal) {
    return KToggleToolBarAction_Receivers((KToggleToolBarAction*)self, signal);
}

int32_t k_toggletoolbaraction_qbase_receivers(void* self, const char* signal) {
    return KToggleToolBarAction_QBaseReceivers((KToggleToolBarAction*)self, signal);
}

void k_toggletoolbaraction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KToggleToolBarAction_OnReceivers((KToggleToolBarAction*)self, (intptr_t)callback);
}

bool k_toggletoolbaraction_is_signal_connected(void* self, void* signal) {
    return KToggleToolBarAction_IsSignalConnected((KToggleToolBarAction*)self, (QMetaMethod*)signal);
}

bool k_toggletoolbaraction_qbase_is_signal_connected(void* self, void* signal) {
    return KToggleToolBarAction_QBaseIsSignalConnected((KToggleToolBarAction*)self, (QMetaMethod*)signal);
}

void k_toggletoolbaraction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KToggleToolBarAction_OnIsSignalConnected((KToggleToolBarAction*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_toggletoolbaraction_delete(void* self) {
    KToggleToolBarAction_Delete((KToggleToolBarAction*)(self));
}
