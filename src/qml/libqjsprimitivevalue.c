#include "../libqmetatype.hpp"
#include "../libqvariant.hpp"
#include "libqjsprimitivevalue.hpp"
#include "libqjsprimitivevalue.h"

QJSPrimitiveUndefined* q_jsprimitiveundefined_new(void* other) {
    return QJSPrimitiveUndefined_New((QJSPrimitiveUndefined*)other);
}

QJSPrimitiveUndefined* q_jsprimitiveundefined_new2(void* other) {
    return QJSPrimitiveUndefined_New2((QJSPrimitiveUndefined*)other);
}

QJSPrimitiveUndefined* q_jsprimitiveundefined_new3() {
    return QJSPrimitiveUndefined_New3();
}

QJSPrimitiveUndefined* q_jsprimitiveundefined_new4(void* param1) {
    return QJSPrimitiveUndefined_New4((QJSPrimitiveUndefined*)param1);
}

void q_jsprimitiveundefined_copy_assign(void* self, void* other) {
    QJSPrimitiveUndefined_CopyAssign((QJSPrimitiveUndefined*)self, (QJSPrimitiveUndefined*)other);
}

void q_jsprimitiveundefined_move_assign(void* self, void* other) {
    QJSPrimitiveUndefined_MoveAssign((QJSPrimitiveUndefined*)self, (QJSPrimitiveUndefined*)other);
}

void q_jsprimitiveundefined_delete(void* self) {
    QJSPrimitiveUndefined_Delete((QJSPrimitiveUndefined*)(self));
}

QJSPrimitiveNull* q_jsprimitivenull_new(void* other) {
    return QJSPrimitiveNull_New((QJSPrimitiveNull*)other);
}

QJSPrimitiveNull* q_jsprimitivenull_new2(void* other) {
    return QJSPrimitiveNull_New2((QJSPrimitiveNull*)other);
}

QJSPrimitiveNull* q_jsprimitivenull_new3() {
    return QJSPrimitiveNull_New3();
}

QJSPrimitiveNull* q_jsprimitivenull_new4(void* param1) {
    return QJSPrimitiveNull_New4((QJSPrimitiveNull*)param1);
}

void q_jsprimitivenull_copy_assign(void* self, void* other) {
    QJSPrimitiveNull_CopyAssign((QJSPrimitiveNull*)self, (QJSPrimitiveNull*)other);
}

void q_jsprimitivenull_move_assign(void* self, void* other) {
    QJSPrimitiveNull_MoveAssign((QJSPrimitiveNull*)self, (QJSPrimitiveNull*)other);
}

void q_jsprimitivenull_delete(void* self) {
    QJSPrimitiveNull_Delete((QJSPrimitiveNull*)(self));
}

QJSPrimitiveValue* q_jsprimitivevalue_new() {
    return QJSPrimitiveValue_New();
}

QJSPrimitiveValue* q_jsprimitivevalue_new2(void* undefined) {
    return QJSPrimitiveValue_New2((QJSPrimitiveUndefined*)undefined);
}

QJSPrimitiveValue* q_jsprimitivevalue_new3(void* nullVal) {
    return QJSPrimitiveValue_New3((QJSPrimitiveNull*)nullVal);
}

QJSPrimitiveValue* q_jsprimitivevalue_new4(bool value) {
    return QJSPrimitiveValue_New4(value);
}

QJSPrimitiveValue* q_jsprimitivevalue_new5(int value) {
    return QJSPrimitiveValue_New5(value);
}

QJSPrimitiveValue* q_jsprimitivevalue_new6(double value) {
    return QJSPrimitiveValue_New6(value);
}

QJSPrimitiveValue* q_jsprimitivevalue_new7(const char* string) {
    return QJSPrimitiveValue_New7(qstring(string));
}

QJSPrimitiveValue* q_jsprimitivevalue_new8(void* type, void* value) {
    return QJSPrimitiveValue_New8((QMetaType*)type, value);
}

