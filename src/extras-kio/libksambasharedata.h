#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKSAMBASHAREDATA_H
#define SRC_EXTRAS_KIO_QT6C_LIBKSAMBASHAREDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksambasharedata.html)

/// k_sambasharedata_new constructs a new KSambaShareData object.
///
KSambaShareData* k_sambasharedata_new();

/// [Upstream resources](https://api.kde.org/ksambasharedata.html)

/// k_sambasharedata_new2 constructs a new KSambaShareData object.
///
/// @param other KSambaShareData*
///
KSambaShareData* k_sambasharedata_new2(void* other);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShareData*
///
const char* k_sambasharedata_name(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShareData*
///
const char* k_sambasharedata_path(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#comment)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShareData*
///
const char* k_sambasharedata_comment(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#acl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShareData*
///
const char* k_sambasharedata_acl(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#guestPermission)
///
/// @param self KSambaShareData*
///
/// @return enum KSambaShareData__GuestPermission
///
int32_t k_sambasharedata_guest_permission(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#setName)
///
/// @param self KSambaShareData*
/// @param name const char*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#setPath)
///
/// @param self KSambaShareData*
/// @param path const char*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_set_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#setComment)
///
/// @param self KSambaShareData*
/// @param comment const char*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_set_comment(void* self, const char* comment);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#setAcl)
///
/// @param self KSambaShareData*
/// @param acl const char*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_set_acl(void* self, const char* acl);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#setGuestPermission)
///
/// @param self KSambaShareData*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_set_guest_permission(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#save)
///
/// @param self KSambaShareData*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_save(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#remove)
///
/// @param self KSambaShareData*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_remove(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-eq)
///
/// @param self KSambaShareData*
/// @param other KSambaShareData*
///
void k_sambasharedata_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-eq-eq)
///
/// @param self KSambaShareData*
/// @param other KSambaShareData*
///
bool k_sambasharedata_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#operator-not-eq)
///
/// @param self KSambaShareData*
/// @param other KSambaShareData*
///
bool k_sambasharedata_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#setGuestPermission)
///
/// @param self KSambaShareData*
/// @param permission enum KSambaShareData__GuestPermission*
///
/// @return enum KSambaShareData__UserShareError
///
int32_t k_sambasharedata_set_guest_permission1(void* self, int32_t* permission);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#dtor.KSambaShareData)
///
/// Delete this object from C++ memory.
///
/// @param self KSambaShareData*
///
void k_sambasharedata_delete(void* self);

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#public-types)

typedef enum {
    KSAMBASHAREDATA_GUESTPERMISSION_GUESTSNOTALLOWED = 0,
    KSAMBASHAREDATA_GUESTPERMISSION_GUESTSALLOWED = 1
} KSambaShareData__GuestPermission;

/// [Upstream resources](https://api.kde.org/ksambasharedata.html#public-types)

typedef enum {
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREOK = 0,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREEXCEEDMAXSHARES = 1,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHARENAMEOK = 2,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHARENAMEINVALID = 3,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHARENAMEINUSE = 4,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREPATHOK = 5,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREPATHINVALID = 6,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREPATHNOTEXISTS = 7,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREPATHNOTDIRECTORY = 8,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREPATHNOTABSOLUTE = 9,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREPATHNOTALLOWED = 10,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREACLOK = 11,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREACLINVALID = 12,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREACLUSERNOTVALID = 13,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHARECOMMENTOK = 14,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREGUESTSOK = 15,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREGUESTSINVALID = 16,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHAREGUESTSNOTALLOWED = 17,
    KSAMBASHAREDATA_USERSHAREERROR_USERSHARESYSTEMERROR = 18
} KSambaShareData__UserShareError;

#endif
