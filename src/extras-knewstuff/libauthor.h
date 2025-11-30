#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBAUTHOR_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBAUTHOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore-author.html

/// k_nscore__author_new constructs a new KNSCore::Author object.
///
KNSCore__Author* k_nscore__author_new();

/// k_nscore__author_new2 constructs a new KNSCore::Author object.
///
/// @param other KNSCore__Author*
KNSCore__Author* k_nscore__author_new2(void* other);

/// [Upstream resources](https://api.kde.org/knscore-author.html#operator-eq)
///
/// @param self KNSCore__Author*
/// @param other KNSCore__Author*
void k_nscore__author_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setId)
///
/// @param self KNSCore__Author*
/// @param id const char*
void k_nscore__author_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/knscore-author.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_id(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setName)
///
/// @param self KNSCore__Author*
/// @param name const char*
void k_nscore__author_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/knscore-author.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setEmail)
///
/// @param self KNSCore__Author*
/// @param email const char*
void k_nscore__author_set_email(void* self, const char* email);

/// [Upstream resources](https://api.kde.org/knscore-author.html#email)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_email(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setJabber)
///
/// @param self KNSCore__Author*
/// @param jabber const char*
void k_nscore__author_set_jabber(void* self, const char* jabber);

/// [Upstream resources](https://api.kde.org/knscore-author.html#jabber)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_jabber(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setHomepage)
///
/// @param self KNSCore__Author*
/// @param homepage const char*
void k_nscore__author_set_homepage(void* self, const char* homepage);

/// [Upstream resources](https://api.kde.org/knscore-author.html#homepage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_homepage(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setProfilepage)
///
/// @param self KNSCore__Author*
/// @param profilepage const char*
void k_nscore__author_set_profilepage(void* self, const char* profilepage);

/// [Upstream resources](https://api.kde.org/knscore-author.html#profilepage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_profilepage(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setAvatarUrl)
///
/// @param self KNSCore__Author*
/// @param avatarUrl QUrl*
void k_nscore__author_set_avatar_url(void* self, void* avatarUrl);

/// [Upstream resources](https://api.kde.org/knscore-author.html#avatarUrl)
///
/// @param self KNSCore__Author*
QUrl* k_nscore__author_avatar_url(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Author*
const char* k_nscore__author_description(void* self);

/// [Upstream resources](https://api.kde.org/knscore-author.html#setDescription)
///
/// @param self KNSCore__Author*
/// @param description const char*
void k_nscore__author_set_description(void* self, const char* description);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Author*
void k_nscore__author_delete(void* self);

#endif
