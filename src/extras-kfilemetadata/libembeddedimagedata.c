#include "libembeddedimagedata.hpp"
#include "libembeddedimagedata.h"

KFileMetaData__EmbeddedImageData* k_filemetadata__embeddedimagedata_new() {
    return KFileMetaData__EmbeddedImageData_new();
}

void k_filemetadata__embeddedimagedata_delete(void* self) {
    KFileMetaData__EmbeddedImageData_Delete((KFileMetaData__EmbeddedImageData*)(self));
}
