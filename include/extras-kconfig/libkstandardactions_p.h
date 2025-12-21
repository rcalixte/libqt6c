#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKSTANDARDACTIONS_P_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKSTANDARDACTIONS_P_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)

/// k_standardactions__rawstringdata_new constructs a new KStandardActions::RawStringData object.
///
/// @param other KStandardActions__RawStringData*
///
KStandardActions__RawStringData* k_standardactions__rawstringdata_new(void* other);

/// [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)

/// k_standardactions__rawstringdata_new2 constructs a new KStandardActions::RawStringData object and invalidates the source KStandardActions::RawStringData object.
///
/// @param other KStandardActions__RawStringData*
///
KStandardActions__RawStringData* k_standardactions__rawstringdata_new2(void* other);

/// [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)

/// k_standardactions__rawstringdata_new3 constructs a new KStandardActions::RawStringData object.
///
KStandardActions__RawStringData* k_standardactions__rawstringdata_new3();

/// [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)

/// k_standardactions__rawstringdata_new4 constructs a new KStandardActions::RawStringData object.
///
/// @param param1 KStandardActions__RawStringData*
///
KStandardActions__RawStringData* k_standardactions__rawstringdata_new4(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KStandardActions__RawStringData*
///
const char* k_standardactions__rawstringdata_to_string(void* self);

/// Delete this object from C++ memory.
///
/// @param self KStandardActions__RawStringData*
///
void k_standardactions__rawstringdata_delete(void* self);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html)

/// k_standardactions__kstandardactionsinfo_new constructs a new KStandardActions::KStandardActionsInfo object.
///
/// @param param1 KStandardActions__KStandardActionsInfo*
///
KStandardActions__KStandardActionsInfo* k_standardactions__kstandardactionsinfo_new(void* param1);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
///
/// @param self KStandardActions__KStandardActionsInfo*
///
/// @return enum KStandardActions__StandardAction
///
int32_t k_standardactions__kstandardactionsinfo_id(void* self);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
///
/// @param self KStandardActions__KStandardActionsInfo*
/// @param id enum KStandardActions__StandardAction
///
void k_standardactions__kstandardactionsinfo_set_id(void* self, int32_t id);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
///
/// @param self KStandardActions__KStandardActionsInfo*
///
/// @return enum KStandardShortcut__StandardShortcut
///
int32_t k_standardactions__kstandardactionsinfo_id_accel(void* self);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
///
/// @param self KStandardActions__KStandardActionsInfo*
/// @param idAccel enum KStandardShortcut__StandardShortcut
///
void k_standardactions__kstandardactionsinfo_set_id_accel(void* self, int32_t idAccel);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KStandardActions__KStandardActionsInfo*
///
const char* k_standardactions__kstandardactionsinfo_ps_label(void* self);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
///
/// @param self KStandardActions__KStandardActionsInfo*
/// @param psLabel const char*
///
void k_standardactions__kstandardactionsinfo_set_ps_label(void* self, const char* psLabel);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KStandardActions__KStandardActionsInfo*
///
const char* k_standardactions__kstandardactionsinfo_ps_tool_tip(void* self);

/// [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
///
/// @param self KStandardActions__KStandardActionsInfo*
/// @param psToolTip const char*
///
void k_standardactions__kstandardactionsinfo_set_ps_tool_tip(void* self, const char* psToolTip);

/// Delete this object from C++ memory.
///
/// @param self KStandardActions__KStandardActionsInfo*
///
void k_standardactions__kstandardactionsinfo_delete(void* self);

/// [Upstream resources](https://api.kde.org/kstandardactions.html)

/// [Upstream resources](https://api.kde.org/kstandardactions.html#infoPtr)
///
/// @param param1 enum KStandardActions__StandardAction
///
const KStandardActions__KStandardActionsInfo* k_standardactions_info_ptr(int32_t param1);

/// [Upstream resources](https://api.kde.org/kstandardactions.html#internal_stdNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
const char** k_standardactions_internal_std_names();
#endif
