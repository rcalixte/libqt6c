#include "libqnetworkreply.hpp"
#include "libqrestreply.hpp"
#include "libqrestreply.h"

QRestReply* q_restreply_new(void* reply) {
    return QRestReply_new((QNetworkReply*)reply);
}

void q_restreply_swap(void* self, void* other) {
    QRestReply_Swap((QRestReply*)self, (QRestReply*)other);
}

QNetworkReply* q_restreply_network_reply(void* self) {
    return QRestReply_NetworkReply((QRestReply*)self);
}

char* q_restreply_read_body(void* self) {
    libqt_string _str = QRestReply_ReadBody((QRestReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_restreply_read_text(void* self) {
    libqt_string _str = QRestReply_ReadText((QRestReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_restreply_is_success(void* self) {
    return QRestReply_IsSuccess((QRestReply*)self);
}

int32_t q_restreply_http_status(void* self) {
    return QRestReply_HttpStatus((QRestReply*)self);
}

bool q_restreply_is_http_status_success(void* self) {
    return QRestReply_IsHttpStatusSuccess((QRestReply*)self);
}

bool q_restreply_has_error(void* self) {
    return QRestReply_HasError((QRestReply*)self);
}

int64_t q_restreply_error(void* self) {
    return QRestReply_Error((QRestReply*)self);
}

const char* q_restreply_error_string(void* self) {
    libqt_string _str = QRestReply_ErrorString((QRestReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_restreply_delete(void* self) {
    QRestReply_Delete((QRestReply*)(self));
}
