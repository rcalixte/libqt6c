#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOWMANAGER_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOWMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QDesignerFormWindowManagerInterface*
///
const QMetaObject* q_designerformwindowmanagerinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback const QMetaObject* func()
///
void q_designerformwindowmanagerinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
const QMetaObject* q_designerformwindowmanagerinterface_qbase_meta_object(void* self);

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
void* q_designerformwindowmanagerinterface_qbase_metacast(void* self, const char* param1);

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
int32_t q_designerformwindowmanagerinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerformwindowmanagerinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param action enum QDesignerFormWindowManagerInterface__Action
///
QAction* q_designerformwindowmanagerinterface_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QAction* func(QDesignerFormWindowManagerInterface* self, enum QDesignerFormWindowManagerInterface__Action action)
///
void q_designerformwindowmanagerinterface_on_action(void* self, QAction* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param action enum QDesignerFormWindowManagerInterface__Action
///
QAction* q_designerformwindowmanagerinterface_qbase_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param actionGroup enum QDesignerFormWindowManagerInterface__ActionGroup
///
QActionGroup* q_designerformwindowmanagerinterface_action_group(void* self, int32_t actionGroup);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QActionGroup* func(QDesignerFormWindowManagerInterface* self, enum QDesignerFormWindowManagerInterface__ActionGroup actionGroup)
///
void q_designerformwindowmanagerinterface_on_action_group(void* self, QActionGroup* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param actionGroup enum QDesignerFormWindowManagerInterface__ActionGroup
///
QActionGroup* q_designerformwindowmanagerinterface_qbase_action_group(void* self, int32_t actionGroup);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCut)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_cut(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCopy)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_copy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionPaste)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_paste(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionDelete)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSelectAll)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionLower)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_lower(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRaise)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_raise(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionUndo)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_undo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRedo)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_redo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionHorizontalLayout)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_horizontal_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionVerticalLayout)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_vertical_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitHorizontal)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_split_horizontal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitVertical)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_split_vertical(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGridLayout)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_grid_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionFormLayout)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_form_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionBreakLayout)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_break_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionAdjustSize)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_adjust_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSimplifyLayout)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QAction* q_designerformwindowmanagerinterface_action_simplify_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_active_form_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormWindowInterface* func()
///
void q_designerformwindowmanagerinterface_on_active_form_window(void* self, QDesignerFormWindowInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_qbase_active_form_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
///
/// @param self QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_form_window_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback int32_t func()
///
void q_designerformwindowmanagerinterface_on_form_window_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_qbase_form_window_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param index int
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_form_window(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormWindowInterface* func(QDesignerFormWindowManagerInterface* self, int index)
///
void q_designerformwindowmanagerinterface_on_form_window(void* self, QDesignerFormWindowInterface* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param index int
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_qbase_form_window(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param parentWidget QWidget*
/// @param flags flag of enum Qt__WindowType
///
QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_qbase_create_form_window(void* self, void* parentWidget, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QDesignerFormEditorInterface* q_designerformwindowmanagerinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerformwindowmanagerinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
QDesignerFormEditorInterface* q_designerformwindowmanagerinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param item_list libqt_list of QDesignerDnDItemInterface*
///
void q_designerformwindowmanagerinterface_drag_items(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QDesignerDnDItemInterface** item_list)
///
void q_designerformwindowmanagerinterface_on_drag_items(void* self, void (*callback)(void*, QDesignerDnDItemInterface**));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param item_list libqt_list of QDesignerDnDItemInterface*
///
void q_designerformwindowmanagerinterface_qbase_drag_items(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
///
/// @param self QDesignerFormWindowManagerInterface*
///
QPixmap* q_designerformwindowmanagerinterface_create_preview_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QPixmap* func()
///
void q_designerformwindowmanagerinterface_on_create_preview_pixmap(void* self, QPixmap* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
QPixmap* q_designerformwindowmanagerinterface_qbase_create_preview_pixmap(void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_qbase_add_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_qbase_remove_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerformwindowmanagerinterface_qbase_set_active_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_show_preview(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func()
///
void q_designerformwindowmanagerinterface_on_show_preview(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_qbase_show_preview(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_close_all_previews(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func()
///
void q_designerformwindowmanagerinterface_on_close_all_previews(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_qbase_close_all_previews(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_show_plugin_dialog(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func()
///
void q_designerformwindowmanagerinterface_on_show_plugin_dialog(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_qbase_show_plugin_dialog(void* self);

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
/// @param self QDesignerFormWindowManagerInterface*
///
const char* q_designerformwindowmanagerinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param name char*
///
void q_designerformwindowmanagerinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_signals_blocked(void* self);

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
/// @param self QDesignerFormWindowManagerInterface*
///
QThread* q_designerformwindowmanagerinterface_thread(void* self);

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
/// @param self QDesignerFormWindowManagerInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerformwindowmanagerinterface_children(void* self);

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
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowmanagerinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerformwindowmanagerinterface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowManagerInterface*
///
bool q_designerformwindowmanagerinterface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param receiver QObject*
///
bool q_designerformwindowmanagerinterface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerformwindowmanagerinterface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerFormWindowManagerInterface*
///
void q_designerformwindowmanagerinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerformwindowmanagerinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param name const char*
///
QVariant* q_designerformwindowmanagerinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowManagerInterface*
///
const char** q_designerformwindowmanagerinterface_dynamic_property_names(void* self);

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
/// @param self QDesignerFormWindowManagerInterface*
///
const QBindingStorage* q_designerformwindowmanagerinterface_binding_storage2(void* self);

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
/// @param self QDesignerFormWindowManagerInterface*
///
QObject* q_designerformwindowmanagerinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param classname const char*
///
bool q_designerformwindowmanagerinterface_inherits(void* self, const char* classname);

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
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformwindowmanagerinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal const char*
///
bool q_designerformwindowmanagerinterface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerformwindowmanagerinterface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowmanagerinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerformwindowmanagerinterface_disconnect23(void* self, void* receiver, const char* member);

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
bool q_designerformwindowmanagerinterface_qbase_event(void* self, void* event);

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
bool q_designerformwindowmanagerinterface_qbase_event_filter(void* self, void* watched, void* event);

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
void q_designerformwindowmanagerinterface_qbase_timer_event(void* self, void* event);

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
void q_designerformwindowmanagerinterface_qbase_child_event(void* self, void* event);

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
void q_designerformwindowmanagerinterface_qbase_custom_event(void* self, void* event);

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
void q_designerformwindowmanagerinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QMetaMethod* signal)
///
void q_designerformwindowmanagerinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
void q_designerformwindowmanagerinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback void func(QDesignerFormWindowManagerInterface* self, QMetaMethod* signal)
///
void q_designerformwindowmanagerinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
///
QObject* q_designerformwindowmanagerinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
///
QObject* q_designerformwindowmanagerinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback QObject* func()
///
void q_designerformwindowmanagerinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
///
int32_t q_designerformwindowmanagerinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback int32_t func()
///
void q_designerformwindowmanagerinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal const char*
///
int32_t q_designerformwindowmanagerinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal const char*
///
int32_t q_designerformwindowmanagerinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback int32_t func(QDesignerFormWindowManagerInterface* self, const char* signal)
///
void q_designerformwindowmanagerinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
bool q_designerformwindowmanagerinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param signal QMetaMethod*
///
bool q_designerformwindowmanagerinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormWindowManagerInterface*
/// @param callback bool func(QDesignerFormWindowManagerInterface* self, QMetaMethod* signal)
///
void q_designerformwindowmanagerinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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

/// [Upstream resources](https://api.kde.org/abstractformwindowmanager.html#public-types)

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

/// [Upstream resources](https://api.kde.org/abstractformwindowmanager.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWMANAGERINTERFACE_ACTIONGROUP_STYLEDPREVIEWACTIONGROUP = 100
} QDesignerFormWindowManagerInterface__ActionGroup;

#endif
