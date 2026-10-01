#include "../libqurl.hpp"
#include "libqwebenginefullscreenrequest.hpp"
#include "libqwebenginefullscreenrequest.h"

QWebEngineFullScreenRequest* q_webenginefullscreenrequest_new(const void* other) {
    return QWebEngineFullScreenRequest_New((QWebEngineFullScreenRequest*)other);
}

void q_webenginefullscreenrequest_operator_assign(void* self, const void* other) {
    QWebEngineFullScreenRequest_OperatorAssign((QWebEngineFullScreenRequest*)self, (QWebEngineFullScreenRequest*)other);
}

void q_webenginefullscreenrequest_reject(void* self) {
    QWebEngineFullScreenRequest_Reject((QWebEngineFullScreenRequest*)self);
}

void q_webenginefullscreenrequest_accept(void* self) {
    QWebEngineFullScreenRequest_Accept((QWebEngineFullScreenRequest*)self);
}

bool q_webenginefullscreenrequest_toggle_on(const void* self) {
    return QWebEngineFullScreenRequest_ToggleOn((QWebEngineFullScreenRequest*)self);
}

QUrl* q_webenginefullscreenrequest_origin(const void* self) {
    return QWebEngineFullScreenRequest_Origin((QWebEngineFullScreenRequest*)self);
}

void q_webenginefullscreenrequest_delete(void* self) {
    QWebEngineFullScreenRequest_Delete((QWebEngineFullScreenRequest*)(self));
}
