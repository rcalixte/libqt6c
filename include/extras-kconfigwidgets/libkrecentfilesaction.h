#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKRECENTFILESACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKRECENTFILESACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html)

/// k_recentfilesaction_new constructs a new KRecentFilesAction object.
///
/// @param parent QObject*
///
KRecentFilesAction* k_recentfilesaction_new(void* parent);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html)

/// k_recentfilesaction_new2 constructs a new KRecentFilesAction object.
///
/// @param text const char*
/// @param parent QObject*
///
KRecentFilesAction* k_recentfilesaction_new2(const char* text, void* parent);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html)

/// k_recentfilesaction_new3 constructs a new KRecentFilesAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
///
KRecentFilesAction* k_recentfilesaction_new3(void* icon, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KRecentFilesAction*
///
const QMetaObject* k_recentfilesaction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KRecentFilesAction*
/// @param callback const QMetaObject* func()
///
void k_recentfilesaction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KRecentFilesAction*
///
const QMetaObject* k_recentfilesaction_qbase_meta_object(void* self);

/// @param self KRecentFilesAction*
/// @param param1 const char*
///
void* k_recentfilesaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KRecentFilesAction*
/// @param callback void* func(KRecentFilesAction* self, const char* param1)
///
void k_recentfilesaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KRecentFilesAction*
/// @param param1 const char*
///
void* k_recentfilesaction_qbase_metacast(void* self, const char* param1);

/// @param self KRecentFilesAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_recentfilesaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KRecentFilesAction*
/// @param callback int32_t func(KRecentFilesAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_recentfilesaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KRecentFilesAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_recentfilesaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_recentfilesaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#addAction)
///
/// @param self KRecentFilesAction*
/// @param action QAction*
/// @param url QUrl*
/// @param name const char*
///
void k_recentfilesaction_add_action(void* self, void* action, void* url, const char* name);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeAction)
///
/// @param self KRecentFilesAction*
/// @param action QAction*
///
QAction* k_recentfilesaction_remove_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeAction)
///
/// Allows for overriding the related default method
///
/// @param self KRecentFilesAction*
/// @param callback QAction* func(KRecentFilesAction* self, QAction* action)
///
void k_recentfilesaction_on_remove_action(void* self, QAction* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeAction)
///
/// Base class method implementation
///
/// @param self KRecentFilesAction*
/// @param action QAction*
///
QAction* k_recentfilesaction_qbase_remove_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#maxItems)
///
/// @param self KRecentFilesAction*
///
int32_t k_recentfilesaction_max_items(void* self);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#setMaxItems)
///
/// @param self KRecentFilesAction*
/// @param maxItems int
///
void k_recentfilesaction_set_max_items(void* self, int maxItems);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#loadEntries)
///
/// @param self KRecentFilesAction*
/// @param config KConfigGroup*
///
void k_recentfilesaction_load_entries(void* self, void* config);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#saveEntries)
///
/// @param self KRecentFilesAction*
/// @param config KConfigGroup*
///
void k_recentfilesaction_save_entries(void* self, void* config);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#addUrl)
///
/// @param self KRecentFilesAction*
/// @param url QUrl*
///
void k_recentfilesaction_add_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#addUrl)
///
/// @param self KRecentFilesAction*
/// @param url QUrl*
/// @param name const char*
/// @param mimeType const char*
///
void k_recentfilesaction_add_url2(void* self, void* url, const char* name, const char* mimeType);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#removeUrl)
///
/// @param self KRecentFilesAction*
/// @param url QUrl*
///
void k_recentfilesaction_remove_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#urls)
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QUrl*
///
libqt_list k_recentfilesaction_urls(void* self);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#clear)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_clear(void* self);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self KRecentFilesAction*
/// @param callback void func()
///
void k_recentfilesaction_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#clear)
///
/// Base class method implementation
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_qbase_clear(void* self);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#urlSelected)
///
/// @param self KRecentFilesAction*
/// @param url QUrl*
///
void k_recentfilesaction_url_selected(void* self, void* url);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#urlSelected)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QUrl* url)
///
void k_recentfilesaction_on_url_selected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#recentListCleared)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_recent_list_cleared(void* self);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#recentListCleared)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self)
///
void k_recentfilesaction_on_recent_list_cleared(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_recentfilesaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_recentfilesaction_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#addAction)
///
/// @param self KRecentFilesAction*
/// @param action QAction*
/// @param url QUrl*
/// @param name const char*
/// @param mimeType QMimeType*
///
void k_recentfilesaction_add_action4(void* self, void* action, void* url, const char* name, void* mimeType);

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#addUrl)
///
/// @param self KRecentFilesAction*
/// @param url QUrl*
/// @param name const char*
///
void k_recentfilesaction_add_url22(void* self, void* url, const char* name);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
///
/// @param self KRecentFilesAction*
///
/// @return enum KSelectAction__ToolBarMode
///
int32_t k_recentfilesaction_tool_bar_mode(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
///
/// @param self KRecentFilesAction*
/// @param mode enum KSelectAction__ToolBarMode
///
void k_recentfilesaction_set_tool_bar_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
///
/// @param self KRecentFilesAction*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_recentfilesaction_tool_button_popup_mode(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
///
/// @param self KRecentFilesAction*
/// @param mode enum QToolButton__ToolButtonPopupMode
///
void k_recentfilesaction_set_tool_button_popup_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
///
/// @param self KRecentFilesAction*
///
QActionGroup* k_recentfilesaction_selectable_action_group(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
///
/// @param self KRecentFilesAction*
///
QAction* k_recentfilesaction_current_action(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
///
/// @param self KRecentFilesAction*
///
int32_t k_recentfilesaction_current_item(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_current_text(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actions)
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QAction*
///
libqt_list k_recentfilesaction_actions(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self KRecentFilesAction*
/// @param index int
///
QAction* k_recentfilesaction_action(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self KRecentFilesAction*
/// @param text const char*
///
QAction* k_recentfilesaction_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KRecentFilesAction*
/// @param action QAction*
///
bool k_recentfilesaction_set_current_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
///
/// @param self KRecentFilesAction*
/// @param index int
///
bool k_recentfilesaction_set_current_item(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KRecentFilesAction*
/// @param text const char*
///
bool k_recentfilesaction_set_current_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KRecentFilesAction*
/// @param text const char*
///
QAction* k_recentfilesaction_add_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KRecentFilesAction*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_recentfilesaction_add_action3(void* self, void* icon, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
///
/// @param self KRecentFilesAction*
/// @param lst const char**
///
void k_recentfilesaction_set_items(void* self, const char* lst[static 1]);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#items)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRecentFilesAction*
///
const char** k_recentfilesaction_items(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_editable(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
///
/// @param self KRecentFilesAction*
/// @param editable bool
///
void k_recentfilesaction_set_editable(void* self, bool editable);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
///
/// @param self KRecentFilesAction*
///
int32_t k_recentfilesaction_combo_width(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
///
/// @param self KRecentFilesAction*
/// @param width int
///
void k_recentfilesaction_set_combo_width(void* self, int width);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
///
/// @param self KRecentFilesAction*
/// @param n int
///
void k_recentfilesaction_set_max_combo_view_count(void* self, int n);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_remove_all_actions(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
///
/// @param self KRecentFilesAction*
/// @param b bool
///
void k_recentfilesaction_set_menu_accels_enabled(void* self, bool b);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_menu_accels_enabled(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
///
/// @param self KRecentFilesAction*
/// @param index int
/// @param text const char*
///
void k_recentfilesaction_change_item(void* self, int index, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KRecentFilesAction*
/// @param action QAction*
///
void k_recentfilesaction_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QAction* action)
///
void k_recentfilesaction_on_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KRecentFilesAction*
/// @param index int
///
void k_recentfilesaction_index_triggered(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, int index)
///
void k_recentfilesaction_on_index_triggered(void* self, void (*callback)(void*, int));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KRecentFilesAction*
/// @param text const char*
///
void k_recentfilesaction_text_triggered(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, const char* text)
///
void k_recentfilesaction_on_text_triggered(void* self, void (*callback)(void*, const char*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self KRecentFilesAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
///
QAction* k_recentfilesaction_action22(void* self, const char* text, int32_t cs);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KRecentFilesAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
///
bool k_recentfilesaction_set_current_action22(void* self, const char* text, int32_t cs);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KRecentFilesAction*
/// @param w QWidget*
///
void k_recentfilesaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KRecentFilesAction*
///
QWidget* k_recentfilesaction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KRecentFilesAction*
/// @param parent QWidget*
///
QWidget* k_recentfilesaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KRecentFilesAction*
/// @param widget QWidget*
///
void k_recentfilesaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_recentfilesaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KRecentFilesAction*
/// @param group QActionGroup*
///
void k_recentfilesaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KRecentFilesAction*
///
QActionGroup* k_recentfilesaction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KRecentFilesAction*
/// @param icon QIcon*
///
void k_recentfilesaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KRecentFilesAction*
///
QIcon* k_recentfilesaction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KRecentFilesAction*
/// @param text const char*
///
void k_recentfilesaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KRecentFilesAction*
/// @param text const char*
///
void k_recentfilesaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KRecentFilesAction*
/// @param tip const char*
///
void k_recentfilesaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KRecentFilesAction*
/// @param statusTip const char*
///
void k_recentfilesaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KRecentFilesAction*
/// @param what const char*
///
void k_recentfilesaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KRecentFilesAction*
/// @param priority enum QAction__Priority
///
void k_recentfilesaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KRecentFilesAction*
///
/// @return enum QAction__Priority
///
int32_t k_recentfilesaction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KRecentFilesAction*
/// @param b bool
///
void k_recentfilesaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KRecentFilesAction*
/// @param shortcut QKeySequence*
///
void k_recentfilesaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KRecentFilesAction*
///
QKeySequence* k_recentfilesaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KRecentFilesAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_recentfilesaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KRecentFilesAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_recentfilesaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_recentfilesaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KRecentFilesAction*
/// @param context enum Qt__ShortcutContext
///
void k_recentfilesaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KRecentFilesAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_recentfilesaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KRecentFilesAction*
/// @param autoRepeat bool
///
void k_recentfilesaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KRecentFilesAction*
/// @param font QFont*
///
void k_recentfilesaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KRecentFilesAction*
///
QFont* k_recentfilesaction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KRecentFilesAction*
/// @param checkable bool
///
void k_recentfilesaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KRecentFilesAction*
///
QVariant* k_recentfilesaction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KRecentFilesAction*
/// @param varVal QVariant*
///
void k_recentfilesaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KRecentFilesAction*
/// @param event enum QAction__ActionEvent
///
void k_recentfilesaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KRecentFilesAction*
/// @param menuRole enum QAction__MenuRole
///
void k_recentfilesaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KRecentFilesAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_recentfilesaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KRecentFilesAction*
/// @param visible bool
///
void k_recentfilesaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KRecentFilesAction*
/// @param show bool
///
void k_recentfilesaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KRecentFilesAction*
/// @param checked bool
///
void k_recentfilesaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KRecentFilesAction*
/// @param enabled bool
///
void k_recentfilesaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KRecentFilesAction*
/// @param b bool
///
void k_recentfilesaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KRecentFilesAction*
/// @param visible bool
///
void k_recentfilesaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self)
///
void k_recentfilesaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KRecentFilesAction*
/// @param enabled bool
///
void k_recentfilesaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, bool enabled)
///
void k_recentfilesaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KRecentFilesAction*
/// @param checkable bool
///
void k_recentfilesaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, bool checkable)
///
void k_recentfilesaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self)
///
void k_recentfilesaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self)
///
void k_recentfilesaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self)
///
void k_recentfilesaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KRecentFilesAction*
/// @param param1 bool
///
void k_recentfilesaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, bool param1)
///
void k_recentfilesaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KRecentFilesAction*
/// @param object QObject*
///
bool k_recentfilesaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KRecentFilesAction*
/// @param checked bool
///
void k_recentfilesaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, bool checked)
///
void k_recentfilesaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRecentFilesAction*
///
const char* k_recentfilesaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KRecentFilesAction*
/// @param name char*
///
void k_recentfilesaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KRecentFilesAction*
///
bool k_recentfilesaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KRecentFilesAction*
/// @param b bool
///
bool k_recentfilesaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KRecentFilesAction*
///
QThread* k_recentfilesaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRecentFilesAction*
/// @param thread QThread*
///
bool k_recentfilesaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRecentFilesAction*
/// @param interval int
///
int32_t k_recentfilesaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRecentFilesAction*
/// @param time int64_t of nanoseconds
///
int32_t k_recentfilesaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRecentFilesAction*
/// @param id int
///
void k_recentfilesaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRecentFilesAction*
/// @param id enum Qt__TimerId
///
void k_recentfilesaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_recentfilesaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KRecentFilesAction*
/// @param parent QObject*
///
void k_recentfilesaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KRecentFilesAction*
/// @param filterObj QObject*
///
void k_recentfilesaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KRecentFilesAction*
/// @param obj QObject*
///
void k_recentfilesaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_recentfilesaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRecentFilesAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_recentfilesaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_recentfilesaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_recentfilesaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KRecentFilesAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_recentfilesaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KRecentFilesAction*
/// @param name const char*
///
QVariant* k_recentfilesaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRecentFilesAction*
///
const char** k_recentfilesaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRecentFilesAction*
///
QBindingStorage* k_recentfilesaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRecentFilesAction*
///
const QBindingStorage* k_recentfilesaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self)
///
void k_recentfilesaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KRecentFilesAction*
///
QObject* k_recentfilesaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KRecentFilesAction*
/// @param classname const char*
///
bool k_recentfilesaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRecentFilesAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_recentfilesaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRecentFilesAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_recentfilesaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_recentfilesaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRecentFilesAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_recentfilesaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesAction*
/// @param param1 QObject*
///
void k_recentfilesaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QObject* param1)
///
void k_recentfilesaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param before QAction*
/// @param action QAction*
///
void k_recentfilesaction_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param before QAction*
/// @param action QAction*
///
void k_recentfilesaction_qbase_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QAction* before, QAction* action)
///
void k_recentfilesaction_on_insert_action(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param action QAction*
///
void k_recentfilesaction_slot_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param action QAction*
///
void k_recentfilesaction_qbase_slot_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QAction* action)
///
void k_recentfilesaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param parent QWidget*
///
QWidget* k_recentfilesaction_create_widget(void* self, void* parent);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param parent QWidget*
///
QWidget* k_recentfilesaction_qbase_create_widget(void* self, void* parent);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback QWidget* func(KRecentFilesAction* self, QWidget* parent)
///
void k_recentfilesaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param widget QWidget*
///
void k_recentfilesaction_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param widget QWidget*
///
void k_recentfilesaction_qbase_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QWidget* widget)
///
void k_recentfilesaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QEvent*
///
bool k_recentfilesaction_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QEvent*
///
bool k_recentfilesaction_qbase_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback bool func(KRecentFilesAction* self, QEvent* event)
///
void k_recentfilesaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_recentfilesaction_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_recentfilesaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback bool func(KRecentFilesAction* self, QObject* watched, QEvent* event)
///
void k_recentfilesaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QTimerEvent*
///
void k_recentfilesaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QTimerEvent*
///
void k_recentfilesaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QTimerEvent* event)
///
void k_recentfilesaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QChildEvent*
///
void k_recentfilesaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QChildEvent*
///
void k_recentfilesaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QChildEvent* event)
///
void k_recentfilesaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QEvent*
///
void k_recentfilesaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param event QEvent*
///
void k_recentfilesaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QEvent* event)
///
void k_recentfilesaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal QMetaMethod*
///
void k_recentfilesaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal QMetaMethod*
///
void k_recentfilesaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QMetaMethod* signal)
///
void k_recentfilesaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal QMetaMethod*
///
void k_recentfilesaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal QMetaMethod*
///
void k_recentfilesaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, QMetaMethod* signal)
///
void k_recentfilesaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param param1 bool
///
void k_recentfilesaction_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param param1 bool
///
void k_recentfilesaction_qbase_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, bool param1)
///
void k_recentfilesaction_on_slot_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_recentfilesaction_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_recentfilesaction_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback QWidget** func()
///
void k_recentfilesaction_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
///
QObject* k_recentfilesaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
///
QObject* k_recentfilesaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback QObject* func()
///
void k_recentfilesaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
///
int32_t k_recentfilesaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
///
int32_t k_recentfilesaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback int32_t func()
///
void k_recentfilesaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal const char*
///
int32_t k_recentfilesaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal const char*
///
int32_t k_recentfilesaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback int32_t func(KRecentFilesAction* self, const char* signal)
///
void k_recentfilesaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal QMetaMethod*
///
bool k_recentfilesaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param signal QMetaMethod*
///
bool k_recentfilesaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesAction*
/// @param callback bool func(KRecentFilesAction* self, QMetaMethod* signal)
///
void k_recentfilesaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KRecentFilesAction*
/// @param callback void func(KRecentFilesAction* self, const char* objectName)
///
void k_recentfilesaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/krecentfilesaction.html#dtor.KRecentFilesAction)
///
/// Delete this object from C++ memory.
///
/// @param self KRecentFilesAction*
///
void k_recentfilesaction_delete(void* self);

#endif
