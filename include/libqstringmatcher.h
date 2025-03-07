#pragma once
#ifndef SRCQT6C_LIBQSTRINGMATCHER_H
#define SRCQT6C_LIBQSTRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include <string.h>

QStringMatcher* q_stringmatcher_new();
QStringMatcher* q_stringmatcher_new2(const char* pattern);
QStringMatcher* q_stringmatcher_new3(void* uc, int64_t lenVal);
QStringMatcher* q_stringmatcher_new4(void* other);
QStringMatcher* q_stringmatcher_new5(const char* pattern, int64_t cs);
QStringMatcher* q_stringmatcher_new6(void* uc, int64_t lenVal, int64_t cs);
void q_stringmatcher_operator_assign(void* self, void* other);
void q_stringmatcher_set_pattern(void* self, const char* pattern);
void q_stringmatcher_set_case_sensitivity(void* self, int64_t cs);
int64_t q_stringmatcher_index_in(void* self, const char* str);
int64_t q_stringmatcher_index_in2(void* self, void* str, int64_t length);
const char* q_stringmatcher_pattern(void* self);
int64_t q_stringmatcher_case_sensitivity(void* self);
int64_t q_stringmatcher_index_in22(void* self, const char* str, int64_t from);
int64_t q_stringmatcher_index_in3(void* self, void* str, int64_t length, int64_t from);
void q_stringmatcher_delete(void* self);

#endif
