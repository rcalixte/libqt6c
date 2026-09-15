#include "libqjsvalue.hpp"
#include "libqjsvalueiterator.hpp"
#include "libqjsvalueiterator.h"

QJSValueIterator* q_jsvalueiterator_new(void* value) {
    return QJSValueIterator_New((QJSValue*)value);
}

bool q_jsvalueiterator_has_next(void* self) {
    return QJSValueIterator_HasNext((QJSValueIterator*)self);
}

bool q_jsvalueiterator_next(void* self) {
    return QJSValueIterator_Next((QJSValueIterator*)self);
}

const char* q_jsvalueiterator_name(void* self) {
    libqt_string _str = QJSValueIterator_Name((QJSValueIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJSValue* q_jsvalueiterator_value(void* self) {
    return QJSValueIterator_Value((QJSValueIterator*)self);
}

void q_jsvalueiterator_operator_assign(void* self, void* value) {
    QJSValueIterator_OperatorAssign((QJSValueIterator*)self, (QJSValue*)value);
}

void q_jsvalueiterator_delete(void* self) {
    QJSValueIterator_Delete((QJSValueIterator*)(self));
}
