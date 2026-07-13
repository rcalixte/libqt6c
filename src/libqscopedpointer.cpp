#include <QScopedPointerPodDeleter>
#include <qscopedpointer.h>
#include "libqscopedpointer.hpp"
#include "libqscopedpointer.hxx"

QScopedPointerPodDeleter* QScopedPointerPodDeleter_New(const QScopedPointerPodDeleter* other) {
    return new QScopedPointerPodDeleter(*other);
}

QScopedPointerPodDeleter* QScopedPointerPodDeleter_New2(QScopedPointerPodDeleter* other) {
    return new QScopedPointerPodDeleter(std::move(*other));
}

void QScopedPointerPodDeleter_CopyAssign(QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other) {
    *self = *other;
}

void QScopedPointerPodDeleter_MoveAssign(QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other) {
    *self = std::move(*other);
}

void QScopedPointerPodDeleter_Cleanup(void* pointer) {
    QScopedPointerPodDeleter::cleanup(pointer);
}

void QScopedPointerPodDeleter_OperatorCall(const QScopedPointerPodDeleter* self, void* pointer) {
    self->operator()(pointer);
}

void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self) {
    delete self;
}
