#include "libqaudioformat.hpp"
#include "libqaudiodevice.hpp"
#include "libqaudiodevice.h"

QAudioDevice* q_audiodevice_new() {
    return QAudioDevice_new();
}

QAudioDevice* q_audiodevice_new2(void* other) {
    return QAudioDevice_new2((QAudioDevice*)other);
}

void q_audiodevice_swap(void* self, void* other) {
    QAudioDevice_Swap((QAudioDevice*)self, (QAudioDevice*)other);
}

void q_audiodevice_operator_assign(void* self, void* other) {
    QAudioDevice_OperatorAssign((QAudioDevice*)self, (QAudioDevice*)other);
}

bool q_audiodevice_operator_equal(void* self, void* other) {
    return QAudioDevice_OperatorEqual((QAudioDevice*)self, (QAudioDevice*)other);
}

bool q_audiodevice_operator_not_equal(void* self, void* other) {
    return QAudioDevice_OperatorNotEqual((QAudioDevice*)self, (QAudioDevice*)other);
}

bool q_audiodevice_is_null(void* self) {
    return QAudioDevice_IsNull((QAudioDevice*)self);
}

char* q_audiodevice_id(void* self) {
    libqt_string _str = QAudioDevice_Id((QAudioDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiodevice_description(void* self) {
    libqt_string _str = QAudioDevice_Description((QAudioDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_audiodevice_is_default(void* self) {
    return QAudioDevice_IsDefault((QAudioDevice*)self);
}

int32_t q_audiodevice_mode(void* self) {
    return QAudioDevice_Mode((QAudioDevice*)self);
}

bool q_audiodevice_is_format_supported(void* self, void* format) {
    return QAudioDevice_IsFormatSupported((QAudioDevice*)self, (QAudioFormat*)format);
}

QAudioFormat* q_audiodevice_preferred_format(void* self) {
    return QAudioDevice_PreferredFormat((QAudioDevice*)self);
}

int32_t q_audiodevice_minimum_sample_rate(void* self) {
    return QAudioDevice_MinimumSampleRate((QAudioDevice*)self);
}

int32_t q_audiodevice_maximum_sample_rate(void* self) {
    return QAudioDevice_MaximumSampleRate((QAudioDevice*)self);
}

int32_t q_audiodevice_minimum_channel_count(void* self) {
    return QAudioDevice_MinimumChannelCount((QAudioDevice*)self);
}

int32_t q_audiodevice_maximum_channel_count(void* self) {
    return QAudioDevice_MaximumChannelCount((QAudioDevice*)self);
}

libqt_list /* of uint16_t */ q_audiodevice_supported_sample_formats(void* self) {
    libqt_list _arr = QAudioDevice_SupportedSampleFormats((QAudioDevice*)self);
    return _arr;
}

uint32_t q_audiodevice_channel_configuration(void* self) {
    return QAudioDevice_ChannelConfiguration((QAudioDevice*)self);
}

void q_audiodevice_delete(void* self) {
    QAudioDevice_Delete((QAudioDevice*)(self));
}
