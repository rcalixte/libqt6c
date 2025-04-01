#include "libqshareddata.hpp"
#include "libqshareddata.h"

QSharedData* q_shareddata_new() {
    return QSharedData_new();
}

QSharedData* q_shareddata_new2(void* param1) {
    return QSharedData_new2((QSharedData*)param1);
}

void q_shareddata_delete(void* self) {
    QSharedData_Delete((QSharedData*)(self));
}

QAdoptSharedDataTag* q_adoptshareddatatag_new(void* other) {
    return QAdoptSharedDataTag_new((QAdoptSharedDataTag*)other);
}

QAdoptSharedDataTag* q_adoptshareddatatag_new2(void* other) {
    return QAdoptSharedDataTag_new2((QAdoptSharedDataTag*)other);
}

QAdoptSharedDataTag* q_adoptshareddatatag_new3() {
    return QAdoptSharedDataTag_new3();
}

void q_adoptshareddatatag_copy_assign(void* self, void* other) {
    QAdoptSharedDataTag_CopyAssign((QAdoptSharedDataTag*)self, (QAdoptSharedDataTag*)other);
}

void q_adoptshareddatatag_move_assign(void* self, void* other) {
    QAdoptSharedDataTag_MoveAssign((QAdoptSharedDataTag*)self, (QAdoptSharedDataTag*)other);
}

void q_adoptshareddatatag_delete(void* self) {
    QAdoptSharedDataTag_Delete((QAdoptSharedDataTag*)(self));
}
