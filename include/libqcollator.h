#pragma once
#ifndef SRCQT6C_LIBQCOLLATOR_H
#define SRCQT6C_LIBQCOLLATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcollatorsortkey.html

/// q_collatorsortkey_new constructs a new QCollatorSortKey object.
///
/// @param other QCollatorSortKey*
QCollatorSortKey* q_collatorsortkey_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#operator-eq)
///
/// @param self QCollatorSortKey*
/// @param other QCollatorSortKey*
void q_collatorsortkey_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#swap)
///
/// @param self QCollatorSortKey*
/// @param other QCollatorSortKey*
void q_collatorsortkey_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#compare)
///
/// @param self QCollatorSortKey*
/// @param key QCollatorSortKey*
int32_t q_collatorsortkey_compare(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#dtor.QCollatorSortKey)
///
/// Delete this object from C++ memory.
///
/// @param self QCollatorSortKey*
void q_collatorsortkey_delete(void* self);

/// https://doc.qt.io/qt-6/qcollator.html

/// q_collator_new constructs a new QCollator object.
///
QCollator* q_collator_new();

/// q_collator_new2 constructs a new QCollator object.
///
/// @param locale QLocale*
QCollator* q_collator_new2(void* locale);

/// q_collator_new3 constructs a new QCollator object.
///
/// @param param1 QCollator*
QCollator* q_collator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#operator-eq)
///
/// @param self QCollator*
/// @param param1 QCollator*
void q_collator_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#swap)
///
/// @param self QCollator*
/// @param other QCollator*
void q_collator_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setLocale)
///
/// @param self QCollator*
/// @param locale QLocale*
void q_collator_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#locale)
///
/// @param self QCollator*
QLocale* q_collator_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#caseSensitivity)
///
/// @param self QCollator*
///
/// @return enum Qt__CaseSensitivity
int32_t q_collator_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setCaseSensitivity)
///
/// @param self QCollator*
/// @param cs enum Qt__CaseSensitivity
void q_collator_set_case_sensitivity(void* self, int32_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setNumericMode)
///
/// @param self QCollator*
/// @param on bool
void q_collator_set_numeric_mode(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#numericMode)
///
/// @param self QCollator*
bool q_collator_numeric_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setIgnorePunctuation)
///
/// @param self QCollator*
/// @param on bool
void q_collator_set_ignore_punctuation(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#ignorePunctuation)
///
/// @param self QCollator*
bool q_collator_ignore_punctuation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// @param self QCollator*
/// @param s1 const char*
/// @param s2 const char*
int32_t q_collator_compare(void* self, const char* s1, const char* s2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// @param self QCollator*
/// @param s1 QChar*
/// @param len1 int64_t
/// @param s2 QChar*
/// @param len2 int64_t
int32_t q_collator_compare2(void* self, void* s1, int64_t len1, void* s2, int64_t len2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#operator-28-29)
///
/// @param self QCollator*
/// @param s1 const char*
/// @param s2 const char*
bool q_collator_operator_call(void* self, const char* s1, const char* s2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#sortKey)
///
/// @param self QCollator*
/// @param stringVal const char*
QCollatorSortKey* q_collator_sort_key(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#dtor.QCollator)
///
/// Delete this object from C++ memory.
///
/// @param self QCollator*
void q_collator_delete(void* self);

#endif
