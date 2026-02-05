#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBUSERMETADATA_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBUSERMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html)

/// k_filemetadata__usermetadata_new constructs a new KFileMetaData::UserMetaData object.
///
/// @param filePath const char*
///
KFileMetaData__UserMetaData* k_filemetadata__usermetadata_new(const char* filePath);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html)

/// k_filemetadata__usermetadata_new2 constructs a new KFileMetaData::UserMetaData object.
///
/// @param rhs KFileMetaData__UserMetaData*
///
KFileMetaData__UserMetaData* k_filemetadata__usermetadata_new2(void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#operator-eq)
///
/// @param self KFileMetaData__UserMetaData*
/// @param rhs KFileMetaData__UserMetaData*
///
void k_filemetadata__usermetadata_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
///
const char* k_filemetadata__usermetadata_file_path(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#isSupported)
///
/// @param self KFileMetaData__UserMetaData*
///
bool k_filemetadata__usermetadata_is_supported(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setTags)
///
/// @param self KFileMetaData__UserMetaData*
/// @param tags const char**
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_tags(void* self, const char* tags[static 1]);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#tags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileMetaData__UserMetaData*
///
const char** k_filemetadata__usermetadata_tags(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#rating)
///
/// @param self KFileMetaData__UserMetaData*
///
int32_t k_filemetadata__usermetadata_rating(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setRating)
///
/// @param self KFileMetaData__UserMetaData*
/// @param rating int
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_rating(void* self, int rating);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#userComment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
///
const char* k_filemetadata__usermetadata_user_comment(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setUserComment)
///
/// @param self KFileMetaData__UserMetaData*
/// @param userComment const char*
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_user_comment(void* self, const char* userComment);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originUrl)
///
/// @param self KFileMetaData__UserMetaData*
///
QUrl* k_filemetadata__usermetadata_origin_url(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginUrl)
///
/// @param self KFileMetaData__UserMetaData*
/// @param originUrl QUrl*
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_origin_url(void* self, void* originUrl);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailSubject)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
///
const char* k_filemetadata__usermetadata_origin_email_subject(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailSubject)
///
/// @param self KFileMetaData__UserMetaData*
/// @param originEmailSubject const char*
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_origin_email_subject(void* self, const char* originEmailSubject);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailSender)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
///
const char* k_filemetadata__usermetadata_origin_email_sender(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailSender)
///
/// @param self KFileMetaData__UserMetaData*
/// @param originEmailSender const char*
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_origin_email_sender(void* self, const char* originEmailSender);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailMessageId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
///
const char* k_filemetadata__usermetadata_origin_email_message_id(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailMessageId)
///
/// @param self KFileMetaData__UserMetaData*
/// @param originEmailMessageId const char*
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_origin_email_message_id(void* self, const char* originEmailMessageId);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#attribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
/// @param name const char*
///
const char* k_filemetadata__usermetadata_attribute(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#attribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__UserMetaData*
/// @param name const char*
///
const char* k_filemetadata__usermetadata_attribute2(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setAttribute)
///
/// @param self KFileMetaData__UserMetaData*
/// @param name const char*
/// @param value const char*
///
/// @return enum KFileMetaData__UserMetaData__Error
///
int32_t k_filemetadata__usermetadata_set_attribute(void* self, const char* name, const char* value);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#hasAttribute)
///
/// @param self KFileMetaData__UserMetaData*
/// @param name const char*
///
bool k_filemetadata__usermetadata_has_attribute(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#hasAttribute)
///
/// @param self KFileMetaData__UserMetaData*
/// @param name const char*
///
bool k_filemetadata__usermetadata_has_attribute2(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#queryAttributes)
///
/// @param self KFileMetaData__UserMetaData*
///
/// @return flag of enum KFileMetaData__UserMetaData__Attribute
///
uint32_t k_filemetadata__usermetadata_query_attributes(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#queryAttributes)
///
/// @param self KFileMetaData__UserMetaData*
/// @param attributes flag of enum KFileMetaData__UserMetaData__Attribute
///
/// @return flag of enum KFileMetaData__UserMetaData__Attribute
///
uint32_t k_filemetadata__usermetadata_query_attributes1(void* self, uint32_t attributes);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__UserMetaData*
///
void k_filemetadata__usermetadata_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#public-types)

typedef enum {
    KFILEMETADATA_USERMETADATA_ERROR_NOERROR = 0,
    KFILEMETADATA_USERMETADATA_ERROR_UNKNOWNERROR = 1,
    KFILEMETADATA_USERMETADATA_ERROR_NOTSUPPORTED = 2,
    KFILEMETADATA_USERMETADATA_ERROR_NOSPACE = 3,
    KFILEMETADATA_USERMETADATA_ERROR_MISSINGPERMISSION = 4,
    KFILEMETADATA_USERMETADATA_ERROR_VALUETOOBIG = 5,
    KFILEMETADATA_USERMETADATA_ERROR_NAMETOOLONG = 6
} KFileMetaData__UserMetaData__Error;

/// [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#public-types)

typedef enum {
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_NONE = 0,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_ANY = 0,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_TAGS = 1,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_RATING = 2,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_COMMENT = 4,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_ORIGINURL = 8,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_ORIGINEMAILSUBJECT = 16,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_ORIGINEMAILSENDER = 32,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_ORIGINEMAILMESSAGEID = 64,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_OTHER = 4294967168,
    KFILEMETADATA_USERMETADATA_ATTRIBUTE_ALL = 4294967295
} KFileMetaData__UserMetaData__Attribute;

#endif
