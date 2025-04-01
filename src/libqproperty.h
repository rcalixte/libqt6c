#pragma once
#ifndef SRCQT6C_LIBQPROPERTY_H
#define SRCQT6C_LIBQPROPERTY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmetatype.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html

/// q_propertybindingsourcelocation_new constructs a new QPropertyBindingSourceLocation object.
///
/// ``` QPropertyBindingSourceLocation* other ```
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new(void* other);

/// q_propertybindingsourcelocation_new2 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
///
/// ``` QPropertyBindingSourceLocation* other ```
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new2(void* other);

/// q_propertybindingsourcelocation_new3 constructs a new QPropertyBindingSourceLocation object.
///
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new3();

/// q_propertybindingsourcelocation_new4 constructs a new QPropertyBindingSourceLocation object.
///
/// ``` QPropertyBindingSourceLocation* param1 ```
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new4(void* param1);

/// q_propertybindingsourcelocation_copy_assign shallow copies `other` into `self`.
///
/// ``` QPropertyBindingSourceLocation* self, QPropertyBindingSourceLocation* other ```
void q_propertybindingsourcelocation_copy_assign(void* self, void* other);

/// q_propertybindingsourcelocation_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPropertyBindingSourceLocation* self, QPropertyBindingSourceLocation* other ```
void q_propertybindingsourcelocation_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QPropertyBindingSourceLocation* self ```
void q_propertybindingsourcelocation_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertybindingerror.html

/// q_propertybindingerror_new constructs a new QPropertyBindingError object.
///
///
QPropertyBindingError* q_propertybindingerror_new();

/// q_propertybindingerror_new2 constructs a new QPropertyBindingError object.
///
/// ``` enum QPropertyBindingError__Type typeVal ```
QPropertyBindingError* q_propertybindingerror_new2(int64_t typeVal);

/// q_propertybindingerror_new3 constructs a new QPropertyBindingError object.
///
/// ``` QPropertyBindingError* other ```
QPropertyBindingError* q_propertybindingerror_new3(void* other);

/// q_propertybindingerror_new4 constructs a new QPropertyBindingError object.
///
/// ``` enum QPropertyBindingError__Type typeVal, const char* description ```
QPropertyBindingError* q_propertybindingerror_new4(int64_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator=)
///
/// ``` QPropertyBindingError* self, QPropertyBindingError* other ```
void q_propertybindingerror_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
///
/// ``` QPropertyBindingError* self ```
bool q_propertybindingerror_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
///
/// ``` QPropertyBindingError* self ```
int64_t q_propertybindingerror_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
///
/// ``` QPropertyBindingError* self ```
const char* q_propertybindingerror_description(void* self);

/// Delete this object from C++ memory.
///
/// ``` QPropertyBindingError* self ```
void q_propertybindingerror_delete(void* self);

/// https://doc.qt.io/qt-6/quntypedpropertybinding.html

/// q_untypedpropertybinding_new constructs a new QUntypedPropertyBinding object.
///
///
QUntypedPropertyBinding* q_untypedpropertybinding_new();

/// q_untypedpropertybinding_new2 constructs a new QUntypedPropertyBinding object.
///
/// ``` QUntypedPropertyBinding* other ```
QUntypedPropertyBinding* q_untypedpropertybinding_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator=)
///
/// ``` QUntypedPropertyBinding* self, QUntypedPropertyBinding* other ```
void q_untypedpropertybinding_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
///
/// ``` QUntypedPropertyBinding* self ```
bool q_untypedpropertybinding_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
///
/// ``` QUntypedPropertyBinding* self ```
QPropertyBindingError* q_untypedpropertybinding_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
///
/// ``` QUntypedPropertyBinding* self ```
QMetaType* q_untypedpropertybinding_value_meta_type(void* self);

/// Delete this object from C++ memory.
///
/// ``` QUntypedPropertyBinding* self ```
void q_untypedpropertybinding_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertyobserverbase.html

/// q_propertyobserverbase_new constructs a new QPropertyObserverBase object.
///
///
QPropertyObserverBase* q_propertyobserverbase_new();

/// q_propertyobserverbase_new2 constructs a new QPropertyObserverBase object.
///
/// ``` QPropertyObserverBase* param1 ```
QPropertyObserverBase* q_propertyobserverbase_new2(void* param1);

/// Delete this object from C++ memory.
///
/// ``` QPropertyObserverBase* self ```
void q_propertyobserverbase_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertyobserver.html

/// q_propertyobserver_new constructs a new QPropertyObserver object.
///
///
QPropertyObserver* q_propertyobserver_new();

/// Delete this object from C++ memory.
///
/// ``` QPropertyObserver* self ```
void q_propertyobserver_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertynotifier.html

/// q_propertynotifier_new constructs a new QPropertyNotifier object.
///
///
QPropertyNotifier* q_propertynotifier_new();

/// Delete this object from C++ memory.
///
/// ``` QPropertyNotifier* self ```
void q_propertynotifier_delete(void* self);

/// https://doc.qt.io/qt-6/quntypedbindable.html

/// q_untypedbindable_new constructs a new QUntypedBindable object.
///
/// ``` QUntypedBindable* other ```
QUntypedBindable* q_untypedbindable_new(void* other);

/// q_untypedbindable_new2 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
///
/// ``` QUntypedBindable* other ```
QUntypedBindable* q_untypedbindable_new2(void* other);

/// q_untypedbindable_new3 constructs a new QUntypedBindable object.
///
///
QUntypedBindable* q_untypedbindable_new3();

/// q_untypedbindable_new4 constructs a new QUntypedBindable object.
///
/// ``` QUntypedBindable* param1 ```
QUntypedBindable* q_untypedbindable_new4(void* param1);

/// q_untypedbindable_copy_assign shallow copies `other` into `self`.
///
/// ``` QUntypedBindable* self, QUntypedBindable* other ```
void q_untypedbindable_copy_assign(void* self, void* other);

/// q_untypedbindable_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QUntypedBindable* self, QUntypedBindable* other ```
void q_untypedbindable_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_is_bindable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// ``` QUntypedBindable* self ```
QUntypedPropertyBinding* q_untypedbindable_make_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
///
/// ``` QUntypedBindable* self ```
QUntypedPropertyBinding* q_untypedbindable_take_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
///
/// ``` QUntypedBindable* self, QPropertyObserver* observer ```
void q_untypedbindable_observe(void* self, void* observer);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
///
/// ``` QUntypedBindable* self ```
QUntypedPropertyBinding* q_untypedbindable_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
///
/// ``` QUntypedBindable* self, QUntypedPropertyBinding* binding ```
bool q_untypedbindable_set_binding(void* self, void* binding);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_has_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
///
/// ``` QUntypedBindable* self ```
QMetaType* q_untypedbindable_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// ``` QUntypedBindable* self, QPropertyBindingSourceLocation* location ```
QUntypedPropertyBinding* q_untypedbindable_make_binding1(void* self, void* location);

/// Delete this object from C++ memory.
///
/// ``` QUntypedBindable* self ```
void q_untypedbindable_delete(void* self);

/// https://doc.qt.io/qt-6/qproperty.html#types

typedef enum {
    QTPRIVATE_BINDABLEWARNINGS_REASON_INVALIDINTERFACE = 0,
    QTPRIVATE_BINDABLEWARNINGS_REASON_NONBINDABLEINTERFACE = 1,
    QTPRIVATE_BINDABLEWARNINGS_REASON_READONLYINTERFACE = 2
} QtPrivate__BindableWarnings__Reason;

typedef enum {
    QPROPERTYBINDINGERROR_TYPE_NOERROR = 0,
    QPROPERTYBINDINGERROR_TYPE_BINDINGLOOP = 1,
    QPROPERTYBINDINGERROR_TYPE_EVALUATIONERROR = 2,
    QPROPERTYBINDINGERROR_TYPE_UNKNOWNERROR = 3
} QPropertyBindingError__Type;

typedef enum {
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERNOTIFIESBINDING = 0,
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERNOTIFIESCHANGEHANDLER = 1,
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERISPLACEHOLDER = 2,
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERISALIAS = 3
} QPropertyObserverBase__ObserverTag;

#endif
