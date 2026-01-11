#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libkselectaction.hpp"
#include "libkselectaction.h"

KSelectAction* k_selectaction_new(void* parent) {
    return KSelectAction_new((QObject*)parent);
}

KSelectAction* k_selectaction_new2(const char* text, void* parent) {
    return KSelectAction_new2(qstring(text), (QObject*)parent);
}

KSelectAction* k_selectaction_new3(void* icon, const char* text, void* parent) {
    return KSelectAction_new3((QIcon*)icon, qstring(text), (QObject*)parent);
}

const QMetaObject* k_selectaction_meta_object(void* self) {
    return KSelectAction_MetaObject((KSelectAction*)self);
}

void* k_selectaction_metacast(void* self, const char* param1) {
    return KSelectAction_Metacast((KSelectAction*)self, param1);
}

int32_t k_selectaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectAction_Metacall((KSelectAction*)self, param1, param2, param3);
}

void k_selectaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSelectAction_OnMetacall((KSelectAction*)self, (intptr_t)callback);
}

int32_t k_selectaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectAction_QBaseMetacall((KSelectAction*)self, param1, param2, param3);
}

const char* k_selectaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_selectaction_tool_bar_mode(void* self) {
    return KSelectAction_ToolBarMode((KSelectAction*)self);
}

void k_selectaction_set_tool_bar_mode(void* self, int32_t mode) {
    KSelectAction_SetToolBarMode((KSelectAction*)self, mode);
}

int32_t k_selectaction_tool_button_popup_mode(void* self) {
    return KSelectAction_ToolButtonPopupMode((KSelectAction*)self);
}

void k_selectaction_set_tool_button_popup_mode(void* self, int32_t mode) {
    KSelectAction_SetToolButtonPopupMode((KSelectAction*)self, mode);
}

QActionGroup* k_selectaction_selectable_action_group(void* self) {
    return KSelectAction_SelectableActionGroup((KSelectAction*)self);
}

QAction* k_selectaction_current_action(void* self) {
    return KSelectAction_CurrentAction((KSelectAction*)self);
}

int32_t k_selectaction_current_item(void* self) {
    return KSelectAction_CurrentItem((KSelectAction*)self);
}

