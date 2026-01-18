#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQMEDIAFORMAT_H
#define SRC_MULTIMEDIA_QT6C_LIBQMEDIAFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html)

/// q_mediaformat_new constructs a new QMediaFormat object.
///
QMediaFormat* q_mediaformat_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html)

/// q_mediaformat_new2 constructs a new QMediaFormat object.
///
/// @param other QMediaFormat*
///
QMediaFormat* q_mediaformat_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html)

/// q_mediaformat_new3 constructs a new QMediaFormat object.
///
/// @param format enum QMediaFormat__FileFormat
///
QMediaFormat* q_mediaformat_new3(int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq)
///
/// @param self QMediaFormat*
/// @param other QMediaFormat*
///
void q_mediaformat_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#swap)
///
/// @param self QMediaFormat*
/// @param other QMediaFormat*
///
void q_mediaformat_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormat)
///
/// @param self QMediaFormat*
///
/// @return enum QMediaFormat__FileFormat
///
int32_t q_mediaformat_file_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setFileFormat)
///
/// @param self QMediaFormat*
/// @param f enum QMediaFormat__FileFormat
///
void q_mediaformat_set_file_format(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setVideoCodec)
///
/// @param self QMediaFormat*
/// @param codec enum QMediaFormat__VideoCodec
///
void q_mediaformat_set_video_codec(void* self, int32_t codec);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodec)
///
/// @param self QMediaFormat*
///
/// @return enum QMediaFormat__VideoCodec
///
int32_t q_mediaformat_video_codec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setAudioCodec)
///
/// @param self QMediaFormat*
/// @param codec enum QMediaFormat__AudioCodec
///
void q_mediaformat_set_audio_codec(void* self, int32_t codec);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodec)
///
/// @param self QMediaFormat*
///
/// @return enum QMediaFormat__AudioCodec
///
int32_t q_mediaformat_audio_codec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#isSupported)
///
/// @param self QMediaFormat*
/// @param mode enum QMediaFormat__ConversionMode
///
bool q_mediaformat_is_supported(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#mimeType)
///
/// @param self QMediaFormat*
///
QMimeType* q_mediaformat_mime_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedFileFormats)
///
/// @param self QMediaFormat*
/// @param m enum QMediaFormat__ConversionMode
///
/// @return libqt_list of enum QMediaFormat__FileFormat
///
libqt_list q_mediaformat_supported_file_formats(void* self, int32_t m);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedVideoCodecs)
///
/// @param self QMediaFormat*
/// @param m enum QMediaFormat__ConversionMode
///
/// @return libqt_list of enum QMediaFormat__VideoCodec
///
libqt_list q_mediaformat_supported_video_codecs(void* self, int32_t m);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedAudioCodecs)
///
/// @param self QMediaFormat*
/// @param m enum QMediaFormat__ConversionMode
///
/// @return libqt_list of enum QMediaFormat__AudioCodec
///
libqt_list q_mediaformat_supported_audio_codecs(void* self, int32_t m);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param fileFormat enum QMediaFormat__FileFormat
///
const char* q_mediaformat_file_format_name(int32_t fileFormat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param codec enum QMediaFormat__AudioCodec
///
const char* q_mediaformat_audio_codec_name(int32_t codec);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param codec enum QMediaFormat__VideoCodec
///
const char* q_mediaformat_video_codec_name(int32_t codec);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param fileFormat enum QMediaFormat__FileFormat
///
const char* q_mediaformat_file_format_description(int32_t fileFormat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param codec enum QMediaFormat__AudioCodec
///
const char* q_mediaformat_audio_codec_description(int32_t codec);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param codec enum QMediaFormat__VideoCodec
///
const char* q_mediaformat_video_codec_description(int32_t codec);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq-eq)
///
/// @param self QMediaFormat*
/// @param other QMediaFormat*
///
bool q_mediaformat_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-not-eq)
///
/// @param self QMediaFormat*
/// @param other QMediaFormat*
///
bool q_mediaformat_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#resolveForEncoding)
///
/// @param self QMediaFormat*
/// @param flags enum QMediaFormat__ResolveFlags
///
void q_mediaformat_resolve_for_encoding(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#dtor.QMediaFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QMediaFormat*
///
void q_mediaformat_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#public-types)

typedef enum {
    QMEDIAFORMAT_CONVERSIONMODE_ENCODE = 0,
    QMEDIAFORMAT_CONVERSIONMODE_DECODE = 1
} QMediaFormat__ConversionMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#public-types)

typedef enum {
    QMEDIAFORMAT_RESOLVEFLAGS_NOFLAGS = 0,
    QMEDIAFORMAT_RESOLVEFLAGS_REQUIRESVIDEO = 1
} QMediaFormat__ResolveFlags;

#endif
