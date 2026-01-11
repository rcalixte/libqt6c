#include "../extras-kwidgetsaddons/libkactionmenu.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqwidget.hpp"
#include "../libqwidgetaction.hpp"
#include "libknewfilemenu.hpp"
#include "libknewfilemenu.h"

KNewFileMenu* k_newfilemenu_new(void* parent) {
    return KNewFileMenu_new((QObject*)parent);
}

const QMetaObject* k_newfilemenu_meta_object(void* self) {
    return KNewFileMenu_MetaObject((KNewFileMenu*)self);
}

void* k_newfilemenu_metacast(void* self, const char* param1) {
    return KNewFileMenu_Metacast((KNewFileMenu*)self, param1);
}

int32_t k_newfilemenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNewFileMenu_Metacall((KNewFileMenu*)self, param1, param2, param3);
}

void k_newfilemenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNewFileMenu_OnMetacall((KNewFileMenu*)self, (intptr_t)callback);
}

int32_t k_newfilemenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNewFileMenu_QBaseMetacall((KNewFileMenu*)self, param1, param2, param3);
}

const char* k_newfilemenu_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_newfilemenu_is_modal(void* self) {
    return KNewFileMenu_IsModal((KNewFileMenu*)self);
}

void k_newfilemenu_set_modal(void* self, bool modality) {
    KNewFileMenu_SetModal((KNewFileMenu*)self, modality);
}

void k_newfilemenu_set_parent_widget(void* self, void* parentWidget) {
    KNewFileMenu_SetParentWidget((KNewFileMenu*)self, (QWidget*)parentWidget);
}

void k_newfilemenu_set_working_directory(void* self, void* directory) {
    KNewFileMenu_SetWorkingDirectory((KNewFileMenu*)self, (QUrl*)directory);
}

QUrl* k_newfilemenu_working_directory(void* self) {
    return KNewFileMenu_WorkingDirectory((KNewFileMenu*)self);
}

void k_newfilemenu_set_supported_mime_types(void* self, const char* mime[static 1]) {
    size_t mime_len = libqt_strv_length(mime);
    libqt_string* mime_qstr = (libqt_string*)malloc(mime_len * sizeof(libqt_string));
    if (mime_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_newfilemenu_set_supported_mime_types");
        abort();
    }
    for (size_t i = 0; i < mime_len; ++i) {
        mime_qstr[i] = qstring(mime[i]);
    }
    libqt_list mime_list = qlist(mime_qstr, mime_len);
    KNewFileMenu_SetSupportedMimeTypes((KNewFileMenu*)self, mime_list);
    free(mime_qstr);
}

