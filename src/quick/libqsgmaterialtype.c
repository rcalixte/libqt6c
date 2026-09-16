#include "libqsgmaterialtype.hpp"
#include "libqsgmaterialtype.h"

QSGMaterialType* q_sgmaterialtype_new(void* other) {
    return QSGMaterialType_New((QSGMaterialType*)other);
}

QSGMaterialType* q_sgmaterialtype_new2(void* other) {
    return QSGMaterialType_New2((QSGMaterialType*)other);
}

void q_sgmaterialtype_copy_assign(void* self, void* other) {
    QSGMaterialType_CopyAssign((QSGMaterialType*)self, (QSGMaterialType*)other);
}

void q_sgmaterialtype_move_assign(void* self, void* other) {
    QSGMaterialType_MoveAssign((QSGMaterialType*)self, (QSGMaterialType*)other);
}

void q_sgmaterialtype_delete(void* self) {
    QSGMaterialType_Delete((QSGMaterialType*)(self));
}
