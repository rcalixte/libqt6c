#pragma once
#ifndef SRCQT6C_LIBQDATASTREAM_H
#define SRCQT6C_LIBQDATASTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"
#include "libqiodevicebase.h"

/// https://doc.qt.io/qt-6/qdatastream.html

/// q_datastream_new constructs a new QDataStream object.
///
///
QDataStream* q_datastream_new();

/// q_datastream_new2 constructs a new QDataStream object.
///
/// ``` QIODevice* param1 ```
QDataStream* q_datastream_new2(void* param1);

/// q_datastream_new3 constructs a new QDataStream object.
///
/// ``` const char* param1 ```
QDataStream* q_datastream_new3(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#device)
///
/// ``` QDataStream* self ```
QIODevice* q_datastream_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setDevice)
///
/// ``` QDataStream* self, QIODevice* device ```
void q_datastream_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#atEnd)
///
/// ``` QDataStream* self ```
bool q_datastream_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#status)
///
/// ``` QDataStream* self ```
int64_t q_datastream_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setStatus)
///
/// ``` QDataStream* self, enum QDataStream__Status status ```
void q_datastream_set_status(void* self, int64_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#resetStatus)
///
/// ``` QDataStream* self ```
void q_datastream_reset_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#floatingPointPrecision)
///
/// ``` QDataStream* self ```
int64_t q_datastream_floating_point_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setFloatingPointPrecision)
///
/// ``` QDataStream* self, enum QDataStream__FloatingPointPrecision precision ```
void q_datastream_set_floating_point_precision(void* self, int64_t precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#byteOrder)
///
/// ``` QDataStream* self ```
int64_t q_datastream_byte_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setByteOrder)
///
/// ``` QDataStream* self, enum QDataStream__ByteOrder byteOrder ```
void q_datastream_set_byte_order(void* self, int64_t byteOrder);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#version)
///
/// ``` QDataStream* self ```
int32_t q_datastream_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setVersion)
///
/// ``` QDataStream* self, int version ```
void q_datastream_set_version(void* self, int version);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, char* i ```
void q_datastream_operator_shift_right(void* self, char* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, char* i ```
void q_datastream_operator_shift_right_with_qint8(void* self, char* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, unsigned char* i ```
void q_datastream_operator_shift_right_with_quint8(void* self, unsigned char* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, short* i ```
void q_datastream_operator_shift_right_with_qint16(void* self, short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, unsigned short* i ```
void q_datastream_operator_shift_right_with_quint16(void* self, unsigned short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, int* i ```
void q_datastream_operator_shift_right_with_qint32(void* self, int* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, uint32_t* i ```
void q_datastream_operator_shift_right_with_quint32(void* self, uint32_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, long long* i ```
void q_datastream_operator_shift_right_with_qint64(void* self, long long* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, uint64_t* i ```
void q_datastream_operator_shift_right_with_quint64(void* self, uint64_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, bool* i ```
void q_datastream_operator_shift_right_with_bool(void* self, bool* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, float* f ```
void q_datastream_operator_shift_right_with_float(void* self, float* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, double* f ```
void q_datastream_operator_shift_right_with_double(void* self, double* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator>>)
///
/// ``` QDataStream* self, char* str ```
void q_datastream_operator_shift_right_with_str(void* self, char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, char i ```
void q_datastream_operator_shift_left(void* self, char i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, char i ```
void q_datastream_operator_shift_left_with_qint8(void* self, char i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, unsigned char i ```
void q_datastream_operator_shift_left_with_quint8(void* self, unsigned char i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, short i ```
void q_datastream_operator_shift_left_with_qint16(void* self, short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, unsigned short i ```
void q_datastream_operator_shift_left_with_quint16(void* self, unsigned short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, int i ```
void q_datastream_operator_shift_left_with_qint32(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, uint32_t i ```
void q_datastream_operator_shift_left_with_quint32(void* self, uint32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, long long i ```
void q_datastream_operator_shift_left_with_qint64(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, uint64_t i ```
void q_datastream_operator_shift_left_with_quint64(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, bool i ```
void q_datastream_operator_shift_left_with_bool(void* self, bool i);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, float f ```
void q_datastream_operator_shift_left_with_float(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, double f ```
void q_datastream_operator_shift_left_with_double(void* self, double f);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator<<)
///
/// ``` QDataStream* self, const char* str ```
void q_datastream_operator_shift_left_with_str(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
///
/// ``` QDataStream* self, char* param1, uint32_t* lenVal ```
QDataStream* q_datastream_read_bytes(void* self, char* param1, uint32_t* lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readRawData)
///
/// ``` QDataStream* self, char* param1, int lenVal ```
int32_t q_datastream_read_raw_data(void* self, char* param1, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#writeBytes)
///
/// ``` QDataStream* self, const char* param1, uint32_t lenVal ```
void q_datastream_write_bytes(void* self, const char* param1, uint32_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#writeRawData)
///
/// ``` QDataStream* self, const char* param1, int lenVal ```
int32_t q_datastream_write_raw_data(void* self, const char* param1, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#skipRawData)
///
/// ``` QDataStream* self, int lenVal ```
int32_t q_datastream_skip_raw_data(void* self, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#startTransaction)
///
/// ``` QDataStream* self ```
void q_datastream_start_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#commitTransaction)
///
/// ``` QDataStream* self ```
bool q_datastream_commit_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#rollbackTransaction)
///
/// ``` QDataStream* self ```
void q_datastream_rollback_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#abortTransaction)
///
/// ``` QDataStream* self ```
void q_datastream_abort_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#isDeviceTransactionStarted)
///
/// ``` QDataStream* self ```
bool q_datastream_is_device_transaction_started(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDataStream* self ```
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
    QDATASTREAM_VERSION_QT_DEFAULTCOMPILEDVERSION = 20
} QDataStream__Version;

typedef enum {
    QDATASTREAM_BYTEORDER_BIGENDIAN = 0,
    QDATASTREAM_BYTEORDER_LITTLEENDIAN = 1
} QDataStream__ByteOrder;

typedef enum {
    QDATASTREAM_STATUS_OK = 0,
    QDATASTREAM_STATUS_READPASTEND = 1,
    QDATASTREAM_STATUS_READCORRUPTDATA = 2,
    QDATASTREAM_STATUS_WRITEFAILED = 3
} QDataStream__Status;

typedef enum {
    QDATASTREAM_FLOATINGPOINTPRECISION_SINGLEPRECISION = 0,
    QDATASTREAM_FLOATINGPOINTPRECISION_DOUBLEPRECISION = 1
} QDataStream__FloatingPointPrecision;

#endif
