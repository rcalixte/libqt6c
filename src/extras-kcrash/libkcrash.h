#pragma once
#ifndef SRC_EXTRAS_KCRASH_QT6C_LIBKCRASH_H
#define SRC_EXTRAS_KCRASH_QT6C_LIBKCRASH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcrash.html)

/// [Upstream resources](https://api.kde.org/kcrash.html#initialize)
///
void k_crash_initialize();

/// [Upstream resources](https://api.kde.org/kcrash.html#defaultCrashHandler)
///
/// @param signal int
///
void k_crash_default_crash_handler(int signal);

/// [Upstream resources](https://api.kde.org/kcrash.html#setCrashHandler)
///
/// @param handler void func(int param1)
///
void k_crash_set_crash_handler(void (*handler)(int funcparam1));

/// [Upstream resources](https://api.kde.org/kcrash.html#crashHandler)
///
/// @return void (*KCrash__HandlerType)(int funcparam1)
///
KCrash__HandlerType k_crash_crash_handler();

/// [Upstream resources](https://api.kde.org/kcrash.html#setEmergencySaveFunction)
///
/// @param saveFunction void func(int param1)
///
void k_crash_set_emergency_save_function(void (*saveFunction)(int funcparam1));

/// [Upstream resources](https://api.kde.org/kcrash.html#emergencySaveFunction)
///
/// @return void (*KCrash__HandlerType)(int funcparam1)
///
KCrash__HandlerType k_crash_emergency_save_function();

/// [Upstream resources](https://api.kde.org/kcrash.html#setFlags)
///
/// @param flags flag of enum KCrash__CrashFlag
///
void k_crash_set_flags(int32_t flags);

/// [Upstream resources](https://api.kde.org/kcrash.html#setDrKonqiEnabled)
///
/// @param enabled bool
///
void k_crash_set_dr_konqi_enabled(bool enabled);

/// [Upstream resources](https://api.kde.org/kcrash.html#isDrKonqiEnabled)
///
bool k_crash_is_dr_konqi_enabled();

/// [Upstream resources](https://api.kde.org/kcrash.html#setErrorMessage)
///
/// @param message const char*
///
void k_crash_set_error_message(const char* message);

/// [Upstream resources](https://api.kde.org/kcrash.html#setErrorTags)
///
/// @param details libqt_map of const char* to const char*
///
void k_crash_set_error_tags(libqt_map details);

/// [Upstream resources](https://api.kde.org/kcrash.html#setErrorExtraData)
///
/// @param details libqt_map of const char* to const char*
///
void k_crash_set_error_extra_data(libqt_map details);

/// [Upstream resources](https://api.kde.org/kcrash.html#setGPUData)
///
/// @param data libqt_map of const char* to QVariant*
///
void k_crash_set_g_p_u_data(libqt_map data);

/// [Upstream resources](https://api.kde.org/kcrash.html#public-types)

typedef enum {
    KCRASH_CRASHFLAG_KEEPFDS = 1,
    KCRASH_CRASHFLAG_SAFERDIALOG = 2,
    KCRASH_CRASHFLAG_ALWAYSDIRECTLY = 4,
    KCRASH_CRASHFLAG_AUTORESTART = 8
} KCrash__CrashFlag;

#endif
