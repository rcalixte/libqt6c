#include "../libqurl.hpp"
#include "libqwebenginequotarequest.hpp"
#include "libqwebenginequotarequest.h"

QWebEngineQuotaRequest* q_webenginequotarequest_new(void* other) {
    return QWebEngineQuotaRequest_new((QWebEngineQuotaRequest*)other);
}

QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* other) {
    return QWebEngineQuotaRequest_new2((QWebEngineQuotaRequest*)other);
}

QWebEngineQuotaRequest* q_webenginequotarequest_new3() {
    return QWebEngineQuotaRequest_new3();
}

void q_webenginequotarequest_copy_assign(void* self, void* other) {
    QWebEngineQuotaRequest_CopyAssign((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)other);
}

void q_webenginequotarequest_move_assign(void* self, void* other) {
    QWebEngineQuotaRequest_MoveAssign((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)other);
}

void q_webenginequotarequest_accept(void* self) {
    QWebEngineQuotaRequest_Accept((QWebEngineQuotaRequest*)self);
}

void q_webenginequotarequest_reject(void* self) {
    QWebEngineQuotaRequest_Reject((QWebEngineQuotaRequest*)self);
}

QUrl* q_webenginequotarequest_origin(void* self) {
    return QWebEngineQuotaRequest_Origin((QWebEngineQuotaRequest*)self);
}

long long q_webenginequotarequest_requested_size(void* self) {
    return QWebEngineQuotaRequest_RequestedSize((QWebEngineQuotaRequest*)self);
}

bool q_webenginequotarequest_operator_equal(void* self, void* param1) {
    return QWebEngineQuotaRequest_OperatorEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)param1);
}

bool q_webenginequotarequest_operator_not_equal(void* self, void* param1) {
    return QWebEngineQuotaRequest_OperatorNotEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)param1);
}

void q_webenginequotarequest_delete(void* self) {
    QWebEngineQuotaRequest_Delete((QWebEngineQuotaRequest*)(self));
}
