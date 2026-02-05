#include "libwritedata.hpp"
#include "libwriter.hpp"
#include "libwriter.h"

void k_filemetadata__writer_write(void* self, void* data) {
    KFileMetaData__Writer_Write((KFileMetaData__Writer*)self, (KFileMetaData__WriteData*)data);
}

const char** k_filemetadata__writer_mimetypes(void* self) {
    libqt_list _arr = KFileMetaData__Writer_Mimetypes((KFileMetaData__Writer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__writer_mimetypes\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_filemetadata__writer_delete(void* self) {
    KFileMetaData__Writer_Delete((KFileMetaData__Writer*)(self));
}
