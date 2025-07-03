#include <string.h>
#include "libqregularexpression.hpp"
#include "libqregularexpression.h"

QRegularExpression* q_regularexpression_new() {
    return QRegularExpression_new();
}

QRegularExpression* q_regularexpression_new2(const char* pattern) {
    return QRegularExpression_new2(qstring(pattern));
}

QRegularExpression* q_regularexpression_new3(void* re) {
    return QRegularExpression_new3((QRegularExpression*)re);
}

QRegularExpression* q_regularexpression_new4(const char* pattern, int64_t options) {
    return QRegularExpression_new4(qstring(pattern), options);
}

int64_t q_regularexpression_pattern_options(void* self) {
    return QRegularExpression_PatternOptions((QRegularExpression*)self);
}

void q_regularexpression_set_pattern_options(void* self, int64_t options) {
    QRegularExpression_SetPatternOptions((QRegularExpression*)self, options);
}

void q_regularexpression_operator_assign(void* self, void* re) {
    QRegularExpression_OperatorAssign((QRegularExpression*)self, (QRegularExpression*)re);
}

void q_regularexpression_swap(void* self, void* other) {
    QRegularExpression_Swap((QRegularExpression*)self, (QRegularExpression*)other);
}

const char* q_regularexpression_pattern(void* self) {
    libqt_string _str = QRegularExpression_Pattern((QRegularExpression*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_regularexpression_set_pattern(void* self, const char* pattern) {
    QRegularExpression_SetPattern((QRegularExpression*)self, qstring(pattern));
}

bool q_regularexpression_is_valid(void* self) {
    return QRegularExpression_IsValid((QRegularExpression*)self);
}

int64_t q_regularexpression_pattern_error_offset(void* self) {
    return QRegularExpression_PatternErrorOffset((QRegularExpression*)self);
}

const char* q_regularexpression_error_string(void* self) {
    libqt_string _str = QRegularExpression_ErrorString((QRegularExpression*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_regularexpression_capture_count(void* self) {
    return QRegularExpression_CaptureCount((QRegularExpression*)self);
}

const char** q_regularexpression_named_capture_groups(void* self) {
    libqt_list _arr = QRegularExpression_NamedCaptureGroups((QRegularExpression*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QRegularExpressionMatch* q_regularexpression_match(void* self, const char* subject) {
    return QRegularExpression_Match((QRegularExpression*)self, qstring(subject));
}

QRegularExpressionMatchIterator* q_regularexpression_global_match(void* self, const char* subject) {
    return QRegularExpression_GlobalMatch((QRegularExpression*)self, qstring(subject));
}

void q_regularexpression_optimize(void* self) {
    QRegularExpression_Optimize((QRegularExpression*)self);
}

const char* q_regularexpression_escape(const char* str) {
    libqt_string _str = QRegularExpression_Escape(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_regularexpression_wildcard_to_regular_expression(const char* str) {
    libqt_string _str = QRegularExpression_WildcardToRegularExpression(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_regularexpression_anchored_pattern(const char* expression) {
    libqt_string _str = QRegularExpression_AnchoredPattern(qstring(expression));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_regularexpression_operator_equal(void* self, void* re) {
    return QRegularExpression_OperatorEqual((QRegularExpression*)self, (QRegularExpression*)re);
}

bool q_regularexpression_operator_not_equal(void* self, void* re) {
    return QRegularExpression_OperatorNotEqual((QRegularExpression*)self, (QRegularExpression*)re);
}

QRegularExpressionMatch* q_regularexpression_match2(void* self, const char* subject, int64_t offset) {
    return QRegularExpression_Match2((QRegularExpression*)self, qstring(subject), offset);
}

QRegularExpressionMatch* q_regularexpression_match3(void* self, const char* subject, int64_t offset, int64_t matchType) {
    return QRegularExpression_Match3((QRegularExpression*)self, qstring(subject), offset, matchType);
}

QRegularExpressionMatch* q_regularexpression_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions) {
    return QRegularExpression_Match4((QRegularExpression*)self, qstring(subject), offset, matchType, matchOptions);
}

QRegularExpressionMatchIterator* q_regularexpression_global_match2(void* self, const char* subject, int64_t offset) {
    return QRegularExpression_GlobalMatch2((QRegularExpression*)self, qstring(subject), offset);
}

QRegularExpressionMatchIterator* q_regularexpression_global_match3(void* self, const char* subject, int64_t offset, int64_t matchType) {
    return QRegularExpression_GlobalMatch3((QRegularExpression*)self, qstring(subject), offset, matchType);
}

QRegularExpressionMatchIterator* q_regularexpression_global_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions) {
    return QRegularExpression_GlobalMatch4((QRegularExpression*)self, qstring(subject), offset, matchType, matchOptions);
}

const char* q_regularexpression_wildcard_to_regular_expression2(const char* str, int64_t options) {
    libqt_string _str = QRegularExpression_WildcardToRegularExpression2(qstring(str), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_regularexpression_delete(void* self) {
    QRegularExpression_Delete((QRegularExpression*)(self));
}

QRegularExpressionMatch* q_regularexpressionmatch_new() {
    return QRegularExpressionMatch_new();
}

QRegularExpressionMatch* q_regularexpressionmatch_new2(void* match) {
    return QRegularExpressionMatch_new2((QRegularExpressionMatch*)match);
}

void q_regularexpressionmatch_operator_assign(void* self, void* match) {
    QRegularExpressionMatch_OperatorAssign((QRegularExpressionMatch*)self, (QRegularExpressionMatch*)match);
}

void q_regularexpressionmatch_swap(void* self, void* other) {
    QRegularExpressionMatch_Swap((QRegularExpressionMatch*)self, (QRegularExpressionMatch*)other);
}

QRegularExpression* q_regularexpressionmatch_regular_expression(void* self) {
    return QRegularExpressionMatch_RegularExpression((QRegularExpressionMatch*)self);
}

int64_t q_regularexpressionmatch_match_type(void* self) {
    return QRegularExpressionMatch_MatchType((QRegularExpressionMatch*)self);
}

int64_t q_regularexpressionmatch_match_options(void* self) {
    return QRegularExpressionMatch_MatchOptions((QRegularExpressionMatch*)self);
}

bool q_regularexpressionmatch_has_match(void* self) {
    return QRegularExpressionMatch_HasMatch((QRegularExpressionMatch*)self);
}

bool q_regularexpressionmatch_has_partial_match(void* self) {
    return QRegularExpressionMatch_HasPartialMatch((QRegularExpressionMatch*)self);
}

bool q_regularexpressionmatch_is_valid(void* self) {
    return QRegularExpressionMatch_IsValid((QRegularExpressionMatch*)self);
}

int32_t q_regularexpressionmatch_last_captured_index(void* self) {
    return QRegularExpressionMatch_LastCapturedIndex((QRegularExpressionMatch*)self);
}

bool q_regularexpressionmatch_has_captured(void* self, const char* name) {
    return QRegularExpressionMatch_HasCaptured((QRegularExpressionMatch*)self, qstring(name));
}

bool q_regularexpressionmatch_has_captured_with_nth(void* self, int nth) {
    return QRegularExpressionMatch_HasCapturedWithNth((QRegularExpressionMatch*)self, nth);
}

const char* q_regularexpressionmatch_captured(void* self) {
    libqt_string _str = QRegularExpressionMatch_Captured((QRegularExpressionMatch*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_regularexpressionmatch_captured_with_name(void* self, const char* name) {
    libqt_string _str = QRegularExpressionMatch_CapturedWithName((QRegularExpressionMatch*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_regularexpressionmatch_captured_texts(void* self) {
    libqt_list _arr = QRegularExpressionMatch_CapturedTexts((QRegularExpressionMatch*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

int64_t q_regularexpressionmatch_captured_start(void* self) {
    return QRegularExpressionMatch_CapturedStart((QRegularExpressionMatch*)self);
}

int64_t q_regularexpressionmatch_captured_length(void* self) {
    return QRegularExpressionMatch_CapturedLength((QRegularExpressionMatch*)self);
}

int64_t q_regularexpressionmatch_captured_end(void* self) {
    return QRegularExpressionMatch_CapturedEnd((QRegularExpressionMatch*)self);
}

int64_t q_regularexpressionmatch_captured_start_with_name(void* self, const char* name) {
    return QRegularExpressionMatch_CapturedStartWithName((QRegularExpressionMatch*)self, qstring(name));
}

int64_t q_regularexpressionmatch_captured_length_with_name(void* self, const char* name) {
    return QRegularExpressionMatch_CapturedLengthWithName((QRegularExpressionMatch*)self, qstring(name));
}

int64_t q_regularexpressionmatch_captured_end_with_name(void* self, const char* name) {
    return QRegularExpressionMatch_CapturedEndWithName((QRegularExpressionMatch*)self, qstring(name));
}

const char* q_regularexpressionmatch_captured1(void* self, int nth) {
    libqt_string _str = QRegularExpressionMatch_Captured1((QRegularExpressionMatch*)self, nth);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_regularexpressionmatch_captured_start1(void* self, int nth) {
    return QRegularExpressionMatch_CapturedStart1((QRegularExpressionMatch*)self, nth);
}

int64_t q_regularexpressionmatch_captured_length1(void* self, int nth) {
    return QRegularExpressionMatch_CapturedLength1((QRegularExpressionMatch*)self, nth);
}

int64_t q_regularexpressionmatch_captured_end1(void* self, int nth) {
    return QRegularExpressionMatch_CapturedEnd1((QRegularExpressionMatch*)self, nth);
}

void q_regularexpressionmatch_delete(void* self) {
    QRegularExpressionMatch_Delete((QRegularExpressionMatch*)(self));
}

QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new() {
    return QRegularExpressionMatchIterator_new();
}

QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new2(void* iterator) {
    return QRegularExpressionMatchIterator_new2((QRegularExpressionMatchIterator*)iterator);
}

void q_regularexpressionmatchiterator_operator_assign(void* self, void* iterator) {
    QRegularExpressionMatchIterator_OperatorAssign((QRegularExpressionMatchIterator*)self, (QRegularExpressionMatchIterator*)iterator);
}

void q_regularexpressionmatchiterator_swap(void* self, void* other) {
    QRegularExpressionMatchIterator_Swap((QRegularExpressionMatchIterator*)self, (QRegularExpressionMatchIterator*)other);
}

bool q_regularexpressionmatchiterator_is_valid(void* self) {
    return QRegularExpressionMatchIterator_IsValid((QRegularExpressionMatchIterator*)self);
}

bool q_regularexpressionmatchiterator_has_next(void* self) {
    return QRegularExpressionMatchIterator_HasNext((QRegularExpressionMatchIterator*)self);
}

QRegularExpressionMatch* q_regularexpressionmatchiterator_next(void* self) {
    return QRegularExpressionMatchIterator_Next((QRegularExpressionMatchIterator*)self);
}

QRegularExpressionMatch* q_regularexpressionmatchiterator_peek_next(void* self) {
    return QRegularExpressionMatchIterator_PeekNext((QRegularExpressionMatchIterator*)self);
}

QRegularExpression* q_regularexpressionmatchiterator_regular_expression(void* self) {
    return QRegularExpressionMatchIterator_RegularExpression((QRegularExpressionMatchIterator*)self);
}

int64_t q_regularexpressionmatchiterator_match_type(void* self) {
    return QRegularExpressionMatchIterator_MatchType((QRegularExpressionMatchIterator*)self);
}

int64_t q_regularexpressionmatchiterator_match_options(void* self) {
    return QRegularExpressionMatchIterator_MatchOptions((QRegularExpressionMatchIterator*)self);
}

void q_regularexpressionmatchiterator_delete(void* self) {
    QRegularExpressionMatchIterator_Delete((QRegularExpressionMatchIterator*)(self));
}
