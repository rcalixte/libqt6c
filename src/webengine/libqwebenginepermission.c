#include "../libqurl.hpp"
#include "libqwebenginepermission.hpp"
#include "libqwebenginepermission.h"

QWebEnginePermission* q_webenginepermission_new() {
    return QWebEnginePermission_New();
}

QWebEnginePermission* q_webenginepermission_new2(const void* other) {
    return QWebEnginePermission_New2((QWebEnginePermission*)other);
}

void q_webenginepermission_operator_assign(void* self, const void* other) {
    QWebEnginePermission_OperatorAssign((QWebEnginePermission*)self, (QWebEnginePermission*)other);
}

void q_webenginepermission_swap(void* self, void* other) {
    QWebEnginePermission_Swap((QWebEnginePermission*)self, (QWebEnginePermission*)other);
}

QUrl* q_webenginepermission_origin(const void* self) {
    return QWebEnginePermission_Origin((QWebEnginePermission*)self);
}

uint8_t q_webenginepermission_permission_type(const void* self) {
    return QWebEnginePermission_PermissionType((QWebEnginePermission*)self);
}

uint8_t q_webenginepermission_state(const void* self) {
    return QWebEnginePermission_State((QWebEnginePermission*)self);
}

bool q_webenginepermission_is_valid(const void* self) {
    return QWebEnginePermission_IsValid((QWebEnginePermission*)self);
}

void q_webenginepermission_grant(const void* self) {
    QWebEnginePermission_Grant((QWebEnginePermission*)self);
}

void q_webenginepermission_deny(const void* self) {
    QWebEnginePermission_Deny((QWebEnginePermission*)self);
}

void q_webenginepermission_reset(const void* self) {
    QWebEnginePermission_Reset((QWebEnginePermission*)self);
}

bool q_webenginepermission_is_persistent(uint8_t permissionType) {
    return QWebEnginePermission_IsPersistent(permissionType);
}

void q_webenginepermission_delete(void* self) {
    QWebEnginePermission_Delete((QWebEnginePermission*)(self));
}
