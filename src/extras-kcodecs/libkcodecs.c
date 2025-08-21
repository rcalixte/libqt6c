#include "../libqbytearrayview.hpp"
#include "libkcodecs.hpp"
#include "libkcodecs.h"

char* k_codecs_quoted_printable_encode(const char* param1, bool param2) {
    libqt_string param1_string = qstring(param1);
    libqt_string _str = KCodecs_QuotedPrintableEncode((QByteArrayView*)&param1_string, param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_quoted_printable_encode2(const char* param1, char* param2, bool param3) {
    libqt_string param1_string = qstring(param1);
    KCodecs_QuotedPrintableEncode2((QByteArrayView*)&param1_string, qstring(param2), param3);
}

char* k_codecs_quoted_printable_decode(const char* param1) {
    libqt_string param1_string = qstring(param1);
    libqt_string _str = KCodecs_QuotedPrintableDecode((QByteArrayView*)&param1_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_quoted_printable_decode2(const char* param1, char* param2) {
    libqt_string param1_string = qstring(param1);
    KCodecs_QuotedPrintableDecode2((QByteArrayView*)&param1_string, qstring(param2));
}

char* k_codecs_uudecode(const char* param1) {
    libqt_string param1_string = qstring(param1);
    libqt_string _str = KCodecs_Uudecode((QByteArrayView*)&param1_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_uudecode2(const char* param1, char* param2) {
    libqt_string param1_string = qstring(param1);
    KCodecs_Uudecode2((QByteArrayView*)&param1_string, qstring(param2));
}

char* k_codecs_base64_encode(const char* param1) {
    libqt_string param1_string = qstring(param1);
    libqt_string _str = KCodecs_Base64Encode((QByteArrayView*)&param1_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_base64_encode2(const char* param1, char* param2, bool param3) {
    libqt_string param1_string = qstring(param1);
    KCodecs_Base64Encode2((QByteArrayView*)&param1_string, qstring(param2), param3);
}

char* k_codecs_base64_decode(const char* param1) {
    libqt_string param1_string = qstring(param1);
    libqt_string _str = KCodecs_Base64Decode((QByteArrayView*)&param1_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_base64_decode2(const char* param1, char* param2) {
    libqt_string param1_string = qstring(param1);
    KCodecs_Base64Decode2((QByteArrayView*)&param1_string, qstring(param2));
}

char* k_codecs_base45_decode(const char* param1) {
    libqt_string param1_string = qstring(param1);
    libqt_string _str = KCodecs_Base45Decode((QByteArrayView*)&param1_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KCodecs__Codec* k_codecs__codec_codec_for_name(const char* name) {
    libqt_string name_string = qstring(name);
    return KCodecs__Codec_CodecForName((QByteArrayView*)&name_string);
}

int64_t k_codecs__codec_max_encoded_size_for(void* self, int64_t insize, int32_t newline) {
    return KCodecs__Codec_MaxEncodedSizeFor((KCodecs__Codec*)self, insize, newline);
}

int64_t k_codecs__codec_max_decoded_size_for(void* self, int64_t insize, int32_t newline) {
    return KCodecs__Codec_MaxDecodedSizeFor((KCodecs__Codec*)self, insize, newline);
}

KCodecs__Encoder* k_codecs__codec_make_encoder(void* self, int32_t newline) {
    return KCodecs__Codec_MakeEncoder((KCodecs__Codec*)self, newline);
}

KCodecs__Decoder* k_codecs__codec_make_decoder(void* self, int32_t newline) {
    return KCodecs__Codec_MakeDecoder((KCodecs__Codec*)self, newline);
}

bool k_codecs__codec_encode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend, int32_t newline) {
    return KCodecs__Codec_Encode((KCodecs__Codec*)self, scursor, send, dcursor, dend, newline);
}

bool k_codecs__codec_decode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend, int32_t newline) {
    return KCodecs__Codec_Decode((KCodecs__Codec*)self, scursor, send, dcursor, dend, newline);
}

char* k_codecs__codec_encode2(void* self, const char* src) {
    libqt_string src_string = qstring(src);
    libqt_string _str = KCodecs__Codec_Encode2((KCodecs__Codec*)self, (QByteArrayView*)&src_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_codecs__codec_decode2(void* self, const char* src) {
    libqt_string src_string = qstring(src);
    libqt_string _str = KCodecs__Codec_Decode2((KCodecs__Codec*)self, (QByteArrayView*)&src_string);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_codecs__codec_name(void* self) {
    return KCodecs__Codec_Name((KCodecs__Codec*)self);
}

char* k_codecs__codec_encode22(void* self, const char* src, int32_t newline) {
    libqt_string src_string = qstring(src);
    libqt_string _str = KCodecs__Codec_Encode22((KCodecs__Codec*)self, (QByteArrayView*)&src_string, newline);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_codecs__codec_decode22(void* self, const char* src, int32_t newline) {
    libqt_string src_string = qstring(src);
    libqt_string _str = KCodecs__Codec_Decode22((KCodecs__Codec*)self, (QByteArrayView*)&src_string, newline);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs__codec_delete(void* self) {
    KCodecs__Codec_Delete((KCodecs__Codec*)(self));
}

bool k_codecs__decoder_decode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend) {
    return KCodecs__Decoder_Decode((KCodecs__Decoder*)self, scursor, send, dcursor, dend);
}

bool k_codecs__decoder_finish(void* self, char* dcursor, const char* dend) {
    return KCodecs__Decoder_Finish((KCodecs__Decoder*)self, dcursor, dend);
}

void k_codecs__decoder_delete(void* self) {
    KCodecs__Decoder_Delete((KCodecs__Decoder*)(self));
}

bool k_codecs__encoder_encode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend) {
    return KCodecs__Encoder_Encode((KCodecs__Encoder*)self, scursor, send, dcursor, dend);
}

bool k_codecs__encoder_finish(void* self, char* dcursor, const char* dend) {
    return KCodecs__Encoder_Finish((KCodecs__Encoder*)self, dcursor, dend);
}

void k_codecs__encoder_delete(void* self) {
    KCodecs__Encoder_Delete((KCodecs__Encoder*)(self));
}
