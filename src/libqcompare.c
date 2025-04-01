#include "libqcompare.hpp"
#include "libqcompare.h"

QPartialOrdering* q_partialordering_new(void* other) {
    return QPartialOrdering_new((QPartialOrdering*)other);
}

QPartialOrdering* q_partialordering_new2(void* other) {
    return QPartialOrdering_new2((QPartialOrdering*)other);
}

QPartialOrdering* q_partialordering_new3(void* param1) {
    return QPartialOrdering_new3((QPartialOrdering*)param1);
}

void q_partialordering_copy_assign(void* self, void* other) {
    QPartialOrdering_CopyAssign((QPartialOrdering*)self, (QPartialOrdering*)other);
}

void q_partialordering_move_assign(void* self, void* other) {
    QPartialOrdering_MoveAssign((QPartialOrdering*)self, (QPartialOrdering*)other);
}

void q_partialordering_delete(void* self) {
    QPartialOrdering_Delete((QPartialOrdering*)(self));
}
