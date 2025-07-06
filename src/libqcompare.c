#include "libqcompare.hpp"
#include "libqcompare.h"

partial_ordering* q_partial_ordering_new(void* other) {
    return partial_ordering_new((partial_ordering*)other);
}

partial_ordering* q_partial_ordering_new2(void* other) {
    return partial_ordering_new2((partial_ordering*)other);
}

partial_ordering* q_partial_ordering_new3(void* param1) {
    return partial_ordering_new3((partial_ordering*)param1);
}

void q_partial_ordering_copy_assign(void* self, void* other) {
    partial_ordering_CopyAssign((partial_ordering*)self, (partial_ordering*)other);
}

void q_partial_ordering_move_assign(void* self, void* other) {
    partial_ordering_MoveAssign((partial_ordering*)self, (partial_ordering*)other);
}

void q_partial_ordering_delete(void* self) {
    partial_ordering_Delete((partial_ordering*)(self));
}

weak_ordering* q_weak_ordering_new(void* other) {
    return weak_ordering_new((weak_ordering*)other);
}

weak_ordering* q_weak_ordering_new2(void* other) {
    return weak_ordering_new2((weak_ordering*)other);
}

weak_ordering* q_weak_ordering_new3(void* param1) {
    return weak_ordering_new3((weak_ordering*)param1);
}

void q_weak_ordering_copy_assign(void* self, void* other) {
    weak_ordering_CopyAssign((weak_ordering*)self, (weak_ordering*)other);
}

void q_weak_ordering_move_assign(void* self, void* other) {
    weak_ordering_MoveAssign((weak_ordering*)self, (weak_ordering*)other);
}

partial_ordering* q_weak_ordering_to_partial_ordering(void* self) {
    return weak_ordering_ToPartialOrdering((weak_ordering*)self);
}

void q_weak_ordering_delete(void* self) {
    weak_ordering_Delete((weak_ordering*)(self));
}

strong_ordering* q_strong_ordering_new(void* other) {
    return strong_ordering_new((strong_ordering*)other);
}

strong_ordering* q_strong_ordering_new2(void* other) {
    return strong_ordering_new2((strong_ordering*)other);
}

strong_ordering* q_strong_ordering_new3(void* param1) {
    return strong_ordering_new3((strong_ordering*)param1);
}

void q_strong_ordering_copy_assign(void* self, void* other) {
    strong_ordering_CopyAssign((strong_ordering*)self, (strong_ordering*)other);
}

void q_strong_ordering_move_assign(void* self, void* other) {
    strong_ordering_MoveAssign((strong_ordering*)self, (strong_ordering*)other);
}

partial_ordering* q_strong_ordering_to_partial_ordering(void* self) {
    return strong_ordering_ToPartialOrdering((strong_ordering*)self);
}

weak_ordering* q_strong_ordering_to_weak_ordering(void* self) {
    return strong_ordering_ToWeakOrdering((strong_ordering*)self);
}

void q_strong_ordering_delete(void* self) {
    strong_ordering_Delete((strong_ordering*)(self));
}

QPartialOrdering* q_partialordering_new(void* other) {
    return QPartialOrdering_new((QPartialOrdering*)other);
}

QPartialOrdering* q_partialordering_new2(void* other) {
    return QPartialOrdering_new2((QPartialOrdering*)other);
}

QPartialOrdering* q_partialordering_new3(void* order) {
    return QPartialOrdering_new3((partial_ordering*)order);
}

QPartialOrdering* q_partialordering_new4(void* stdorder) {
    return QPartialOrdering_new4((weak_ordering*)stdorder);
}

QPartialOrdering* q_partialordering_new5(void* stdorder) {
    return QPartialOrdering_new5((strong_ordering*)stdorder);
}

QPartialOrdering* q_partialordering_new6(void* param1) {
    return QPartialOrdering_new6((QPartialOrdering*)param1);
}

void q_partialordering_copy_assign(void* self, void* other) {
    QPartialOrdering_CopyAssign((QPartialOrdering*)self, (QPartialOrdering*)other);
}

void q_partialordering_move_assign(void* self, void* other) {
    QPartialOrdering_MoveAssign((QPartialOrdering*)self, (QPartialOrdering*)other);
}

partial_ordering* q_partialordering_to_partial_ordering(void* self) {
    return QPartialOrdering_ToPartialOrdering((QPartialOrdering*)self);
}

void q_partialordering_delete(void* self) {
    QPartialOrdering_Delete((QPartialOrdering*)(self));
}
