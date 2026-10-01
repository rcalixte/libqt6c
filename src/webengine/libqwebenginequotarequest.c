#include "../libqurl.hpp"
#include "libqwebenginequotarequest.hpp"
#include "libqwebenginequotarequest.h"

QWebEngineQuotaRequest* q_webenginequotarequest_new(const void* other) {
    return QWebEngineQuotaRequest_New((QWebEngineQuotaRequest*)other);
}

QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* other) {
    return QWebEngineQuotaRequest_New2((QWebEngineQuotaRequest*)other);
}

QWebEngineQuotaRequest* q_webenginequotarequest_new3() {
    return QWebEngineQuotaRequest_New3();
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

QUrl* q_webenginequotarequest_origin(const void* self) {
    return QWebEngineQuotaRequest_Origin((QWebEngineQuotaRequest*)self);
}

int64_t q_webenginequotarequest_requested_size(const void* self) {
    return QWebEngineQuotaRequest_RequestedSize((QWebEngineQuotaRequest*)self);
}

bool q_webenginequotarequest_operator_equal(const void* self, const void* param1) {
    return QWebEngineQuotaRequest_OperatorEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)param1);
}

bool q_webenginequotarequest_operator_not_equal(const void* self, const void* param1) {
    return QWebEngineQuotaRequest_OperatorNotEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)param1);
}

void q_webenginequotarequest_delete(void* self) {
    QWebEngineQuotaRequest_Delete((QWebEngineQuotaRequest*)(self));
}
