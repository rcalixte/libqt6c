#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOFORMAT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

QAudioFormat* q_audioformat_new(void* other);
QAudioFormat* q_audioformat_new2(void* other);
QAudioFormat* q_audioformat_new3();
QAudioFormat* q_audioformat_new4(void* param1);
void q_audioformat_copy_assign(void* self, void* other);
void q_audioformat_move_assign(void* self, void* other);
bool q_audioformat_is_valid(void* self);
void q_audioformat_set_sample_rate(void* self, int sampleRate);
int32_t q_audioformat_sample_rate(void* self);
void q_audioformat_set_channel_config(void* self, int64_t config);
int64_t q_audioformat_channel_config(void* self);
void q_audioformat_set_channel_count(void* self, int channelCount);
int32_t q_audioformat_channel_count(void* self);
int32_t q_audioformat_channel_offset(void* self, int64_t channel);
void q_audioformat_set_sample_format(void* self, int64_t f);
int64_t q_audioformat_sample_format(void* self);
int32_t q_audioformat_bytes_for_duration(void* self, long long microseconds);
long long q_audioformat_duration_for_bytes(void* self, int byteCount);
int32_t q_audioformat_bytes_for_frames(void* self, int frameCount);
int32_t q_audioformat_frames_for_bytes(void* self, int byteCount);
int32_t q_audioformat_frames_for_duration(void* self, long long microseconds);
long long q_audioformat_duration_for_frames(void* self, int frameCount);
int32_t q_audioformat_bytes_per_frame(void* self);
int32_t q_audioformat_bytes_per_sample(void* self);
float q_audioformat_normalized_sample_value(void* self, void* sample);
int64_t q_audioformat_default_channel_config_for_channel_count(int channelCount);
void q_audioformat_delete(void* self);

/// https://doc.qt.io/qt-6/qaudioformat.html#types

typedef enum {
    QAUDIOFORMAT_SAMPLEFORMAT_UNKNOWN = 0,
    QAUDIOFORMAT_SAMPLEFORMAT_UINT8 = 1,
    QAUDIOFORMAT_SAMPLEFORMAT_INT16 = 2,
    QAUDIOFORMAT_SAMPLEFORMAT_INT32 = 3,
    QAUDIOFORMAT_SAMPLEFORMAT_FLOAT = 4,
    QAUDIOFORMAT_SAMPLEFORMAT_NSAMPLEFORMATS = 5
} QAudioFormat__SampleFormat;

typedef enum {
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_UNKNOWNPOSITION = 0,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_FRONTLEFT = 1,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_FRONTRIGHT = 2,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_FRONTCENTER = 3,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_LFE = 4,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_BACKLEFT = 5,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_BACKRIGHT = 6,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_FRONTLEFTOFCENTER = 7,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_FRONTRIGHTOFCENTER = 8,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_BACKCENTER = 9,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_SIDELEFT = 10,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_SIDERIGHT = 11,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPCENTER = 12,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPFRONTLEFT = 13,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPFRONTCENTER = 14,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPFRONTRIGHT = 15,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPBACKLEFT = 16,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPBACKCENTER = 17,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPBACKRIGHT = 18,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_LFE2 = 19,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPSIDELEFT = 20,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_TOPSIDERIGHT = 21,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_BOTTOMFRONTCENTER = 22,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_BOTTOMFRONTLEFT = 23,
    QAUDIOFORMAT_AUDIOCHANNELPOSITION_BOTTOMFRONTRIGHT = 24
} QAudioFormat__AudioChannelPosition;

typedef enum {
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGUNKNOWN = 0,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGMONO = 8,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGSTEREO = 6,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIG2DOT1 = 22,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIG3DOT0 = 14,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIG3DOT1 = 30,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGSURROUND5DOT0 = 110,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGSURROUND5DOT1 = 126,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGSURROUND7DOT0 = 3182,
    QAUDIOFORMAT_CHANNELCONFIG_CHANNELCONFIGSURROUND7DOT1 = 3198
} QAudioFormat__ChannelConfig;

#endif
