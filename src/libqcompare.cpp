#include <QPartialOrdering>
#include <qcompare.h>
#include "libqcompare.hpp"
#include "libqcompare.hxx"

QPartialOrdering* QPartialOrdering_new(QPartialOrdering* other) {
    return new QPartialOrdering(*other);
}

QPartialOrdering* QPartialOrdering_new2(QPartialOrdering* other) {
    return new QPartialOrdering(std::move(*other));
}

QPartialOrdering* QPartialOrdering_new3(QPartialOrdering* param1) {
    return new QPartialOrdering(*param1);
}

void QPartialOrdering_CopyAssign(QPartialOrdering* self, QPartialOrdering* other) {
    *self = *other;
}

void QPartialOrdering_MoveAssign(QPartialOrdering* self, QPartialOrdering* other) {
    *self = std::move(*other);
}

void QPartialOrdering_Delete(QPartialOrdering* self) {
    delete self;
}
