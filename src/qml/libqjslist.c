#include "libqjslist.hpp"
#include "libqjslist.h"

QJSListIndexClamp* q_jslistindexclamp_new(void* other) {
    return QJSListIndexClamp_New((QJSListIndexClamp*)other);
}

QJSListIndexClamp* q_jslistindexclamp_new2(void* other) {
    return QJSListIndexClamp_New2((QJSListIndexClamp*)other);
}

QJSListIndexClamp* q_jslistindexclamp_new3(void* param1) {
    return QJSListIndexClamp_New3((QJSListIndexClamp*)param1);
}

QJSListIndexClamp* q_jslistindexclamp_new4() {
    return QJSListIndexClamp_New4();
}

void q_jslistindexclamp_copy_assign(void* self, void* other) {
    QJSListIndexClamp_CopyAssign((QJSListIndexClamp*)self, (QJSListIndexClamp*)other);
}

void q_jslistindexclamp_move_assign(void* self, void* other) {
    QJSListIndexClamp_MoveAssign((QJSListIndexClamp*)self, (QJSListIndexClamp*)other);
}

intptr_t q_jslistindexclamp_clamp(intptr_t start, intptr_t max) {
    return QJSListIndexClamp_Clamp(start, max);
}

void q_jslistindexclamp_operator_assign(void* self, void* param1) {
    QJSListIndexClamp_OperatorAssign((QJSListIndexClamp*)self, (QJSListIndexClamp*)param1);
}

intptr_t q_jslistindexclamp_clamp3(intptr_t start, intptr_t max, intptr_t min) {
    return QJSListIndexClamp_Clamp3(start, max, min);
}

void q_jslistindexclamp_delete(void* self) {
    QJSListIndexClamp_Delete((QJSListIndexClamp*)(self));
}

bool q_jslistforiniterator_has_next(void* self) {
    return QJSListForInIterator_HasNext((QJSListForInIterator*)self);
}

intptr_t q_jslistforiniterator_next(void* self) {
    return QJSListForInIterator_Next((QJSListForInIterator*)self);
}

void q_jslistforiniterator_delete(void* self) {
    QJSListForInIterator_Delete((QJSListForInIterator*)(self));
}

void q_jslistforofiterator_init(void* self) {
    QJSListForOfIterator_Init((QJSListForOfIterator*)self);
}

void q_jslistforofiterator_delete(void* self) {
    QJSListForOfIterator_Delete((QJSListForOfIterator*)(self));
}
