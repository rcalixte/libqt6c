#include "../extras-kconfig/libkconfig.hpp"
#include "libkmessageboxdontaskagaininterface.hpp"
#include "libkmessageboxdontaskagaininterface.h"

KMessageBoxDontAskAgainInterface* k_messageboxdontaskagaininterface_new() {
    return KMessageBoxDontAskAgainInterface_new();
}

bool k_messageboxdontaskagaininterface_should_be_shown_two_actions(void* self, const char* dontShowAgainName, int32_t* result) {
    return KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName), result);
}

void k_messageboxdontaskagaininterface_on_should_be_shown_two_actions(void* self, bool (*callback)(void*, const char*, int32_t*)) {
    KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

bool k_messageboxdontaskagaininterface_super_should_be_shown_two_actions(void* self, const char* dontShowAgainName, int32_t* result) {
    return KMessageBoxDontAskAgainInterface_SuperShouldBeShownTwoActions((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName), result);
}

bool k_messageboxdontaskagaininterface_should_be_shown_continue(void* self, const char* dontShowAgainName) {
    return KMessageBoxDontAskAgainInterface_ShouldBeShownContinue((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName));
}

void k_messageboxdontaskagaininterface_on_should_be_shown_continue(void* self, bool (*callback)(void*, const char*)) {
    KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

bool k_messageboxdontaskagaininterface_super_should_be_shown_continue(void* self, const char* dontShowAgainName) {
    return KMessageBoxDontAskAgainInterface_SuperShouldBeShownContinue((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName));
}

void k_messageboxdontaskagaininterface_save_dont_show_again_two_actions(void* self, const char* dontShowAgainName, int32_t result) {
    KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName), result);
}

void k_messageboxdontaskagaininterface_on_save_dont_show_again_two_actions(void* self, void (*callback)(void*, const char*, int32_t)) {
    KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

void k_messageboxdontaskagaininterface_super_save_dont_show_again_two_actions(void* self, const char* dontShowAgainName, int32_t result) {
    KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainTwoActions((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName), result);
}

void k_messageboxdontaskagaininterface_save_dont_show_again_continue(void* self, const char* dontShowAgainName) {
    KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName));
}

void k_messageboxdontaskagaininterface_on_save_dont_show_again_continue(void* self, void (*callback)(void*, const char*)) {
    KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

void k_messageboxdontaskagaininterface_super_save_dont_show_again_continue(void* self, const char* dontShowAgainName) {
    KMessageBoxDontAskAgainInterface_SuperSaveDontShowAgainContinue((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName));
}

void k_messageboxdontaskagaininterface_enable_all_messages(void* self) {
    KMessageBoxDontAskAgainInterface_EnableAllMessages((KMessageBoxDontAskAgainInterface*)self);
}

void k_messageboxdontaskagaininterface_on_enable_all_messages(void* self, void (*callback)()) {
    KMessageBoxDontAskAgainInterface_OnEnableAllMessages((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

void k_messageboxdontaskagaininterface_super_enable_all_messages(void* self) {
    KMessageBoxDontAskAgainInterface_SuperEnableAllMessages((KMessageBoxDontAskAgainInterface*)self);
}

void k_messageboxdontaskagaininterface_enable_message(void* self, const char* dontShowAgainName) {
    KMessageBoxDontAskAgainInterface_EnableMessage((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName));
}

void k_messageboxdontaskagaininterface_on_enable_message(void* self, void (*callback)(void*, const char*)) {
    KMessageBoxDontAskAgainInterface_OnEnableMessage((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

void k_messageboxdontaskagaininterface_super_enable_message(void* self, const char* dontShowAgainName) {
    KMessageBoxDontAskAgainInterface_SuperEnableMessage((KMessageBoxDontAskAgainInterface*)self, qstring(dontShowAgainName));
}

void k_messageboxdontaskagaininterface_set_config(void* self, void* config) {
    KMessageBoxDontAskAgainInterface_SetConfig((KMessageBoxDontAskAgainInterface*)self, (KConfig*)config);
}

void k_messageboxdontaskagaininterface_on_set_config(void* self, void (*callback)(void*, void*)) {
    KMessageBoxDontAskAgainInterface_OnSetConfig((KMessageBoxDontAskAgainInterface*)self, (intptr_t)callback);
}

void k_messageboxdontaskagaininterface_super_set_config(void* self, void* config) {
    KMessageBoxDontAskAgainInterface_SuperSetConfig((KMessageBoxDontAskAgainInterface*)self, (KConfig*)config);
}

void k_messageboxdontaskagaininterface_operator_assign(void* self, void* param1) {
    KMessageBoxDontAskAgainInterface_OperatorAssign((KMessageBoxDontAskAgainInterface*)self, (KMessageBoxDontAskAgainInterface*)param1);
}

void k_messageboxdontaskagaininterface_delete(void* self) {
    KMessageBoxDontAskAgainInterface_Delete((KMessageBoxDontAskAgainInterface*)(self));
}
