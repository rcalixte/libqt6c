#include "libqdbuspendingcall.hpp"
#include "libqdbuspendingreply.hpp"
#include "libqdbuspendingreply.h"

void q_dbuspendingreplybase_operator_assign(void* self, void* other) {
    QDBusPendingCall_OperatorAssign((QDBusPendingCall*)self, (QDBusPendingCall*)other);
}

void q_dbuspendingreplybase_swap(void* self, void* other) {
    QDBusPendingCall_Swap((QDBusPendingCall*)self, (QDBusPendingCall*)other);
}

bool q_dbuspendingreplybase_is_finished(void* self) {
    return QDBusPendingCall_IsFinished((QDBusPendingCall*)self);
}

void q_dbuspendingreplybase_wait_for_finished(void* self) {
    QDBusPendingCall_WaitForFinished((QDBusPendingCall*)self);
}

bool q_dbuspendingreplybase_is_error(void* self) {
    return QDBusPendingCall_IsError((QDBusPendingCall*)self);
}

bool q_dbuspendingreplybase_is_valid(void* self) {
    return QDBusPendingCall_IsValid((QDBusPendingCall*)self);
}

QDBusError* q_dbuspendingreplybase_error(void* self) {
    return QDBusPendingCall_Error((QDBusPendingCall*)self);
}

QDBusMessage* q_dbuspendingreplybase_reply(void* self) {
    return QDBusPendingCall_Reply((QDBusPendingCall*)self);
}

QDBusPendingCall* q_dbuspendingreplybase_from_error(void* errorVal) {
    return QDBusPendingCall_FromError((QDBusError*)errorVal);
}

QDBusPendingCall* q_dbuspendingreplybase_from_completed_call(void* message) {
    return QDBusPendingCall_FromCompletedCall((QDBusMessage*)message);
}
