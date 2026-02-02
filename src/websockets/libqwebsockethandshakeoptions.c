#include "libqwebsockethandshakeoptions.hpp"
#include "libqwebsockethandshakeoptions.h"

QWebSocketHandshakeOptions* q_websockethandshakeoptions_new() {
    return QWebSocketHandshakeOptions_new();
}

QWebSocketHandshakeOptions* q_websockethandshakeoptions_new2(void* other) {
    return QWebSocketHandshakeOptions_new2((QWebSocketHandshakeOptions*)other);
}

void q_websockethandshakeoptions_operator_assign(void* self, void* other) {
    QWebSocketHandshakeOptions_OperatorAssign((QWebSocketHandshakeOptions*)self, (QWebSocketHandshakeOptions*)other);
}

void q_websockethandshakeoptions_swap(void* self, void* other) {
    QWebSocketHandshakeOptions_Swap((QWebSocketHandshakeOptions*)self, (QWebSocketHandshakeOptions*)other);
}

const char** q_websockethandshakeoptions_subprotocols(void* self) {
    libqt_list _arr = QWebSocketHandshakeOptions_Subprotocols((QWebSocketHandshakeOptions*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_websockethandshakeoptions_subprotocols\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_websockethandshakeoptions_set_subprotocols(void* self, const char* protocols[static 1]) {
    size_t protocols_len = libqt_strv_length(protocols);
    libqt_string* protocols_qstr = (libqt_string*)malloc(protocols_len * sizeof(libqt_string));
    if (protocols_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_websockethandshakeoptions_set_subprotocols\n");
        abort();
    }
    for (size_t i = 0; i < protocols_len; ++i) {
        protocols_qstr[i] = qstring(protocols[i]);
    }
    libqt_list protocols_list = qlist(protocols_qstr, protocols_len);
    QWebSocketHandshakeOptions_SetSubprotocols((QWebSocketHandshakeOptions*)self, protocols_list);
    free(protocols_qstr);
}

void q_websockethandshakeoptions_delete(void* self) {
    QWebSocketHandshakeOptions_Delete((QWebSocketHandshakeOptions*)(self));
}
