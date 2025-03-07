#include "libqaudioformat.hpp"
#include "libqaudioformat.h"

/// https://doc.qt.io/qt-6/qaudioformat.html

/// q_audioformat_new constructs a new QAudioFormat object.
///
/// ``` QAudioFormat* other ```
QAudioFormat* q_audioformat_new(void* other) {
    return QAudioFormat_new((QAudioFormat*)other);
}

/// q_audioformat_new2 constructs a new QAudioFormat object and invalidates the source QAudioFormat object.
///
/// ``` QAudioFormat* other ```
QAudioFormat* q_audioformat_new2(void* other) {
    return QAudioFormat_new2((QAudioFormat*)other);
}

/// q_audioformat_new3 constructs a new QAudioFormat object.
///
///
QAudioFormat* q_audioformat_new3() {
    return QAudioFormat_new3();
}

/// q_audioformat_new4 constructs a new QAudioFormat object.
///
/// ``` QAudioFormat* param1 ```
QAudioFormat* q_audioformat_new4(void* param1) {
    return QAudioFormat_new4((QAudioFormat*)param1);
}

/// q_audioformat_copy_assign shallow copies `other` into `self`.
///
/// ``` QAudioFormat* self, QAudioFormat* other ```
void q_audioformat_copy_assign(void* self, void* other) {
    QAudioFormat_CopyAssign((QAudioFormat*)self, (QAudioFormat*)other);
}

/// q_audioformat_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAudioFormat* self, QAudioFormat* other ```
void q_audioformat_move_assign(void* self, void* other) {
    QAudioFormat_MoveAssign((QAudioFormat*)self, (QAudioFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#isValid)
///
/// ``` QAudioFormat* self ```
bool q_audioformat_is_valid(void* self) {
    return QAudioFormat_IsValid((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#setSampleRate)
///
/// ``` QAudioFormat* self, int sampleRate ```
void q_audioformat_set_sample_rate(void* self, int sampleRate) {
    QAudioFormat_SetSampleRate((QAudioFormat*)self, sampleRate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#sampleRate)
///
/// ``` QAudioFormat* self ```
int32_t q_audioformat_sample_rate(void* self) {
    return QAudioFormat_SampleRate((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#setChannelConfig)
///
/// ``` QAudioFormat* self, enum QAudioFormat__ChannelConfig config ```
void q_audioformat_set_channel_config(void* self, int64_t config) {
    QAudioFormat_SetChannelConfig((QAudioFormat*)self, config);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#channelConfig)
///
/// ``` QAudioFormat* self ```
int64_t q_audioformat_channel_config(void* self) {
    return QAudioFormat_ChannelConfig((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#setChannelCount)
///
/// ``` QAudioFormat* self, int channelCount ```
void q_audioformat_set_channel_count(void* self, int channelCount) {
    QAudioFormat_SetChannelCount((QAudioFormat*)self, channelCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#channelCount)
///
/// ``` QAudioFormat* self ```
int32_t q_audioformat_channel_count(void* self) {
    return QAudioFormat_ChannelCount((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#channelOffset)
///
/// ``` QAudioFormat* self, enum QAudioFormat__AudioChannelPosition channel ```
int32_t q_audioformat_channel_offset(void* self, int64_t channel) {
    return QAudioFormat_ChannelOffset((QAudioFormat*)self, channel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#setSampleFormat)
///
/// ``` QAudioFormat* self, enum QAudioFormat__SampleFormat f ```
void q_audioformat_set_sample_format(void* self, int64_t f) {
    QAudioFormat_SetSampleFormat((QAudioFormat*)self, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#sampleFormat)
///
/// ``` QAudioFormat* self ```
int64_t q_audioformat_sample_format(void* self) {
    return QAudioFormat_SampleFormat((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#bytesForDuration)
///
/// ``` QAudioFormat* self, long long microseconds ```
int32_t q_audioformat_bytes_for_duration(void* self, long long microseconds) {
    return QAudioFormat_BytesForDuration((QAudioFormat*)self, microseconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#durationForBytes)
///
/// ``` QAudioFormat* self, int byteCount ```
long long q_audioformat_duration_for_bytes(void* self, int byteCount) {
    return QAudioFormat_DurationForBytes((QAudioFormat*)self, byteCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#bytesForFrames)
///
/// ``` QAudioFormat* self, int frameCount ```
int32_t q_audioformat_bytes_for_frames(void* self, int frameCount) {
    return QAudioFormat_BytesForFrames((QAudioFormat*)self, frameCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#framesForBytes)
///
/// ``` QAudioFormat* self, int byteCount ```
int32_t q_audioformat_frames_for_bytes(void* self, int byteCount) {
    return QAudioFormat_FramesForBytes((QAudioFormat*)self, byteCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#framesForDuration)
///
/// ``` QAudioFormat* self, long long microseconds ```
int32_t q_audioformat_frames_for_duration(void* self, long long microseconds) {
    return QAudioFormat_FramesForDuration((QAudioFormat*)self, microseconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#durationForFrames)
///
/// ``` QAudioFormat* self, int frameCount ```
long long q_audioformat_duration_for_frames(void* self, int frameCount) {
    return QAudioFormat_DurationForFrames((QAudioFormat*)self, frameCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerFrame)
///
/// ``` QAudioFormat* self ```
int32_t q_audioformat_bytes_per_frame(void* self) {
    return QAudioFormat_BytesPerFrame((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerSample)
///
/// ``` QAudioFormat* self ```
int32_t q_audioformat_bytes_per_sample(void* self) {
    return QAudioFormat_BytesPerSample((QAudioFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#normalizedSampleValue)
///
/// ``` QAudioFormat* self, void* sample ```
float q_audioformat_normalized_sample_value(void* self, void* sample) {
    return QAudioFormat_NormalizedSampleValue((QAudioFormat*)self, sample);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioformat.html#defaultChannelConfigForChannelCount)
///
/// ``` int channelCount ```
int64_t q_audioformat_default_channel_config_for_channel_count(int channelCount) {
    return QAudioFormat_DefaultChannelConfigForChannelCount(channelCount);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioFormat* self ```
void q_audioformat_delete(void* self) {
    QAudioFormat_Delete((QAudioFormat*)(self));
}