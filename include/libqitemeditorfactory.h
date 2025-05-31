#pragma once
#ifndef SRCQT6C_LIBQITEMEDITORFACTORY_H
#define SRCQT6C_LIBQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qitemeditorcreatorbase.html

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
///
/// ``` QItemEditorCreatorBase* self, QWidget* parent ```
QWidget* q_itemeditorcreatorbase_create_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
///
/// ``` QItemEditorCreatorBase* self ```
char* q_itemeditorcreatorbase_value_property_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator=)
///
/// ``` QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1 ```
void q_itemeditorcreatorbase_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#dtor.QItemEditorCreatorBase)
///
/// Delete this object from C++ memory.
///
/// ``` QItemEditorCreatorBase* self ```
void q_itemeditorcreatorbase_delete(void* self);

/// https://doc.qt.io/qt-6/qitemeditorfactory.html

/// q_itemeditorfactory_new constructs a new QItemEditorFactory object.
///
///
QItemEditorFactory* q_itemeditorfactory_new();

/// q_itemeditorfactory_new2 constructs a new QItemEditorFactory object.
///
/// ``` QItemEditorFactory* param1 ```
QItemEditorFactory* q_itemeditorfactory_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// ``` QItemEditorFactory* self, int userType, QWidget* parent ```
QWidget* q_itemeditorfactory_create_editor(void* self, int userType, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// Allows for overriding the related default method
///
/// ``` QItemEditorFactory* self, QWidget* (*slot)(QItemEditorFactory*, int, QWidget*) ```
void q_itemeditorfactory_on_create_editor(void* self, QWidget* (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// Base class method implementation
///
/// ``` QItemEditorFactory* self, int userType, QWidget* parent ```
QWidget* q_itemeditorfactory_qbase_create_editor(void* self, int userType, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// ``` QItemEditorFactory* self, int userType ```
char* q_itemeditorfactory_value_property_name(void* self, int userType);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Allows for overriding the related default method
///
/// ``` QItemEditorFactory* self, char* (*slot)(QItemEditorFactory*, int) ```
void q_itemeditorfactory_on_value_property_name(void* self, char* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// Base class method implementation
///
/// ``` QItemEditorFactory* self, int userType ```
char* q_itemeditorfactory_qbase_value_property_name(void* self, int userType);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
///
/// ``` QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator ```
void q_itemeditorfactory_register_editor(void* self, int userType, void* creator);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
///
///
const QItemEditorFactory* q_itemeditorfactory_default_factory();

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
///
/// ``` QItemEditorFactory* factory ```
void q_itemeditorfactory_set_default_factory(void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#dtor.QItemEditorFactory)
///
/// Delete this object from C++ memory.
///
/// ``` QItemEditorFactory* self ```
void q_itemeditorfactory_delete(void* self);

#endif
