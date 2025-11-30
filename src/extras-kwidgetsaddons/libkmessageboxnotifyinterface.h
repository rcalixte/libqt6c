#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMESSAGEBOXNOTIFYINTERFACE_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMESSAGEBOXNOTIFYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmessageboxnotifyinterface.html

/// k_messageboxnotifyinterface_new constructs a new KMessageBoxNotifyInterface object.
///
KMessageBoxNotifyInterface* k_messageboxnotifyinterface_new();

/// [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
///
/// @param self KMessageBoxNotifyInterface*
/// @param notificationType enum QMessageBox__Icon
/// @param message const char*
/// @param parent QWidget*
void k_messageboxnotifyinterface_send_notification(void* self, int32_t notificationType, const char* message, void* parent);

/// [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxNotifyInterface*
/// @param callback void func(KMessageBoxNotifyInterface* self, enum QMessageBox__Icon notificationType, const char* message, QWidget* parent)
void k_messageboxnotifyinterface_on_send_notification(void* self, void (*callback)(void*, int32_t, const char*, void*));

/// [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
///
/// Base class method implementation
///
/// @param self KMessageBoxNotifyInterface*
/// @param notificationType enum QMessageBox__Icon
/// @param message const char*
/// @param parent QWidget*
void k_messageboxnotifyinterface_qbase_send_notification(void* self, int32_t notificationType, const char* message, void* parent);

/// [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#operator-eq)
///
/// @param self KMessageBoxNotifyInterface*
/// @param param1 KMessageBoxNotifyInterface*
void k_messageboxnotifyinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#dtor.KMessageBoxNotifyInterface)
///
/// Delete this object from C++ memory.
///
/// @param self KMessageBoxNotifyInterface*
void k_messageboxnotifyinterface_delete(void* self);

#endif
