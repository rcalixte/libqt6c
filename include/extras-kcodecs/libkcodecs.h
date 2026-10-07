#pragma once
#ifndef EXTRAS_KCODECS_LIBKCODECS_H
#define EXTRAS_KCODECS_LIBKCODECS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcodecs.html)

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param in const char*
/// @param useCRLF bool
///
const char* k_codecs_quoted_printable_encode(const char* in, bool useCRLF);

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
///
/// @param in const char*
/// @param out const char*
/// @param useCRLF bool
///
void k_codecs_quoted_printable_encode2(const char* in, const char* out, bool useCRLF);

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param in const char*
///
const char* k_codecs_quoted_printable_decode(const char* in);

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
///
/// @param in const char*
/// @param out const char*
///
void k_codecs_quoted_printable_decode2(const char* in, const char* out);

/// [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param in const char*
///
const char* k_codecs_uudecode(const char* in);

/// [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
///
/// @param in const char*
/// @param out const char*
///
void k_codecs_uudecode2(const char* in, const char* out);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param in const char*
///
const char* k_codecs_base64_encode(const char* in);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
///
/// @param in const char*
/// @param out const char*
/// @param insertLFs bool
///
void k_codecs_base64_encode2(const char* in, const char* out, bool insertLFs);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param in const char*
///
const char* k_codecs_base64_decode(const char* in);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
///
/// @param in const char*
/// @param out const char*
///
void k_codecs_base64_decode2(const char* in, const char* out);

/// [Upstream resources](https://api.kde.org/kcodecs.html#decodeRFC2047String)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param text const char*
///
const char* k_codecs_decode_r_f_c2047_string(const char* text);

/// [Upstream resources](https://api.kde.org/kcodecs.html#encodeRFC2047String)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param src const char*
/// @param charset const char*
///
const char* k_codecs_encode_r_f_c2047_string(const char* src, const char* charset);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base45Decode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param in const char*
///
const char* k_codecs_base45_decode(const char* in);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html)

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#codecForName)
///
/// @param name const char*
///
KCodecs__Codec* k_codecs__codec_codec_for_name(const char* name);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxEncodedSizeFor)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KCodecs__Codec*
/// @param insize intptr_t
/// @param newline enum KCodecs__Codec__NewlineType
///
intptr_t k_codecs__codec_max_encoded_size_for(const void* self, intptr_t insize, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxDecodedSizeFor)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KCodecs__Codec*
/// @param insize intptr_t
/// @param newline enum KCodecs__Codec__NewlineType
///
intptr_t k_codecs__codec_max_decoded_size_for(const void* self, intptr_t insize, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeEncoder)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KCodecs__Codec*
/// @param newline enum KCodecs__Codec__NewlineType
///
KCodecs__Encoder* k_codecs__codec_make_encoder(const void* self, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeDecoder)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KCodecs__Codec*
/// @param newline enum KCodecs__Codec__NewlineType
///
KCodecs__Decoder* k_codecs__codec_make_decoder(const void* self, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
///
/// @param self const KCodecs__Codec*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
bool k_codecs__codec_encode(const void* self, const char* scursor, const char* send, char* dcursor, const char* dend, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
///
/// @param self const KCodecs__Codec*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
bool k_codecs__codec_decode(const void* self, const char* scursor, const char* send, char* dcursor, const char* dend, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCodecs__Codec*
/// @param src const char*
///
const char* k_codecs__codec_encode2(const void* self, const char* src);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCodecs__Codec*
/// @param src const char*
///
const char* k_codecs__codec_decode2(const void* self, const char* src);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#name)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCodecs__Codec*
///
const char* k_codecs__codec_name(const void* self);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCodecs__Codec*
/// @param src const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
const char* k_codecs__codec_encode22(const void* self, const char* src, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCodecs__Codec*
/// @param src const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
const char* k_codecs__codec_decode22(const void* self, const char* src, int32_t newline);

/// Delete this object from C++ memory.
///
/// @param self KCodecs__Codec*
///
void k_codecs__codec_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcodecs-decoder.html)

/// [Upstream resources](https://api.kde.org/kcodecs-decoder.html#decode)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KCodecs__Decoder*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
///
bool k_codecs__decoder_decode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend);

/// [Upstream resources](https://api.kde.org/kcodecs-decoder.html#finish)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KCodecs__Decoder*
/// @param dcursor char*
/// @param dend const char*
///
bool k_codecs__decoder_finish(void* self, char* dcursor, const char* dend);

/// Delete this object from C++ memory.
///
/// @param self KCodecs__Decoder*
///
void k_codecs__decoder_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcodecs-encoder.html)

/// [Upstream resources](https://api.kde.org/kcodecs-encoder.html#encode)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KCodecs__Encoder*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
///
bool k_codecs__encoder_encode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend);

/// [Upstream resources](https://api.kde.org/kcodecs-encoder.html#finish)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KCodecs__Encoder*
/// @param dcursor char*
/// @param dend const char*
///
bool k_codecs__encoder_finish(void* self, char* dcursor, const char* dend);

/// Delete this object from C++ memory.
///
/// @param self KCodecs__Encoder*
///
void k_codecs__encoder_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcodecs.html#public-types)

typedef enum {
    KCODECS_CHARSETOPTION_NOOPTION = 0,
    KCODECS_CHARSETOPTION_FORCEDEFAULTCHARSET = 1
} KCodecs__CharsetOption;

/// [Upstream resources](https://api.kde.org/kcodecs.html#public-types)

typedef enum {
    KCODECS_CODEC_NEWLINETYPE_NEWLINELF = 0,
    KCODECS_CODEC_NEWLINETYPE_NEWLINECRLF = 1
} KCodecs__Codec__NewlineType;

/// [Upstream resources](https://api.kde.org/kcodecs.html#public-types)

typedef enum {
    KCODECS_ENCODER__MAXBUFFEREDCHARS = 8
} KCodecs__Encoder__;

#endif
