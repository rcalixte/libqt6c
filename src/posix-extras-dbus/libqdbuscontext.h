#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSCONTEXT_H
#define POSIX_EXTRAS_DBUS_LIBQDBUSCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html)

/// q_dbuscontext_new constructs a new QDBusContext object.
///
QDBusContext* q_dbuscontext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#calledFromDBus)
///
/// @param self const QDBusContext*
///
bool q_dbuscontext_called_from_d_bus(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#connection)
///
/// @param self const QDBusContext*
///
QDBusConnection* q_dbuscontext_connection(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#message)
///
/// @param self const QDBusContext*
///
const QDBusMessage* q_dbuscontext_message(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#isDelayedReply)
///
/// @param self const QDBusContext*
///
bool q_dbuscontext_is_delayed_reply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#setDelayedReply)
///
/// @param self const QDBusContext*
/// @param enable bool
///
void q_dbuscontext_set_delayed_reply(const void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self const QDBusContext*
/// @param name const char*
///
void q_dbuscontext_send_error_reply(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self const QDBusContext*
/// @param type enum QDBusError__ErrorType
///
void q_dbuscontext_send_error_reply2(const void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self const QDBusContext*
/// @param name const char*
/// @param msg const char*
///
void q_dbuscontext_send_error_reply22(const void* self, const char* name, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self const QDBusContext*
/// @param type enum QDBusError__ErrorType
/// @param msg const char*
///
void q_dbuscontext_send_error_reply23(const void* self, int32_t type, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#dtor.QDBusContext)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusContext*
///
void q_dbuscontext_delete(void* self);

#endif
