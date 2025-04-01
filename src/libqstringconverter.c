#include "libqbytearrayview.hpp"
#include "libqchar.hpp"
#include "libqstringconverter_base.hpp"
#include "libqstringconverter.hpp"
#include "libqstringconverter.h"

QStringEncoder* q_stringencoder_new() {
    return QStringEncoder_new();
}

QStringEncoder* q_stringencoder_new2(int64_t encoding) {
    return QStringEncoder_new2(encoding);
}

QStringEncoder* q_stringencoder_new3(const char* name) {
    return QStringEncoder_new3(name);
}

QStringEncoder* q_stringencoder_new4(int64_t encoding, int64_t flags) {
    return QStringEncoder_new4(encoding, flags);
}

QStringEncoder* q_stringencoder_new5(const char* name, int64_t flags) {
    return QStringEncoder_new5(name, flags);
}

int64_t q_stringencoder_required_space(void* self, int64_t inputLength) {
    return QStringEncoder_RequiredSpace((QStringEncoder*)self, inputLength);
}

bool q_stringencoder_is_valid(void* self) {
    return QStringConverter_IsValid((QStringConverter*)self);
}

void q_stringencoder_reset_state(void* self) {
    QStringConverter_ResetState((QStringConverter*)self);
}

bool q_stringencoder_has_error(void* self) {
    return QStringConverter_HasError((QStringConverter*)self);
}

const char* q_stringencoder_name(void* self) {
    return QStringConverter_Name((QStringConverter*)self);
}

const char* q_stringencoder_name_for_encoding(int64_t e) {
    return QStringConverter_NameForEncoding(e);
}

void q_stringencoder_delete(void* self) {
    QStringEncoder_Delete((QStringEncoder*)(self));
}

QStringDecoder* q_stringdecoder_new(int64_t encoding) {
    return QStringDecoder_new(encoding);
}

QStringDecoder* q_stringdecoder_new2() {
    return QStringDecoder_new2();
}

QStringDecoder* q_stringdecoder_new3(const char* name) {
    return QStringDecoder_new3(name);
}

QStringDecoder* q_stringdecoder_new4(int64_t encoding, int64_t flags) {
    return QStringDecoder_new4(encoding, flags);
}

QStringDecoder* q_stringdecoder_new5(const char* name, int64_t f) {
    return QStringDecoder_new5(name, f);
}

int64_t q_stringdecoder_required_space(void* self, int64_t inputLength) {
    return QStringDecoder_RequiredSpace((QStringDecoder*)self, inputLength);
}

QChar* q_stringdecoder_append_to_buffer(void* self, void* out, const char* ba) {
    libqt_strview ba_strview = qstrview(ba);
    return QStringDecoder_AppendToBuffer((QStringDecoder*)self, (QChar*)out, (QByteArrayView*)&ba_strview);
}

QStringDecoder* q_stringdecoder_decoder_for_html(const char* data) {
    libqt_strview data_strview = qstrview(data);
    return QStringDecoder_DecoderForHtml((QByteArrayView*)&data_strview);
}

bool q_stringdecoder_is_valid(void* self) {
    return QStringConverter_IsValid((QStringConverter*)self);
}

void q_stringdecoder_reset_state(void* self) {
    QStringConverter_ResetState((QStringConverter*)self);
}

bool q_stringdecoder_has_error(void* self) {
    return QStringConverter_HasError((QStringConverter*)self);
}

const char* q_stringdecoder_name(void* self) {
    return QStringConverter_Name((QStringConverter*)self);
}

const char* q_stringdecoder_name_for_encoding(int64_t e) {
    return QStringConverter_NameForEncoding(e);
}

void q_stringdecoder_delete(void* self) {
    QStringDecoder_Delete((QStringDecoder*)(self));
}
