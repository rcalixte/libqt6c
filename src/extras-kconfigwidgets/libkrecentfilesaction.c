#include "../extras-kconfig/libkconfiggroup.hpp"
#include "../extras-kwidgetsaddons/libkselectaction.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimetype.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libkrecentfilesaction.hpp"
#include "libkrecentfilesaction.h"

KRecentFilesAction* k_recentfilesaction_new(void* parent) {
    return KRecentFilesAction_new((QObject*)parent);
}

KRecentFilesAction* k_recentfilesaction_new2(const char* text, void* parent) {
    return KRecentFilesAction_new2(qstring(text), (QObject*)parent);
}

KRecentFilesAction* k_recentfilesaction_new3(void* icon, const char* text, void* parent) {
    return KRecentFilesAction_new3((QIcon*)icon, qstring(text), (QObject*)parent);
}

const QMetaObject* k_recentfilesaction_meta_object(void* self) {
    return KRecentFilesAction_MetaObject((KRecentFilesAction*)self);
}

void k_recentfilesaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KRecentFilesAction_OnMetaObject((KRecentFilesAction*)self, (intptr_t)callback);
}

const QMetaObject* k_recentfilesaction_qbase_meta_object(void* self) {
    return KRecentFilesAction_QBaseMetaObject((KRecentFilesAction*)self);
}

void* k_recentfilesaction_metacast(void* self, const char* param1) {
    return KRecentFilesAction_Metacast((KRecentFilesAction*)self, param1);
}

void k_recentfilesaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KRecentFilesAction_OnMetacast((KRecentFilesAction*)self, (intptr_t)callback);
}

void* k_recentfilesaction_qbase_metacast(void* self, const char* param1) {
    return KRecentFilesAction_QBaseMetacast((KRecentFilesAction*)self, param1);
}

int32_t k_recentfilesaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRecentFilesAction_Metacall((KRecentFilesAction*)self, param1, param2, param3);
}

void k_recentfilesaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KRecentFilesAction_OnMetacall((KRecentFilesAction*)self, (intptr_t)callback);
}

int32_t k_recentfilesaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRecentFilesAction_QBaseMetacall((KRecentFilesAction*)self, param1, param2, param3);
}

const char* k_recentfilesaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_add_action(void* self, void* action, void* url, const char* name) {
    KRecentFilesAction_AddAction((KRecentFilesAction*)self, (QAction*)action, (QUrl*)url, qstring(name));
}

QAction* k_recentfilesaction_remove_action(void* self, void* action) {
    return KRecentFilesAction_RemoveAction((KRecentFilesAction*)self, (QAction*)action);
}

void k_recentfilesaction_on_remove_action(void* self, QAction* (*callback)(void*, void*)) {
    KRecentFilesAction_OnRemoveAction((KRecentFilesAction*)self, (intptr_t)callback);
}

QAction* k_recentfilesaction_qbase_remove_action(void* self, void* action) {
    return KRecentFilesAction_QBaseRemoveAction((KRecentFilesAction*)self, (QAction*)action);
}

int32_t k_recentfilesaction_max_items(void* self) {
    return KRecentFilesAction_MaxItems((KRecentFilesAction*)self);
}

void k_recentfilesaction_set_max_items(void* self, int maxItems) {
    KRecentFilesAction_SetMaxItems((KRecentFilesAction*)self, maxItems);
}

void k_recentfilesaction_load_entries(void* self, void* config) {
    KRecentFilesAction_LoadEntries((KRecentFilesAction*)self, (KConfigGroup*)config);
}

void k_recentfilesaction_save_entries(void* self, void* config) {
    KRecentFilesAction_SaveEntries((KRecentFilesAction*)self, (KConfigGroup*)config);
}

void k_recentfilesaction_add_url(void* self, void* url) {
    KRecentFilesAction_AddUrl((KRecentFilesAction*)self, (QUrl*)url);
}

void k_recentfilesaction_add_url2(void* self, void* url, const char* name, const char* mimeType) {
    KRecentFilesAction_AddUrl2((KRecentFilesAction*)self, (QUrl*)url, qstring(name), qstring(mimeType));
}

void k_recentfilesaction_remove_url(void* self, void* url) {
    KRecentFilesAction_RemoveUrl((KRecentFilesAction*)self, (QUrl*)url);
}

