#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFER_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiobuffer.html

/// q_audiobuffer_new constructs a new QAudioBuffer object.
///
///
QAudioBuffer* q_audiobuffer_new();

/// q_audiobuffer_new2 constructs a new QAudioBuffer object.
///
/// ``` QAudioBuffer* other ```
QAudioBuffer* q_audiobuffer_new2(void* other);

/// q_audiobuffer_new3 constructs a new QAudioBuffer object.
///
/// ``` const char* data, QAudioFormat* format ```
QAudioBuffer* q_audiobuffer_new3(const char* data, void* format);

/// q_audiobuffer_new4 constructs a new QAudioBuffer object.
///
/// ``` int numFrames, QAudioFormat* format ```
QAudioBuffer* q_audiobuffer_new4(int numFrames, void* format);

/// q_audiobuffer_new5 constructs a new QAudioBuffer object.
///
/// ``` const char* data, QAudioFormat* format, long long startTime ```
QAudioBuffer* q_audiobuffer_new5(const char* data, void* format, long long startTime);

/// q_audiobuffer_new6 constructs a new QAudioBuffer object.
///
/// ``` int numFrames, QAudioFormat* format, long long startTime ```
QAudioBuffer* q_audiobuffer_new6(int numFrames, void* format, long long startTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#operator=)
///
/// ``` QAudioBuffer* self, QAudioBuffer* other ```
void q_audiobuffer_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
///
/// ``` QAudioBuffer* self, QAudioBuffer* other ```
void q_audiobuffer_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
///
/// ``` QAudioBuffer* self ```
bool q_audiobuffer_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
///
/// ``` QAudioBuffer* self ```
void q_audiobuffer_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
///
/// ``` QAudioBuffer* self ```
QAudioFormat* q_audiobuffer_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
///
/// ``` QAudioBuffer* self ```
int64_t q_audiobuffer_frame_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
///
/// ``` QAudioBuffer* self ```
int64_t q_audiobuffer_sample_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
///
/// ``` QAudioBuffer* self ```
int64_t q_audiobuffer_byte_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
///
/// ``` QAudioBuffer* self ```
long long q_audiobuffer_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
///
/// ``` QAudioBuffer* self ```
long long q_audiobuffer_start_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#dtor.QAudioBuffer)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioBuffer* self ```
void q_audiobuffer_delete(void* self);

#endif
