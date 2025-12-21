#pragma once
#ifndef SRC_QT6C_LIBQURL_H
#define SRC_QT6C_LIBQURL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html)

/// q_url_new constructs a new QUrl object.
///
QUrl* q_url_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html)

/// q_url_new2 constructs a new QUrl object.
///
/// @param copyVal QUrl*
///
QUrl* q_url_new2(void* copyVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html)

/// q_url_new3 constructs a new QUrl object.
///
/// @param url const char*
///
QUrl* q_url_new3(const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html)

/// q_url_new4 constructs a new QUrl object.
///
/// @param url const char*
/// @param mode enum QUrl__ParsingMode
///
QUrl* q_url_new4(const char* url, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#operator-eq)
///
/// @param self QUrl*
/// @param copyVal QUrl*
///
void q_url_operator_assign(void* self, void* copyVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#operator-eq)
///
/// @param self QUrl*
/// @param url const char*
///
void q_url_operator_assign2(void* self, const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#swap)
///
/// @param self QUrl*
/// @param other QUrl*
///
void q_url_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUrl)
///
/// @param self QUrl*
/// @param url const char*
///
void q_url_set_url(void* self, const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#url)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toDisplayString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_to_display_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toEncoded)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
char* q_url_to_encoded(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
///
/// @param input const char*
///
QUrl* q_url_from_encoded(const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// @param userInput const char*
///
QUrl* q_url_from_user_input(const char* userInput);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isValid)
///
/// @param self QUrl*
///
bool q_url_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isEmpty)
///
/// @param self QUrl*
///
bool q_url_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#clear)
///
/// @param self QUrl*
///
void q_url_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setScheme)
///
/// @param self QUrl*
/// @param scheme const char*
///
void q_url_set_scheme(void* self, const char* scheme);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#scheme)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_scheme(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setAuthority)
///
/// @param self QUrl*
/// @param authority const char*
///
void q_url_set_authority(void* self, const char* authority);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#authority)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_authority(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
///
/// @param self QUrl*
/// @param userInfo const char*
///
void q_url_set_user_info(void* self, const char* userInfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userInfo)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_user_info(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserName)
///
/// @param self QUrl*
/// @param userName const char*
///
void q_url_set_user_name(void* self, const char* userName);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_user_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPassword)
///
/// @param self QUrl*
/// @param password const char*
///
void q_url_set_password(void* self, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#password)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setHost)
///
/// @param self QUrl*
/// @param host const char*
///
void q_url_set_host(void* self, const char* host);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#host)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_host(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPort)
///
/// @param self QUrl*
/// @param port int
///
void q_url_set_port(void* self, int port);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#port)
///
/// @param self QUrl*
///
int32_t q_url_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPath)
///
/// @param self QUrl*
/// @param path const char*
///
void q_url_set_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#path)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#hasQuery)
///
/// @param self QUrl*
///
bool q_url_has_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// @param self QUrl*
/// @param query const char*
///
void q_url_set_query(void* self, const char* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// @param self QUrl*
/// @param query QUrlQuery*
///
void q_url_set_query2(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#query)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#hasFragment)
///
/// @param self QUrl*
///
bool q_url_has_fragment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fragment)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_fragment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setFragment)
///
/// @param self QUrl*
/// @param fragment const char*
///
void q_url_set_fragment(void* self, const char* fragment);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#resolved)
///
/// @param self QUrl*
/// @param relative QUrl*
///
QUrl* q_url_resolved(void* self, void* relative);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isRelative)
///
/// @param self QUrl*
///
bool q_url_is_relative(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isParentOf)
///
/// @param self QUrl*
/// @param url QUrl*
///
bool q_url_is_parent_of(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isLocalFile)
///
/// @param self QUrl*
///
bool q_url_is_local_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromLocalFile)
///
/// @param localfile const char*
///
QUrl* q_url_from_local_file(const char* localfile);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toLocalFile)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
///
const char* q_url_to_local_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#detach)
///
/// @param self QUrl*
///
void q_url_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isDetached)
///
/// @param self QUrl*
///
bool q_url_is_detached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromPercentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
const char* q_url_from_percent_encoding(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
char* q_url_to_percent_encoding(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromAce)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param domain const char*
///
const char* q_url_from_ace(const char* domain);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toAce)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param domain const char*
///
char* q_url_to_ace(const char* domain);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#idnWhitelist)
///
/// @warning Caller is responsible for freeing the returned memory
///
const char** q_url_idn_whitelist();

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toStringList)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param uris libqt_list /* of QUrl* */
///
const char** q_url_to_string_list(libqt_list uris);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromStringList)
///
/// @param uris const char**
///
libqt_list /* of QUrl* */ q_url_from_string_list(const char* uris[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setIdnWhitelist)
///
/// @param idnWhitelist const char**
///
void q_url_set_idn_whitelist(const char* idnWhitelist[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUrl)
///
/// @param self QUrl*
/// @param url const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_url2(void* self, const char* url, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
///
/// @param input const char*
/// @param mode enum QUrl__ParsingMode
///
QUrl* q_url_from_encoded2(const char* input, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// @param userInput const char*
/// @param workingDirectory const char*
///
QUrl* q_url_from_user_input2(const char* userInput, const char* workingDirectory);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
///
/// @param userInput const char*
/// @param workingDirectory const char*
/// @param options flag of enum QUrl__UserInputResolutionOption
///
QUrl* q_url_from_user_input3(const char* userInput, const char* workingDirectory, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setAuthority)
///
/// @param self QUrl*
/// @param authority const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_authority2(void* self, const char* authority, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#authority)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_authority1(void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
///
/// @param self QUrl*
/// @param userInfo const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_user_info2(void* self, const char* userInfo, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userInfo)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_user_info1(void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserName)
///
/// @param self QUrl*
/// @param userName const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_user_name2(void* self, const char* userName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_user_name1(void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPassword)
///
/// @param self QUrl*
/// @param password const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_password2(void* self, const char* password, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#password)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param param1 flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_password1(void* self, uint32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setHost)
///
/// @param self QUrl*
/// @param host const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_host2(void* self, const char* host, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#host)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param param1 flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_host1(void* self, uint32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#port)
///
/// @param self QUrl*
/// @param defaultPort int
///
int32_t q_url_port1(void* self, int defaultPort);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPath)
///
/// @param self QUrl*
/// @param path const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_path2(void* self, const char* path, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#path)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_path1(void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_file_name1(void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
///
/// @param self QUrl*
/// @param query const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_query22(void* self, const char* query, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#query)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param param1 flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_query1(void* self, uint32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fragment)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QUrl*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_url_fragment1(void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setFragment)
///
/// @param self QUrl*
/// @param fragment const char*
/// @param mode enum QUrl__ParsingMode
///
void q_url_set_fragment2(void* self, const char* fragment, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param exclude const char*
///
char* q_url_to_percent_encoding2(const char* param1, const char* exclude);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param exclude const char*
/// @param include const char*
///
char* q_url_to_percent_encoding3(const char* param1, const char* exclude, const char* include);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromAce)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param domain const char*
/// @param options flag of enum QUrl__AceProcessingOption
///
const char* q_url_from_ace2(const char* domain, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toAce)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param domain const char*
/// @param options flag of enum QUrl__AceProcessingOption
///
char* q_url_to_ace2(const char* domain, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromStringList)
///
/// @param uris const char**
/// @param mode enum QUrl__ParsingMode
///
libqt_list /* of QUrl* */ q_url_from_string_list2(const char* uris[static 1], int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#dtor.QUrl)
///
/// Delete this object from C++ memory.
///
/// @param self QUrl*
///
void q_url_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)

typedef enum {
    QURL_PARSINGMODE_TOLERANTMODE = 0,
    QURL_PARSINGMODE_STRICTMODE = 1,
    QURL_PARSINGMODE_DECODEDMODE = 2
} QUrl__ParsingMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)

typedef enum {
    QURL_USERINPUTRESOLUTIONOPTION_DEFAULTRESOLUTION = 0,
    QURL_USERINPUTRESOLUTIONOPTION_ASSUMELOCALFILE = 1
} QUrl__UserInputResolutionOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)

typedef enum {
    QURL_ACEPROCESSINGOPTION_IGNOREIDNWHITELIST = 1,
    QURL_ACEPROCESSINGOPTION_ACETRANSITIONALPROCESSING = 2
} QUrl__AceProcessingOption;

#endif
