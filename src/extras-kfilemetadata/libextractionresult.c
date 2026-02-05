#include "../libqvariant.hpp"
#include "libextractionresult.hpp"
#include "libextractionresult.h"

KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new(const char* url) {
    return KFileMetaData__ExtractionResult_new(qstring(url));
}

KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new2(void* rhs) {
    return KFileMetaData__ExtractionResult_new2((KFileMetaData__ExtractionResult*)rhs);
}

KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new3(const char* url, const char* mimetype) {
    return KFileMetaData__ExtractionResult_new3(qstring(url), qstring(mimetype));
}

KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new4(const char* url, const char* mimetype, const int32_t* flags) {
    return KFileMetaData__ExtractionResult_new4(qstring(url), qstring(mimetype), flags);
}

const char* k_filemetadata__extractionresult_input_url(void* self) {
    libqt_string _str = KFileMetaData__ExtractionResult_InputUrl((KFileMetaData__ExtractionResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__extractionresult_input_mimetype(void* self) {
    libqt_string _str = KFileMetaData__ExtractionResult_InputMimetype((KFileMetaData__ExtractionResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__extractionresult_input_flags(void* self) {
    return KFileMetaData__ExtractionResult_InputFlags((KFileMetaData__ExtractionResult*)self);
}

void k_filemetadata__extractionresult_append(void* self, const char* text) {
    KFileMetaData__ExtractionResult_Append((KFileMetaData__ExtractionResult*)self, qstring(text));
}

void k_filemetadata__extractionresult_on_append(void* self, void (*callback)(void*, const char*)) {
    KFileMetaData__ExtractionResult_OnAppend((KFileMetaData__ExtractionResult*)self, (intptr_t)callback);
}

void k_filemetadata__extractionresult_qbase_append(void* self, const char* text) {
    KFileMetaData__ExtractionResult_QBaseAppend((KFileMetaData__ExtractionResult*)self, qstring(text));
}

void k_filemetadata__extractionresult_add(void* self, int32_t property, void* value) {
    KFileMetaData__ExtractionResult_Add((KFileMetaData__ExtractionResult*)self, property, (QVariant*)value);
}

void k_filemetadata__extractionresult_on_add(void* self, void (*callback)(void*, int32_t, void*)) {
    KFileMetaData__ExtractionResult_OnAdd((KFileMetaData__ExtractionResult*)self, (intptr_t)callback);
}

void k_filemetadata__extractionresult_qbase_add(void* self, int32_t property, void* value) {
    KFileMetaData__ExtractionResult_QBaseAdd((KFileMetaData__ExtractionResult*)self, property, (QVariant*)value);
}

void k_filemetadata__extractionresult_add_type(void* self, int32_t type) {
    KFileMetaData__ExtractionResult_AddType((KFileMetaData__ExtractionResult*)self, type);
}

void k_filemetadata__extractionresult_on_add_type(void* self, void (*callback)(void*, int32_t)) {
    KFileMetaData__ExtractionResult_OnAddType((KFileMetaData__ExtractionResult*)self, (intptr_t)callback);
}

void k_filemetadata__extractionresult_qbase_add_type(void* self, int32_t type) {
    KFileMetaData__ExtractionResult_QBaseAddType((KFileMetaData__ExtractionResult*)self, type);
}

libqt_map /* of enum KFileMetaData__EmbeddedImageData__ImageType to char* */ k_filemetadata__extractionresult_image_data(void* self) {
    // Convert QMap<KFileMetaData::EmbeddedImageData::ImageType,QByteArray> to libqt_map
    libqt_map _out = KFileMetaData__ExtractionResult_ImageData((KFileMetaData__ExtractionResult*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_filemetadata__extractionresult_image_data\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_filemetadata__extractionresult_image_data\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_filemetadata__extractionresult_delete(void* self) {
    KFileMetaData__ExtractionResult_Delete((KFileMetaData__ExtractionResult*)(self));
}
