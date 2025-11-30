#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQAUDIOBUFFER_H
#define SRC_MULTIMEDIA_QT6C_LIBQAUDIOBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiobuffer.html

/// q_audiobuffer_new constructs a new QAudioBuffer object.
///
QAudioBuffer* q_audiobuffer_new();

/// q_audiobuffer_new2 constructs a new QAudioBuffer object.
///
/// @param other QAudioBuffer*
QAudioBuffer* q_audiobuffer_new2(void* other);

/// q_audiobuffer_new3 constructs a new QAudioBuffer object.
///
/// @param data const char*
/// @param format QAudioFormat*
QAudioBuffer* q_audiobuffer_new3(const char* data, void* format);

/// q_audiobuffer_new4 constructs a new QAudioBuffer object.
///
/// @param numFrames int
/// @param format QAudioFormat*
QAudioBuffer* q_audiobuffer_new4(int numFrames, void* format);

/// q_audiobuffer_new5 constructs a new QAudioBuffer object.
///
/// @param data const char*
/// @param format QAudioFormat*
/// @param startTime long long
QAudioBuffer* q_audiobuffer_new5(const char* data, void* format, long long startTime);

/// q_audiobuffer_new6 constructs a new QAudioBuffer object.
///
/// @param numFrames int
/// @param format QAudioFormat*
/// @param startTime long long
QAudioBuffer* q_audiobuffer_new6(int numFrames, void* format, long long startTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#operator-eq)
///
/// @param self QAudioBuffer*
/// @param other QAudioBuffer*
void q_audiobuffer_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
///
/// @param self QAudioBuffer*
/// @param other QAudioBuffer*
void q_audiobuffer_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
///
/// @param self QAudioBuffer*
bool q_audiobuffer_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
///
/// @param self QAudioBuffer*
void q_audiobuffer_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
///
/// @param self QAudioBuffer*
QAudioFormat* q_audiobuffer_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
///
/// @param self QAudioBuffer*
int64_t q_audiobuffer_frame_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
///
/// @param self QAudioBuffer*
int64_t q_audiobuffer_sample_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
///
/// @param self QAudioBuffer*
int64_t q_audiobuffer_byte_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
///
/// @param self QAudioBuffer*
long long q_audiobuffer_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
///
/// @param self QAudioBuffer*
long long q_audiobuffer_start_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#dtor.QAudioBuffer)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioBuffer*
void q_audiobuffer_delete(void* self);

#endif
