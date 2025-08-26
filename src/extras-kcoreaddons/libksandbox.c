#include "../libqprocess.hpp"
#include "libksandbox.hpp"
#include "libksandbox.h"

bool k_sandbox_is_inside() {
    return KSandbox_IsInside();
}

bool k_sandbox_is_flatpak() {
    return KSandbox_IsFlatpak();
}

bool k_sandbox_is_snap() {
    return KSandbox_IsSnap();
}

KSandbox__ProcessContext* k_sandbox_make_host_context(void* param1) {
    return KSandbox_MakeHostContext((QProcess*)param1);
}

void k_sandbox_start_host_process(void* param1, int64_t param2) {
    KSandbox_StartHostProcess((QProcess*)param1, param2);
}

KSandbox__ProcessContext* k_sandbox__processcontext_new(void* param1) {
    return KSandbox__ProcessContext_new((KSandbox__ProcessContext*)param1);
}

void k_sandbox__processcontext_delete(void* self) {
    KSandbox__ProcessContext_Delete((KSandbox__ProcessContext*)(self));
}
