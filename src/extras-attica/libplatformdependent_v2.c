#include "libplatformdependent.hpp"
#include "../libqiodevice.hpp"
#include "../network/libqnetworkreply.hpp"
#include "../network/libqnetworkrequest.hpp"
#include "libplatformdependent_v2.hpp"
#include "libplatformdependent_v2.h"

void k_attica__platformdependentv2_operator_assign(void* self, const void* param1) {
    Attica__PlatformDependentV2_OperatorAssign((Attica__PlatformDependentV2*)self, (Attica__PlatformDependentV2*)param1);
}

void k_attica__platformdependentv2_set_nam(void* self, void* nam) {
    Attica__PlatformDependent_SetNam((Attica__PlatformDependent*)self, (QNetworkAccessManager*)nam);
}

void k_attica__platformdependentv2_delete(void* self) {
    Attica__PlatformDependentV2_Delete((Attica__PlatformDependentV2*)(self));
}
