#pragma once
#ifndef SRCQT6C_LIBQURL_H
#define SRCQT6C_LIBQURL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>
#include "libqurlquery.h"

QUrl* q_url_new();
QUrl* q_url_new2(void* copyVal);
QUrl* q_url_new3(const char* url);
QUrl* q_url_new4(const char* url, int64_t mode);
void q_url_operator_assign(void* self, void* copyVal);
void q_url_operator_assign_with_url(void* self, const char* url);
void q_url_swap(void* self, void* other);
void q_url_set_url(void* self, const char* url);
const char* q_url_url(void* self);
const char* q_url_to_string(void* self);
const char* q_url_to_display_string(void* self);
char* q_url_to_encoded(void* self);
QUrl* q_url_from_encoded(const char* url);
QUrl* q_url_from_user_input(const char* userInput);
bool q_url_is_valid(void* self);
const char* q_url_error_string(void* self);
bool q_url_is_empty(void* self);
void q_url_clear(void* self);
void q_url_set_scheme(void* self, const char* scheme);
const char* q_url_scheme(void* self);
void q_url_set_authority(void* self, const char* authority);
const char* q_url_authority(void* self);
void q_url_set_user_info(void* self, const char* userInfo);
const char* q_url_user_info(void* self);
void q_url_set_user_name(void* self, const char* userName);
const char* q_url_user_name(void* self);
void q_url_set_password(void* self, const char* password);
const char* q_url_password(void* self);
void q_url_set_host(void* self, const char* host);
const char* q_url_host(void* self);
void q_url_set_port(void* self, int port);
int32_t q_url_port(void* self);
void q_url_set_path(void* self, const char* path);
const char* q_url_path(void* self);
const char* q_url_file_name(void* self);
bool q_url_has_query(void* self);
void q_url_set_query(void* self, const char* query);
void q_url_set_query_with_query(void* self, void* query);
const char* q_url_query(void* self);
bool q_url_has_fragment(void* self);
const char* q_url_fragment(void* self);
void q_url_set_fragment(void* self, const char* fragment);
QUrl* q_url_resolved(void* self, void* relative);
bool q_url_is_relative(void* self);
bool q_url_is_parent_of(void* self, void* url);
bool q_url_is_local_file(void* self);
QUrl* q_url_from_local_file(const char* localfile);
const char* q_url_to_local_file(void* self);
void q_url_detach(void* self);
bool q_url_is_detached(void* self);
bool q_url_operator_lesser(void* self, void* url);
bool q_url_operator_equal(void* self, void* url);
bool q_url_operator_not_equal(void* self, void* url);
const char* q_url_from_percent_encoding(const char* param1);
char* q_url_to_percent_encoding(const char* param1);
const char* q_url_from_ace(const char* domain);
char* q_url_to_ace(const char* domain);
const char** q_url_idn_whitelist();
const char** q_url_to_string_list(void* uris[]);
libqt_list /* of QUrl* */ q_url_from_string_list(const char* uris[]);
void q_url_set_idn_whitelist(const char* idnWhitelist[]);
void q_url_set_url2(void* self, const char* url, int64_t mode);
QUrl* q_url_from_encoded2(const char* url, int64_t mode);
QUrl* q_url_from_user_input2(const char* userInput, const char* workingDirectory);
QUrl* q_url_from_user_input3(const char* userInput, const char* workingDirectory, int64_t options);
void q_url_set_authority2(void* self, const char* authority, int64_t mode);
const char* q_url_authority1(void* self, int64_t options);
void q_url_set_user_info2(void* self, const char* userInfo, int64_t mode);
const char* q_url_user_info1(void* self, int64_t options);
void q_url_set_user_name2(void* self, const char* userName, int64_t mode);
const char* q_url_user_name1(void* self, int64_t options);
void q_url_set_password2(void* self, const char* password, int64_t mode);
const char* q_url_password1(void* self, int64_t param1);
void q_url_set_host2(void* self, const char* host, int64_t mode);
const char* q_url_host1(void* self, int64_t param1);
int32_t q_url_port1(void* self, int defaultPort);
void q_url_set_path2(void* self, const char* path, int64_t mode);
const char* q_url_path1(void* self, int64_t options);
const char* q_url_file_name1(void* self, int64_t options);
void q_url_set_query2(void* self, const char* query, int64_t mode);
const char* q_url_query1(void* self, int64_t param1);
const char* q_url_fragment1(void* self, int64_t options);
void q_url_set_fragment2(void* self, const char* fragment, int64_t mode);
char* q_url_to_percent_encoding2(const char* param1, const char* exclude);
char* q_url_to_percent_encoding3(const char* param1, const char* exclude, const char* include);
const char* q_url_from_ace2(const char* domain, int64_t options);
char* q_url_to_ace2(const char* domain, int64_t options);
libqt_list /* of QUrl* */ q_url_from_string_list2(const char* uris[], int64_t mode);
void q_url_delete(void* self);

