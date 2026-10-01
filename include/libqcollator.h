#pragma once
#ifndef LIBQCOLLATOR_H
#define LIBQCOLLATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html)

/// q_collatorsortkey_new constructs a new QCollatorSortKey object.
///
/// @param other QCollatorSortKey*
///
QCollatorSortKey* q_collatorsortkey_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#operator-eq)
///
/// @param self QCollatorSortKey*
/// @param other QCollatorSortKey*
///
void q_collatorsortkey_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#swap)
///
/// @param self QCollatorSortKey*
/// @param other QCollatorSortKey*
///
void q_collatorsortkey_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#compare)
///
/// @param self const QCollatorSortKey*
/// @param key QCollatorSortKey*
///
int32_t q_collatorsortkey_compare(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollatorsortkey.html#dtor.QCollatorSortKey)
///
/// Delete this object from C++ memory.
///
/// @param self QCollatorSortKey*
///
void q_collatorsortkey_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html)

/// q_collator_new constructs a new QCollator object.
///
QCollator* q_collator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html)

/// q_collator_new2 constructs a new QCollator object.
///
/// @param locale QLocale*
///
QCollator* q_collator_new2(const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html)

/// q_collator_new3 constructs a new QCollator object.
///
/// @param param1 QCollator*
///
QCollator* q_collator_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-eq)
///
/// @param self QCollator*
/// @param param1 QCollator*
///
void q_collator_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#swap)
///
/// @param self QCollator*
/// @param other QCollator*
///
void q_collator_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setLocale)
///
/// @param self QCollator*
/// @param locale QLocale*
///
void q_collator_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#locale)
///
/// @param self const QCollator*
///
QLocale* q_collator_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#caseSensitivity)
///
/// @param self const QCollator*
///
/// @return enum Qt__CaseSensitivity
///
int32_t q_collator_case_sensitivity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setCaseSensitivity)
///
/// @param self QCollator*
/// @param cs enum Qt__CaseSensitivity
///
void q_collator_set_case_sensitivity(void* self, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setNumericMode)
///
/// @param self QCollator*
/// @param on bool
///
void q_collator_set_numeric_mode(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#numericMode)
///
/// @param self const QCollator*
///
bool q_collator_numeric_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#setIgnorePunctuation)
///
/// @param self QCollator*
/// @param on bool
///
void q_collator_set_ignore_punctuation(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#ignorePunctuation)
///
/// @param self const QCollator*
///
bool q_collator_ignore_punctuation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// @param self const QCollator*
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_collator_compare(const void* self, const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// @param self const QCollator*
/// @param s1 QChar*
/// @param len1 intptr_t
/// @param s2 QChar*
/// @param len2 intptr_t
///
int32_t q_collator_compare2(const void* self, const void* s1, intptr_t len1, const void* s2, intptr_t len2);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-28-29)
///
/// @param self const QCollator*
/// @param s1 const char*
/// @param s2 const char*
///
bool q_collator_operator_call(const void* self, const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// @param self const QCollator*
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_collator_compare3(const void* self, const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#operator-28-29)
///
/// @param self const QCollator*
/// @param s1 const char*
/// @param s2 const char*
///
bool q_collator_operator_call2(const void* self, const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#sortKey)
///
/// @param self const QCollator*
/// @param string const char*
///
QCollatorSortKey* q_collator_sort_key(const void* self, const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#defaultCompare)
///
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_collator_default_compare(const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#defaultSortKey)
///
/// @param key const char*
///
QCollatorSortKey* q_collator_default_sort_key(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcollator.html#dtor.QCollator)
///
/// Delete this object from C++ memory.
///
/// @param self QCollator*
///
void q_collator_delete(void* self);

#endif
