#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORSTREAMREADER_H
#define SRC_CBORQT6C_LIBQCBORSTREAMREADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcborstreamreader.html

/// q_cborstreamreader_new constructs a new QCborStreamReader object.
///
QCborStreamReader* q_cborstreamreader_new();

/// q_cborstreamreader_new2 constructs a new QCborStreamReader object.
///
/// @param data const char*
/// @param lenVal int64_t
QCborStreamReader* q_cborstreamreader_new2(const char* data, int64_t lenVal);

/// q_cborstreamreader_new3 constructs a new QCborStreamReader object.
///
/// @param data unsigned char*
/// @param lenVal int64_t
QCborStreamReader* q_cborstreamreader_new3(unsigned char* data, int64_t lenVal);

/// q_cborstreamreader_new4 constructs a new QCborStreamReader object.
///
/// @param data const char*
QCborStreamReader* q_cborstreamreader_new4(const char* data);

/// q_cborstreamreader_new5 constructs a new QCborStreamReader object.
///
/// @param device QIODevice*
QCborStreamReader* q_cborstreamreader_new5(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#setDevice)
///
/// @param self QCborStreamReader*
/// @param device QIODevice*
void q_cborstreamreader_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#device)
///
/// @param self QCborStreamReader*
QIODevice* q_cborstreamreader_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// @param self QCborStreamReader*
/// @param data const char*
void q_cborstreamreader_add_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// @param self QCborStreamReader*
/// @param data const char*
/// @param lenVal int64_t
void q_cborstreamreader_add_data2(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
///
/// @param self QCborStreamReader*
/// @param data unsigned char*
/// @param lenVal int64_t
void q_cborstreamreader_add_data3(void* self, unsigned char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#reparse)
///
/// @param self QCborStreamReader*
void q_cborstreamreader_reparse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#clear)
///
/// @param self QCborStreamReader*
void q_cborstreamreader_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#reset)
///
/// @param self QCborStreamReader*
void q_cborstreamreader_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#lastError)
///
/// @param self QCborStreamReader*
QCborError* q_cborstreamreader_last_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#currentOffset)
///
/// @param self QCborStreamReader*
long long q_cborstreamreader_current_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isValid)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#containerDepth)
///
/// @param self QCborStreamReader*
int32_t q_cborstreamreader_container_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#parentContainerType)
///
/// @param self QCborStreamReader*
///
/// @return enum QCborStreamReader__Type
int64_t q_cborstreamreader_parent_container_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#hasNext)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_has_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#type)
///
/// @param self QCborStreamReader*
///
/// @return enum QCborStreamReader__Type
int64_t q_cborstreamreader_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isUnsignedInteger)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_unsigned_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isNegativeInteger)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_negative_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isInteger)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isByteArray)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isString)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isArray)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isMap)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isTag)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat16)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_float16(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isDouble)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isInvalid)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_invalid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
///
/// @param self QCborStreamReader*
/// @param st enum QCborStreamReader__QCborSimpleType
bool q_cborstreamreader_is_simple_type2(void* self, int64_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isFalse)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_false(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isTrue)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_true(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isBool)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isNull)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isUndefined)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isLengthKnown)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_length_known(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#length)
///
/// @param self QCborStreamReader*
uint64_t q_cborstreamreader_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#isContainer)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_is_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#enterContainer)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_enter_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#leaveContainer)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_leave_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToString)
///
/// @param self QCborStreamReader*
/// @param dst const char*
bool q_cborstreamreader_read_and_append_to_string(void* self, const char* dst);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToUtf8String)
///
/// @param self QCborStreamReader*
/// @param dst char*
bool q_cborstreamreader_read_and_append_to_utf8_string(void* self, char* dst);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToByteArray)
///
/// @param self QCborStreamReader*
/// @param dst char*
bool q_cborstreamreader_read_and_append_to_byte_array(void* self, char* dst);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#currentStringChunkSize)
///
/// @param self QCborStreamReader*
int64_t q_cborstreamreader_current_string_chunk_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toBool)
///
/// @param self QCborStreamReader*
bool q_cborstreamreader_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toTag)
///
/// @param self QCborStreamReader*
///
/// @return enum QCborStreamReader__QCborTag
int64_t q_cborstreamreader_to_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toUnsignedInteger)
///
/// @param self QCborStreamReader*
uint64_t q_cborstreamreader_to_unsigned_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toNegativeInteger)
///
/// @param self QCborStreamReader*
///
/// @return enum QCborStreamReader__QCborNegativeInteger
int64_t q_cborstreamreader_to_negative_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toSimpleType)
///
/// @param self QCborStreamReader*
///
/// @return enum QCborStreamReader__QCborSimpleType
int64_t q_cborstreamreader_to_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toFloat)
///
/// @param self QCborStreamReader*
float q_cborstreamreader_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toDouble)
///
/// @param self QCborStreamReader*
double q_cborstreamreader_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#toInteger)
///
/// @param self QCborStreamReader*
long long q_cborstreamreader_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborStreamReader*
const char* q_cborstreamreader_read_all_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllUtf8String)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborStreamReader*
char* q_cborstreamreader_read_all_utf8_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborStreamReader*
char* q_cborstreamreader_read_all_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
///
/// @param self QCborStreamReader*
/// @param maxRecursion int
bool q_cborstreamreader_next1(void* self, int maxRecursion);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamreader.html#dtor.QCborStreamReader)
///
/// Delete this object from C++ memory.
///
/// @param self QCborStreamReader*
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
