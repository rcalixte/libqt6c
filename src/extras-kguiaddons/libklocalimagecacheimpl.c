#include "../libqdatetime.hpp"
#include "libklocalimagecacheimpl.hpp"
#include "libklocalimagecacheimpl.h"

QDateTime* k_localimagecacheimplementation_last_modified_time(void* self) {
    return KLocalImageCacheImplementation_LastModifiedTime((KLocalImageCacheImplementation*)self);
}

bool k_localimagecacheimplementation_pixmap_caching(void* self) {
    return KLocalImageCacheImplementation_PixmapCaching((KLocalImageCacheImplementation*)self);
}

void k_localimagecacheimplementation_set_pixmap_caching(void* self, bool enable) {
    KLocalImageCacheImplementation_SetPixmapCaching((KLocalImageCacheImplementation*)self, enable);
}

int32_t k_localimagecacheimplementation_pixmap_cache_limit(void* self) {
    return KLocalImageCacheImplementation_PixmapCacheLimit((KLocalImageCacheImplementation*)self);
}

void k_localimagecacheimplementation_set_pixmap_cache_limit(void* self, int size) {
    KLocalImageCacheImplementation_SetPixmapCacheLimit((KLocalImageCacheImplementation*)self, size);
}

void k_localimagecacheimplementation_delete(void* self) {
    KLocalImageCacheImplementation_Delete((KLocalImageCacheImplementation*)(self));
}
