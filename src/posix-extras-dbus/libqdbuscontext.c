#include "libqdbusconnection.hpp"
#include "libqdbusmessage.hpp"
#include "libqdbuscontext.hpp"
#include "libqdbuscontext.h"

QDBusContext* q_dbuscontext_new() {
    return QDBusContext_new();
}

bool q_dbuscontext_called_from_d_bus(void* self) {
    return QDBusContext_CalledFromDBus((QDBusContext*)self);
}

QDBusConnection* q_dbuscontext_connection(void* self) {
    return QDBusContext_Connection((QDBusContext*)self);
}

const QDBusMessage* q_dbuscontext_message(void* self) {
    return QDBusContext_Message((QDBusContext*)self);
}

bool q_dbuscontext_is_delayed_reply(void* self) {
    return QDBusContext_IsDelayedReply((QDBusContext*)self);
}

void q_dbuscontext_set_delayed_reply(void* self, bool enable) {
    QDBusContext_SetDelayedReply((QDBusContext*)self, enable);
}

void q_dbuscontext_send_error_reply(void* self, const char* name) {
    QDBusContext_SendErrorReply((QDBusContext*)self, qstring(name));
}

void q_dbuscontext_send_error_reply2(void* self, int32_t type) {
    QDBusContext_SendErrorReply2((QDBusContext*)self, type);
}

void q_dbuscontext_send_error_reply22(void* self, const char* name, const char* msg) {
    QDBusContext_SendErrorReply22((QDBusContext*)self, qstring(name), qstring(msg));
}

void q_dbuscontext_send_error_reply23(void* self, int32_t type, const char* msg) {
    QDBusContext_SendErrorReply23((QDBusContext*)self, type, qstring(msg));
}

void q_dbuscontext_delete(void* self) {
    QDBusContext_Delete((QDBusContext*)(self));
}