libqt_list /* of QUrl* */ k_recentfilesaction_urls(void* self) {
    libqt_list _arr = KRecentFilesAction_Urls((KRecentFilesAction*)self);
    return _arr;
}

void k_recentfilesaction_clear(void* self) {
    KRecentFilesAction_Clear((KRecentFilesAction*)self);
}

void k_recentfilesaction_on_clear(void* self, void (*callback)()) {
    KRecentFilesAction_OnClear((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_qbase_clear(void* self) {
    KRecentFilesAction_QBaseClear((KRecentFilesAction*)self);
}

void k_recentfilesaction_url_selected(void* self, void* url) {
    KRecentFilesAction_UrlSelected((KRecentFilesAction*)self, (QUrl*)url);
}

void k_recentfilesaction_on_url_selected(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_Connect_UrlSelected((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_recent_list_cleared(void* self) {
    KRecentFilesAction_RecentListCleared((KRecentFilesAction*)self);
}

void k_recentfilesaction_on_recent_list_cleared(void* self, void (*callback)(void*)) {
    KRecentFilesAction_Connect_RecentListCleared((KRecentFilesAction*)self, (intptr_t)callback);
}

const char* k_recentfilesaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_recentfilesaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_add_action4(void* self, void* action, void* url, const char* name, void* mimeType) {
    KRecentFilesAction_AddAction4((KRecentFilesAction*)self, (QAction*)action, (QUrl*)url, qstring(name), (QMimeType*)mimeType);
}

void k_recentfilesaction_add_url22(void* self, void* url, const char* name) {
    KRecentFilesAction_AddUrl22((KRecentFilesAction*)self, (QUrl*)url, qstring(name));
}

int32_t k_recentfilesaction_tool_bar_mode(void* self) {
    return KSelectAction_ToolBarMode((KSelectAction*)self);
}

void k_recentfilesaction_set_tool_bar_mode(void* self, int32_t mode) {
    KSelectAction_SetToolBarMode((KSelectAction*)self, mode);
}

int32_t k_recentfilesaction_tool_button_popup_mode(void* self) {
    return KSelectAction_ToolButtonPopupMode((KSelectAction*)self);
}

void k_recentfilesaction_set_tool_button_popup_mode(void* self, int32_t mode) {
    KSelectAction_SetToolButtonPopupMode((KSelectAction*)self, mode);
}

QActionGroup* k_recentfilesaction_selectable_action_group(void* self) {
    return KSelectAction_SelectableActionGroup((KSelectAction*)self);
}

QAction* k_recentfilesaction_current_action(void* self) {
    return KSelectAction_CurrentAction((KSelectAction*)self);
}

int32_t k_recentfilesaction_current_item(void* self) {
    return KSelectAction_CurrentItem((KSelectAction*)self);
}

const char* k_recentfilesaction_current_text(void* self) {
    libqt_string _str = KSelectAction_CurrentText((KSelectAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAction* */ k_recentfilesaction_actions(void* self) {
    libqt_list _arr = KSelectAction_Actions((KSelectAction*)self);
    return _arr;
}

QAction* k_recentfilesaction_action(void* self, int index) {
    return KSelectAction_Action((KSelectAction*)self, index);
}

QAction* k_recentfilesaction_action2(void* self, const char* text) {
    return KSelectAction_Action2((KSelectAction*)self, qstring(text));
}

bool k_recentfilesaction_set_current_action(void* self, void* action) {
    return KSelectAction_SetCurrentAction((KSelectAction*)self, (QAction*)action);
}

bool k_recentfilesaction_set_current_item(void* self, int index) {
    return KSelectAction_SetCurrentItem((KSelectAction*)self, index);
}

bool k_recentfilesaction_set_current_action2(void* self, const char* text) {
    return KSelectAction_SetCurrentAction2((KSelectAction*)self, qstring(text));
}

QAction* k_recentfilesaction_add_action2(void* self, const char* text) {
    return KSelectAction_AddAction2((KSelectAction*)self, qstring(text));
}

QAction* k_recentfilesaction_add_action3(void* self, void* icon, const char* text) {
    return KSelectAction_AddAction3((KSelectAction*)self, (QIcon*)icon, qstring(text));
}

void k_recentfilesaction_set_items(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_recentfilesaction_set_items\n");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    KSelectAction_SetItems((KSelectAction*)self, lst_list);
    free(lst_qstr);
}

const char** k_recentfilesaction_items(void* self) {
    libqt_list _arr = KSelectAction_Items((KSelectAction*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_recentfilesaction_items\n");
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

bool k_recentfilesaction_is_editable(void* self) {
    return KSelectAction_IsEditable((KSelectAction*)self);
}

void k_recentfilesaction_set_editable(void* self, bool editable) {
    KSelectAction_SetEditable((KSelectAction*)self, editable);
}

int32_t k_recentfilesaction_combo_width(void* self) {
    return KSelectAction_ComboWidth((KSelectAction*)self);
}

void k_recentfilesaction_set_combo_width(void* self, int width) {
    KSelectAction_SetComboWidth((KSelectAction*)self, width);
}

void k_recentfilesaction_set_max_combo_view_count(void* self, int n) {
    KSelectAction_SetMaxComboViewCount((KSelectAction*)self, n);
}

void k_recentfilesaction_remove_all_actions(void* self) {
    KSelectAction_RemoveAllActions((KSelectAction*)self);
}

void k_recentfilesaction_set_menu_accels_enabled(void* self, bool b) {
    KSelectAction_SetMenuAccelsEnabled((KSelectAction*)self, b);
}

bool k_recentfilesaction_menu_accels_enabled(void* self) {
    return KSelectAction_MenuAccelsEnabled((KSelectAction*)self);
}

void k_recentfilesaction_change_item(void* self, int index, const char* text) {
    KSelectAction_ChangeItem((KSelectAction*)self, index, qstring(text));
}

void k_recentfilesaction_action_triggered(void* self, void* action) {
    KSelectAction_ActionTriggered((KSelectAction*)self, (QAction*)action);
}

void k_recentfilesaction_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    KSelectAction_Connect_ActionTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_index_triggered(void* self, int index) {
    KSelectAction_IndexTriggered((KSelectAction*)self, index);
}

void k_recentfilesaction_on_index_triggered(void* self, void (*callback)(void*, int)) {
    KSelectAction_Connect_IndexTriggered((KSelectAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_text_triggered(void* self, const char* text) {
    KSelectAction_TextTriggered((KSelectAction*)self, qstring(text));
}

void k_recentfilesaction_on_text_triggered(void* self, void (*callback)(void*, const char*)) {
    KSelectAction_Connect_TextTriggered((KSelectAction*)self, (intptr_t)callback);
}

QAction* k_recentfilesaction_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_Action22((KSelectAction*)self, qstring(text), cs);
}

bool k_recentfilesaction_set_current_action22(void* self, const char* text, int32_t cs) {
    return KSelectAction_SetCurrentAction22((KSelectAction*)self, qstring(text), cs);
}

void k_recentfilesaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_recentfilesaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_recentfilesaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_recentfilesaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_recentfilesaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_recentfilesaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_recentfilesaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_recentfilesaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_recentfilesaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_recentfilesaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_recentfilesaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_recentfilesaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_recentfilesaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_recentfilesaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_recentfilesaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_recentfilesaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_recentfilesaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_recentfilesaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_recentfilesaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_recentfilesaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_recentfilesaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_recentfilesaction_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_recentfilesaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_recentfilesaction_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_recentfilesaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_recentfilesaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_recentfilesaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_recentfilesaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_recentfilesaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_recentfilesaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_recentfilesaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_recentfilesaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_recentfilesaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_recentfilesaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_recentfilesaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_recentfilesaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_recentfilesaction_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_recentfilesaction_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_recentfilesaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_recentfilesaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_recentfilesaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_recentfilesaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_recentfilesaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_recentfilesaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_recentfilesaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_recentfilesaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_recentfilesaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_recentfilesaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_recentfilesaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_recentfilesaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_recentfilesaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_recentfilesaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_recentfilesaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_recentfilesaction_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_recentfilesaction_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_recentfilesaction_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_recentfilesaction_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_recentfilesaction_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_recentfilesaction_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_recentfilesaction_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_recentfilesaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_recentfilesaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_recentfilesaction_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_recentfilesaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentfilesaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_recentfilesaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_recentfilesaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_recentfilesaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_recentfilesaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_recentfilesaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_recentfilesaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_recentfilesaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_recentfilesaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_recentfilesaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_recentfilesaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_recentfilesaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_recentfilesaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_recentfilesaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_recentfilesaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_recentfilesaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_recentfilesaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_recentfilesaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_recentfilesaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_recentfilesaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_recentfilesaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_recentfilesaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_recentfilesaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_recentfilesaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_recentfilesaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_recentfilesaction_dynamic_property_names\n");
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

QBindingStorage* k_recentfilesaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_recentfilesaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_recentfilesaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_recentfilesaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_recentfilesaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_recentfilesaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_recentfilesaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_recentfilesaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_recentfilesaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_recentfilesaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_recentfilesaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_recentfilesaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_recentfilesaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_recentfilesaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_recentfilesaction_insert_action(void* self, void* before, void* action) {
    KRecentFilesAction_InsertAction((KRecentFilesAction*)self, (QAction*)before, (QAction*)action);
}

void k_recentfilesaction_qbase_insert_action(void* self, void* before, void* action) {
    KRecentFilesAction_QBaseInsertAction((KRecentFilesAction*)self, (QAction*)before, (QAction*)action);
}

void k_recentfilesaction_on_insert_action(void* self, void (*callback)(void*, void*, void*)) {
    KRecentFilesAction_OnInsertAction((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_slot_action_triggered(void* self, void* action) {
    KRecentFilesAction_SlotActionTriggered((KRecentFilesAction*)self, (QAction*)action);
}

void k_recentfilesaction_qbase_slot_action_triggered(void* self, void* action) {
    KRecentFilesAction_QBaseSlotActionTriggered((KRecentFilesAction*)self, (QAction*)action);
}

void k_recentfilesaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnSlotActionTriggered((KRecentFilesAction*)self, (intptr_t)callback);
}

QWidget* k_recentfilesaction_create_widget(void* self, void* parent) {
    return KRecentFilesAction_CreateWidget((KRecentFilesAction*)self, (QWidget*)parent);
}

QWidget* k_recentfilesaction_qbase_create_widget(void* self, void* parent) {
    return KRecentFilesAction_QBaseCreateWidget((KRecentFilesAction*)self, (QWidget*)parent);
}

void k_recentfilesaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KRecentFilesAction_OnCreateWidget((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_delete_widget(void* self, void* widget) {
    KRecentFilesAction_DeleteWidget((KRecentFilesAction*)self, (QWidget*)widget);
}

void k_recentfilesaction_qbase_delete_widget(void* self, void* widget) {
    KRecentFilesAction_QBaseDeleteWidget((KRecentFilesAction*)self, (QWidget*)widget);
}

void k_recentfilesaction_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnDeleteWidget((KRecentFilesAction*)self, (intptr_t)callback);
}

bool k_recentfilesaction_event(void* self, void* event) {
    return KRecentFilesAction_Event((KRecentFilesAction*)self, (QEvent*)event);
}

bool k_recentfilesaction_qbase_event(void* self, void* event) {
    return KRecentFilesAction_QBaseEvent((KRecentFilesAction*)self, (QEvent*)event);
}

void k_recentfilesaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KRecentFilesAction_OnEvent((KRecentFilesAction*)self, (intptr_t)callback);
}

bool k_recentfilesaction_event_filter(void* self, void* watched, void* event) {
    return KRecentFilesAction_EventFilter((KRecentFilesAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_recentfilesaction_qbase_event_filter(void* self, void* watched, void* event) {
    return KRecentFilesAction_QBaseEventFilter((KRecentFilesAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_recentfilesaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KRecentFilesAction_OnEventFilter((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_timer_event(void* self, void* event) {
    KRecentFilesAction_TimerEvent((KRecentFilesAction*)self, (QTimerEvent*)event);
}

void k_recentfilesaction_qbase_timer_event(void* self, void* event) {
    KRecentFilesAction_QBaseTimerEvent((KRecentFilesAction*)self, (QTimerEvent*)event);
}

void k_recentfilesaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnTimerEvent((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_child_event(void* self, void* event) {
    KRecentFilesAction_ChildEvent((KRecentFilesAction*)self, (QChildEvent*)event);
}

void k_recentfilesaction_qbase_child_event(void* self, void* event) {
    KRecentFilesAction_QBaseChildEvent((KRecentFilesAction*)self, (QChildEvent*)event);
}

void k_recentfilesaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnChildEvent((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_custom_event(void* self, void* event) {
    KRecentFilesAction_CustomEvent((KRecentFilesAction*)self, (QEvent*)event);
}

void k_recentfilesaction_qbase_custom_event(void* self, void* event) {
    KRecentFilesAction_QBaseCustomEvent((KRecentFilesAction*)self, (QEvent*)event);
}

void k_recentfilesaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnCustomEvent((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_connect_notify(void* self, void* signal) {
    KRecentFilesAction_ConnectNotify((KRecentFilesAction*)self, (QMetaMethod*)signal);
}

void k_recentfilesaction_qbase_connect_notify(void* self, void* signal) {
    KRecentFilesAction_QBaseConnectNotify((KRecentFilesAction*)self, (QMetaMethod*)signal);
}

void k_recentfilesaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnConnectNotify((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_disconnect_notify(void* self, void* signal) {
    KRecentFilesAction_DisconnectNotify((KRecentFilesAction*)self, (QMetaMethod*)signal);
}

void k_recentfilesaction_qbase_disconnect_notify(void* self, void* signal) {
    KRecentFilesAction_QBaseDisconnectNotify((KRecentFilesAction*)self, (QMetaMethod*)signal);
}

void k_recentfilesaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KRecentFilesAction_OnDisconnectNotify((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_slot_toggled(void* self, bool param1) {
    KRecentFilesAction_SlotToggled((KRecentFilesAction*)self, param1);
}

void k_recentfilesaction_qbase_slot_toggled(void* self, bool param1) {
    KRecentFilesAction_QBaseSlotToggled((KRecentFilesAction*)self, param1);
}

void k_recentfilesaction_on_slot_toggled(void* self, void (*callback)(void*, bool)) {
    KRecentFilesAction_OnSlotToggled((KRecentFilesAction*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_recentfilesaction_created_widgets(void* self) {
    libqt_list _arr = KRecentFilesAction_CreatedWidgets((KRecentFilesAction*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_recentfilesaction_qbase_created_widgets(void* self) {
    libqt_list _arr = KRecentFilesAction_QBaseCreatedWidgets((KRecentFilesAction*)self);
    return _arr;
}

void k_recentfilesaction_on_created_widgets(void* self, QWidget** (*callback)()) {
    KRecentFilesAction_OnCreatedWidgets((KRecentFilesAction*)self, (intptr_t)callback);
}

QObject* k_recentfilesaction_sender(void* self) {
    return KRecentFilesAction_Sender((KRecentFilesAction*)self);
}

QObject* k_recentfilesaction_qbase_sender(void* self) {
    return KRecentFilesAction_QBaseSender((KRecentFilesAction*)self);
}

void k_recentfilesaction_on_sender(void* self, QObject* (*callback)()) {
    KRecentFilesAction_OnSender((KRecentFilesAction*)self, (intptr_t)callback);
}

int32_t k_recentfilesaction_sender_signal_index(void* self) {
    return KRecentFilesAction_SenderSignalIndex((KRecentFilesAction*)self);
}

int32_t k_recentfilesaction_qbase_sender_signal_index(void* self) {
    return KRecentFilesAction_QBaseSenderSignalIndex((KRecentFilesAction*)self);
}

void k_recentfilesaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KRecentFilesAction_OnSenderSignalIndex((KRecentFilesAction*)self, (intptr_t)callback);
}

int32_t k_recentfilesaction_receivers(void* self, const char* signal) {
    return KRecentFilesAction_Receivers((KRecentFilesAction*)self, signal);
}

int32_t k_recentfilesaction_qbase_receivers(void* self, const char* signal) {
    return KRecentFilesAction_QBaseReceivers((KRecentFilesAction*)self, signal);
}

void k_recentfilesaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KRecentFilesAction_OnReceivers((KRecentFilesAction*)self, (intptr_t)callback);
}

bool k_recentfilesaction_is_signal_connected(void* self, void* signal) {
    return KRecentFilesAction_IsSignalConnected((KRecentFilesAction*)self, (QMetaMethod*)signal);
}

bool k_recentfilesaction_qbase_is_signal_connected(void* self, void* signal) {
    return KRecentFilesAction_QBaseIsSignalConnected((KRecentFilesAction*)self, (QMetaMethod*)signal);
}

void k_recentfilesaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KRecentFilesAction_OnIsSignalConnected((KRecentFilesAction*)self, (intptr_t)callback);
}

void k_recentfilesaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_recentfilesaction_delete(void* self) {
    KRecentFilesAction_Delete((KRecentFilesAction*)(self));
}