/// https://doc.qt.io/qt-6/qurl.html#types

typedef enum {
    QURL_PARSINGMODE_TOLERANTMODE = 0,
    QURL_PARSINGMODE_STRICTMODE = 1,
    QURL_PARSINGMODE_DECODEDMODE = 2
} QUrl__ParsingMode;

typedef enum {
    QURL_URLFORMATTINGOPTION_NONE = 0,
    QURL_URLFORMATTINGOPTION_REMOVESCHEME = 1,
    QURL_URLFORMATTINGOPTION_REMOVEPASSWORD = 2,
    QURL_URLFORMATTINGOPTION_REMOVEUSERINFO = 6,
    QURL_URLFORMATTINGOPTION_REMOVEPORT = 8,
    QURL_URLFORMATTINGOPTION_REMOVEAUTHORITY = 30,
    QURL_URLFORMATTINGOPTION_REMOVEPATH = 32,
    QURL_URLFORMATTINGOPTION_REMOVEQUERY = 64,
    QURL_URLFORMATTINGOPTION_REMOVEFRAGMENT = 128,
    QURL_URLFORMATTINGOPTION_PREFERLOCALFILE = 512,
    QURL_URLFORMATTINGOPTION_STRIPTRAILINGSLASH = 1024,
    QURL_URLFORMATTINGOPTION_REMOVEFILENAME = 2048,
    QURL_URLFORMATTINGOPTION_NORMALIZEPATHSEGMENTS = 4096
} QUrl__UrlFormattingOption;

typedef enum {
    QURL_COMPONENTFORMATTINGOPTION_PRETTYDECODED = 0,
    QURL_COMPONENTFORMATTINGOPTION_ENCODESPACES = 1048576,
    QURL_COMPONENTFORMATTINGOPTION_ENCODEUNICODE = 2097152,
    QURL_COMPONENTFORMATTINGOPTION_ENCODEDELIMITERS = 12582912,
    QURL_COMPONENTFORMATTINGOPTION_ENCODERESERVED = 16777216,
    QURL_COMPONENTFORMATTINGOPTION_DECODERESERVED = 33554432,
    QURL_COMPONENTFORMATTINGOPTION_FULLYENCODED = 32505856,
    QURL_COMPONENTFORMATTINGOPTION_FULLYDECODED = 133169152
} QUrl__ComponentFormattingOption;

typedef enum {
    QURL_USERINPUTRESOLUTIONOPTION_DEFAULTRESOLUTION = 0,
    QURL_USERINPUTRESOLUTIONOPTION_ASSUMELOCALFILE = 1
} QUrl__UserInputResolutionOption;

typedef enum {
    QURL_ACEPROCESSINGOPTION_IGNOREIDNWHITELIST = 1,
    QURL_ACEPROCESSINGOPTION_ACETRANSITIONALPROCESSING = 2
} QUrl__AceProcessingOption;

#endif
