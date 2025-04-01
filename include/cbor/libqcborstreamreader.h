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

/// https://doc.qt.io/qt-6/qcborstreamreader.html

/// q_cborstreamreader_new constructs a new QCborStreamReader object.
///
///
QCborStreamReader* q_cborstreamreader_new();

/// q_cborstreamreader_new2 constructs a new QCborStreamReader object.
///
/// ``` const char* data, int64_t lenVal ```
QCborStreamReader* q_cborstreamreader_new2(const char* data, int64_t lenVal);

/// q_cborstreamreader_new3 constructs a new QCborStreamReader object.
///
/// ``` unsigned char* data, int64_t lenVal ```
QCborStreamReader* q_cborstreamreader_new3(unsigned char* data, int64_t lenVal);

/// q_cborstreamreader_new4 constructs a new QCborStreamReader object.
///
/// ``` const char* data ```
QCborStreamReader* q_cborstreamreader_new4(const char* data);

/// q_cborstreamreader_new5 constructs a new QCborStreamReader object.
///
/// ``` QIODevice* device ```
QCborStreamReader* q_cborstreamreader_new5(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#setDevice)
///
/// ``` QCborStreamReader* self, QIODevice* device ```
void q_cborstreamreader_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#device)
///
/// ``` QCborStreamReader* self ```
QIODevice* q_cborstreamreader_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// ``` QCborStreamReader* self, const char* data ```
void q_cborstreamreader_add_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// ``` QCborStreamReader* self, const char* data, int64_t lenVal ```
void q_cborstreamreader_add_data2(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// ``` QCborStreamReader* self, unsigned char* data, int64_t lenVal ```
void q_cborstreamreader_add_data3(void* self, unsigned char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#reparse)
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_reparse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#clear)
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#reset)
///
/// ``` QCborStreamReader* self ```
void q_cborstreamreader_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#lastError)
///
/// ``` QCborStreamReader* self ```
QCborError* q_cborstreamreader_last_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#currentOffset)
///
/// ``` QCborStreamReader* self ```
long long q_cborstreamreader_current_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isValid)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#containerDepth)
///
/// ``` QCborStreamReader* self ```
int32_t q_cborstreamreader_container_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#parentContainerType)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_parent_container_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#hasNext)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_has_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#type)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isUnsignedInteger)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_unsigned_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isNegativeInteger)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_negative_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isInteger)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isByteArray)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isString)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isArray)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isMap)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isTag)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat16)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_float16(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isDouble)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isInvalid)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_invalid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// ``` QCborStreamReader* self, enum QCborStreamReader__QCborSimpleType st ```
bool q_cborstreamreader_is_simple_type_with_st(void* self, int64_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFalse)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_false(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isTrue)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_true(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isBool)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isNull)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isUndefined)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isLengthKnown)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_length_known(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#length)
///
/// ``` QCborStreamReader* self ```
uint64_t q_cborstreamreader_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isContainer)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_is_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#enterContainer)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_enter_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#leaveContainer)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_leave_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#currentStringChunkSize)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_current_string_chunk_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toBool)
///
/// ``` QCborStreamReader* self ```
bool q_cborstreamreader_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toTag)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_to_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toUnsignedInteger)
///
/// ``` QCborStreamReader* self ```
uint64_t q_cborstreamreader_to_unsigned_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toNegativeInteger)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_to_negative_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toSimpleType)
///
/// ``` QCborStreamReader* self ```
int64_t q_cborstreamreader_to_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toFloat)
///
/// ``` QCborStreamReader* self ```
float q_cborstreamreader_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toDouble)
///
/// ``` QCborStreamReader* self ```
double q_cborstreamreader_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toInteger)
///
/// ``` QCborStreamReader* self ```
long long q_cborstreamreader_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// ``` QCborStreamReader* self, int maxRecursion ```
bool q_cborstreamreader_next1(void* self, int maxRecursion);

/// Delete this object from C++ memory.
///
/// ``` QCborStreamReader* self ```
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
