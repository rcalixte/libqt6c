#include "libqcborcommon.hpp"
#include "../libqiodevice.hpp"
#include "libqcborstreamreader.hpp"
#include "libqcborstreamreader.h"

QCborStreamReader* q_cborstreamreader_new() {
    return QCborStreamReader_new();
}

QCborStreamReader* q_cborstreamreader_new2(const char* data, int64_t lenVal) {
    return QCborStreamReader_new2(data, lenVal);
}

QCborStreamReader* q_cborstreamreader_new3(unsigned char* data, int64_t lenVal) {
    return QCborStreamReader_new3(data, lenVal);
}

QCborStreamReader* q_cborstreamreader_new4(char* data) {
    return QCborStreamReader_new4(qstring(data));
}

QCborStreamReader* q_cborstreamreader_new5(void* device) {
    return QCborStreamReader_new5((QIODevice*)device);
}

void q_cborstreamreader_set_device(void* self, void* device) {
    QCborStreamReader_SetDevice((QCborStreamReader*)self, (QIODevice*)device);
}

QIODevice* q_cborstreamreader_device(void* self) {
    return QCborStreamReader_Device((QCborStreamReader*)self);
}

void q_cborstreamreader_add_data(void* self, char* data) {
    QCborStreamReader_AddData((QCborStreamReader*)self, qstring(data));
}

void q_cborstreamreader_add_data2(void* self, const char* data, int64_t lenVal) {
    QCborStreamReader_AddData2((QCborStreamReader*)self, data, lenVal);
}

void q_cborstreamreader_add_data3(void* self, unsigned char* data, int64_t lenVal) {
    QCborStreamReader_AddData3((QCborStreamReader*)self, data, lenVal);
}

void q_cborstreamreader_reparse(void* self) {
    QCborStreamReader_Reparse((QCborStreamReader*)self);
}

void q_cborstreamreader_clear(void* self) {
    QCborStreamReader_Clear((QCborStreamReader*)self);
}

void q_cborstreamreader_reset(void* self) {
    QCborStreamReader_Reset((QCborStreamReader*)self);
}

QCborError* q_cborstreamreader_last_error(void* self) {
    return QCborStreamReader_LastError((QCborStreamReader*)self);
}

