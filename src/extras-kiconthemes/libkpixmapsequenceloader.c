#include "../extras-kwidgetsaddons/libkpixmapsequence.hpp"
#include "libkpixmapsequenceloader.hpp"
#include "libkpixmapsequenceloader.h"

KPixmapSequence* k_pixmapsequenceloader_load(const char* param1, int param2) {
    return KPixmapSequenceLoader_Load(qstring(param1), param2);
}
