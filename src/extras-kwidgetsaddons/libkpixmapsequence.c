#include "../libqpixmap.hpp"
#include "../libqsize.hpp"
#include "libkpixmapsequence.hpp"
#include "libkpixmapsequence.h"

KPixmapSequence* k_pixmapsequence_new() {
    return KPixmapSequence_New();
}

KPixmapSequence* k_pixmapsequence_new2(const void* other) {
    return KPixmapSequence_New2((KPixmapSequence*)other);
}

KPixmapSequence* k_pixmapsequence_new3(const void* pixmap) {
    return KPixmapSequence_New3((QPixmap*)pixmap);
}

KPixmapSequence* k_pixmapsequence_new4(const char* fullPath, int size) {
    return KPixmapSequence_New4(qstring(fullPath), size);
}

KPixmapSequence* k_pixmapsequence_new5(const void* pixmap, const void* frameSize) {
    return KPixmapSequence_New5((QPixmap*)pixmap, (QSize*)frameSize);
}

void k_pixmapsequence_operator_assign(void* self, const void* other) {
    KPixmapSequence_OperatorAssign((KPixmapSequence*)self, (KPixmapSequence*)other);
}

bool k_pixmapsequence_is_valid(const void* self) {
    return KPixmapSequence_IsValid((KPixmapSequence*)self);
}

bool k_pixmapsequence_is_empty(const void* self) {
    return KPixmapSequence_IsEmpty((KPixmapSequence*)self);
}

QSize* k_pixmapsequence_frame_size(const void* self) {
    return KPixmapSequence_FrameSize((KPixmapSequence*)self);
}

int32_t k_pixmapsequence_frame_count(const void* self) {
    return KPixmapSequence_FrameCount((KPixmapSequence*)self);
}

QPixmap* k_pixmapsequence_frame_at(const void* self, int index) {
    return KPixmapSequence_FrameAt((KPixmapSequence*)self, index);
}

void k_pixmapsequence_delete(void* self) {
    KPixmapSequence_Delete((KPixmapSequence*)(self));
}
