#include "../extras-kwidgetsaddons/libkselectaction.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libkcodecaction.hpp"
#include "libkcodecaction.h"

KCodecAction* k_codecaction_new(void* parent) {
    return KCodecAction_new((QObject*)parent);
}

KCodecAction* k_codecaction_new2(const char* text, void* parent) {
    return KCodecAction_new2(qstring(text), (QObject*)parent);
}

KCodecAction* k_codecaction_new3(void* icon, const char* text, void* parent) {
    return KCodecAction_new3((QIcon*)icon, qstring(text), (QObject*)parent);
}

KCodecAction* k_codecaction_new4(void* parent, bool showAutoOptions) {
    return KCodecAction_new4((QObject*)parent, showAutoOptions);
}

KCodecAction* k_codecaction_new5(const char* text, void* parent, bool showAutoOptions) {
    return KCodecAction_new5(qstring(text), (QObject*)parent, showAutoOptions);
}

KCodecAction* k_codecaction_new6(void* icon, const char* text, void* parent, bool showAutoOptions) {
    return KCodecAction_new6((QIcon*)icon, qstring(text), (QObject*)parent, showAutoOptions);
}

const QMetaObject* k_codecaction_meta_object(void* self) {
    return KCodecAction_MetaObject((KCodecAction*)self);
}

void* k_codecaction_metacast(void* self, const char* param1) {
    return KCodecAction_Metacast((KCodecAction*)self, param1);
}

int32_t k_codecaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCodecAction_Metacall((KCodecAction*)self, param1, param2, param3);
}

void k_codecaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCodecAction_OnMetacall((KCodecAction*)self, (intptr_t)callback);
}

int32_t k_codecaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCodecAction_QBaseMetacall((KCodecAction*)self, param1, param2, param3);
}

