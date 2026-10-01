#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBAUTHOR_H
#define EXTRAS_KNEWSTUFF_LIBAUTHOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-author.html)

/// k_nscore__author_new constructs a new KNSCore::Author object.
///
KNSCore__Author* k_nscore__author_new();

/// [Upstream resources](https://api.kde.org/knscore-author.html)

/// k_nscore__author_new2 constructs a new KNSCore::Author object.
///
/// @param other KNSCore__Author*
///
KNSCore__Author* k_nscore__author_new2(const void* other);

/// [Upstream resources](https://api.kde.org/knscore-author.html#operator-eq)
///
/// @param self KNSCore__Author*
/// @param other KNSCore__Author*
///
void k_nscore__author_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setId)
///
/// @param self KNSCore__Author*
/// @param id const char*
///
void k_nscore__author_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/knscore-author.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_id(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setName)
///
/// @param self KNSCore__Author*
/// @param name const char*
///
void k_nscore__author_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/knscore-author.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_name(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setEmail)
///
/// @param self KNSCore__Author*
/// @param email const char*
///
void k_nscore__author_set_email(void* self, const char* email);

/// [Upstream resources](https://api.kde.org/knscore-author.html#email)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_email(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setJabber)
///
/// @param self KNSCore__Author*
/// @param jabber const char*
///
void k_nscore__author_set_jabber(void* self, const char* jabber);

/// [Upstream resources](https://api.kde.org/knscore-author.html#jabber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_jabber(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setHomepage)
///
/// @param self KNSCore__Author*
/// @param homepage const char*
///
void k_nscore__author_set_homepage(void* self, const char* homepage);

/// [Upstream resources](https://api.kde.org/knscore-author.html#homepage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_homepage(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setProfilepage)
///
/// @param self KNSCore__Author*
/// @param profilepage const char*
///
void k_nscore__author_set_profilepage(void* self, const char* profilepage);

/// [Upstream resources](https://api.kde.org/knscore-author.html#profilepage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_profilepage(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setAvatarUrl)
///
/// @param self KNSCore__Author*
/// @param avatarUrl QUrl*
///
void k_nscore__author_set_avatar_url(void* self, const void* avatarUrl);

/// [Upstream resources](https://api.kde.org/knscore-author.html#avatarUrl)
///
/// @param self const KNSCore__Author*
///
QUrl* k_nscore__author_avatar_url(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__Author*
///
const char* k_nscore__author_description(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setDescription)
///
/// @param self KNSCore__Author*
/// @param description const char*
///
void k_nscore__author_set_description(void* self, const char* description);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Author*
///
void k_nscore__author_delete(void* self);

#endif
