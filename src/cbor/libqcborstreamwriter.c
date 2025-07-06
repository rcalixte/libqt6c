#include "libqcborcommon.hpp"
#include "../libqiodevice.hpp"
#include "libqcborstreamwriter.hpp"
#include "libqcborstreamwriter.h"

QCborStreamWriter* q_cborstreamwriter_new(void* device) {
    return QCborStreamWriter_new((QIODevice*)device);
}

void q_cborstreamwriter_set_device(void* self, void* device) {
    QCborStreamWriter_SetDevice((QCborStreamWriter*)self, (QIODevice*)device);
}

QIODevice* q_cborstreamwriter_device(void* self) {
    return QCborStreamWriter_Device((QCborStreamWriter*)self);
}

void q_cborstreamwriter_append(void* self, uint64_t u) {
    QCborStreamWriter_Append((QCborStreamWriter*)self, u);
}

void q_cborstreamwriter_append_with_qint64(void* self, long long i) {
    QCborStreamWriter_AppendWithQint64((QCborStreamWriter*)self, i);
}

void q_cborstreamwriter_append_with_q_cbor_negative_integer(void* self, int64_t n) {
    QCborStreamWriter_AppendWithQCborNegativeInteger((QCborStreamWriter*)self, n);
}

void q_cborstreamwriter_append_with_ba(void* self, const char* ba) {
    QCborStreamWriter_AppendWithBa((QCborStreamWriter*)self, qstring(ba));
}

void q_cborstreamwriter_append_with_tag(void* self, int64_t tag) {
    QCborStreamWriter_AppendWithTag((QCborStreamWriter*)self, tag);
}

void q_cborstreamwriter_append3(void* self, int64_t tag) {
    QCborStreamWriter_Append3((QCborStreamWriter*)self, tag);
}

void q_cborstreamwriter_append_with_st(void* self, int64_t st) {
    QCborStreamWriter_AppendWithSt((QCborStreamWriter*)self, st);
}

void q_cborstreamwriter_append_with_float(void* self, float f) {
    QCborStreamWriter_AppendWithFloat((QCborStreamWriter*)self, f);
}

void q_cborstreamwriter_append_with_double(void* self, double d) {
    QCborStreamWriter_AppendWithDouble((QCborStreamWriter*)self, d);
}

void q_cborstreamwriter_append_byte_string(void* self, const char* data, int64_t lenVal) {
    QCborStreamWriter_AppendByteString((QCborStreamWriter*)self, data, lenVal);
}

void q_cborstreamwriter_append_text_string(void* self, const char* utf8, int64_t lenVal) {
    QCborStreamWriter_AppendTextString((QCborStreamWriter*)self, utf8, lenVal);
}

void q_cborstreamwriter_append_with_bool(void* self, bool b) {
    QCborStreamWriter_AppendWithBool((QCborStreamWriter*)self, b);
}

void q_cborstreamwriter_append_null(void* self) {
    QCborStreamWriter_AppendNull((QCborStreamWriter*)self);
}

void q_cborstreamwriter_append_undefined(void* self) {
    QCborStreamWriter_AppendUndefined((QCborStreamWriter*)self);
}

void q_cborstreamwriter_append_with_int(void* self, int i) {
    QCborStreamWriter_AppendWithInt((QCborStreamWriter*)self, i);
}

void q_cborstreamwriter_append_with_uint(void* self, uint32_t u) {
    QCborStreamWriter_AppendWithUint((QCborStreamWriter*)self, u);
}

void q_cborstreamwriter_append4(void* self, const char* str) {
    QCborStreamWriter_Append4((QCborStreamWriter*)self, str);
}

void q_cborstreamwriter_start_array(void* self) {
    QCborStreamWriter_StartArray((QCborStreamWriter*)self);
}

void q_cborstreamwriter_start_array_with_count(void* self, uint64_t count) {
    QCborStreamWriter_StartArrayWithCount((QCborStreamWriter*)self, count);
}

bool q_cborstreamwriter_end_array(void* self) {
    return QCborStreamWriter_EndArray((QCborStreamWriter*)self);
}

void q_cborstreamwriter_start_map(void* self) {
    QCborStreamWriter_StartMap((QCborStreamWriter*)self);
}

void q_cborstreamwriter_start_map_with_count(void* self, uint64_t count) {
    QCborStreamWriter_StartMapWithCount((QCborStreamWriter*)self, count);
}

bool q_cborstreamwriter_end_map(void* self) {
    return QCborStreamWriter_EndMap((QCborStreamWriter*)self);
}

void q_cborstreamwriter_append22(void* self, const char* str, int64_t size) {
    QCborStreamWriter_Append22((QCborStreamWriter*)self, str, size);
}

void q_cborstreamwriter_delete(void* self) {
    QCborStreamWriter_Delete((QCborStreamWriter*)(self));
}
