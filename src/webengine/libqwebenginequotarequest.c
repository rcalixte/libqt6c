#include "../libqurl.hpp"
#include "libqwebenginequotarequest.hpp"
#include "libqwebenginequotarequest.h"

QWebEngineQuotaRequest* q_webenginequotarequest_new() {
    return QWebEngineQuotaRequest_new();
}

QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* param1) {
    return QWebEngineQuotaRequest_new2((QWebEngineQuotaRequest*)param1);
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

bool q_webenginequotarequest_operator_equal(void* self, void* that) {
    return QWebEngineQuotaRequest_OperatorEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)that);
}

bool q_webenginequotarequest_operator_not_equal(void* self, void* that) {
    return QWebEngineQuotaRequest_OperatorNotEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)that);
}

void q_webenginequotarequest_delete(void* self) {
    QWebEngineQuotaRequest_Delete((QWebEngineQuotaRequest*)(self));
}
