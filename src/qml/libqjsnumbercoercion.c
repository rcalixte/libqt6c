#include "libqjsnumbercoercion.hpp"
#include "libqjsnumbercoercion.h"

QJSNumberCoercion* q_jsnumbercoercion_new(void* other) {
    return QJSNumberCoercion_New((QJSNumberCoercion*)other);
}

QJSNumberCoercion* q_jsnumbercoercion_new2(void* other) {
    return QJSNumberCoercion_New2((QJSNumberCoercion*)other);
}

QJSNumberCoercion* q_jsnumbercoercion_new3(void* param1) {
    return QJSNumberCoercion_New3((QJSNumberCoercion*)param1);
}

void q_jsnumbercoercion_copy_assign(void* self, void* other) {
    QJSNumberCoercion_CopyAssign((QJSNumberCoercion*)self, (QJSNumberCoercion*)other);
}

void q_jsnumbercoercion_move_assign(void* self, void* other) {
    QJSNumberCoercion_MoveAssign((QJSNumberCoercion*)self, (QJSNumberCoercion*)other);
}

bool q_jsnumbercoercion_is_integer(double d) {
    return QJSNumberCoercion_IsInteger(d);
}

bool q_jsnumbercoercion_is_array_index(double d) {
    return QJSNumberCoercion_IsArrayIndex(d);
}

bool q_jsnumbercoercion_is_array_index2(int64_t i) {
    return QJSNumberCoercion_IsArrayIndex2(i);
}

bool q_jsnumbercoercion_is_array_index3(uint64_t i) {
    return QJSNumberCoercion_IsArrayIndex3(i);
}

int32_t q_jsnumbercoercion_to_integer(double d) {
    return QJSNumberCoercion_ToInteger(d);
}

bool q_jsnumbercoercion_equals(double lhs, double rhs) {
    return QJSNumberCoercion_Equals(lhs, rhs);
}

double q_jsnumbercoercion_round_towards0(double d) {
    return QJSNumberCoercion_RoundTowards0(d);
}

void q_jsnumbercoercion_delete(void* self) {
    QJSNumberCoercion_Delete((QJSNumberCoercion*)(self));
}
