#include "libkselectaction.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libkfontsizeaction.hpp"
#include "libkfontsizeaction.h"

KFontSizeAction* k_fontsizeaction_new(void* parent) {
    return KFontSizeAction_new((QObject*)parent);
}

KFontSizeAction* k_fontsizeaction_new2(const char* text, void* parent) {
    return KFontSizeAction_new2(qstring(text), (QObject*)parent);
}

KFontSizeAction* k_fontsizeaction_new3(void* icon, const char* text, void* parent) {
    return KFontSizeAction_new3((QIcon*)icon, qstring(text), (QObject*)parent);
}

const QMetaObject* k_fontsizeaction_meta_object(void* self) {
    return KFontSizeAction_MetaObject((KFontSizeAction*)self);
}

void k_fontsizeaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFontSizeAction_OnMetaObject((KFontSizeAction*)self, (intptr_t)callback);
}

const QMetaObject* k_fontsizeaction_qbase_meta_object(void* self) {
    return KFontSizeAction_QBaseMetaObject((KFontSizeAction*)self);
}

void* k_fontsizeaction_metacast(void* self, const char* param1) {
    return KFontSizeAction_Metacast((KFontSizeAction*)self, param1);
}

void k_fontsizeaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFontSizeAction_OnMetacast((KFontSizeAction*)self, (intptr_t)callback);
}

void* k_fontsizeaction_qbase_metacast(void* self, const char* param1) {
    return KFontSizeAction_QBaseMetacast((KFontSizeAction*)self, param1);
}

int32_t k_fontsizeaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFontSizeAction_Metacall((KFontSizeAction*)self, param1, param2, param3);
}

void k_fontsizeaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFontSizeAction_OnMetacall((KFontSizeAction*)self, (intptr_t)callback);
}

int32_t k_fontsizeaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFontSizeAction_QBaseMetacall((KFontSizeAction*)self, param1, param2, param3);
}

const char* k_fontsizeaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_fontsizeaction_font_size(void* self) {
    return KFontSizeAction_FontSize((KFontSizeAction*)self);
}

void k_fontsizeaction_set_font_size(void* self, int size) {
    KFontSizeAction_SetFontSize((KFontSizeAction*)self, size);
}

void k_fontsizeaction_font_size_changed(void* self, int param1) {
    KFontSizeAction_FontSizeChanged((KFontSizeAction*)self, param1);
}

