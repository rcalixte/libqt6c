#include "libqmetatype.hpp"
#include "libqproperty.hpp"
#include "libqproperty.h"

QScopedPropertyUpdateGroup* q_scopedpropertyupdategroup_new() {
    return QScopedPropertyUpdateGroup_new();
}

void q_scopedpropertyupdategroup_delete(void* self) {
    QScopedPropertyUpdateGroup_Delete((QScopedPropertyUpdateGroup*)(self));
}

QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new(void* other) {
    return QPropertyBindingSourceLocation_new((QPropertyBindingSourceLocation*)other);
}

QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new2(void* other) {
    return QPropertyBindingSourceLocation_new2((QPropertyBindingSourceLocation*)other);
}

QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new3() {
    return QPropertyBindingSourceLocation_new3();
}

QPropertyBindingSourceLocation* q_propertybindingsourcelocation_new4(void* param1) {
    return QPropertyBindingSourceLocation_new4((QPropertyBindingSourceLocation*)param1);
}

void q_propertybindingsourcelocation_copy_assign(void* self, void* other) {
    QPropertyBindingSourceLocation_CopyAssign((QPropertyBindingSourceLocation*)self, (QPropertyBindingSourceLocation*)other);
}

void q_propertybindingsourcelocation_move_assign(void* self, void* other) {
    QPropertyBindingSourceLocation_MoveAssign((QPropertyBindingSourceLocation*)self, (QPropertyBindingSourceLocation*)other);
}

void q_propertybindingsourcelocation_delete(void* self) {
    QPropertyBindingSourceLocation_Delete((QPropertyBindingSourceLocation*)(self));
}

QPropertyBindingError* q_propertybindingerror_new() {
    return QPropertyBindingError_new();
}

QPropertyBindingError* q_propertybindingerror_new2(int32_t typeVal) {
    return QPropertyBindingError_new2(typeVal);
}

QPropertyBindingError* q_propertybindingerror_new3(void* other) {
    return QPropertyBindingError_new3((QPropertyBindingError*)other);
}

QPropertyBindingError* q_propertybindingerror_new4(int32_t typeVal, const char* description) {
    return QPropertyBindingError_new4(typeVal, qstring(description));
}

void q_propertybindingerror_operator_assign(void* self, void* other) {
    QPropertyBindingError_OperatorAssign((QPropertyBindingError*)self, (QPropertyBindingError*)other);
}

bool q_propertybindingerror_has_error(void* self) {
    return QPropertyBindingError_HasError((QPropertyBindingError*)self);
}

int32_t q_propertybindingerror_type(void* self) {
    return QPropertyBindingError_Type((QPropertyBindingError*)self);
}