const char* k_codecaction_tr(const char* s) {
    libqt_string _str = KCodecAction_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_codecaction_current_codec_name(void* self) {
    libqt_string _str = KCodecAction_CurrentCodecName((KCodecAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_codecaction_set_current_codec(void* self, const char* codecName) {
    return KCodecAction_SetCurrentCodec((KCodecAction*)self, qstring(codecName));
}

void k_codecaction_codec_name_triggered(void* self, const char* name) {
    KCodecAction_CodecNameTriggered((KCodecAction*)self, qstring(name));
}

void k_codecaction_on_codec_name_triggered(void* self, void (*callback)(void*, const char*)) {
    KCodecAction_Connect_CodecNameTriggered((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_default_item_triggered(void* self) {
    KCodecAction_DefaultItemTriggered((KCodecAction*)self);
}

void k_codecaction_on_default_item_triggered(void* self, void (*callback)(void*)) {
    KCodecAction_Connect_DefaultItemTriggered((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_slot_action_triggered(void* self, void* param1) {
    KCodecAction_SlotActionTriggered((KCodecAction*)self, (QAction*)param1);
}

void k_codecaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnSlotActionTriggered((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_qbase_slot_action_triggered(void* self, void* param1) {
    KCodecAction_QBaseSlotActionTriggered((KCodecAction*)self, (QAction*)param1);
}

const char* k_codecaction_tr2(const char* s, const char* c) {
    libqt_string _str = KCodecAction_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_codecaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KCodecAction_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_codecaction_tool_bar_mode(void* self) {
    return KSelectAction_ToolBarMode((KSelectAction*)self);
}

void k_codecaction_set_tool_bar_mode(void* self, int32_t mode) {
    KSelectAction_SetToolBarMode((KSelectAction*)self, mode);
}

int32_t k_codecaction_tool_button_popup_mode(void* self) {
    return KSelectAction_ToolButtonPopupMode((KSelectAction*)self);
}

void k_codecaction_set_tool_button_popup_mode(void* self, int32_t mode) {
    KSelectAction_SetToolButtonPopupMode((KSelectAction*)self, mode);
}

QActionGroup* k_codecaction_selectable_action_group(void* self) {
    return KSelectAction_SelectableActionGroup((KSelectAction*)self);
}

QAction* k_codecaction_current_action(void* self) {
    return KSelectAction_CurrentAction((KSelectAction*)self);
}

int32_t k_codecaction_current_item(void* self) {
    return KSelectAction_CurrentItem((KSelectAction*)self);
}

const char* k_codecaction_current_text(void* self) {
    libqt_string _str = KSelectAction_CurrentText((KSelectAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAction* */ k_codecaction_actions(void* self) {
    libqt_list _arr = KSelectAction_Actions((KSelectAction*)self);
    return _arr;
}

QAction* k_codecaction_action(void* self, int index) {
    return KSelectAction_Action((KSelectAction*)self, index);
}

QAction* k_codecaction_action2(void* self, const char* text) {
    return KSelectAction_Action2((KSelectAction*)self, qstring(text));
}

bool k_codecaction_set_current_action(void* self, void* action) {
    return KSelectAction_SetCurrentAction((KSelectAction*)self, (QAction*)action);
}

bool k_codecaction_set_current_item(void* self, int index) {
    return KSelectAction_SetCurrentItem((KSelectAction*)self, index);
}

bool k_codecaction_set_current_action2(void* self, const char* text) {
    return KSelectAction_SetCurrentAction2((KSelectAction*)self, qstring(text));
}

void k_codecaction_add_action(void* self, void* action) {
    KSelectAction_AddAction((KSelectAction*)self, (QAction*)action);
}

QAction* k_codecaction_add_action2(void* self, const char* text) {
    return KSelectAction_AddAction2((KSelectAction*)self, qstring(text));
}

QAction* k_codecaction_add_action3(void* self, void* icon, const char* text) {
    return KSelectAction_AddAction3((KSelectAction*)self, (QIcon*)icon, qstring(text));
}

void k_codecaction_set_items(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_codecaction_set_items");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    KSelectAction_SetItems((KSelectAction*)self, lst_list);
    free(lst_qstr);
}

const char** k_codecaction_items(void* self) {
    libqt_list _arr = KSelectAction_Items((KSelectAction*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_codecaction_items");
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

bool k_codecaction_is_editable(void* self) {
    return KSelectAction_IsEditable((KSelectAction*)self);
}

void k_codecaction_set_editable(void* self, bool editable) {
    KSelectAction_SetEditable((KSelectAction*)self, editable);
}

int32_t k_codecaction_combo_width(void* self) {
    return KSelectAction_ComboWidth((KSelectAction*)self);
}

void k_codecaction_set_combo_width(void* self, int width) {
    KSelectAction_SetComboWidth((KSelectAction*)self, width);
}

void k_codecaction_set_max_combo_view_count(void* self, int n) {
    KSelectAction_SetMaxComboViewCount((KSelectAction*)self, n);
}

void k_codecaction_clear(void* self) {
    KSelectAction_Clear((KSelectAction*)self);
}

void k_codecaction_remove_all_actions(void* self) {
    KSelectAction_RemoveAllActions((KSelectAction*)self);
}

void k_codecaction_set_menu_accels_enabled(void* self, bool b) {
    KSelectAction_SetMenuAccelsEnabled((KSelectAction*)self, b);
}

bool k_codecaction_menu_accels_enabled(void* self) {
    return KSelectAction_MenuAccelsEnabled((KSelectAction*)self);
}

void k_codecaction_change_item(void* self, int index, const char* text) {
    KSelectAction_ChangeItem((KSelectAction*)self, index, qstring(text));
}

void k_codecaction_action_triggered(void* self, void* action) {
    KSelectAction_ActionTriggered((KSelectAction*)self, (QAction*)action);
}

void k_codecaction_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    KSelectAction_Connect_ActionTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_codecaction_index_triggered(void* self, int index) {
    KSelectAction_IndexTriggered((KSelectAction*)self, index);
}

void k_codecaction_on_index_triggered(void* self, void (*callback)(void*, int)) {
    KSelectAction_Connect_IndexTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_codecaction_text_triggered(void* self, const char* text) {
    KSelectAction_TextTriggered((KSelectAction*)self, qstring(text));
}

void k_codecaction_on_text_triggered(void* self, void (*callback)(void*, const char*)) {
    KSelectAction_Connect_TextTriggered((KSelectAction*)self, (intptr_t)callback);
}

QAction* k_codecaction_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_Action22((KSelectAction*)self, qstring(text), cs);
}

bool k_codecaction_set_current_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_SetCurrentAction22((KSelectAction*)self, qstring(text), cs);
}

void k_codecaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_codecaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_codecaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_codecaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_codecaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_codecaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_codecaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_codecaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_codecaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_codecaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_codecaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_codecaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_codecaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_codecaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_codecaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_codecaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_codecaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_codecaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_codecaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_codecaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_codecaction_set_shortcuts(void* self, libqt_list shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_codecaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_codecaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_codecaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_codecaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_codecaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_codecaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_codecaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_codecaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_codecaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_codecaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_codecaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_codecaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_codecaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_codecaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_codecaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_codecaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_codecaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_codecaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_codecaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_codecaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_codecaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_codecaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_codecaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_codecaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_codecaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_codecaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_codecaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_codecaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_codecaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_codecaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_codecaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_codecaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_codecaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_codecaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_codecaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_codecaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_codecaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_codecaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_codecaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_codecaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_codecaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_codecaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_codecaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_codecaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_codecaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_codecaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_codecaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_codecaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_codecaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_codecaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_codecaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_codecaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_codecaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_codecaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_codecaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_codecaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_codecaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_codecaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_codecaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_codecaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_codecaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_codecaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_codecaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_codecaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_codecaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_codecaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_codecaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_codecaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_codecaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_codecaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_codecaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_codecaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_codecaction_dynamic_property_names");
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

QBindingStorage* k_codecaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_codecaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_codecaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_codecaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_codecaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_codecaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_codecaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_codecaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_codecaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_codecaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_codecaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_codecaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_codecaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QAction* k_codecaction_remove_action(void* self, void* action) {
    return KCodecAction_RemoveAction((KCodecAction*)self, (QAction*)action);
}

QAction* k_codecaction_qbase_remove_action(void* self, void* action) {
    return KCodecAction_QBaseRemoveAction((KCodecAction*)self, (QAction*)action);
}

void k_codecaction_on_remove_action(void* self, QAction* (*callback)(void*, void*)) {
    KCodecAction_OnRemoveAction((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_insert_action(void* self, void* before, void* action) {
    KCodecAction_InsertAction((KCodecAction*)self, (QAction*)before, (QAction*)action);
}

void k_codecaction_qbase_insert_action(void* self, void* before, void* action) {
    KCodecAction_QBaseInsertAction((KCodecAction*)self, (QAction*)before, (QAction*)action);
}

void k_codecaction_on_insert_action(void* self, void (*callback)(void*, void*, void*)) {
    KCodecAction_OnInsertAction((KCodecAction*)self, (intptr_t)callback);
}

QWidget* k_codecaction_create_widget(void* self, void* parent) {
    return KCodecAction_CreateWidget((KCodecAction*)self, (QWidget*)parent);
}

QWidget* k_codecaction_qbase_create_widget(void* self, void* parent) {
    return KCodecAction_QBaseCreateWidget((KCodecAction*)self, (QWidget*)parent);
}

void k_codecaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KCodecAction_OnCreateWidget((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_delete_widget(void* self, void* widget) {
    KCodecAction_DeleteWidget((KCodecAction*)self, (QWidget*)widget);
}

void k_codecaction_qbase_delete_widget(void* self, void* widget) {
    KCodecAction_QBaseDeleteWidget((KCodecAction*)self, (QWidget*)widget);
}

void k_codecaction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnDeleteWidget((KCodecAction*)self, (intptr_t)callback);
}

bool k_codecaction_event(void* self, void* event) {
    return KCodecAction_Event((KCodecAction*)self, (QEvent*)event);
}

bool k_codecaction_qbase_event(void* self, void* event) {
    return KCodecAction_QBaseEvent((KCodecAction*)self, (QEvent*)event);
}

void k_codecaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KCodecAction_OnEvent((KCodecAction*)self, (intptr_t)callback);
}

bool k_codecaction_event_filter(void* self, void* watched, void* event) {
    return KCodecAction_EventFilter((KCodecAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_codecaction_qbase_event_filter(void* self, void* watched, void* event) {
    return KCodecAction_QBaseEventFilter((KCodecAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_codecaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCodecAction_OnEventFilter((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_timer_event(void* self, void* event) {
    KCodecAction_TimerEvent((KCodecAction*)self, (QTimerEvent*)event);
}

void k_codecaction_qbase_timer_event(void* self, void* event) {
    KCodecAction_QBaseTimerEvent((KCodecAction*)self, (QTimerEvent*)event);
}

void k_codecaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnTimerEvent((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_child_event(void* self, void* event) {
    KCodecAction_ChildEvent((KCodecAction*)self, (QChildEvent*)event);
}

void k_codecaction_qbase_child_event(void* self, void* event) {
    KCodecAction_QBaseChildEvent((KCodecAction*)self, (QChildEvent*)event);
}

void k_codecaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnChildEvent((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_custom_event(void* self, void* event) {
    KCodecAction_CustomEvent((KCodecAction*)self, (QEvent*)event);
}

void k_codecaction_qbase_custom_event(void* self, void* event) {
    KCodecAction_QBaseCustomEvent((KCodecAction*)self, (QEvent*)event);
}

void k_codecaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnCustomEvent((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_connect_notify(void* self, void* signal) {
    KCodecAction_ConnectNotify((KCodecAction*)self, (QMetaMethod*)signal);
}

void k_codecaction_qbase_connect_notify(void* self, void* signal) {
    KCodecAction_QBaseConnectNotify((KCodecAction*)self, (QMetaMethod*)signal);
}

void k_codecaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnConnectNotify((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_disconnect_notify(void* self, void* signal) {
    KCodecAction_DisconnectNotify((KCodecAction*)self, (QMetaMethod*)signal);
}

void k_codecaction_qbase_disconnect_notify(void* self, void* signal) {
    KCodecAction_QBaseDisconnectNotify((KCodecAction*)self, (QMetaMethod*)signal);
}

void k_codecaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCodecAction_OnDisconnectNotify((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_slot_toggled(void* self, bool param1) {
    KCodecAction_SlotToggled((KCodecAction*)self, param1);
}

void k_codecaction_qbase_slot_toggled(void* self, bool param1) {
    KCodecAction_QBaseSlotToggled((KCodecAction*)self, param1);
}

void k_codecaction_on_slot_toggled(void* self, void (*callback)(void*, bool)) {
    KCodecAction_OnSlotToggled((KCodecAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_codecaction_created_widgets(void* self) {
    libqt_list _arr = KCodecAction_CreatedWidgets((KCodecAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_codecaction_qbase_created_widgets(void* self) {
    libqt_list _arr = KCodecAction_QBaseCreatedWidgets((KCodecAction*)self);
    return _arr;
}

void k_codecaction_on_created_widgets(void* self, QWidget** (*callback)()) {
    KCodecAction_OnCreatedWidgets((KCodecAction*)self, (intptr_t)callback);
}

QObject* k_codecaction_sender(void* self) {
    return KCodecAction_Sender((KCodecAction*)self);
}

QObject* k_codecaction_qbase_sender(void* self) {
    return KCodecAction_QBaseSender((KCodecAction*)self);
}

void k_codecaction_on_sender(void* self, QObject* (*callback)()) {
    KCodecAction_OnSender((KCodecAction*)self, (intptr_t)callback);
}

int32_t k_codecaction_sender_signal_index(void* self) {
    return KCodecAction_SenderSignalIndex((KCodecAction*)self);
}

int32_t k_codecaction_qbase_sender_signal_index(void* self) {
    return KCodecAction_QBaseSenderSignalIndex((KCodecAction*)self);
}

void k_codecaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCodecAction_OnSenderSignalIndex((KCodecAction*)self, (intptr_t)callback);
}

int32_t k_codecaction_receivers(void* self, const char* signal) {
    return KCodecAction_Receivers((KCodecAction*)self, signal);
}

int32_t k_codecaction_qbase_receivers(void* self, const char* signal) {
    return KCodecAction_QBaseReceivers((KCodecAction*)self, signal);
}

void k_codecaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCodecAction_OnReceivers((KCodecAction*)self, (intptr_t)callback);
}

bool k_codecaction_is_signal_connected(void* self, void* signal) {
    return KCodecAction_IsSignalConnected((KCodecAction*)self, (QMetaMethod*)signal);
}

bool k_codecaction_qbase_is_signal_connected(void* self, void* signal) {
    return KCodecAction_QBaseIsSignalConnected((KCodecAction*)self, (QMetaMethod*)signal);
}

void k_codecaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCodecAction_OnIsSignalConnected((KCodecAction*)self, (intptr_t)callback);
}

void k_codecaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_codecaction_delete(void* self) {
    KCodecAction_Delete((KCodecAction*)(self));
}
