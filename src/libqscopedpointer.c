#include "libqscopedpointer.hpp"
#include "libqscopedpointer.h"

QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new(void* other) {
    return QScopedPointerPodDeleter_new((QScopedPointerPodDeleter*)other);
}

QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new2(void* other) {
    return QScopedPointerPodDeleter_new2((QScopedPointerPodDeleter*)other);
}

void q_scopedpointerpoddeleter_copy_assign(void* self, void* other) {
    QScopedPointerPodDeleter_CopyAssign((QScopedPointerPodDeleter*)self, (QScopedPointerPodDeleter*)other);
}

void q_scopedpointerpoddeleter_move_assign(void* self, void* other) {
    QScopedPointerPodDeleter_MoveAssign((QScopedPointerPodDeleter*)self, (QScopedPointerPodDeleter*)other);
}

void q_scopedpointerpoddeleter_cleanup(void* pointer) {
    QScopedPointerPodDeleter_Cleanup(pointer);
}

void q_scopedpointerpoddeleter_operator_call(void* self, void* pointer) {
    QScopedPointerPodDeleter_OperatorCall((QScopedPointerPodDeleter*)self, pointer);
}

void q_scopedpointerpoddeleter_delete(void* self) {
    QScopedPointerPodDeleter_Delete((QScopedPointerPodDeleter*)(self));
}
