#pragma once
#ifndef SRCQT6C_LIBQPAGERANGES_H
#define SRCQT6C_LIBQPAGERANGES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

QPageRanges* q_pageranges_new();
QPageRanges* q_pageranges_new2(void* other);
void q_pageranges_operator_assign(void* self, void* other);
void q_pageranges_swap(void* self, void* other);
void q_pageranges_add_page(void* self, int pageNumber);
void q_pageranges_add_range(void* self, int from, int to);
libqt_list /* of QPageRanges__Range* */ q_pageranges_to_range_list(void* self);
void q_pageranges_clear(void* self);
const char* q_pageranges_to_string(void* self);
QPageRanges* q_pageranges_from_string(const char* ranges);
bool q_pageranges_contains(void* self, int pageNumber);
bool q_pageranges_is_empty(void* self);
int32_t q_pageranges_first_page(void* self);
int32_t q_pageranges_last_page(void* self);
void q_pageranges_detach(void* self);
void q_pageranges_delete(void* self);

QPageRanges__Range* q_pageranges__range_new(void* other);
QPageRanges__Range* q_pageranges__range_new2(void* other);
QPageRanges__Range* q_pageranges__range_new3();
QPageRanges__Range* q_pageranges__range_new4(void* param1);
void q_pageranges__range_copy_assign(void* self, void* other);
void q_pageranges__range_move_assign(void* self, void* other);
bool q_pageranges__range_contains(void* self, int pageNumber);
void q_pageranges__range_delete(void* self);

#endif
