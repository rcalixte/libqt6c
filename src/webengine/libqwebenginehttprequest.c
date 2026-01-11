#include "../libqurl.hpp"
#include "libqwebenginehttprequest.hpp"
#include "libqwebenginehttprequest.h"

QWebEngineHttpRequest* q_webenginehttprequest_new() {
    return QWebEngineHttpRequest_new();
}

QWebEngineHttpRequest* q_webenginehttprequest_new2(void* other) {
    return QWebEngineHttpRequest_new2((QWebEngineHttpRequest*)other);
}

QWebEngineHttpRequest* q_webenginehttprequest_new3(void* url) {
    return QWebEngineHttpRequest_new3((QUrl*)url);
}

QWebEngineHttpRequest* q_webenginehttprequest_new4(void* url, int32_t* method) {
    return QWebEngineHttpRequest_new4((QUrl*)url, method);
}

void q_webenginehttprequest_operator_assign(void* self, void* other) {
    QWebEngineHttpRequest_OperatorAssign((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

QWebEngineHttpRequest* q_webenginehttprequest_post_request(void* url, libqt_map /* of const char* to const char* */ postData) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map postData_ret;
    postData_ret.len = postData.len;
    postData_ret.keys = (libqt_string*)malloc(postData_ret.len * sizeof(libqt_string));
    if (postData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_webenginehttprequest_post_request\n");
        abort();
    }
    postData_ret.values = (libqt_string*)malloc(postData_ret.len * sizeof(libqt_string));
    if (postData_ret.values == NULL) {
        free(postData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_webenginehttprequest_post_request\n");
        abort();
    }
    const char** postData_karr = (const char**)postData.keys;
    libqt_string* postData_kdest = (libqt_string*)postData_ret.keys;
    const char** postData_varr = (const char**)postData.values;
    libqt_string* postData_vdest = (libqt_string*)postData_ret.values;
    for (size_t i = 0; i < postData_ret.len; ++i) {
        postData_kdest[i] = qstring(postData_karr[i]);
        postData_vdest[i] = qstring(postData_varr[i]);
    }
    QWebEngineHttpRequest* _out = QWebEngineHttpRequest_PostRequest((QUrl*)url, postData_ret);
    free(postData_ret.keys);
    free(postData_ret.values);
    return _out;
}

void q_webenginehttprequest_swap(void* self, void* other) {
    QWebEngineHttpRequest_Swap((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

bool q_webenginehttprequest_operator_equal(void* self, void* other) {
    return QWebEngineHttpRequest_OperatorEqual((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

bool q_webenginehttprequest_operator_not_equal(void* self, void* other) {
    return QWebEngineHttpRequest_OperatorNotEqual((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

int32_t q_webenginehttprequest_method(void* self) {
    return QWebEngineHttpRequest_Method((QWebEngineHttpRequest*)self);
}

void q_webenginehttprequest_set_method(void* self, int32_t method) {
    QWebEngineHttpRequest_SetMethod((QWebEngineHttpRequest*)self, method);
}

QUrl* q_webenginehttprequest_url(void* self) {
    return QWebEngineHttpRequest_Url((QWebEngineHttpRequest*)self);
}

void q_webenginehttprequest_set_url(void* self, void* url) {
    QWebEngineHttpRequest_SetUrl((QWebEngineHttpRequest*)self, (QUrl*)url);
}

char* q_webenginehttprequest_post_data(void* self) {
    libqt_string _str = QWebEngineHttpRequest_PostData((QWebEngineHttpRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginehttprequest_set_post_data(void* self, const char* postData) {
    QWebEngineHttpRequest_SetPostData((QWebEngineHttpRequest*)self, qstring(postData));
}

bool q_webenginehttprequest_has_header(void* self, const char* headerName) {
    return QWebEngineHttpRequest_HasHeader((QWebEngineHttpRequest*)self, qstring(headerName));
}

const char** q_webenginehttprequest_headers(void* self) {
    libqt_list _arr = QWebEngineHttpRequest_Headers((QWebEngineHttpRequest*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginehttprequest_headers");
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

char* q_webenginehttprequest_header(void* self, const char* headerName) {
    libqt_string _str = QWebEngineHttpRequest_Header((QWebEngineHttpRequest*)self, qstring(headerName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginehttprequest_set_header(void* self, const char* headerName, const char* value) {
    QWebEngineHttpRequest_SetHeader((QWebEngineHttpRequest*)self, qstring(headerName), qstring(value));
}

void q_webenginehttprequest_unset_header(void* self, const char* headerName) {
    QWebEngineHttpRequest_UnsetHeader((QWebEngineHttpRequest*)self, qstring(headerName));
}

void q_webenginehttprequest_delete(void* self) {
    QWebEngineHttpRequest_Delete((QWebEngineHttpRequest*)(self));
}
