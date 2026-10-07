#pragma once
#ifndef CBOR_LIBQCBORSTREAMREADER_H
#define CBOR_LIBQCBORSTREAMREADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)

/// q_cborstreamreader_new constructs a new QCborStreamReader object.
///
QCborStreamReader* q_cborstreamreader_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)

/// q_cborstreamreader_new2 constructs a new QCborStreamReader object.
///
/// @param data const char*
/// @param lenVal intptr_t
///
QCborStreamReader* q_cborstreamreader_new2(const char* data, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)

/// q_cborstreamreader_new3 constructs a new QCborStreamReader object.
///
/// @param data unsigned char*
/// @param lenVal intptr_t
///
QCborStreamReader* q_cborstreamreader_new3(unsigned char* data, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)

/// q_cborstreamreader_new4 constructs a new QCborStreamReader object.
///
/// @param data const char*
///
QCborStreamReader* q_cborstreamreader_new4(const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)

/// q_cborstreamreader_new5 constructs a new QCborStreamReader object.
///
/// @param device QIODevice*
///
QCborStreamReader* q_cborstreamreader_new5(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#setDevice)
///
/// @param self QCborStreamReader*
/// @param device QIODevice*
///
void q_cborstreamreader_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#device)
///
/// @param self const QCborStreamReader*
///
QIODevice* q_cborstreamreader_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// @param self QCborStreamReader*
/// @param data const char*
///
void q_cborstreamreader_add_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// @param self QCborStreamReader*
/// @param data const char*
/// @param lenVal intptr_t
///
void q_cborstreamreader_add_data2(void* self, const char* data, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// @param self QCborStreamReader*
/// @param data unsigned char*
/// @param lenVal intptr_t
///
void q_cborstreamreader_add_data3(void* self, unsigned char* data, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#reparse)
///
/// @param self QCborStreamReader*
///
void q_cborstreamreader_reparse(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#clear)
///
/// @param self QCborStreamReader*
///
void q_cborstreamreader_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#reset)
///
/// @param self QCborStreamReader*
///
void q_cborstreamreader_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#lastError)
///
/// @param self const QCborStreamReader*
///
QCborError* q_cborstreamreader_last_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#currentOffset)
///
/// @param self const QCborStreamReader*
///
int64_t q_cborstreamreader_current_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isValid)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#containerDepth)
///
/// @param self const QCborStreamReader*
///
int32_t q_cborstreamreader_container_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#parentContainerType)
///
/// @param self const QCborStreamReader*
///
/// @return enum QCborStreamReader__Type
///
uint8_t q_cborstreamreader_parent_container_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#hasNext)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_has_next(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// @param self QCborStreamReader*
///
bool q_cborstreamreader_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#type)
///
/// @param self const QCborStreamReader*
///
/// @return enum QCborStreamReader__Type
///
uint8_t q_cborstreamreader_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isUnsignedInteger)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_unsigned_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isNegativeInteger)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_negative_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isInteger)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isByteArray)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_byte_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isString)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isArray)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isMap)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_map(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isTag)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_tag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_simple_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat16)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_float16(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_float(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isDouble)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isInvalid)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_invalid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// @param self const QCborStreamReader*
/// @param st enum QCborStreamReader__QCborSimpleType
///
bool q_cborstreamreader_is_simple_type2(const void* self, uint8_t st);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFalse)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_false(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isTrue)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_true(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isBool)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isNull)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isUndefined)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_undefined(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isLengthKnown)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_length_known(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#length)
///
/// @param self const QCborStreamReader*
///
uint64_t q_cborstreamreader_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isContainer)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_is_container(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#enterContainer)
///
/// @param self QCborStreamReader*
///
bool q_cborstreamreader_enter_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#leaveContainer)
///
/// @param self QCborStreamReader*
///
bool q_cborstreamreader_leave_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToString)
///
/// @param self QCborStreamReader*
/// @param dst const char*
///
bool q_cborstreamreader_read_and_append_to_string(void* self, const char* dst);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToUtf8String)
///
/// @param self QCborStreamReader*
/// @param dst const char*
///
bool q_cborstreamreader_read_and_append_to_utf8_string(void* self, const char* dst);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToByteArray)
///
/// @param self QCborStreamReader*
/// @param dst const char*
///
bool q_cborstreamreader_read_and_append_to_byte_array(void* self, const char* dst);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#currentStringChunkSize)
///
/// @param self const QCborStreamReader*
///
intptr_t q_cborstreamreader_current_string_chunk_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toBool)
///
/// @param self const QCborStreamReader*
///
bool q_cborstreamreader_to_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toTag)
///
/// @param self const QCborStreamReader*
///
/// @return enum QCborStreamReader__QCborTag
///
uint64_t q_cborstreamreader_to_tag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toUnsignedInteger)
///
/// @param self const QCborStreamReader*
///
uint64_t q_cborstreamreader_to_unsigned_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toNegativeInteger)
///
/// @param self const QCborStreamReader*
///
/// @return enum QCborStreamReader__QCborNegativeInteger
///
uint64_t q_cborstreamreader_to_negative_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toSimpleType)
///
/// @param self const QCborStreamReader*
///
/// @return enum QCborStreamReader__QCborSimpleType
///
uint8_t q_cborstreamreader_to_simple_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toFloat)
///
/// @param self const QCborStreamReader*
///
float q_cborstreamreader_to_float(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toDouble)
///
/// @param self const QCborStreamReader*
///
double q_cborstreamreader_to_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toInteger)
///
/// @param self const QCborStreamReader*
///
int64_t q_cborstreamreader_to_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCborStreamReader*
///
const char* q_cborstreamreader_read_all_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllUtf8String)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCborStreamReader*
///
const char* q_cborstreamreader_read_all_utf8_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllByteArray)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCborStreamReader*
///
const char* q_cborstreamreader_read_all_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// @param self QCborStreamReader*
/// @param maxRecursion int
///
bool q_cborstreamreader_next1(void* self, int maxRecursion);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#dtor.QCborStreamReader)
///
/// Delete this object from C++ memory.
///
/// @param self QCborStreamReader*
///
void q_cborstreamreader_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#public-types)

typedef enum {
    QCBORSTREAMREADER_STRINGRESULTCODE_ENDOFSTRING = 0,
    QCBORSTREAMREADER_STRINGRESULTCODE_OK = 1,
    QCBORSTREAMREADER_STRINGRESULTCODE_ERROR = -1
} QCborStreamReader__StringResultCode;

#endif
