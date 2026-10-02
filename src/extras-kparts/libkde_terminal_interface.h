#pragma once
#ifndef EXTRAS_KPARTS_LIBKDE_TERMINAL_INTERFACE_H
#define EXTRAS_KPARTS_LIBKDE_TERMINAL_INTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/terminalinterface.html)

/// [Upstream resources](https://api.kde.org/terminalinterface.html#dtor.TerminalInterface)
///
/// Delete this object from C++ memory.
///
/// @param self TerminalInterface*
///
void k_terminalinterface_delete(void* self);

#endif
