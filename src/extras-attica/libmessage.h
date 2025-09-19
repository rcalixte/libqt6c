#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBMESSAGE_H
#define SRC_EXTRAS_ATTICAQT6C_LIBMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-message.html

/// k_attica__message_new constructs a new Attica::Message object.
///
Attica__Message* k_attica__message_new();

/// k_attica__message_new2 constructs a new Attica::Message object.
///
/// @param other Attica__Message*
Attica__Message* k_attica__message_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-message.html#operator-eq)
///
/// @param self Attica__Message*
/// @param other Attica__Message*
void k_attica__message_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-message.html#setId)
///
/// @param self Attica__Message*
/// @param id const char*
void k_attica__message_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-message.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Message*
const char* k_attica__message_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#setFrom)
///
/// @param self Attica__Message*
/// @param from const char*
void k_attica__message_set_from(void* self, const char* from);

/// [Qt documentation](https://api.kde.org/attica-message.html#from)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Message*
const char* k_attica__message_from(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#setTo)
///
/// @param self Attica__Message*
/// @param to const char*
void k_attica__message_set_to(void* self, const char* to);

/// [Qt documentation](https://api.kde.org/attica-message.html#to)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Message*
const char* k_attica__message_to(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#setSent)
///
/// @param self Attica__Message*
/// @param sent QDateTime*
void k_attica__message_set_sent(void* self, void* sent);

/// [Qt documentation](https://api.kde.org/attica-message.html#sent)
///
/// @param self Attica__Message*
QDateTime* k_attica__message_sent(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#setStatus)
///
/// @param self Attica__Message*
/// @param status enum Attica__Message__Status
void k_attica__message_set_status(void* self, int32_t status);

/// [Qt documentation](https://api.kde.org/attica-message.html#status)
///
/// @param self Attica__Message*
///
/// @return enum Attica__Message__Status
int32_t k_attica__message_status(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#setSubject)
///
/// @param self Attica__Message*
/// @param subject const char*
void k_attica__message_set_subject(void* self, const char* subject);

/// [Qt documentation](https://api.kde.org/attica-message.html#subject)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Message*
const char* k_attica__message_subject(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#setBody)
///
/// @param self Attica__Message*
/// @param body const char*
void k_attica__message_set_body(void* self, const char* body);

/// [Qt documentation](https://api.kde.org/attica-message.html#body)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Message*
const char* k_attica__message_body(void* self);

/// [Qt documentation](https://api.kde.org/attica-message.html#isValid)
///
/// @param self Attica__Message*
bool k_attica__message_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Message*
void k_attica__message_delete(void* self);

/// https://api.kde.org/attica-message.html#types

typedef enum {
    ATTICA_MESSAGE_STATUS_UNREAD = 0,
    ATTICA_MESSAGE_STATUS_READ = 1,
    ATTICA_MESSAGE_STATUS_ANSWERED = 2
} Attica__Message__Status;

#endif
