#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIODEVICE_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqaudioformat.h"
#include <string.h>

QAudioDevice* q_audiodevice_new();
QAudioDevice* q_audiodevice_new2(void* other);
void q_audiodevice_swap(void* self, void* other);
void q_audiodevice_operator_assign(void* self, void* other);
bool q_audiodevice_operator_equal(void* self, void* other);
bool q_audiodevice_operator_not_equal(void* self, void* other);
bool q_audiodevice_is_null(void* self);
char* q_audiodevice_id(void* self);
const char* q_audiodevice_description(void* self);
bool q_audiodevice_is_default(void* self);
int64_t q_audiodevice_mode(void* self);
bool q_audiodevice_is_format_supported(void* self, void* format);
QAudioFormat* q_audiodevice_preferred_format(void* self);
int32_t q_audiodevice_minimum_sample_rate(void* self);
int32_t q_audiodevice_maximum_sample_rate(void* self);
int32_t q_audiodevice_minimum_channel_count(void* self);
int32_t q_audiodevice_maximum_channel_count(void* self);
libqt_list /* of int64_t */ q_audiodevice_supported_sample_formats(void* self);
int64_t q_audiodevice_channel_configuration(void* self);
void q_audiodevice_delete(void* self);

/// https://doc.qt.io/qt-6/qaudiodevice.html#types

typedef enum {
    QAUDIODEVICE_MODE_NULL = 0,
    QAUDIODEVICE_MODE_INPUT = 1,
    QAUDIODEVICE_MODE_OUTPUT = 2
} QAudioDevice__Mode;

#endif
