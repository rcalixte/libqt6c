#include "libkbookmark.hpp"
#include "libkbookmarkactioninterface.hpp"
#include "libkbookmarkowner.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkbookmarkaction.hpp"
#include "libkbookmarkaction.h"

KBookmarkAction* k_bookmarkaction_new(void* bk, void* owner, void* parent) {
    return KBookmarkAction_new((KBookmark*)bk, (KBookmarkOwner*)owner, (QObject*)parent);
}

const QMetaObject* k_bookmarkaction_meta_object(void* self) {
    return KBookmarkAction_MetaObject((KBookmarkAction*)self);
}

void k_bookmarkaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KBookmarkAction_OnMetaObject((KBookmarkAction*)self, (intptr_t)callback);
}

const QMetaObject* k_bookmarkaction_super_meta_object(void* self) {
    return KBookmarkAction_SuperMetaObject((KBookmarkAction*)self);
}

void* k_bookmarkaction_metacast(void* self, const char* param1) {
    return KBookmarkAction_Metacast((KBookmarkAction*)self, param1);
}

void k_bookmarkaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KBookmarkAction_OnMetacast((KBookmarkAction*)self, (intptr_t)callback);
}

void* k_bookmarkaction_super_metacast(void* self, const char* param1) {
    return KBookmarkAction_SuperMetacast((KBookmarkAction*)self, param1);
}

int32_t k_bookmarkaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkAction_Metacall((KBookmarkAction*)self, param1, param2, param3);
}

void k_bookmarkaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBookmarkAction_OnMetacall((KBookmarkAction*)self, (intptr_t)callback);
}

int32_t k_bookmarkaction_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkAction_SuperMetacall((KBookmarkAction*)self, param1, param2, param3);
}

const char* k_bookmarkaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_slot_selected(void* self, int32_t mb, int32_t km) {
    KBookmarkAction_SlotSelected((KBookmarkAction*)self, mb, km);
}

const char* k_bookmarkaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QObject* */ k_bookmarkaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_bookmarkaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_bookmarkaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_bookmarkaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_bookmarkaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_bookmarkaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_bookmarkaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_bookmarkaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_bookmarkaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_bookmarkaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_bookmarkaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_bookmarkaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_bookmarkaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_bookmarkaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_bookmarkaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_bookmarkaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_bookmarkaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_bookmarkaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_bookmarkaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_bookmarkaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_bookmarkaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_bookmarkaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_bookmarkaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_bookmarkaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_bookmarkaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_bookmarkaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_bookmarkaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_bookmarkaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_bookmarkaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_bookmarkaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_bookmarkaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_bookmarkaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_bookmarkaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_bookmarkaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_bookmarkaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_bookmarkaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_bookmarkaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_bookmarkaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_bookmarkaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_bookmarkaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_bookmarkaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_bookmarkaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_bookmarkaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_bookmarkaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_bookmarkaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_bookmarkaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_bookmarkaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_bookmarkaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_bookmarkaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_bookmarkaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_bookmarkaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_bookmarkaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_bookmarkaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_bookmarkaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_bookmarkaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_bookmarkaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_bookmarkaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_bookmarkaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_bookmarkaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_bookmarkaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkaction_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bookmarkaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bookmarkaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bookmarkaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bookmarkaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bookmarkaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bookmarkaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_bookmarkaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_bookmarkaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_bookmarkaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_bookmarkaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_bookmarkaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_bookmarkaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_bookmarkaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_bookmarkaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_bookmarkaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_bookmarkaction_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_bookmarkaction_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bookmarkaction_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bookmarkaction_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_bookmarkaction_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bookmarkaction_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_bookmarkaction_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_bookmarkaction_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_bookmarkaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bookmarkaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bookmarkaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bookmarkaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bookmarkaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmarkaction_dynamic_property_names\n");
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

QBindingStorage* k_bookmarkaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bookmarkaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bookmarkaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bookmarkaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bookmarkaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bookmarkaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_bookmarkaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_bookmarkaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_bookmarkaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_bookmarkaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_bookmarkaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bookmarkaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_bookmarkaction_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_bookmarkaction_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_bookmarkaction_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_bookmarkaction_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_bookmarkaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_bookmarkaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const KBookmark* k_bookmarkaction_bookmark(void* self) {
    return KBookmarkActionInterface_Bookmark((KBookmarkActionInterface*)self);
}

bool k_bookmarkaction_event(void* self, void* param1) {
    return KBookmarkAction_Event((KBookmarkAction*)self, (QEvent*)param1);
}

bool k_bookmarkaction_super_event(void* self, void* param1) {
    return KBookmarkAction_SuperEvent((KBookmarkAction*)self, (QEvent*)param1);
}

void k_bookmarkaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KBookmarkAction_OnEvent((KBookmarkAction*)self, (intptr_t)callback);
}

