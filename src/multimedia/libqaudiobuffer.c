#include "libqaudioformat.hpp"
#include "libqaudiobuffer.hpp"
#include "libqaudiobuffer.h"

QAudioBuffer* q_audiobuffer_new() {
    return QAudioBuffer_new();
}

QAudioBuffer* q_audiobuffer_new2(void* other) {
    return QAudioBuffer_new2((QAudioBuffer*)other);
}

QAudioBuffer* q_audiobuffer_new3(char* data, void* format) {
    return QAudioBuffer_new3(qstring(data), (QAudioFormat*)format);
}

QAudioBuffer* q_audiobuffer_new4(int numFrames, void* format) {
    return QAudioBuffer_new4(numFrames, (QAudioFormat*)format);
}

QAudioBuffer* q_audiobuffer_new5(char* data, void* format, long long startTime) {
    return QAudioBuffer_new5(qstring(data), (QAudioFormat*)format, startTime);
}

QAudioBuffer* q_audiobuffer_new6(int numFrames, void* format, long long startTime) {
    return QAudioBuffer_new6(numFrames, (QAudioFormat*)format, startTime);
}

void q_audiobuffer_operator_assign(void* self, void* other) {
    QAudioBuffer_OperatorAssign((QAudioBuffer*)self, (QAudioBuffer*)other);
}

void q_audiobuffer_swap(void* self, void* other) {
    QAudioBuffer_Swap((QAudioBuffer*)self, (QAudioBuffer*)other);
}

bool q_audiobuffer_is_valid(void* self) {
    return QAudioBuffer_IsValid((QAudioBuffer*)self);
}

void q_audiobuffer_detach(void* self) {
    QAudioBuffer_Detach((QAudioBuffer*)self);
}

QAudioFormat* q_audiobuffer_format(void* self) {
    return QAudioBuffer_Format((QAudioBuffer*)self);
}

int64_t q_audiobuffer_frame_count(void* self) {
    return QAudioBuffer_FrameCount((QAudioBuffer*)self);
}

int64_t q_audiobuffer_sample_count(void* self) {
    return QAudioBuffer_SampleCount((QAudioBuffer*)self);
}

int64_t q_audiobuffer_byte_count(void* self) {
    return QAudioBuffer_ByteCount((QAudioBuffer*)self);
}

long long q_audiobuffer_duration(void* self) {
    return QAudioBuffer_Duration((QAudioBuffer*)self);
}

long long q_audiobuffer_start_time(void* self) {
    return QAudioBuffer_StartTime((QAudioBuffer*)self);
}

void q_audiobuffer_delete(void* self) {
    QAudioBuffer_Delete((QAudioBuffer*)(self));
}
