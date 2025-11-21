#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBFORUM_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBFORUM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-forum.html

/// k_attica__forum_new constructs a new Attica::Forum object.
///
Attica__Forum* k_attica__forum_new();

/// k_attica__forum_new2 constructs a new Attica::Forum object.
///
/// @param other Attica__Forum*
Attica__Forum* k_attica__forum_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-forum.html#operator-eq)
///
/// @param self Attica__Forum*
/// @param other Attica__Forum*
void k_attica__forum_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setId)
///
/// @param self Attica__Forum*
/// @param id const char*
void k_attica__forum_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-forum.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Forum*
const char* k_attica__forum_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setName)
///
/// @param self Attica__Forum*
/// @param name const char*
void k_attica__forum_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-forum.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Forum*
const char* k_attica__forum_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setDescription)
///
/// @param self Attica__Forum*
/// @param description const char*
void k_attica__forum_set_description(void* self, const char* description);

/// [Qt documentation](https://api.kde.org/attica-forum.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Forum*
const char* k_attica__forum_description(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setDate)
///
/// @param self Attica__Forum*
/// @param date QDateTime*
void k_attica__forum_set_date(void* self, void* date);

/// [Qt documentation](https://api.kde.org/attica-forum.html#date)
///
/// @param self Attica__Forum*
QDateTime* k_attica__forum_date(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setIcon)
///
/// @param self Attica__Forum*
/// @param icon QUrl*
void k_attica__forum_set_icon(void* self, void* icon);

/// [Qt documentation](https://api.kde.org/attica-forum.html#icon)
///
/// @param self Attica__Forum*
QUrl* k_attica__forum_icon(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setChildCount)
///
/// @param self Attica__Forum*
/// @param childCount int
void k_attica__forum_set_child_count(void* self, int childCount);

/// [Qt documentation](https://api.kde.org/attica-forum.html#childCount)
///
/// @param self Attica__Forum*
int32_t k_attica__forum_child_count(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setTopics)
///
/// @param self Attica__Forum*
/// @param topics int
void k_attica__forum_set_topics(void* self, int topics);

/// [Qt documentation](https://api.kde.org/attica-forum.html#topics)
///
/// @param self Attica__Forum*
int32_t k_attica__forum_topics(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#setChildren)
///
/// @param self Attica__Forum*
/// @param comments libqt_list /* of Attica__Forum* */
void k_attica__forum_set_children(void* self, libqt_list comments);

/// [Qt documentation](https://api.kde.org/attica-forum.html#children)
///
/// @param self Attica__Forum*
libqt_list /* of Attica__Forum* */ k_attica__forum_children(void* self);

/// [Qt documentation](https://api.kde.org/attica-forum.html#isValid)
///
/// @param self Attica__Forum*
bool k_attica__forum_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Forum*
void k_attica__forum_delete(void* self);

#endif