const char** k_newfilemenu_supported_mime_types(void* self) {
    libqt_list _arr = KNewFileMenu_SupportedMimeTypes((KNewFileMenu*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_newfilemenu_supported_mime_types");
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

void k_newfilemenu_set_select_dir_when_already_exist(void* self, bool b) {
    KNewFileMenu_SetSelectDirWhenAlreadyExist((KNewFileMenu*)self, b);
}

void k_newfilemenu_set_new_folder_shortcut_action(void* self, void* action) {
    KNewFileMenu_SetNewFolderShortcutAction((KNewFileMenu*)self, (QAction*)action);
}

void k_newfilemenu_set_new_file_shortcut_action(void* self, void* action) {
    KNewFileMenu_SetNewFileShortcutAction((KNewFileMenu*)self, (QAction*)action);
}

bool k_newfilemenu_is_create_directory_running(void* self) {
    return KNewFileMenu_IsCreateDirectoryRunning((KNewFileMenu*)self);
}

bool k_newfilemenu_is_create_file_running(void* self) {
    return KNewFileMenu_IsCreateFileRunning((KNewFileMenu*)self);
}

void k_newfilemenu_set_window_title(void* self, const char* title) {
    KNewFileMenu_SetWindowTitle((KNewFileMenu*)self, qstring(title));
}

void k_newfilemenu_check_up_to_date(void* self) {
    KNewFileMenu_CheckUpToDate((KNewFileMenu*)self);
}

void k_newfilemenu_create_directory(void* self) {
    KNewFileMenu_CreateDirectory((KNewFileMenu*)self);
}

void k_newfilemenu_create_file(void* self) {
    KNewFileMenu_CreateFile((KNewFileMenu*)self);
}

void k_newfilemenu_file_creation_started(void* self, void* url) {
    KNewFileMenu_FileCreationStarted((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_file_creation_started(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_FileCreationStarted((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_file_created(void* self, void* url) {
    KNewFileMenu_FileCreated((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_file_created(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_FileCreated((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_file_creation_rejected(void* self, void* url) {
    KNewFileMenu_FileCreationRejected((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_file_creation_rejected(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_FileCreationRejected((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_directory_creation_started(void* self, void* url) {
    KNewFileMenu_DirectoryCreationStarted((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_directory_creation_started(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_DirectoryCreationStarted((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_directory_created(void* self, void* url) {
    KNewFileMenu_DirectoryCreated((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_directory_created(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_DirectoryCreated((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_directory_creation_rejected(void* self, void* url) {
    KNewFileMenu_DirectoryCreationRejected((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_directory_creation_rejected(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_DirectoryCreationRejected((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_select_existing_dir(void* self, void* url) {
    KNewFileMenu_SelectExistingDir((KNewFileMenu*)self, (QUrl*)url);
}

void k_newfilemenu_on_select_existing_dir(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_Connect_SelectExistingDir((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_slot_result(void* self, void* job) {
    KNewFileMenu_SlotResult((KNewFileMenu*)self, (KJob*)job);
}

void k_newfilemenu_on_slot_result(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnSlotResult((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_qbase_slot_result(void* self, void* job) {
    KNewFileMenu_QBaseSlotResult((KNewFileMenu*)self, (KJob*)job);
}

const char* k_newfilemenu_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_newfilemenu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_add_action(void* self, void* action) {
    KActionMenu_AddAction((KActionMenu*)self, (QAction*)action);
}

QAction* k_newfilemenu_add_separator(void* self) {
    return KActionMenu_AddSeparator((KActionMenu*)self);
}

void k_newfilemenu_insert_action(void* self, void* before, void* action) {
    KActionMenu_InsertAction((KActionMenu*)self, (QAction*)before, (QAction*)action);
}

QAction* k_newfilemenu_insert_separator(void* self, void* before) {
    return KActionMenu_InsertSeparator((KActionMenu*)self, (QAction*)before);
}

void k_newfilemenu_remove_action(void* self, void* action) {
    KActionMenu_RemoveAction((KActionMenu*)self, (QAction*)action);
}

int32_t k_newfilemenu_popup_mode(void* self) {
    return KActionMenu_PopupMode((KActionMenu*)self);
}

void k_newfilemenu_set_popup_mode(void* self, int32_t popupMode) {
    KActionMenu_SetPopupMode((KActionMenu*)self, popupMode);
}

void k_newfilemenu_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

QWidget* k_newfilemenu_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

QWidget* k_newfilemenu_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

void k_newfilemenu_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

libqt_list /* of QObject* */ k_newfilemenu_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

void k_newfilemenu_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

QActionGroup* k_newfilemenu_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

void k_newfilemenu_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

QIcon* k_newfilemenu_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

void k_newfilemenu_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

const char* k_newfilemenu_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

const char* k_newfilemenu_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

const char* k_newfilemenu_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

const char* k_newfilemenu_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

const char* k_newfilemenu_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_set_priority(void* self, int32_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

int32_t k_newfilemenu_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

void k_newfilemenu_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

bool k_newfilemenu_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

void k_newfilemenu_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

QKeySequence* k_newfilemenu_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

void k_newfilemenu_set_shortcuts(void* self, libqt_list shortcuts) {
    QAction_SetShortcuts((QAction*)self, shortcuts);
}

void k_newfilemenu_set_shortcuts2(void* self, int32_t shortcuts) {
    QAction_SetShortcuts2((QAction*)self, shortcuts);
}

libqt_list /* of QKeySequence* */ k_newfilemenu_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

void k_newfilemenu_set_shortcut_context(void* self, int32_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

int32_t k_newfilemenu_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

void k_newfilemenu_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

bool k_newfilemenu_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

void k_newfilemenu_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

QFont* k_newfilemenu_font(void* self) {
    return QAction_Font((QAction*)self);
}

void k_newfilemenu_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

bool k_newfilemenu_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

QVariant* k_newfilemenu_data(void* self) {
    return QAction_Data((QAction*)self);
}

void k_newfilemenu_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

bool k_newfilemenu_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

bool k_newfilemenu_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

bool k_newfilemenu_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

void k_newfilemenu_activate(void* self, int32_t event) {
    QAction_Activate((QAction*)self, event);
}

void k_newfilemenu_set_menu_role(void* self, int32_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

int32_t k_newfilemenu_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

void k_newfilemenu_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

bool k_newfilemenu_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

void k_newfilemenu_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

bool k_newfilemenu_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

bool k_newfilemenu_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

void k_newfilemenu_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

void k_newfilemenu_hover(void* self) {
    QAction_Hover((QAction*)self);
}

void k_newfilemenu_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

void k_newfilemenu_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

void k_newfilemenu_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

void k_newfilemenu_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

void k_newfilemenu_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

void k_newfilemenu_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

void k_newfilemenu_changed(void* self) {
    QAction_Changed((QAction*)self);
}

void k_newfilemenu_on_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)callback);
}

void k_newfilemenu_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

void k_newfilemenu_on_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)callback);
}

void k_newfilemenu_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

void k_newfilemenu_on_checkable_changed(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)callback);
}

void k_newfilemenu_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

void k_newfilemenu_on_visible_changed(void* self, void (*callback)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)callback);
}

void k_newfilemenu_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

void k_newfilemenu_on_triggered(void* self, void (*callback)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)callback);
}

void k_newfilemenu_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

void k_newfilemenu_on_hovered(void* self, void (*callback)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)callback);
}

void k_newfilemenu_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

void k_newfilemenu_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)callback);
}

bool k_newfilemenu_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

void k_newfilemenu_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

void k_newfilemenu_on_triggered1(void* self, void (*callback)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)callback);
}

const char* k_newfilemenu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newfilemenu_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_newfilemenu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_newfilemenu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_newfilemenu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_newfilemenu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_newfilemenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_newfilemenu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_newfilemenu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_newfilemenu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_newfilemenu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_newfilemenu_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_newfilemenu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_newfilemenu_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_newfilemenu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_newfilemenu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_newfilemenu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_newfilemenu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_newfilemenu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_newfilemenu_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_newfilemenu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_newfilemenu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_newfilemenu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_newfilemenu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_newfilemenu_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_newfilemenu_dynamic_property_names");
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

QBindingStorage* k_newfilemenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_newfilemenu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_newfilemenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_newfilemenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_newfilemenu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_newfilemenu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_newfilemenu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_newfilemenu_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_newfilemenu_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_newfilemenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_newfilemenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_newfilemenu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_newfilemenu_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QWidget* k_newfilemenu_create_widget(void* self, void* parent) {
    return KNewFileMenu_CreateWidget((KNewFileMenu*)self, (QWidget*)parent);
}

QWidget* k_newfilemenu_qbase_create_widget(void* self, void* parent) {
    return KNewFileMenu_QBaseCreateWidget((KNewFileMenu*)self, (QWidget*)parent);
}

void k_newfilemenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KNewFileMenu_OnCreateWidget((KNewFileMenu*)self, (intptr_t)callback);
}

bool k_newfilemenu_event(void* self, void* param1) {
    return KNewFileMenu_Event((KNewFileMenu*)self, (QEvent*)param1);
}

bool k_newfilemenu_qbase_event(void* self, void* param1) {
    return KNewFileMenu_QBaseEvent((KNewFileMenu*)self, (QEvent*)param1);
}

void k_newfilemenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KNewFileMenu_OnEvent((KNewFileMenu*)self, (intptr_t)callback);
}

bool k_newfilemenu_event_filter(void* self, void* param1, void* param2) {
    return KNewFileMenu_EventFilter((KNewFileMenu*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_newfilemenu_qbase_event_filter(void* self, void* param1, void* param2) {
    return KNewFileMenu_QBaseEventFilter((KNewFileMenu*)self, (QObject*)param1, (QEvent*)param2);
}

void k_newfilemenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNewFileMenu_OnEventFilter((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_delete_widget(void* self, void* widget) {
    KNewFileMenu_DeleteWidget((KNewFileMenu*)self, (QWidget*)widget);
}

void k_newfilemenu_qbase_delete_widget(void* self, void* widget) {
    KNewFileMenu_QBaseDeleteWidget((KNewFileMenu*)self, (QWidget*)widget);
}

void k_newfilemenu_on_delete_widget(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnDeleteWidget((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_timer_event(void* self, void* event) {
    KNewFileMenu_TimerEvent((KNewFileMenu*)self, (QTimerEvent*)event);
}

void k_newfilemenu_qbase_timer_event(void* self, void* event) {
    KNewFileMenu_QBaseTimerEvent((KNewFileMenu*)self, (QTimerEvent*)event);
}

void k_newfilemenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnTimerEvent((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_child_event(void* self, void* event) {
    KNewFileMenu_ChildEvent((KNewFileMenu*)self, (QChildEvent*)event);
}

void k_newfilemenu_qbase_child_event(void* self, void* event) {
    KNewFileMenu_QBaseChildEvent((KNewFileMenu*)self, (QChildEvent*)event);
}

void k_newfilemenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnChildEvent((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_custom_event(void* self, void* event) {
    KNewFileMenu_CustomEvent((KNewFileMenu*)self, (QEvent*)event);
}

void k_newfilemenu_qbase_custom_event(void* self, void* event) {
    KNewFileMenu_QBaseCustomEvent((KNewFileMenu*)self, (QEvent*)event);
}

void k_newfilemenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnCustomEvent((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_connect_notify(void* self, void* signal) {
    KNewFileMenu_ConnectNotify((KNewFileMenu*)self, (QMetaMethod*)signal);
}

void k_newfilemenu_qbase_connect_notify(void* self, void* signal) {
    KNewFileMenu_QBaseConnectNotify((KNewFileMenu*)self, (QMetaMethod*)signal);
}

void k_newfilemenu_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnConnectNotify((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_disconnect_notify(void* self, void* signal) {
    KNewFileMenu_DisconnectNotify((KNewFileMenu*)self, (QMetaMethod*)signal);
}

void k_newfilemenu_qbase_disconnect_notify(void* self, void* signal) {
    KNewFileMenu_QBaseDisconnectNotify((KNewFileMenu*)self, (QMetaMethod*)signal);
}

void k_newfilemenu_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNewFileMenu_OnDisconnectNotify((KNewFileMenu*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ k_newfilemenu_created_widgets(void* self) {
    libqt_list _arr = KNewFileMenu_CreatedWidgets((KNewFileMenu*)self);
    return _arr;
}

libqt_list /* of QWidget* */ k_newfilemenu_qbase_created_widgets(void* self) {
    libqt_list _arr = KNewFileMenu_QBaseCreatedWidgets((KNewFileMenu*)self);
    return _arr;
}

void k_newfilemenu_on_created_widgets(void* self, QWidget** (*callback)()) {
    KNewFileMenu_OnCreatedWidgets((KNewFileMenu*)self, (intptr_t)callback);
}

QObject* k_newfilemenu_sender(void* self) {
    return KNewFileMenu_Sender((KNewFileMenu*)self);
}

QObject* k_newfilemenu_qbase_sender(void* self) {
    return KNewFileMenu_QBaseSender((KNewFileMenu*)self);
}

void k_newfilemenu_on_sender(void* self, QObject* (*callback)()) {
    KNewFileMenu_OnSender((KNewFileMenu*)self, (intptr_t)callback);
}

int32_t k_newfilemenu_sender_signal_index(void* self) {
    return KNewFileMenu_SenderSignalIndex((KNewFileMenu*)self);
}

int32_t k_newfilemenu_qbase_sender_signal_index(void* self) {
    return KNewFileMenu_QBaseSenderSignalIndex((KNewFileMenu*)self);
}

void k_newfilemenu_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNewFileMenu_OnSenderSignalIndex((KNewFileMenu*)self, (intptr_t)callback);
}

int32_t k_newfilemenu_receivers(void* self, const char* signal) {
    return KNewFileMenu_Receivers((KNewFileMenu*)self, signal);
}

int32_t k_newfilemenu_qbase_receivers(void* self, const char* signal) {
    return KNewFileMenu_QBaseReceivers((KNewFileMenu*)self, signal);
}

void k_newfilemenu_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNewFileMenu_OnReceivers((KNewFileMenu*)self, (intptr_t)callback);
}

bool k_newfilemenu_is_signal_connected(void* self, void* signal) {
    return KNewFileMenu_IsSignalConnected((KNewFileMenu*)self, (QMetaMethod*)signal);
}

bool k_newfilemenu_qbase_is_signal_connected(void* self, void* signal) {
    return KNewFileMenu_QBaseIsSignalConnected((KNewFileMenu*)self, (QMetaMethod*)signal);
}

void k_newfilemenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNewFileMenu_OnIsSignalConnected((KNewFileMenu*)self, (intptr_t)callback);
}

void k_newfilemenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_newfilemenu_delete(void* self) {
    KNewFileMenu_Delete((KNewFileMenu*)(self));
}
