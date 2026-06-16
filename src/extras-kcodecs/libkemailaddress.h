#pragma once
#ifndef SRC_EXTRAS_KCODECS_QT6C_LIBKEMAILADDRESS_H
#define SRC_EXTRAS_KCODECS_QT6C_LIBKEMAILADDRESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kemailaddress.html)

/// [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddressList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param aStr const char*
///
const char** k_emailaddress_split_address_list(const char* aStr);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
///
/// @param address char*
/// @param displayName char*
/// @param addrSpec char*
/// @param comment char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_split_address(char* address, char* displayName, char* addrSpec, char* comment);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
///
/// @param address const char*
/// @param displayName const char*
/// @param addrSpec const char*
/// @param comment const char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_split_address2(const char* address, const char* displayName, const char* addrSpec, const char* comment);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddress)
///
/// @param aStr const char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_is_valid_address(const char* aStr);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddressList)
///
/// @param aStr const char*
/// @param badAddr const char*
///
/// @return enum KEmailAddress__EmailParseResult
///
int32_t k_emailaddress_is_valid_address_list(const char* aStr, const char* badAddr);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#emailParseResultToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param errorCode enum KEmailAddress__EmailParseResult
///
const char* k_emailaddress_email_parse_result_to_string(int32_t errorCode);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#isValidSimpleAddress)
///
/// @param aStr const char*
///
bool k_emailaddress_is_valid_simple_address(const char* aStr);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#simpleEmailAddressErrorMsg)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_emailaddress_simple_email_address_error_msg();

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param address char*
///
char* k_emailaddress_extract_email_address(char* address);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param address char*
/// @param errorMessage const char*
///
char* k_emailaddress_extract_email_address2(char* address, const char* errorMessage);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_emailaddress_extract_email_address3(const char* address);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
/// @param errorMessage const char*
///
const char* k_emailaddress_extract_email_address4(const char* address, const char* errorMessage);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param addresses char*
///
char* k_emailaddress_first_email_address(char* addresses);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param addresses char*
/// @param errorMessage const char*
///
char* k_emailaddress_first_email_address2(char* addresses, const char* errorMessage);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param addresses const char*
///
const char* k_emailaddress_first_email_address3(const char* addresses);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param addresses const char*
/// @param errorMessage const char*
///
const char* k_emailaddress_first_email_address4(const char* addresses, const char* errorMessage);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddressAndName)
///
/// @param aStr const char*
/// @param mail const char*
/// @param name const char*
///
bool k_emailaddress_extract_email_address_and_name(const char* aStr, const char* mail, const char* name);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#compareEmail)
///
/// @param email1 const char*
/// @param email2 const char*
/// @param matchName bool
///
bool k_emailaddress_compare_email(const char* email1, const char* email2, bool matchName);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#normalizedAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param displayName const char*
/// @param addrSpec const char*
/// @param comment const char*
///
const char* k_emailaddress_normalized_address(const char* displayName, const char* addrSpec, const char* comment);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#fromIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param addrSpec const char*
///
const char* k_emailaddress_from_idn(const char* addrSpec);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#toIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param addrSpec const char*
///
const char* k_emailaddress_to_idn(const char* addrSpec);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndDecodeIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param addresses const char*
///
const char* k_emailaddress_normalize_addresses_and_decode_idn(const char* addresses);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndEncodeIdn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* k_emailaddress_normalize_addresses_and_encode_idn(const char* str);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#quoteNameIfNecessary)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* k_emailaddress_quote_name_if_necessary(const char* str);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#encodeMailtoUrl)
///
/// @param mailbox const char*
///
QUrl* k_emailaddress_encode_mailto_url(const char* mailbox);

/// [Upstream resources](https://api.kde.org/kemailaddress.html#decodeMailtoUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param mailtoUrl QUrl*
///
const char* k_emailaddress_decode_mailto_url(void* mailtoUrl);

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
