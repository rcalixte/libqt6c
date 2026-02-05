#include "libextractionresult.hpp"
#include "../libqvariant.hpp"
#include "libextractor.hpp"
#include "libextractor.h"

void k_filemetadata__extractor_extract(void* self, void* result) {
    KFileMetaData__Extractor_Extract((KFileMetaData__Extractor*)self, (KFileMetaData__ExtractionResult*)result);
}

const char** k_filemetadata__extractor_mimetypes(void* self) {
    libqt_list _arr = KFileMetaData__Extractor_Mimetypes((KFileMetaData__Extractor*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__extractor_mimetypes\n");
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

libqt_map /* of const char* to QVariant* */ k_filemetadata__extractor_extractor_properties(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = KFileMetaData__Extractor_ExtractorProperties((KFileMetaData__Extractor*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_filemetadata__extractor_extractor_properties\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_filemetadata__extractor_extractor_properties\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

void k_filemetadata__extractor_delete(void* self) {
    KFileMetaData__Extractor_Delete((KFileMetaData__Extractor*)(self));
}
