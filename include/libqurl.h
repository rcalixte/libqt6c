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

/// https://doc.qt.io/qt-6/qurl.html

/// q_url_new constructs a new QUrl object.
///
///
QUrl* q_url_new();

/// q_url_new2 constructs a new QUrl object.
///
/// ``` QUrl* copyVal ```
QUrl* q_url_new2(void* copyVal);

/// q_url_new3 constructs a new QUrl object.
///
/// ``` const char* url ```
QUrl* q_url_new3(const char* url);

/// q_url_new4 constructs a new QUrl object.
///
/// ``` const char* url, enum QUrl__ParsingMode mode ```
QUrl* q_url_new4(const char* url, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator=)
///
/// ``` QUrl* self, QUrl* copyVal ```
void q_url_operator_assign(void* self, void* copyVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator=)
///
/// ``` QUrl* self, const char* url ```
void q_url_operator_assign_with_url(void* self, const char* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#swap)
///
/// ``` QUrl* self, QUrl* other ```
void q_url_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUrl)
///
/// ``` QUrl* self, const char* url ```
void q_url_set_url(void* self, const char* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#url)
///
/// ``` QUrl* self ```
const char* q_url_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toString)
///
/// ``` QUrl* self ```
const char* q_url_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toDisplayString)
///
/// ``` QUrl* self ```
const char* q_url_to_display_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toEncoded)
///
/// ``` QUrl* self ```
char* q_url_to_encoded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
///
/// ``` const char* url ```
QUrl* q_url_from_encoded(const char* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// ``` const char* userInput ```
QUrl* q_url_from_user_input(const char* userInput);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isValid)
///
/// ``` QUrl* self ```
bool q_url_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#errorString)
///
/// ``` QUrl* self ```
const char* q_url_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isEmpty)
///
/// ``` QUrl* self ```
bool q_url_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#clear)
///
/// ``` QUrl* self ```
void q_url_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setScheme)
///
/// ``` QUrl* self, const char* scheme ```
void q_url_set_scheme(void* self, const char* scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#scheme)
///
/// ``` QUrl* self ```
const char* q_url_scheme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setAuthority)
///
/// ``` QUrl* self, const char* authority ```
void q_url_set_authority(void* self, const char* authority);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#authority)
///
/// ``` QUrl* self ```
const char* q_url_authority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
///
/// ``` QUrl* self, const char* userInfo ```
void q_url_set_user_info(void* self, const char* userInfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userInfo)
///
/// ``` QUrl* self ```
const char* q_url_user_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserName)
///
/// ``` QUrl* self, const char* userName ```
void q_url_set_user_name(void* self, const char* userName);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userName)
///
/// ``` QUrl* self ```
const char* q_url_user_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPassword)
///
/// ``` QUrl* self, const char* password ```
void q_url_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#password)
///
/// ``` QUrl* self ```
const char* q_url_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setHost)
///
/// ``` QUrl* self, const char* host ```
void q_url_set_host(void* self, const char* host);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#host)
///
/// ``` QUrl* self ```
const char* q_url_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPort)
///
/// ``` QUrl* self, int port ```
void q_url_set_port(void* self, int port);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#port)
///
/// ``` QUrl* self ```
int32_t q_url_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPath)
///
/// ``` QUrl* self, const char* path ```
void q_url_set_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#path)
///
/// ``` QUrl* self ```
const char* q_url_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fileName)
///
/// ``` QUrl* self ```
const char* q_url_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#hasQuery)
///
/// ``` QUrl* self ```
bool q_url_has_query(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// ``` QUrl* self, const char* query ```
void q_url_set_query(void* self, const char* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// ``` QUrl* self, QUrlQuery* query ```
void q_url_set_query_with_query(void* self, void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#query)
///
/// ``` QUrl* self ```
const char* q_url_query(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#hasFragment)
///
/// ``` QUrl* self ```
bool q_url_has_fragment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fragment)
///
/// ``` QUrl* self ```
const char* q_url_fragment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setFragment)
///
/// ``` QUrl* self, const char* fragment ```
void q_url_set_fragment(void* self, const char* fragment);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#resolved)
///
/// ``` QUrl* self, QUrl* relative ```
QUrl* q_url_resolved(void* self, void* relative);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isRelative)
///
/// ``` QUrl* self ```
bool q_url_is_relative(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isParentOf)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_is_parent_of(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isLocalFile)
///
/// ``` QUrl* self ```
bool q_url_is_local_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromLocalFile)
///
/// ``` const char* localfile ```
QUrl* q_url_from_local_file(const char* localfile);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toLocalFile)
///
/// ``` QUrl* self ```
const char* q_url_to_local_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#detach)
///
/// ``` QUrl* self ```
void q_url_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isDetached)
///
/// ``` QUrl* self ```
bool q_url_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator<)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_operator_lesser(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator==)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_operator_equal(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator!=)
///
/// ``` QUrl* self, QUrl* url ```
bool q_url_operator_not_equal(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromPercentEncoding)
///
/// ``` const char* param1 ```
const char* q_url_from_percent_encoding(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// ``` const char* param1 ```
char* q_url_to_percent_encoding(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromAce)
///
/// ``` const char* domain ```
const char* q_url_from_ace(const char* domain);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toAce)
///
/// ``` const char* domain ```
char* q_url_to_ace(const char* domain);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#idnWhitelist)
///
///
const char** q_url_idn_whitelist();

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toStringList)
///
/// ``` libqt_list /* of QUrl* */ uris ```
const char** q_url_to_string_list(libqt_list uris);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromStringList)
///
/// ``` const char* uris[] ```
libqt_list /* of QUrl* */ q_url_from_string_list(const char* uris[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setIdnWhitelist)
///
/// ``` const char* idnWhitelist[] ```
void q_url_set_idn_whitelist(const char* idnWhitelist[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUrl)
///
/// ``` QUrl* self, const char* url, enum QUrl__ParsingMode mode ```
void q_url_set_url2(void* self, const char* url, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
///
/// ``` const char* url, enum QUrl__ParsingMode mode ```
QUrl* q_url_from_encoded2(const char* url, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// ``` const char* userInput, const char* workingDirectory ```
QUrl* q_url_from_user_input2(const char* userInput, const char* workingDirectory);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// ``` const char* userInput, const char* workingDirectory, int options ```
QUrl* q_url_from_user_input3(const char* userInput, const char* workingDirectory, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setAuthority)
///
/// ``` QUrl* self, const char* authority, enum QUrl__ParsingMode mode ```
void q_url_set_authority2(void* self, const char* authority, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#authority)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_authority1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
///
/// ``` QUrl* self, const char* userInfo, enum QUrl__ParsingMode mode ```
void q_url_set_user_info2(void* self, const char* userInfo, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userInfo)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_user_info1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserName)
///
/// ``` QUrl* self, const char* userName, enum QUrl__ParsingMode mode ```
void q_url_set_user_name2(void* self, const char* userName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userName)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_user_name1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPassword)
///
/// ``` QUrl* self, const char* password, enum QUrl__ParsingMode mode ```
void q_url_set_password2(void* self, const char* password, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#password)
///
/// ``` QUrl* self, uint32_t param1 ```
const char* q_url_password1(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setHost)
///
/// ``` QUrl* self, const char* host, enum QUrl__ParsingMode mode ```
void q_url_set_host2(void* self, const char* host, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#host)
///
/// ``` QUrl* self, uint32_t param1 ```
const char* q_url_host1(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#port)
///
/// ``` QUrl* self, int defaultPort ```
int32_t q_url_port1(void* self, int defaultPort);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPath)
///
/// ``` QUrl* self, const char* path, enum QUrl__ParsingMode mode ```
void q_url_set_path2(void* self, const char* path, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#path)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_path1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fileName)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_file_name1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// ``` QUrl* self, const char* query, enum QUrl__ParsingMode mode ```
void q_url_set_query2(void* self, const char* query, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#query)
///
/// ``` QUrl* self, uint32_t param1 ```
const char* q_url_query1(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fragment)
///
/// ``` QUrl* self, uint32_t options ```
const char* q_url_fragment1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setFragment)
///
/// ``` QUrl* self, const char* fragment, enum QUrl__ParsingMode mode ```
void q_url_set_fragment2(void* self, const char* fragment, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// ``` const char* param1, const char* exclude ```
char* q_url_to_percent_encoding2(const char* param1, const char* exclude);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// ``` const char* param1, const char* exclude, const char* include ```
char* q_url_to_percent_encoding3(const char* param1, const char* exclude, const char* include);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromAce)
///
/// ``` const char* domain, uint32_t options ```
const char* q_url_from_ace2(const char* domain, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toAce)
///
/// ``` const char* domain, uint32_t options ```
char* q_url_to_ace2(const char* domain, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromStringList)
///
/// ``` const char* uris[], enum QUrl__ParsingMode mode ```
libqt_list /* of QUrl* */ q_url_from_string_list2(const char* uris[], int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#dtor.QUrl)
///
/// Delete this object from C++ memory.
///
/// ``` QUrl* self ```
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
