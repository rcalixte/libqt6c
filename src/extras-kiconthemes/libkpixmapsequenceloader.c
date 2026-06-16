#include "../extras-kwidgetsaddons/libkpixmapsequence.hpp"
#include "libkpixmapsequenceloader.hpp"
#include "libkpixmapsequenceloader.h"

KPixmapSequence* k_pixmapsequenceloader_load(const char* iconName, int size) {
    return KPixmapSequenceLoader_Load(qstring(iconName), size);
}
