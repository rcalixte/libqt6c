#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBMESSAGE_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-message.html)

/// k_attica__message_new constructs a new Attica::Message object.
///
Attica__Message* k_attica__message_new();

/// [Upstream resources](https://api.kde.org/attica-message.html)

/// k_attica__message_new2 constructs a new Attica::Message object.
///
/// @param other Attica__Message*
///
Attica__Message* k_attica__message_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-message.html#operator-eq)
///
/// @param self Attica__Message*
/// @param other Attica__Message*
///
void k_attica__message_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-message.html#setId)
///
/// @param self Attica__Message*
/// @param id const char*
///
void k_attica__message_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-message.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Message*
///
const char* k_attica__message_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#setFrom)
///
/// @param self Attica__Message*
/// @param from const char*
///
void k_attica__message_set_from(void* self, const char* from);

/// [Upstream resources](https://api.kde.org/attica-message.html#from)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Message*
///
const char* k_attica__message_from(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#setTo)
///
/// @param self Attica__Message*
/// @param to const char*
///
void k_attica__message_set_to(void* self, const char* to);

/// [Upstream resources](https://api.kde.org/attica-message.html#to)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Message*
///
const char* k_attica__message_to(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#setSent)
///
/// @param self Attica__Message*
/// @param sent QDateTime*
///
void k_attica__message_set_sent(void* self, void* sent);

/// [Upstream resources](https://api.kde.org/attica-message.html#sent)
///
/// @param self Attica__Message*
///
QDateTime* k_attica__message_sent(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#setStatus)
///
/// @param self Attica__Message*
/// @param status enum Attica__Message__Status
///
void k_attica__message_set_status(void* self, int32_t status);

/// [Upstream resources](https://api.kde.org/attica-message.html#status)
///
/// @param self Attica__Message*
///
/// @return enum Attica__Message__Status
///
int32_t k_attica__message_status(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#setSubject)
///
/// @param self Attica__Message*
/// @param subject const char*
///
void k_attica__message_set_subject(void* self, const char* subject);

/// [Upstream resources](https://api.kde.org/attica-message.html#subject)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Message*
///
const char* k_attica__message_subject(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#setBody)
///
/// @param self Attica__Message*
/// @param body const char*
///
void k_attica__message_set_body(void* self, const char* body);

/// [Upstream resources](https://api.kde.org/attica-message.html#body)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Message*
///
const char* k_attica__message_body(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#isValid)
///
/// @param self Attica__Message*
///
bool k_attica__message_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Message*
///
void k_attica__message_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-message.html#public-types)

typedef enum {
    ATTICA_MESSAGE_STATUS_UNREAD = 0,
    ATTICA_MESSAGE_STATUS_READ = 1,
    ATTICA_MESSAGE_STATUS_ANSWERED = 2
} Attica__Message__Status;

#endif
