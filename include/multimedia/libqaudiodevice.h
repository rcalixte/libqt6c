#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQAUDIODEVICE_H
#define SRC_MULTIMEDIA_QT6C_LIBQAUDIODEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html)

/// q_audiodevice_new constructs a new QAudioDevice object.
///
QAudioDevice* q_audiodevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html)

/// q_audiodevice_new2 constructs a new QAudioDevice object.
///
/// @param other QAudioDevice*
///
QAudioDevice* q_audiodevice_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#swap)
///
/// @param self QAudioDevice*
/// @param other QAudioDevice*
///
void q_audiodevice_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq)
///
/// @param self QAudioDevice*
/// @param other QAudioDevice*
///
void q_audiodevice_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq-eq)
///
/// @param self QAudioDevice*
/// @param other QAudioDevice*
///
bool q_audiodevice_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-not-eq)
///
/// @param self QAudioDevice*
/// @param other QAudioDevice*
///
bool q_audiodevice_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
///
/// @param self QAudioDevice*
///
bool q_audiodevice_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioDevice*
///
char* q_audiodevice_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioDevice*
///
const char* q_audiodevice_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
///
/// @param self QAudioDevice*
///
bool q_audiodevice_is_default(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#mode)
///
/// @param self QAudioDevice*
///
/// @return enum QAudioDevice__Mode
///
int32_t q_audiodevice_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
///
/// @param self QAudioDevice*
/// @param format QAudioFormat*
///
bool q_audiodevice_is_format_supported(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
///
/// @param self QAudioDevice*
///
QAudioFormat* q_audiodevice_preferred_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
///
/// @param self QAudioDevice*
///
int32_t q_audiodevice_minimum_sample_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
///
/// @param self QAudioDevice*
///
int32_t q_audiodevice_maximum_sample_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
///
/// @param self QAudioDevice*
///
int32_t q_audiodevice_minimum_channel_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
///
/// @param self QAudioDevice*
///
int32_t q_audiodevice_maximum_channel_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#supportedSampleFormats)
///
/// @param self QAudioDevice*
///
/// @return libqt_list of enum QAudioFormat__SampleFormat
///
libqt_list /* of uint16_t */ q_audiodevice_supported_sample_formats(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#channelConfiguration)
///
/// @param self QAudioDevice*
///
/// @return enum QAudioFormat__ChannelConfig
///
uint32_t q_audiodevice_channel_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#dtor.QAudioDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioDevice*
///
void q_audiodevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#public-types)

typedef enum {
    QAUDIODEVICE_MODE_NULL = 0,
    QAUDIODEVICE_MODE_INPUT = 1,
    QAUDIODEVICE_MODE_OUTPUT = 2
} QAudioDevice__Mode;

#endif
