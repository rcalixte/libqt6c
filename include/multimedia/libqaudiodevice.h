#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIODEVICE_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiodevice.html

/// q_audiodevice_new constructs a new QAudioDevice object.
///
///
QAudioDevice* q_audiodevice_new();

/// q_audiodevice_new2 constructs a new QAudioDevice object.
///
/// ``` QAudioDevice* other ```
QAudioDevice* q_audiodevice_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#swap)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
void q_audiodevice_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#operator=)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
void q_audiodevice_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#operator==)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
bool q_audiodevice_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#operator!=)
///
/// ``` QAudioDevice* self, QAudioDevice* other ```
bool q_audiodevice_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
///
/// ``` QAudioDevice* self ```
bool q_audiodevice_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#id)
///
/// ``` QAudioDevice* self ```
char* q_audiodevice_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#description)
///
/// ``` QAudioDevice* self ```
const char* q_audiodevice_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
///
/// ``` QAudioDevice* self ```
bool q_audiodevice_is_default(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#mode)
///
/// ``` QAudioDevice* self ```
int64_t q_audiodevice_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
///
/// ``` QAudioDevice* self, QAudioFormat* format ```
bool q_audiodevice_is_format_supported(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
///
/// ``` QAudioDevice* self ```
QAudioFormat* q_audiodevice_preferred_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_minimum_sample_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_maximum_sample_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_minimum_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
///
/// ``` QAudioDevice* self ```
int32_t q_audiodevice_maximum_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#supportedSampleFormats)
///
/// ``` QAudioDevice* self ```
libqt_list /* of int64_t */ q_audiodevice_supported_sample_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#channelConfiguration)
///
/// ``` QAudioDevice* self ```
int64_t q_audiodevice_channel_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodevice.html#dtor.QAudioDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioDevice* self ```
void q_audiodevice_delete(void* self);

/// https://doc.qt.io/qt-6/qaudiodevice.html#types

typedef enum {
    QAUDIODEVICE_MODE_NULL = 0,
    QAUDIODEVICE_MODE_INPUT = 1,
    QAUDIODEVICE_MODE_OUTPUT = 2
} QAudioDevice__Mode;

#endif
