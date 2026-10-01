#pragma once
#ifndef EXTRAS_ATTICA_LIBCOMMENT_H
#define EXTRAS_ATTICA_LIBCOMMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-comment.html)

/// k_attica__comment_new constructs a new Attica::Comment object.
///
Attica__Comment* k_attica__comment_new();

/// [Upstream resources](https://api.kde.org/attica-comment.html)

/// k_attica__comment_new2 constructs a new Attica::Comment object.
///
/// @param other Attica__Comment*
///
Attica__Comment* k_attica__comment_new2(const void* other);

/// [Upstream resources](https://api.kde.org/attica-comment.html#commentTypeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Attica__Comment__Type
///
const char* k_attica__comment_comment_type_to_string(int32_t type);

/// [Upstream resources](https://api.kde.org/attica-comment.html#operator-eq)
///
/// @param self Attica__Comment*
/// @param other Attica__Comment*
///
void k_attica__comment_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setId)
///
/// @param self Attica__Comment*
/// @param id const char*
///
void k_attica__comment_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-comment.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Comment*
///
const char* k_attica__comment_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setSubject)
///
/// @param self Attica__Comment*
/// @param subject const char*
///
void k_attica__comment_set_subject(void* self, const char* subject);

/// [Upstream resources](https://api.kde.org/attica-comment.html#subject)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Comment*
///
const char* k_attica__comment_subject(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setText)
///
/// @param self Attica__Comment*
/// @param text const char*
///
void k_attica__comment_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/attica-comment.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Comment*
///
const char* k_attica__comment_text(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setChildCount)
///
/// @param self Attica__Comment*
/// @param childCount int
///
void k_attica__comment_set_child_count(void* self, int childCount);

/// [Upstream resources](https://api.kde.org/attica-comment.html#childCount)
///
/// @param self const Attica__Comment*
///
int32_t k_attica__comment_child_count(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setUser)
///
/// @param self Attica__Comment*
/// @param user const char*
///
void k_attica__comment_set_user(void* self, const char* user);

/// [Upstream resources](https://api.kde.org/attica-comment.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Comment*
///
const char* k_attica__comment_user(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setDate)
///
/// @param self Attica__Comment*
/// @param date QDateTime*
///
void k_attica__comment_set_date(void* self, const void* date);

/// [Upstream resources](https://api.kde.org/attica-comment.html#date)
///
/// @param self const Attica__Comment*
///
QDateTime* k_attica__comment_date(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setScore)
///
/// @param self Attica__Comment*
/// @param score int
///
void k_attica__comment_set_score(void* self, int score);

/// [Upstream resources](https://api.kde.org/attica-comment.html#score)
///
/// @param self const Attica__Comment*
///
int32_t k_attica__comment_score(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#setChildren)
///
/// @param self Attica__Comment*
/// @param comments libqt_list of Attica__Comment*
///
void k_attica__comment_set_children(void* self, libqt_list comments);

/// [Upstream resources](https://api.kde.org/attica-comment.html#children)
///
/// @param self const Attica__Comment*
///
/// @return libqt_list of Attica__Comment*
///
libqt_list k_attica__comment_children(const void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#isValid)
///
/// @param self const Attica__Comment*
///
bool k_attica__comment_is_valid(const void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Comment*
///
void k_attica__comment_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-comment.html#public-types)

typedef enum {
    ATTICA_COMMENT_TYPE_CONTENTCOMMENT = 0,
    ATTICA_COMMENT_TYPE_FORUMCOMMENT = 1,
    ATTICA_COMMENT_TYPE_KNOWLEDGEBASECOMMENT = 2,
    ATTICA_COMMENT_TYPE_EVENTCOMMENT = 3
} Attica__Comment__Type;

#endif
