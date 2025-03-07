#pragma once
#ifndef SRCQT6C_LIBQVERSIONNUMBER_H
#define SRCQT6C_LIBQVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include <string.h>

QVersionNumber* q_versionnumber_new();
QVersionNumber* q_versionnumber_new2(int* seg[]);
QVersionNumber* q_versionnumber_new3(int maj);
QVersionNumber* q_versionnumber_new4(int maj, int min);
QVersionNumber* q_versionnumber_new5(int maj, int min, int mic);
QVersionNumber* q_versionnumber_new6(void* param1);
bool q_versionnumber_is_null(void* self);
bool q_versionnumber_is_normalized(void* self);
int32_t q_versionnumber_major_version(void* self);
int32_t q_versionnumber_minor_version(void* self);
int32_t q_versionnumber_micro_version(void* self);
QVersionNumber* q_versionnumber_normalized(void* self);
libqt_list /* of int */ q_versionnumber_segments(void* self);
int32_t q_versionnumber_segment_at(void* self, int64_t index);
int64_t q_versionnumber_segment_count(void* self);
bool q_versionnumber_is_prefix_of(void* self, void* other);
int32_t q_versionnumber_compare(void* v1, void* v2);
QVersionNumber* q_versionnumber_common_prefix(void* v1, void* v2);
const char* q_versionnumber_to_string(void* self);
QVersionNumber* q_versionnumber_from_string(const char* stringVal);
QVersionNumber* q_versionnumber_from_string2(const char* stringVal, int64_t* suffixIndex);
void q_versionnumber_delete(void* self);

QTypeRevision* q_typerevision_new(void* other);
QTypeRevision* q_typerevision_new2(void* other);
QTypeRevision* q_typerevision_new3();
QTypeRevision* q_typerevision_new4(void* param1);
void q_typerevision_copy_assign(void* self, void* other);
void q_typerevision_move_assign(void* self, void* other);
QTypeRevision* q_typerevision_zero();
bool q_typerevision_has_major_version(void* self);
unsigned char q_typerevision_major_version(void* self);
bool q_typerevision_has_minor_version(void* self);
unsigned char q_typerevision_minor_version(void* self);
bool q_typerevision_is_valid(void* self);
void q_typerevision_delete(void* self);

#endif
