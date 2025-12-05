#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBKDE_TERMINAL_INTERFACE_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBKDE_TERMINAL_INTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/terminalinterface.html)

/// [Upstream resources](https://api.kde.org/terminalinterface.html#startProgram)
///
/// @param self TerminalInterface*
/// @param program const char*
/// @param args const char**
///
void k_terminalinterface_start_program(void* self, const char* program, const char* args[static 1]);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#showShellInDir)
///
/// @param self TerminalInterface*
/// @param dir const char*
///
void k_terminalinterface_show_shell_in_dir(void* self, const char* dir);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#sendInput)
///
/// @param self TerminalInterface*
/// @param text const char*
///
void k_terminalinterface_send_input(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#terminalProcessId)
///
/// @param self TerminalInterface*
///
int32_t k_terminalinterface_terminal_process_id(void* self);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#foregroundProcessId)
///
/// @param self TerminalInterface*
///
int32_t k_terminalinterface_foreground_process_id(void* self);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#foregroundProcessName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self TerminalInterface*
///
const char* k_terminalinterface_foreground_process_name(void* self);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#currentWorkingDirectory)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self TerminalInterface*
///
const char* k_terminalinterface_current_working_directory(void* self);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#availableProfiles)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self TerminalInterface*
///
const char** k_terminalinterface_available_profiles(void* self);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#currentProfileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self TerminalInterface*
///
const char* k_terminalinterface_current_profile_name(void* self);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#setCurrentProfile)
///
/// @param self TerminalInterface*
/// @param profileName const char*
///
bool k_terminalinterface_set_current_profile(void* self, const char* profileName);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#profileProperty)
///
/// @param self TerminalInterface*
/// @param profileProperty const char*
///
QVariant* k_terminalinterface_profile_property(void* self, const char* profileProperty);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#operator-eq)
///
/// @param self TerminalInterface*
/// @param param1 TerminalInterface*
///
void k_terminalinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/terminalinterface.html#dtor.TerminalInterface)
///
/// Delete this object from C++ memory.
///
/// @param self TerminalInterface*
///
void k_terminalinterface_delete(void* self);

#endif
