#include "libwriter.hpp"
#include "libwritercollection.hpp"
#include "libwritercollection.h"

KFileMetaData__WriterCollection* k_filemetadata__writercollection_new() {
    return KFileMetaData__WriterCollection_new();
}

libqt_list /* of KFileMetaData__Writer* */ k_filemetadata__writercollection_fetch_writers(void* self, const char* mimetype) {
    libqt_list _arr = KFileMetaData__WriterCollection_FetchWriters((KFileMetaData__WriterCollection*)self, qstring(mimetype));
    return _arr;
}

void k_filemetadata__writercollection_delete(void* self) {
    KFileMetaData__WriterCollection_Delete((KFileMetaData__WriterCollection*)(self));
}
