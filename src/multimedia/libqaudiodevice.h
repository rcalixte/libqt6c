#pragma once
#ifndef MULTIMEDIA_LIBQAUDIODEVICE_H
#define MULTIMEDIA_LIBQAUDIODEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QAudioDevice* q_audiodevice_new2(const void* other);

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
void q_audiodevice_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq-eq)
///
/// @param self const QAudioDevice*
/// @param other QAudioDevice*
///
bool q_audiodevice_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-not-eq)
///
/// @param self const QAudioDevice*
/// @param other QAudioDevice*
///
bool q_audiodevice_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
///
/// @param self const QAudioDevice*
///
bool q_audiodevice_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAudioDevice*
///
char* q_audiodevice_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAudioDevice*
///
const char* q_audiodevice_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
///
/// @param self const QAudioDevice*
///
bool q_audiodevice_is_default(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#mode)
///
/// @param self const QAudioDevice*
///
/// @return enum QAudioDevice__Mode
///
int32_t q_audiodevice_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
///
/// @param self const QAudioDevice*
/// @param format QAudioFormat*
///
bool q_audiodevice_is_format_supported(const void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
///
/// @param self const QAudioDevice*
///
QAudioFormat* q_audiodevice_preferred_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
///
/// @param self const QAudioDevice*
///
int32_t q_audiodevice_minimum_sample_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
///
/// @param self const QAudioDevice*
///
int32_t q_audiodevice_maximum_sample_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
///
/// @param self const QAudioDevice*
///
int32_t q_audiodevice_minimum_channel_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
///
/// @param self const QAudioDevice*
///
int32_t q_audiodevice_maximum_channel_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#supportedSampleFormats)
///
/// @param self const QAudioDevice*
///
/// @return libqt_list of enum QAudioFormat__SampleFormat
///
libqt_list q_audiodevice_supported_sample_formats(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#channelConfiguration)
///
/// @param self const QAudioDevice*
///
/// @return enum QAudioFormat__ChannelConfig
///
uint32_t q_audiodevice_channel_configuration(const void* self);

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
