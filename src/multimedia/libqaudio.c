#include "libqaudio.hpp"
#include "libqaudio.h"

float q_audio_convert_volume(float volume, int32_t from, int32_t to) {
    return QAudio_ConvertVolume(volume, from, to);
}
