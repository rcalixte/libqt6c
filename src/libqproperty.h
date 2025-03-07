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

QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new(void* other);
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new2(void* other);
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new3();
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new4(void* param1);
void q_propertybindingsourcelocation_copy_assign(void* self, void* other);
void q_propertybindingsourcelocation_move_assign(void* self, void* other);
void q_propertybindingsourcelocation_delete(void* self);

QPropertyBindingError* q_propertybindingerror_new();
QPropertyBindingError* q_propertybindingerror_new2(int64_t typeVal);
QPropertyBindingError* q_propertybindingerror_new3(void* other);
QPropertyBindingError* q_propertybindingerror_new4(int64_t typeVal, const char* description);
void q_propertybindingerror_operator_assign(void* self, void* other);
bool q_propertybindingerror_has_error(void* self);
int64_t q_propertybindingerror_type(void* self);
const char* q_propertybindingerror_description(void* self);
void q_propertybindingerror_delete(void* self);

QUntypedPropertyBinding* q_untypedpropertybinding_new();
QUntypedPropertyBinding* q_untypedpropertybinding_new2(void* other);
void q_untypedpropertybinding_operator_assign(void* self, void* other);
bool q_untypedpropertybinding_is_null(void* self);
QPropertyBindingError* q_untypedpropertybinding_error(void* self);
QMetaType* q_untypedpropertybinding_value_meta_type(void* self);
void q_untypedpropertybinding_delete(void* self);

QPropertyObserverBase* q_propertyobserverbase_new();
QPropertyObserverBase* q_propertyobserverbase_new2(void* param1);
void q_propertyobserverbase_delete(void* self);

QPropertyObserver* q_propertyobserver_new();
void q_propertyobserver_delete(void* self);

QPropertyNotifier* q_propertynotifier_new();
void q_propertynotifier_delete(void* self);

QUntypedBindable* q_untypedbindable_new(void* other);
QUntypedBindable* q_untypedbindable_new2(void* other);
QUntypedBindable* q_untypedbindable_new3();
QUntypedBindable* q_untypedbindable_new4(void* param1);
void q_untypedbindable_copy_assign(void* self, void* other);
void q_untypedbindable_move_assign(void* self, void* other);
bool q_untypedbindable_is_valid(void* self);
bool q_untypedbindable_is_bindable(void* self);
bool q_untypedbindable_is_read_only(void* self);
QUntypedPropertyBinding* q_untypedbindable_make_binding(void* self);
QUntypedPropertyBinding* q_untypedbindable_take_binding(void* self);
void q_untypedbindable_observe(void* self, void* observer);
QUntypedPropertyBinding* q_untypedbindable_binding(void* self);
bool q_untypedbindable_set_binding(void* self, void* binding);
bool q_untypedbindable_has_binding(void* self);
QMetaType* q_untypedbindable_meta_type(void* self);
QUntypedPropertyBinding* q_untypedbindable_make_binding1(void* self, void* location);
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
