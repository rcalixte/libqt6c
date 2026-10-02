#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMESSAGEBOXDONTASKAGAININTERFACE_H
#define EXTRAS_KWIDGETSADDONS_LIBKMESSAGEBOXDONTASKAGAININTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html)

/// k_messageboxdontaskagaininterface_new constructs a new KMessageBoxDontAskAgainInterface object.
///
KMessageBoxDontAskAgainInterface* k_messageboxdontaskagaininterface_new();

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_should_be_shown_two_actions` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
/// @param result enum KMessageBox__ButtonCode*
///
bool k_messageboxdontaskagaininterface_should_be_shown_two_actions(void* self, const char* dontShowAgainName, int32_t* result);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback bool func(KMessageBoxDontAskAgainInterface* self, const char* dontShowAgainName, enum KMessageBox__ButtonCode* result)
///
void k_messageboxdontaskagaininterface_on_should_be_shown_two_actions(void* self, bool (*callback)(void*, const char*, int32_t*));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_should_be_shown_continue` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
///
bool k_messageboxdontaskagaininterface_should_be_shown_continue(void* self, const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback bool func(KMessageBoxDontAskAgainInterface* self, const char* dontShowAgainName)
///
void k_messageboxdontaskagaininterface_on_should_be_shown_continue(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_save_dont_show_again_two_actions` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
/// @param result enum KMessageBox__ButtonCode
///
void k_messageboxdontaskagaininterface_save_dont_show_again_two_actions(void* self, const char* dontShowAgainName, int32_t result);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback void func(KMessageBoxDontAskAgainInterface* self, const char* dontShowAgainName, enum KMessageBox__ButtonCode result)
///
void k_messageboxdontaskagaininterface_on_save_dont_show_again_two_actions(void* self, void (*callback)(void*, const char*, int32_t));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_save_dont_show_again_continue` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
///
void k_messageboxdontaskagaininterface_save_dont_show_again_continue(void* self, const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback void func(KMessageBoxDontAskAgainInterface* self, const char* dontShowAgainName)
///
void k_messageboxdontaskagaininterface_on_save_dont_show_again_continue(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_enable_all_messages` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
///
void k_messageboxdontaskagaininterface_enable_all_messages(void* self);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback void func(KMessageBoxDontAskAgainInterface* self)
///
void k_messageboxdontaskagaininterface_on_enable_all_messages(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_enable_message` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
///
void k_messageboxdontaskagaininterface_enable_message(void* self, const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback void func(KMessageBoxDontAskAgainInterface* self, const char* dontShowAgainName)
///
void k_messageboxdontaskagaininterface_on_enable_message(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
///
/// @warning This method must be implemented with `k_messageboxdontaskagaininterface_on_set_config` before it can be called.
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param config KConfig*
///
void k_messageboxdontaskagaininterface_set_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback void func(KMessageBoxDontAskAgainInterface* self, KConfig* config)
///
void k_messageboxdontaskagaininterface_on_set_config(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#dtor.KMessageBoxDontAskAgainInterface)
///
/// Delete this object from C++ memory.
///
/// @param self KMessageBoxDontAskAgainInterface*
///
void k_messageboxdontaskagaininterface_delete(void* self);

#endif
