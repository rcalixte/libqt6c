#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqdatastream.hpp"
#include "libqdatastream.h"

QDataStream* q_datastream_new() {
    return QDataStream_new();
}

QDataStream* q_datastream_new2(void* param1) {
    return QDataStream_new2((QIODevice*)param1);
}

QDataStream* q_datastream_new3(const char* param1) {
    return QDataStream_new3(qstring(param1));
}

QIODevice* q_datastream_device(void* self) {
    return QDataStream_Device((QDataStream*)self);
}

void q_datastream_set_device(void* self, void* device) {
    QDataStream_SetDevice((QDataStream*)self, (QIODevice*)device);
}

bool q_datastream_at_end(void* self) {
    return QDataStream_AtEnd((QDataStream*)self);
}

int64_t q_datastream_status(void* self) {
    return QDataStream_Status((QDataStream*)self);
}

void q_datastream_set_status(void* self, int64_t status) {
    QDataStream_SetStatus((QDataStream*)self, status);
}

void q_datastream_reset_status(void* self) {
    QDataStream_ResetStatus((QDataStream*)self);
}

int64_t q_datastream_floating_point_precision(void* self) {
    return QDataStream_FloatingPointPrecision((QDataStream*)self);
}

void q_datastream_set_floating_point_precision(void* self, int64_t precision) {
    QDataStream_SetFloatingPointPrecision((QDataStream*)self, precision);
}

int64_t q_datastream_byte_order(void* self) {
    return QDataStream_ByteOrder((QDataStream*)self);
}

void q_datastream_set_byte_order(void* self, int64_t byteOrder) {
    QDataStream_SetByteOrder((QDataStream*)self, byteOrder);
}

int32_t q_datastream_version(void* self) {
    return QDataStream_Version((QDataStream*)self);
}

void q_datastream_set_version(void* self, int version) {
    QDataStream_SetVersion((QDataStream*)self, version);
}

void q_datastream_operator_shift_right(void* self, char* i) {
    QDataStream_OperatorShiftRight((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_qint8(void* self, char* i) {
    QDataStream_OperatorShiftRightWithQint8((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_quint8(void* self, unsigned char* i) {
    QDataStream_OperatorShiftRightWithQuint8((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_qint16(void* self, short* i) {
    QDataStream_OperatorShiftRightWithQint16((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_quint16(void* self, unsigned short* i) {
    QDataStream_OperatorShiftRightWithQuint16((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_qint32(void* self, int* i) {
    QDataStream_OperatorShiftRightWithQint32((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_quint32(void* self, uint32_t* i) {
    QDataStream_OperatorShiftRightWithQuint32((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_qint64(void* self, long long* i) {
    QDataStream_OperatorShiftRightWithQint64((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_quint64(void* self, uint64_t* i) {
    QDataStream_OperatorShiftRightWithQuint64((QDataStream*)self, i);
}

void q_datastream_operator_shift_right_with_bool(void* self, bool* i) {
    QDataStream_OperatorShiftRightWithBool((QDataStream*)self, (bool*)i);
}

void q_datastream_operator_shift_right_with_float(void* self, float* f) {
    QDataStream_OperatorShiftRightWithFloat((QDataStream*)self, f);
}

void q_datastream_operator_shift_right_with_double(void* self, double* f) {
    QDataStream_OperatorShiftRightWithDouble((QDataStream*)self, f);
}

void q_datastream_operator_shift_right_with_str(void* self, char* str) {
    QDataStream_OperatorShiftRightWithStr((QDataStream*)self, str);
}

void q_datastream_operator_shift_left(void* self, char i) {
    QDataStream_OperatorShiftLeft((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_qint8(void* self, char i) {
    QDataStream_OperatorShiftLeftWithQint8((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_quint8(void* self, unsigned char i) {
    QDataStream_OperatorShiftLeftWithQuint8((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_qint16(void* self, short i) {
    QDataStream_OperatorShiftLeftWithQint16((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_quint16(void* self, unsigned short i) {
    QDataStream_OperatorShiftLeftWithQuint16((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_qint32(void* self, int i) {
    QDataStream_OperatorShiftLeftWithQint32((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_quint32(void* self, uint32_t i) {
    QDataStream_OperatorShiftLeftWithQuint32((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_qint64(void* self, long long i) {
    QDataStream_OperatorShiftLeftWithQint64((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_quint64(void* self, uint64_t i) {
    QDataStream_OperatorShiftLeftWithQuint64((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_bool(void* self, bool i) {
    QDataStream_OperatorShiftLeftWithBool((QDataStream*)self, i);
}

void q_datastream_operator_shift_left_with_float(void* self, float f) {
    QDataStream_OperatorShiftLeftWithFloat((QDataStream*)self, f);
}

void q_datastream_operator_shift_left_with_double(void* self, double f) {
    QDataStream_OperatorShiftLeftWithDouble((QDataStream*)self, f);
}

void q_datastream_operator_shift_left_with_str(void* self, const char* str) {
    QDataStream_OperatorShiftLeftWithStr((QDataStream*)self, str);
}

QDataStream* q_datastream_read_bytes(void* self, char* param1, uint32_t* lenVal) {
    return QDataStream_ReadBytes((QDataStream*)self, param1, lenVal);
}

int32_t q_datastream_read_raw_data(void* self, char* param1, int lenVal) {
    return QDataStream_ReadRawData((QDataStream*)self, param1, lenVal);
}

void q_datastream_write_bytes(void* self, const char* param1, uint32_t lenVal) {
    QDataStream_WriteBytes((QDataStream*)self, param1, lenVal);
}

int32_t q_datastream_write_raw_data(void* self, const char* param1, int lenVal) {
    return QDataStream_WriteRawData((QDataStream*)self, param1, lenVal);
}

int32_t q_datastream_skip_raw_data(void* self, int lenVal) {
    return QDataStream_SkipRawData((QDataStream*)self, lenVal);
}

void q_datastream_start_transaction(void* self) {
    QDataStream_StartTransaction((QDataStream*)self);
}

bool q_datastream_commit_transaction(void* self) {
    return QDataStream_CommitTransaction((QDataStream*)self);
}

void q_datastream_rollback_transaction(void* self) {
    QDataStream_RollbackTransaction((QDataStream*)self);
}

void q_datastream_abort_transaction(void* self) {
    QDataStream_AbortTransaction((QDataStream*)self);
}

bool q_datastream_is_device_transaction_started(void* self) {
    return QDataStream_IsDeviceTransactionStarted((QDataStream*)self);
}

void q_datastream_delete(void* self) {
    QDataStream_Delete((QDataStream*)(self));
}
