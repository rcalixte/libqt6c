#pragma once
#ifndef EXTRAS_ATTICA_LIBPLATFORMDEPENDENT_V2_H
#define EXTRAS_ATTICA_LIBPLATFORMDEPENDENT_V2_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-platformdependentv2.html)

/// [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
///
/// @param self Attica__PlatformDependentV2*
/// @param param1 Attica__PlatformDependentV2*
///
void k_attica__platformdependentv2_operator_assign(void* self, const void* param1);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
///
/// @param self Attica__PlatformDependentV2*
/// @param nam QNetworkAccessManager*
///
void k_attica__platformdependentv2_set_nam(void* self, void* nam);

/// Delete this object from C++ memory.
///
/// @param self Attica__PlatformDependentV2*
///
void k_attica__platformdependentv2_delete(void* self);

#endif
