#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSREPLY_H
#define POSIX_EXTRAS_DBUS_LIBQDBUSREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusreply-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusreply-h.html#qDBusReplyFill)
///
/// @param reply QDBusMessage*
/// @param error QDBusError*
/// @param data QVariant*
///
void q_qdbusreply_h_q_d_bus_reply_fill(void* reply, void* error, void* data);
#endif
