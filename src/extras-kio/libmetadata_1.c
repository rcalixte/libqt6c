#include "../libqvariant.hpp"
#include "libmetadata_1.hpp"
#include "libmetadata_1.h"

KIO__MetaData* k_io__metadata_new() {
    return KIO__MetaData_new();
}

KIO__MetaData* k_io__metadata_new2(libqt_map /* of const char* to const char* */ metaData) {
    return KIO__MetaData_new2(metaData);
}

KIO__MetaData* k_io__metadata_new3(libqt_map /* of const char* to QVariant* */ param1) {
    return KIO__MetaData_new3(param1);
}

KIO__MetaData* k_io__metadata_new4(void* param1) {
    return KIO__MetaData_new4((KIO__MetaData*)param1);
}

KIO__MetaData* k_io__metadata_operator_plus_assign(void* self, libqt_map /* of const char* to const char* */ metaData) {
    return KIO__MetaData_OperatorPlusAssign((KIO__MetaData*)self, metaData);
}

KIO__MetaData* k_io__metadata_operator_plus_assign2(void* self, libqt_map /* of const char* to QVariant* */ metaData) {
    return KIO__MetaData_OperatorPlusAssign2((KIO__MetaData*)self, metaData);
}

void k_io__metadata_operator_assign(void* self, libqt_map /* of const char* to QVariant* */ metaData) {
    KIO__MetaData_OperatorAssign((KIO__MetaData*)self, metaData);
}

QVariant* k_io__metadata_to_variant(void* self) {
    return KIO__MetaData_ToVariant((KIO__MetaData*)self);
}

void k_io__metadata_operator_assign2(void* self, void* param1) {
    KIO__MetaData_OperatorAssign2((KIO__MetaData*)self, (KIO__MetaData*)param1);
}

void k_io__metadata_delete(void* self) {
    KIO__MetaData_Delete((KIO__MetaData*)(self));
}
