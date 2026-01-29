#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKNEWFILEMENU_H
#define SRC_EXTRAS_KIO_QT6C_LIBKNEWFILEMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knewfilemenu.html)

/// k_newfilemenu_new constructs a new KNewFileMenu object.
///
/// @param parent QObject*
///
KNewFileMenu* k_newfilemenu_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNewFileMenu*
///
const QMetaObject* k_newfilemenu_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KNewFileMenu*
/// @param callback const QMetaObject* func()
///
void k_newfilemenu_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KNewFileMenu*
///
const QMetaObject* k_newfilemenu_qbase_meta_object(void* self);

/// @param self KNewFileMenu*
/// @param param1 const char*
///
void* k_newfilemenu_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNewFileMenu*
/// @param callback void* func(KNewFileMenu* self, const char* param1)
///
void k_newfilemenu_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNewFileMenu*
/// @param param1 const char*
///
void* k_newfilemenu_qbase_metacast(void* self, const char* param1);

/// @param self KNewFileMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_newfilemenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNewFileMenu*
/// @param callback int32_t func(KNewFileMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_newfilemenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNewFileMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_newfilemenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_newfilemenu_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#isModal)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_modal(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setModal)
///
/// @param self KNewFileMenu*
/// @param modality bool
///
void k_newfilemenu_set_modal(void* self, bool modality);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setParentWidget)
///
/// @param self KNewFileMenu*
/// @param parentWidget QWidget*
///
void k_newfilemenu_set_parent_widget(void* self, void* parentWidget);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setWorkingDirectory)
///
/// @param self KNewFileMenu*
/// @param directory QUrl*
///
void k_newfilemenu_set_working_directory(void* self, void* directory);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#workingDirectory)
///
/// @param self KNewFileMenu*
///
QUrl* k_newfilemenu_working_directory(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setSupportedMimeTypes)
///
/// @param self KNewFileMenu*
/// @param mime const char**
///
void k_newfilemenu_set_supported_mime_types(void* self, const char* mime[static 1]);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#supportedMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNewFileMenu*
///
const char** k_newfilemenu_supported_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setSelectDirWhenAlreadyExist)
///
/// @param self KNewFileMenu*
/// @param b bool
///
void k_newfilemenu_set_select_dir_when_already_exist(void* self, bool b);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setNewFolderShortcutAction)
///
/// @param self KNewFileMenu*
/// @param action QAction*
///
void k_newfilemenu_set_new_folder_shortcut_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setNewFileShortcutAction)
///
/// @param self KNewFileMenu*
/// @param action QAction*
///
void k_newfilemenu_set_new_file_shortcut_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#isCreateDirectoryRunning)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_create_directory_running(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#isCreateFileRunning)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_create_file_running(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#setWindowTitle)
///
/// @param self KNewFileMenu*
/// @param title const char*
///
void k_newfilemenu_set_window_title(void* self, const char* title);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#checkUpToDate)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_check_up_to_date(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#createDirectory)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_create_directory(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#createFile)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_create_file(void* self);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationStarted)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_file_creation_started(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationStarted)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_file_creation_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreated)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_file_created(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreated)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_file_created(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationRejected)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_file_creation_rejected(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationRejected)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_file_creation_rejected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationStarted)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_directory_creation_started(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationStarted)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_directory_creation_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreated)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_directory_created(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreated)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_directory_created(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationRejected)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_directory_creation_rejected(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationRejected)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_directory_creation_rejected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#selectExistingDir)
///
/// @param self KNewFileMenu*
/// @param url QUrl*
///
void k_newfilemenu_select_existing_dir(void* self, void* url);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#selectExistingDir)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QUrl* url)
///
void k_newfilemenu_on_select_existing_dir(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#slotResult)
///
/// @param self KNewFileMenu*
/// @param job KJob*
///
void k_newfilemenu_slot_result(void* self, void* job);

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#slotResult)
///
/// Allows for overriding the related default method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, KJob* job)
///
void k_newfilemenu_on_slot_result(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#slotResult)
///
/// Base class method implementation
///
/// @param self KNewFileMenu*
/// @param job KJob*
///
void k_newfilemenu_qbase_slot_result(void* self, void* job);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_newfilemenu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_newfilemenu_tr3(const char* s, const char* c, int n);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#addAction)
///
/// @param self KNewFileMenu*
/// @param action QAction*
///
void k_newfilemenu_add_action(void* self, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#addSeparator)
///
/// @param self KNewFileMenu*
///
QAction* k_newfilemenu_add_separator(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertAction)
///
/// @param self KNewFileMenu*
/// @param before QAction*
/// @param action QAction*
///
void k_newfilemenu_insert_action(void* self, void* before, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertSeparator)
///
/// @param self KNewFileMenu*
/// @param before QAction*
///
QAction* k_newfilemenu_insert_separator(void* self, void* before);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#removeAction)
///
/// @param self KNewFileMenu*
/// @param action QAction*
///
void k_newfilemenu_remove_action(void* self, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#popupMode)
///
/// @param self KNewFileMenu*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_newfilemenu_popup_mode(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#setPopupMode)
///
/// @param self KNewFileMenu*
/// @param popupMode enum QToolButton__ToolButtonPopupMode
///
void k_newfilemenu_set_popup_mode(void* self, int32_t popupMode);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KNewFileMenu*
/// @param w QWidget*
///
void k_newfilemenu_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KNewFileMenu*
///
QWidget* k_newfilemenu_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KNewFileMenu*
/// @param parent QWidget*
///
QWidget* k_newfilemenu_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KNewFileMenu*
/// @param widget QWidget*
///
void k_newfilemenu_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KNewFileMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_newfilemenu_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KNewFileMenu*
/// @param group QActionGroup*
///
void k_newfilemenu_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KNewFileMenu*
///
QActionGroup* k_newfilemenu_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KNewFileMenu*
/// @param icon QIcon*
///
void k_newfilemenu_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KNewFileMenu*
///
QIcon* k_newfilemenu_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KNewFileMenu*
/// @param text const char*
///
void k_newfilemenu_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNewFileMenu*
///
const char* k_newfilemenu_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KNewFileMenu*
/// @param text const char*
///
void k_newfilemenu_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNewFileMenu*
///
const char* k_newfilemenu_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KNewFileMenu*
/// @param tip const char*
///
void k_newfilemenu_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNewFileMenu*
///
const char* k_newfilemenu_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KNewFileMenu*
/// @param statusTip const char*
///
void k_newfilemenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNewFileMenu*
///
const char* k_newfilemenu_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KNewFileMenu*
/// @param what const char*
///
void k_newfilemenu_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNewFileMenu*
///
const char* k_newfilemenu_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KNewFileMenu*
/// @param priority enum QAction__Priority
///
void k_newfilemenu_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KNewFileMenu*
///
/// @return enum QAction__Priority
///
int32_t k_newfilemenu_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KNewFileMenu*
/// @param b bool
///
void k_newfilemenu_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KNewFileMenu*
/// @param shortcut QKeySequence*
///
void k_newfilemenu_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KNewFileMenu*
///
QKeySequence* k_newfilemenu_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KNewFileMenu*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_newfilemenu_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KNewFileMenu*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_newfilemenu_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KNewFileMenu*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_newfilemenu_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KNewFileMenu*
/// @param context enum Qt__ShortcutContext
///
void k_newfilemenu_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KNewFileMenu*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_newfilemenu_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KNewFileMenu*
/// @param autoRepeat bool
///
void k_newfilemenu_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KNewFileMenu*
/// @param font QFont*
///
void k_newfilemenu_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KNewFileMenu*
///
QFont* k_newfilemenu_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KNewFileMenu*
/// @param checkable bool
///
void k_newfilemenu_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KNewFileMenu*
///
QVariant* k_newfilemenu_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KNewFileMenu*
/// @param varVal QVariant*
///
void k_newfilemenu_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KNewFileMenu*
/// @param event enum QAction__ActionEvent
///
void k_newfilemenu_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KNewFileMenu*
/// @param menuRole enum QAction__MenuRole
///
void k_newfilemenu_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KNewFileMenu*
///
/// @return enum QAction__MenuRole
///
int32_t k_newfilemenu_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KNewFileMenu*
/// @param visible bool
///
void k_newfilemenu_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KNewFileMenu*
/// @param show bool
///
void k_newfilemenu_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KNewFileMenu*
/// @param checked bool
///
void k_newfilemenu_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KNewFileMenu*
/// @param enabled bool
///
void k_newfilemenu_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KNewFileMenu*
/// @param b bool
///
void k_newfilemenu_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KNewFileMenu*
/// @param visible bool
///
void k_newfilemenu_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self)
///
void k_newfilemenu_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KNewFileMenu*
/// @param enabled bool
///
void k_newfilemenu_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, bool enabled)
///
void k_newfilemenu_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KNewFileMenu*
/// @param checkable bool
///
void k_newfilemenu_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, bool checkable)
///
void k_newfilemenu_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self)
///
void k_newfilemenu_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self)
///
void k_newfilemenu_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self)
///
void k_newfilemenu_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KNewFileMenu*
/// @param param1 bool
///
void k_newfilemenu_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, bool param1)
///
void k_newfilemenu_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KNewFileMenu*
/// @param object QObject*
///
bool k_newfilemenu_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNewFileMenu*
/// @param checked bool
///
void k_newfilemenu_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, bool checked)
///
void k_newfilemenu_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNewFileMenu*
///
const char* k_newfilemenu_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNewFileMenu*
/// @param name char*
///
void k_newfilemenu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNewFileMenu*
///
bool k_newfilemenu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNewFileMenu*
/// @param b bool
///
bool k_newfilemenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNewFileMenu*
///
QThread* k_newfilemenu_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNewFileMenu*
/// @param thread QThread*
///
bool k_newfilemenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNewFileMenu*
/// @param interval int
///
int32_t k_newfilemenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNewFileMenu*
/// @param time int64_t of nanoseconds
///
int32_t k_newfilemenu_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNewFileMenu*
/// @param id int
///
void k_newfilemenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNewFileMenu*
/// @param id enum Qt__TimerId
///
void k_newfilemenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNewFileMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_newfilemenu_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNewFileMenu*
/// @param parent QObject*
///
void k_newfilemenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNewFileMenu*
/// @param filterObj QObject*
///
void k_newfilemenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNewFileMenu*
/// @param obj QObject*
///
void k_newfilemenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_newfilemenu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNewFileMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_newfilemenu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_newfilemenu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_newfilemenu_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNewFileMenu*
/// @param name const char*
/// @param value QVariant*
///
bool k_newfilemenu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNewFileMenu*
/// @param name const char*
///
QVariant* k_newfilemenu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNewFileMenu*
///
const char** k_newfilemenu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNewFileMenu*
///
QBindingStorage* k_newfilemenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNewFileMenu*
///
const QBindingStorage* k_newfilemenu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self)
///
void k_newfilemenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNewFileMenu*
///
QObject* k_newfilemenu_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNewFileMenu*
/// @param classname const char*
///
bool k_newfilemenu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNewFileMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_newfilemenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNewFileMenu*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_newfilemenu_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_newfilemenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNewFileMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_newfilemenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNewFileMenu*
/// @param param1 QObject*
///
void k_newfilemenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QObject* param1)
///
void k_newfilemenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param parent QWidget*
///
QWidget* k_newfilemenu_create_widget(void* self, void* parent);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param parent QWidget*
///
QWidget* k_newfilemenu_qbase_create_widget(void* self, void* parent);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback QWidget* func(KNewFileMenu* self, QWidget* parent)
///
void k_newfilemenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param param1 QEvent*
///
bool k_newfilemenu_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param param1 QEvent*
///
bool k_newfilemenu_qbase_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback bool func(KNewFileMenu* self, QEvent* param1)
///
void k_newfilemenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_newfilemenu_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_newfilemenu_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback bool func(KNewFileMenu* self, QObject* param1, QEvent* param2)
///
void k_newfilemenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param widget QWidget*
///
void k_newfilemenu_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param widget QWidget*
///
void k_newfilemenu_qbase_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QWidget* widget)
///
void k_newfilemenu_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param event QTimerEvent*
///
void k_newfilemenu_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param event QTimerEvent*
///
void k_newfilemenu_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QTimerEvent* event)
///
void k_newfilemenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param event QChildEvent*
///
void k_newfilemenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param event QChildEvent*
///
void k_newfilemenu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QChildEvent* event)
///
void k_newfilemenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param event QEvent*
///
void k_newfilemenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param event QEvent*
///
void k_newfilemenu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QEvent* event)
///
void k_newfilemenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal QMetaMethod*
///
void k_newfilemenu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal QMetaMethod*
///
void k_newfilemenu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QMetaMethod* signal)
///
void k_newfilemenu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal QMetaMethod*
///
void k_newfilemenu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal QMetaMethod*
///
void k_newfilemenu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, QMetaMethod* signal)
///
void k_newfilemenu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_newfilemenu_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_newfilemenu_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback QWidget** func()
///
void k_newfilemenu_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
///
QObject* k_newfilemenu_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
///
QObject* k_newfilemenu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback QObject* func()
///
void k_newfilemenu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
///
int32_t k_newfilemenu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
///
int32_t k_newfilemenu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback int32_t func()
///
void k_newfilemenu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal const char*
///
int32_t k_newfilemenu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal const char*
///
int32_t k_newfilemenu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback int32_t func(KNewFileMenu* self, const char* signal)
///
void k_newfilemenu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal QMetaMethod*
///
bool k_newfilemenu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param signal QMetaMethod*
///
bool k_newfilemenu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNewFileMenu*
/// @param callback bool func(KNewFileMenu* self, QMetaMethod* signal)
///
void k_newfilemenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNewFileMenu*
/// @param callback void func(KNewFileMenu* self, const char* objectName)
///
void k_newfilemenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knewfilemenu.html#dtor.KNewFileMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KNewFileMenu*
///
void k_newfilemenu_delete(void* self);

#endif
