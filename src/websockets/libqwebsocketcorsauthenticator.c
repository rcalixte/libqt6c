#include "libqwebsocketcorsauthenticator.hpp"
#include "libqwebsocketcorsauthenticator.h"

QWebSocketCorsAuthenticator* q_websocketcorsauthenticator_new(const char* origin) {
    return QWebSocketCorsAuthenticator_new(qstring(origin));
}

QWebSocketCorsAuthenticator* q_websocketcorsauthenticator_new2(void* other) {
    return QWebSocketCorsAuthenticator_new2((QWebSocketCorsAuthenticator*)other);
}

void q_websocketcorsauthenticator_swap(void* self, void* other) {
    QWebSocketCorsAuthenticator_Swap((QWebSocketCorsAuthenticator*)self, (QWebSocketCorsAuthenticator*)other);
}

void q_websocketcorsauthenticator_operator_assign(void* self, void* other) {
    QWebSocketCorsAuthenticator_OperatorAssign((QWebSocketCorsAuthenticator*)self, (QWebSocketCorsAuthenticator*)other);
}

const char* q_websocketcorsauthenticator_origin(void* self) {
    libqt_string _str = QWebSocketCorsAuthenticator_Origin((QWebSocketCorsAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocketcorsauthenticator_set_allowed(void* self, bool allowed) {
    QWebSocketCorsAuthenticator_SetAllowed((QWebSocketCorsAuthenticator*)self, allowed);
}

bool q_websocketcorsauthenticator_allowed(void* self) {
    return QWebSocketCorsAuthenticator_Allowed((QWebSocketCorsAuthenticator*)self);
}

void q_websocketcorsauthenticator_delete(void* self) {
    QWebSocketCorsAuthenticator_Delete((QWebSocketCorsAuthenticator*)(self));
}
