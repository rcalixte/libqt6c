#pragma once
#ifndef SRC_EXTRAS_KCODECS_QT6C_LIBKEMAILADDRESS_H
#define SRC_EXTRAS_KCODECS_QT6C_LIBKEMAILADDRESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kemailaddress.html)

/// [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddressList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
const char** k_emailaddress_split_address_list(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
///
/// @param param1 const char*
/// @param param2 char*
/// @param param3 char*
/// @param param4 char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_split_address(const char* param1, char* param2, char* param3, char* param4);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_split_address2(const char* param1, const char* param2, const char* param3, const char* param4);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddress)
///
/// @param param1 const char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_is_valid_address(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddressList)
///
/// @param param1 const char*
/// @param param2 const char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_is_valid_address_list(const char* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#emailParseResultToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum KEmailAddress__EmailParseResult
///
const char* k_emailaddress_email_parse_result_to_string(int32_t param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#isValidSimpleAddress)
///
/// @param param1 const char*
///
bool k_emailaddress_is_valid_simple_address(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#simpleEmailAddressErrorMsg)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_emailaddress_simple_email_address_error_msg();

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
char* k_emailaddress_extract_email_address(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
/// @param param2 const char*
///
char* k_emailaddress_extract_email_address2(const char* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_extract_email_address3(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 const char*
///
const char* k_emailaddress_extract_email_address4(const char* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
char* k_emailaddress_first_email_address(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
/// @param param2 const char*
///
char* k_emailaddress_first_email_address2(const char* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_first_email_address3(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 const char*
///
const char* k_emailaddress_first_email_address4(const char* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddressAndName)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
///
bool k_emailaddress_extract_email_address_and_name(const char* param1, const char* param2, const char* param3);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#compareEmail)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 bool
///
bool k_emailaddress_compare_email(const char* param1, const char* param2, bool param3);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#normalizedAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
///
const char* k_emailaddress_normalized_address(const char* param1, const char* param2, const char* param3);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#fromIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_from_idn(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#toIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_to_idn(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndDecodeIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_normalize_addresses_and_decode_idn(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndEncodeIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_normalize_addresses_and_encode_idn(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#quoteNameIfNecessary)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_emailaddress_quote_name_if_necessary(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#encodeMailtoUrl)
///
/// @param param1 const char*
///
QUrl* k_emailaddress_encode_mailto_url(const char* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#decodeMailtoUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 QUrl*
///
const char* k_emailaddress_decode_mailto_url(void* param1);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#public-types)

typedef enum {
    KEMAILADDRESS_EMAILPARSERESULT_ADDRESSOK = 0,
    KEMAILADDRESS_EMAILPARSERESULT_ADDRESSEMPTY = 1,
    KEMAILADDRESS_EMAILPARSERESULT_UNEXPECTEDEND = 2,
    KEMAILADDRESS_EMAILPARSERESULT_UNBALANCEDPARENS = 3,
    KEMAILADDRESS_EMAILPARSERESULT_MISSINGDOMAINPART = 4,
    KEMAILADDRESS_EMAILPARSERESULT_UNCLOSEDANGLEADDR = 5,
    KEMAILADDRESS_EMAILPARSERESULT_UNOPENEDANGLEADDR = 6,
    KEMAILADDRESS_EMAILPARSERESULT_TOOMANYATS = 7,
    KEMAILADDRESS_EMAILPARSERESULT_UNEXPECTEDCOMMA = 8,
    KEMAILADDRESS_EMAILPARSERESULT_TOOFEWATS = 9,
    KEMAILADDRESS_EMAILPARSERESULT_MISSINGLOCALPART = 10,
    KEMAILADDRESS_EMAILPARSERESULT_UNBALANCEDQUOTE = 11,
    KEMAILADDRESS_EMAILPARSERESULT_NOADDRESSSPEC = 12,
    KEMAILADDRESS_EMAILPARSERESULT_DISALLOWEDCHAR = 13,
    KEMAILADDRESS_EMAILPARSERESULT_INVALIDDISPLAYNAME = 14,
    KEMAILADDRESS_EMAILPARSERESULT_TOOFEWDOTS = 15
} KEmailAddress__EmailParseResult;

#endif
