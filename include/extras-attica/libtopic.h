#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBTOPIC_H
#define SRC_EXTRAS_ATTICAQT6C_LIBTOPIC_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-topic.html

/// k_attica__topic_new constructs a new Attica::Topic object.
///
Attica__Topic* k_attica__topic_new();

/// k_attica__topic_new2 constructs a new Attica::Topic object.
///
/// @param other Attica__Topic*
Attica__Topic* k_attica__topic_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-topic.html#operator-eq)
///
/// @param self Attica__Topic*
/// @param other Attica__Topic*
void k_attica__topic_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setId)
///
/// @param self Attica__Topic*
/// @param id const char*
void k_attica__topic_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-topic.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Topic*
const char* k_attica__topic_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setForumId)
///
/// @param self Attica__Topic*
/// @param forumId const char*
void k_attica__topic_set_forum_id(void* self, const char* forumId);

/// [Qt documentation](https://api.kde.org/attica-topic.html#forumId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Topic*
const char* k_attica__topic_forum_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setUser)
///
/// @param self Attica__Topic*
/// @param user const char*
void k_attica__topic_set_user(void* self, const char* user);

/// [Qt documentation](https://api.kde.org/attica-topic.html#user)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Topic*
const char* k_attica__topic_user(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setDate)
///
/// @param self Attica__Topic*
/// @param date QDateTime*
void k_attica__topic_set_date(void* self, void* date);

/// [Qt documentation](https://api.kde.org/attica-topic.html#date)
///
/// @param self Attica__Topic*
QDateTime* k_attica__topic_date(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setSubject)
///
/// @param self Attica__Topic*
/// @param subject const char*
void k_attica__topic_set_subject(void* self, const char* subject);

/// [Qt documentation](https://api.kde.org/attica-topic.html#subject)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Topic*
const char* k_attica__topic_subject(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setContent)
///
/// @param self Attica__Topic*
/// @param content const char*
void k_attica__topic_set_content(void* self, const char* content);

/// [Qt documentation](https://api.kde.org/attica-topic.html#content)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Topic*
const char* k_attica__topic_content(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#setComments)
///
/// @param self Attica__Topic*
/// @param comments int
void k_attica__topic_set_comments(void* self, int comments);

/// [Qt documentation](https://api.kde.org/attica-topic.html#comments)
///
/// @param self Attica__Topic*
int32_t k_attica__topic_comments(void* self);

/// [Qt documentation](https://api.kde.org/attica-topic.html#isValid)
///
/// @param self Attica__Topic*
bool k_attica__topic_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Topic*
void k_attica__topic_delete(void* self);

#endif
