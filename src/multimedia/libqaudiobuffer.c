#include "libqaudioformat.hpp"
#include "libqaudiobuffer.hpp"
#include "libqaudiobuffer.h"

/// https://doc.qt.io/qt-6/qaudiobuffer.html

/// q_audiobuffer_new constructs a new QAudioBuffer object.
///
///
QAudioBuffer* q_audiobuffer_new() {
    return QAudioBuffer_new();
}

/// q_audiobuffer_new2 constructs a new QAudioBuffer object.
///
/// ``` QAudioBuffer* other ```
QAudioBuffer* q_audiobuffer_new2(void* other) {
    return QAudioBuffer_new2((QAudioBuffer*)other);
}

/// q_audiobuffer_new3 constructs a new QAudioBuffer object.
///
/// ``` const char* data, QAudioFormat* format ```
QAudioBuffer* q_audiobuffer_new3(const char* data, void* format) {
    return QAudioBuffer_new3(qstring(data), (QAudioFormat*)format);
}

/// q_audiobuffer_new4 constructs a new QAudioBuffer object.
///
/// ``` int numFrames, QAudioFormat* format ```
QAudioBuffer* q_audiobuffer_new4(int numFrames, void* format) {
    return QAudioBuffer_new4(numFrames, (QAudioFormat*)format);
}

/// q_audiobuffer_new5 constructs a new QAudioBuffer object.
///
/// ``` const char* data, QAudioFormat* format, long long startTime ```
QAudioBuffer* q_audiobuffer_new5(const char* data, void* format, long long startTime) {
    return QAudioBuffer_new5(qstring(data), (QAudioFormat*)format, startTime);
}

/// q_audiobuffer_new6 constructs a new QAudioBuffer object.
///
/// ``` int numFrames, QAudioFormat* format, long long startTime ```
QAudioBuffer* q_audiobuffer_new6(int numFrames, void* format, long long startTime) {
    return QAudioBuffer_new6(numFrames, (QAudioFormat*)format, startTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#operator=)
///
/// ``` QAudioBuffer* self, QAudioBuffer* other ```
void q_audiobuffer_operator_assign(void* self, void* other) {
    QAudioBuffer_OperatorAssign((QAudioBuffer*)self, (QAudioBuffer*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
///
/// ``` QAudioBuffer* self, QAudioBuffer* other ```
void q_audiobuffer_swap(void* self, void* other) {
    QAudioBuffer_Swap((QAudioBuffer*)self, (QAudioBuffer*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
///
/// ``` QAudioBuffer* self ```
bool q_audiobuffer_is_valid(void* self) {
    return QAudioBuffer_IsValid((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
///
/// ``` QAudioBuffer* self ```
void q_audiobuffer_detach(void* self) {
    QAudioBuffer_Detach((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
///
/// ``` QAudioBuffer* self ```
QAudioFormat* q_audiobuffer_format(void* self) {
    return QAudioBuffer_Format((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
///
/// ``` QAudioBuffer* self ```
int64_t q_audiobuffer_frame_count(void* self) {
    return QAudioBuffer_FrameCount((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
///
/// ``` QAudioBuffer* self ```
int64_t q_audiobuffer_sample_count(void* self) {
    return QAudioBuffer_SampleCount((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
///
/// ``` QAudioBuffer* self ```
int64_t q_audiobuffer_byte_count(void* self) {
    return QAudioBuffer_ByteCount((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
///
/// ``` QAudioBuffer* self ```
long long q_audiobuffer_duration(void* self) {
    return QAudioBuffer_Duration((QAudioBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
///
/// ``` QAudioBuffer* self ```
long long q_audiobuffer_start_time(void* self) {
    return QAudioBuffer_StartTime((QAudioBuffer*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioBuffer* self ```
void q_audiobuffer_delete(void* self) {
    QAudioBuffer_Delete((QAudioBuffer*)(self));
}