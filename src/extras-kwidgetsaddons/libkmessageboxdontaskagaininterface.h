#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMESSAGEBOXDONTASKAGAININTERFACE_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMESSAGEBOXDONTASKAGAININTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html)

/// k_messageboxdontaskagaininterface_new constructs a new KMessageBoxDontAskAgainInterface object.
///
KMessageBoxDontAskAgainInterface* k_messageboxdontaskagaininterface_new();

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
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

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_should_be_shown_two_actions` instead
///
#define k_messageboxdontaskagaininterface_qbase_should_be_shown_two_actions k_messageboxdontaskagaininterface_super_should_be_shown_two_actions

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownTwoActions)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
/// @param result enum KMessageBox__ButtonCode*
///
bool k_messageboxdontaskagaininterface_super_should_be_shown_two_actions(void* self, const char* dontShowAgainName, int32_t* result);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
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

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_should_be_shown_continue` instead
///
#define k_messageboxdontaskagaininterface_qbase_should_be_shown_continue k_messageboxdontaskagaininterface_super_should_be_shown_continue

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#shouldBeShownContinue)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
///
bool k_messageboxdontaskagaininterface_super_should_be_shown_continue(void* self, const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
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

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_save_dont_show_again_two_actions` instead
///
#define k_messageboxdontaskagaininterface_qbase_save_dont_show_again_two_actions k_messageboxdontaskagaininterface_super_save_dont_show_again_two_actions

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainTwoActions)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
/// @param result enum KMessageBox__ButtonCode
///
void k_messageboxdontaskagaininterface_super_save_dont_show_again_two_actions(void* self, const char* dontShowAgainName, int32_t result);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
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

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_save_dont_show_again_continue` instead
///
#define k_messageboxdontaskagaininterface_qbase_save_dont_show_again_continue k_messageboxdontaskagaininterface_super_save_dont_show_again_continue

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#saveDontShowAgainContinue)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
///
void k_messageboxdontaskagaininterface_super_save_dont_show_again_continue(void* self, const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
///
/// @param self KMessageBoxDontAskAgainInterface*
///
void k_messageboxdontaskagaininterface_enable_all_messages(void* self);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
///
/// Allows for overriding the related default method
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param callback void func()
///
void k_messageboxdontaskagaininterface_on_enable_all_messages(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_enable_all_messages` instead
///
#define k_messageboxdontaskagaininterface_qbase_enable_all_messages k_messageboxdontaskagaininterface_super_enable_all_messages

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableAllMessages)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
///
void k_messageboxdontaskagaininterface_super_enable_all_messages(void* self);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
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

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_enable_message` instead
///
#define k_messageboxdontaskagaininterface_qbase_enable_message k_messageboxdontaskagaininterface_super_enable_message

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#enableMessage)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param dontShowAgainName const char*
///
void k_messageboxdontaskagaininterface_super_enable_message(void* self, const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
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

/// @warning DEPRECATED: Use `k_messageboxdontaskagaininterface_super_set_config` instead
///
#define k_messageboxdontaskagaininterface_qbase_set_config k_messageboxdontaskagaininterface_super_set_config

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#setConfig)
///
/// Base class method implementation
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param config KConfig*
///
void k_messageboxdontaskagaininterface_super_set_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#operator-eq)
///
/// @param self KMessageBoxDontAskAgainInterface*
/// @param param1 KMessageBoxDontAskAgainInterface*
///
void k_messageboxdontaskagaininterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kmessageboxdontaskagaininterface.html#dtor.KMessageBoxDontAskAgainInterface)
///
/// Delete this object from C++ memory.
///
/// @param self KMessageBoxDontAskAgainInterface*
///
void k_messageboxdontaskagaininterface_delete(void* self);

#endif
