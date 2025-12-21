#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMEDITORPLUGIN_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMEDITORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html)

/// q_designerformeditorplugininterface_new constructs a new QDesignerFormEditorPluginInterface object.
///
QDesignerFormEditorPluginInterface* q_designerformeditorplugininterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
///
/// @param self QDesignerFormEditorPluginInterface*
///
bool q_designerformeditorplugininterface_is_initialized(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorPluginInterface*
/// @param callback bool func()
///
void q_designerformeditorplugininterface_on_is_initialized(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#isInitialized)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorPluginInterface*
///
bool q_designerformeditorplugininterface_qbase_is_initialized(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#initialize)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorPluginInterface*
/// @param core QDesignerFormEditorInterface*
///
void q_designerformeditorplugininterface_qbase_initialize(void* self, void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
///
/// @param self QDesignerFormEditorPluginInterface*
///
QAction* q_designerformeditorplugininterface_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorPluginInterface*
/// @param callback QAction* func()
///
void q_designerformeditorplugininterface_on_action(void* self, QAction* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#action)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorPluginInterface*
///
QAction* q_designerformeditorplugininterface_qbase_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
///
/// @param self QDesignerFormEditorPluginInterface*
///
QDesignerFormEditorInterface* q_designerformeditorplugininterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorPluginInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerformeditorplugininterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorPluginInterface*
///
QDesignerFormEditorInterface* q_designerformeditorplugininterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorplugininterface.html#dtor.QDesignerFormEditorPluginInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormEditorPluginInterface*
///
void q_designerformeditorplugininterface_delete(void* self);

#endif
