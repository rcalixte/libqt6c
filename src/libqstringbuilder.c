#include "libqstringbuilder.hpp"
#include "libqstringbuilder.h"

QAbstractConcatenable* q_abstractconcatenable_new(void* other) {
    return QAbstractConcatenable_new((QAbstractConcatenable*)other);
}

QAbstractConcatenable* q_abstractconcatenable_new2(void* other) {
    return QAbstractConcatenable_new2((QAbstractConcatenable*)other);
}

void q_abstractconcatenable_copy_assign(void* self, void* other) {
    QAbstractConcatenable_CopyAssign((QAbstractConcatenable*)self, (QAbstractConcatenable*)other);
}

void q_abstractconcatenable_move_assign(void* self, void* other) {
    QAbstractConcatenable_MoveAssign((QAbstractConcatenable*)self, (QAbstractConcatenable*)other);
}

void q_abstractconcatenable_delete(void* self) {
    QAbstractConcatenable_Delete((QAbstractConcatenable*)(self));
}
