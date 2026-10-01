#include "libqchar.hpp"
#include "libqlocale.hpp"
#include "libqcollator.hpp"
#include "libqcollator.h"

QCollatorSortKey* q_collatorsortkey_new(const void* other) {
    return QCollatorSortKey_New((QCollatorSortKey*)other);
}

void q_collatorsortkey_operator_assign(void* self, const void* other) {
    QCollatorSortKey_OperatorAssign((QCollatorSortKey*)self, (QCollatorSortKey*)other);
}

void q_collatorsortkey_swap(void* self, void* other) {
    QCollatorSortKey_Swap((QCollatorSortKey*)self, (QCollatorSortKey*)other);
}

int32_t q_collatorsortkey_compare(const void* self, const void* key) {
    return QCollatorSortKey_Compare((QCollatorSortKey*)self, (QCollatorSortKey*)key);
}

void q_collatorsortkey_delete(void* self) {
    QCollatorSortKey_Delete((QCollatorSortKey*)(self));
}

QCollator* q_collator_new() {
    return QCollator_New();
}

QCollator* q_collator_new2(const void* locale) {
    return QCollator_New2((QLocale*)locale);
}

QCollator* q_collator_new3(const void* param1) {
    return QCollator_New3((QCollator*)param1);
}

void q_collator_operator_assign(void* self, const void* param1) {
    QCollator_OperatorAssign((QCollator*)self, (QCollator*)param1);
}

void q_collator_swap(void* self, void* other) {
    QCollator_Swap((QCollator*)self, (QCollator*)other);
}

void q_collator_set_locale(void* self, const void* locale) {
    QCollator_SetLocale((QCollator*)self, (QLocale*)locale);
}

QLocale* q_collator_locale(const void* self) {
    return QCollator_Locale((QCollator*)self);
}

int32_t q_collator_case_sensitivity(const void* self) {
    return QCollator_CaseSensitivity((QCollator*)self);
}

void q_collator_set_case_sensitivity(void* self, int32_t cs) {
    QCollator_SetCaseSensitivity((QCollator*)self, cs);
}

void q_collator_set_numeric_mode(void* self, bool on) {
    QCollator_SetNumericMode((QCollator*)self, on);
}

bool q_collator_numeric_mode(const void* self) {
    return QCollator_NumericMode((QCollator*)self);
}

void q_collator_set_ignore_punctuation(void* self, bool on) {
    QCollator_SetIgnorePunctuation((QCollator*)self, on);
}

bool q_collator_ignore_punctuation(const void* self) {
    return QCollator_IgnorePunctuation((QCollator*)self);
}

int32_t q_collator_compare(const void* self, const char* s1, const char* s2) {
    return QCollator_Compare((QCollator*)self, qstring(s1), qstring(s2));
}

int32_t q_collator_compare2(const void* self, const void* s1, intptr_t len1, const void* s2, intptr_t len2) {
    return QCollator_Compare2((QCollator*)self, (QChar*)s1, len1, (QChar*)s2, len2);
}

bool q_collator_operator_call(const void* self, const char* s1, const char* s2) {
    return QCollator_OperatorCall((QCollator*)self, qstring(s1), qstring(s2));
}

int32_t q_collator_compare3(const void* self, const char* s1, const char* s2) {
    return QCollator_Compare3((QCollator*)self, qstring(s1), qstring(s2));
}

bool q_collator_operator_call2(const void* self, const char* s1, const char* s2) {
    return QCollator_OperatorCall2((QCollator*)self, qstring(s1), qstring(s2));
}

QCollatorSortKey* q_collator_sort_key(const void* self, const char* string) {
    return QCollator_SortKey((QCollator*)self, qstring(string));
}

int32_t q_collator_default_compare(const char* s1, const char* s2) {
    return QCollator_DefaultCompare(qstring(s1), qstring(s2));
}

QCollatorSortKey* q_collator_default_sort_key(const char* key) {
    return QCollator_DefaultSortKey(qstring(key));
}

void q_collator_delete(void* self) {
    QCollator_Delete((QCollator*)(self));
}
