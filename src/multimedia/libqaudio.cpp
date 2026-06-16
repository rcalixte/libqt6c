#include <QAudio>
#include <qaudio.h>
#include "libqaudio.hpp"
#include "libqaudio.hxx"

float QAudio_ConvertVolume(float volume, int from, int to) {
    return QAudio::convertVolume(static_cast<float>(volume), static_cast<QAudio::VolumeScale>(from), static_cast<QAudio::VolumeScale>(to));
}
