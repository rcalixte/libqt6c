#include "libqmetatype.hpp"
#include <string.h>
#include "libqproperty.hpp"
#include "libqproperty.h"

/// https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html

/// q_propertybindingsourcelocation_new constructs a new QPropertyBindingSourceLocation object.
///
/// ``` QPropertyBindingSourceLocation* other ```
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new(void* other) {
    return QPropertyBindingSourceLocation_new((QPropertyBindingSourceLocation*)other);
}

/// q_propertybindingsourcelocation_new2 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
///
/// ``` QPropertyBindingSourceLocation* other ```
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new2(void* other) {
    return QPropertyBindingSourceLocation_new2((QPropertyBindingSourceLocation*)other);
}

/// q_propertybindingsourcelocation_new3 constructs a new QPropertyBindingSourceLocation object.
///
///
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new3() {
    return QPropertyBindingSourceLocation_new3();
}

/// q_propertybindingsourcelocation_new4 constructs a new QPropertyBindingSourceLocation object.
///
/// ``` QPropertyBindingSourceLocation* param1 ```
QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new4(void* param1) {
    return QPropertyBindingSourceLocation_new4((QPropertyBindingSourceLocation*)param1);
}

/// q_propertybindingsourcelocation_copy_assign shallow copies `other` into `self`.
///
/// ``` QPropertyBindingSourceLocation* self, QPropertyBindingSourceLocation* other ```
void q_propertybindingsourcelocation_copy_assign(void* self, void* other) {
    QPropertyBindingSourceLocation_CopyAssign((QPropertyBindingSourceLocation*)self, (QPropertyBindingSourceLocation*)other);
}

