#include "../libqvariant.hpp"
#include "libkde_terminal_interface.hpp"
#include "libkde_terminal_interface.h"

void k_terminalinterface_operator_assign(void* self, const void* param1) {
    TerminalInterface_OperatorAssign((TerminalInterface*)self, (TerminalInterface*)param1);
}

void k_terminalinterface_delete(void* self) {
    TerminalInterface_Delete((TerminalInterface*)(self));
}
