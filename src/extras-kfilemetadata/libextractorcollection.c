#include "libextractor.hpp"
#include "libextractorcollection.hpp"
#include "libextractorcollection.h"

KFileMetaData__ExtractorCollection* k_filemetadata__extractorcollection_new() {
    return KFileMetaData__ExtractorCollection_new();
}

libqt_list /* of KFileMetaData__Extractor* */ k_filemetadata__extractorcollection_fetch_extractors(void* self, const char* mimetype) {
    libqt_list _arr = KFileMetaData__ExtractorCollection_FetchExtractors((KFileMetaData__ExtractorCollection*)self, qstring(mimetype));
    return _arr;
}

void k_filemetadata__extractorcollection_delete(void* self) {
    KFileMetaData__ExtractorCollection_Delete((KFileMetaData__ExtractorCollection*)(self));
}
