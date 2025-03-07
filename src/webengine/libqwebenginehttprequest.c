#include <string.h>
#include "../libqurl.hpp"
#include "libqwebenginehttprequest.hpp"
#include "libqwebenginehttprequest.h"

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html

/// q_webenginehttprequest_new constructs a new QWebEngineHttpRequest object.
///
///
QWebEngineHttpRequest* q_webenginehttprequest_new() {
    return QWebEngineHttpRequest_new();
}

/// q_webenginehttprequest_new2 constructs a new QWebEngineHttpRequest object.
///
/// ``` QWebEngineHttpRequest* other ```
QWebEngineHttpRequest* q_webenginehttprequest_new2(void* other) {
    return QWebEngineHttpRequest_new2((QWebEngineHttpRequest*)other);
}

/// q_webenginehttprequest_new3 constructs a new QWebEngineHttpRequest object.
///
/// ``` QUrl* url ```
QWebEngineHttpRequest* q_webenginehttprequest_new3(void* url) {
    return QWebEngineHttpRequest_new3((QUrl*)url);
}

/// q_webenginehttprequest_new4 constructs a new QWebEngineHttpRequest object.
///
/// ``` QUrl* url, enum QWebEngineHttpRequest__Method* method ```
QWebEngineHttpRequest* q_webenginehttprequest_new4(void* url, int64_t* method) {
    return QWebEngineHttpRequest_new4((QUrl*)url, method);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator=)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
void q_webenginehttprequest_operator_assign(void* self, void* other) {
    QWebEngineHttpRequest_OperatorAssign((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
///
/// ``` QUrl* url, libqt_map /* of const char* to const char* */ postData ```
QWebEngineHttpRequest* q_webenginehttprequest_post_request(void* url, libqt_map /* of const char* to const char* */ postData) {
    return QWebEngineHttpRequest_PostRequest((QUrl*)url, postData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
void q_webenginehttprequest_swap(void* self, void* other) {
    QWebEngineHttpRequest_Swap((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator==)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
bool q_webenginehttprequest_operator_equal(void* self, void* other) {
    return QWebEngineHttpRequest_OperatorEqual((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator!=)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
bool q_webenginehttprequest_operator_not_equal(void* self, void* other) {
    return QWebEngineHttpRequest_OperatorNotEqual((QWebEngineHttpRequest*)self, (QWebEngineHttpRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
///
/// ``` QWebEngineHttpRequest* self ```
int64_t q_webenginehttprequest_method(void* self) {
    return QWebEngineHttpRequest_Method((QWebEngineHttpRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
///
/// ``` QWebEngineHttpRequest* self, enum QWebEngineHttpRequest__Method method ```
void q_webenginehttprequest_set_method(void* self, int64_t method) {
    QWebEngineHttpRequest_SetMethod((QWebEngineHttpRequest*)self, method);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
///
/// ``` QWebEngineHttpRequest* self ```
QUrl* q_webenginehttprequest_url(void* self) {
    return QWebEngineHttpRequest_Url((QWebEngineHttpRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
///
/// ``` QWebEngineHttpRequest* self, QUrl* url ```
void q_webenginehttprequest_set_url(void* self, void* url) {
    QWebEngineHttpRequest_SetUrl((QWebEngineHttpRequest*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
///
/// ``` QWebEngineHttpRequest* self ```
char* q_webenginehttprequest_post_data(void* self) {
    libqt_string _str = QWebEngineHttpRequest_PostData((QWebEngineHttpRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
///
/// ``` QWebEngineHttpRequest* self, const char* postData ```
void q_webenginehttprequest_set_post_data(void* self, const char* postData) {
    QWebEngineHttpRequest_SetPostData((QWebEngineHttpRequest*)self, qstring(postData));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName ```
bool q_webenginehttprequest_has_header(void* self, const char* headerName) {
    return QWebEngineHttpRequest_HasHeader((QWebEngineHttpRequest*)self, qstring(headerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
///
/// ``` QWebEngineHttpRequest* self ```
const char** q_webenginehttprequest_headers(void* self) {
    libqt_list _arr = QWebEngineHttpRequest_Headers((QWebEngineHttpRequest*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#header)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName ```
char* q_webenginehttprequest_header(void* self, const char* headerName) {
    libqt_string _str = QWebEngineHttpRequest_Header((QWebEngineHttpRequest*)self, qstring(headerName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName, const char* value ```
void q_webenginehttprequest_set_header(void* self, const char* headerName, const char* value) {
    QWebEngineHttpRequest_SetHeader((QWebEngineHttpRequest*)self, qstring(headerName), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName ```
void q_webenginehttprequest_unset_header(void* self, const char* headerName) {
    QWebEngineHttpRequest_UnsetHeader((QWebEngineHttpRequest*)self, qstring(headerName));
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineHttpRequest* self ```
void q_webenginehttprequest_delete(void* self) {
    QWebEngineHttpRequest_Delete((QWebEngineHttpRequest*)(self));
}