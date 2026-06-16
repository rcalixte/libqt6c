#include "../libqbytearrayview.hpp"
#include "libkcodecs.hpp"
#include "libkcodecs.h"

char* k_codecs_quoted_printable_encode(char* in, bool useCRLF) {
    libqt_string _str = KCodecs_QuotedPrintableEncode(qstring(in), useCRLF);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_quoted_printable_encode2(char* in, char* out, bool useCRLF) {
    KCodecs_QuotedPrintableEncode2(qstring(in), qstring(out), useCRLF);
}

char* k_codecs_quoted_printable_decode(char* in) {
    libqt_string _str = KCodecs_QuotedPrintableDecode(qstring(in));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_quoted_printable_decode2(char* in, char* out) {
    KCodecs_QuotedPrintableDecode2(qstring(in), qstring(out));
}

char* k_codecs_uudecode(char* in) {
    libqt_string _str = KCodecs_Uudecode(qstring(in));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_uudecode2(char* in, char* out) {
    KCodecs_Uudecode2(qstring(in), qstring(out));
}

char* k_codecs_base64_encode(char* in) {
    libqt_string _str = KCodecs_Base64Encode(qstring(in));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_base64_encode2(char* in, char* out, bool insertLFs) {
    KCodecs_Base64Encode2(qstring(in), qstring(out), insertLFs);
}

char* k_codecs_base64_decode(char* in) {
    libqt_string _str = KCodecs_Base64Decode(qstring(in));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_codecs_base64_decode2(char* in, char* out) {
    KCodecs_Base64Decode2(qstring(in), qstring(out));
}

const char* k_codecs_decode_r_f_c2047_string(const char* text) {
    libqt_string _str = KCodecs_DecodeRFC2047String(qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_codecs_encode_r_f_c2047_string(const char* src, char* charset) {
    libqt_string _str = KCodecs_EncodeRFC2047String(qstring(src), qstring(charset));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_codecs_base45_decode(char* in) {
    libqt_string _str = KCodecs_Base45Decode(qstring(in));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KCodecs__Codec* k_codecs__codec_codec_for_name(char* name) {
    return KCodecs__Codec_CodecForName(qstring(name));
}

intptr_t k_codecs__codec_max_encoded_size_for(void* self, intptr_t insize, int32_t newline) {
    return KCodecs__Codec_MaxEncodedSizeFor((KCodecs__Codec*)self, insize, newline);
}

intptr_t k_codecs__codec_max_decoded_size_for(void* self, intptr_t insize, int32_t newline) {
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

char* k_codecs__codec_encode2(void* self, char* src) {
    libqt_string _str = KCodecs__Codec_Encode2((KCodecs__Codec*)self, qstring(src));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_codecs__codec_decode2(void* self, char* src) {
    libqt_string _str = KCodecs__Codec_Decode2((KCodecs__Codec*)self, qstring(src));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_codecs__codec_name(void* self) {
    return KCodecs__Codec_Name((KCodecs__Codec*)self);
}

char* k_codecs__codec_encode22(void* self, char* src, int32_t newline) {
    libqt_string _str = KCodecs__Codec_Encode22((KCodecs__Codec*)self, qstring(src), newline);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_codecs__codec_decode22(void* self, char* src, int32_t newline) {
    libqt_string _str = KCodecs__Codec_Decode22((KCodecs__Codec*)self, qstring(src), newline);
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