/// q_propertybindingsourcelocation_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPropertyBindingSourceLocation* self, QPropertyBindingSourceLocation* other ```
void q_propertybindingsourcelocation_move_assign(void* self, void* other) {
    QPropertyBindingSourceLocation_MoveAssign((QPropertyBindingSourceLocation*)self, (QPropertyBindingSourceLocation*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QPropertyBindingSourceLocation* self ```
void q_propertybindingsourcelocation_delete(void* self) {
    QPropertyBindingSourceLocation_Delete((QPropertyBindingSourceLocation*)(self));
}

/// https://doc.qt.io/qt-6/qpropertybindingerror.html

/// q_propertybindingerror_new constructs a new QPropertyBindingError object.
///
///
QPropertyBindingError* q_propertybindingerror_new() {
    return QPropertyBindingError_new();
}

/// q_propertybindingerror_new2 constructs a new QPropertyBindingError object.
///
/// ``` enum QPropertyBindingError__Type typeVal ```
QPropertyBindingError* q_propertybindingerror_new2(int64_t typeVal) {
    return QPropertyBindingError_new2(typeVal);
}

/// q_propertybindingerror_new3 constructs a new QPropertyBindingError object.
///
/// ``` QPropertyBindingError* other ```
QPropertyBindingError* q_propertybindingerror_new3(void* other) {
    return QPropertyBindingError_new3((QPropertyBindingError*)other);
}

/// q_propertybindingerror_new4 constructs a new QPropertyBindingError object.
///
/// ``` enum QPropertyBindingError__Type typeVal, const char* description ```
QPropertyBindingError* q_propertybindingerror_new4(int64_t typeVal, const char* description) {
    return QPropertyBindingError_new4(typeVal, qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator=)
///
/// ``` QPropertyBindingError* self, QPropertyBindingError* other ```
void q_propertybindingerror_operator_assign(void* self, void* other) {
    QPropertyBindingError_OperatorAssign((QPropertyBindingError*)self, (QPropertyBindingError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
///
/// ``` QPropertyBindingError* self ```
bool q_propertybindingerror_has_error(void* self) {
    return QPropertyBindingError_HasError((QPropertyBindingError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
///
/// ``` QPropertyBindingError* self ```
int64_t q_propertybindingerror_type(void* self) {
    return QPropertyBindingError_Type((QPropertyBindingError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
///
/// ``` QPropertyBindingError* self ```
const char* q_propertybindingerror_description(void* self) {
    libqt_string _str = QPropertyBindingError_Description((QPropertyBindingError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QPropertyBindingError* self ```
void q_propertybindingerror_delete(void* self) {
    QPropertyBindingError_Delete((QPropertyBindingError*)(self));
}

/// https://doc.qt.io/qt-6/quntypedpropertybinding.html

/// q_untypedpropertybinding_new constructs a new QUntypedPropertyBinding object.
///
///
QUntypedPropertyBinding* q_untypedpropertybinding_new() {
    return QUntypedPropertyBinding_new();
}

/// q_untypedpropertybinding_new2 constructs a new QUntypedPropertyBinding object.
///
/// ``` QUntypedPropertyBinding* other ```
QUntypedPropertyBinding* q_untypedpropertybinding_new2(void* other) {
    return QUntypedPropertyBinding_new2((QUntypedPropertyBinding*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator=)
///
/// ``` QUntypedPropertyBinding* self, QUntypedPropertyBinding* other ```
void q_untypedpropertybinding_operator_assign(void* self, void* other) {
    QUntypedPropertyBinding_OperatorAssign((QUntypedPropertyBinding*)self, (QUntypedPropertyBinding*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
///
/// ``` QUntypedPropertyBinding* self ```
bool q_untypedpropertybinding_is_null(void* self) {
    return QUntypedPropertyBinding_IsNull((QUntypedPropertyBinding*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
///
/// ``` QUntypedPropertyBinding* self ```
QPropertyBindingError* q_untypedpropertybinding_error(void* self) {
    return QUntypedPropertyBinding_Error((QUntypedPropertyBinding*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
///
/// ``` QUntypedPropertyBinding* self ```
QMetaType* q_untypedpropertybinding_value_meta_type(void* self) {
    return QUntypedPropertyBinding_ValueMetaType((QUntypedPropertyBinding*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QUntypedPropertyBinding* self ```
void q_untypedpropertybinding_delete(void* self) {
    QUntypedPropertyBinding_Delete((QUntypedPropertyBinding*)(self));
}

/// https://doc.qt.io/qt-6/qpropertyobserverbase.html

/// q_propertyobserverbase_new constructs a new QPropertyObserverBase object.
///
///
QPropertyObserverBase* q_propertyobserverbase_new() {
    return QPropertyObserverBase_new();
}

/// q_propertyobserverbase_new2 constructs a new QPropertyObserverBase object.
///
/// ``` QPropertyObserverBase* param1 ```
QPropertyObserverBase* q_propertyobserverbase_new2(void* param1) {
    return QPropertyObserverBase_new2((QPropertyObserverBase*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QPropertyObserverBase* self ```
void q_propertyobserverbase_delete(void* self) {
    QPropertyObserverBase_Delete((QPropertyObserverBase*)(self));
}

/// https://doc.qt.io/qt-6/qpropertyobserver.html

/// q_propertyobserver_new constructs a new QPropertyObserver object.
///
///
QPropertyObserver* q_propertyobserver_new() {
    return QPropertyObserver_new();
}

/// Delete this object from C++ memory.
///
/// ``` QPropertyObserver* self ```
void q_propertyobserver_delete(void* self) {
    QPropertyObserver_Delete((QPropertyObserver*)(self));
}

/// https://doc.qt.io/qt-6/qpropertynotifier.html

/// q_propertynotifier_new constructs a new QPropertyNotifier object.
///
///
QPropertyNotifier* q_propertynotifier_new() {
    return QPropertyNotifier_new();
}

/// Delete this object from C++ memory.
///
/// ``` QPropertyNotifier* self ```
void q_propertynotifier_delete(void* self) {
    QPropertyNotifier_Delete((QPropertyNotifier*)(self));
}

/// https://doc.qt.io/qt-6/quntypedbindable.html

/// q_untypedbindable_new constructs a new QUntypedBindable object.
///
/// ``` QUntypedBindable* other ```
QUntypedBindable* q_untypedbindable_new(void* other) {
    return QUntypedBindable_new((QUntypedBindable*)other);
}

/// q_untypedbindable_new2 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
///
/// ``` QUntypedBindable* other ```
QUntypedBindable* q_untypedbindable_new2(void* other) {
    return QUntypedBindable_new2((QUntypedBindable*)other);
}

/// q_untypedbindable_new3 constructs a new QUntypedBindable object.
///
///
QUntypedBindable* q_untypedbindable_new3() {
    return QUntypedBindable_new3();
}

/// q_untypedbindable_new4 constructs a new QUntypedBindable object.
///
/// ``` QUntypedBindable* param1 ```
QUntypedBindable* q_untypedbindable_new4(void* param1) {
    return QUntypedBindable_new4((QUntypedBindable*)param1);
}

/// q_untypedbindable_copy_assign shallow copies `other` into `self`.
///
/// ``` QUntypedBindable* self, QUntypedBindable* other ```
void q_untypedbindable_copy_assign(void* self, void* other) {
    QUntypedBindable_CopyAssign((QUntypedBindable*)self, (QUntypedBindable*)other);
}

/// q_untypedbindable_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QUntypedBindable* self, QUntypedBindable* other ```
void q_untypedbindable_move_assign(void* self, void* other) {
    QUntypedBindable_MoveAssign((QUntypedBindable*)self, (QUntypedBindable*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_is_valid(void* self) {
    return QUntypedBindable_IsValid((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_is_bindable(void* self) {
    return QUntypedBindable_IsBindable((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_is_read_only(void* self) {
    return QUntypedBindable_IsReadOnly((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// ``` QUntypedBindable* self ```
QUntypedPropertyBinding* q_untypedbindable_make_binding(void* self) {
    return QUntypedBindable_MakeBinding((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
///
/// ``` QUntypedBindable* self ```
QUntypedPropertyBinding* q_untypedbindable_take_binding(void* self) {
    return QUntypedBindable_TakeBinding((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
///
/// ``` QUntypedBindable* self, QPropertyObserver* observer ```
void q_untypedbindable_observe(void* self, void* observer) {
    QUntypedBindable_Observe((QUntypedBindable*)self, (QPropertyObserver*)observer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
///
/// ``` QUntypedBindable* self ```
QUntypedPropertyBinding* q_untypedbindable_binding(void* self) {
    return QUntypedBindable_Binding((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
///
/// ``` QUntypedBindable* self, QUntypedPropertyBinding* binding ```
bool q_untypedbindable_set_binding(void* self, void* binding) {
    return QUntypedBindable_SetBinding((QUntypedBindable*)self, (QUntypedPropertyBinding*)binding);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
///
/// ``` QUntypedBindable* self ```
bool q_untypedbindable_has_binding(void* self) {
    return QUntypedBindable_HasBinding((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
///
/// ``` QUntypedBindable* self ```
QMetaType* q_untypedbindable_meta_type(void* self) {
    return QUntypedBindable_MetaType((QUntypedBindable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
///
/// ``` QUntypedBindable* self, QPropertyBindingSourceLocation* location ```
QUntypedPropertyBinding* q_untypedbindable_make_binding1(void* self, void* location) {
    return QUntypedBindable_MakeBinding1((QUntypedBindable*)self, (QPropertyBindingSourceLocation*)location);
}

/// Delete this object from C++ memory.
///
/// ``` QUntypedBindable* self ```
void q_untypedbindable_delete(void* self) {
    QUntypedBindable_Delete((QUntypedBindable*)(self));
}