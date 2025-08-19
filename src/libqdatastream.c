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

int32_t q_datastream_status(void* self) {
    return QDataStream_Status((QDataStream*)self);
}

void q_datastream_set_status(void* self, int32_t status) {
    QDataStream_SetStatus((QDataStream*)self, status);
}

void q_datastream_reset_status(void* self) {
    QDataStream_ResetStatus((QDataStream*)self);
}

int32_t q_datastream_floating_point_precision(void* self) {
    return QDataStream_FloatingPointPrecision((QDataStream*)self);
}

void q_datastream_set_floating_point_precision(void* self, int32_t precision) {
    QDataStream_SetFloatingPointPrecision((QDataStream*)self, precision);
}

int32_t q_datastream_byte_order(void* self) {
    return QDataStream_ByteOrder((QDataStream*)self);
}

void q_datastream_set_byte_order(void* self, int32_t byteOrder) {
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

void q_datastream_operator_shift_right2(void* self, char* i) {
    QDataStream_OperatorShiftRight2((QDataStream*)self, i);
}

void q_datastream_operator_shift_right3(void* self, unsigned char* i) {
    QDataStream_OperatorShiftRight3((QDataStream*)self, i);
}

void q_datastream_operator_shift_right4(void* self, short* i) {
    QDataStream_OperatorShiftRight4((QDataStream*)self, i);
}

void q_datastream_operator_shift_right5(void* self, unsigned short* i) {
    QDataStream_OperatorShiftRight5((QDataStream*)self, i);
}

void q_datastream_operator_shift_right6(void* self, int* i) {
    QDataStream_OperatorShiftRight6((QDataStream*)self, i);
}

void q_datastream_operator_shift_right7(void* self, uint32_t* i) {
    QDataStream_OperatorShiftRight7((QDataStream*)self, i);
}

void q_datastream_operator_shift_right8(void* self, long long* i) {
    QDataStream_OperatorShiftRight8((QDataStream*)self, i);
}

void q_datastream_operator_shift_right9(void* self, uint64_t* i) {
    QDataStream_OperatorShiftRight9((QDataStream*)self, i);
}

void q_datastream_operator_shift_right11(void* self, bool* i) {
    QDataStream_OperatorShiftRight11((QDataStream*)self, (bool*)i);
}

void q_datastream_operator_shift_right12(void* self, float* f) {
    QDataStream_OperatorShiftRight12((QDataStream*)self, f);
}

void q_datastream_operator_shift_right13(void* self, double* f) {
    QDataStream_OperatorShiftRight13((QDataStream*)self, f);
}

void q_datastream_operator_shift_right14(void* self, char* str) {
    QDataStream_OperatorShiftRight14((QDataStream*)self, str);
}

void q_datastream_operator_shift_left(void* self, char i) {
    QDataStream_OperatorShiftLeft((QDataStream*)self, i);
}

void q_datastream_operator_shift_left2(void* self, char i) {
    QDataStream_OperatorShiftLeft2((QDataStream*)self, i);
}

void q_datastream_operator_shift_left3(void* self, unsigned char i) {
    QDataStream_OperatorShiftLeft3((QDataStream*)self, i);
}

void q_datastream_operator_shift_left4(void* self, short i) {
    QDataStream_OperatorShiftLeft4((QDataStream*)self, i);
}

void q_datastream_operator_shift_left5(void* self, unsigned short i) {
    QDataStream_OperatorShiftLeft5((QDataStream*)self, i);
}

void q_datastream_operator_shift_left6(void* self, int i) {
    QDataStream_OperatorShiftLeft6((QDataStream*)self, i);
}

void q_datastream_operator_shift_left7(void* self, uint32_t i) {
    QDataStream_OperatorShiftLeft7((QDataStream*)self, i);
}

void q_datastream_operator_shift_left8(void* self, long long i) {
    QDataStream_OperatorShiftLeft8((QDataStream*)self, i);
}

void q_datastream_operator_shift_left9(void* self, uint64_t i) {
    QDataStream_OperatorShiftLeft9((QDataStream*)self, i);
}

void q_datastream_operator_shift_left11(void* self, float f) {
    QDataStream_OperatorShiftLeft11((QDataStream*)self, f);
}

void q_datastream_operator_shift_left12(void* self, double f) {
    QDataStream_OperatorShiftLeft12((QDataStream*)self, f);
}

void q_datastream_operator_shift_left13(void* self, const char* str) {
    QDataStream_OperatorShiftLeft13((QDataStream*)self, str);
}

QDataStream* q_datastream_read_bytes(void* self, char* param1, uint32_t* lenVal) {
    return QDataStream_ReadBytes((QDataStream*)self, param1, lenVal);
}

QDataStream* q_datastream_read_bytes2(void* self, char* param1, long long* lenVal) {
    return QDataStream_ReadBytes2((QDataStream*)self, param1, lenVal);
}

long long q_datastream_read_raw_data(void* self, char* param1, long long lenVal) {
    return QDataStream_ReadRawData((QDataStream*)self, param1, lenVal);
}

void q_datastream_write_bytes(void* self, const char* param1, long long lenVal) {
    QDataStream_WriteBytes((QDataStream*)self, param1, lenVal);
}

long long q_datastream_write_raw_data(void* self, const char* param1, long long lenVal) {
    return QDataStream_WriteRawData((QDataStream*)self, param1, lenVal);
}

long long q_datastream_skip_raw_data(void* self, long long lenVal) {
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
