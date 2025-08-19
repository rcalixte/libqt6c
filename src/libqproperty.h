#pragma once
#ifndef SRCQT6C_LIBQPROPERTY_H
#define SRCQT6C_LIBQPROPERTY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html

/// q_scopedpropertyupdategroup_new constructs a new QScopedPropertyUpdateGroup object.
///
QScopedPropertyUpdateGroup* q_scopedpropertyupdategroup_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html#dtor.QScopedPropertyUpdateGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QScopedPropertyUpdateGroup*
void q_scopedpropertyupdategroup_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html

/// q_propertybindingsourcelocation_new constructs a new QPropertyBindingSourceLocation object.
///
/// @param other QPropertyBindingSourceLocation*
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new(void* other);

/// q_propertybindingsourcelocation_new2 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
///
/// @param other QPropertyBindingSourceLocation*
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new2(void* other);

/// q_propertybindingsourcelocation_new3 constructs a new QPropertyBindingSourceLocation object.
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new3();

/// q_propertybindingsourcelocation_new4 constructs a new QPropertyBindingSourceLocation object.
///
/// @param param1 QPropertyBindingSourceLocation*
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new4(void* param1);

/// q_propertybindingsourcelocation_copy_assign shallow copies `other` into `self`.
///
/// @param self QPropertyBindingSourceLocation*
/// @param other QPropertyBindingSourceLocation*
void q_propertybindingsourcelocation_copy_assign(void* self, void* other);

/// q_propertybindingsourcelocation_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPropertyBindingSourceLocation*
/// @param other QPropertyBindingSourceLocation*
void q_propertybindingsourcelocation_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#dtor.QPropertyBindingSourceLocation)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyBindingSourceLocation*
void q_propertybindingsourcelocation_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertybindingerror.html

/// q_propertybindingerror_new constructs a new QPropertyBindingError object.
///
QPropertyBindingError* q_propertybindingerror_new();

/// q_propertybindingerror_new2 constructs a new QPropertyBindingError object.
///
/// @param typeVal enum QPropertyBindingError__Type
QPropertyBindingError* q_propertybindingerror_new2(int32_t typeVal);

/// q_propertybindingerror_new3 constructs a new QPropertyBindingError object.
///
/// @param other QPropertyBindingError*
QPropertyBindingError* q_propertybindingerror_new3(void* other);

/// q_propertybindingerror_new4 constructs a new QPropertyBindingError object.
///
/// @param typeVal enum QPropertyBindingError__Type
/// @param description const char*
QPropertyBindingError* q_propertybindingerror_new4(int32_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator-eq)
///
/// @param self QPropertyBindingError*
/// @param other QPropertyBindingError*
void q_propertybindingerror_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
///
/// @param self QPropertyBindingError*
bool q_propertybindingerror_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
///
/// @param self QPropertyBindingError*
///
/// @return enum QPropertyBindingError__Type
int32_t q_propertybindingerror_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPropertyBindingError*
const char* q_propertybindingerror_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#dtor.QPropertyBindingError)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyBindingError*
void q_propertybindingerror_delete(void* self);

/// https://doc.qt.io/qt-6/quntypedpropertybinding.html

/// q_untypedpropertybinding_new constructs a new QUntypedPropertyBinding object.
///
QUntypedPropertyBinding* q_untypedpropertybinding_new();

/// q_untypedpropertybinding_new2 constructs a new QUntypedPropertyBinding object.
///
/// @param other QUntypedPropertyBinding*
QUntypedPropertyBinding* q_untypedpropertybinding_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator-eq)
///
/// @param self QUntypedPropertyBinding*
/// @param other QUntypedPropertyBinding*
void q_untypedpropertybinding_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
///
/// @param self QUntypedPropertyBinding*
bool q_untypedpropertybinding_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
///
/// @param self QUntypedPropertyBinding*
QPropertyBindingError* q_untypedpropertybinding_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
///
/// @param self QUntypedPropertyBinding*
QMetaType* q_untypedpropertybinding_value_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#dtor.QUntypedPropertyBinding)
///
/// Delete this object from C++ memory.
///
/// @param self QUntypedPropertyBinding*
void q_untypedpropertybinding_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertyobserverbase.html

/// q_propertyobserverbase_new constructs a new QPropertyObserverBase object.
///
QPropertyObserverBase* q_propertyobserverbase_new();

/// q_propertyobserverbase_new2 constructs a new QPropertyObserverBase object.
///
/// @param param1 QPropertyObserverBase*
QPropertyObserverBase* q_propertyobserverbase_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyobserverbase.html#dtor.QPropertyObserverBase)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyObserverBase*
void q_propertyobserverbase_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertyobserver.html

/// q_propertyobserver_new constructs a new QPropertyObserver object.
///
QPropertyObserver* q_propertyobserver_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyobserver.html#dtor.QPropertyObserver)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyObserver*
void q_propertyobserver_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertynotifier.html

/// q_propertynotifier_new constructs a new QPropertyNotifier object.
///
QPropertyNotifier* q_propertynotifier_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertynotifier.html#dtor.QPropertyNotifier)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyNotifier*
void q_propertynotifier_delete(void* self);

/// https://doc.qt.io/qt-6/quntypedbindable.html

/// q_untypedbindable_new constructs a new QUntypedBindable object.
///
/// @param other QUntypedBindable*
QUntypedBindable* q_untypedbindable_new(void* other);

/// q_untypedbindable_new2 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
///
/// @param other QUntypedBindable*
QUntypedBindable* q_untypedbindable_new2(void* other);

/// q_untypedbindable_new3 constructs a new QUntypedBindable object.
///
QUntypedBindable* q_untypedbindable_new3();

/// q_untypedbindable_new4 constructs a new QUntypedBindable object.
///
/// @param param1 QUntypedBindable*
QUntypedBindable* q_untypedbindable_new4(void* param1);

/// q_untypedbindable_copy_assign shallow copies `other` into `self`.
///
/// @param self QUntypedBindable*
/// @param other QUntypedBindable*
void q_untypedbindable_copy_assign(void* self, void* other);

/// q_untypedbindable_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QUntypedBindable*
/// @param other QUntypedBindable*
void q_untypedbindable_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
///
/// @param self QUntypedBindable*
bool q_untypedbindable_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
///
/// @param self QUntypedBindable*
bool q_untypedbindable_is_bindable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
///
/// @param self QUntypedBindable*
bool q_untypedbindable_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// @param self QUntypedBindable*
QUntypedPropertyBinding* q_untypedbindable_make_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
///
/// @param self QUntypedBindable*
QUntypedPropertyBinding* q_untypedbindable_take_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
///
/// @param self QUntypedBindable*
/// @param observer QPropertyObserver*
void q_untypedbindable_observe(void* self, void* observer);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
///
/// @param self QUntypedBindable*
QUntypedPropertyBinding* q_untypedbindable_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
///
/// @param self QUntypedBindable*
/// @param binding QUntypedPropertyBinding*
bool q_untypedbindable_set_binding(void* self, void* binding);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
///
/// @param self QUntypedBindable*
bool q_untypedbindable_has_binding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
///
/// @param self QUntypedBindable*
QMetaType* q_untypedbindable_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// @param self QUntypedBindable*
/// @param location QPropertyBindingSourceLocation*
QUntypedPropertyBinding* q_untypedbindable_make_binding1(void* self, void* location);

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#dtor.QUntypedBindable)
///
/// Delete this object from C++ memory.
///
/// @param self QUntypedBindable*
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
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERISPLACEHOLDER = 2
} QPropertyObserverBase__ObserverTag;

#endif
