#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSCONTEXT_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbuscontext.html

/// q_dbuscontext_new constructs a new QDBusContext object.
///
QDBusContext* q_dbuscontext_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#calledFromDBus)
///
/// @param self QDBusContext*
bool q_dbuscontext_called_from_d_bus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#connection)
///
/// @param self QDBusContext*
QDBusConnection* q_dbuscontext_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#message)
///
/// @param self QDBusContext*
const QDBusMessage* q_dbuscontext_message(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#isDelayedReply)
///
/// @param self QDBusContext*
bool q_dbuscontext_is_delayed_reply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#setDelayedReply)
///
/// @param self QDBusContext*
/// @param enable bool
void q_dbuscontext_set_delayed_reply(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self QDBusContext*
/// @param name const char*
void q_dbuscontext_send_error_reply(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self QDBusContext*
/// @param type enum QDBusError__ErrorType
void q_dbuscontext_send_error_reply2(void* self, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self QDBusContext*
/// @param name const char*
/// @param msg const char*
void q_dbuscontext_send_error_reply22(void* self, const char* name, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
///
/// @param self QDBusContext*
/// @param type enum QDBusError__ErrorType
/// @param msg const char*
void q_dbuscontext_send_error_reply23(void* self, int32_t type, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#dtor.QDBusContext)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusContext*
void q_dbuscontext_delete(void* self);

#endif
