#include "libkconfiggroup.hpp"
#include "libkconfigbase.hpp"
#include "libkconfigbase.h"

bool k_configbase_has_group(const void* self, const char* group) {
    return KConfigBase_HasGroup((KConfigBase*)self, qstring(group));
}

KConfigGroup* k_configbase_group(void* self, const char* group) {
    return KConfigBase_Group((KConfigBase*)self, qstring(group));
}

const KConfigGroup* k_configbase_group2(const void* self, const char* group) {
    return KConfigBase_Group2((KConfigBase*)self, qstring(group));
}

void k_configbase_delete_group(void* self, const char* group) {
    KConfigBase_DeleteGroup((KConfigBase*)self, qstring(group));
}

bool k_configbase_is_group_immutable(const void* self, const char* group) {
    return KConfigBase_IsGroupImmutable((KConfigBase*)self, qstring(group));
}

void k_configbase_operator_assign(void* self, const void* param1) {
    KConfigBase_OperatorAssign((KConfigBase*)self, (KConfigBase*)param1);
}

void k_configbase_delete_group2(void* self, const char* group, int32_t flags) {
    KConfigBase_DeleteGroup2((KConfigBase*)self, qstring(group), flags);
}

void k_configbase_delete(void* self) {
    KConfigBase_Delete((KConfigBase*)(self));
}