long long q_cborstreamreader_current_offset(void* self) {
    return QCborStreamReader_CurrentOffset((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_valid(void* self) {
    return QCborStreamReader_IsValid((QCborStreamReader*)self);
}

int32_t q_cborstreamreader_container_depth(void* self) {
    return QCborStreamReader_ContainerDepth((QCborStreamReader*)self);
}

uint8_t q_cborstreamreader_parent_container_type(void* self) {
    return QCborStreamReader_ParentContainerType((QCborStreamReader*)self);
}

bool q_cborstreamreader_has_next(void* self) {
    return QCborStreamReader_HasNext((QCborStreamReader*)self);
}

bool q_cborstreamreader_next(void* self) {
    return QCborStreamReader_Next((QCborStreamReader*)self);
}

uint8_t q_cborstreamreader_type(void* self) {
    return QCborStreamReader_Type((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_unsigned_integer(void* self) {
    return QCborStreamReader_IsUnsignedInteger((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_negative_integer(void* self) {
    return QCborStreamReader_IsNegativeInteger((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_integer(void* self) {
    return QCborStreamReader_IsInteger((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_byte_array(void* self) {
    return QCborStreamReader_IsByteArray((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_string(void* self) {
    return QCborStreamReader_IsString((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_array(void* self) {
    return QCborStreamReader_IsArray((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_map(void* self) {
    return QCborStreamReader_IsMap((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_tag(void* self) {
    return QCborStreamReader_IsTag((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_simple_type(void* self) {
    return QCborStreamReader_IsSimpleType((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_float16(void* self) {
    return QCborStreamReader_IsFloat16((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_float(void* self) {
    return QCborStreamReader_IsFloat((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_double(void* self) {
    return QCborStreamReader_IsDouble((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_invalid(void* self) {
    return QCborStreamReader_IsInvalid((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_simple_type2(void* self, uint8_t st) {
    return QCborStreamReader_IsSimpleType2((QCborStreamReader*)self, st);
}

bool q_cborstreamreader_is_false(void* self) {
    return QCborStreamReader_IsFalse((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_true(void* self) {
    return QCborStreamReader_IsTrue((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_bool(void* self) {
    return QCborStreamReader_IsBool((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_null(void* self) {
    return QCborStreamReader_IsNull((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_undefined(void* self) {
    return QCborStreamReader_IsUndefined((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_length_known(void* self) {
    return QCborStreamReader_IsLengthKnown((QCborStreamReader*)self);
}

uint64_t q_cborstreamreader_length(void* self) {
    return QCborStreamReader_Length((QCborStreamReader*)self);
}

bool q_cborstreamreader_is_container(void* self) {
    return QCborStreamReader_IsContainer((QCborStreamReader*)self);
}

bool q_cborstreamreader_enter_container(void* self) {
    return QCborStreamReader_EnterContainer((QCborStreamReader*)self);
}

bool q_cborstreamreader_leave_container(void* self) {
    return QCborStreamReader_LeaveContainer((QCborStreamReader*)self);
}

bool q_cborstreamreader_read_and_append_to_string(void* self, const char* dst) {
    return QCborStreamReader_ReadAndAppendToString((QCborStreamReader*)self, qstring(dst));
}

bool q_cborstreamreader_read_and_append_to_utf8_string(void* self, char* dst) {
    return QCborStreamReader_ReadAndAppendToUtf8String((QCborStreamReader*)self, qstring(dst));
}

bool q_cborstreamreader_read_and_append_to_byte_array(void* self, char* dst) {
    return QCborStreamReader_ReadAndAppendToByteArray((QCborStreamReader*)self, qstring(dst));
}

int64_t q_cborstreamreader_current_string_chunk_size(void* self) {
    return QCborStreamReader_CurrentStringChunkSize((QCborStreamReader*)self);
}

bool q_cborstreamreader_to_bool(void* self) {
    return QCborStreamReader_ToBool((QCborStreamReader*)self);
}

uint64_t q_cborstreamreader_to_tag(void* self) {
    return QCborStreamReader_ToTag((QCborStreamReader*)self);
}

uint64_t q_cborstreamreader_to_unsigned_integer(void* self) {
    return QCborStreamReader_ToUnsignedInteger((QCborStreamReader*)self);
}

uint64_t q_cborstreamreader_to_negative_integer(void* self) {
    return QCborStreamReader_ToNegativeInteger((QCborStreamReader*)self);
}

uint8_t q_cborstreamreader_to_simple_type(void* self) {
    return QCborStreamReader_ToSimpleType((QCborStreamReader*)self);
}

float q_cborstreamreader_to_float(void* self) {
    return QCborStreamReader_ToFloat((QCborStreamReader*)self);
}

double q_cborstreamreader_to_double(void* self) {
    return QCborStreamReader_ToDouble((QCborStreamReader*)self);
}

long long q_cborstreamreader_to_integer(void* self) {
    return QCborStreamReader_ToInteger((QCborStreamReader*)self);
}

const char* q_cborstreamreader_read_all_string(void* self) {
    libqt_string _str = QCborStreamReader_ReadAllString((QCborStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_cborstreamreader_read_all_utf8_string(void* self) {
    libqt_string _str = QCborStreamReader_ReadAllUtf8String((QCborStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_cborstreamreader_read_all_byte_array(void* self) {
    libqt_string _str = QCborStreamReader_ReadAllByteArray((QCborStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_cborstreamreader_next1(void* self, int maxRecursion) {
    return QCborStreamReader_Next1((QCborStreamReader*)self, maxRecursion);
}

void q_cborstreamreader_delete(void* self) {
    QCborStreamReader_Delete((QCborStreamReader*)(self));
}
