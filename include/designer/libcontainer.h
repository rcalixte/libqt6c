#pragma once
#ifndef DESIGNER_LIBCONTAINER_H
#define DESIGNER_LIBCONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html)

/// q_designercontainerextension_new constructs a new QDesignerContainerExtension object.
///
QDesignerContainerExtension* q_designercontainerextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_count` before it can be called.
///
/// @param self const QDesignerContainerExtension*
///
int32_t q_designercontainerextension_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback int32_t func(const QDesignerContainerExtension* self)
///
void q_designercontainerextension_on_count(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_widget` before it can be called.
///
/// @param self const QDesignerContainerExtension*
/// @param index int
///
QWidget* q_designercontainerextension_widget(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback QWidget* func(const QDesignerContainerExtension* self, int index)
///
void q_designercontainerextension_on_widget(void* self, QWidget* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_current_index` before it can be called.
///
/// @param self const QDesignerContainerExtension*
///
int32_t q_designercontainerextension_current_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback int32_t func(const QDesignerContainerExtension* self)
///
void q_designercontainerextension_on_current_index(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_set_current_index` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_can_add_widget` before it can be called.
///
/// @param self const QDesignerContainerExtension*
///
bool q_designercontainerextension_can_add_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback bool func(const QDesignerContainerExtension* self)
///
void q_designercontainerextension_on_can_add_widget(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_add_widget` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_insert_widget` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_can_remove` before it can be called.
///
/// @param self const QDesignerContainerExtension*
/// @param index int
///
bool q_designercontainerextension_can_remove(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerContainerExtension*
/// @param callback bool func(const QDesignerContainerExtension* self, int index)
///
void q_designercontainerextension_on_can_remove(void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
///
/// @warning This method must be implemented with `q_designercontainerextension_on_remove` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#dtor.QDesignerContainerExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerContainerExtension*
///
void q_designercontainerextension_delete(void* self);

#endif
