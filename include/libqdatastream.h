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

QDataStream* q_datastream_new();
QDataStream* q_datastream_new2(void* param1);
QDataStream* q_datastream_new3(const char* param1);
QIODevice* q_datastream_device(void* self);
void q_datastream_set_device(void* self, void* device);
bool q_datastream_at_end(void* self);
int64_t q_datastream_status(void* self);
void q_datastream_set_status(void* self, int64_t status);
void q_datastream_reset_status(void* self);
int64_t q_datastream_floating_point_precision(void* self);
void q_datastream_set_floating_point_precision(void* self, int64_t precision);
int64_t q_datastream_byte_order(void* self);
void q_datastream_set_byte_order(void* self, int64_t byteOrder);
int32_t q_datastream_version(void* self);
void q_datastream_set_version(void* self, int version);
void q_datastream_operator_shift_right(void* self, char* i);
void q_datastream_operator_shift_right_with_qint8(void* self, char* i);
void q_datastream_operator_shift_right_with_quint8(void* self, unsigned char* i);
void q_datastream_operator_shift_right_with_qint16(void* self, short* i);
void q_datastream_operator_shift_right_with_quint16(void* self, unsigned short* i);
void q_datastream_operator_shift_right_with_qint32(void* self, int* i);
void q_datastream_operator_shift_right_with_quint32(void* self, uint32_t* i);
void q_datastream_operator_shift_right_with_qint64(void* self, long long* i);
void q_datastream_operator_shift_right_with_quint64(void* self, uint64_t* i);
void q_datastream_operator_shift_right_with_bool(void* self, bool* i);
void q_datastream_operator_shift_right_with_float(void* self, float* f);
void q_datastream_operator_shift_right_with_double(void* self, double* f);
void q_datastream_operator_shift_right_with_str(void* self, char* str);
void q_datastream_operator_shift_left(void* self, char i);
void q_datastream_operator_shift_left_with_qint8(void* self, char i);
void q_datastream_operator_shift_left_with_quint8(void* self, unsigned char i);
void q_datastream_operator_shift_left_with_qint16(void* self, short i);
void q_datastream_operator_shift_left_with_quint16(void* self, unsigned short i);
void q_datastream_operator_shift_left_with_qint32(void* self, int i);
void q_datastream_operator_shift_left_with_quint32(void* self, uint32_t i);
void q_datastream_operator_shift_left_with_qint64(void* self, long long i);
void q_datastream_operator_shift_left_with_quint64(void* self, uint64_t i);
void q_datastream_operator_shift_left_with_bool(void* self, bool i);
void q_datastream_operator_shift_left_with_float(void* self, float f);
void q_datastream_operator_shift_left_with_double(void* self, double f);
void q_datastream_operator_shift_left_with_str(void* self, const char* str);
QDataStream* q_datastream_read_bytes(void* self, char* param1, uint32_t* lenVal);
int32_t q_datastream_read_raw_data(void* self, char* param1, int lenVal);
void q_datastream_write_bytes(void* self, const char* param1, uint32_t lenVal);
int32_t q_datastream_write_raw_data(void* self, const char* param1, int lenVal);
int32_t q_datastream_skip_raw_data(void* self, int lenVal);
void q_datastream_start_transaction(void* self);
bool q_datastream_commit_transaction(void* self);
void q_datastream_rollback_transaction(void* self);
void q_datastream_abort_transaction(void* self);
bool q_datastream_is_device_transaction_started(void* self);
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
