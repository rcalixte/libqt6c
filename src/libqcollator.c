#include "libqchar.hpp"
#include "libqlocale.hpp"
#include <string.h>
#include "libqcollator.hpp"
#include "libqcollator.h"

/// https://doc.qt.io/qt-6/qcollatorsortkey.html

/// q_collatorsortkey_new constructs a new QCollatorSortKey object.
///
/// ``` QCollatorSortKey* other ```
QCollatorSortKey* q_collatorsortkey_new(void* other) {
    return QCollatorSortKey_new((QCollatorSortKey*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#operator=)
///
/// ``` QCollatorSortKey* self, QCollatorSortKey* other ```
void q_collatorsortkey_operator_assign(void* self, void* other) {
    QCollatorSortKey_OperatorAssign((QCollatorSortKey*)self, (QCollatorSortKey*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#swap)
///
/// ``` QCollatorSortKey* self, QCollatorSortKey* other ```
void q_collatorsortkey_swap(void* self, void* other) {
    QCollatorSortKey_Swap((QCollatorSortKey*)self, (QCollatorSortKey*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollatorsortkey.html#compare)
///
/// ``` QCollatorSortKey* self, QCollatorSortKey* key ```
int32_t q_collatorsortkey_compare(void* self, void* key) {
    return QCollatorSortKey_Compare((QCollatorSortKey*)self, (QCollatorSortKey*)key);
}

/// Delete this object from C++ memory.
///
/// ``` QCollatorSortKey* self ```
void q_collatorsortkey_delete(void* self) {
    QCollatorSortKey_Delete((QCollatorSortKey*)(self));
}

/// https://doc.qt.io/qt-6/qcollator.html

/// q_collator_new constructs a new QCollator object.
///
///
QCollator* q_collator_new() {
    return QCollator_new();
}

/// q_collator_new2 constructs a new QCollator object.
///
/// ``` QLocale* locale ```
QCollator* q_collator_new2(void* locale) {
    return QCollator_new2((QLocale*)locale);
}

/// q_collator_new3 constructs a new QCollator object.
///
/// ``` QCollator* param1 ```
QCollator* q_collator_new3(void* param1) {
    return QCollator_new3((QCollator*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#operator=)
///
/// ``` QCollator* self, QCollator* param1 ```
void q_collator_operator_assign(void* self, void* param1) {
    QCollator_OperatorAssign((QCollator*)self, (QCollator*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#swap)
///
/// ``` QCollator* self, QCollator* other ```
void q_collator_swap(void* self, void* other) {
    QCollator_Swap((QCollator*)self, (QCollator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setLocale)
///
/// ``` QCollator* self, QLocale* locale ```
void q_collator_set_locale(void* self, void* locale) {
    QCollator_SetLocale((QCollator*)self, (QLocale*)locale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#locale)
///
/// ``` QCollator* self ```
QLocale* q_collator_locale(void* self) {
    return QCollator_Locale((QCollator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#caseSensitivity)
///
/// ``` QCollator* self ```
int64_t q_collator_case_sensitivity(void* self) {
    return QCollator_CaseSensitivity((QCollator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setCaseSensitivity)
///
/// ``` QCollator* self, enum Qt__CaseSensitivity cs ```
void q_collator_set_case_sensitivity(void* self, int64_t cs) {
    QCollator_SetCaseSensitivity((QCollator*)self, cs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setNumericMode)
///
/// ``` QCollator* self, bool on ```
void q_collator_set_numeric_mode(void* self, bool on) {
    QCollator_SetNumericMode((QCollator*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#numericMode)
///
/// ``` QCollator* self ```
bool q_collator_numeric_mode(void* self) {
    return QCollator_NumericMode((QCollator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#setIgnorePunctuation)
///
/// ``` QCollator* self, bool on ```
void q_collator_set_ignore_punctuation(void* self, bool on) {
    QCollator_SetIgnorePunctuation((QCollator*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#ignorePunctuation)
///
/// ``` QCollator* self ```
bool q_collator_ignore_punctuation(void* self) {
    return QCollator_IgnorePunctuation((QCollator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// ``` QCollator* self, const char* s1, const char* s2 ```
int32_t q_collator_compare(void* self, const char* s1, const char* s2) {
    return QCollator_Compare((QCollator*)self, qstring(s1), qstring(s2));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#compare)
///
/// ``` QCollator* self, QChar* s1, int64_t len1, QChar* s2, int64_t len2 ```
int32_t q_collator_compare2(void* self, void* s1, int64_t len1, void* s2, int64_t len2) {
    return QCollator_Compare2((QCollator*)self, (QChar*)s1, len1, (QChar*)s2, len2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#operator())
///
/// ``` QCollator* self, const char* s1, const char* s2 ```
bool q_collator_operator_call(void* self, const char* s1, const char* s2) {
    return QCollator_OperatorCall((QCollator*)self, qstring(s1), qstring(s2));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcollator.html#sortKey)
///
/// ``` QCollator* self, const char* stringVal ```
QCollatorSortKey* q_collator_sort_key(void* self, const char* stringVal) {
    return QCollator_SortKey((QCollator*)self, qstring(stringVal));
}

/// Delete this object from C++ memory.
///
/// ``` QCollator* self ```
void q_collator_delete(void* self) {
    QCollator_Delete((QCollator*)(self));
}