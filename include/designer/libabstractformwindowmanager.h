#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMWINDOWMANAGER_H
#define DESIGNER_LIBABSTRACTFORMWINDOWMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html)

/// q_designerformwindowmanagerinterface_new constructs a new QDesignerFormWindowManagerInterface object.
///
QDesignerFormWindowManagerInterface* q_designerformwindowmanagerinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html)

/// q_designerformwindowmanagerinterface_new2 constructs a new QDesignerFormWindowManagerInterface object.
///
/// @param parent QObject*
///
QDesignerFormWindowManagerInterface* q_designerformwindowmanagerinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
const QMetaObject* q_designerformwindowmanagerinterface_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback const QMetaObject* func(const QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QDesignerFormWindowManagerInterface*
///
const QMetaObject* q_designerformwindowmanagerinterface_super_meta_object(const void* self);

/// @param self QDesignerFormWindowManagerInterface*
/// @param param1 const char*
///
void* q_designerformwindowmanagerinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void* func(QDesignerFormWindowManagerInterface* self, const char* param1)
///
void q_designerformwindowmanagerinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param param1 const char*
///
void* q_designerformwindowmanagerinterface_super_metacast(void* self, const char* param1);

/// @param self QDesignerFormWindowManagerInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformwindowmanagerinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback int32_t func(QDesignerFormWindowManagerInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerformwindowmanagerinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformwindowmanagerinterface_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerformwindowmanagerinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_action` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param action enum QDesignerFormWindowManagerInterface__Action
///
QAction* q_designerformwindowmanagerinterface_action(const void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QAction* func(const QDesignerFormWindowManagerInterface* self, enum QDesignerFormWindowManagerInterface__Action action)
///
void q_designerformwindowmanagerinterface_on_action(const void* self, QAction* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_action_group` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param actionGroup enum QDesignerFormWindowManagerInterface__ActionGroup
///
QActionGroup* q_designerformwindowmanagerinterface_action_group(const void* self, int32_t actionGroup);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QActionGroup* func(const QDesignerFormWindowManagerInterface* self, enum QDesignerFormWindowManagerInterface__ActionGroup actionGroup)
///
void q_designerformwindowmanagerinterface_on_action_group(const void* self, QActionGroup* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCut)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_cut(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCopy)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_copy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionPaste)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_paste(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionDelete)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_delete(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSelectAll)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_select_all(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionLower)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_lower(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRaise)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_raise(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionUndo)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_undo(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRedo)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_redo(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionHorizontalLayout)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_horizontal_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionVerticalLayout)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_vertical_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitHorizontal)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_split_horizontal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitVertical)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_split_vertical(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGridLayout)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_grid_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionFormLayout)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_form_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionBreakLayout)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_break_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionAdjustSize)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_adjust_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSimplifyLayout)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_simplify_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_active_form_window` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_active_form_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormWindowInterface* func(const QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_active_form_window(const void* self, QDesignerFormWindowInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_form_window_count` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_form_window_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback int32_t func(const QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_form_window_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_form_window` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param index int
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_form_window(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormWindowInterface* func(const QDesignerFormWindowManagerInterface* self, int index)
///
void q_designerformwindowmanagerinterface_on_form_window(const void* self, QDesignerFormWindowInterface* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_create_form_window` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param parentWidget QWidget*
/// @param flags flag of enum Qt__WindowType
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_create_form_window(void* self, void* parentWidget, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormWindowInterface* func(QDesignerFormWindowManagerInterface* self, QWidget* parentWidget, flag of enum Qt__WindowType flags)
///
void q_designerformwindowmanagerinterface_on_create_form_window(void* self, QDesignerFormWindowInterface* (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_core` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QDesignerFormEditorInterface* q_designerformwindowmanagerinterface_core(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormEditorInterface* func(const QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_core(const void* self, QDesignerFormEditorInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_drag_items` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param item_list libqt_list of QDesignerDnDItemInterface*
///
void q_designerformwindowmanagerinterface_drag_items(void* self, libqt_list item_list);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, libqt_list of QDesignerDnDItemInterface* item_list)
///
void q_designerformwindowmanagerinterface_on_drag_items(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_create_preview_pixmap` before it can be called.
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QPixmap* q_designerformwindowmanagerinterface_create_preview_pixmap(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QPixmap* func(const QDesignerFormWindowManagerInterface* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_designerformwindowmanagerinterface_on_create_preview_pixmap(const void* self, QPixmap* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_form_window_added(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerformwindowmanagerinterface_on_form_window_added(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_form_window_removed(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerformwindowmanagerinterface_on_form_window_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_active_form_window_changed(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerformwindowmanagerinterface_on_active_form_window_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param fw QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_form_window_settings_changed(void* self, void* fw);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* fw)
///
void q_designerformwindowmanagerinterface_on_form_window_settings_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_add_form_window` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_add_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerformwindowmanagerinterface_on_add_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_remove_form_window` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_remove_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerformwindowmanagerinterface_on_remove_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_set_active_form_window` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_set_active_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerformwindowmanagerinterface_on_set_active_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_show_preview` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_show_preview(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_show_preview(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_close_all_previews` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_close_all_previews(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_close_all_previews(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
///
/// @warning This method must be implemented with `q_designerformwindowmanagerinterface_on_show_plugin_dialog` before it can be called.
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_show_plugin_dialog(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_show_plugin_dialog(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerformwindowmanagerinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerformwindowmanagerinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerFormWindowManagerInterface*
///
const char* q_designerformwindowmanagerinterface_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param name const char*
///
void q_designerformwindowmanagerinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param b bool
///
bool q_designerformwindowmanagerinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QThread* q_designerformwindowmanagerinterface_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param thread QThread*
///
bool q_designerformwindowmanagerinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param interval int
///
int32_t q_designerformwindowmanagerinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerformwindowmanagerinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param id int
///
void q_designerformwindowmanagerinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param id enum Qt__TimerId
///
void q_designerformwindowmanagerinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerformwindowmanagerinterface_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param parent QObject*
///
void q_designerformwindowmanagerinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param filterObj QObject*
///
void q_designerformwindowmanagerinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param obj QObject*
///
void q_designerformwindowmanagerinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowmanagerinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerformwindowmanagerinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param receiver QObject*
///
bool q_designerformwindowmanagerinterface_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerformwindowmanagerinterface_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerformwindowmanagerinterface_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param name const char*
///
QVariant* q_designerformwindowmanagerinterface_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerFormWindowManagerInterface*
///
const char** q_designerformwindowmanagerinterface_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QBindingStorage* q_designerformwindowmanagerinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
const QBindingStorage* q_designerformwindowmanagerinterface_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QObject* q_designerformwindowmanagerinterface_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param classname const char*
///
bool q_designerformwindowmanagerinterface_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformwindowmanagerinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformwindowmanagerinterface_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal const char*
///
bool q_designerformwindowmanagerinterface_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerformwindowmanagerinterface_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowmanagerinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowmanagerinterface_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param param1 QObject*
///
void q_designerformwindowmanagerinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QObject* param1)
///
void q_designerformwindowmanagerinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QEvent*
///
bool q_designerformwindowmanagerinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QEvent*
///
bool q_designerformwindowmanagerinterface_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback bool func(QDesignerFormWindowManagerInterface* self, QEvent* event)
///
void q_designerformwindowmanagerinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformwindowmanagerinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformwindowmanagerinterface_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback bool func(QDesignerFormWindowManagerInterface* self, QObject* watched, QEvent* event)
///
void q_designerformwindowmanagerinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QTimerEvent*
///
void q_designerformwindowmanagerinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QTimerEvent*
///
void q_designerformwindowmanagerinterface_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QTimerEvent* event)
///
void q_designerformwindowmanagerinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QChildEvent*
///
void q_designerformwindowmanagerinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QChildEvent*
///
void q_designerformwindowmanagerinterface_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QChildEvent* event)
///
void q_designerformwindowmanagerinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QEvent*
///
void q_designerformwindowmanagerinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param event QEvent*
///
void q_designerformwindowmanagerinterface_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QEvent* event)
///
void q_designerformwindowmanagerinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QMetaMethod* signal)
///
void q_designerformwindowmanagerinterface_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QMetaMethod* signal)
///
void q_designerformwindowmanagerinterface_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QObject* q_designerformwindowmanagerinterface_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
///
QObject* q_designerformwindowmanagerinterface_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback QObject* func(QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback int32_t func(QDesignerFormWindowManagerInterface* self)
///
void q_designerformwindowmanagerinterface_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal const char*
///
int32_t q_designerformwindowmanagerinterface_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal const char*
///
int32_t q_designerformwindowmanagerinterface_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback int32_t func(QDesignerFormWindowManagerInterface* self, const char* signal)
///
void q_designerformwindowmanagerinterface_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
bool q_designerformwindowmanagerinterface_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
bool q_designerformwindowmanagerinterface_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerFormWindowManagerInterface*
/// @param callback bool func(QDesignerFormWindowManagerInterface* self, QMetaMethod* signal)
///
void q_designerformwindowmanagerinterface_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, const char* objectName)
///
void q_designerformwindowmanagerinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dtor.QDesignerFormWindowManagerInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowmanager.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_CUTACTION = 100,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_COPYACTION = 101,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_PASTEACTION = 102,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_DELETEACTION = 103,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_SELECTALLACTION = 104,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_LOWERACTION = 200,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_RAISEACTION = 201,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_UNDOACTION = 300,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_REDOACTION = 301,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_HORIZONTALLAYOUTACTION = 400,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_VERTICALLAYOUTACTION = 401,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_SPLITHORIZONTALACTION = 402,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_SPLITVERTICALACTION = 403,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_GRIDLAYOUTACTION = 404,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_FORMLAYOUTACTION = 405,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_BREAKLAYOUTACTION = 406,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_ADJUSTSIZEACTION = 407,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_SIMPLIFYLAYOUTACTION = 408,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_DEFAULTPREVIEWACTION = 500,
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTION_FORMWINDOWSETTINGSDIALOGACTION = 600
} QDesignerFormWindowManagerInterface__Action;

/// [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowmanager.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTIONGROUP_STYLEDPREVIEWACTIONGROUP = 100
} QDesignerFormWindowManagerInterface__ActionGroup;

#endif
