#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBKNOWLEDGEBASEENTRY_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBKNOWLEDGEBASEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html)

/// k_attica__knowledgebaseentry_new constructs a new Attica::KnowledgeBaseEntry object.
///
Attica__KnowledgeBaseEntry* k_attica__knowledgebaseentry_new();

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html)

/// k_attica__knowledgebaseentry_new2 constructs a new Attica::KnowledgeBaseEntry object.
///
/// @param other Attica__KnowledgeBaseEntry*
///
Attica__KnowledgeBaseEntry* k_attica__knowledgebaseentry_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#operator-eq)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param other Attica__KnowledgeBaseEntry*
///
void k_attica__knowledgebaseentry_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setId)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param id const char*
///
void k_attica__knowledgebaseentry_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
///
const char* k_attica__knowledgebaseentry_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setContentId)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param id int
///
void k_attica__knowledgebaseentry_set_content_id(void* self, int id);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#contentId)
///
/// @param self Attica__KnowledgeBaseEntry*
///
int32_t k_attica__knowledgebaseentry_content_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setUser)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param user const char*
///
void k_attica__knowledgebaseentry_set_user(void* self, const char* user);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
///
const char* k_attica__knowledgebaseentry_user(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setStatus)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param status const char*
///
void k_attica__knowledgebaseentry_set_status(void* self, const char* status);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#status)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
///
const char* k_attica__knowledgebaseentry_status(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setChanged)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param changed QDateTime*
///
void k_attica__knowledgebaseentry_set_changed(void* self, void* changed);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#changed)
///
/// @param self Attica__KnowledgeBaseEntry*
///
QDateTime* k_attica__knowledgebaseentry_changed(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setName)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param name const char*
///
void k_attica__knowledgebaseentry_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
///
const char* k_attica__knowledgebaseentry_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setDescription)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param description const char*
///
void k_attica__knowledgebaseentry_set_description(void* self, const char* description);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
///
const char* k_attica__knowledgebaseentry_description(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setAnswer)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param answer const char*
///
void k_attica__knowledgebaseentry_set_answer(void* self, const char* answer);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#answer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
///
const char* k_attica__knowledgebaseentry_answer(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setComments)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param comments int
///
void k_attica__knowledgebaseentry_set_comments(void* self, int comments);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#comments)
///
/// @param self Attica__KnowledgeBaseEntry*
///
int32_t k_attica__knowledgebaseentry_comments(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setDetailPage)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param detailPage QUrl*
///
void k_attica__knowledgebaseentry_set_detail_page(void* self, void* detailPage);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#detailPage)
///
/// @param self Attica__KnowledgeBaseEntry*
///
QUrl* k_attica__knowledgebaseentry_detail_page(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#addExtendedAttribute)
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param key const char*
/// @param value const char*
///
void k_attica__knowledgebaseentry_add_extended_attribute(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__KnowledgeBaseEntry*
/// @param key const char*
///
const char* k_attica__knowledgebaseentry_extended_attribute(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttributes)
///
/// @param self Attica__KnowledgeBaseEntry*
///
libqt_map /* of const char* to const char* */ k_attica__knowledgebaseentry_extended_attributes(void* self);

/// [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#isValid)
///
/// @param self Attica__KnowledgeBaseEntry*
///
bool k_attica__knowledgebaseentry_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__KnowledgeBaseEntry*
///
void k_attica__knowledgebaseentry_delete(void* self);

#endif
