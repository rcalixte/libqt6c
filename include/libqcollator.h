#pragma once
#ifndef SRCQT6C_LIBQCOLLATOR_H
#define SRCQT6C_LIBQCOLLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include "libqlocale.h"
#include <string.h>

QCollatorSortKey* q_collatorsortkey_new(void* other);
void q_collatorsortkey_operator_assign(void* self, void* other);
void q_collatorsortkey_swap(void* self, void* other);
int32_t q_collatorsortkey_compare(void* self, void* key);
void q_collatorsortkey_delete(void* self);

QCollator* q_collator_new();
QCollator* q_collator_new2(void* locale);
QCollator* q_collator_new3(void* param1);
void q_collator_operator_assign(void* self, void* param1);
void q_collator_swap(void* self, void* other);
void q_collator_set_locale(void* self, void* locale);
QLocale* q_collator_locale(void* self);
int64_t q_collator_case_sensitivity(void* self);
void q_collator_set_case_sensitivity(void* self, int64_t cs);
void q_collator_set_numeric_mode(void* self, bool on);
bool q_collator_numeric_mode(void* self);
void q_collator_set_ignore_punctuation(void* self, bool on);
bool q_collator_ignore_punctuation(void* self);
int32_t q_collator_compare(void* self, const char* s1, const char* s2);
int32_t q_collator_compare2(void* self, void* s1, int64_t len1, void* s2, int64_t len2);
bool q_collator_operator_call(void* self, const char* s1, const char* s2);
QCollatorSortKey* q_collator_sort_key(void* self, const char* stringVal);
void q_collator_delete(void* self);

#endif
