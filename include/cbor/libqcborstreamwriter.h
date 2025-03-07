#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORSTREAMWRITER_H
#define SRC_CBORQT6C_LIBQCBORSTREAMWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"

QCborStreamWriter* q_cborstreamwriter_new(void* device);
void q_cborstreamwriter_set_device(void* self, void* device);
QIODevice* q_cborstreamwriter_device(void* self);
void q_cborstreamwriter_append(void* self, uint64_t u);
void q_cborstreamwriter_append_with_qint64(void* self, long long i);
void q_cborstreamwriter_append_with_q_cbor_negative_integer(void* self, int64_t n);
void q_cborstreamwriter_append_with_ba(void* self, const char* ba);
void q_cborstreamwriter_append_with_tag(void* self, int64_t tag);
void q_cborstreamwriter_append3(void* self, int64_t tag);
void q_cborstreamwriter_append_with_st(void* self, int64_t st);
void q_cborstreamwriter_append_with_float(void* self, float f);
void q_cborstreamwriter_append_with_double(void* self, double d);
void q_cborstreamwriter_append_byte_string(void* self, const char* data, int64_t lenVal);
void q_cborstreamwriter_append_text_string(void* self, const char* utf8, int64_t lenVal);
void q_cborstreamwriter_append_with_bool(void* self, bool b);
void q_cborstreamwriter_append_null(void* self);
void q_cborstreamwriter_append_undefined(void* self);
void q_cborstreamwriter_append_with_int(void* self, int i);
void q_cborstreamwriter_append_with_uint(void* self, uint32_t u);
void q_cborstreamwriter_append4(void* self, const char* str);
void q_cborstreamwriter_start_array(void* self);
void q_cborstreamwriter_start_array_with_count(void* self, uint64_t count);
bool q_cborstreamwriter_end_array(void* self);
void q_cborstreamwriter_start_map(void* self);
void q_cborstreamwriter_start_map_with_count(void* self, uint64_t count);
bool q_cborstreamwriter_end_map(void* self);
void q_cborstreamwriter_append22(void* self, const char* str, int64_t size);
void q_cborstreamwriter_delete(void* self);

#endif
