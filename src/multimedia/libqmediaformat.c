#include "../libqmimetype.hpp"
#include <string.h>
#include "libqmediaformat.hpp"
#include "libqmediaformat.h"

/// https://doc.qt.io/qt-6/qmediaformat.html

/// q_mediaformat_new constructs a new QMediaFormat object.
///
///
QMediaFormat* q_mediaformat_new() {
    return QMediaFormat_new();
}

/// q_mediaformat_new2 constructs a new QMediaFormat object.
///
/// ``` QMediaFormat* other ```
QMediaFormat* q_mediaformat_new2(void* other) {
    return QMediaFormat_new2((QMediaFormat*)other);
}

/// q_mediaformat_new3 constructs a new QMediaFormat object.
///
/// ``` enum QMediaFormat__FileFormat format ```
QMediaFormat* q_mediaformat_new3(int64_t format) {
    return QMediaFormat_new3(format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#operator=)
///
/// ``` QMediaFormat* self, QMediaFormat* other ```
void q_mediaformat_operator_assign(void* self, void* other) {
    QMediaFormat_OperatorAssign((QMediaFormat*)self, (QMediaFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#swap)
///
/// ``` QMediaFormat* self, QMediaFormat* other ```
void q_mediaformat_swap(void* self, void* other) {
    QMediaFormat_Swap((QMediaFormat*)self, (QMediaFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#fileFormat)
///
/// ``` QMediaFormat* self ```
int64_t q_mediaformat_file_format(void* self) {
    return QMediaFormat_FileFormat((QMediaFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#setFileFormat)
///
/// ``` QMediaFormat* self, enum QMediaFormat__FileFormat f ```
void q_mediaformat_set_file_format(void* self, int64_t f) {
    QMediaFormat_SetFileFormat((QMediaFormat*)self, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#setVideoCodec)
///
/// ``` QMediaFormat* self, enum QMediaFormat__VideoCodec codec ```
void q_mediaformat_set_video_codec(void* self, int64_t codec) {
    QMediaFormat_SetVideoCodec((QMediaFormat*)self, codec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#videoCodec)
///
/// ``` QMediaFormat* self ```
int64_t q_mediaformat_video_codec(void* self) {
    return QMediaFormat_VideoCodec((QMediaFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#setAudioCodec)
///
/// ``` QMediaFormat* self, enum QMediaFormat__AudioCodec codec ```
void q_mediaformat_set_audio_codec(void* self, int64_t codec) {
    QMediaFormat_SetAudioCodec((QMediaFormat*)self, codec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#audioCodec)
///
/// ``` QMediaFormat* self ```
int64_t q_mediaformat_audio_codec(void* self) {
    return QMediaFormat_AudioCodec((QMediaFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#isSupported)
///
/// ``` QMediaFormat* self, enum QMediaFormat__ConversionMode mode ```
bool q_mediaformat_is_supported(void* self, int64_t mode) {
    return QMediaFormat_IsSupported((QMediaFormat*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#mimeType)
///
/// ``` QMediaFormat* self ```
QMimeType* q_mediaformat_mime_type(void* self) {
    return QMediaFormat_MimeType((QMediaFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#supportedFileFormats)
///
/// ``` QMediaFormat* self, enum QMediaFormat__ConversionMode m ```
libqt_list /* of int64_t */ q_mediaformat_supported_file_formats(void* self, int64_t m) {
    libqt_list _arr = QMediaFormat_SupportedFileFormats((QMediaFormat*)self, m);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#supportedVideoCodecs)
///
/// ``` QMediaFormat* self, enum QMediaFormat__ConversionMode m ```
libqt_list /* of int64_t */ q_mediaformat_supported_video_codecs(void* self, int64_t m) {
    libqt_list _arr = QMediaFormat_SupportedVideoCodecs((QMediaFormat*)self, m);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#supportedAudioCodecs)
///
/// ``` QMediaFormat* self, enum QMediaFormat__ConversionMode m ```
libqt_list /* of int64_t */ q_mediaformat_supported_audio_codecs(void* self, int64_t m) {
    libqt_list _arr = QMediaFormat_SupportedAudioCodecs((QMediaFormat*)self, m);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatName)
///
/// ``` enum QMediaFormat__FileFormat fileFormat ```
const char* q_mediaformat_file_format_name(int64_t fileFormat) {
    libqt_string _str = QMediaFormat_FileFormatName(fileFormat);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecName)
///
/// ``` enum QMediaFormat__AudioCodec codec ```
const char* q_mediaformat_audio_codec_name(int64_t codec) {
    libqt_string _str = QMediaFormat_AudioCodecName(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecName)
///
/// ``` enum QMediaFormat__VideoCodec codec ```
const char* q_mediaformat_video_codec_name(int64_t codec) {
    libqt_string _str = QMediaFormat_VideoCodecName(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatDescription)
///
/// ``` enum QMediaFormat__FileFormat fileFormat ```
const char* q_mediaformat_file_format_description(int64_t fileFormat) {
    libqt_string _str = QMediaFormat_FileFormatDescription(fileFormat);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecDescription)
///
/// ``` enum QMediaFormat__AudioCodec codec ```
const char* q_mediaformat_audio_codec_description(int64_t codec) {
    libqt_string _str = QMediaFormat_AudioCodecDescription(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecDescription)
///
/// ``` enum QMediaFormat__VideoCodec codec ```
const char* q_mediaformat_video_codec_description(int64_t codec) {
    libqt_string _str = QMediaFormat_VideoCodecDescription(codec);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#operator==)
///
/// ``` QMediaFormat* self, QMediaFormat* other ```
bool q_mediaformat_operator_equal(void* self, void* other) {
    return QMediaFormat_OperatorEqual((QMediaFormat*)self, (QMediaFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#operator!=)
///
/// ``` QMediaFormat* self, QMediaFormat* other ```
bool q_mediaformat_operator_not_equal(void* self, void* other) {
    return QMediaFormat_OperatorNotEqual((QMediaFormat*)self, (QMediaFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#resolveForEncoding)
///
/// ``` QMediaFormat* self, enum QMediaFormat__ResolveFlags flags ```
void q_mediaformat_resolve_for_encoding(void* self, int64_t flags) {
    QMediaFormat_ResolveForEncoding((QMediaFormat*)self, flags);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaFormat* self ```
void q_mediaformat_delete(void* self) {
    QMediaFormat_Delete((QMediaFormat*)(self));
}