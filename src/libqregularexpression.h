#pragma once
#ifndef LIBQREGULAREXPRESSION_H
#define LIBQREGULAREXPRESSION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#qHash)
///
/// @param key QRegularExpression*
/// @param seed size_t
///
size_t q_qregularexpression_q_hash(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)

/// q_regularexpression_new constructs a new QRegularExpression object.
///
QRegularExpression* q_regularexpression_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)

/// q_regularexpression_new2 constructs a new QRegularExpression object.
///
/// @param pattern const char*
///
QRegularExpression* q_regularexpression_new2(const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)

/// q_regularexpression_new3 constructs a new QRegularExpression object.
///
/// @param re QRegularExpression*
///
QRegularExpression* q_regularexpression_new3(const void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html)

/// q_regularexpression_new4 constructs a new QRegularExpression object.
///
/// @param pattern const char*
/// @param options flag of enum QRegularExpression__PatternOption
///
QRegularExpression* q_regularexpression_new4(const char* pattern, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#patternOptions)
///
/// @param self const QRegularExpression*
///
/// @return flag of enum QRegularExpression__PatternOption
///
int32_t q_regularexpression_pattern_options(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#setPatternOptions)
///
/// @param self QRegularExpression*
/// @param options flag of enum QRegularExpression__PatternOption
///
void q_regularexpression_set_pattern_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#operator-eq)
///
/// @param self QRegularExpression*
/// @param re QRegularExpression*
///
void q_regularexpression_operator_assign(void* self, const void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#swap)
///
/// @param self QRegularExpression*
/// @param other QRegularExpression*
///
void q_regularexpression_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#pattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpression*
///
const char* q_regularexpression_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#setPattern)
///
/// @param self QRegularExpression*
/// @param pattern const char*
///
void q_regularexpression_set_pattern(void* self, const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#isValid)
///
/// @param self const QRegularExpression*
///
bool q_regularexpression_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#patternErrorOffset)
///
/// @param self const QRegularExpression*
///
intptr_t q_regularexpression_pattern_error_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpression*
///
const char* q_regularexpression_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#captureCount)
///
/// @param self const QRegularExpression*
///
int32_t q_regularexpression_capture_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#namedCaptureGroups)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QRegularExpression*
///
const char** q_regularexpression_named_capture_groups(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subject const char*
///
QRegularExpressionMatch* q_regularexpression_match(const void* self, const char* subject);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
///
QRegularExpressionMatch* q_regularexpression_match2(const void* self, const char* subjectView);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
///
QRegularExpressionMatch* q_regularexpression_match_view(const void* self, const char* subjectView);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subject const char*
///
QRegularExpressionMatchIterator* q_regularexpression_global_match(const void* self, const char* subject);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
///
QRegularExpressionMatchIterator* q_regularexpression_global_match2(const void* self, const char* subjectView);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
///
QRegularExpressionMatchIterator* q_regularexpression_global_match_view(const void* self, const char* subjectView);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#optimize)
///
/// @param self const QRegularExpression*
///
void q_regularexpression_optimize(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#escape)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* q_regularexpression_escape(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* q_regularexpression_wildcard_to_regular_expression(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param expression const char*
///
const char* q_regularexpression_anchored_pattern(const char* expression);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#escape)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* q_regularexpression_escape2(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* q_regularexpression_wildcard_to_regular_expression2(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#anchoredPattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param expression const char*
///
const char* q_regularexpression_anchored_pattern2(const char* expression);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#fromWildcard)
///
/// @param pattern const char*
///
QRegularExpression* q_regularexpression_from_wildcard(const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subject const char*
/// @param offset intptr_t
///
QRegularExpressionMatch* q_regularexpression_match22(const void* self, const char* subject, intptr_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subject const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
///
QRegularExpressionMatch* q_regularexpression_match3(const void* self, const char* subject, intptr_t offset, int32_t matchType);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subject const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
///
QRegularExpressionMatch* q_regularexpression_match4(const void* self, const char* subject, intptr_t offset, int32_t matchType, int32_t matchOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
///
QRegularExpressionMatch* q_regularexpression_match23(const void* self, const char* subjectView, intptr_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
///
QRegularExpressionMatch* q_regularexpression_match32(const void* self, const char* subjectView, intptr_t offset, int32_t matchType);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#match)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
///
QRegularExpressionMatch* q_regularexpression_match42(const void* self, const char* subjectView, intptr_t offset, int32_t matchType, int32_t matchOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
///
QRegularExpressionMatch* q_regularexpression_match_view2(const void* self, const char* subjectView, intptr_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
///
QRegularExpressionMatch* q_regularexpression_match_view3(const void* self, const char* subjectView, intptr_t offset, int32_t matchType);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#matchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
///
QRegularExpressionMatch* q_regularexpression_match_view4(const void* self, const char* subjectView, intptr_t offset, int32_t matchType, int32_t matchOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subject const char*
/// @param offset intptr_t
///
QRegularExpressionMatchIterator* q_regularexpression_global_match22(const void* self, const char* subject, intptr_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subject const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
///
QRegularExpressionMatchIterator* q_regularexpression_global_match3(const void* self, const char* subject, intptr_t offset, int32_t matchType);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subject const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
///
QRegularExpressionMatchIterator* q_regularexpression_global_match4(const void* self, const char* subject, intptr_t offset, int32_t matchType, int32_t matchOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
///
QRegularExpressionMatchIterator* q_regularexpression_global_match23(const void* self, const char* subjectView, intptr_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
///
QRegularExpressionMatchIterator* q_regularexpression_global_match32(const void* self, const char* subjectView, intptr_t offset, int32_t matchType);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatch)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
///
QRegularExpressionMatchIterator* q_regularexpression_global_match42(const void* self, const char* subjectView, intptr_t offset, int32_t matchType, int32_t matchOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
///
QRegularExpressionMatchIterator* q_regularexpression_global_match_view2(const void* self, const char* subjectView, intptr_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
///
QRegularExpressionMatchIterator* q_regularexpression_global_match_view3(const void* self, const char* subjectView, intptr_t offset, int32_t matchType);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#globalMatchView)
///
/// @param self const QRegularExpression*
/// @param subjectView const char*
/// @param offset intptr_t
/// @param matchType enum QRegularExpression__MatchType
/// @param matchOptions flag of enum QRegularExpression__MatchOption
///
QRegularExpressionMatchIterator* q_regularexpression_global_match_view4(const void* self, const char* subjectView, intptr_t offset, int32_t matchType, int32_t matchOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param options flag of enum QRegularExpression__WildcardConversionOption
///
const char* q_regularexpression_wildcard_to_regular_expression22(const char* str, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#wildcardToRegularExpression)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param options flag of enum QRegularExpression__WildcardConversionOption
///
const char* q_regularexpression_wildcard_to_regular_expression23(const char* str, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#fromWildcard)
///
/// @param pattern const char*
/// @param cs enum Qt__CaseSensitivity
///
QRegularExpression* q_regularexpression_from_wildcard2(const char* pattern, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#fromWildcard)
///
/// @param pattern const char*
/// @param cs enum Qt__CaseSensitivity
/// @param options flag of enum QRegularExpression__WildcardConversionOption
///
QRegularExpression* q_regularexpression_from_wildcard3(const char* pattern, int32_t cs, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#dtor.QRegularExpression)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpression*
///
void q_regularexpression_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html)

/// q_regularexpressionmatch_new constructs a new QRegularExpressionMatch object.
///
QRegularExpressionMatch* q_regularexpressionmatch_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html)

/// q_regularexpressionmatch_new2 constructs a new QRegularExpressionMatch object.
///
/// @param match QRegularExpressionMatch*
///
QRegularExpressionMatch* q_regularexpressionmatch_new2(const void* match);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#operator-eq)
///
/// @param self QRegularExpressionMatch*
/// @param match QRegularExpressionMatch*
///
void q_regularexpressionmatch_operator_assign(void* self, const void* match);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#swap)
///
/// @param self QRegularExpressionMatch*
/// @param other QRegularExpressionMatch*
///
void q_regularexpressionmatch_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#regularExpression)
///
/// @param self const QRegularExpressionMatch*
///
QRegularExpression* q_regularexpressionmatch_regular_expression(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchType)
///
/// @param self const QRegularExpressionMatch*
///
/// @return enum QRegularExpression__MatchType
///
int32_t q_regularexpressionmatch_match_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#matchOptions)
///
/// @param self const QRegularExpressionMatch*
///
/// @return flag of enum QRegularExpression__MatchOption
///
int32_t q_regularexpressionmatch_match_options(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasMatch)
///
/// @param self const QRegularExpressionMatch*
///
bool q_regularexpressionmatch_has_match(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasPartialMatch)
///
/// @param self const QRegularExpressionMatch*
///
bool q_regularexpressionmatch_has_partial_match(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#isValid)
///
/// @param self const QRegularExpressionMatch*
///
bool q_regularexpressionmatch_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#lastCapturedIndex)
///
/// @param self const QRegularExpressionMatch*
///
int32_t q_regularexpressionmatch_last_captured_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
///
/// @param self const QRegularExpressionMatch*
/// @param name const char*
///
bool q_regularexpressionmatch_has_captured(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#hasCaptured)
///
/// @param self const QRegularExpressionMatch*
/// @param nth int
///
bool q_regularexpressionmatch_has_captured2(const void* self, int nth);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionMatch*
///
const char* q_regularexpressionmatch_captured(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedView)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionMatch*
///
const char* q_regularexpressionmatch_captured_view(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionMatch*
/// @param name const char*
///
const char* q_regularexpressionmatch_captured2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedView)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionMatch*
/// @param name const char*
///
const char* q_regularexpressionmatch_captured_view2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedTexts)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QRegularExpressionMatch*
///
const char** q_regularexpressionmatch_captured_texts(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// @param self const QRegularExpressionMatch*
///
intptr_t q_regularexpressionmatch_captured_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// @param self const QRegularExpressionMatch*
///
intptr_t q_regularexpressionmatch_captured_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// @param self const QRegularExpressionMatch*
///
intptr_t q_regularexpressionmatch_captured_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// @param self const QRegularExpressionMatch*
/// @param name const char*
///
intptr_t q_regularexpressionmatch_captured_start2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// @param self const QRegularExpressionMatch*
/// @param name const char*
///
intptr_t q_regularexpressionmatch_captured_length2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// @param self const QRegularExpressionMatch*
/// @param name const char*
///
intptr_t q_regularexpressionmatch_captured_end2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#captured)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionMatch*
/// @param nth int
///
const char* q_regularexpressionmatch_captured1(const void* self, int nth);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedView)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionMatch*
/// @param nth int
///
const char* q_regularexpressionmatch_captured_view1(const void* self, int nth);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedStart)
///
/// @param self const QRegularExpressionMatch*
/// @param nth int
///
intptr_t q_regularexpressionmatch_captured_start1(const void* self, int nth);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedLength)
///
/// @param self const QRegularExpressionMatch*
/// @param nth int
///
intptr_t q_regularexpressionmatch_captured_length1(const void* self, int nth);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#capturedEnd)
///
/// @param self const QRegularExpressionMatch*
/// @param nth int
///
intptr_t q_regularexpressionmatch_captured_end1(const void* self, int nth);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatch.html#dtor.QRegularExpressionMatch)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpressionMatch*
///
void q_regularexpressionmatch_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html)

/// q_regularexpressionmatchiterator_new constructs a new QRegularExpressionMatchIterator object.
///
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html)

/// q_regularexpressionmatchiterator_new2 constructs a new QRegularExpressionMatchIterator object.
///
/// @param iterator QRegularExpressionMatchIterator*
///
QRegularExpressionMatchIterator* q_regularexpressionmatchiterator_new2(const void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#operator-eq)
///
/// @param self QRegularExpressionMatchIterator*
/// @param iterator QRegularExpressionMatchIterator*
///
void q_regularexpressionmatchiterator_operator_assign(void* self, const void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#swap)
///
/// @param self QRegularExpressionMatchIterator*
/// @param other QRegularExpressionMatchIterator*
///
void q_regularexpressionmatchiterator_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#isValid)
///
/// @param self const QRegularExpressionMatchIterator*
///
bool q_regularexpressionmatchiterator_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#hasNext)
///
/// @param self const QRegularExpressionMatchIterator*
///
bool q_regularexpressionmatchiterator_has_next(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#next)
///
/// @param self QRegularExpressionMatchIterator*
///
QRegularExpressionMatch* q_regularexpressionmatchiterator_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#peekNext)
///
/// @param self const QRegularExpressionMatchIterator*
///
QRegularExpressionMatch* q_regularexpressionmatchiterator_peek_next(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#regularExpression)
///
/// @param self const QRegularExpressionMatchIterator*
///
QRegularExpression* q_regularexpressionmatchiterator_regular_expression(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchType)
///
/// @param self const QRegularExpressionMatchIterator*
///
/// @return enum QRegularExpression__MatchType
///
int32_t q_regularexpressionmatchiterator_match_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#matchOptions)
///
/// @param self const QRegularExpressionMatchIterator*
///
/// @return flag of enum QRegularExpression__MatchOption
///
int32_t q_regularexpressionmatchiterator_match_options(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html#dtor.QRegularExpressionMatchIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpressionMatchIterator*
///
void q_regularexpressionmatchiterator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#public-types)

typedef enum {
    QREGULAREXPRESSION_MATCHTYPE_NORMALMATCH = 0,
    QREGULAREXPRESSION_MATCHTYPE_PARTIALPREFERCOMPLETEMATCH = 1,
    QREGULAREXPRESSION_MATCHTYPE_PARTIALPREFERFIRSTMATCH = 2,
    QREGULAREXPRESSION_MATCHTYPE_NOMATCH = 3
} QRegularExpression__MatchType;

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#public-types)

typedef enum {
    QREGULAREXPRESSION_MATCHOPTION_NOMATCHOPTION = 0,
    QREGULAREXPRESSION_MATCHOPTION_ANCHORATOFFSETMATCHOPTION = 1,
    QREGULAREXPRESSION_MATCHOPTION_ANCHOREDMATCHOPTION = 1,
    QREGULAREXPRESSION_MATCHOPTION_DONTCHECKSUBJECTSTRINGMATCHOPTION = 2
} QRegularExpression__MatchOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpression.html#public-types)

typedef enum {
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_DEFAULTWILDCARDCONVERSION = 0,
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_UNANCHOREDWILDCARDCONVERSION = 1,
    QREGULAREXPRESSION_WILDCARDCONVERSIONOPTION_NONPATHWILDCARDCONVERSION = 2
} QRegularExpression__WildcardConversionOption;

#endif
