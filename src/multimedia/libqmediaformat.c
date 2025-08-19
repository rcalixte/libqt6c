#include "../libqmimetype.hpp"
#include "libqmediaformat.hpp"
#include "libqmediaformat.h"

QMediaFormat* q_mediaformat_new() {
    return QMediaFormat_new();
}

QMediaFormat* q_mediaformat_new2(void* other) {
    return QMediaFormat_new2((QMediaFormat*)other);
}

QMediaFormat* q_mediaformat_new3(int32_t format) {
    return QMediaFormat_new3(format);
}

void q_mediaformat_operator_assign(void* self, void* other) {
    QMediaFormat_OperatorAssign((QMediaFormat*)self, (QMediaFormat*)other);
}

void q_mediaformat_swap(void* self, void* other) {
    QMediaFormat_Swap((QMediaFormat*)self, (QMediaFormat*)other);
}

int32_t q_mediaformat_file_format(void* self) {
    return QMediaFormat_FileFormat((QMediaFormat*)self);
}

void q_mediaformat_set_file_format(void* self, int32_t f) {
    QMediaFormat_SetFileFormat((QMediaFormat*)self, f);
}

void q_mediaformat_set_video_codec(void* self, int32_t codec) {
    QMediaFormat_SetVideoCodec((QMediaFormat*)self, codec);
}

int32_t q_mediaformat_video_codec(void* self) {
    return QMediaFormat_VideoCodec((QMediaFormat*)self);
}

void q_mediaformat_set_audio_codec(void* self, int32_t codec) {
    QMediaFormat_SetAudioCodec((QMediaFormat*)self, codec);
}

int32_t q_mediaformat_audio_codec(void* self) {
    return QMediaFormat_AudioCodec((QMediaFormat*)self);
}

bool q_mediaformat_is_supported(void* self, int32_t mode) {
    return QMediaFormat_IsSupported((QMediaFormat*)self, mode);
}

QMimeType* q_mediaformat_mime_type(void* self) {
    return QMediaFormat_MimeType((QMediaFormat*)self);
}

libqt_list /* of int32_t */ q_mediaformat_supported_file_formats(void* self, int32_t m) {
    libqt_list _arr = QMediaFormat_SupportedFileFormats((QMediaFormat*)self, m);
    return _arr;
}

libqt_list /* of int32_t */ q_mediaformat_supported_video_codecs(void* self, int32_t m) {
    libqt_list _arr = QMediaFormat_SupportedVideoCodecs((QMediaFormat*)self, m);
    return _arr;
}

libqt_list /* of int32_t */ q_mediaformat_supported_audio_codecs(void* self, int32_t m) {
    libqt_list _arr = QMediaFormat_SupportedAudioCodecs((QMediaFormat*)self, m);
    return _arr;
}

const char* q_mediaformat_file_format_name(int32_t fileFormat) {
    libqt_string _str = QMediaFormat_FileFormatName(fileFormat);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediaformat_audio_codec_name(int32_t codec) {
    libqt_string _str = QMediaFormat_AudioCodecName(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediaformat_video_codec_name(int32_t codec) {
    libqt_string _str = QMediaFormat_VideoCodecName(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediaformat_file_format_description(int32_t fileFormat) {
    libqt_string _str = QMediaFormat_FileFormatDescription(fileFormat);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediaformat_audio_codec_description(int32_t codec) {
    libqt_string _str = QMediaFormat_AudioCodecDescription(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediaformat_video_codec_description(int32_t codec) {
    libqt_string _str = QMediaFormat_VideoCodecDescription(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_mediaformat_operator_equal(void* self, void* other) {
    return QMediaFormat_OperatorEqual((QMediaFormat*)self, (QMediaFormat*)other);
}

bool q_mediaformat_operator_not_equal(void* self, void* other) {
    return QMediaFormat_OperatorNotEqual((QMediaFormat*)self, (QMediaFormat*)other);
}

void q_mediaformat_resolve_for_encoding(void* self, int32_t flags) {
    QMediaFormat_ResolveForEncoding((QMediaFormat*)self, flags);
}

void q_mediaformat_delete(void* self) {
    QMediaFormat_Delete((QMediaFormat*)(self));
}
