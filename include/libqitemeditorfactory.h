#pragma once
#ifndef LIBQITEMEDITORFACTORY_H
#define LIBQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator-eq)
///
/// @param self QItemEditorCreatorBase*
/// @param param1 QItemEditorCreatorBase*
///
void q_itemeditorcreatorbase_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
///
/// Delete this object from C++ memory.
///
/// @param self QItemEditorCreatorBase*
///
void q_itemeditorcreatorbase_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html)

/// q_itemeditorfactory_new constructs a new QItemEditorFactory object.
///
QItemEditorFactory* q_itemeditorfactory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html)

/// q_itemeditorfactory_new2 constructs a new QItemEditorFactory object.
///
/// @param param1 QItemEditorFactory*
///
QItemEditorFactory* q_itemeditorfactory_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// @param self const QItemEditorFactory*
/// @param userType int
/// @param parent QWidget*
///
QWidget* q_itemeditorfactory_create_editor(const void* self, int userType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self const QItemEditorFactory*
/// @param callback QWidget* func(const QItemEditorFactory* self, int userType, QWidget* parent)
///
void q_itemeditorfactory_on_create_editor(const void* self, QWidget* (*callback)(const void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// Base class method implementation
///
/// @param self const QItemEditorFactory*
/// @param userType int
/// @param parent QWidget*
///
QWidget* q_itemeditorfactory_super_create_editor(const void* self, int userType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemEditorFactory*
/// @param userType int
///
char* q_itemeditorfactory_value_property_name(const void* self, int userType);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Allows for overriding the related default method
///
/// @param self const QItemEditorFactory*
/// @param callback libqt_string func(const QItemEditorFactory* self, int userType)
///
void q_itemeditorfactory_on_value_property_name(const void* self, libqt_string (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Base class method implementation
///
/// @param self const QItemEditorFactory*
/// @param userType int
///
char* q_itemeditorfactory_super_value_property_name(const void* self, int userType);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
///
/// @param self QItemEditorFactory*
/// @param userType int
/// @param creator QItemEditorCreatorBase*
///
void q_itemeditorfactory_register_editor(void* self, int userType, void* creator);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
///
const QItemEditorFactory* q_itemeditorfactory_default_factory();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
///
/// @param factory QItemEditorFactory*
///
void q_itemeditorfactory_set_default_factory(void* factory);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#operator-eq)
///
/// @param self QItemEditorFactory*
/// @param param1 QItemEditorFactory*
///
void q_itemeditorfactory_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QItemEditorFactory*
///
void q_itemeditorfactory_delete(void* self);

#endif
