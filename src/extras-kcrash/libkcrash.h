#pragma once
#ifndef SRC_EXTRAS_KCRASH_QT6C_LIBKCRASH_H
#define SRC_EXTRAS_KCRASH_QT6C_LIBKCRASH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcrash.html

/// [Qt documentation](https://api.kde.org/kcrash.html#initialize)
///
void k_crash_initialize();

/// [Qt documentation](https://api.kde.org/kcrash.html#defaultCrashHandler)
///
/// @param param1 int
void k_crash_default_crash_handler(int param1);

/// [Qt documentation](https://api.kde.org/kcrash.html#setFlags)
///
/// @param param1 flag of enum KCrash__CrashFlag
void k_crash_set_flags(int32_t param1);

/// [Qt documentation](https://api.kde.org/kcrash.html#setDrKonqiEnabled)
///
/// @param param1 bool
void k_crash_set_dr_konqi_enabled(bool param1);

/// [Qt documentation](https://api.kde.org/kcrash.html#isDrKonqiEnabled)
///
bool k_crash_is_dr_konqi_enabled();

/// [Qt documentation](https://api.kde.org/kcrash.html#setErrorMessage)
///
/// @param param1 const char*
void k_crash_set_error_message(const char* param1);

/// [Qt documentation](https://api.kde.org/kcrash.html#setErrorTags)
///
/// @param param1 libqt_map /* of const char* to const char* */
void k_crash_set_error_tags(libqt_map /* of const char* to const char* */ param1);

/// [Qt documentation](https://api.kde.org/kcrash.html#setErrorExtraData)
///
/// @param param1 libqt_map /* of const char* to const char* */
void k_crash_set_error_extra_data(libqt_map /* of const char* to const char* */ param1);

/// [Qt documentation](https://api.kde.org/kcrash.html#setGPUData)
///
/// @param param1 libqt_map /* of const char* to QVariant* */
void k_crash_set_g_p_u_data(libqt_map /* of const char* to QVariant* */ param1);

/// https://api.kde.org/kcrash.html#types

typedef enum {
    KCRASH_CRASHFLAG_KEEPFDS = 1,
    KCRASH_CRASHFLAG_SAFERDIALOG = 2,
    KCRASH_CRASHFLAG_ALWAYSDIRECTLY = 4,
    KCRASH_CRASHFLAG_AUTORESTART = 8
} KCrash__CrashFlag;

#endif
