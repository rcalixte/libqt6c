#include "../libqwidget.hpp"
#include "libkmessageboxnotifyinterface.hpp"
#include "libkmessageboxnotifyinterface.h"

KMessageBoxNotifyInterface* k_messageboxnotifyinterface_new() {
    return KMessageBoxNotifyInterface_new();
}

void k_messageboxnotifyinterface_send_notification(void* self, int32_t notificationType, const char* message, void* parent) {
    KMessageBoxNotifyInterface_SendNotification((KMessageBoxNotifyInterface*)self, notificationType, qstring(message), (QWidget*)parent);
}

void k_messageboxnotifyinterface_on_send_notification(void* self, void (*callback)(void*, int32_t, const char*, void*)) {
    KMessageBoxNotifyInterface_OnSendNotification((KMessageBoxNotifyInterface*)self, (intptr_t)callback);
}

void k_messageboxnotifyinterface_super_send_notification(void* self, int32_t notificationType, const char* message, void* parent) {
    KMessageBoxNotifyInterface_SuperSendNotification((KMessageBoxNotifyInterface*)self, notificationType, qstring(message), (QWidget*)parent);
}

void k_messageboxnotifyinterface_operator_assign(void* self, void* param1) {
    KMessageBoxNotifyInterface_OperatorAssign((KMessageBoxNotifyInterface*)self, (KMessageBoxNotifyInterface*)param1);
}

void k_messageboxnotifyinterface_delete(void* self) {
    KMessageBoxNotifyInterface_Delete((KMessageBoxNotifyInterface*)(self));
}
