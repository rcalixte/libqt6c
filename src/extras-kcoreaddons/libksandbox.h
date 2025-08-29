#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKSANDBOX_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKSANDBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/ksandbox.html

/// [Qt documentation](https://api-staging.kde.org/ksandbox.html#isInside)
///
bool k_sandbox_is_inside();

/// [Qt documentation](https://api-staging.kde.org/ksandbox.html#isFlatpak)
///
bool k_sandbox_is_flatpak();

/// [Qt documentation](https://api-staging.kde.org/ksandbox.html#isSnap)
///
bool k_sandbox_is_snap();

/// [Qt documentation](https://api-staging.kde.org/ksandbox.html#makeHostContext)
///
/// @param param1 QProcess*
KSandbox__ProcessContext* k_sandbox_make_host_context(void* param1);

/// [Qt documentation](https://api-staging.kde.org/ksandbox.html#startHostProcess)
///
/// @param param1 QProcess*
/// @param param2 flag of enum QIODeviceBase__OpenModeFlag
void k_sandbox_start_host_process(void* param1, int32_t param2);

/// https://api-staging.kde.org/ksandbox-processcontext.html

/// k_sandbox__processcontext_new constructs a new KSandbox::ProcessContext object.
///
/// @param param1 KSandbox__ProcessContext*
KSandbox__ProcessContext* k_sandbox__processcontext_new(void* param1);

/// Delete this object from C++ memory.
///
/// @param self KSandbox__ProcessContext*
void k_sandbox__processcontext_delete(void* self);

#endif
