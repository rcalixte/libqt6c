#include "libshell.hpp"
#include "libshell.h"

LayerShellQt__Shell* k_layershellqt__shell_new(void* other) {
    return LayerShellQt__Shell_new((LayerShellQt__Shell*)other);
}

LayerShellQt__Shell* k_layershellqt__shell_new2(void* other) {
    return LayerShellQt__Shell_new2((LayerShellQt__Shell*)other);
}

void k_layershellqt__shell_copy_assign(void* self, void* other) {
    LayerShellQt__Shell_CopyAssign((LayerShellQt__Shell*)self, (LayerShellQt__Shell*)other);
}

void k_layershellqt__shell_move_assign(void* self, void* other) {
    LayerShellQt__Shell_MoveAssign((LayerShellQt__Shell*)self, (LayerShellQt__Shell*)other);
}

void k_layershellqt__shell_use_layer_shell() {
    LayerShellQt__Shell_UseLayerShell();
}

void k_layershellqt__shell_delete(void* self) {
    LayerShellQt__Shell_Delete((LayerShellQt__Shell*)(self));
}
