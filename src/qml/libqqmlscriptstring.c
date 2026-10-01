#include "libqqmlscriptstring.hpp"
#include "libqqmlscriptstring.h"

QQmlScriptString* q_qmlscriptstring_new() {
    return QQmlScriptString_New();
}

QQmlScriptString* q_qmlscriptstring_new2(const void* param1) {
    return QQmlScriptString_New2((QQmlScriptString*)param1);
}

void q_qmlscriptstring_operator_assign(void* self, const void* param1) {
    QQmlScriptString_OperatorAssign((QQmlScriptString*)self, (QQmlScriptString*)param1);
}

bool q_qmlscriptstring_operator_equal(const void* self, const void* param1) {
    return QQmlScriptString_OperatorEqual((QQmlScriptString*)self, (QQmlScriptString*)param1);
}

bool q_qmlscriptstring_operator_not_equal(const void* self, const void* param1) {
    return QQmlScriptString_OperatorNotEqual((QQmlScriptString*)self, (QQmlScriptString*)param1);
}

bool q_qmlscriptstring_is_empty(const void* self) {
    return QQmlScriptString_IsEmpty((QQmlScriptString*)self);
}

bool q_qmlscriptstring_is_undefined_literal(const void* self) {
    return QQmlScriptString_IsUndefinedLiteral((QQmlScriptString*)self);
}

bool q_qmlscriptstring_is_null_literal(const void* self) {
    return QQmlScriptString_IsNullLiteral((QQmlScriptString*)self);
}

const char* q_qmlscriptstring_string_literal(const void* self) {
    libqt_string _str = QQmlScriptString_StringLiteral((QQmlScriptString*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_qmlscriptstring_number_literal(const void* self, bool* ok) {
    return QQmlScriptString_NumberLiteral((QQmlScriptString*)self, (bool*)ok);
}

bool q_qmlscriptstring_boolean_literal(const void* self, bool* ok) {
    return QQmlScriptString_BooleanLiteral((QQmlScriptString*)self, (bool*)ok);
}

void q_qmlscriptstring_delete(void* self) {
    QQmlScriptString_Delete((QQmlScriptString*)(self));
}
