#pragma once
#ifndef SRCQT6C_LIBQITEMEDITORFACTORY_H
#define SRCQT6C_LIBQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qitemeditorcreatorbase.html

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
///
/// @param self QItemEditorCreatorBase*
/// @param parent QWidget*
QWidget* q_itemeditorcreatorbase_create_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QItemEditorCreatorBase*
char* q_itemeditorcreatorbase_value_property_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator-eq)
///
/// @param self QItemEditorCreatorBase*
/// @param param1 QItemEditorCreatorBase*
void q_itemeditorcreatorbase_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
///
/// Delete this object from C++ memory.
///
/// @param self QItemEditorCreatorBase*
void q_itemeditorcreatorbase_delete(void* self);

/// https://doc.qt.io/qt-6/qitemeditorfactory.html

/// q_itemeditorfactory_new constructs a new QItemEditorFactory object.
///
QItemEditorFactory* q_itemeditorfactory_new();

/// q_itemeditorfactory_new2 constructs a new QItemEditorFactory object.
///
/// @param param1 QItemEditorFactory*
QItemEditorFactory* q_itemeditorfactory_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// @param self QItemEditorFactory*
/// @param userType int
/// @param parent QWidget*
QWidget* q_itemeditorfactory_create_editor(void* self, int userType, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self QItemEditorFactory*
/// @param callback QWidget* func(QItemEditorFactory* self, int userType, QWidget* parent)
void q_itemeditorfactory_on_create_editor(void* self, QWidget* (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// Base class method implementation
///
/// @param self QItemEditorFactory*
/// @param userType int
/// @param parent QWidget*
QWidget* q_itemeditorfactory_qbase_create_editor(void* self, int userType, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QItemEditorFactory*
/// @param userType int
char* q_itemeditorfactory_value_property_name(void* self, int userType);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Allows for overriding the related default method
///
/// @param self QItemEditorFactory*
/// @param callback char* func(QItemEditorFactory* self, int userType)
void q_itemeditorfactory_on_value_property_name(void* self, char* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Base class method implementation
///
/// @param self QItemEditorFactory*
/// @param userType int
char* q_itemeditorfactory_qbase_value_property_name(void* self, int userType);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
///
/// @param self QItemEditorFactory*
/// @param userType int
/// @param creator QItemEditorCreatorBase*
void q_itemeditorfactory_register_editor(void* self, int userType, void* creator);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
///
const QItemEditorFactory* q_itemeditorfactory_default_factory();

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
///
/// @param factory QItemEditorFactory*
void q_itemeditorfactory_set_default_factory(void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QItemEditorFactory*
void q_itemeditorfactory_delete(void* self);

#endif
