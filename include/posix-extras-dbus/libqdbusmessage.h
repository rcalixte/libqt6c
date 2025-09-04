#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSMESSAGE_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusmessage.html

/// q_dbusmessage_new constructs a new QDBusMessage object.
///
QDBusMessage* q_dbusmessage_new();

/// q_dbusmessage_new2 constructs a new QDBusMessage object.
///
/// @param other QDBusMessage*
QDBusMessage* q_dbusmessage_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#operator-eq)
///
/// @param self QDBusMessage*
/// @param other QDBusMessage*
void q_dbusmessage_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#swap)
///
/// @param self QDBusMessage*
/// @param other QDBusMessage*
void q_dbusmessage_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createSignal)
///
/// @param path const char*
/// @param interface const char*
/// @param name const char*
QDBusMessage* q_dbusmessage_create_signal(const char* path, const char* interface, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createTargetedSignal)
///
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
QDBusMessage* q_dbusmessage_create_targeted_signal(const char* service, const char* path, const char* interface, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createMethodCall)
///
/// @param destination const char*
/// @param path const char*
/// @param interface const char*
/// @param method const char*
QDBusMessage* q_dbusmessage_create_method_call(const char* destination, const char* path, const char* interface, const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
///
/// @param name const char*
/// @param msg const char*
QDBusMessage* q_dbusmessage_create_error(const char* name, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
///
/// @param err QDBusError*
QDBusMessage* q_dbusmessage_create_error2(void* err);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createError)
///
/// @param typeVal enum QDBusError__ErrorType
/// @param msg const char*
QDBusMessage* q_dbusmessage_create_error3(int32_t typeVal, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
///
/// @param self QDBusMessage*
QDBusMessage* q_dbusmessage_create_reply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
///
/// @param self QDBusMessage*
/// @param argument QVariant*
QDBusMessage* q_dbusmessage_create_reply2(void* self, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
///
/// @param self QDBusMessage*
/// @param name const char*
/// @param msg const char*
QDBusMessage* q_dbusmessage_create_error_reply(void* self, const char* name, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
///
/// @param self QDBusMessage*
/// @param err QDBusError*
QDBusMessage* q_dbusmessage_create_error_reply2(void* self, void* err);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createErrorReply)
///
/// @param self QDBusMessage*
/// @param typeVal enum QDBusError__ErrorType
/// @param msg const char*
QDBusMessage* q_dbusmessage_create_error_reply3(void* self, int32_t typeVal, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#service)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_service(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#interface)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_interface(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#member)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_member(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#errorName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_error_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#errorMessage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_error_message(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#type)
///
/// @param self QDBusMessage*
///
/// @return enum QDBusMessage__MessageType
int32_t q_dbusmessage_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#signature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusMessage*
const char* q_dbusmessage_signature(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#isReplyRequired)
///
/// @param self QDBusMessage*
bool q_dbusmessage_is_reply_required(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#setDelayedReply)
///
/// @param self QDBusMessage*
/// @param enable bool
void q_dbusmessage_set_delayed_reply(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#isDelayedReply)
///
/// @param self QDBusMessage*
bool q_dbusmessage_is_delayed_reply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#setAutoStartService)
///
/// @param self QDBusMessage*
/// @param enable bool
void q_dbusmessage_set_auto_start_service(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#autoStartService)
///
/// @param self QDBusMessage*
bool q_dbusmessage_auto_start_service(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#setInteractiveAuthorizationAllowed)
///
/// @param self QDBusMessage*
/// @param enable bool
void q_dbusmessage_set_interactive_authorization_allowed(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#isInteractiveAuthorizationAllowed)
///
/// @param self QDBusMessage*
bool q_dbusmessage_is_interactive_authorization_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#setArguments)
///
/// @param self QDBusMessage*
/// @param arguments libqt_list /* of QVariant* */
void q_dbusmessage_set_arguments(void* self, libqt_list arguments);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#arguments)
///
/// @param self QDBusMessage*
libqt_list /* of QVariant* */ q_dbusmessage_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#operator-lt-lt)
///
/// @param self QDBusMessage*
/// @param arg QVariant*
QDBusMessage* q_dbusmessage_operator_shift_left(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#createReply)
///
/// @param self QDBusMessage*
/// @param arguments libqt_list /* of QVariant* */
QDBusMessage* q_dbusmessage_create_reply1(void* self, libqt_list arguments);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusmessage.html#dtor.QDBusMessage)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusMessage*
void q_dbusmessage_delete(void* self);

/// https://doc.qt.io/qt-6/qdbusmessage.html#types

typedef enum {
    QDBUSMESSAGE_MESSAGETYPE_INVALIDMESSAGE = 0,
    QDBUSMESSAGE_MESSAGETYPE_METHODCALLMESSAGE = 1,
    QDBUSMESSAGE_MESSAGETYPE_REPLYMESSAGE = 2,
    QDBUSMESSAGE_MESSAGETYPE_ERRORMESSAGE = 3,
    QDBUSMESSAGE_MESSAGETYPE_SIGNALMESSAGE = 4
} QDBusMessage__MessageType;

#endif
