#include <string.h>
#include "libqurlquery.hpp"
#include "libqurl.hpp"
#include "libqurl.h"

/// https://doc.qt.io/qt-6/qurl.html

/// q_url_new constructs a new QUrl object.
///
///
QUrl* q_url_new() {
    return QUrl_new();
}

/// q_url_new2 constructs a new QUrl object.
///
/// ``` QUrl* copyVal ```
QUrl* q_url_new2(void* copyVal) {
    return QUrl_new2((QUrl*)copyVal);
}

/// q_url_new3 constructs a new QUrl object.
///
/// ``` const char* url ```
QUrl* q_url_new3(const char* url) {
    return QUrl_new3(qstring(url));
}

/// q_url_new4 constructs a new QUrl object.
///
/// ``` const char* url, enum QUrl__ParsingMode mode ```
QUrl* q_url_new4(const char* url, int64_t mode) {
    return QUrl_new4(qstring(url), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator=)
///
/// ``` QUrl* self, QUrl* copyVal ```
void q_url_operator_assign(void* self, void* copyVal) {
    QUrl_OperatorAssign((QUrl*)self, (QUrl*)copyVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator=)
///
/// ``` QUrl* self, const char* url ```
void q_url_operator_assign_with_url(void* self, const char* url) {
    QUrl_OperatorAssignWithUrl((QUrl*)self, qstring(url));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#swap)
///
/// ``` QUrl* self, QUrl* other ```
void q_url_swap(void* self, void* other) {
    QUrl_Swap((QUrl*)self, (QUrl*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUrl)
///
/// ``` QUrl* self, const char* url ```
void q_url_set_url(void* self, const char* url) {
    QUrl_SetUrl((QUrl*)self, qstring(url));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#url)
///
/// ``` QUrl* self ```
const char* q_url_url(void* self) {
    libqt_string _str = QUrl_Url((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toString)
///
/// ``` QUrl* self ```
const char* q_url_to_string(void* self) {
    libqt_string _str = QUrl_ToString((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toDisplayString)
///
/// ``` QUrl* self ```
const char* q_url_to_display_string(void* self) {
    libqt_string _str = QUrl_ToDisplayString((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toEncoded)
///
/// ``` QUrl* self ```
char* q_url_to_encoded(void* self) {
    libqt_string _str = QUrl_ToEncoded((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
///
/// ``` const char* url ```
QUrl* q_url_from_encoded(const char* url) {
    return QUrl_FromEncoded(qstring(url));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// ``` const char* userInput ```
QUrl* q_url_from_user_input(const char* userInput) {
    return QUrl_FromUserInput(qstring(userInput));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isValid)
///
/// ``` QUrl* self ```
bool q_url_is_valid(void* self) {
    return QUrl_IsValid((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#errorString)
///
/// ``` QUrl* self ```
const char* q_url_error_string(void* self) {
    libqt_string _str = QUrl_ErrorString((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isEmpty)
///
/// ``` QUrl* self ```
bool q_url_is_empty(void* self) {
    return QUrl_IsEmpty((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#clear)
///
/// ``` QUrl* self ```
void q_url_clear(void* self) {
    QUrl_Clear((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setScheme)
///
/// ``` QUrl* self, const char* scheme ```
void q_url_set_scheme(void* self, const char* scheme) {
    QUrl_SetScheme((QUrl*)self, qstring(scheme));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#scheme)
///
/// ``` QUrl* self ```
const char* q_url_scheme(void* self) {
    libqt_string _str = QUrl_Scheme((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setAuthority)
///
/// ``` QUrl* self, const char* authority ```
void q_url_set_authority(void* self, const char* authority) {
    QUrl_SetAuthority((QUrl*)self, qstring(authority));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#authority)
///
/// ``` QUrl* self ```
const char* q_url_authority(void* self) {
    libqt_string _str = QUrl_Authority((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
///
/// ``` QUrl* self, const char* userInfo ```
void q_url_set_user_info(void* self, const char* userInfo) {
    QUrl_SetUserInfo((QUrl*)self, qstring(userInfo));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userInfo)
///
/// ``` QUrl* self ```
const char* q_url_user_info(void* self) {
    libqt_string _str = QUrl_UserInfo((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserName)
///
/// ``` QUrl* self, const char* userName ```
void q_url_set_user_name(void* self, const char* userName) {
    QUrl_SetUserName((QUrl*)self, qstring(userName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userName)
///
/// ``` QUrl* self ```
const char* q_url_user_name(void* self) {
    libqt_string _str = QUrl_UserName((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPassword)
///
/// ``` QUrl* self, const char* password ```
void q_url_set_password(void* self, const char* password) {
    QUrl_SetPassword((QUrl*)self, qstring(password));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#password)
///
/// ``` QUrl* self ```
const char* q_url_password(void* self) {
    libqt_string _str = QUrl_Password((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setHost)
///
/// ``` QUrl* self, const char* host ```
void q_url_set_host(void* self, const char* host) {
    QUrl_SetHost((QUrl*)self, qstring(host));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#host)
///
/// ``` QUrl* self ```
const char* q_url_host(void* self) {
    libqt_string _str = QUrl_Host((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPort)
///
/// ``` QUrl* self, int port ```
void q_url_set_port(void* self, int port) {
    QUrl_SetPort((QUrl*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#port)
///
/// ``` QUrl* self ```
int32_t q_url_port(void* self) {
    return QUrl_Port((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPath)
///
/// ``` QUrl* self, const char* path ```
void q_url_set_path(void* self, const char* path) {
    QUrl_SetPath((QUrl*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#path)
///
/// ``` QUrl* self ```
const char* q_url_path(void* self) {
    libqt_string _str = QUrl_Path((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fileName)
///
/// ``` QUrl* self ```
const char* q_url_file_name(void* self) {
    libqt_string _str = QUrl_FileName((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#hasQuery)
///
/// ``` QUrl* self ```
bool q_url_has_query(void* self) {
    return QUrl_HasQuery((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// ``` QUrl* self, const char* query ```
void q_url_set_query(void* self, const char* query) {
    QUrl_SetQuery((QUrl*)self, qstring(query));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// ``` QUrl* self, QUrlQuery* query ```
void q_url_set_query_with_query(void* self, void* query) {
    QUrl_SetQueryWithQuery((QUrl*)self, (QUrlQuery*)query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#query)
///
/// ``` QUrl* self ```
const char* q_url_query(void* self) {
    libqt_string _str = QUrl_Query((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#hasFragment)
///
/// ``` QUrl* self ```
bool q_url_has_fragment(void* self) {
    return QUrl_HasFragment((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fragment)
///
/// ``` QUrl* self ```
const char* q_url_fragment(void* self) {
    libqt_string _str = QUrl_Fragment((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setFragment)
///
/// ``` QUrl* self, const char* fragment ```
void q_url_set_fragment(void* self, const char* fragment) {
    QUrl_SetFragment((QUrl*)self, qstring(fragment));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#resolved)
///
/// ``` QUrl* self, QUrl* relative ```
QUrl* q_url_resolved(void* self, void* relative) {
    return QUrl_Resolved((QUrl*)self, (QUrl*)relative);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isRelative)
///
/// ``` QUrl* self ```
bool q_url_is_relative(void* self) {
    return QUrl_IsRelative((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isParentOf)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_is_parent_of(void* self, void* url) {
    return QUrl_IsParentOf((QUrl*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isLocalFile)
///
/// ``` QUrl* self ```
bool q_url_is_local_file(void* self) {
    return QUrl_IsLocalFile((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromLocalFile)
///
/// ``` const char* localfile ```
QUrl* q_url_from_local_file(const char* localfile) {
    return QUrl_FromLocalFile(qstring(localfile));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toLocalFile)
///
/// ``` QUrl* self ```
const char* q_url_to_local_file(void* self) {
    libqt_string _str = QUrl_ToLocalFile((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#detach)
///
/// ``` QUrl* self ```
void q_url_detach(void* self) {
    QUrl_Detach((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isDetached)
///
/// ``` QUrl* self ```
bool q_url_is_detached(void* self) {
    return QUrl_IsDetached((QUrl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator<)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_operator_lesser(void* self, void* url) {
    return QUrl_OperatorLesser((QUrl*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator==)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_operator_equal(void* self, void* url) {
    return QUrl_OperatorEqual((QUrl*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator!=)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_operator_not_equal(void* self, void* url) {
    return QUrl_OperatorNotEqual((QUrl*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromPercentEncoding)
///
/// ``` const char* param1 ```
const char* q_url_from_percent_encoding(const char* param1) {
    libqt_string _str = QUrl_FromPercentEncoding(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// ``` const char* param1 ```
char* q_url_to_percent_encoding(const char* param1) {
    libqt_string _str = QUrl_ToPercentEncoding(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromAce)
///
/// ``` const char* domain ```
const char* q_url_from_ace(const char* domain) {
    libqt_string _str = QUrl_FromAce(qstring(domain));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toAce)
///
/// ``` const char* domain ```
char* q_url_to_ace(const char* domain) {
    libqt_string _str = QUrl_ToAce(qstring(domain));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#idnWhitelist)
///
///
const char** q_url_idn_whitelist() {
    libqt_list _arr = QUrl_IdnWhitelist();
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

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toStringList)
///
/// ``` QUrl* uris[] ```
const char** q_url_to_string_list(void* uris[]) {
    QUrl** uris_arr = (QUrl**)uris;
    size_t uris_len = 0;
    while (uris_arr[uris_len] != NULL) {
        uris_len++;
    }
    libqt_list uris_list = {
        .len = uris_len,
        .data = {(QUrl*)uris},
    };
    libqt_list _arr = QUrl_ToStringList(uris_list);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromStringList)
///
/// ``` const char* uris[] ```
libqt_list /* of QUrl* */ q_url_from_string_list(const char* uris[]) {
    size_t uris_len = libqt_strv_length(uris);
    libqt_string* uris_qstr = malloc(uris_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < uris_len; ++_i) {
        uris_qstr[_i] = qstring(uris[_i]);
    }
    libqt_list uris_list = qstrlist(uris_qstr, uris_len);
    libqt_list _arr = QUrl_FromStringList(uris_list);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setIdnWhitelist)
///
/// ``` const char* idnWhitelist[] ```
void q_url_set_idn_whitelist(const char* idnWhitelist[]) {
    size_t idnWhitelist_len = libqt_strv_length(idnWhitelist);
    libqt_string* idnWhitelist_qstr = malloc(idnWhitelist_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < idnWhitelist_len; ++_i) {
        idnWhitelist_qstr[_i] = qstring(idnWhitelist[_i]);
    }
    libqt_list idnWhitelist_list = qstrlist(idnWhitelist_qstr, idnWhitelist_len);
    QUrl_SetIdnWhitelist(idnWhitelist_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUrl)
///
/// ``` QUrl* self, const char* url, enum QUrl__ParsingMode mode ```
void q_url_set_url2(void* self, const char* url, int64_t mode) {
    QUrl_SetUrl2((QUrl*)self, qstring(url), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
///
/// ``` const char* url, enum QUrl__ParsingMode mode ```
QUrl* q_url_from_encoded2(const char* url, int64_t mode) {
    return QUrl_FromEncoded2(qstring(url), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// ``` const char* userInput, const char* workingDirectory ```
QUrl* q_url_from_user_input2(const char* userInput, const char* workingDirectory) {
    return QUrl_FromUserInput2(qstring(userInput), qstring(workingDirectory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// ``` const char* userInput, const char* workingDirectory, int options ```
QUrl* q_url_from_user_input3(const char* userInput, const char* workingDirectory, int64_t options) {
    return QUrl_FromUserInput3(qstring(userInput), qstring(workingDirectory), options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setAuthority)
///
/// ``` QUrl* self, const char* authority, enum QUrl__ParsingMode mode ```
void q_url_set_authority2(void* self, const char* authority, int64_t mode) {
    QUrl_SetAuthority2((QUrl*)self, qstring(authority), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#authority)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_authority1(void* self, int64_t options) {
    libqt_string _str = QUrl_Authority1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
///
/// ``` QUrl* self, const char* userInfo, enum QUrl__ParsingMode mode ```
void q_url_set_user_info2(void* self, const char* userInfo, int64_t mode) {
    QUrl_SetUserInfo2((QUrl*)self, qstring(userInfo), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userInfo)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_user_info1(void* self, int64_t options) {
    libqt_string _str = QUrl_UserInfo1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserName)
///
/// ``` QUrl* self, const char* userName, enum QUrl__ParsingMode mode ```
void q_url_set_user_name2(void* self, const char* userName, int64_t mode) {
    QUrl_SetUserName2((QUrl*)self, qstring(userName), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userName)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_user_name1(void* self, int64_t options) {
    libqt_string _str = QUrl_UserName1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPassword)
///
/// ``` QUrl* self, const char* password, enum QUrl__ParsingMode mode ```
void q_url_set_password2(void* self, const char* password, int64_t mode) {
    QUrl_SetPassword2((QUrl*)self, qstring(password), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#password)
///
/// ``` QUrl* self, uint32_t param1 ```
const char* q_url_password1(void* self, int64_t param1) {
    libqt_string _str = QUrl_Password1((QUrl*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setHost)
///
/// ``` QUrl* self, const char* host, enum QUrl__ParsingMode mode ```
void q_url_set_host2(void* self, const char* host, int64_t mode) {
    QUrl_SetHost2((QUrl*)self, qstring(host), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#host)
///
/// ``` QUrl* self, uint32_t param1 ```
const char* q_url_host1(void* self, int64_t param1) {
    libqt_string _str = QUrl_Host1((QUrl*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#port)
///
/// ``` QUrl* self, int defaultPort ```
int32_t q_url_port1(void* self, int defaultPort) {
    return QUrl_Port1((QUrl*)self, defaultPort);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPath)
///
/// ``` QUrl* self, const char* path, enum QUrl__ParsingMode mode ```
void q_url_set_path2(void* self, const char* path, int64_t mode) {
    QUrl_SetPath2((QUrl*)self, qstring(path), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#path)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_path1(void* self, int64_t options) {
    libqt_string _str = QUrl_Path1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fileName)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_file_name1(void* self, int64_t options) {
    libqt_string _str = QUrl_FileName1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// ``` QUrl* self, const char* query, enum QUrl__ParsingMode mode ```
void q_url_set_query2(void* self, const char* query, int64_t mode) {
    QUrl_SetQuery2((QUrl*)self, qstring(query), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#query)
///
/// ``` QUrl* self, uint32_t param1 ```
const char* q_url_query1(void* self, int64_t param1) {
    libqt_string _str = QUrl_Query1((QUrl*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fragment)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_fragment1(void* self, int64_t options) {
    libqt_string _str = QUrl_Fragment1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setFragment)
///
/// ``` QUrl* self, const char* fragment, enum QUrl__ParsingMode mode ```
void q_url_set_fragment2(void* self, const char* fragment, int64_t mode) {
    QUrl_SetFragment2((QUrl*)self, qstring(fragment), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// ``` const char* param1, const char* exclude ```
char* q_url_to_percent_encoding2(const char* param1, const char* exclude) {
    libqt_string _str = QUrl_ToPercentEncoding2(qstring(param1), qstring(exclude));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// ``` const char* param1, const char* exclude, const char* include ```
char* q_url_to_percent_encoding3(const char* param1, const char* exclude, const char* include) {
    libqt_string _str = QUrl_ToPercentEncoding3(qstring(param1), qstring(exclude), qstring(include));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromAce)
///
/// ``` const char* domain, uint32_t options ```
const char* q_url_from_ace2(const char* domain, int64_t options) {
    libqt_string _str = QUrl_FromAce2(qstring(domain), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toAce)
///
/// ``` const char* domain, uint32_t options ```
char* q_url_to_ace2(const char* domain, int64_t options) {
    libqt_string _str = QUrl_ToAce2(qstring(domain), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromStringList)
///
/// ``` const char* uris[], enum QUrl__ParsingMode mode ```
libqt_list /* of QUrl* */ q_url_from_string_list2(const char* uris[], int64_t mode) {
    size_t uris_len = libqt_strv_length(uris);
    libqt_string* uris_qstr = malloc(uris_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < uris_len; ++_i) {
        uris_qstr[_i] = qstring(uris[_i]);
    }
    libqt_list uris_list = qstrlist(uris_qstr, uris_len);
    libqt_list _arr = QUrl_FromStringList2(uris_list, mode);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QUrl* self ```
void q_url_delete(void* self) {
    QUrl_Delete((QUrl*)(self));
}