void k_fontsizeaction_on_font_size_changed(void* self, void (*callback)(void*, int)) {
    KFontSizeAction_Connect_FontSizeChanged((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_slot_action_triggered(void* self, void* action) {
    KFontSizeAction_SlotActionTriggered((KFontSizeAction*)self, (QAction*)action);
}

void k_fontsizeaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnSlotActionTriggered((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_qbase_slot_action_triggered(void* self, void* action) {
    KFontSizeAction_QBaseSlotActionTriggered((KFontSizeAction*)self, (QAction*)action);
}

const char* k_fontsizeaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontsizeaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_fontsizeaction_tool_bar_mode(void* self) {
    return KSelectAction_ToolBarMode((KSelectAction*)self);
}

void k_fontsizeaction_set_tool_bar_mode(void* self, int32_t mode) {
    KSelectAction_SetToolBarMode((KSelectAction*)self, mode);
}

int32_t k_fontsizeaction_tool_button_popup_mode(void* self) {
    return KSelectAction_ToolButtonPopupMode((KSelectAction*)self);
}

void k_fontsizeaction_set_tool_button_popup_mode(void* self, int32_t mode) {
    KSelectAction_SetToolButtonPopupMode((KSelectAction*)self, mode);
}

QActionGroup* k_fontsizeaction_selectable_action_group(void* self) {
    return KSelectAction_SelectableActionGroup((KSelectAction*)self);
}

QAction* k_fontsizeaction_current_action(void* self) {
    return KSelectAction_CurrentAction((KSelectAction*)self);
}

int32_t k_fontsizeaction_current_item(void* self) {
    return KSelectAction_CurrentItem((KSelectAction*)self);
}

const char* k_fontsizeaction_current_text(void* self) {
    libqt_string _str = KSelectAction_CurrentText((KSelectAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAction* */ k_fontsizeaction_actions(void* self) {
    libqt_list _arr = KSelectAction_Actions((KSelectAction*)self);
    return _arr;
}

QAction* k_fontsizeaction_action(void* self, int index) {
    return KSelectAction_Action((KSelectAction*)self, index);
}

QAction* k_fontsizeaction_action2(void* self, const char* text) {
    return KSelectAction_Action2((KSelectAction*)self, qstring(text));
}

bool k_fontsizeaction_set_current_action(void* self, void* action) {
    return KSelectAction_SetCurrentAction((KSelectAction*)self, (QAction*)action);
}

bool k_fontsizeaction_set_current_item(void* self, int index) {
    return KSelectAction_SetCurrentItem((KSelectAction*)self, index);
}

bool k_fontsizeaction_set_current_action2(void* self, const char* text) {
    return KSelectAction_SetCurrentAction2((KSelectAction*)self, qstring(text));
}

void k_fontsizeaction_add_action(void* self, void* action) {
    KSelectAction_AddAction((KSelectAction*)self, (QAction*)action);
}

QAction* k_fontsizeaction_add_action2(void* self, const char* text) {
    return KSelectAction_AddAction2((KSelectAction*)self, qstring(text));
}

QAction* k_fontsizeaction_add_action3(void* self, void* icon, const char* text) {
    return KSelectAction_AddAction3((KSelectAction*)self, (QIcon*)icon, qstring(text));
}

void k_fontsizeaction_set_items(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontsizeaction_set_items\n");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    KSelectAction_SetItems((KSelectAction*)self, lst_list);
    free(lst_qstr);
}

const char** k_fontsizeaction_items(void* self) {
    libqt_list _arr = KSelectAction_Items((KSelectAction*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontsizeaction_items\n");
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

bool k_fontsizeaction_is_editable(void* self) {
    return KSelectAction_IsEditable((KSelectAction*)self);
}

void k_fontsizeaction_set_editable(void* self, bool editable) {
    KSelectAction_SetEditable((KSelectAction*)self, editable);
}

int32_t k_fontsizeaction_combo_width(void* self) {
    return KSelectAction_ComboWidth((KSelectAction*)self);
}

void k_fontsizeaction_set_combo_width(void* self, int width) {
    KSelectAction_SetComboWidth((KSelectAction*)self, width);
}

void k_fontsizeaction_set_max_combo_view_count(void* self, int n) {
    KSelectAction_SetMaxComboViewCount((KSelectAction*)self, n);
}

void k_fontsizeaction_clear(void* self) {
    KSelectAction_Clear((KSelectAction*)self);
}

void k_fontsizeaction_remove_all_actions(void* self) {
    KSelectAction_RemoveAllActions((KSelectAction*)self);
}

void k_fontsizeaction_set_menu_accels_enabled(void* self, bool b) {
    KSelectAction_SetMenuAccelsEnabled((KSelectAction*)self, b);
}

bool k_fontsizeaction_menu_accels_enabled(void* self) {
    return KSelectAction_MenuAccelsEnabled((KSelectAction*)self);
}

void k_fontsizeaction_change_item(void* self, int index, const char* text) {
    KSelectAction_ChangeItem((KSelectAction*)self, index, qstring(text));
}

void k_fontsizeaction_action_triggered(void* self, void* action) {
    KSelectAction_ActionTriggered((KSelectAction*)self, (QAction*)action);
}

void k_fontsizeaction_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    KSelectAction_Connect_ActionTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_index_triggered(void* self, int index) {
    KSelectAction_IndexTriggered((KSelectAction*)self, index);
}

void k_fontsizeaction_on_index_triggered(void* self, void (*callback)(void*, int)) {
    KSelectAction_Connect_IndexTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_text_triggered(void* self, const char* text) {
    KSelectAction_TextTriggered((KSelectAction*)self, qstring(text));
}

void k_fontsizeaction_on_text_triggered(void* self, void (*callback)(void*, const char*)) {
    KSelectAction_Connect_TextTriggered((KSelectAction*)self, (intptr_t)callback);
}

QAction* k_fontsizeaction_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_Action22((KSelectAction*)self, qstring(text), cs);
}

bool k_fontsizeaction_set_current_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_SetCurrentAction22((KSelectAction*)self, qstring(text), cs);
}

void k_fontsizeaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_fontsizeaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_fontsizeaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_fontsizeaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_fontsizeaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_fontsizeaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_fontsizeaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_fontsizeaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_fontsizeaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_fontsizeaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_fontsizeaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontsizeaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_fontsizeaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontsizeaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_fontsizeaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontsizeaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_fontsizeaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontsizeaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_fontsizeaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontsizeaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_fontsizeaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_fontsizeaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_fontsizeaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_fontsizeaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_fontsizeaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_fontsizeaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_fontsizeaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_fontsizeaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_fontsizeaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_fontsizeaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_fontsizeaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_fontsizeaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_fontsizeaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_fontsizeaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_fontsizeaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_fontsizeaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_fontsizeaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_fontsizeaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_fontsizeaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_fontsizeaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_fontsizeaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_fontsizeaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_fontsizeaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_fontsizeaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_fontsizeaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_fontsizeaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_fontsizeaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_fontsizeaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_fontsizeaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_fontsizeaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_fontsizeaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_fontsizeaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_fontsizeaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_fontsizeaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_fontsizeaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_fontsizeaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_fontsizeaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_fontsizeaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_fontsizeaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_fontsizeaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_fontsizeaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_fontsizeaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_fontsizeaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_fontsizeaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_fontsizeaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_fontsizeaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_fontsizeaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_fontsizeaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_fontsizeaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontsizeaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fontsizeaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fontsizeaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fontsizeaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fontsizeaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fontsizeaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fontsizeaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fontsizeaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fontsizeaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_fontsizeaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_fontsizeaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fontsizeaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fontsizeaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fontsizeaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_fontsizeaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fontsizeaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fontsizeaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fontsizeaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fontsizeaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fontsizeaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fontsizeaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fontsizeaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fontsizeaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fontsizeaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fontsizeaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontsizeaction_dynamic_property_names\n");
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

QBindingStorage* k_fontsizeaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fontsizeaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fontsizeaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fontsizeaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fontsizeaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fontsizeaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fontsizeaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_fontsizeaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_fontsizeaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_fontsizeaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_fontsizeaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fontsizeaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fontsizeaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fontsizeaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QAction* k_fontsizeaction_remove_action(void* self, void* action) {
    return KFontSizeAction_RemoveAction((KFontSizeAction*)self, (QAction*)action);
}

QAction* k_fontsizeaction_qbase_remove_action(void* self, void* action) {
    return KFontSizeAction_QBaseRemoveAction((KFontSizeAction*)self, (QAction*)action);
}

void k_fontsizeaction_on_remove_action(void* self, QAction* (*callback)(void*, void*)) {
    KFontSizeAction_OnRemoveAction((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_insert_action(void* self, void* before, void* action) {
    KFontSizeAction_InsertAction((KFontSizeAction*)self, (QAction*)before, (QAction*)action);
}

void k_fontsizeaction_qbase_insert_action(void* self, void* before, void* action) {
    KFontSizeAction_QBaseInsertAction((KFontSizeAction*)self, (QAction*)before, (QAction*)action);
}

void k_fontsizeaction_on_insert_action(void* self, void (*callback)(void*, void*, void*)) {
    KFontSizeAction_OnInsertAction((KFontSizeAction*)self, (intptr_t)callback);
}

QWidget* k_fontsizeaction_create_widget(void* self, void* parent) {
    return KFontSizeAction_CreateWidget((KFontSizeAction*)self, (QWidget*)parent);
}

QWidget* k_fontsizeaction_qbase_create_widget(void* self, void* parent) {
    return KFontSizeAction_QBaseCreateWidget((KFontSizeAction*)self, (QWidget*)parent);
}

void k_fontsizeaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KFontSizeAction_OnCreateWidget((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_delete_widget(void* self, void* widget) {
    KFontSizeAction_DeleteWidget((KFontSizeAction*)self, (QWidget*)widget);
}

void k_fontsizeaction_qbase_delete_widget(void* self, void* widget) {
    KFontSizeAction_QBaseDeleteWidget((KFontSizeAction*)self, (QWidget*)widget);
}

void k_fontsizeaction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnDeleteWidget((KFontSizeAction*)self, (intptr_t)callback);
}

bool k_fontsizeaction_event(void* self, void* event) {
    return KFontSizeAction_Event((KFontSizeAction*)self, (QEvent*)event);
}

bool k_fontsizeaction_qbase_event(void* self, void* event) {
    return KFontSizeAction_QBaseEvent((KFontSizeAction*)self, (QEvent*)event);
}

void k_fontsizeaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KFontSizeAction_OnEvent((KFontSizeAction*)self, (intptr_t)callback);
}

bool k_fontsizeaction_event_filter(void* self, void* watched, void* event) {
    return KFontSizeAction_EventFilter((KFontSizeAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_fontsizeaction_qbase_event_filter(void* self, void* watched, void* event) {
    return KFontSizeAction_QBaseEventFilter((KFontSizeAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_fontsizeaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFontSizeAction_OnEventFilter((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_timer_event(void* self, void* event) {
    KFontSizeAction_TimerEvent((KFontSizeAction*)self, (QTimerEvent*)event);
}

void k_fontsizeaction_qbase_timer_event(void* self, void* event) {
    KFontSizeAction_QBaseTimerEvent((KFontSizeAction*)self, (QTimerEvent*)event);
}

void k_fontsizeaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnTimerEvent((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_child_event(void* self, void* event) {
    KFontSizeAction_ChildEvent((KFontSizeAction*)self, (QChildEvent*)event);
}

void k_fontsizeaction_qbase_child_event(void* self, void* event) {
    KFontSizeAction_QBaseChildEvent((KFontSizeAction*)self, (QChildEvent*)event);
}

void k_fontsizeaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnChildEvent((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_custom_event(void* self, void* event) {
    KFontSizeAction_CustomEvent((KFontSizeAction*)self, (QEvent*)event);
}

void k_fontsizeaction_qbase_custom_event(void* self, void* event) {
    KFontSizeAction_QBaseCustomEvent((KFontSizeAction*)self, (QEvent*)event);
}

void k_fontsizeaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnCustomEvent((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_connect_notify(void* self, void* signal) {
    KFontSizeAction_ConnectNotify((KFontSizeAction*)self, (QMetaMethod*)signal);
}

void k_fontsizeaction_qbase_connect_notify(void* self, void* signal) {
    KFontSizeAction_QBaseConnectNotify((KFontSizeAction*)self, (QMetaMethod*)signal);
}

void k_fontsizeaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnConnectNotify((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_disconnect_notify(void* self, void* signal) {
    KFontSizeAction_DisconnectNotify((KFontSizeAction*)self, (QMetaMethod*)signal);
}

void k_fontsizeaction_qbase_disconnect_notify(void* self, void* signal) {
    KFontSizeAction_QBaseDisconnectNotify((KFontSizeAction*)self, (QMetaMethod*)signal);
}

void k_fontsizeaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFontSizeAction_OnDisconnectNotify((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_slot_toggled(void* self, bool param1) {
    KFontSizeAction_SlotToggled((KFontSizeAction*)self, param1);
}

void k_fontsizeaction_qbase_slot_toggled(void* self, bool param1) {
    KFontSizeAction_QBaseSlotToggled((KFontSizeAction*)self, param1);
}

void k_fontsizeaction_on_slot_toggled(void* self, void (*callback)(void*, bool)) {
    KFontSizeAction_OnSlotToggled((KFontSizeAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_fontsizeaction_created_widgets(void* self) {
    libqt_list _arr = KFontSizeAction_CreatedWidgets((KFontSizeAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_fontsizeaction_qbase_created_widgets(void* self) {
    libqt_list _arr = KFontSizeAction_QBaseCreatedWidgets((KFontSizeAction*)self);
    return _arr;
}

void k_fontsizeaction_on_created_widgets(void* self, QWidget** (*callback)()) {
    KFontSizeAction_OnCreatedWidgets((KFontSizeAction*)self, (intptr_t)callback);
}

QObject* k_fontsizeaction_sender(void* self) {
    return KFontSizeAction_Sender((KFontSizeAction*)self);
}

QObject* k_fontsizeaction_qbase_sender(void* self) {
    return KFontSizeAction_QBaseSender((KFontSizeAction*)self);
}

void k_fontsizeaction_on_sender(void* self, QObject* (*callback)()) {
    KFontSizeAction_OnSender((KFontSizeAction*)self, (intptr_t)callback);
}

int32_t k_fontsizeaction_sender_signal_index(void* self) {
    return KFontSizeAction_SenderSignalIndex((KFontSizeAction*)self);
}

int32_t k_fontsizeaction_qbase_sender_signal_index(void* self) {
    return KFontSizeAction_QBaseSenderSignalIndex((KFontSizeAction*)self);
}

void k_fontsizeaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFontSizeAction_OnSenderSignalIndex((KFontSizeAction*)self, (intptr_t)callback);
}

int32_t k_fontsizeaction_receivers(void* self, const char* signal) {
    return KFontSizeAction_Receivers((KFontSizeAction*)self, signal);
}

int32_t k_fontsizeaction_qbase_receivers(void* self, const char* signal) {
    return KFontSizeAction_QBaseReceivers((KFontSizeAction*)self, signal);
}

void k_fontsizeaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFontSizeAction_OnReceivers((KFontSizeAction*)self, (intptr_t)callback);
}

bool k_fontsizeaction_is_signal_connected(void* self, void* signal) {
    return KFontSizeAction_IsSignalConnected((KFontSizeAction*)self, (QMetaMethod*)signal);
}

bool k_fontsizeaction_qbase_is_signal_connected(void* self, void* signal) {
    return KFontSizeAction_QBaseIsSignalConnected((KFontSizeAction*)self, (QMetaMethod*)signal);
}

void k_fontsizeaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFontSizeAction_OnIsSignalConnected((KFontSizeAction*)self, (intptr_t)callback);
}

void k_fontsizeaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fontsizeaction_delete(void* self) {
    KFontSizeAction_Delete((KFontSizeAction*)(self));
}