const char* q_propertybindingerror_description(void* self) {
    libqt_string _str = QPropertyBindingError_Description((QPropertyBindingError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_propertybindingerror_delete(void* self) {
    QPropertyBindingError_Delete((QPropertyBindingError*)(self));
}

QUntypedPropertyBinding* q_untypedpropertybinding_new() {
    return QUntypedPropertyBinding_new();
}

QUntypedPropertyBinding* q_untypedpropertybinding_new2(void* other) {
    return QUntypedPropertyBinding_new2((QUntypedPropertyBinding*)other);
}

void q_untypedpropertybinding_operator_assign(void* self, void* other) {
    QUntypedPropertyBinding_OperatorAssign((QUntypedPropertyBinding*)self, (QUntypedPropertyBinding*)other);
}

bool q_untypedpropertybinding_is_null(void* self) {
    return QUntypedPropertyBinding_IsNull((QUntypedPropertyBinding*)self);
}

QPropertyBindingError* q_untypedpropertybinding_error(void* self) {
    return QUntypedPropertyBinding_Error((QUntypedPropertyBinding*)self);
}

QMetaType* q_untypedpropertybinding_value_meta_type(void* self) {
    return QUntypedPropertyBinding_ValueMetaType((QUntypedPropertyBinding*)self);
}

void q_untypedpropertybinding_delete(void* self) {
    QUntypedPropertyBinding_Delete((QUntypedPropertyBinding*)(self));
}

QPropertyObserverBase* q_propertyobserverbase_new() {
    return QPropertyObserverBase_new();
}

QPropertyObserverBase* q_propertyobserverbase_new2(void* param1) {
    return QPropertyObserverBase_new2((QPropertyObserverBase*)param1);
}

void q_propertyobserverbase_delete(void* self) {
    QPropertyObserverBase_Delete((QPropertyObserverBase*)(self));
}

QPropertyObserver* q_propertyobserver_new() {
    return QPropertyObserver_new();
}

void q_propertyobserver_delete(void* self) {
    QPropertyObserver_Delete((QPropertyObserver*)(self));
}

QPropertyNotifier* q_propertynotifier_new() {
    return QPropertyNotifier_new();
}

void q_propertynotifier_delete(void* self) {
    QPropertyNotifier_Delete((QPropertyNotifier*)(self));
}

QUntypedBindable* q_untypedbindable_new(void* other) {
    return QUntypedBindable_new((QUntypedBindable*)other);
}

QUntypedBindable* q_untypedbindable_new2(void* other) {
    return QUntypedBindable_new2((QUntypedBindable*)other);
}

QUntypedBindable* q_untypedbindable_new3() {
    return QUntypedBindable_new3();
}

QUntypedBindable* q_untypedbindable_new4(void* param1) {
    return QUntypedBindable_new4((QUntypedBindable*)param1);
}

void q_untypedbindable_copy_assign(void* self, void* other) {
    QUntypedBindable_CopyAssign((QUntypedBindable*)self, (QUntypedBindable*)other);
}

void q_untypedbindable_move_assign(void* self, void* other) {
    QUntypedBindable_MoveAssign((QUntypedBindable*)self, (QUntypedBindable*)other);
}

bool q_untypedbindable_is_valid(void* self) {
    return QUntypedBindable_IsValid((QUntypedBindable*)self);
}

bool q_untypedbindable_is_bindable(void* self) {
    return QUntypedBindable_IsBindable((QUntypedBindable*)self);
}

bool q_untypedbindable_is_read_only(void* self) {
    return QUntypedBindable_IsReadOnly((QUntypedBindable*)self);
}

QUntypedPropertyBinding* q_untypedbindable_make_binding(void* self) {
    return QUntypedBindable_MakeBinding((QUntypedBindable*)self);
}

QUntypedPropertyBinding* q_untypedbindable_take_binding(void* self) {
    return QUntypedBindable_TakeBinding((QUntypedBindable*)self);
}

void q_untypedbindable_observe(void* self, void* observer) {
    QUntypedBindable_Observe((QUntypedBindable*)self, (QPropertyObserver*)observer);
}

QUntypedPropertyBinding* q_untypedbindable_binding(void* self) {
    return QUntypedBindable_Binding((QUntypedBindable*)self);
}

bool q_untypedbindable_set_binding(void* self, void* binding) {
    return QUntypedBindable_SetBinding((QUntypedBindable*)self, (QUntypedPropertyBinding*)binding);
}

bool q_untypedbindable_has_binding(void* self) {
    return QUntypedBindable_HasBinding((QUntypedBindable*)self);
}

QMetaType* q_untypedbindable_meta_type(void* self) {
    return QUntypedBindable_MetaType((QUntypedBindable*)self);
}

QUntypedPropertyBinding* q_untypedbindable_make_binding1(void* self, void* location) {
    return QUntypedBindable_MakeBinding1((QUntypedBindable*)self, (QPropertyBindingSourceLocation*)location);
}

void q_untypedbindable_delete(void* self) {
    QUntypedBindable_Delete((QUntypedBindable*)(self));
}
