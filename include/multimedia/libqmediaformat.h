#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIAFORMAT_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIAFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqmimetype.h"
#include <string.h>

QMediaFormat* q_mediaformat_new();
QMediaFormat* q_mediaformat_new2(void* other);
QMediaFormat* q_mediaformat_new3(int64_t format);
void q_mediaformat_operator_assign(void* self, void* other);
void q_mediaformat_swap(void* self, void* other);
int64_t q_mediaformat_file_format(void* self);
void q_mediaformat_set_file_format(void* self, int64_t f);
void q_mediaformat_set_video_codec(void* self, int64_t codec);
int64_t q_mediaformat_video_codec(void* self);
void q_mediaformat_set_audio_codec(void* self, int64_t codec);
int64_t q_mediaformat_audio_codec(void* self);
bool q_mediaformat_is_supported(void* self, int64_t mode);
QMimeType* q_mediaformat_mime_type(void* self);
libqt_list /* of int64_t */ q_mediaformat_supported_file_formats(void* self, int64_t m);
libqt_list /* of int64_t */ q_mediaformat_supported_video_codecs(void* self, int64_t m);
libqt_list /* of int64_t */ q_mediaformat_supported_audio_codecs(void* self, int64_t m);
const char* q_mediaformat_file_format_name(int64_t fileFormat);
const char* q_mediaformat_audio_codec_name(int64_t codec);
const char* q_mediaformat_video_codec_name(int64_t codec);
const char* q_mediaformat_file_format_description(int64_t fileFormat);
const char* q_mediaformat_audio_codec_description(int64_t codec);
const char* q_mediaformat_video_codec_description(int64_t codec);
bool q_mediaformat_operator_equal(void* self, void* other);
bool q_mediaformat_operator_not_equal(void* self, void* other);
void q_mediaformat_resolve_for_encoding(void* self, int64_t flags);
void q_mediaformat_delete(void* self);

/// https://doc.qt.io/qt-6/qmediaformat.html#types

typedef enum {
    QMEDIAFORMAT_FILEFORMAT_UNSPECIFIEDFORMAT = -1,
    QMEDIAFORMAT_FILEFORMAT_WMV = 0,
    QMEDIAFORMAT_FILEFORMAT_AVI = 1,
    QMEDIAFORMAT_FILEFORMAT_MATROSKA = 2,
    QMEDIAFORMAT_FILEFORMAT_MPEG4 = 3,
    QMEDIAFORMAT_FILEFORMAT_OGG = 4,
    QMEDIAFORMAT_FILEFORMAT_QUICKTIME = 5,
    QMEDIAFORMAT_FILEFORMAT_WEBM = 6,
    QMEDIAFORMAT_FILEFORMAT_MPEG4AUDIO = 7,
    QMEDIAFORMAT_FILEFORMAT_AAC = 8,
    QMEDIAFORMAT_FILEFORMAT_WMA = 9,
    QMEDIAFORMAT_FILEFORMAT_MP3 = 10,
    QMEDIAFORMAT_FILEFORMAT_FLAC = 11,
    QMEDIAFORMAT_FILEFORMAT_WAVE = 12,
    QMEDIAFORMAT_FILEFORMAT_LASTFILEFORMAT = 12
} QMediaFormat__FileFormat;

typedef enum {
    QMEDIAFORMAT_AUDIOCODEC_UNSPECIFIED = -1,
    QMEDIAFORMAT_AUDIOCODEC_MP3 = 0,
    QMEDIAFORMAT_AUDIOCODEC_AAC = 1,
    QMEDIAFORMAT_AUDIOCODEC_AC3 = 2,
    QMEDIAFORMAT_AUDIOCODEC_EAC3 = 3,
    QMEDIAFORMAT_AUDIOCODEC_FLAC = 4,
    QMEDIAFORMAT_AUDIOCODEC_DOLBYTRUEHD = 5,
    QMEDIAFORMAT_AUDIOCODEC_OPUS = 6,
    QMEDIAFORMAT_AUDIOCODEC_VORBIS = 7,
    QMEDIAFORMAT_AUDIOCODEC_WAVE = 8,
    QMEDIAFORMAT_AUDIOCODEC_WMA = 9,
    QMEDIAFORMAT_AUDIOCODEC_ALAC = 10,
    QMEDIAFORMAT_AUDIOCODEC_LASTAUDIOCODEC = 10
} QMediaFormat__AudioCodec;

typedef enum {
    QMEDIAFORMAT_VIDEOCODEC_UNSPECIFIED = -1,
    QMEDIAFORMAT_VIDEOCODEC_MPEG1 = 0,
    QMEDIAFORMAT_VIDEOCODEC_MPEG2 = 1,
    QMEDIAFORMAT_VIDEOCODEC_MPEG4 = 2,
    QMEDIAFORMAT_VIDEOCODEC_H264 = 3,
    QMEDIAFORMAT_VIDEOCODEC_H265 = 4,
    QMEDIAFORMAT_VIDEOCODEC_VP8 = 5,
    QMEDIAFORMAT_VIDEOCODEC_VP9 = 6,
    QMEDIAFORMAT_VIDEOCODEC_AV1 = 7,
    QMEDIAFORMAT_VIDEOCODEC_THEORA = 8,
    QMEDIAFORMAT_VIDEOCODEC_WMV = 9,
    QMEDIAFORMAT_VIDEOCODEC_MOTIONJPEG = 10,
    QMEDIAFORMAT_VIDEOCODEC_LASTVIDEOCODEC = 10
} QMediaFormat__VideoCodec;

typedef enum {
    QMEDIAFORMAT_CONVERSIONMODE_ENCODE = 0,
    QMEDIAFORMAT_CONVERSIONMODE_DECODE = 1
} QMediaFormat__ConversionMode;

typedef enum {
    QMEDIAFORMAT_RESOLVEFLAGS_NOFLAGS = 0,
    QMEDIAFORMAT_RESOLVEFLAGS_REQUIRESVIDEO = 1
} QMediaFormat__ResolveFlags;

#endif
