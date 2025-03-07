#pragma once
#ifndef SRCQT6C_LIBQANYSTRINGVIEW_H
#define SRCQT6C_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include <string.h>

QAnyStringView* q_anystringview_new(const char* other);
QAnyStringView* q_anystringview_new2(const char* other);
QAnyStringView* q_anystringview_new3();
QAnyStringView* q_anystringview_new4(const char* str);
QAnyStringView* q_anystringview_new5(const char* str);
QAnyStringView* q_anystringview_new6(void* c);
QAnyStringView* q_anystringview_new7(const char* param1);
void q_anystringview_copy_assign(void* self, void* other);
void q_anystringview_move_assign(void* self, void* other);
const char* q_anystringview_to_string(void* self);
int64_t q_anystringview_size(void* self);
void* q_anystringview_data(void* self);
int32_t q_anystringview_compare(const char* lhs, const char* rhs);
bool q_anystringview_equal(const char* lhs, const char* rhs);
QChar* q_anystringview_front(void* self);
QChar* q_anystringview_back(void* self);
bool q_anystringview_empty(void* self);
int64_t q_anystringview_size_bytes(void* self);
bool q_anystringview_is_null(void* self);
bool q_anystringview_is_empty(void* self);
int64_t q_anystringview_length(void* self);
int32_t q_anystringview_compare3(const char* lhs, const char* rhs, int64_t cs);
void q_anystringview_delete(void* self);

#endif
