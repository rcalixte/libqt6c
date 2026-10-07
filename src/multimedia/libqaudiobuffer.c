#include "libqaudioformat.hpp"
#include "libqaudiobuffer.hpp"
#include "libqaudiobuffer.h"

QAudioBuffer* q_audiobuffer_new() {
    return QAudioBuffer_New();
}

QAudioBuffer* q_audiobuffer_new2(const void* other) {
    return QAudioBuffer_New2((QAudioBuffer*)other);
}

QAudioBuffer* q_audiobuffer_new3(const char* data, const void* format) {
    return QAudioBuffer_New3(qstring(data), (QAudioFormat*)format);
}

QAudioBuffer* q_audiobuffer_new4(int numFrames, const void* format) {
    return QAudioBuffer_New4(numFrames, (QAudioFormat*)format);
}

QAudioBuffer* q_audiobuffer_new5(const char* data, const void* format, int64_t startTime) {
    return QAudioBuffer_New5(qstring(data), (QAudioFormat*)format, startTime);
}

QAudioBuffer* q_audiobuffer_new6(int numFrames, const void* format, int64_t startTime) {
    return QAudioBuffer_New6(numFrames, (QAudioFormat*)format, startTime);
}

void q_audiobuffer_operator_assign(void* self, const void* other) {
    QAudioBuffer_OperatorAssign((QAudioBuffer*)self, (QAudioBuffer*)other);
}

void q_audiobuffer_swap(void* self, void* other) {
    QAudioBuffer_Swap((QAudioBuffer*)self, (QAudioBuffer*)other);
}

bool q_audiobuffer_is_valid(const void* self) {
    return QAudioBuffer_IsValid((QAudioBuffer*)self);
}

void q_audiobuffer_detach(void* self) {
    QAudioBuffer_Detach((QAudioBuffer*)self);
}

QAudioFormat* q_audiobuffer_format(const void* self) {
    return QAudioBuffer_Format((QAudioBuffer*)self);
}

intptr_t q_audiobuffer_frame_count(const void* self) {
    return QAudioBuffer_FrameCount((QAudioBuffer*)self);
}

intptr_t q_audiobuffer_sample_count(const void* self) {
    return QAudioBuffer_SampleCount((QAudioBuffer*)self);
}

intptr_t q_audiobuffer_byte_count(const void* self) {
    return QAudioBuffer_ByteCount((QAudioBuffer*)self);
}

int64_t q_audiobuffer_duration(const void* self) {
    return QAudioBuffer_Duration((QAudioBuffer*)self);
}

int64_t q_audiobuffer_start_time(const void* self) {
    return QAudioBuffer_StartTime((QAudioBuffer*)self);
}

void q_audiobuffer_delete(void* self) {
    QAudioBuffer_Delete((QAudioBuffer*)(self));
}
