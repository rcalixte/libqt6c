#pragma once
#ifndef SRC_EXTRAS_KCODECS_QT6C_LIBKCODECS_H
#define SRC_EXTRAS_KCODECS_QT6C_LIBKCODECS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcodecs.html)

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 bool
///
char* k_codecs_quoted_printable_encode(const char* param1, bool param2);

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
///
/// @param param1 const char*
/// @param param2 char*
/// @param param3 bool
///
void k_codecs_quoted_printable_encode2(const char* param1, char* param2, bool param3);

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
char* k_codecs_quoted_printable_decode(const char* param1);

/// [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
///
/// @param param1 const char*
/// @param param2 char*
///
void k_codecs_quoted_printable_decode2(const char* param1, char* param2);

/// [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
char* k_codecs_uudecode(const char* param1);

/// [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
///
/// @param param1 const char*
/// @param param2 char*
///
void k_codecs_uudecode2(const char* param1, char* param2);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
char* k_codecs_base64_encode(const char* param1);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
///
/// @param param1 const char*
/// @param param2 char*
/// @param param3 bool
///
void k_codecs_base64_encode2(const char* param1, char* param2, bool param3);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
char* k_codecs_base64_decode(const char* param1);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
///
/// @param param1 const char*
/// @param param2 char*
///
void k_codecs_base64_decode2(const char* param1, char* param2);

/// [Upstream resources](https://api.kde.org/kcodecs.html#base45Decode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
char* k_codecs_base45_decode(const char* param1);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html)

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#codecForName)
///
/// @param name const char*
///
KCodecs__Codec* k_codecs__codec_codec_for_name(const char* name);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxEncodedSizeFor)
///
/// @param self KCodecs__Codec*
/// @param insize int64_t
/// @param newline enum KCodecs__Codec__NewlineType
///
int64_t k_codecs__codec_max_encoded_size_for(void* self, int64_t insize, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxDecodedSizeFor)
///
/// @param self KCodecs__Codec*
/// @param insize int64_t
/// @param newline enum KCodecs__Codec__NewlineType
///
int64_t k_codecs__codec_max_decoded_size_for(void* self, int64_t insize, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeEncoder)
///
/// @param self KCodecs__Codec*
/// @param newline enum KCodecs__Codec__NewlineType
///
KCodecs__Encoder* k_codecs__codec_make_encoder(void* self, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeDecoder)
///
/// @param self KCodecs__Codec*
/// @param newline enum KCodecs__Codec__NewlineType
///
KCodecs__Decoder* k_codecs__codec_make_decoder(void* self, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
///
/// @param self KCodecs__Codec*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
bool k_codecs__codec_encode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
///
/// @param self KCodecs__Codec*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
bool k_codecs__codec_decode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecs__Codec*
/// @param src const char*
///
char* k_codecs__codec_encode2(void* self, const char* src);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecs__Codec*
/// @param src const char*
///
char* k_codecs__codec_decode2(void* self, const char* src);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecs__Codec*
///
const char* k_codecs__codec_name(void* self);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecs__Codec*
/// @param src const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
char* k_codecs__codec_encode22(void* self, const char* src, int32_t newline);

/// [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecs__Codec*
/// @param src const char*
/// @param newline enum KCodecs__Codec__NewlineType
///
char* k_codecs__codec_decode22(void* self, const char* src, int32_t newline);

/// Delete this object from C++ memory.
///
/// @param self KCodecs__Codec*
///
void k_codecs__codec_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcodecs-decoder.html)

/// [Upstream resources](https://api.kde.org/kcodecs-decoder.html#decode)
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
/// @param self KCodecs__Encoder*
/// @param scursor const char*
/// @param send const char*
/// @param dcursor char*
/// @param dend const char*
///
bool k_codecs__encoder_encode(void* self, const char* scursor, const char* send, char* dcursor, const char* dend);

/// [Upstream resources](https://api.kde.org/kcodecs-encoder.html#finish)
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
