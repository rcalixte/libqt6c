#pragma once
#ifndef SRCQT6C_LIBQREGULAREXPRESSION_H
#define SRCQT6C_LIBQREGULAREXPRESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

QRegularExpression* q_regularexpression_new();
QRegularExpression* q_regularexpression_new2(const char* pattern);
QRegularExpression* q_regularexpression_new3(void* re);
QRegularExpression* q_regularexpression_new4(const char* pattern, int64_t options);
int64_t q_regularexpression_pattern_options(void* self);
void q_regularexpression_set_pattern_options(void* self, int64_t options);
void q_regularexpression_operator_assign(void* self, void* re);
void q_regularexpression_swap(void* self, void* other);
const char* q_regularexpression_pattern(void* self);
void q_regularexpression_set_pattern(void* self, const char* pattern);
bool q_regularexpression_is_valid(void* self);
int64_t q_regularexpression_pattern_error_offset(void* self);
const char* q_regularexpression_error_string(void* self);
int32_t q_regularexpression_capture_count(void* self);
const char** q_regularexpression_named_capture_groups(void* self);
QRegularExpressionMatch* q_regularexpression_match(void* self, const char* subject);
QRegularExpressionMatchIterator* q_regularexpression_global_match(void* self, const char* subject);
void q_regularexpression_optimize(void* self);
const char* q_regularexpression_escape(const char* str);
const char* q_regularexpression_wildcard_to_regular_expression(const char* str);
const char* q_regularexpression_anchored_pattern(const char* expression);
bool q_regularexpression_operator_equal(void* self, void* re);
bool q_regularexpression_operator_not_equal(void* self, void* re);
QRegularExpressionMatch* q_regularexpression_match2(void* self, const char* subject, int64_t offset);
QRegularExpressionMatch* q_regularexpression_match3(void* self, const char* subject, int64_t offset, int64_t matchType);
QRegularExpressionMatch* q_regularexpression_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions);
QRegularExpressionMatchIterator* q_regularexpression_global_match2(void* self, const char* subject, int64_t offset);
QRegularExpressionMatchIterator* q_regularexpression_global_match3(void* self, const char* subject, int64_t offset, int64_t matchType);
QRegularExpressionMatchIterator* q_regularexpression_global_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions);
const char* q_regularexpression_wildcard_to_regular_expression2(const char* str, int64_t options);
void q_regularexpression_delete(void* self);

QRegularExpressionMatch* q_regularexpressionmatch_new();
QRegularExpressionMatch* q_regularexpressionmatch_new2(void* match);
void q_regularexpressionmatch_operator_assign(void* self, void* match);
void q_regularexpressionmatch_swap(void* self, void* other);
QRegularExpression* q_regularexpressionmatch_regular_expression(void* self);
int64_t q_regularexpressionmatch_match_type(void* self);
int64_t q_regularexpressionmatch_match_options(void* self);
bool q_regularexpressionmatch_has_match(void* self);
bool q_regularexpressionmatch_has_partial_match(void* self);
bool q_regularexpressionmatch_is_valid(void* self);
int32_t q_regularexpressionmatch_last_captured_index(void* self);
bool q_regularexpressionmatch_has_captured(void* self, const char* name);
bool q_regularexpressionmatch_has_captured_with_nth(void* self, int nth);
const char* q_regularexpressionmatch_captured(void* self);
const char* q_regularexpressionmatch_captured_with_name(void* self, const char* name);
const char** q_regularexpressionmatch_captured_texts(void* self);
int64_t q_regularexpressionmatch_captured_start(void* self);
int64_t q_regularexpressionmatch_captured_length(void* self);
int64_t q_regularexpressionmatch_captured_end(void* self);
int64_t q_regularexpressionmatch_captured_start_with_name(void* self, const char* name);
int64_t q_regularexpressionmatch_captured_length_with_name(void* self, const char* name);
int64_t q_regularexpressionmatch_captured_end_with_name(void* self, const char* name);
const char* q_regularexpressionmatch_captured1(void* self, int nth);
int64_t q_regularexpressionmatch_captured_start1(void* self, int nth);
int64_t q_regularexpressionmatch_captured_length1(void* self, int nth);
int64_t q_regularexpressionmatch_captured_end1(void* self, int nth);
void q_regularexpressionmatch_delete(void* self);

QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new();
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new2(void* iterator);
void q_regularexpressionmatchiterator_operator_assign(void* self, void* iterator);
void q_regularexpressionmatchiterator_swap(void* self, void* other);
bool q_regularexpressionmatchiterator_is_valid(void* self);
bool q_regularexpressionmatchiterator_has_next(void* self);
QRegularExpressionMatch* q_regularexpressionmatchiterator_next(void* self);
QRegularExpressionMatch* q_regularexpressionmatchiterator_peek_next(void* self);
QRegularExpression* q_regularexpressionmatchiterator_regular_expression(void* self);
int64_t q_regularexpressionmatchiterator_match_type(void* self);
int64_t q_regularexpressionmatchiterator_match_options(void* self);
void q_regularexpressionmatchiterator_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpression.html#types

typedef enum {
    QREGULAREXPRESSION_PATTERNOPTION_NOPATTERNOPTION = 0,
    QREGULAREXPRESSION_PATTERNOPTION_CASEINSENSITIVEOPTION = 1,
    QREGULAREXPRESSION_PATTERNOPTION_DOTMATCHESEVERYTHINGOPTION = 2,
    QREGULAREXPRESSION_PATTERNOPTION_MULTILINEOPTION = 4,
    QREGULAREXPRESSION_PATTERNOPTION_EXTENDEDPATTERNSYNTAXOPTION = 8,
    QREGULAREXPRESSION_PATTERNOPTION_INVERTEDGREEDINESSOPTION = 16,
    QREGULAREXPRESSION_PATTERNOPTION_DONTCAPTUREOPTION = 32,
    QREGULAREXPRESSION_PATTERNOPTION_USEUNICODEPROPERTIESOPTION = 64
} QRegularExpression__PatternOption;

typedef enum {
    QREGULAREXPRESSION_MATCHTYPE_NORMALMATCH = 0,
    QREGULAREXPRESSION_MATCHTYPE_PARTIALPREFERCOMPLETEMATCH = 1,
    QREGULAREXPRESSION_MATCHTYPE_PARTIALPREFERFIRSTMATCH = 2,
    QREGULAREXPRESSION_MATCHTYPE_NOMATCH = 3
} QRegularExpression__MatchType;

typedef enum {
    QREGULAREXPRESSION_MATCHOPTION_NOMATCHOPTION = 0,
    QREGULAREXPRESSION_MATCHOPTION_ANCHORATOFFSETMATCHOPTION = 1,
    QREGULAREXPRESSION_MATCHOPTION_ANCHOREDMATCHOPTION = 1,
    QREGULAREXPRESSION_MATCHOPTION_DONTCHECKSUBJECTSTRINGMATCHOPTION = 2
} QRegularExpression__MatchOption;

typedef enum {
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_DEFAULTWILDCARDCONVERSION = 0,
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_UNANCHOREDWILDCARDCONVERSION = 1
} QRegularExpression__WildcardConversionOption;

#endif
