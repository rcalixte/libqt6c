#include "../libqurl.hpp"
#include "libqwebenginepermission.hpp"
#include "libqwebenginepermission.h"

QWebEnginePermission* q_webenginepermission_new() {
    return QWebEnginePermission_new();
}

QWebEnginePermission* q_webenginepermission_new2(void* other) {
    return QWebEnginePermission_new2((QWebEnginePermission*)other);
}

void q_webenginepermission_operator_assign(void* self, void* other) {
    QWebEnginePermission_OperatorAssign((QWebEnginePermission*)self, (QWebEnginePermission*)other);
}

void q_webenginepermission_swap(void* self, void* other) {
    QWebEnginePermission_Swap((QWebEnginePermission*)self, (QWebEnginePermission*)other);
}

QUrl* q_webenginepermission_origin(void* self) {
    return QWebEnginePermission_Origin((QWebEnginePermission*)self);
}

uint8_t q_webenginepermission_permission_type(void* self) {
    return QWebEnginePermission_PermissionType((QWebEnginePermission*)self);
}

uint8_t q_webenginepermission_state(void* self) {
    return QWebEnginePermission_State((QWebEnginePermission*)self);
}

bool q_webenginepermission_is_valid(void* self) {
    return QWebEnginePermission_IsValid((QWebEnginePermission*)self);
}

void q_webenginepermission_grant(void* self) {
    QWebEnginePermission_Grant((QWebEnginePermission*)self);
}

void q_webenginepermission_deny(void* self) {
    QWebEnginePermission_Deny((QWebEnginePermission*)self);
}

void q_webenginepermission_reset(void* self) {
    QWebEnginePermission_Reset((QWebEnginePermission*)self);
}

bool q_webenginepermission_is_persistent(uint8_t permissionType) {
    return QWebEnginePermission_IsPersistent(permissionType);
}

void q_webenginepermission_delete(void* self) {
    QWebEnginePermission_Delete((QWebEnginePermission*)(self));
}
