#include "libqactiongroup.hpp"
#include "libqcoreevent.hpp"
#include "libqfont.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqvariant.hpp"
#include "libqaction.hpp"
#include "libqaction.h"

QAction* q_action_new() {
    return QAction_new();
}

QAction* q_action_new2(const char* text) {
    return QAction_new2(qstring(text));
}

QAction* q_action_new3(void* icon, const char* text) {
    return QAction_new3((QIcon*)icon, qstring(text));
}

QAction* q_action_new4(void* parent) {
    return QAction_new4((QObject*)parent);
}

QAction* q_action_new5(const char* text, void* parent) {
    return QAction_new5(qstring(text), (QObject*)parent);
}

QAction* q_action_new6(void* icon, const char* text, void* parent) {
    return QAction_new6((QIcon*)icon, qstring(text), (QObject*)parent);
}

const QMetaObject* q_action_meta_object(void* self) {
    return QAction_MetaObject((QAction*)self);
}

void* q_action_metacast(void* self, const char* param1) {
    return QAction_Metacast((QAction*)self, param1);
}

int32_t q_action_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAction_Metacall((QAction*)self, param1, param2, param3);
}

void q_action_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAction_OnMetacall((QAction*)self, (intptr_t)callback);
}

int32_t q_action_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAction_QBaseMetacall((QAction*)self, param1, param2, param3);
}

const char* q_action_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QObject* */ q_action_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void q_action_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* q_action_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void q_action_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* q_action_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void q_action_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* q_action_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_action_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* q_action_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_action_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* q_action_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_action_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* q_action_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_action_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* q_action_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_action_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t q_action_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void q_action_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool q_action_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void q_action_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* q_action_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void q_action_set_shortcuts(void* self, libqt_list shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void q_action_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ q_action_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void q_action_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t q_action_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void q_action_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool q_action_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void q_action_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* q_action_font(void* self) {
    return QAction_Font((QAction*)self);
}

void q_action_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool q_action_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* q_action_data(void* self) {
    return QAction_Data((QAction*)self);
}

void q_action_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool q_action_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool q_action_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool q_action_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void q_action_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void q_action_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t q_action_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void q_action_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool q_action_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void q_action_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool q_action_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool q_action_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

bool q_action_event(void* self, void* param1) {
    return QAction_Event((QAction*)self, (QEvent*)param1);
}

void q_action_on_event(void* self, bool (*callback)(void*, void*)) {
    QAction_OnEvent((QAction*)self, (intptr_t)callback);
}

bool q_action_qbase_event(void* self, void* param1) {
    return QAction_QBaseEvent((QAction*)self, (QEvent*)param1);
}

void q_action_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void q_action_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void q_action_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void q_action_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void q_action_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void q_action_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void q_action_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void q_action_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void q_action_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void q_action_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void q_action_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void q_action_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void q_action_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void q_action_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void q_action_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void q_action_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void q_action_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void q_action_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void q_action_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void q_action_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void q_action_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void q_action_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

const char* q_action_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_action_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_action_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void q_action_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void q_action_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* q_action_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_action_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_action_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_action_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_action_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_action_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_action_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_action_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_action_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_action_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_action_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_action_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_action_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_action_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_action_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_action_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_action_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_action_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_action_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_action_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_action_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_action_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_action_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_action_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_action_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_action_dynamic_property_names");
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

QBindingStorage* q_action_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_action_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_action_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_action_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_action_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_action_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_action_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_action_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_action_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_action_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_action_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_action_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_action_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_action_event_filter(void* self, void* watched, void* event) {
    return QAction_EventFilter((QAction*)self, (QObject*)watched, (QEvent*)event);
}

bool q_action_qbase_event_filter(void* self, void* watched, void* event) {
    return QAction_QBaseEventFilter((QAction*)self, (QObject*)watched, (QEvent*)event);
}

void q_action_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAction_OnEventFilter((QAction*)self, (intptr_t)callback);
}

void q_action_timer_event(void* self, void* event) {
    QAction_TimerEvent((QAction*)self, (QTimerEvent*)event);
}

void q_action_qbase_timer_event(void* self, void* event) {
    QAction_QBaseTimerEvent((QAction*)self, (QTimerEvent*)event);
}

void q_action_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAction_OnTimerEvent((QAction*)self, (intptr_t)callback);
}

void q_action_child_event(void* self, void* event) {
    QAction_ChildEvent((QAction*)self, (QChildEvent*)event);
}

void q_action_qbase_child_event(void* self, void* event) {
    QAction_QBaseChildEvent((QAction*)self, (QChildEvent*)event);
}

void q_action_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAction_OnChildEvent((QAction*)self, (intptr_t)callback);
}

void q_action_custom_event(void* self, void* event) {
    QAction_CustomEvent((QAction*)self, (QEvent*)event);
}

void q_action_qbase_custom_event(void* self, void* event) {
    QAction_QBaseCustomEvent((QAction*)self, (QEvent*)event);
}

void q_action_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAction_OnCustomEvent((QAction*)self, (intptr_t)callback);
}

void q_action_connect_notify(void* self, void* signal) {
    QAction_ConnectNotify((QAction*)self, (QMetaMethod*)signal);
}

void q_action_qbase_connect_notify(void* self, void* signal) {
    QAction_QBaseConnectNotify((QAction*)self, (QMetaMethod*)signal);
}

void q_action_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAction_OnConnectNotify((QAction*)self, (intptr_t)callback);
}

void q_action_disconnect_notify(void* self, void* signal) {
    QAction_DisconnectNotify((QAction*)self, (QMetaMethod*)signal);
}

void q_action_qbase_disconnect_notify(void* self, void* signal) {
    QAction_QBaseDisconnectNotify((QAction*)self, (QMetaMethod*)signal);
}

void q_action_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAction_OnDisconnectNotify((QAction*)self, (intptr_t)callback);
}

QObject* q_action_sender(void* self) {
    return QAction_Sender((QAction*)self);
}

QObject* q_action_qbase_sender(void* self) {
    return QAction_QBaseSender((QAction*)self);
}

void q_action_on_sender(void* self, QObject* (*callback)()) {
    QAction_OnSender((QAction*)self, (intptr_t)callback);
}

int32_t q_action_sender_signal_index(void* self) {
    return QAction_SenderSignalIndex((QAction*)self);
}

int32_t q_action_qbase_sender_signal_index(void* self) {
    return QAction_QBaseSenderSignalIndex((QAction*)self);
}

void q_action_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAction_OnSenderSignalIndex((QAction*)self, (intptr_t)callback);
}

int32_t q_action_receivers(void* self, const char* signal) {
    return QAction_Receivers((QAction*)self, signal);
}

int32_t q_action_qbase_receivers(void* self, const char* signal) {
    return QAction_QBaseReceivers((QAction*)self, signal);
}

void q_action_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAction_OnReceivers((QAction*)self, (intptr_t)callback);
}

bool q_action_is_signal_connected(void* self, void* signal) {
    return QAction_IsSignalConnected((QAction*)self, (QMetaMethod*)signal);
}

bool q_action_qbase_is_signal_connected(void* self, void* signal) {
    return QAction_QBaseIsSignalConnected((QAction*)self, (QMetaMethod*)signal);
}

void q_action_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAction_OnIsSignalConnected((QAction*)self, (intptr_t)callback);
}

void q_action_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_action_delete(void* self) {
    QAction_Delete((QAction*)(self));
}
