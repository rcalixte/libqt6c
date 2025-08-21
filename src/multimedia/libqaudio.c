#include "libqaudio.hpp"
#include "libqaudio.h"

float q_audio_convert_volume(float param1, int32_t param2, int32_t param3) {
    return QAudio_ConvertVolume(param1, param2, param3);
}