QJSPrimitiveValue* q_jsprimitivevalue_new9(void* type) {
    return QJSPrimitiveValue_New9((QMetaType*)type);
}

QJSPrimitiveValue* q_jsprimitivevalue_new10(void* variant) {
    return QJSPrimitiveValue_New10((QVariant*)variant);
}

QJSPrimitiveValue* q_jsprimitivevalue_new11(void* param1) {
    return QJSPrimitiveValue_New11((QJSPrimitiveValue*)param1);
}

uint8_t q_jsprimitivevalue_type(void* self) {
    return QJSPrimitiveValue_Type((QJSPrimitiveValue*)self);
}

QMetaType* q_jsprimitivevalue_meta_type(void* self) {
    return QJSPrimitiveValue_MetaType((QJSPrimitiveValue*)self);
}

void* q_jsprimitivevalue_data(void* self) {
    return QJSPrimitiveValue_Data((QJSPrimitiveValue*)self);
}

const void* q_jsprimitivevalue_data2(void* self) {
    return QJSPrimitiveValue_Data2((QJSPrimitiveValue*)self);
}

const void* q_jsprimitivevalue_const_data(void* self) {
    return QJSPrimitiveValue_ConstData((QJSPrimitiveValue*)self);
}

bool q_jsprimitivevalue_to_boolean(void* self) {
    return QJSPrimitiveValue_ToBoolean((QJSPrimitiveValue*)self);
}

int32_t q_jsprimitivevalue_to_integer(void* self) {
    return QJSPrimitiveValue_ToInteger((QJSPrimitiveValue*)self);
}

double q_jsprimitivevalue_to_double(void* self) {
    return QJSPrimitiveValue_ToDouble((QJSPrimitiveValue*)self);
}

const char* q_jsprimitivevalue_to_string(void* self) {
    libqt_string _str = QJSPrimitiveValue_ToString((QJSPrimitiveValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_jsprimitivevalue_to_variant(void* self) {
    return QJSPrimitiveValue_ToVariant((QJSPrimitiveValue*)self);
}

QJSPrimitiveValue* q_jsprimitivevalue_operator_plus_plus(void* self) {
    return QJSPrimitiveValue_OperatorPlusPlus((QJSPrimitiveValue*)self);
}

QJSPrimitiveValue* q_jsprimitivevalue_operator_plus_plus2(void* self, int param1) {
    return QJSPrimitiveValue_OperatorPlusPlus2((QJSPrimitiveValue*)self, param1);
}

QJSPrimitiveValue* q_jsprimitivevalue_operator_minus_minus(void* self) {
    return QJSPrimitiveValue_OperatorMinusMinus((QJSPrimitiveValue*)self);
}

QJSPrimitiveValue* q_jsprimitivevalue_operator_minus_minus2(void* self, int param1) {
    return QJSPrimitiveValue_OperatorMinusMinus2((QJSPrimitiveValue*)self, param1);
}

QJSPrimitiveValue* q_jsprimitivevalue_operator_plus(void* self) {
    return QJSPrimitiveValue_OperatorPlus((QJSPrimitiveValue*)self);
}

QJSPrimitiveValue* q_jsprimitivevalue_operator_minus(void* self) {
    return QJSPrimitiveValue_OperatorMinus((QJSPrimitiveValue*)self);
}

bool q_jsprimitivevalue_strictly_equals(void* self, void* other) {
    return QJSPrimitiveValue_StrictlyEquals((QJSPrimitiveValue*)self, (QJSPrimitiveValue*)other);
}

bool q_jsprimitivevalue_equals(void* self, void* other) {
    return QJSPrimitiveValue_Equals((QJSPrimitiveValue*)self, (QJSPrimitiveValue*)other);
}

void q_jsprimitivevalue_delete(void* self) {
    QJSPrimitiveValue_Delete((QJSPrimitiveValue*)(self));
}