bool k_bookmarkaction_event_filter(void* self, void* watched, void* event) {
    return KBookmarkAction_EventFilter((KBookmarkAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_bookmarkaction_super_event_filter(void* self, void* watched, void* event) {
    return KBookmarkAction_SuperEventFilter((KBookmarkAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_bookmarkaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBookmarkAction_OnEventFilter((KBookmarkAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_timer_event(void* self, void* event) {
    KBookmarkAction_TimerEvent((KBookmarkAction*)self, (QTimerEvent*)event);
}

void k_bookmarkaction_super_timer_event(void* self, void* event) {
    KBookmarkAction_SuperTimerEvent((KBookmarkAction*)self, (QTimerEvent*)event);
}

void k_bookmarkaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkAction_OnTimerEvent((KBookmarkAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_child_event(void* self, void* event) {
    KBookmarkAction_ChildEvent((KBookmarkAction*)self, (QChildEvent*)event);
}

void k_bookmarkaction_super_child_event(void* self, void* event) {
    KBookmarkAction_SuperChildEvent((KBookmarkAction*)self, (QChildEvent*)event);
}

void k_bookmarkaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkAction_OnChildEvent((KBookmarkAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_custom_event(void* self, void* event) {
    KBookmarkAction_CustomEvent((KBookmarkAction*)self, (QEvent*)event);
}

void k_bookmarkaction_super_custom_event(void* self, void* event) {
    KBookmarkAction_SuperCustomEvent((KBookmarkAction*)self, (QEvent*)event);
}

void k_bookmarkaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkAction_OnCustomEvent((KBookmarkAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_connect_notify(void* self, void* signal) {
    KBookmarkAction_ConnectNotify((KBookmarkAction*)self, (QMetaMethod*)signal);
}

void k_bookmarkaction_super_connect_notify(void* self, void* signal) {
    KBookmarkAction_SuperConnectNotify((KBookmarkAction*)self, (QMetaMethod*)signal);
}

void k_bookmarkaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkAction_OnConnectNotify((KBookmarkAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_disconnect_notify(void* self, void* signal) {
    KBookmarkAction_DisconnectNotify((KBookmarkAction*)self, (QMetaMethod*)signal);
}

void k_bookmarkaction_super_disconnect_notify(void* self, void* signal) {
    KBookmarkAction_SuperDisconnectNotify((KBookmarkAction*)self, (QMetaMethod*)signal);
}

void k_bookmarkaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkAction_OnDisconnectNotify((KBookmarkAction*)self, (intptr_t)callback);
}

QObject* k_bookmarkaction_sender(void* self) {
    return KBookmarkAction_Sender((KBookmarkAction*)self);
}

QObject* k_bookmarkaction_super_sender(void* self) {
    return KBookmarkAction_SuperSender((KBookmarkAction*)self);
}

void k_bookmarkaction_on_sender(void* self, QObject* (*callback)()) {
    KBookmarkAction_OnSender((KBookmarkAction*)self, (intptr_t)callback);
}

int32_t k_bookmarkaction_sender_signal_index(void* self) {
    return KBookmarkAction_SenderSignalIndex((KBookmarkAction*)self);
}

int32_t k_bookmarkaction_super_sender_signal_index(void* self) {
    return KBookmarkAction_SuperSenderSignalIndex((KBookmarkAction*)self);
}

void k_bookmarkaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBookmarkAction_OnSenderSignalIndex((KBookmarkAction*)self, (intptr_t)callback);
}

int32_t k_bookmarkaction_receivers(void* self, const char* signal) {
    return KBookmarkAction_Receivers((KBookmarkAction*)self, signal);
}

int32_t k_bookmarkaction_super_receivers(void* self, const char* signal) {
    return KBookmarkAction_SuperReceivers((KBookmarkAction*)self, signal);
}

void k_bookmarkaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBookmarkAction_OnReceivers((KBookmarkAction*)self, (intptr_t)callback);
}

bool k_bookmarkaction_is_signal_connected(void* self, void* signal) {
    return KBookmarkAction_IsSignalConnected((KBookmarkAction*)self, (QMetaMethod*)signal);
}

bool k_bookmarkaction_super_is_signal_connected(void* self, void* signal) {
    return KBookmarkAction_SuperIsSignalConnected((KBookmarkAction*)self, (QMetaMethod*)signal);
}

void k_bookmarkaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBookmarkAction_OnIsSignalConnected((KBookmarkAction*)self, (intptr_t)callback);
}

void k_bookmarkaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bookmarkaction_delete(void* self) {
    KBookmarkAction_Delete((KBookmarkAction*)(self));
}
