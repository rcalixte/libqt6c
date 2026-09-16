#include <qsgmaterialtype.h>
#include "libqsgmaterialtype.hpp"
#include "libqsgmaterialtype.hxx"

QSGMaterialType* QSGMaterialType_New(const QSGMaterialType* other) {
    return new QSGMaterialType(*other);
}

QSGMaterialType* QSGMaterialType_New2(QSGMaterialType* other) {
    return new QSGMaterialType(std::move(*other));
}

void QSGMaterialType_CopyAssign(QSGMaterialType* self, QSGMaterialType* other) {
    *self = *other;
}

void QSGMaterialType_MoveAssign(QSGMaterialType* self, QSGMaterialType* other) {
    *self = std::move(*other);
}

void QSGMaterialType_Delete(QSGMaterialType* self) {
    delete self;
}
