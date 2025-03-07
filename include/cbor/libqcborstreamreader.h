#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORSTREAMREADER_H
#define SRC_CBORQT6C_LIBQCBORSTREAMREADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcborcommon.h"
#include "../libqiodevice.h"

QCborStreamReader* q_cborstreamreader_new();
QCborStreamReader* q_cborstreamreader_new2(const char* data, int64_t lenVal);
QCborStreamReader* q_cborstreamreader_new3(unsigned char* data, int64_t lenVal);
QCborStreamReader* q_cborstreamreader_new4(const char* data);
QCborStreamReader* q_cborstreamreader_new5(void* device);
void q_cborstreamreader_set_device(void* self, void* device);
QIODevice* q_cborstreamreader_device(void* self);
void q_cborstreamreader_add_data(void* self, const char* data);
void q_cborstreamreader_add_data2(void* self, const char* data, int64_t lenVal);
void q_cborstreamreader_add_data3(void* self, unsigned char* data, int64_t lenVal);
void q_cborstreamreader_reparse(void* self);
void q_cborstreamreader_clear(void* self);
void q_cborstreamreader_reset(void* self);
QCborError* q_cborstreamreader_last_error(void* self);
long long q_cborstreamreader_current_offset(void* self);
bool q_cborstreamreader_is_valid(void* self);
int32_t q_cborstreamreader_container_depth(void* self);
int64_t q_cborstreamreader_parent_container_type(void* self);
bool q_cborstreamreader_has_next(void* self);
bool q_cborstreamreader_next(void* self);
int64_t q_cborstreamreader_type(void* self);
bool q_cborstreamreader_is_unsigned_integer(void* self);
bool q_cborstreamreader_is_negative_integer(void* self);
bool q_cborstreamreader_is_integer(void* self);
bool q_cborstreamreader_is_byte_array(void* self);
bool q_cborstreamreader_is_string(void* self);
bool q_cborstreamreader_is_array(void* self);
bool q_cborstreamreader_is_map(void* self);
bool q_cborstreamreader_is_tag(void* self);
bool q_cborstreamreader_is_simple_type(void* self);
bool q_cborstreamreader_is_float16(void* self);
bool q_cborstreamreader_is_float(void* self);
bool q_cborstreamreader_is_double(void* self);
bool q_cborstreamreader_is_invalid(void* self);
bool q_cborstreamreader_is_simple_type_with_st(void* self, int64_t st);
bool q_cborstreamreader_is_false(void* self);
bool q_cborstreamreader_is_true(void* self);
bool q_cborstreamreader_is_bool(void* self);
bool q_cborstreamreader_is_null(void* self);
bool q_cborstreamreader_is_undefined(void* self);
bool q_cborstreamreader_is_length_known(void* self);
uint64_t q_cborstreamreader_length(void* self);
bool q_cborstreamreader_is_container(void* self);
bool q_cborstreamreader_enter_container(void* self);
bool q_cborstreamreader_leave_container(void* self);
int64_t q_cborstreamreader_current_string_chunk_size(void* self);
bool q_cborstreamreader_to_bool(void* self);
int64_t q_cborstreamreader_to_tag(void* self);
uint64_t q_cborstreamreader_to_unsigned_integer(void* self);
int64_t q_cborstreamreader_to_negative_integer(void* self);
int64_t q_cborstreamreader_to_simple_type(void* self);
float q_cborstreamreader_to_float(void* self);
double q_cborstreamreader_to_double(void* self);
long long q_cborstreamreader_to_integer(void* self);
bool q_cborstreamreader_next1(void* self, int maxRecursion);
void q_cborstreamreader_delete(void* self);

/// https://doc.qt.io/qt-6/qcborstreamreader.html#types

typedef enum {
    QCBORSTREAMREADER_TYPE_UNSIGNEDINTEGER = 0,
    QCBORSTREAMREADER_TYPE_NEGATIVEINTEGER = 32,
    QCBORSTREAMREADER_TYPE_BYTESTRING = 64,
    QCBORSTREAMREADER_TYPE_BYTEARRAY = 64,
    QCBORSTREAMREADER_TYPE_TEXTSTRING = 96,
    QCBORSTREAMREADER_TYPE_STRING = 96,
    QCBORSTREAMREADER_TYPE_ARRAY = 128,
    QCBORSTREAMREADER_TYPE_MAP = 160,
    QCBORSTREAMREADER_TYPE_TAG = 192,
    QCBORSTREAMREADER_TYPE_SIMPLETYPE = 224,
    QCBORSTREAMREADER_TYPE_HALFFLOAT = 249,
    QCBORSTREAMREADER_TYPE_FLOAT16 = 249,
    QCBORSTREAMREADER_TYPE_FLOAT = 250,
    QCBORSTREAMREADER_TYPE_DOUBLE = 251,
    QCBORSTREAMREADER_TYPE_INVALID = 255
} QCborStreamReader__Type;

typedef enum {
    QCBORSTREAMREADER_STRINGRESULTCODE_ENDOFSTRING = 0,
    QCBORSTREAMREADER_STRINGRESULTCODE_OK = 1,
    QCBORSTREAMREADER_STRINGRESULTCODE_ERROR = -1
} QCborStreamReader__StringResultCode;

#endif
