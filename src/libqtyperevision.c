#include "libqtyperevision.hpp"
#include "libqtyperevision.h"

QTypeRevision* q_typerevision_new(void* other) {
    return QTypeRevision_new((QTypeRevision*)other);
}

QTypeRevision* q_typerevision_new2(void* other) {
    return QTypeRevision_new2((QTypeRevision*)other);
}

QTypeRevision* q_typerevision_new3() {
    return QTypeRevision_new3();
}

QTypeRevision* q_typerevision_new4(void* param1) {
    return QTypeRevision_new4((QTypeRevision*)param1);
}

void q_typerevision_copy_assign(void* self, void* other) {
    QTypeRevision_CopyAssign((QTypeRevision*)self, (QTypeRevision*)other);
}

void q_typerevision_move_assign(void* self, void* other) {
    QTypeRevision_MoveAssign((QTypeRevision*)self, (QTypeRevision*)other);
}

QTypeRevision* q_typerevision_zero() {
    return QTypeRevision_Zero();
}

bool q_typerevision_has_major_version(void* self) {
    return QTypeRevision_HasMajorVersion((QTypeRevision*)self);
}

unsigned char q_typerevision_major_version(void* self) {
    return QTypeRevision_MajorVersion((QTypeRevision*)self);
}

bool q_typerevision_has_minor_version(void* self) {
    return QTypeRevision_HasMinorVersion((QTypeRevision*)self);
}

unsigned char q_typerevision_minor_version(void* self) {
    return QTypeRevision_MinorVersion((QTypeRevision*)self);
}

bool q_typerevision_is_valid(void* self) {
    return QTypeRevision_IsValid((QTypeRevision*)self);
}

void q_typerevision_delete(void* self) {
    QTypeRevision_Delete((QTypeRevision*)(self));
}
