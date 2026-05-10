#include "../extras-kwidgetsaddons/libkactionmenu.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libemoticontexteditaction.hpp"
#include "libemoticontexteditaction.h"

TextEmoticonsWidgets__EmoticonTextEditAction* k_textemoticonswidgets__emoticontexteditaction_new(void* parent) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_new((QObject*)parent);
}

const QMetaObject* k_textemoticonswidgets__emoticontexteditaction_meta_object(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnMetaObject((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

const QMetaObject* k_textemoticonswidgets__emoticontexteditaction_super_meta_object(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetaObject((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

void* k_textemoticonswidgets__emoticontexteditaction_metacast(void* self, const char* param1) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_Metacast((TextEmoticonsWidgets__EmoticonTextEditAction*)self, param1);
}

void k_textemoticonswidgets__emoticontexteditaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacast((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void* k_textemoticonswidgets__emoticontexteditaction_super_metacast(void* self, const char* param1) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacast((TextEmoticonsWidgets__EmoticonTextEditAction*)self, param1);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_Metacall((TextEmoticonsWidgets__EmoticonTextEditAction*)self, param1, param2, param3);
}

void k_textemoticonswidgets__emoticontexteditaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacall((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacall((TextEmoticonsWidgets__EmoticonTextEditAction*)self, param1, param2, param3);
}

const char* k_textemoticonswidgets__emoticontexteditaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_custom_emoji_support(void* self, bool b) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SetCustomEmojiSupport((TextEmoticonsWidgets__EmoticonTextEditAction*)self, b);
}

bool k_textemoticonswidgets__emoticontexteditaction_custom_emoji_support(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_CustomEmojiSupport((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_insert_emoticon(void* self, const char* param1) {
    TextEmoticonsWidgets__EmoticonTextEditAction_InsertEmoticon((TextEmoticonsWidgets__EmoticonTextEditAction*)self, qstring(param1));
}

void k_textemoticonswidgets__emoticontexteditaction_on_insert_emoticon(void* self, void (*callback)(void*, const char*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_Connect_InsertEmoticon((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

const char* k_textemoticonswidgets__emoticontexteditaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonswidgets__emoticontexteditaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_add_action(void* self, void* action) {
    KActionMenu_AddAction((KActionMenu*)self, (QAction*)action);
}

QAction* k_textemoticonswidgets__emoticontexteditaction_add_separator(void* self) {
    return KActionMenu_AddSeparator((KActionMenu*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_insert_action(void* self, void* before, void* action) {
    KActionMenu_InsertAction((KActionMenu*)self, (QAction*)before, (QAction*)action);
}

QAction* k_textemoticonswidgets__emoticontexteditaction_insert_separator(void* self, void* before) {
    return KActionMenu_InsertSeparator((KActionMenu*)self, (QAction*)before);
}

void k_textemoticonswidgets__emoticontexteditaction_remove_action(void* self, void* action) {
    KActionMenu_RemoveAction((KActionMenu*)self, (QAction*)action);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_popup_mode(void* self) {
    return KActionMenu_PopupMode((KActionMenu*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_popup_mode(void* self, int32_t popupMode) {
    KActionMenu_SetPopupMode((KActionMenu*)self, popupMode);
}

void k_textemoticonswidgets__emoticontexteditaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_textemoticonswidgets__emoticontexteditaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_textemoticonswidgets__emoticontexteditaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_textemoticonswidgets__emoticontexteditaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_textemoticonswidgets__emoticontexteditaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_textemoticonswidgets__emoticontexteditaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_textemoticonswidgets__emoticontexteditaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_textemoticonswidgets__emoticontexteditaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_textemoticonswidgets__emoticontexteditaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_textemoticonswidgets__emoticontexteditaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_textemoticonswidgets__emoticontexteditaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_textemoticonswidgets__emoticontexteditaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_textemoticonswidgets__emoticontexteditaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_textemoticonswidgets__emoticontexteditaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_textemoticonswidgets__emoticontexteditaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_textemoticonswidgets__emoticontexteditaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_textemoticonswidgets__emoticontexteditaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_textemoticonswidgets__emoticontexteditaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_textemoticonswidgets__emoticontexteditaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_textemoticonswidgets__emoticontexteditaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_textemoticonswidgets__emoticontexteditaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_textemoticonswidgets__emoticontexteditaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_textemoticonswidgets__emoticontexteditaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_textemoticonswidgets__emoticontexteditaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_textemoticonswidgets__emoticontexteditaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_textemoticonswidgets__emoticontexteditaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_textemoticonswidgets__emoticontexteditaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_textemoticonswidgets__emoticontexteditaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_textemoticonswidgets__emoticontexteditaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_textemoticonswidgets__emoticontexteditaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_textemoticonswidgets__emoticontexteditaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_textemoticonswidgets__emoticontexteditaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonswidgets__emoticontexteditaction_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textemoticonswidgets__emoticontexteditaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textemoticonswidgets__emoticontexteditaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textemoticonswidgets__emoticontexteditaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textemoticonswidgets__emoticontexteditaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textemoticonswidgets__emoticontexteditaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textemoticonswidgets__emoticontexteditaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textemoticonswidgets__emoticontexteditaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textemoticonswidgets__emoticontexteditaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textemoticonswidgets__emoticontexteditaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textemoticonswidgets__emoticontexteditaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonswidgets__emoticontexteditaction_dynamic_property_names\n");
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

QBindingStorage* k_textemoticonswidgets__emoticontexteditaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textemoticonswidgets__emoticontexteditaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textemoticonswidgets__emoticontexteditaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textemoticonswidgets__emoticontexteditaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textemoticonswidgets__emoticontexteditaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textemoticonswidgets__emoticontexteditaction_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textemoticonswidgets__emoticontexteditaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textemoticonswidgets__emoticontexteditaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QWidget* k_textemoticonswidgets__emoticontexteditaction_create_widget(void* self, void* parent) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QWidget*)parent);
}

QWidget* k_textemoticonswidgets__emoticontexteditaction_super_create_widget(void* self, void* parent) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreateWidget((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QWidget*)parent);
}

void k_textemoticonswidgets__emoticontexteditaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnCreateWidget((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

bool k_textemoticonswidgets__emoticontexteditaction_event(void* self, void* param1) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_Event((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QEvent*)param1);
}

bool k_textemoticonswidgets__emoticontexteditaction_super_event(void* self, void* param1) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QEvent*)param1);
}

void k_textemoticonswidgets__emoticontexteditaction_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

bool k_textemoticonswidgets__emoticontexteditaction_event_filter(void* self, void* param1, void* param2) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textemoticonswidgets__emoticontexteditaction_super_event_filter(void* self, void* param1, void* param2) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperEventFilter((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textemoticonswidgets__emoticontexteditaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnEventFilter((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_delete_widget(void* self, void* widget) {
    TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QWidget*)widget);
}

void k_textemoticonswidgets__emoticontexteditaction_super_delete_widget(void* self, void* widget) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SuperDeleteWidget((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QWidget*)widget);
}

void k_textemoticonswidgets__emoticontexteditaction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnDeleteWidget((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_timer_event(void* self, void* event) {
    TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QTimerEvent*)event);
}

void k_textemoticonswidgets__emoticontexteditaction_super_timer_event(void* self, void* event) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SuperTimerEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QTimerEvent*)event);
}

void k_textemoticonswidgets__emoticontexteditaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnTimerEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_child_event(void* self, void* event) {
    TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QChildEvent*)event);
}

void k_textemoticonswidgets__emoticontexteditaction_super_child_event(void* self, void* event) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SuperChildEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QChildEvent*)event);
}

void k_textemoticonswidgets__emoticontexteditaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnChildEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_custom_event(void* self, void* event) {
    TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QEvent*)event);
}

void k_textemoticonswidgets__emoticontexteditaction_super_custom_event(void* self, void* event) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SuperCustomEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QEvent*)event);
}

void k_textemoticonswidgets__emoticontexteditaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnCustomEvent((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_connect_notify(void* self, void* signal) {
    TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QMetaMethod*)signal);
}

void k_textemoticonswidgets__emoticontexteditaction_super_connect_notify(void* self, void* signal) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SuperConnectNotify((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QMetaMethod*)signal);
}

void k_textemoticonswidgets__emoticontexteditaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnConnectNotify((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_disconnect_notify(void* self, void* signal) {
    TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QMetaMethod*)signal);
}

void k_textemoticonswidgets__emoticontexteditaction_super_disconnect_notify(void* self, void* signal) {
    TextEmoticonsWidgets__EmoticonTextEditAction_SuperDisconnectNotify((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QMetaMethod*)signal);
}

void k_textemoticonswidgets__emoticontexteditaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnDisconnectNotify((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_textemoticonswidgets__emoticontexteditaction_created_widgets(void* self) {
    libqt_list _arr = TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_textemoticonswidgets__emoticontexteditaction_super_created_widgets(void* self) {
    libqt_list _arr = TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreatedWidgets((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
    return _arr;
}

void k_textemoticonswidgets__emoticontexteditaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*callback)()) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnCreatedWidgets((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

QObject* k_textemoticonswidgets__emoticontexteditaction_sender(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_Sender((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

QObject* k_textemoticonswidgets__emoticontexteditaction_super_sender(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperSender((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_sender(void* self, QObject* (*callback)()) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnSender((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_sender_signal_index(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_super_sender_signal_index(void* self) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperSenderSignalIndex((TextEmoticonsWidgets__EmoticonTextEditAction*)self);
}

void k_textemoticonswidgets__emoticontexteditaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnSenderSignalIndex((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_receivers(void* self, const char* signal) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_Receivers((TextEmoticonsWidgets__EmoticonTextEditAction*)self, signal);
}

int32_t k_textemoticonswidgets__emoticontexteditaction_super_receivers(void* self, const char* signal) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperReceivers((TextEmoticonsWidgets__EmoticonTextEditAction*)self, signal);
}

void k_textemoticonswidgets__emoticontexteditaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnReceivers((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

bool k_textemoticonswidgets__emoticontexteditaction_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QMetaMethod*)signal);
}

bool k_textemoticonswidgets__emoticontexteditaction_super_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsWidgets__EmoticonTextEditAction_SuperIsSignalConnected((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (QMetaMethod*)signal);
}

void k_textemoticonswidgets__emoticontexteditaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsWidgets__EmoticonTextEditAction_OnIsSignalConnected((TextEmoticonsWidgets__EmoticonTextEditAction*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textemoticonswidgets__emoticontexteditaction_delete(void* self) {
    TextEmoticonsWidgets__EmoticonTextEditAction_Delete((TextEmoticonsWidgets__EmoticonTextEditAction*)(self));
}
