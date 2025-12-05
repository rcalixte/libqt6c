#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQAUDIOFORMAT_H
#define SRC_MULTIMEDIA_QT6C_LIBQAUDIOFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)

/// q_audioformat_new constructs a new QAudioFormat object.
///
/// @param other QAudioFormat*
///
QAudioFormat* q_audioformat_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)

/// q_audioformat_new2 constructs a new QAudioFormat object and invalidates the source QAudioFormat object.
///
/// @param other QAudioFormat*
///
QAudioFormat* q_audioformat_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)

/// q_audioformat_new3 constructs a new QAudioFormat object.
///
QAudioFormat* q_audioformat_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)

/// q_audioformat_new4 constructs a new QAudioFormat object.
///
/// @param param1 QAudioFormat*
///
QAudioFormat* q_audioformat_new4(void* param1);

/// q_audioformat_copy_assign shallow copies `other` into `self`.
///
/// @param self QAudioFormat*
/// @param other QAudioFormat*
///
void q_audioformat_copy_assign(void* self, void* other);

/// q_audioformat_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAudioFormat*
/// @param other QAudioFormat*
///
void q_audioformat_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#isValid)
///
/// @param self QAudioFormat*
///
bool q_audioformat_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setSampleRate)
///
/// @param self QAudioFormat*
/// @param sampleRate int
///
void q_audioformat_set_sample_rate(void* self, int sampleRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#sampleRate)
///
/// @param self QAudioFormat*
///
int32_t q_audioformat_sample_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setChannelConfig)
///
/// @param self QAudioFormat*
/// @param config enum QAudioFormat__ChannelConfig
///
void q_audioformat_set_channel_config(void* self, uint32_t config);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelConfig)
///
/// @param self QAudioFormat*
///
/// @return enum QAudioFormat__ChannelConfig
///
uint32_t q_audioformat_channel_config(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setChannelCount)
///
/// @param self QAudioFormat*
/// @param channelCount int
///
void q_audioformat_set_channel_count(void* self, int channelCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelCount)
///
/// @param self QAudioFormat*
///
int32_t q_audioformat_channel_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelOffset)
///
/// @param self QAudioFormat*
/// @param channel enum QAudioFormat__AudioChannelPosition
///
int32_t q_audioformat_channel_offset(void* self, int32_t channel);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setSampleFormat)
///
/// @param self QAudioFormat*
/// @param f enum QAudioFormat__SampleFormat
///
void q_audioformat_set_sample_format(void* self, uint16_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#sampleFormat)
///
/// @param self QAudioFormat*
///
/// @return enum QAudioFormat__SampleFormat
///
uint16_t q_audioformat_sample_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesForDuration)
///
/// @param self QAudioFormat*
/// @param microseconds long long
///
int32_t q_audioformat_bytes_for_duration(void* self, long long microseconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#durationForBytes)
///
/// @param self QAudioFormat*
/// @param byteCount int
///
long long q_audioformat_duration_for_bytes(void* self, int byteCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesForFrames)
///
/// @param self QAudioFormat*
/// @param frameCount int
///
int32_t q_audioformat_bytes_for_frames(void* self, int frameCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#framesForBytes)
///
/// @param self QAudioFormat*
/// @param byteCount int
///
int32_t q_audioformat_frames_for_bytes(void* self, int byteCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#framesForDuration)
///
/// @param self QAudioFormat*
/// @param microseconds long long
///
int32_t q_audioformat_frames_for_duration(void* self, long long microseconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#durationForFrames)
///
/// @param self QAudioFormat*
/// @param frameCount int
///
long long q_audioformat_duration_for_frames(void* self, int frameCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerFrame)
///
/// @param self QAudioFormat*
///
int32_t q_audioformat_bytes_per_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerSample)
///
/// @param self QAudioFormat*
///
int32_t q_audioformat_bytes_per_sample(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#normalizedSampleValue)
///
/// @param self QAudioFormat*
/// @param sample void*
///
float q_audioformat_normalized_sample_value(void* self, void* sample);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#defaultChannelConfigForChannelCount)
///
/// @param channelCount int
///
/// @return enum QAudioFormat__ChannelConfig
///
uint32_t q_audioformat_default_channel_config_for_channel_count(int channelCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#dtor.QAudioFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioFormat*
///
void q_audioformat_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#public-types)

typedef enum {
    QAUDIOFORMAT_SAMPLEFORMAT_UNKNOWN = 0,
    QAUDIOFORMAT_SAMPLEFORMAT_UINT8 = 1,
    QAUDIOFORMAT_SAMPLEFORMAT_INT16 = 2,
    QAUDIOFORMAT_SAMPLEFORMAT_INT32 = 3,
    QAUDIOFORMAT_SAMPLEFORMAT_FLOAT = 4,
    QAUDIOFORMAT_SAMPLEFORMAT_NSAMPLEFORMATS = 5
} QAudioFormat__SampleFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#public-types)

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
