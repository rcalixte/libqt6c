#include <qstringbuilder.h>
#include "libqstringbuilder.hpp"
#include "libqstringbuilder.hxx"

QAbstractConcatenable* QAbstractConcatenable_new(QAbstractConcatenable* other) {
    return new QAbstractConcatenable(*other);
}

QAbstractConcatenable* QAbstractConcatenable_new2(QAbstractConcatenable* other) {
    return new QAbstractConcatenable(std::move(*other));
}

void QAbstractConcatenable_CopyAssign(QAbstractConcatenable* self, QAbstractConcatenable* other) {
    *self = *other;
}

void QAbstractConcatenable_MoveAssign(QAbstractConcatenable* self, QAbstractConcatenable* other) {
    *self = std::move(*other);
}

void QAbstractConcatenable_Delete(QAbstractConcatenable* self) {
    delete self;
}
