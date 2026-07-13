#include "libqflags.hpp"
#include "libqflags.h"

QFlag* q_flag_new(void* other) {
    return QFlag_New((QFlag*)other);
}

QFlag* q_flag_new2(void* other) {
    return QFlag_New2((QFlag*)other);
}

QFlag* q_flag_new3(int value) {
    return QFlag_New3(value);
}

QFlag* q_flag_new4(uint32_t value) {
    return QFlag_New4(value);
}

QFlag* q_flag_new5(short value) {
    return QFlag_New5(value);
}

QFlag* q_flag_new6(uint16_t value) {
    return QFlag_New6(value);
}

QFlag* q_flag_new7(void* param1) {
    return QFlag_New7((QFlag*)param1);
}

void q_flag_copy_assign(void* self, void* other) {
    QFlag_CopyAssign((QFlag*)self, (QFlag*)other);
}

void q_flag_move_assign(void* self, void* other) {
    QFlag_MoveAssign((QFlag*)self, (QFlag*)other);
}

int32_t q_flag_to_int(void* self) {
    return QFlag_ToInt((QFlag*)self);
}

uint32_t q_flag_to_unsigned_int(void* self) {
    return QFlag_ToUnsignedInt((QFlag*)self);
}

void q_flag_delete(void* self) {
    QFlag_Delete((QFlag*)(self));
}

QIncompatibleFlag* q_incompatibleflag_new(void* other) {
    return QIncompatibleFlag_New((QIncompatibleFlag*)other);
}

QIncompatibleFlag* q_incompatibleflag_new2(void* other) {
    return QIncompatibleFlag_New2((QIncompatibleFlag*)other);
}

QIncompatibleFlag* q_incompatibleflag_new3(int i) {
    return QIncompatibleFlag_New3(i);
}

QIncompatibleFlag* q_incompatibleflag_new4(void* param1) {
    return QIncompatibleFlag_New4((QIncompatibleFlag*)param1);
}

void q_incompatibleflag_copy_assign(void* self, void* other) {
    QIncompatibleFlag_CopyAssign((QIncompatibleFlag*)self, (QIncompatibleFlag*)other);
}

void q_incompatibleflag_move_assign(void* self, void* other) {
    QIncompatibleFlag_MoveAssign((QIncompatibleFlag*)self, (QIncompatibleFlag*)other);
}

int32_t q_incompatibleflag_to_int(void* self) {
    return QIncompatibleFlag_ToInt((QIncompatibleFlag*)self);
}

void q_incompatibleflag_delete(void* self) {
    QIncompatibleFlag_Delete((QIncompatibleFlag*)(self));
}
