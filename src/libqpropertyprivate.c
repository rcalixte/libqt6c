#include "libqpropertyprivate.hpp"
#include "libqpropertyprivate.h"

QUntypedPropertyData* q_untypedpropertydata_new(void* other) {
    return QUntypedPropertyData_new((QUntypedPropertyData*)other);
}

QUntypedPropertyData* q_untypedpropertydata_new2(void* other) {
    return QUntypedPropertyData_new2((QUntypedPropertyData*)other);
}

void q_untypedpropertydata_copy_assign(void* self, void* other) {
    QUntypedPropertyData_CopyAssign((QUntypedPropertyData*)self, (QUntypedPropertyData*)other);
}

void q_untypedpropertydata_move_assign(void* self, void* other) {
    QUntypedPropertyData_MoveAssign((QUntypedPropertyData*)self, (QUntypedPropertyData*)other);
}

void q_untypedpropertydata_delete(void* self) {
    QUntypedPropertyData_Delete((QUntypedPropertyData*)(self));
}