const char* k_selectaction_current_text(void* self) {
    libqt_string _str = KSelectAction_CurrentText((KSelectAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAction* */ k_selectaction_actions(void* self) {
    libqt_list _arr = KSelectAction_Actions((KSelectAction*)self);
    return _arr;
}

QAction* k_selectaction_action(void* self, int index) {
    return KSelectAction_Action((KSelectAction*)self, index);
}

QAction* k_selectaction_action2(void* self, const char* text) {
    return KSelectAction_Action2((KSelectAction*)self, qstring(text));
}

bool k_selectaction_set_current_action(void* self, void* action) {
    return KSelectAction_SetCurrentAction((KSelectAction*)self, (QAction*)action);
}

bool k_selectaction_set_current_item(void* self, int index) {
    return KSelectAction_SetCurrentItem((KSelectAction*)self, index);
}

bool k_selectaction_set_current_action2(void* self, const char* text) {
    return KSelectAction_SetCurrentAction2((KSelectAction*)self, qstring(text));
}

void k_selectaction_add_action(void* self, void* action) {
    KSelectAction_AddAction((KSelectAction*)self, (QAction*)action);
}

QAction* k_selectaction_add_action2(void* self, const char* text) {
    return KSelectAction_AddAction2((KSelectAction*)self, qstring(text));
}

QAction* k_selectaction_add_action3(void* self, void* icon, const char* text) {
    return KSelectAction_AddAction3((KSelectAction*)self, (QIcon*)icon, qstring(text));
}

QAction* k_selectaction_remove_action(void* self, void* action) {
    return KSelectAction_RemoveAction((KSelectAction*)self, (QAction*)action);
}

void k_selectaction_on_remove_action(void* self, QAction* (*callback)(void*, void*)) {
    KSelectAction_OnRemoveAction((KSelectAction*)self, (intptr_t)callback);
}

QAction* k_selectaction_qbase_remove_action(void* self, void* action) {
    return KSelectAction_QBaseRemoveAction((KSelectAction*)self, (QAction*)action);
}

void k_selectaction_insert_action(void* self, void* before, void* action) {
    KSelectAction_InsertAction((KSelectAction*)self, (QAction*)before, (QAction*)action);
}

void k_selectaction_on_insert_action(void* self, void (*callback)(void*, void*, void*)) {
    KSelectAction_OnInsertAction((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_qbase_insert_action(void* self, void* before, void* action) {
    KSelectAction_QBaseInsertAction((KSelectAction*)self, (QAction*)before, (QAction*)action);
}

void k_selectaction_set_items(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectaction_set_items");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    KSelectAction_SetItems((KSelectAction*)self, lst_list);
    free(lst_qstr);
}

const char** k_selectaction_items(void* self) {
    libqt_list _arr = KSelectAction_Items((KSelectAction*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectaction_items");
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

bool k_selectaction_is_editable(void* self) {
    return KSelectAction_IsEditable((KSelectAction*)self);
}

void k_selectaction_set_editable(void* self, bool editable) {
    KSelectAction_SetEditable((KSelectAction*)self, editable);
}

int32_t k_selectaction_combo_width(void* self) {
    return KSelectAction_ComboWidth((KSelectAction*)self);
}

void k_selectaction_set_combo_width(void* self, int width) {
    KSelectAction_SetComboWidth((KSelectAction*)self, width);
}

void k_selectaction_set_max_combo_view_count(void* self, int n) {
    KSelectAction_SetMaxComboViewCount((KSelectAction*)self, n);
}

void k_selectaction_clear(void* self) {
    KSelectAction_Clear((KSelectAction*)self);
}

void k_selectaction_remove_all_actions(void* self) {
    KSelectAction_RemoveAllActions((KSelectAction*)self);
}

void k_selectaction_set_menu_accels_enabled(void* self, bool b) {
    KSelectAction_SetMenuAccelsEnabled((KSelectAction*)self, b);
}

bool k_selectaction_menu_accels_enabled(void* self) {
    return KSelectAction_MenuAccelsEnabled((KSelectAction*)self);
}

void k_selectaction_change_item(void* self, int index, const char* text) {
    KSelectAction_ChangeItem((KSelectAction*)self, index, qstring(text));
}

void k_selectaction_action_triggered(void* self, void* action) {
    KSelectAction_ActionTriggered((KSelectAction*)self, (QAction*)action);
}

void k_selectaction_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    KSelectAction_Connect_ActionTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_index_triggered(void* self, int index) {
    KSelectAction_IndexTriggered((KSelectAction*)self, index);
}

void k_selectaction_on_index_triggered(void* self, void (*callback)(void*, int)) {
    KSelectAction_Connect_IndexTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_text_triggered(void* self, const char* text) {
    KSelectAction_TextTriggered((KSelectAction*)self, qstring(text));
}

void k_selectaction_on_text_triggered(void* self, void (*callback)(void*, const char*)) {
    KSelectAction_Connect_TextTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_slot_action_triggered(void* self, void* action) {
    KSelectAction_SlotActionTriggered((KSelectAction*)self, (QAction*)action);
}

void k_selectaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnSlotActionTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_qbase_slot_action_triggered(void* self, void* action) {
    KSelectAction_QBaseSlotActionTriggered((KSelectAction*)self, (QAction*)action);
}

void k_selectaction_slot_toggled(void* self, bool param1) {
    KSelectAction_SlotToggled((KSelectAction*)self, param1);
}

void k_selectaction_on_slot_toggled(void* self, void (*callback)(void*, bool)) {
    KSelectAction_OnSlotToggled((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_qbase_slot_toggled(void* self, bool param1) {
    KSelectAction_QBaseSlotToggled((KSelectAction*)self, param1);
}

QWidget* k_selectaction_create_widget(void* self, void* parent) {
    return KSelectAction_CreateWidget((KSelectAction*)self, (QWidget*)parent);
}

void k_selectaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KSelectAction_OnCreateWidget((KSelectAction*)self, (intptr_t)callback);
}

QWidget* k_selectaction_qbase_create_widget(void* self, void* parent) {
    return KSelectAction_QBaseCreateWidget((KSelectAction*)self, (QWidget*)parent);
}

void k_selectaction_delete_widget(void* self, void* widget) {
    KSelectAction_DeleteWidget((KSelectAction*)self, (QWidget*)widget);
}

void k_selectaction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnDeleteWidget((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_qbase_delete_widget(void* self, void* widget) {
    KSelectAction_QBaseDeleteWidget((KSelectAction*)self, (QWidget*)widget);
}

bool k_selectaction_event(void* self, void* event) {
    return KSelectAction_Event((KSelectAction*)self, (QEvent*)event);
}

void k_selectaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KSelectAction_OnEvent((KSelectAction*)self, (intptr_t)callback);
}

bool k_selectaction_qbase_event(void* self, void* event) {
    return KSelectAction_QBaseEvent((KSelectAction*)self, (QEvent*)event);
}

bool k_selectaction_event_filter(void* self, void* watched, void* event) {
    return KSelectAction_EventFilter((KSelectAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_selectaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSelectAction_OnEventFilter((KSelectAction*)self, (intptr_t)callback);
}

bool k_selectaction_qbase_event_filter(void* self, void* watched, void* event) {
    return KSelectAction_QBaseEventFilter((KSelectAction*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_selectaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selectaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* k_selectaction_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_Action22((KSelectAction*)self, qstring(text), cs);
}

bool k_selectaction_set_current_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_SetCurrentAction22((KSelectAction*)self, qstring(text), cs);
}

void k_selectaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_selectaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_selectaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_selectaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_selectaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_selectaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_selectaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_selectaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_selectaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_selectaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_selectaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_selectaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_selectaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_selectaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_selectaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_selectaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_selectaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_selectaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_selectaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_selectaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_selectaction_set_shortcuts(void* self, libqt_list shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_selectaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_selectaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_selectaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_selectaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_selectaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_selectaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_selectaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_selectaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_selectaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_selectaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_selectaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_selectaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_selectaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_selectaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_selectaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_selectaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_selectaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_selectaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_selectaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_selectaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_selectaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_selectaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_selectaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_selectaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_selectaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_selectaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_selectaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_selectaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_selectaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_selectaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_selectaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_selectaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_selectaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_selectaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_selectaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_selectaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_selectaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_selectaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_selectaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_selectaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_selectaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_selectaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_selectaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_selectaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_selectaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_selectaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_selectaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_selectaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_selectaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_selectaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_selectaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_selectaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_selectaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_selectaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_selectaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_selectaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_selectaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_selectaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_selectaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_selectaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_selectaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_selectaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_selectaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_selectaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_selectaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_selectaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_selectaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_selectaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_selectaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_selectaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_selectaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_selectaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectaction_dynamic_property_names");
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

QBindingStorage* k_selectaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_selectaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_selectaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_selectaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_selectaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_selectaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_selectaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_selectaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_selectaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_selectaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_selectaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_selectaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_selectaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_selectaction_timer_event(void* self, void* event) {
    KSelectAction_TimerEvent((KSelectAction*)self, (QTimerEvent*)event);
}

void k_selectaction_qbase_timer_event(void* self, void* event) {
    KSelectAction_QBaseTimerEvent((KSelectAction*)self, (QTimerEvent*)event);
}

void k_selectaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnTimerEvent((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_child_event(void* self, void* event) {
    KSelectAction_ChildEvent((KSelectAction*)self, (QChildEvent*)event);
}

void k_selectaction_qbase_child_event(void* self, void* event) {
    KSelectAction_QBaseChildEvent((KSelectAction*)self, (QChildEvent*)event);
}

void k_selectaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnChildEvent((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_custom_event(void* self, void* event) {
    KSelectAction_CustomEvent((KSelectAction*)self, (QEvent*)event);
}

void k_selectaction_qbase_custom_event(void* self, void* event) {
    KSelectAction_QBaseCustomEvent((KSelectAction*)self, (QEvent*)event);
}

void k_selectaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnCustomEvent((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_connect_notify(void* self, void* signal) {
    KSelectAction_ConnectNotify((KSelectAction*)self, (QMetaMethod*)signal);
}

void k_selectaction_qbase_connect_notify(void* self, void* signal) {
    KSelectAction_QBaseConnectNotify((KSelectAction*)self, (QMetaMethod*)signal);
}

void k_selectaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnConnectNotify((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_disconnect_notify(void* self, void* signal) {
    KSelectAction_DisconnectNotify((KSelectAction*)self, (QMetaMethod*)signal);
}

void k_selectaction_qbase_disconnect_notify(void* self, void* signal) {
    KSelectAction_QBaseDisconnectNotify((KSelectAction*)self, (QMetaMethod*)signal);
}

void k_selectaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectAction_OnDisconnectNotify((KSelectAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_selectaction_created_widgets(void* self) {
    libqt_list _arr = KSelectAction_CreatedWidgets((KSelectAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_selectaction_qbase_created_widgets(void* self) {
    libqt_list _arr = KSelectAction_QBaseCreatedWidgets((KSelectAction*)self);
    return _arr;
}

void k_selectaction_on_created_widgets(void* self, QWidget** (*callback)()) {
    KSelectAction_OnCreatedWidgets((KSelectAction*)self, (intptr_t)callback);
}

QObject* k_selectaction_sender(void* self) {
    return KSelectAction_Sender((KSelectAction*)self);
}

QObject* k_selectaction_qbase_sender(void* self) {
    return KSelectAction_QBaseSender((KSelectAction*)self);
}

void k_selectaction_on_sender(void* self, QObject* (*callback)()) {
    KSelectAction_OnSender((KSelectAction*)self, (intptr_t)callback);
}

int32_t k_selectaction_sender_signal_index(void* self) {
    return KSelectAction_SenderSignalIndex((KSelectAction*)self);
}

int32_t k_selectaction_qbase_sender_signal_index(void* self) {
    return KSelectAction_QBaseSenderSignalIndex((KSelectAction*)self);
}

void k_selectaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSelectAction_OnSenderSignalIndex((KSelectAction*)self, (intptr_t)callback);
}

int32_t k_selectaction_receivers(void* self, const char* signal) {
    return KSelectAction_Receivers((KSelectAction*)self, signal);
}

int32_t k_selectaction_qbase_receivers(void* self, const char* signal) {
    return KSelectAction_QBaseReceivers((KSelectAction*)self, signal);
}

void k_selectaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSelectAction_OnReceivers((KSelectAction*)self, (intptr_t)callback);
}

bool k_selectaction_is_signal_connected(void* self, void* signal) {
    return KSelectAction_IsSignalConnected((KSelectAction*)self, (QMetaMethod*)signal);
}

bool k_selectaction_qbase_is_signal_connected(void* self, void* signal) {
    return KSelectAction_QBaseIsSignalConnected((KSelectAction*)self, (QMetaMethod*)signal);
}

void k_selectaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSelectAction_OnIsSignalConnected((KSelectAction*)self, (intptr_t)callback);
}

void k_selectaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_selectaction_delete(void* self) {
    KSelectAction_Delete((KSelectAction*)(self));
}
