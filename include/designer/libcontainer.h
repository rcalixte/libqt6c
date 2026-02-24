#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBCONTAINER_H
#define SRC_DESIGNER_QT6C_LIBCONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html)

/// q_designercontainerextension_new constructs a new QDesignerContainerExtension object.
///
QDesignerContainerExtension* q_designercontainerextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
///
/// @param self QDesignerContainerExtension*
///
int32_t q_designercontainerextension_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback int32_t func()
///
void q_designercontainerextension_on_count(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_designercontainerextension_super_count` instead
///
#define q_designercontainerextension_qbase_count q_designercontainerextension_super_count

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
///
int32_t q_designercontainerextension_super_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
QWidget* q_designercontainerextension_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback QWidget* func(QDesignerContainerExtension* self, int index)
///
void q_designercontainerextension_on_widget(void* self, QWidget* (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designercontainerextension_super_widget` instead
///
#define q_designercontainerextension_qbase_widget q_designercontainerextension_super_widget

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
QWidget* q_designercontainerextension_super_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
///
/// @param self QDesignerContainerExtension*
///
int32_t q_designercontainerextension_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback int32_t func()
///
void q_designercontainerextension_on_current_index(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_designercontainerextension_super_current_index` instead
///
#define q_designercontainerextension_qbase_current_index q_designercontainerextension_super_current_index

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
///
int32_t q_designercontainerextension_super_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
void q_designercontainerextension_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback void func(QDesignerContainerExtension* self, int index)
///
void q_designercontainerextension_on_set_current_index(void* self, void (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designercontainerextension_super_set_current_index` instead
///
#define q_designercontainerextension_qbase_set_current_index q_designercontainerextension_super_set_current_index

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
void q_designercontainerextension_super_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
///
/// @param self QDesignerContainerExtension*
///
bool q_designercontainerextension_can_add_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback bool func()
///
void q_designercontainerextension_on_can_add_widget(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_designercontainerextension_super_can_add_widget` instead
///
#define q_designercontainerextension_qbase_can_add_widget q_designercontainerextension_super_can_add_widget

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
///
bool q_designercontainerextension_super_can_add_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
///
/// @param self QDesignerContainerExtension*
/// @param widget QWidget*
///
void q_designercontainerextension_add_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback void func(QDesignerContainerExtension* self, QWidget* widget)
///
void q_designercontainerextension_on_add_widget(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_designercontainerextension_super_add_widget` instead
///
#define q_designercontainerextension_qbase_add_widget q_designercontainerextension_super_add_widget

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
/// @param widget QWidget*
///
void q_designercontainerextension_super_add_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
///
/// @param self QDesignerContainerExtension*
/// @param index int
/// @param widget QWidget*
///
void q_designercontainerextension_insert_widget(void* self, int index, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback void func(QDesignerContainerExtension* self, int index, QWidget* widget)
///
void q_designercontainerextension_on_insert_widget(void* self, void (*callback)(void*, int, void*));

/// @warning DEPRECATED: Use `q_designercontainerextension_super_insert_widget` instead
///
#define q_designercontainerextension_qbase_insert_widget q_designercontainerextension_super_insert_widget

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
/// @param index int
/// @param widget QWidget*
///
void q_designercontainerextension_super_insert_widget(void* self, int index, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
bool q_designercontainerextension_can_remove(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback bool func(QDesignerContainerExtension* self, int index)
///
void q_designercontainerextension_on_can_remove(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designercontainerextension_super_can_remove` instead
///
#define q_designercontainerextension_qbase_can_remove q_designercontainerextension_super_can_remove

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
bool q_designercontainerextension_super_can_remove(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
void q_designercontainerextension_remove(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback void func(QDesignerContainerExtension* self, int index)
///
void q_designercontainerextension_on_remove(void* self, void (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designercontainerextension_super_remove` instead
///
#define q_designercontainerextension_qbase_remove q_designercontainerextension_super_remove

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
///
/// Base class method implementation
///
/// @param self QDesignerContainerExtension*
/// @param index int
///
void q_designercontainerextension_super_remove(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#dtor.QDesignerContainerExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerContainerExtension*
///
void q_designercontainerextension_delete(void* self);

#endif
