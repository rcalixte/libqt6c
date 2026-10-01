#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMEDITORPLUGIN_H
#define DESIGNER_LIBABSTRACTFORMEDITORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html)

/// q_designerformeditorplugininterface_new constructs a new QDesignerFormEditorPluginInterface object.
///
QDesignerFormEditorPluginInterface* q_designerformeditorplugininterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
///
/// @warning This method must be implemented with `q_designerformeditorplugininterface_on_is_initialized` before it can be called.
///
/// @param self const QDesignerFormEditorPluginInterface*
///
bool q_designerformeditorplugininterface_is_initialized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormEditorPluginInterface*
/// @param callback bool func(const QDesignerFormEditorPluginInterface* self)
///
void q_designerformeditorplugininterface_on_is_initialized(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
///
/// @warning This method must be implemented with `q_designerformeditorplugininterface_on_initialize` before it can be called.
///
/// @param self QDesignerFormEditorPluginInterface*
/// @param core QDesignerFormEditorInterface*
///
void q_designerformeditorplugininterface_initialize(void* self, void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorPluginInterface*
/// @param callback void func(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core)
///
void q_designerformeditorplugininterface_on_initialize(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
///
/// @warning This method must be implemented with `q_designerformeditorplugininterface_on_action` before it can be called.
///
/// @param self const QDesignerFormEditorPluginInterface*
///
QAction* q_designerformeditorplugininterface_action(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormEditorPluginInterface*
/// @param callback QAction* func(const QDesignerFormEditorPluginInterface* self)
///
void q_designerformeditorplugininterface_on_action(const void* self, QAction* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
///
/// @warning This method must be implemented with `q_designerformeditorplugininterface_on_core` before it can be called.
///
/// @param self const QDesignerFormEditorPluginInterface*
///
QDesignerFormEditorInterface* q_designerformeditorplugininterface_core(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormEditorPluginInterface*
/// @param callback QDesignerFormEditorInterface* func(const QDesignerFormEditorPluginInterface* self)
///
void q_designerformeditorplugininterface_on_core(const void* self, QDesignerFormEditorInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#dtor.QDesignerFormEditorPluginInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormEditorPluginInterface*
///
void q_designerformeditorplugininterface_delete(void* self);

#endif
