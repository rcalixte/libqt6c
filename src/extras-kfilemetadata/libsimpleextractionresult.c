#include "libextractionresult.hpp"
#include "../libqvariant.hpp"
#include "libsimpleextractionresult.hpp"
#include "libsimpleextractionresult.h"

KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new(const char* url) {
    return KFileMetaData__SimpleExtractionResult_new(qstring(url));
}

KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new2(void* rhs) {
    return KFileMetaData__SimpleExtractionResult_new2((KFileMetaData__SimpleExtractionResult*)rhs);
}

KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new3(const char* url, const char* mimetype) {
    return KFileMetaData__SimpleExtractionResult_new3(qstring(url), qstring(mimetype));
}

KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new4(const char* url, const char* mimetype, const int32_t* flags) {
    return KFileMetaData__SimpleExtractionResult_new4(qstring(url), qstring(mimetype), flags);
}

void k_filemetadata__simpleextractionresult_operator_assign(void* self, void* rhs) {
    KFileMetaData__SimpleExtractionResult_OperatorAssign((KFileMetaData__SimpleExtractionResult*)self, (KFileMetaData__SimpleExtractionResult*)rhs);
}

bool k_filemetadata__simpleextractionresult_operator_equal(void* self, void* rhs) {
    return KFileMetaData__SimpleExtractionResult_OperatorEqual((KFileMetaData__SimpleExtractionResult*)self, (KFileMetaData__SimpleExtractionResult*)rhs);
}

void k_filemetadata__simpleextractionresult_add(void* self, int32_t property, void* value) {
    KFileMetaData__SimpleExtractionResult_Add((KFileMetaData__SimpleExtractionResult*)self, property, (QVariant*)value);
}

void k_filemetadata__simpleextractionresult_on_add(void* self, void (*callback)(void*, int32_t, void*)) {
    KFileMetaData__SimpleExtractionResult_OnAdd((KFileMetaData__SimpleExtractionResult*)self, (intptr_t)callback);
}

void k_filemetadata__simpleextractionresult_qbase_add(void* self, int32_t property, void* value) {
    KFileMetaData__SimpleExtractionResult_QBaseAdd((KFileMetaData__SimpleExtractionResult*)self, property, (QVariant*)value);
}

void k_filemetadata__simpleextractionresult_add_type(void* self, int32_t type) {
    KFileMetaData__SimpleExtractionResult_AddType((KFileMetaData__SimpleExtractionResult*)self, type);
}

void k_filemetadata__simpleextractionresult_on_add_type(void* self, void (*callback)(void*, int32_t)) {
    KFileMetaData__SimpleExtractionResult_OnAddType((KFileMetaData__SimpleExtractionResult*)self, (intptr_t)callback);
}

void k_filemetadata__simpleextractionresult_qbase_add_type(void* self, int32_t type) {
    KFileMetaData__SimpleExtractionResult_QBaseAddType((KFileMetaData__SimpleExtractionResult*)self, type);
}

void k_filemetadata__simpleextractionresult_append(void* self, const char* text) {
    KFileMetaData__SimpleExtractionResult_Append((KFileMetaData__SimpleExtractionResult*)self, qstring(text));
}

void k_filemetadata__simpleextractionresult_on_append(void* self, void (*callback)(void*, const char*)) {
    KFileMetaData__SimpleExtractionResult_OnAppend((KFileMetaData__SimpleExtractionResult*)self, (intptr_t)callback);
}

void k_filemetadata__simpleextractionresult_qbase_append(void* self, const char* text) {
    KFileMetaData__SimpleExtractionResult_QBaseAppend((KFileMetaData__SimpleExtractionResult*)self, qstring(text));
}

libqt_map /* of enum KFileMetaData__Property__Property to QVariant** */ k_filemetadata__simpleextractionresult_properties(void* self) {
    // Convert QMultiMap<KFileMetaData::Property::Property,QVariant> to libqt_map
    libqt_map _out = KFileMetaData__SimpleExtractionResult_Properties((KFileMetaData__SimpleExtractionResult*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    QVariant*** _ret_values = (QVariant***)malloc(_ret.len * sizeof(QVariant**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in k_filemetadata__simpleextractionresult_properties\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        QVariant** _ret_arr = (QVariant**)malloc((_value_list.len + 1) * sizeof(QVariant*));
        if (_ret_arr == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in k_filemetadata__simpleextractionresult_properties\n");
            abort();
        }
        memcpy(_ret_arr, _value_list.data.ptr, _value_list.len * sizeof(QVariant*));
        _ret_arr[_value_list.len] = NULL;
        _ret_values[i] = _ret_arr;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        free((QVariant**)_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

const char* k_filemetadata__simpleextractionresult_text(void* self) {
    libqt_string _str = KFileMetaData__SimpleExtractionResult_Text((KFileMetaData__SimpleExtractionResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of enum KFileMetaData__Type__Type */ k_filemetadata__simpleextractionresult_types(void* self) {
    libqt_list _arr = KFileMetaData__SimpleExtractionResult_Types((KFileMetaData__SimpleExtractionResult*)self);
    return _arr;
}

const char* k_filemetadata__simpleextractionresult_input_url(void* self) {
    libqt_string _str = KFileMetaData__ExtractionResult_InputUrl((KFileMetaData__ExtractionResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__simpleextractionresult_input_mimetype(void* self) {
    libqt_string _str = KFileMetaData__ExtractionResult_InputMimetype((KFileMetaData__ExtractionResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__simpleextractionresult_input_flags(void* self) {
    return KFileMetaData__ExtractionResult_InputFlags((KFileMetaData__ExtractionResult*)self);
}

libqt_map /* of enum KFileMetaData__EmbeddedImageData__ImageType to char* */ k_filemetadata__simpleextractionresult_image_data(void* self) {
    // Convert QMap<KFileMetaData::EmbeddedImageData::ImageType,QByteArray> to libqt_map
    libqt_map _out = KFileMetaData__ExtractionResult_ImageData((KFileMetaData__ExtractionResult*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_filemetadata__simpleextractionresult_image_data\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_filemetadata__simpleextractionresult_image_data\n");
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

void k_filemetadata__simpleextractionresult_delete(void* self) {
    KFileMetaData__SimpleExtractionResult_Delete((KFileMetaData__SimpleExtractionResult*)(self));
}
