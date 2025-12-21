#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBQDESIGNER_COMPONENTS_H
#define SRC_DESIGNER_QT6C_LIBQDESIGNER_COMPONENTS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html)

/// q_designercomponents_new constructs a new QDesignerComponents object.
///
/// @param other QDesignerComponents*
///
QDesignerComponents* q_designercomponents_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html)

/// q_designercomponents_new2 constructs a new QDesignerComponents object and invalidates the source QDesignerComponents object.
///
/// @param other QDesignerComponents*
///
QDesignerComponents* q_designercomponents_new2(void* other);

/// q_designercomponents_copy_assign shallow copies `other` into `self`.
///
/// @param self QDesignerComponents*
/// @param other QDesignerComponents*
///
void q_designercomponents_copy_assign(void* self, void* other);

/// q_designercomponents_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDesignerComponents*
/// @param other QDesignerComponents*
///
void q_designercomponents_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#initializeResources)
///
void q_designercomponents_initialize_resources();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#initializePlugins)
///
/// @param core QDesignerFormEditorInterface*
///
void q_designercomponents_initialize_plugins(void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditor)
///
/// @param parent QObject*
///
QDesignerFormEditorInterface* q_designercomponents_create_form_editor(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createFormEditorWithPluginPaths)
///
/// @param pluginPaths const char**
/// @param parent QObject*
///
QDesignerFormEditorInterface* q_designercomponents_create_form_editor_with_plugin_paths(const char* pluginPaths[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createWidgetBox)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QDesignerWidgetBoxInterface* q_designercomponents_create_widget_box(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createPropertyEditor)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QDesignerPropertyEditorInterface* q_designercomponents_create_property_editor(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createObjectInspector)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QDesignerObjectInspectorInterface* q_designercomponents_create_object_inspector(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createActionEditor)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QDesignerActionEditorInterface* q_designercomponents_create_action_editor(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createTaskMenu)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QObject*
///
QObject* q_designercomponents_create_task_menu(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createResourceEditor)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QWidget* q_designercomponents_create_resource_editor(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#createSignalSlotEditor)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QWidget* q_designercomponents_create_signal_slot_editor(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#defaultPluginPaths)
///
/// @warning Caller is responsible for freeing the returned memory
///
const char** q_designercomponents_default_plugin_paths();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercomponents.html#dtor.QDesignerComponents)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerComponents*
///
void q_designercomponents_delete(void* self);

#endif
