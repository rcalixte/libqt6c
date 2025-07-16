#pragma once
#ifndef SRCQT6C_LIBQREGULAREXPRESSION_H
#define SRCQT6C_LIBQREGULAREXPRESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qregularexpression.html

/// q_regularexpression_new constructs a new QRegularExpression object.
///
///
QRegularExpression* q_regularexpression_new();

/// q_regularexpression_new2 constructs a new QRegularExpression object.
///
/// ``` const char* pattern ```
QRegularExpression* q_regularexpression_new2(const char* pattern);

/// q_regularexpression_new3 constructs a new QRegularExpression object.
///
/// ``` QRegularExpression* re ```
QRegularExpression* q_regularexpression_new3(void* re);

/// q_regularexpression_new4 constructs a new QRegularExpression object.
///
/// ``` const char* pattern, int options ```
QRegularExpression* q_regularexpression_new4(const char* pattern, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#patternOptions)
///
/// ``` QRegularExpression* self ```
int64_t q_regularexpression_pattern_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#setPatternOptions)
///
/// ``` QRegularExpression* self, int options ```
void q_regularexpression_set_pattern_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#operator=)
///
/// ``` QRegularExpression* self, QRegularExpression* re ```
void q_regularexpression_operator_assign(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#swap)
///
/// ``` QRegularExpression* self, QRegularExpression* other ```
void q_regularexpression_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#pattern)
///
/// ``` QRegularExpression* self ```
const char* q_regularexpression_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#setPattern)
///
/// ``` QRegularExpression* self, const char* pattern ```
void q_regularexpression_set_pattern(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#isValid)
///
/// ``` QRegularExpression* self ```
bool q_regularexpression_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#patternErrorOffset)
///
/// ``` QRegularExpression* self ```
int64_t q_regularexpression_pattern_error_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#errorString)
///
/// ``` QRegularExpression* self ```
const char* q_regularexpression_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#captureCount)
///
/// ``` QRegularExpression* self ```
int32_t q_regularexpression_capture_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#namedCaptureGroups)
///
/// ``` QRegularExpression* self ```
const char** q_regularexpression_named_capture_groups(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// ``` QRegularExpression* self, const char* subject ```
QRegularExpressionMatch* q_regularexpression_match(void* self, const char* subject);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// ``` QRegularExpression* self, const char* subject ```
QRegularExpressionMatchIterator* q_regularexpression_global_match(void* self, const char* subject);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#optimize)
///
/// ``` QRegularExpression* self ```
void q_regularexpression_optimize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#escape)
///
/// ``` const char* str ```
const char* q_regularexpression_escape(const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// ``` const char* str ```
const char* q_regularexpression_wildcard_to_regular_expression(const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
///
/// ``` const char* expression ```
const char* q_regularexpression_anchored_pattern(const char* expression);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// ``` QRegularExpression* self, const char* subject, int64_t offset ```
QRegularExpressionMatch* q_regularexpression_match22(void* self, const char* subject, int64_t offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// ``` QRegularExpression* self, const char* subject, int64_t offset, enum QRegularExpression__MatchType matchType ```
QRegularExpressionMatch* q_regularexpression_match3(void* self, const char* subject, int64_t offset, int64_t matchType);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// ``` QRegularExpression* self, const char* subject, int64_t offset, enum QRegularExpression__MatchType matchType, int matchOptions ```
QRegularExpressionMatch* q_regularexpression_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// ``` QRegularExpression* self, const char* subject, int64_t offset ```
QRegularExpressionMatchIterator* q_regularexpression_global_match22(void* self, const char* subject, int64_t offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// ``` QRegularExpression* self, const char* subject, int64_t offset, enum QRegularExpression__MatchType matchType ```
QRegularExpressionMatchIterator* q_regularexpression_global_match3(void* self, const char* subject, int64_t offset, int64_t matchType);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// ``` QRegularExpression* self, const char* subject, int64_t offset, enum QRegularExpression__MatchType matchType, int matchOptions ```
QRegularExpressionMatchIterator* q_regularexpression_global_match4(void* self, const char* subject, int64_t offset, int64_t matchType, int64_t matchOptions);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// ``` const char* str, int options ```
const char* q_regularexpression_wildcard_to_regular_expression22(const char* str, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpression.html#dtor.QRegularExpression)
///
/// Delete this object from C++ memory.
///
/// ``` QRegularExpression* self ```
void q_regularexpression_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpressionmatch.html

/// q_regularexpressionmatch_new constructs a new QRegularExpressionMatch object.
///
///
QRegularExpressionMatch* q_regularexpressionmatch_new();

/// q_regularexpressionmatch_new2 constructs a new QRegularExpressionMatch object.
///
/// ``` QRegularExpressionMatch* match ```
QRegularExpressionMatch* q_regularexpressionmatch_new2(void* match);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#operator=)
///
/// ``` QRegularExpressionMatch* self, QRegularExpressionMatch* match ```
void q_regularexpressionmatch_operator_assign(void* self, void* match);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#swap)
///
/// ``` QRegularExpressionMatch* self, QRegularExpressionMatch* other ```
void q_regularexpressionmatch_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#regularExpression)
///
/// ``` QRegularExpressionMatch* self ```
QRegularExpression* q_regularexpressionmatch_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchType)
///
/// ``` QRegularExpressionMatch* self ```
int64_t q_regularexpressionmatch_match_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchOptions)
///
/// ``` QRegularExpressionMatch* self ```
int64_t q_regularexpressionmatch_match_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasMatch)
///
/// ``` QRegularExpressionMatch* self ```
bool q_regularexpressionmatch_has_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasPartialMatch)
///
/// ``` QRegularExpressionMatch* self ```
bool q_regularexpressionmatch_has_partial_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#isValid)
///
/// ``` QRegularExpressionMatch* self ```
bool q_regularexpressionmatch_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#lastCapturedIndex)
///
/// ``` QRegularExpressionMatch* self ```
int32_t q_regularexpressionmatch_last_captured_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
///
/// ``` QRegularExpressionMatch* self, char* name ```
bool q_regularexpressionmatch_has_captured(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
///
/// ``` QRegularExpressionMatch* self, int nth ```
bool q_regularexpressionmatch_has_captured2(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// ``` QRegularExpressionMatch* self ```
const char* q_regularexpressionmatch_captured(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// ``` QRegularExpressionMatch* self, char* name ```
const char* q_regularexpressionmatch_captured2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedTexts)
///
/// ``` QRegularExpressionMatch* self ```
const char** q_regularexpressionmatch_captured_texts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// ``` QRegularExpressionMatch* self ```
int64_t q_regularexpressionmatch_captured_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// ``` QRegularExpressionMatch* self ```
int64_t q_regularexpressionmatch_captured_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// ``` QRegularExpressionMatch* self ```
int64_t q_regularexpressionmatch_captured_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// ``` QRegularExpressionMatch* self, char* name ```
int64_t q_regularexpressionmatch_captured_start2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// ``` QRegularExpressionMatch* self, char* name ```
int64_t q_regularexpressionmatch_captured_length2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// ``` QRegularExpressionMatch* self, char* name ```
int64_t q_regularexpressionmatch_captured_end2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// ``` QRegularExpressionMatch* self, int nth ```
const char* q_regularexpressionmatch_captured1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// ``` QRegularExpressionMatch* self, int nth ```
int64_t q_regularexpressionmatch_captured_start1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// ``` QRegularExpressionMatch* self, int nth ```
int64_t q_regularexpressionmatch_captured_length1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// ``` QRegularExpressionMatch* self, int nth ```
int64_t q_regularexpressionmatch_captured_end1(void* self, int nth);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatch.html#dtor.QRegularExpressionMatch)
///
/// Delete this object from C++ memory.
///
/// ``` QRegularExpressionMatch* self ```
void q_regularexpressionmatch_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html

/// q_regularexpressionmatchiterator_new constructs a new QRegularExpressionMatchIterator object.
///
///
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new();

/// q_regularexpressionmatchiterator_new2 constructs a new QRegularExpressionMatchIterator object.
///
/// ``` QRegularExpressionMatchIterator* iterator ```
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new2(void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#operator=)
///
/// ``` QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator ```
void q_regularexpressionmatchiterator_operator_assign(void* self, void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#swap)
///
/// ``` QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other ```
void q_regularexpressionmatchiterator_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#isValid)
///
/// ``` QRegularExpressionMatchIterator* self ```
bool q_regularexpressionmatchiterator_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#hasNext)
///
/// ``` QRegularExpressionMatchIterator* self ```
bool q_regularexpressionmatchiterator_has_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#next)
///
/// ``` QRegularExpressionMatchIterator* self ```
QRegularExpressionMatch* q_regularexpressionmatchiterator_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#peekNext)
///
/// ``` QRegularExpressionMatchIterator* self ```
QRegularExpressionMatch* q_regularexpressionmatchiterator_peek_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#regularExpression)
///
/// ``` QRegularExpressionMatchIterator* self ```
QRegularExpression* q_regularexpressionmatchiterator_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchType)
///
/// ``` QRegularExpressionMatchIterator* self ```
int64_t q_regularexpressionmatchiterator_match_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchOptions)
///
/// ``` QRegularExpressionMatchIterator* self ```
int64_t q_regularexpressionmatchiterator_match_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#dtor.QRegularExpressionMatchIterator)
///
/// Delete this object from C++ memory.
///
/// ``` QRegularExpressionMatchIterator* self ```
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
