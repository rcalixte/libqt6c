#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFER_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqaudioformat.h"

QAudioBuffer* q_audiobuffer_new();
QAudioBuffer* q_audiobuffer_new2(void* other);
QAudioBuffer* q_audiobuffer_new3(const char* data, void* format);
QAudioBuffer* q_audiobuffer_new4(int numFrames, void* format);
QAudioBuffer* q_audiobuffer_new5(const char* data, void* format, long long startTime);
QAudioBuffer* q_audiobuffer_new6(int numFrames, void* format, long long startTime);
void q_audiobuffer_operator_assign(void* self, void* other);
void q_audiobuffer_swap(void* self, void* other);
bool q_audiobuffer_is_valid(void* self);
void q_audiobuffer_detach(void* self);
QAudioFormat* q_audiobuffer_format(void* self);
int64_t q_audiobuffer_frame_count(void* self);
int64_t q_audiobuffer_sample_count(void* self);
int64_t q_audiobuffer_byte_count(void* self);
long long q_audiobuffer_duration(void* self);
long long q_audiobuffer_start_time(void* self);
void q_audiobuffer_delete(void* self);

#endif
