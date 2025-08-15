#pragma once
#ifndef SRCQT6C_LIBQREGULAREXPRESSION_H
#define SRCQT6C_LIBQREGULAREXPRESSION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qregularexpression.html

/// q_regularexpression_new constructs a new QRegularExpression object.
///
QRegularExpression* q_regularexpression_new();

/// q_regularexpression_new2 constructs a new QRegularExpression object.
///
/// @param pattern const char*
QRegularExpression* q_regularexpression_new2(const char* pattern);

/// q_regularexpression_new3 constructs a new QRegularExpression object.
///
/// @param re QRegularExpression*
QRegularExpression* q_regularexpression_new3(void* re);

/// q_regularexpression_new4 constructs a new QRegularExpression object.
///
/// @param pattern const char*
/// @param options flag of enum QRegularExpression__PatternOption
QRegularExpression* q_regularexpression_new4(const char* pattern, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#patternOptions)
///
/// @param self QRegularExpression*
///
/// @return flag of enum QRegularExpression__PatternOption
int64_t q_regularexpression_pattern_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#setPatternOptions)
///
/// @param self QRegularExpression*
/// @param options flag of enum QRegularExpression__PatternOption
void q_regularexpression_set_pattern_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#operator-eq)
///
/// @param self QRegularExpression*
/// @param re QRegularExpression*
void q_regularexpression_operator_assign(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#swap)
///
/// @param self QRegularExpression*
/// @param other QRegularExpression*
void q_regularexpression_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#pattern)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpression*
const char* q_regularexpression_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#setPattern)
///
/// @param self QRegularExpression*
/// @param pattern const char*
void q_regularexpression_set_pattern(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#isValid)
///
/// @param self QRegularExpression*
bool q_regularexpression_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#patternErrorOffset)
///
/// @param self QRegularExpression*
int64_t q_regularexpression_pattern_error_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpression*
const char* q_regularexpression_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#captureCount)
///
/// @param self QRegularExpression*
int32_t q_regularexpression_capture_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#namedCaptureGroups)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpression*
const char** q_regularexpression_named_capture_groups(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self QRegularExpression*
/// @param subject const char*
QRegularExpressionMatch* q_regularexpression_match(void* self, const char* subject);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self QRegularExpression*
/// @param subject const char*
QRegularExpressionMatchIterator* q_regularexpression_global_match(void* self, const char* subject);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#optimize)
///
/// @param self QRegularExpression*
void q_regularexpression_optimize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#escape)
///
/// Caller is responsible for freeing the returned memory
///
/// @param str const char*
const char* q_regularexpression_escape(const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// Caller is responsible for freeing the returned memory
///
/// @param str const char*
const char* q_regularexpression_wildcard_to_regular_expression(const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
///
/// Caller is responsible for freeing the returned memory
///
/// @param expression const char*
const char* q_regularexpression_anchored_pattern(const char* expression);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self QRegularExpression*
/// @param subject const char*
/// @param offset int64_t
QRegularExpressionMatch* q_regularexpression_match22(void* self, const char* subject, int64_t offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self QRegularExpression*
/// @param subject const char*
/// @param offset int64_t
/// @param matchType enum QRegularExpression__MatchType
QRegularExpressionMatch* q_regularexpression_match3(void* self, const char* subject, int64_t offset, int64_t matchType);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self QRegularExpression*
/// @param subject const char*
/// @param offset int64_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
QRegularExpressionMatch* q_regularexpression_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self QRegularExpression*
/// @param subject const char*
/// @param offset int64_t
QRegularExpressionMatchIterator* q_regularexpression_global_match22(void* self, const char* subject, int64_t offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self QRegularExpression*
/// @param subject const char*
/// @param offset int64_t
/// @param matchType enum QRegularExpression__MatchType
QRegularExpressionMatchIterator* q_regularexpression_global_match3(void* self, const char* subject, int64_t offset, int64_t matchType);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self QRegularExpression*
/// @param subject const char*
/// @param offset int64_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
QRegularExpressionMatchIterator* q_regularexpression_global_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// Caller is responsible for freeing the returned memory
///
/// @param str const char*
/// @param options flag of enum QRegularExpression__WildcardConversionOption
const char* q_regularexpression_wildcard_to_regular_expression22(const char* str, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#dtor.QRegularExpression)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpression*
void q_regularexpression_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpressionmatch.html

/// q_regularexpressionmatch_new constructs a new QRegularExpressionMatch object.
///
QRegularExpressionMatch* q_regularexpressionmatch_new();

/// q_regularexpressionmatch_new2 constructs a new QRegularExpressionMatch object.
///
/// @param match QRegularExpressionMatch*
QRegularExpressionMatch* q_regularexpressionmatch_new2(void* match);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#operator-eq)
///
/// @param self QRegularExpressionMatch*
/// @param match QRegularExpressionMatch*
void q_regularexpressionmatch_operator_assign(void* self, void* match);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#swap)
///
/// @param self QRegularExpressionMatch*
/// @param other QRegularExpressionMatch*
void q_regularexpressionmatch_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#regularExpression)
///
/// @param self QRegularExpressionMatch*
QRegularExpression* q_regularexpressionmatch_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchType)
///
/// @param self QRegularExpressionMatch*
///
/// @return enum QRegularExpression__MatchType
int64_t q_regularexpressionmatch_match_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchOptions)
///
/// @param self QRegularExpressionMatch*
///
/// @return flag of enum QRegularExpression__MatchOption
int64_t q_regularexpressionmatch_match_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasMatch)
///
/// @param self QRegularExpressionMatch*
bool q_regularexpressionmatch_has_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasPartialMatch)
///
/// @param self QRegularExpressionMatch*
bool q_regularexpressionmatch_has_partial_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#isValid)
///
/// @param self QRegularExpressionMatch*
bool q_regularexpressionmatch_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#lastCapturedIndex)
///
/// @param self QRegularExpressionMatch*
int32_t q_regularexpressionmatch_last_captured_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
///
/// @param self QRegularExpressionMatch*
/// @param name char*
bool q_regularexpressionmatch_has_captured(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
///
/// @param self QRegularExpressionMatch*
/// @param nth int
bool q_regularexpressionmatch_has_captured2(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpressionMatch*
const char* q_regularexpressionmatch_captured(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpressionMatch*
/// @param name char*
const char* q_regularexpressionmatch_captured2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedTexts)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpressionMatch*
const char** q_regularexpressionmatch_captured_texts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// @param self QRegularExpressionMatch*
int64_t q_regularexpressionmatch_captured_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// @param self QRegularExpressionMatch*
int64_t q_regularexpressionmatch_captured_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// @param self QRegularExpressionMatch*
int64_t q_regularexpressionmatch_captured_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// @param self QRegularExpressionMatch*
/// @param name char*
int64_t q_regularexpressionmatch_captured_start2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// @param self QRegularExpressionMatch*
/// @param name char*
int64_t q_regularexpressionmatch_captured_length2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// @param self QRegularExpressionMatch*
/// @param name char*
int64_t q_regularexpressionmatch_captured_end2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpressionMatch*
/// @param nth int
const char* q_regularexpressionmatch_captured1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// @param self QRegularExpressionMatch*
/// @param nth int
int64_t q_regularexpressionmatch_captured_start1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// @param self QRegularExpressionMatch*
/// @param nth int
int64_t q_regularexpressionmatch_captured_length1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// @param self QRegularExpressionMatch*
/// @param nth int
int64_t q_regularexpressionmatch_captured_end1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#dtor.QRegularExpressionMatch)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpressionMatch*
void q_regularexpressionmatch_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html

/// q_regularexpressionmatchiterator_new constructs a new QRegularExpressionMatchIterator object.
///
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new();

/// q_regularexpressionmatchiterator_new2 constructs a new QRegularExpressionMatchIterator object.
///
/// @param iterator QRegularExpressionMatchIterator*
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new2(void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#operator-eq)
///
/// @param self QRegularExpressionMatchIterator*
/// @param iterator QRegularExpressionMatchIterator*
void q_regularexpressionmatchiterator_operator_assign(void* self, void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#swap)
///
/// @param self QRegularExpressionMatchIterator*
/// @param other QRegularExpressionMatchIterator*
void q_regularexpressionmatchiterator_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#isValid)
///
/// @param self QRegularExpressionMatchIterator*
bool q_regularexpressionmatchiterator_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#hasNext)
///
/// @param self QRegularExpressionMatchIterator*
bool q_regularexpressionmatchiterator_has_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#next)
///
/// @param self QRegularExpressionMatchIterator*
QRegularExpressionMatch* q_regularexpressionmatchiterator_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#peekNext)
///
/// @param self QRegularExpressionMatchIterator*
QRegularExpressionMatch* q_regularexpressionmatchiterator_peek_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#regularExpression)
///
/// @param self QRegularExpressionMatchIterator*
QRegularExpression* q_regularexpressionmatchiterator_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchType)
///
/// @param self QRegularExpressionMatchIterator*
///
/// @return enum QRegularExpression__MatchType
int64_t q_regularexpressionmatchiterator_match_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchOptions)
///
/// @param self QRegularExpressionMatchIterator*
///
/// @return flag of enum QRegularExpression__MatchOption
int64_t q_regularexpressionmatchiterator_match_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#dtor.QRegularExpressionMatchIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpressionMatchIterator*
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
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_UNANCHOREDWILDCARDCONVERSION = 1,
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_NONPATHWILDCARDCONVERSION = 2
} QRegularExpression__WildcardConversionOption;

#endif
