#pragma once
#ifndef SRCQT6C_LIBQDATASTREAM_H
#define SRCQT6C_LIBQDATASTREAM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdatastream.html

/// q_datastream_new constructs a new QDataStream object.
///
QDataStream* q_datastream_new();

/// q_datastream_new2 constructs a new QDataStream object.
///
/// @param param1 QIODevice*
QDataStream* q_datastream_new2(void* param1);

/// q_datastream_new3 constructs a new QDataStream object.
///
/// @param param1 const char*
QDataStream* q_datastream_new3(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#device)
///
/// @param self QDataStream*
QIODevice* q_datastream_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setDevice)
///
/// @param self QDataStream*
/// @param device QIODevice*
void q_datastream_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#atEnd)
///
/// @param self QDataStream*
bool q_datastream_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#status)
///
/// @param self QDataStream*
///
/// @return enum QDataStream__Status
int32_t q_datastream_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setStatus)
///
/// @param self QDataStream*
/// @param status enum QDataStream__Status
void q_datastream_set_status(void* self, int32_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#resetStatus)
///
/// @param self QDataStream*
void q_datastream_reset_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#floatingPointPrecision)
///
/// @param self QDataStream*
///
/// @return enum QDataStream__FloatingPointPrecision
int32_t q_datastream_floating_point_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setFloatingPointPrecision)
///
/// @param self QDataStream*
/// @param precision enum QDataStream__FloatingPointPrecision
void q_datastream_set_floating_point_precision(void* self, int32_t precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#byteOrder)
///
/// @param self QDataStream*
///
/// @return enum QDataStream__ByteOrder
int32_t q_datastream_byte_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setByteOrder)
///
/// @param self QDataStream*
/// @param byteOrder enum QDataStream__ByteOrder
void q_datastream_set_byte_order(void* self, int32_t byteOrder);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#version)
///
/// @param self QDataStream*
int32_t q_datastream_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setVersion)
///
/// @param self QDataStream*
/// @param version int
void q_datastream_set_version(void* self, int version);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i char*
void q_datastream_operator_shift_right(void* self, char* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i signed char*
void q_datastream_operator_shift_right2(void* self, signed char* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i unsigned char*
void q_datastream_operator_shift_right3(void* self, unsigned char* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i short*
void q_datastream_operator_shift_right4(void* self, short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i unsigned short*
void q_datastream_operator_shift_right5(void* self, unsigned short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i int*
void q_datastream_operator_shift_right6(void* self, int* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i uint32_t*
void q_datastream_operator_shift_right7(void* self, uint32_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i long long*
void q_datastream_operator_shift_right8(void* self, long long* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i uint64_t*
void q_datastream_operator_shift_right9(void* self, uint64_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param i bool*
void q_datastream_operator_shift_right11(void* self, bool* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param f float*
void q_datastream_operator_shift_right12(void* self, float* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param f double*
void q_datastream_operator_shift_right13(void* self, double* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
///
/// @param self QDataStream*
/// @param str char*
void q_datastream_operator_shift_right14(void* self, char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i char
void q_datastream_operator_shift_left(void* self, char i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i signed char
void q_datastream_operator_shift_left2(void* self, signed char i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i unsigned char
void q_datastream_operator_shift_left3(void* self, unsigned char i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i short
void q_datastream_operator_shift_left4(void* self, short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i unsigned short
void q_datastream_operator_shift_left5(void* self, unsigned short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i int
void q_datastream_operator_shift_left6(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i uint32_t
void q_datastream_operator_shift_left7(void* self, uint32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i long long
void q_datastream_operator_shift_left8(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param i uint64_t
void q_datastream_operator_shift_left9(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param f float
void q_datastream_operator_shift_left11(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param f double
void q_datastream_operator_shift_left12(void* self, double f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
///
/// @param self QDataStream*
/// @param str const char*
void q_datastream_operator_shift_left13(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
///
/// @param self QDataStream*
/// @param param1 char*
/// @param lenVal uint32_t*
QDataStream* q_datastream_read_bytes(void* self, char* param1, uint32_t* lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
///
/// @param self QDataStream*
/// @param param1 char*
/// @param lenVal long long*
QDataStream* q_datastream_read_bytes2(void* self, char* param1, long long* lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readRawData)
///
/// @param self QDataStream*
/// @param param1 char*
/// @param lenVal long long
long long q_datastream_read_raw_data(void* self, char* param1, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#writeBytes)
///
/// @param self QDataStream*
/// @param param1 const char*
/// @param lenVal long long
void q_datastream_write_bytes(void* self, const char* param1, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#writeRawData)
///
/// @param self QDataStream*
/// @param param1 const char*
/// @param lenVal long long
long long q_datastream_write_raw_data(void* self, const char* param1, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#skipRawData)
///
/// @param self QDataStream*
/// @param lenVal long long
long long q_datastream_skip_raw_data(void* self, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#startTransaction)
///
/// @param self QDataStream*
void q_datastream_start_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#commitTransaction)
///
/// @param self QDataStream*
bool q_datastream_commit_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#rollbackTransaction)
///
/// @param self QDataStream*
void q_datastream_rollback_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#abortTransaction)
///
/// @param self QDataStream*
void q_datastream_abort_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#isDeviceTransactionStarted)
///
/// @param self QDataStream*
bool q_datastream_is_device_transaction_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#dtor.QDataStream)
///
/// Delete this object from C++ memory.
///
/// @param self QDataStream*
void q_datastream_delete(void* self);

/// https://doc.qt.io/qt-6/qdatastream.html#types

typedef enum {
    QDATASTREAM_VERSION_QT_1_0 = 1,
    QDATASTREAM_VERSION_QT_2_0 = 2,
    QDATASTREAM_VERSION_QT_2_1 = 3,
    QDATASTREAM_VERSION_QT_3_0 = 4,
    QDATASTREAM_VERSION_QT_3_1 = 5,
    QDATASTREAM_VERSION_QT_3_3 = 6,
    QDATASTREAM_VERSION_QT_4_0 = 7,
    QDATASTREAM_VERSION_QT_4_1 = 7,
    QDATASTREAM_VERSION_QT_4_2 = 8,
    QDATASTREAM_VERSION_QT_4_3 = 9,
    QDATASTREAM_VERSION_QT_4_4 = 10,
    QDATASTREAM_VERSION_QT_4_5 = 11,
    QDATASTREAM_VERSION_QT_4_6 = 12,
    QDATASTREAM_VERSION_QT_4_7 = 12,
    QDATASTREAM_VERSION_QT_4_8 = 12,
    QDATASTREAM_VERSION_QT_4_9 = 12,
    QDATASTREAM_VERSION_QT_5_0 = 13,
    QDATASTREAM_VERSION_QT_5_1 = 14,
    QDATASTREAM_VERSION_QT_5_2 = 15,
    QDATASTREAM_VERSION_QT_5_3 = 15,
    QDATASTREAM_VERSION_QT_5_4 = 16,
    QDATASTREAM_VERSION_QT_5_5 = 16,
    QDATASTREAM_VERSION_QT_5_6 = 17,
    QDATASTREAM_VERSION_QT_5_7 = 17,
    QDATASTREAM_VERSION_QT_5_8 = 17,
    QDATASTREAM_VERSION_QT_5_9 = 17,
    QDATASTREAM_VERSION_QT_5_10 = 17,
    QDATASTREAM_VERSION_QT_5_11 = 17,
    QDATASTREAM_VERSION_QT_5_12 = 18,
    QDATASTREAM_VERSION_QT_5_13 = 19,
    QDATASTREAM_VERSION_QT_5_14 = 19,
    QDATASTREAM_VERSION_QT_5_15 = 19,
    QDATASTREAM_VERSION_QT_6_0 = 20,
    QDATASTREAM_VERSION_QT_6_1 = 20,
    QDATASTREAM_VERSION_QT_6_2 = 20,
    QDATASTREAM_VERSION_QT_6_3 = 20,
    QDATASTREAM_VERSION_QT_6_4 = 20,
    QDATASTREAM_VERSION_QT_6_5 = 20,
    QDATASTREAM_VERSION_QT_6_6 = 21,
    QDATASTREAM_VERSION_QT_6_7 = 22,
    QDATASTREAM_VERSION_QT_6_8 = 22,
    QDATASTREAM_VERSION_QT_DEFAULTCOMPILEDVERSION = 22
} QDataStream__Version;

typedef enum {
    QDATASTREAM_BYTEORDER_BIGENDIAN = 0,
    QDATASTREAM_BYTEORDER_LITTLEENDIAN = 1
} QDataStream__ByteOrder;

typedef enum {
    QDATASTREAM_STATUS_OK = 0,
    QDATASTREAM_STATUS_READPASTEND = 1,
    QDATASTREAM_STATUS_READCORRUPTDATA = 2,
    QDATASTREAM_STATUS_WRITEFAILED = 3,
    QDATASTREAM_STATUS_SIZELIMITEXCEEDED = 4
} QDataStream__Status;

typedef enum {
    QDATASTREAM_FLOATINGPOINTPRECISION_SINGLEPRECISION = 0,
    QDATASTREAM_FLOATINGPOINTPRECISION_DOUBLEPRECISION = 1
} QDataStream__FloatingPointPrecision;

#endif
