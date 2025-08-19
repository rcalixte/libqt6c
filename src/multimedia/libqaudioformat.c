#include "libqaudioformat.hpp"
#include "libqaudioformat.h"

QAudioFormat* q_audioformat_new(void* other) {
    return QAudioFormat_new((QAudioFormat*)other);
}

QAudioFormat* q_audioformat_new2(void* other) {
    return QAudioFormat_new2((QAudioFormat*)other);
}

QAudioFormat* q_audioformat_new3() {
    return QAudioFormat_new3();
}

QAudioFormat* q_audioformat_new4(void* param1) {
    return QAudioFormat_new4((QAudioFormat*)param1);
}

void q_audioformat_copy_assign(void* self, void* other) {
    QAudioFormat_CopyAssign((QAudioFormat*)self, (QAudioFormat*)other);
}

void q_audioformat_move_assign(void* self, void* other) {
    QAudioFormat_MoveAssign((QAudioFormat*)self, (QAudioFormat*)other);
}

bool q_audioformat_is_valid(void* self) {
    return QAudioFormat_IsValid((QAudioFormat*)self);
}

void q_audioformat_set_sample_rate(void* self, int sampleRate) {
    QAudioFormat_SetSampleRate((QAudioFormat*)self, sampleRate);
}

int32_t q_audioformat_sample_rate(void* self) {
    return QAudioFormat_SampleRate((QAudioFormat*)self);
}

void q_audioformat_set_channel_config(void* self, uint32_t config) {
    QAudioFormat_SetChannelConfig((QAudioFormat*)self, config);
}

uint32_t q_audioformat_channel_config(void* self) {
    return QAudioFormat_ChannelConfig((QAudioFormat*)self);
}

void q_audioformat_set_channel_count(void* self, int channelCount) {
    QAudioFormat_SetChannelCount((QAudioFormat*)self, channelCount);
}

int32_t q_audioformat_channel_count(void* self) {
    return QAudioFormat_ChannelCount((QAudioFormat*)self);
}

int32_t q_audioformat_channel_offset(void* self, int32_t channel) {
    return QAudioFormat_ChannelOffset((QAudioFormat*)self, channel);
}

void q_audioformat_set_sample_format(void* self, uint16_t f) {
    QAudioFormat_SetSampleFormat((QAudioFormat*)self, f);
}

uint16_t q_audioformat_sample_format(void* self) {
    return QAudioFormat_SampleFormat((QAudioFormat*)self);
}

int32_t q_audioformat_bytes_for_duration(void* self, long long microseconds) {
    return QAudioFormat_BytesForDuration((QAudioFormat*)self, microseconds);
}

long long q_audioformat_duration_for_bytes(void* self, int byteCount) {
    return QAudioFormat_DurationForBytes((QAudioFormat*)self, byteCount);
}

int32_t q_audioformat_bytes_for_frames(void* self, int frameCount) {
    return QAudioFormat_BytesForFrames((QAudioFormat*)self, frameCount);
}

int32_t q_audioformat_frames_for_bytes(void* self, int byteCount) {
    return QAudioFormat_FramesForBytes((QAudioFormat*)self, byteCount);
}

int32_t q_audioformat_frames_for_duration(void* self, long long microseconds) {
    return QAudioFormat_FramesForDuration((QAudioFormat*)self, microseconds);
}

long long q_audioformat_duration_for_frames(void* self, int frameCount) {
    return QAudioFormat_DurationForFrames((QAudioFormat*)self, frameCount);
}

int32_t q_audioformat_bytes_per_frame(void* self) {
    return QAudioFormat_BytesPerFrame((QAudioFormat*)self);
}

int32_t q_audioformat_bytes_per_sample(void* self) {
    return QAudioFormat_BytesPerSample((QAudioFormat*)self);
}

float q_audioformat_normalized_sample_value(void* self, void* sample) {
    return QAudioFormat_NormalizedSampleValue((QAudioFormat*)self, sample);
}

uint32_t q_audioformat_default_channel_config_for_channel_count(int channelCount) {
    return QAudioFormat_DefaultChannelConfigForChannelCount(channelCount);
}

void q_audioformat_delete(void* self) {
    QAudioFormat_Delete((QAudioFormat*)(self));
}
