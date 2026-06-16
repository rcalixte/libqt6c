#include "../libqurl.hpp"
#include "libkemailaddress.hpp"
#include "libkemailaddress.h"

const char** k_emailaddress_split_address_list(const char* aStr) {
    libqt_list _arr = KEmailAddress_SplitAddressList(qstring(aStr));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_emailaddress_split_address_list\n");
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

int32_t k_emailaddress_split_address(char* address, char* displayName, char* addrSpec, char* comment) {
    return KEmailAddress_SplitAddress(qstring(address), qstring(displayName), qstring(addrSpec), qstring(comment));
}

int32_t k_emailaddress_split_address2(const char* address, const char* displayName, const char* addrSpec, const char* comment) {
    return KEmailAddress_SplitAddress2(qstring(address), qstring(displayName), qstring(addrSpec), qstring(comment));
}

int32_t k_emailaddress_is_valid_address(const char* aStr) {
    return KEmailAddress_IsValidAddress(qstring(aStr));
}

int32_t k_emailaddress_is_valid_address_list(const char* aStr, const char* badAddr) {
    return KEmailAddress_IsValidAddressList(qstring(aStr), qstring(badAddr));
}

const char* k_emailaddress_email_parse_result_to_string(int32_t errorCode) {
    libqt_string _str = KEmailAddress_EmailParseResultToString(errorCode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_emailaddress_is_valid_simple_address(const char* aStr) {
    return KEmailAddress_IsValidSimpleAddress(qstring(aStr));
}

const char* k_emailaddress_simple_email_address_error_msg() {
    libqt_string _str = KEmailAddress_SimpleEmailAddressErrorMsg();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_extract_email_address(char* address) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_extract_email_address2(char* address, const char* errorMessage) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress2(qstring(address), qstring(errorMessage));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_extract_email_address3(const char* address) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress3(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_extract_email_address4(const char* address, const char* errorMessage) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress4(qstring(address), qstring(errorMessage));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_first_email_address(char* addresses) {
    libqt_string _str = KEmailAddress_FirstEmailAddress(qstring(addresses));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_first_email_address2(char* addresses, const char* errorMessage) {
    libqt_string _str = KEmailAddress_FirstEmailAddress2(qstring(addresses), qstring(errorMessage));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_first_email_address3(const char* addresses) {
    libqt_string _str = KEmailAddress_FirstEmailAddress3(qstring(addresses));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_first_email_address4(const char* addresses, const char* errorMessage) {
    libqt_string _str = KEmailAddress_FirstEmailAddress4(qstring(addresses), qstring(errorMessage));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_emailaddress_extract_email_address_and_name(const char* aStr, const char* mail, const char* name) {
    return KEmailAddress_ExtractEmailAddressAndName(qstring(aStr), qstring(mail), qstring(name));
}

bool k_emailaddress_compare_email(const char* email1, const char* email2, bool matchName) {
    return KEmailAddress_CompareEmail(qstring(email1), qstring(email2), matchName);
}

const char* k_emailaddress_normalized_address(const char* displayName, const char* addrSpec, const char* comment) {
    libqt_string _str = KEmailAddress_NormalizedAddress(qstring(displayName), qstring(addrSpec), qstring(comment));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_from_idn(const char* addrSpec) {
    libqt_string _str = KEmailAddress_FromIdn(qstring(addrSpec));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_to_idn(const char* addrSpec) {
    libqt_string _str = KEmailAddress_ToIdn(qstring(addrSpec));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_normalize_addresses_and_decode_idn(const char* addresses) {
    libqt_string _str = KEmailAddress_NormalizeAddressesAndDecodeIdn(qstring(addresses));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_normalize_addresses_and_encode_idn(const char* str) {
    libqt_string _str = KEmailAddress_NormalizeAddressesAndEncodeIdn(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_quote_name_if_necessary(const char* str) {
    libqt_string _str = KEmailAddress_QuoteNameIfNecessary(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_emailaddress_encode_mailto_url(const char* mailbox) {
    return KEmailAddress_EncodeMailtoUrl(qstring(mailbox));
}

const char* k_emailaddress_decode_mailto_url(void* mailtoUrl) {
    libqt_string _str = KEmailAddress_DecodeMailtoUrl((QUrl*)mailtoUrl);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
