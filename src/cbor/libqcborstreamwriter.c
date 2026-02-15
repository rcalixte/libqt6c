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

void q_cborstreamwriter_append2(void* self, long long i) {
    QCborStreamWriter_Append2((QCborStreamWriter*)self, i);
}

void q_cborstreamwriter_append3(void* self, uint64_t n) {
    QCborStreamWriter_Append3((QCborStreamWriter*)self, n);
}

void q_cborstreamwriter_append4(void* self, char* ba) {
    QCborStreamWriter_Append4((QCborStreamWriter*)self, qstring(ba));
}

void q_cborstreamwriter_append7(void* self, uint64_t tag) {
    QCborStreamWriter_Append7((QCborStreamWriter*)self, tag);
}

void q_cborstreamwriter_append8(void* self, int32_t tag) {
    QCborStreamWriter_Append8((QCborStreamWriter*)self, tag);
}

void q_cborstreamwriter_append9(void* self, uint8_t st) {
    QCborStreamWriter_Append9((QCborStreamWriter*)self, st);
}

void q_cborstreamwriter_append12(void* self, float f) {
    QCborStreamWriter_Append12((QCborStreamWriter*)self, f);
}

void q_cborstreamwriter_append13(void* self, double d) {
    QCborStreamWriter_Append13((QCborStreamWriter*)self, d);
}

void q_cborstreamwriter_append_byte_string(void* self, const char* data, int64_t lenVal) {
    QCborStreamWriter_AppendByteString((QCborStreamWriter*)self, data, lenVal);
}

void q_cborstreamwriter_append_text_string(void* self, const char* utf8, int64_t lenVal) {
    QCborStreamWriter_AppendTextString((QCborStreamWriter*)self, utf8, lenVal);
}

void q_cborstreamwriter_append14(void* self, bool b) {
    QCborStreamWriter_Append14((QCborStreamWriter*)self, b);
}

void q_cborstreamwriter_append_null(void* self) {
    QCborStreamWriter_AppendNull((QCborStreamWriter*)self);
}

void q_cborstreamwriter_append_undefined(void* self) {
    QCborStreamWriter_AppendUndefined((QCborStreamWriter*)self);
}

void q_cborstreamwriter_append15(void* self, int i) {
    QCborStreamWriter_Append15((QCborStreamWriter*)self, i);
}

void q_cborstreamwriter_append16(void* self, uint32_t u) {
    QCborStreamWriter_Append16((QCborStreamWriter*)self, u);
}

void q_cborstreamwriter_append17(void* self, const char* str) {
    QCborStreamWriter_Append17((QCborStreamWriter*)self, str);
}

void q_cborstreamwriter_start_array(void* self) {
    QCborStreamWriter_StartArray((QCborStreamWriter*)self);
}

void q_cborstreamwriter_start_array2(void* self, uint64_t count) {
    QCborStreamWriter_StartArray2((QCborStreamWriter*)self, count);
}

bool q_cborstreamwriter_end_array(void* self) {
    return QCborStreamWriter_EndArray((QCborStreamWriter*)self);
}

void q_cborstreamwriter_start_map(void* self) {
    QCborStreamWriter_StartMap((QCborStreamWriter*)self);
}

void q_cborstreamwriter_start_map2(void* self, uint64_t count) {
    QCborStreamWriter_StartMap2((QCborStreamWriter*)self, count);
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
