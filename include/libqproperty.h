#pragma once
#ifndef LIBQPROPERTY_H
#define LIBQPROPERTY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html)

/// q_scopedpropertyupdategroup_new constructs a new QScopedPropertyUpdateGroup object.
///
QScopedPropertyUpdateGroup* q_scopedpropertyupdategroup_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html#dtor.QScopedPropertyUpdateGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QScopedPropertyUpdateGroup*
///
void q_scopedpropertyupdategroup_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)

/// q_propertybindingsourcelocation_new constructs a new QPropertyBindingSourceLocation object.
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)

/// q_propertybindingsourcelocation_new2 constructs a new QPropertyBindingSourceLocation object.
///
/// @param other QPropertyBindingSourceLocation*
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)

/// q_propertybindingsourcelocation_new3 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
///
/// @param other QPropertyBindingSourceLocation*
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)

/// q_propertybindingsourcelocation_new4 constructs a new QPropertyBindingSourceLocation object.
///
/// @param param1 QPropertyBindingSourceLocation*
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new4(const void* param1);

/// q_propertybindingsourcelocation_copy_assign shallow copies `other` into `self`.
///
/// @param self QPropertyBindingSourceLocation*
/// @param other QPropertyBindingSourceLocation*
///
void q_propertybindingsourcelocation_copy_assign(void* self, void* other);

/// q_propertybindingsourcelocation_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPropertyBindingSourceLocation*
/// @param other QPropertyBindingSourceLocation*
///
void q_propertybindingsourcelocation_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPropertyBindingSourceLocation*
///
const char* q_propertybindingsourcelocation_file_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
///
/// @param self QPropertyBindingSourceLocation*
/// @param fileName const char*
///
void q_propertybindingsourcelocation_set_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPropertyBindingSourceLocation*
///
const char* q_propertybindingsourcelocation_function_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
///
/// @param self QPropertyBindingSourceLocation*
/// @param functionName const char*
///
void q_propertybindingsourcelocation_set_function_name(void* self, const char* functionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
///
/// @param self const QPropertyBindingSourceLocation*
///
uint32_t q_propertybindingsourcelocation_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
///
/// @param self QPropertyBindingSourceLocation*
/// @param line uint32_t
///
void q_propertybindingsourcelocation_set_line(void* self, uint32_t line);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
///
/// @param self const QPropertyBindingSourceLocation*
///
uint32_t q_propertybindingsourcelocation_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
///
/// @param self QPropertyBindingSourceLocation*
/// @param column uint32_t
///
void q_propertybindingsourcelocation_set_column(void* self, uint32_t column);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#dtor.QPropertyBindingSourceLocation)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyBindingSourceLocation*
///
void q_propertybindingsourcelocation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)

/// q_propertybindingerror_new constructs a new QPropertyBindingError object.
///
QPropertyBindingError* q_propertybindingerror_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)

/// q_propertybindingerror_new2 constructs a new QPropertyBindingError object.
///
/// @param type enum QPropertyBindingError__Type
///
QPropertyBindingError* q_propertybindingerror_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)

/// q_propertybindingerror_new3 constructs a new QPropertyBindingError object.
///
/// @param other QPropertyBindingError*
///
QPropertyBindingError* q_propertybindingerror_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)

/// q_propertybindingerror_new4 constructs a new QPropertyBindingError object.
///
/// @param type enum QPropertyBindingError__Type
/// @param description const char*
///
QPropertyBindingError* q_propertybindingerror_new4(int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator-eq)
///
/// @param self QPropertyBindingError*
/// @param other QPropertyBindingError*
///
void q_propertybindingerror_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
///
/// @param self const QPropertyBindingError*
///
bool q_propertybindingerror_has_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
///
/// @param self const QPropertyBindingError*
///
/// @return enum QPropertyBindingError__Type
///
int32_t q_propertybindingerror_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPropertyBindingError*
///
const char* q_propertybindingerror_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#dtor.QPropertyBindingError)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyBindingError*
///
void q_propertybindingerror_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html)

/// q_untypedpropertybinding_new constructs a new QUntypedPropertyBinding object.
///
QUntypedPropertyBinding* q_untypedpropertybinding_new();

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html)

/// q_untypedpropertybinding_new2 constructs a new QUntypedPropertyBinding object.
///
/// @param other QUntypedPropertyBinding*
///
QUntypedPropertyBinding* q_untypedpropertybinding_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator-eq)
///
/// @param self QUntypedPropertyBinding*
/// @param other QUntypedPropertyBinding*
///
void q_untypedpropertybinding_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
///
/// @param self const QUntypedPropertyBinding*
///
bool q_untypedpropertybinding_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
///
/// @param self const QUntypedPropertyBinding*
///
QPropertyBindingError* q_untypedpropertybinding_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
///
/// @param self const QUntypedPropertyBinding*
///
QMetaType* q_untypedpropertybinding_value_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#dtor.QUntypedPropertyBinding)
///
/// Delete this object from C++ memory.
///
/// @param self QUntypedPropertyBinding*
///
void q_untypedpropertybinding_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html)

