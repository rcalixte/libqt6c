#include <string.h>
#include "libqurlquery.hpp"
#include "libqurl.hpp"
#include "libqurl.h"

QUrl* q_url_new() {
    return QUrl_new();
}

QUrl* q_url_new2(void* copyVal) {
    return QUrl_new2((QUrl*)copyVal);
}

QUrl* q_url_new3(const char* url) {
    return QUrl_new3(qstring(url));
}

QUrl* q_url_new4(const char* url, int64_t mode) {
    return QUrl_new4(qstring(url), mode);
}

void q_url_operator_assign(void* self, void* copyVal) {
    QUrl_OperatorAssign((QUrl*)self, (QUrl*)copyVal);
}

void q_url_operator_assign_with_url(void* self, const char* url) {
    QUrl_OperatorAssignWithUrl((QUrl*)self, qstring(url));
}

void q_url_swap(void* self, void* other) {
    QUrl_Swap((QUrl*)self, (QUrl*)other);
}

void q_url_set_url(void* self, const char* url) {
    QUrl_SetUrl((QUrl*)self, qstring(url));
}

const char* q_url_url(void* self) {
    libqt_string _str = QUrl_Url((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_to_string(void* self) {
    libqt_string _str = QUrl_ToString((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_to_display_string(void* self) {
    libqt_string _str = QUrl_ToDisplayString((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_url_to_encoded(void* self) {
    libqt_string _str = QUrl_ToEncoded((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_url_from_encoded(const char* url) {
    return QUrl_FromEncoded(qstring(url));
}

QUrl* q_url_from_user_input(const char* userInput) {
    return QUrl_FromUserInput(qstring(userInput));
}

bool q_url_is_valid(void* self) {
    return QUrl_IsValid((QUrl*)self);
}

const char* q_url_error_string(void* self) {
    libqt_string _str = QUrl_ErrorString((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_url_is_empty(void* self) {
    return QUrl_IsEmpty((QUrl*)self);
}

void q_url_clear(void* self) {
    QUrl_Clear((QUrl*)self);
}

void q_url_set_scheme(void* self, const char* scheme) {
    QUrl_SetScheme((QUrl*)self, qstring(scheme));
}

const char* q_url_scheme(void* self) {
    libqt_string _str = QUrl_Scheme((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_authority(void* self, const char* authority) {
    QUrl_SetAuthority((QUrl*)self, qstring(authority));
}

const char* q_url_authority(void* self) {
    libqt_string _str = QUrl_Authority((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_user_info(void* self, const char* userInfo) {
    QUrl_SetUserInfo((QUrl*)self, qstring(userInfo));
}

const char* q_url_user_info(void* self) {
    libqt_string _str = QUrl_UserInfo((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_user_name(void* self, const char* userName) {
    QUrl_SetUserName((QUrl*)self, qstring(userName));
}

const char* q_url_user_name(void* self) {
    libqt_string _str = QUrl_UserName((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_password(void* self, const char* password) {
    QUrl_SetPassword((QUrl*)self, qstring(password));
}

const char* q_url_password(void* self) {
    libqt_string _str = QUrl_Password((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_host(void* self, const char* host) {
    QUrl_SetHost((QUrl*)self, qstring(host));
}

const char* q_url_host(void* self) {
    libqt_string _str = QUrl_Host((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_port(void* self, int port) {
    QUrl_SetPort((QUrl*)self, port);
}

int32_t q_url_port(void* self) {
    return QUrl_Port((QUrl*)self);
}

void q_url_set_path(void* self, const char* path) {
    QUrl_SetPath((QUrl*)self, qstring(path));
}

const char* q_url_path(void* self) {
    libqt_string _str = QUrl_Path((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_file_name(void* self) {
    libqt_string _str = QUrl_FileName((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_url_has_query(void* self) {
    return QUrl_HasQuery((QUrl*)self);
}

void q_url_set_query(void* self, const char* query) {
    QUrl_SetQuery((QUrl*)self, qstring(query));
}

void q_url_set_query_with_query(void* self, void* query) {
    QUrl_SetQueryWithQuery((QUrl*)self, (QUrlQuery*)query);
}

const char* q_url_query(void* self) {
    libqt_string _str = QUrl_Query((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_url_has_fragment(void* self) {
    return QUrl_HasFragment((QUrl*)self);
}

const char* q_url_fragment(void* self) {
    libqt_string _str = QUrl_Fragment((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_fragment(void* self, const char* fragment) {
    QUrl_SetFragment((QUrl*)self, qstring(fragment));
}

QUrl* q_url_resolved(void* self, void* relative) {
    return QUrl_Resolved((QUrl*)self, (QUrl*)relative);
}

bool q_url_is_relative(void* self) {
    return QUrl_IsRelative((QUrl*)self);
}

bool q_url_is_parent_of(void* self, void* url) {
    return QUrl_IsParentOf((QUrl*)self, (QUrl*)url);
}

bool q_url_is_local_file(void* self) {
    return QUrl_IsLocalFile((QUrl*)self);
}

QUrl* q_url_from_local_file(const char* localfile) {
    return QUrl_FromLocalFile(qstring(localfile));
}

const char* q_url_to_local_file(void* self) {
    libqt_string _str = QUrl_ToLocalFile((QUrl*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_detach(void* self) {
    QUrl_Detach((QUrl*)self);
}

bool q_url_is_detached(void* self) {
    return QUrl_IsDetached((QUrl*)self);
}

bool q_url_operator_lesser(void* self, void* url) {
    return QUrl_OperatorLesser((QUrl*)self, (QUrl*)url);
}

bool q_url_operator_equal(void* self, void* url) {
    return QUrl_OperatorEqual((QUrl*)self, (QUrl*)url);
}

bool q_url_operator_not_equal(void* self, void* url) {
    return QUrl_OperatorNotEqual((QUrl*)self, (QUrl*)url);
}

const char* q_url_from_percent_encoding(const char* param1) {
    libqt_string _str = QUrl_FromPercentEncoding(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_url_to_percent_encoding(const char* param1) {
    libqt_string _str = QUrl_ToPercentEncoding(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_from_ace(const char* domain) {
    libqt_string _str = QUrl_FromAce(qstring(domain));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_url_to_ace(const char* domain) {
    libqt_string _str = QUrl_ToAce(qstring(domain));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

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

void q_url_set_idn_whitelist(const char* idnWhitelist[]) {
    size_t idnWhitelist_len = libqt_strv_length(idnWhitelist);
    libqt_string* idnWhitelist_qstr = malloc(idnWhitelist_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < idnWhitelist_len; ++_i) {
        idnWhitelist_qstr[_i] = qstring(idnWhitelist[_i]);
    }
    libqt_list idnWhitelist_list = qstrlist(idnWhitelist_qstr, idnWhitelist_len);
    QUrl_SetIdnWhitelist(idnWhitelist_list);
}

void q_url_set_url2(void* self, const char* url, int64_t mode) {
    QUrl_SetUrl2((QUrl*)self, qstring(url), mode);
}

QUrl* q_url_from_encoded2(const char* url, int64_t mode) {
    return QUrl_FromEncoded2(qstring(url), mode);
}

QUrl* q_url_from_user_input2(const char* userInput, const char* workingDirectory) {
    return QUrl_FromUserInput2(qstring(userInput), qstring(workingDirectory));
}

QUrl* q_url_from_user_input3(const char* userInput, const char* workingDirectory, int64_t options) {
    return QUrl_FromUserInput3(qstring(userInput), qstring(workingDirectory), options);
}

void q_url_set_authority2(void* self, const char* authority, int64_t mode) {
    QUrl_SetAuthority2((QUrl*)self, qstring(authority), mode);
}

const char* q_url_authority1(void* self, int64_t options) {
    libqt_string _str = QUrl_Authority1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_user_info2(void* self, const char* userInfo, int64_t mode) {
    QUrl_SetUserInfo2((QUrl*)self, qstring(userInfo), mode);
}

const char* q_url_user_info1(void* self, int64_t options) {
    libqt_string _str = QUrl_UserInfo1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_user_name2(void* self, const char* userName, int64_t mode) {
    QUrl_SetUserName2((QUrl*)self, qstring(userName), mode);
}

const char* q_url_user_name1(void* self, int64_t options) {
    libqt_string _str = QUrl_UserName1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_password2(void* self, const char* password, int64_t mode) {
    QUrl_SetPassword2((QUrl*)self, qstring(password), mode);
}

const char* q_url_password1(void* self, int64_t param1) {
    libqt_string _str = QUrl_Password1((QUrl*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_host2(void* self, const char* host, int64_t mode) {
    QUrl_SetHost2((QUrl*)self, qstring(host), mode);
}

const char* q_url_host1(void* self, int64_t param1) {
    libqt_string _str = QUrl_Host1((QUrl*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_url_port1(void* self, int defaultPort) {
    return QUrl_Port1((QUrl*)self, defaultPort);
}

void q_url_set_path2(void* self, const char* path, int64_t mode) {
    QUrl_SetPath2((QUrl*)self, qstring(path), mode);
}

const char* q_url_path1(void* self, int64_t options) {
    libqt_string _str = QUrl_Path1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_file_name1(void* self, int64_t options) {
    libqt_string _str = QUrl_FileName1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_query2(void* self, const char* query, int64_t mode) {
    QUrl_SetQuery2((QUrl*)self, qstring(query), mode);
}

const char* q_url_query1(void* self, int64_t param1) {
    libqt_string _str = QUrl_Query1((QUrl*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_fragment1(void* self, int64_t options) {
    libqt_string _str = QUrl_Fragment1((QUrl*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_url_set_fragment2(void* self, const char* fragment, int64_t mode) {
    QUrl_SetFragment2((QUrl*)self, qstring(fragment), mode);
}

char* q_url_to_percent_encoding2(const char* param1, const char* exclude) {
    libqt_string _str = QUrl_ToPercentEncoding2(qstring(param1), qstring(exclude));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_url_to_percent_encoding3(const char* param1, const char* exclude, const char* include) {
    libqt_string _str = QUrl_ToPercentEncoding3(qstring(param1), qstring(exclude), qstring(include));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_url_from_ace2(const char* domain, int64_t options) {
    libqt_string _str = QUrl_FromAce2(qstring(domain), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_url_to_ace2(const char* domain, int64_t options) {
    libqt_string _str = QUrl_ToAce2(qstring(domain), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

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

void q_url_delete(void* self) {
    QUrl_Delete((QUrl*)(self));
}
