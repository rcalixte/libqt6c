#include "libqaudioformat.hpp"
#include <string.h>
#include "libqaudiodevice.hpp"
#include "libqaudiodevice.h"

/// https://doc.qt.io/qt-6/qaudiodevice.html

/// q_audiodevice_new constructs a new QAudioDevice object.
///
///
QAudioDevice* q_audiodevice_new() {
    return QAudioDevice_new();
}

/// q_audiodevice_new2 constructs a new QAudioDevice object.
///
/// ``` QAudioDevice* other ```
QAudioDevice* q_audiodevice_new2(void* other) {
    return QAudioDevice_new2((QAudioDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#swap)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
void q_audiodevice_swap(void* self, void* other) {
    QAudioDevice_Swap((QAudioDevice*)self, (QAudioDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#operator=)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
void q_audiodevice_operator_assign(void* self, void* other) {
    QAudioDevice_OperatorAssign((QAudioDevice*)self, (QAudioDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#operator==)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
bool q_audiodevice_operator_equal(void* self, void* other) {
    return QAudioDevice_OperatorEqual((QAudioDevice*)self, (QAudioDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#operator!=)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
bool q_audiodevice_operator_not_equal(void* self, void* other) {
    return QAudioDevice_OperatorNotEqual((QAudioDevice*)self, (QAudioDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
///
/// ``` QAudioDevice* self ```
bool q_audiodevice_is_null(void* self) {
    return QAudioDevice_IsNull((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#id)
///
/// ``` QAudioDevice* self ```
char* q_audiodevice_id(void* self) {
    libqt_string _str = QAudioDevice_Id((QAudioDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#description)
///
/// ``` QAudioDevice* self ```
const char* q_audiodevice_description(void* self) {
    libqt_string _str = QAudioDevice_Description((QAudioDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
///
/// ``` QAudioDevice* self ```
bool q_audiodevice_is_default(void* self) {
    return QAudioDevice_IsDefault((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#mode)
///
/// ``` QAudioDevice* self ```
int64_t q_audiodevice_mode(void* self) {
    return QAudioDevice_Mode((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
///
/// ``` QAudioDevice* self, QAudioFormat* format ```
bool q_audiodevice_is_format_supported(void* self, void* format) {
    return QAudioDevice_IsFormatSupported((QAudioDevice*)self, (QAudioFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
///
/// ``` QAudioDevice* self ```
QAudioFormat* q_audiodevice_preferred_format(void* self) {
    return QAudioDevice_PreferredFormat((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_minimum_sample_rate(void* self) {
    return QAudioDevice_MinimumSampleRate((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_maximum_sample_rate(void* self) {
    return QAudioDevice_MaximumSampleRate((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_minimum_channel_count(void* self) {
    return QAudioDevice_MinimumChannelCount((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_maximum_channel_count(void* self) {
    return QAudioDevice_MaximumChannelCount((QAudioDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#supportedSampleFormats)
///
/// ``` QAudioDevice* self ```
libqt_list /* of int64_t */ q_audiodevice_supported_sample_formats(void* self) {
    libqt_list _arr = QAudioDevice_SupportedSampleFormats((QAudioDevice*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#channelConfiguration)
///
/// ``` QAudioDevice* self ```
int64_t q_audiodevice_channel_configuration(void* self) {
    return QAudioDevice_ChannelConfiguration((QAudioDevice*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioDevice* self ```
void q_audiodevice_delete(void* self) {
    QAudioDevice_Delete((QAudioDevice*)(self));
}