/// q_propertyobserverbase_new constructs a new QPropertyObserverBase object.
///
QPropertyObserverBase* q_propertyobserverbase_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html)

/// q_propertyobserverbase_new2 constructs a new QPropertyObserverBase object.
///
/// @param param1 QPropertyObserverBase*
///
QPropertyObserverBase* q_propertyobserverbase_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#operator-eq)
///
/// @param self QPropertyObserverBase*
/// @param param1 QPropertyObserverBase*
///
void q_propertyobserverbase_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#dtor.QPropertyObserverBase)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyObserverBase*
///
void q_propertyobserverbase_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html)

/// q_propertyobserver_new constructs a new QPropertyObserver object.
///
QPropertyObserver* q_propertyobserver_new();

/// Inherited from QPropertyObserverBase
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#operator-eq)
///
/// @param self QPropertyObserver*
/// @param param1 QPropertyObserverBase*
///
void q_propertyobserver_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html#dtor.QPropertyObserver)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyObserver*
///
void q_propertyobserver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html)

/// q_propertynotifier_new constructs a new QPropertyNotifier object.
///
QPropertyNotifier* q_propertynotifier_new();

/// Inherited from QPropertyObserverBase
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#operator-eq)
///
/// @param self QPropertyNotifier*
/// @param param1 QPropertyObserverBase*
///
void q_propertynotifier_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html#dtor.QPropertyNotifier)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyNotifier*
///
void q_propertynotifier_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)

/// q_untypedbindable_new constructs a new QUntypedBindable object.
///
QUntypedBindable* q_untypedbindable_new();

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)

/// q_untypedbindable_new2 constructs a new QUntypedBindable object.
///
/// @param other QUntypedBindable*
///
QUntypedBindable* q_untypedbindable_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)

/// q_untypedbindable_new3 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
///
/// @param other QUntypedBindable*
///
QUntypedBindable* q_untypedbindable_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)

/// q_untypedbindable_new4 constructs a new QUntypedBindable object.
///
/// @param param1 QUntypedBindable*
///
QUntypedBindable* q_untypedbindable_new4(const void* param1);

/// q_untypedbindable_copy_assign shallow copies `other` into `self`.
///
/// @param self QUntypedBindable*
/// @param other QUntypedBindable*
///
void q_untypedbindable_copy_assign(void* self, void* other);

/// q_untypedbindable_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QUntypedBindable*
/// @param other QUntypedBindable*
///
void q_untypedbindable_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
///
/// @param self const QUntypedBindable*
///
bool q_untypedbindable_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
///
/// @param self const QUntypedBindable*
///
bool q_untypedbindable_is_bindable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
///
/// @param self const QUntypedBindable*
///
bool q_untypedbindable_is_read_only(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// @param self const QUntypedBindable*
///
QUntypedPropertyBinding* q_untypedbindable_make_binding(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
///
/// @param self QUntypedBindable*
///
QUntypedPropertyBinding* q_untypedbindable_take_binding(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
///
/// @param self const QUntypedBindable*
/// @param observer QPropertyObserver*
///
void q_untypedbindable_observe(const void* self, void* observer);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
///
/// @param self const QUntypedBindable*
///
QUntypedPropertyBinding* q_untypedbindable_binding(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
///
/// @param self QUntypedBindable*
/// @param binding QUntypedPropertyBinding*
///
bool q_untypedbindable_set_binding(void* self, const void* binding);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
///
/// @param self const QUntypedBindable*
///
bool q_untypedbindable_has_binding(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
///
/// @param self const QUntypedBindable*
///
QMetaType* q_untypedbindable_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// @param self const QUntypedBindable*
/// @param location QPropertyBindingSourceLocation*
///
QUntypedPropertyBinding* q_untypedbindable_make_binding1(const void* self, const void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#dtor.QUntypedBindable)
///
/// Delete this object from C++ memory.
///
/// @param self QUntypedBindable*
///
void q_untypedbindable_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qproperty.html#public-types)

typedef enum {
    QTPRIVATE_BINDABLEWARNINGS_REASON_INVALIDINTERFACE = 0,
    QTPRIVATE_BINDABLEWARNINGS_REASON_NONBINDABLEINTERFACE = 1,
    QTPRIVATE_BINDABLEWARNINGS_REASON_READONLYINTERFACE = 2
} QtPrivate__BindableWarnings__Reason;

/// [Upstream resources](https://doc.qt.io/qt-6/qproperty.html#public-types)

typedef enum {
    QPROPERTYBINDINGERROR_TYPE_NOERROR = 0,
    QPROPERTYBINDINGERROR_TYPE_BINDINGLOOP = 1,
    QPROPERTYBINDINGERROR_TYPE_EVALUATIONERROR = 2,
    QPROPERTYBINDINGERROR_TYPE_UNKNOWNERROR = 3
} QPropertyBindingError__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qproperty.html#public-types)

typedef enum {
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERNOTIFIESBINDING = 0,
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERNOTIFIESCHANGEHANDLER = 1,
    QPROPERTYOBSERVERBASE_OBSERVERTAG_OBSERVERISPLACEHOLDER = 2
} QPropertyObserverBase__ObserverTag;

#endif
