#include "libqchar.hpp"
#include "libqlocale.hpp"
#include <string.h>
#include "libqcollator.hpp"
#include "libqcollator.h"

QCollatorSortKey* q_collatorsortkey_new(void* other) {
    return QCollatorSortKey_new((QCollatorSortKey*)other);
}

void q_collatorsortkey_operator_assign(void* self, void* other) {
    QCollatorSortKey_OperatorAssign((QCollatorSortKey*)self, (QCollatorSortKey*)other);
}

void q_collatorsortkey_swap(void* self, void* other) {
    QCollatorSortKey_Swap((QCollatorSortKey*)self, (QCollatorSortKey*)other);
}

int32_t q_collatorsortkey_compare(void* self, void* key) {
    return QCollatorSortKey_Compare((QCollatorSortKey*)self, (QCollatorSortKey*)key);
}

void q_collatorsortkey_delete(void* self) {
    QCollatorSortKey_Delete((QCollatorSortKey*)(self));
}

QCollator* q_collator_new() {
    return QCollator_new();
}

QCollator* q_collator_new2(void* locale) {
    return QCollator_new2((QLocale*)locale);
}

QCollator* q_collator_new3(void* param1) {
    return QCollator_new3((QCollator*)param1);
}

void q_collator_operator_assign(void* self, void* param1) {
    QCollator_OperatorAssign((QCollator*)self, (QCollator*)param1);
}

void q_collator_swap(void* self, void* other) {
    QCollator_Swap((QCollator*)self, (QCollator*)other);
}

void q_collator_set_locale(void* self, void* locale) {
    QCollator_SetLocale((QCollator*)self, (QLocale*)locale);
}

QLocale* q_collator_locale(void* self) {
    return QCollator_Locale((QCollator*)self);
}

int64_t q_collator_case_sensitivity(void* self) {
    return QCollator_CaseSensitivity((QCollator*)self);
}

void q_collator_set_case_sensitivity(void* self, int64_t cs) {
    QCollator_SetCaseSensitivity((QCollator*)self, cs);
}

void q_collator_set_numeric_mode(void* self, bool on) {
    QCollator_SetNumericMode((QCollator*)self, on);
}

bool q_collator_numeric_mode(void* self) {
    return QCollator_NumericMode((QCollator*)self);
}

void q_collator_set_ignore_punctuation(void* self, bool on) {
    QCollator_SetIgnorePunctuation((QCollator*)self, on);
}

bool q_collator_ignore_punctuation(void* self) {
    return QCollator_IgnorePunctuation((QCollator*)self);
}

int32_t q_collator_compare(void* self, const char* s1, const char* s2) {
    return QCollator_Compare((QCollator*)self, qstring(s1), qstring(s2));
}

int32_t q_collator_compare2(void* self, void* s1, int64_t len1, void* s2, int64_t len2) {
    return QCollator_Compare2((QCollator*)self, (QChar*)s1, len1, (QChar*)s2, len2);
}

bool q_collator_operator_call(void* self, const char* s1, const char* s2) {
    return QCollator_OperatorCall((QCollator*)self, qstring(s1), qstring(s2));
}

QCollatorSortKey* q_collator_sort_key(void* self, const char* stringVal) {
    return QCollator_SortKey((QCollator*)self, qstring(stringVal));
}

void q_collator_delete(void* self) {
    QCollator_Delete((QCollator*)(self));
}
