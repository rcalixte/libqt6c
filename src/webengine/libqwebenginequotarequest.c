#include "../libqurl.hpp"
#include "libqwebenginequotarequest.hpp"
#include "libqwebenginequotarequest.h"

/// https://doc.qt.io/qt-6/qwebenginequotarequest.html

/// q_webenginequotarequest_new constructs a new QWebEngineQuotaRequest object.
///
///
QWebEngineQuotaRequest* q_webenginequotarequest_new() {
    return QWebEngineQuotaRequest_new();
}

/// q_webenginequotarequest_new2 constructs a new QWebEngineQuotaRequest object.
///
/// ``` QWebEngineQuotaRequest* param1 ```
QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* param1) {
    return QWebEngineQuotaRequest_new2((QWebEngineQuotaRequest*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#accept)
///
/// ``` QWebEngineQuotaRequest* self ```
void q_webenginequotarequest_accept(void* self) {
    QWebEngineQuotaRequest_Accept((QWebEngineQuotaRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#reject)
///
/// ``` QWebEngineQuotaRequest* self ```
void q_webenginequotarequest_reject(void* self) {
    QWebEngineQuotaRequest_Reject((QWebEngineQuotaRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#origin)
///
/// ``` QWebEngineQuotaRequest* self ```
QUrl* q_webenginequotarequest_origin(void* self) {
    return QWebEngineQuotaRequest_Origin((QWebEngineQuotaRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#requestedSize)
///
/// ``` QWebEngineQuotaRequest* self ```
long long q_webenginequotarequest_requested_size(void* self) {
    return QWebEngineQuotaRequest_RequestedSize((QWebEngineQuotaRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator==)
///
/// ``` QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that ```
bool q_webenginequotarequest_operator_equal(void* self, void* that) {
    return QWebEngineQuotaRequest_OperatorEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)that);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator!=)
///
/// ``` QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that ```
bool q_webenginequotarequest_operator_not_equal(void* self, void* that) {
    return QWebEngineQuotaRequest_OperatorNotEqual((QWebEngineQuotaRequest*)self, (QWebEngineQuotaRequest*)that);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineQuotaRequest* self ```
void q_webenginequotarequest_delete(void* self) {
    QWebEngineQuotaRequest_Delete((QWebEngineQuotaRequest*)(self));
}