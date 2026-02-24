#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libsessionconfiginterface.hpp"
#include "libsessionconfiginterface.h"

KTextEditor__SessionConfigInterface* k_texteditor__sessionconfiginterface_new() {
    return KTextEditor__SessionConfigInterface_new();
}

void k_texteditor__sessionconfiginterface_read_session_config(void* self, void* config) {
    KTextEditor__SessionConfigInterface_ReadSessionConfig((KTextEditor__SessionConfigInterface*)self, (KConfigGroup*)config);
}

void k_texteditor__sessionconfiginterface_on_read_session_config(void* self, void (*callback)(void*, void*)) {
    KTextEditor__SessionConfigInterface_OnReadSessionConfig((KTextEditor__SessionConfigInterface*)self, (intptr_t)callback);
}

void k_texteditor__sessionconfiginterface_super_read_session_config(void* self, void* config) {
    KTextEditor__SessionConfigInterface_SuperReadSessionConfig((KTextEditor__SessionConfigInterface*)self, (KConfigGroup*)config);
}

void k_texteditor__sessionconfiginterface_write_session_config(void* self, void* config) {
    KTextEditor__SessionConfigInterface_WriteSessionConfig((KTextEditor__SessionConfigInterface*)self, (KConfigGroup*)config);
}

void k_texteditor__sessionconfiginterface_on_write_session_config(void* self, void (*callback)(void*, void*)) {
    KTextEditor__SessionConfigInterface_OnWriteSessionConfig((KTextEditor__SessionConfigInterface*)self, (intptr_t)callback);
}

void k_texteditor__sessionconfiginterface_super_write_session_config(void* self, void* config) {
    KTextEditor__SessionConfigInterface_SuperWriteSessionConfig((KTextEditor__SessionConfigInterface*)self, (KConfigGroup*)config);
}

void k_texteditor__sessionconfiginterface_delete(void* self) {
    KTextEditor__SessionConfigInterface_Delete((KTextEditor__SessionConfigInterface*)(self));
}
