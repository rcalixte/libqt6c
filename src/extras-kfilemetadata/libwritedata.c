#include "../libqvariant.hpp"
#include "libwritedata.hpp"
#include "libwritedata.h"

KFileMetaData__WriteData* k_filemetadata__writedata_new(const char* url, const char* mimetype) {
    return KFileMetaData__WriteData_new(qstring(url), qstring(mimetype));
}

KFileMetaData__WriteData* k_filemetadata__writedata_new2(void* rhs) {
    return KFileMetaData__WriteData_new2((KFileMetaData__WriteData*)rhs);
}

void k_filemetadata__writedata_operator_assign(void* self, void* rhs) {
    KFileMetaData__WriteData_OperatorAssign((KFileMetaData__WriteData*)self, (KFileMetaData__WriteData*)rhs);
}

bool k_filemetadata__writedata_operator_equal(void* self, void* rhs) {
    return KFileMetaData__WriteData_OperatorEqual((KFileMetaData__WriteData*)self, (KFileMetaData__WriteData*)rhs);
}

const char* k_filemetadata__writedata_input_url(void* self) {
    libqt_string _str = KFileMetaData__WriteData_InputUrl((KFileMetaData__WriteData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__writedata_input_mimetype(void* self) {
    libqt_string _str = KFileMetaData__WriteData_InputMimetype((KFileMetaData__WriteData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filemetadata__writedata_add(void* self, int32_t property, void* value) {
    KFileMetaData__WriteData_Add((KFileMetaData__WriteData*)self, property, (QVariant*)value);
}

void k_filemetadata__writedata_add_image_data(void* self, libqt_map /* of enum KFileMetaData__EmbeddedImageData__ImageType to char* */ images) {
    // Convert libqt_map to QMap<KFileMetaData::EmbeddedImageData::ImageType,QByteArray>
    libqt_map images_ret;
    images_ret.len = images.len;
    images_ret.keys = (int32_t*)malloc(images_ret.len * sizeof(int32_t));
    if (images_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_filemetadata__writedata_add_image_data\n");
        abort();
    }
    images_ret.values = (libqt_string*)malloc(images_ret.len * sizeof(libqt_string));
    if (images_ret.values == NULL) {
        free(images_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_filemetadata__writedata_add_image_data\n");
        abort();
    }
    int32_t* images_karr = (int32_t*)images.keys;
    int32_t* images_kdest = (int32_t*)images_ret.keys;
    char** images_varr = (char**)images.values;
    libqt_string* images_vdest = (libqt_string*)images_ret.values;
    for (size_t i = 0; i < images_ret.len; ++i) {
        images_kdest[i] = images_karr[i];
        images_vdest[i] = qstring(images_varr[i]);
    }
    KFileMetaData__WriteData_AddImageData((KFileMetaData__WriteData*)self, images_ret);
    free(images_ret.keys);
    free(images_ret.values);
}

libqt_map /* of enum KFileMetaData__Property__Property to QVariant** */ k_filemetadata__writedata_properties(void* self) {
    // Convert QMultiMap<KFileMetaData::Property::Property,QVariant> to libqt_map
    libqt_map _out = KFileMetaData__WriteData_Properties((KFileMetaData__WriteData*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    QVariant*** _ret_values = (QVariant***)malloc(_ret.len * sizeof(QVariant**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in k_filemetadata__writedata_properties\n");
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
            fprintf(stderr, "Failed to allocate memory for map values in k_filemetadata__writedata_properties\n");
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

libqt_map /* of enum KFileMetaData__EmbeddedImageData__ImageType to char* */ k_filemetadata__writedata_image_data(void* self) {
    // Convert QMap<KFileMetaData::EmbeddedImageData::ImageType,QByteArray> to libqt_map
    libqt_map _out = KFileMetaData__WriteData_ImageData((KFileMetaData__WriteData*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_filemetadata__writedata_image_data\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_filemetadata__writedata_image_data\n");
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

void k_filemetadata__writedata_delete(void* self) {
    KFileMetaData__WriteData_Delete((KFileMetaData__WriteData*)(self));
}
