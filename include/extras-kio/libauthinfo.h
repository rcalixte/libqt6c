#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBAUTHINFO_H
#define SRC_EXTRAS_KIOQT6C_LIBAUTHINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-authinfo.html

/// k_io__authinfo_new constructs a new KIO::AuthInfo object.
///
KIO__AuthInfo* k_io__authinfo_new();

/// k_io__authinfo_new2 constructs a new KIO::AuthInfo object.
///
/// @param info KIO__AuthInfo*
KIO__AuthInfo* k_io__authinfo_new2(void* info);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#operator-eq)
///
/// @param self KIO__AuthInfo*
/// @param info KIO__AuthInfo*
void k_io__authinfo_operator_assign(void* self, void* info);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#isModified)
///
/// @param self KIO__AuthInfo*
bool k_io__authinfo_is_modified(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#setModified)
///
/// @param self KIO__AuthInfo*
/// @param flag bool
void k_io__authinfo_set_modified(void* self, bool flag);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#url-var)
///
/// @param self KIO__AuthInfo*
QUrl* k_io__authinfo_url(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#url-var)
///
/// @param self KIO__AuthInfo*
/// @param url QUrl*
void k_io__authinfo_set_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#username-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_username(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#username-var)
///
/// @param self KIO__AuthInfo*
/// @param username const char*
void k_io__authinfo_set_username(void* self, const char* username);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#password-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_password(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#password-var)
///
/// @param self KIO__AuthInfo*
/// @param password const char*
void k_io__authinfo_set_password(void* self, const char* password);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#prompt-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_prompt(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#prompt-var)
///
/// @param self KIO__AuthInfo*
/// @param prompt const char*
void k_io__authinfo_set_prompt(void* self, const char* prompt);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#caption-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_caption(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#caption-var)
///
/// @param self KIO__AuthInfo*
/// @param caption const char*
void k_io__authinfo_set_caption(void* self, const char* caption);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#comment-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_comment(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#comment-var)
///
/// @param self KIO__AuthInfo*
/// @param comment const char*
void k_io__authinfo_set_comment(void* self, const char* comment);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#commentLabel-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_comment_label(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#commentLabel-var)
///
/// @param self KIO__AuthInfo*
/// @param commentLabel const char*
void k_io__authinfo_set_comment_label(void* self, const char* commentLabel);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#realmValue-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_realm_value(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#realmValue-var)
///
/// @param self KIO__AuthInfo*
/// @param realmValue const char*
void k_io__authinfo_set_realm_value(void* self, const char* realmValue);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#digestInfo-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AuthInfo*
const char* k_io__authinfo_digest_info(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#digestInfo-var)
///
/// @param self KIO__AuthInfo*
/// @param digestInfo const char*
void k_io__authinfo_set_digest_info(void* self, const char* digestInfo);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#verifyPath-var)
///
/// @param self KIO__AuthInfo*
bool k_io__authinfo_verify_path(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#verifyPath-var)
///
/// @param self KIO__AuthInfo*
/// @param verifyPath bool
void k_io__authinfo_set_verify_path(void* self, bool verifyPath);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#readOnly-var)
///
/// @param self KIO__AuthInfo*
bool k_io__authinfo_read_only(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#readOnly-var)
///
/// @param self KIO__AuthInfo*
/// @param readOnly bool
void k_io__authinfo_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#keepPassword-var)
///
/// @param self KIO__AuthInfo*
bool k_io__authinfo_keep_password(void* self);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#keepPassword-var)
///
/// @param self KIO__AuthInfo*
/// @param keepPassword bool
void k_io__authinfo_set_keep_password(void* self, bool keepPassword);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#setExtraField)
///
/// @param self KIO__AuthInfo*
/// @param fieldName const char*
/// @param value QVariant*
void k_io__authinfo_set_extra_field(void* self, const char* fieldName, void* value);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#setExtraFieldFlags)
///
/// @param self KIO__AuthInfo*
/// @param fieldName const char*
/// @param flags enum KIO__AuthInfo__FieldFlags
void k_io__authinfo_set_extra_field_flags(void* self, const char* fieldName, int32_t flags);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#getExtraField)
///
/// @param self KIO__AuthInfo*
/// @param fieldName const char*
QVariant* k_io__authinfo_get_extra_field(void* self, const char* fieldName);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#getExtraFieldFlags)
///
/// @param self KIO__AuthInfo*
/// @param fieldName const char*
///
/// @return enum KIO__AuthInfo__FieldFlags
int32_t k_io__authinfo_get_extra_field_flags(void* self, const char* fieldName);

/// [Qt documentation](https://api.kde.org/kio-authinfo.html#registerMetaTypes)
///
void k_io__authinfo_register_meta_types();

/// Delete this object from C++ memory.
///
/// @param self KIO__AuthInfo*
void k_io__authinfo_delete(void* self);

/// https://api.kde.org/kio-authinfo.html#types

typedef enum {
    KIO_AUTHINFO_FIELDFLAGS_EXTRAFIELDNOFLAGS = 0,
    KIO_AUTHINFO_FIELDFLAGS_EXTRAFIELDREADONLY = 2,
    KIO_AUTHINFO_FIELDFLAGS_EXTRAFIELDMANDATORY = 4
} KIO__AuthInfo__FieldFlags;

#endif
