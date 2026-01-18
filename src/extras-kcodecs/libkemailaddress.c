#include "../libqurl.hpp"
#include "libkemailaddress.hpp"
#include "libkemailaddress.h"

const char** k_emailaddress_split_address_list(const char* param1) {
    libqt_list _arr = KEmailAddress_SplitAddressList(qstring(param1));
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

int32_t k_emailaddress_split_address(const char* param1, char* param2, char* param3, char* param4) {
    return KEmailAddress_SplitAddress(qstring(param1), qstring(param2), qstring(param3), qstring(param4));
}

int32_t k_emailaddress_split_address2(const char* param1, const char* param2, const char* param3, const char* param4) {
    return KEmailAddress_SplitAddress2(qstring(param1), qstring(param2), qstring(param3), qstring(param4));
}

int32_t k_emailaddress_is_valid_address(const char* param1) {
    return KEmailAddress_IsValidAddress(qstring(param1));
}

int32_t k_emailaddress_is_valid_address_list(const char* param1, const char* param2) {
    return KEmailAddress_IsValidAddressList(qstring(param1), qstring(param2));
}

const char* k_emailaddress_email_parse_result_to_string(int32_t param1) {
    libqt_string _str = KEmailAddress_EmailParseResultToString(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_emailaddress_is_valid_simple_address(const char* param1) {
    return KEmailAddress_IsValidSimpleAddress(qstring(param1));
}

const char* k_emailaddress_simple_email_address_error_msg() {
    libqt_string _str = KEmailAddress_SimpleEmailAddressErrorMsg();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_extract_email_address(const char* param1) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_extract_email_address2(const char* param1, const char* param2) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress2(qstring(param1), qstring(param2));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_extract_email_address3(const char* param1) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress3(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_extract_email_address4(const char* param1, const char* param2) {
    libqt_string _str = KEmailAddress_ExtractEmailAddress4(qstring(param1), qstring(param2));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_first_email_address(const char* param1) {
    libqt_string _str = KEmailAddress_FirstEmailAddress(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_emailaddress_first_email_address2(const char* param1, const char* param2) {
    libqt_string _str = KEmailAddress_FirstEmailAddress2(qstring(param1), qstring(param2));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_first_email_address3(const char* param1) {
    libqt_string _str = KEmailAddress_FirstEmailAddress3(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_first_email_address4(const char* param1, const char* param2) {
    libqt_string _str = KEmailAddress_FirstEmailAddress4(qstring(param1), qstring(param2));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_emailaddress_extract_email_address_and_name(const char* param1, const char* param2, const char* param3) {
    return KEmailAddress_ExtractEmailAddressAndName(qstring(param1), qstring(param2), qstring(param3));
}

bool k_emailaddress_compare_email(const char* param1, const char* param2, bool param3) {
    return KEmailAddress_CompareEmail(qstring(param1), qstring(param2), param3);
}

const char* k_emailaddress_normalized_address(const char* param1, const char* param2, const char* param3) {
    libqt_string _str = KEmailAddress_NormalizedAddress(qstring(param1), qstring(param2), qstring(param3));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_from_idn(const char* param1) {
    libqt_string _str = KEmailAddress_FromIdn(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_to_idn(const char* param1) {
    libqt_string _str = KEmailAddress_ToIdn(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_normalize_addresses_and_decode_idn(const char* param1) {
    libqt_string _str = KEmailAddress_NormalizeAddressesAndDecodeIdn(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_normalize_addresses_and_encode_idn(const char* param1) {
    libqt_string _str = KEmailAddress_NormalizeAddressesAndEncodeIdn(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailaddress_quote_name_if_necessary(const char* param1) {
    libqt_string _str = KEmailAddress_QuoteNameIfNecessary(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_emailaddress_encode_mailto_url(const char* param1) {
    return KEmailAddress_EncodeMailtoUrl(qstring(param1));
}

const char* k_emailaddress_decode_mailto_url(void* param1) {
    libqt_string _str = KEmailAddress_DecodeMailtoUrl((QUrl*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
