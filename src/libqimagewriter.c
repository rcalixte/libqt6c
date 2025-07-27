#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqimagewriter.hpp"
#include "libqimagewriter.h"

QImageWriter* q_imagewriter_new() {
    return QImageWriter_new();
}

QImageWriter* q_imagewriter_new2(void* device, const char* format) {
    return QImageWriter_new2((QIODevice*)device, qstring(format));
}

QImageWriter* q_imagewriter_new3(const char* fileName) {
    return QImageWriter_new3(qstring(fileName));
}

QImageWriter* q_imagewriter_new4(const char* fileName, const char* format) {
    return QImageWriter_new4(qstring(fileName), qstring(format));
}

const char* q_imagewriter_tr(const char* sourceText) {
    libqt_string _str = QImageWriter_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagewriter_set_format(void* self, const char* format) {
    QImageWriter_SetFormat((QImageWriter*)self, qstring(format));
}

char* q_imagewriter_format(void* self) {
    libqt_string _str = QImageWriter_Format((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagewriter_set_device(void* self, void* device) {
    QImageWriter_SetDevice((QImageWriter*)self, (QIODevice*)device);
}

QIODevice* q_imagewriter_device(void* self) {
    return QImageWriter_Device((QImageWriter*)self);
}

void q_imagewriter_set_file_name(void* self, const char* fileName) {
    QImageWriter_SetFileName((QImageWriter*)self, qstring(fileName));
}

const char* q_imagewriter_file_name(void* self) {
    libqt_string _str = QImageWriter_FileName((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagewriter_set_quality(void* self, int quality) {
    QImageWriter_SetQuality((QImageWriter*)self, quality);
}

int32_t q_imagewriter_quality(void* self) {
    return QImageWriter_Quality((QImageWriter*)self);
}

void q_imagewriter_set_compression(void* self, int compression) {
    QImageWriter_SetCompression((QImageWriter*)self, compression);
}

int32_t q_imagewriter_compression(void* self) {
    return QImageWriter_Compression((QImageWriter*)self);
}

void q_imagewriter_set_sub_type(void* self, const char* typeVal) {
    QImageWriter_SetSubType((QImageWriter*)self, qstring(typeVal));
}

char* q_imagewriter_sub_type(void* self) {
    libqt_string _str = QImageWriter_SubType((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_imagewriter_supported_sub_types(void* self) {
    libqt_list _arr = QImageWriter_SupportedSubTypes((QImageWriter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_imagewriter_set_optimized_write(void* self, bool optimize) {
    QImageWriter_SetOptimizedWrite((QImageWriter*)self, optimize);
}

bool q_imagewriter_optimized_write(void* self) {
    return QImageWriter_OptimizedWrite((QImageWriter*)self);
}

void q_imagewriter_set_progressive_scan_write(void* self, bool progressive) {
    QImageWriter_SetProgressiveScanWrite((QImageWriter*)self, progressive);
}

bool q_imagewriter_progressive_scan_write(void* self) {
    return QImageWriter_ProgressiveScanWrite((QImageWriter*)self);
}

int64_t q_imagewriter_transformation(void* self) {
    return QImageWriter_Transformation((QImageWriter*)self);
}

void q_imagewriter_set_transformation(void* self, int64_t orientation) {
    QImageWriter_SetTransformation((QImageWriter*)self, orientation);
}

void q_imagewriter_set_text(void* self, const char* key, const char* text) {
    QImageWriter_SetText((QImageWriter*)self, qstring(key), qstring(text));
}

bool q_imagewriter_can_write(void* self) {
    return QImageWriter_CanWrite((QImageWriter*)self);
}

bool q_imagewriter_write(void* self, void* image) {
    return QImageWriter_Write((QImageWriter*)self, (QImage*)image);
}

int64_t q_imagewriter_error(void* self) {
    return QImageWriter_Error((QImageWriter*)self);
}

const char* q_imagewriter_error_string(void* self) {
    libqt_string _str = QImageWriter_ErrorString((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_imagewriter_supports_option(void* self, int64_t option) {
    return QImageWriter_SupportsOption((QImageWriter*)self, option);
}

const char** q_imagewriter_supported_image_formats() {
    libqt_list _arr = QImageWriter_SupportedImageFormats();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_imagewriter_supported_mime_types() {
    libqt_list _arr = QImageWriter_SupportedMimeTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_imagewriter_image_formats_for_mime_type(const char* mimeType) {
    libqt_list _arr = QImageWriter_ImageFormatsForMimeType(qstring(mimeType));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_imagewriter_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QImageWriter_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imagewriter_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QImageWriter_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagewriter_delete(void* self) {
    QImageWriter_Delete((QImageWriter*)(self));
}
