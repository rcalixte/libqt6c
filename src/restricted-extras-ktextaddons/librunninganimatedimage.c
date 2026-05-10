#include "../libqabstractitemmodel.hpp"
#include "../libqmovie.hpp"
#include "librunninganimatedimage.hpp"
#include "librunninganimatedimage.h"

TextEmoticonsCore__RunningAnimatedImage* k_textemoticonscore__runninganimatedimage_new(void* idx) {
    return TextEmoticonsCore__RunningAnimatedImage_new((QModelIndex*)idx);
}

QPersistentModelIndex* k_textemoticonscore__runninganimatedimage_index(void* self) {
    return TextEmoticonsCore__RunningAnimatedImage_Index((TextEmoticonsCore__RunningAnimatedImage*)self);
}

void k_textemoticonscore__runninganimatedimage_set_index(void* self, void* index) {
    TextEmoticonsCore__RunningAnimatedImage_SetIndex((TextEmoticonsCore__RunningAnimatedImage*)self, (QPersistentModelIndex*)index);
}

QMovie* k_textemoticonscore__runninganimatedimage_movie(void* self) {
    return TextEmoticonsCore__RunningAnimatedImage_Movie((TextEmoticonsCore__RunningAnimatedImage*)self);
}

void k_textemoticonscore__runninganimatedimage_set_movie(void* self, void* movie) {
    TextEmoticonsCore__RunningAnimatedImage_SetMovie((TextEmoticonsCore__RunningAnimatedImage*)self, (QMovie*)movie);
}

void k_textemoticonscore__runninganimatedimage_delete(void* self) {
    TextEmoticonsCore__RunningAnimatedImage_Delete((TextEmoticonsCore__RunningAnimatedImage*)(self));
}
