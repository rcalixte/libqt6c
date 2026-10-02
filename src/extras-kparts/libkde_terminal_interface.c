#include "../libqvariant.hpp"
#include "libkde_terminal_interface.hpp"
#include "libkde_terminal_interface.h"

void k_terminalinterface_delete(void* self) {
    TerminalInterface_Delete((TerminalInterface*)(self));
}
