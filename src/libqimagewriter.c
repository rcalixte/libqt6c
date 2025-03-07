#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include <string.h>
#include "libqimagewriter.hpp"
#include "libqimagewriter.h"

/// https://doc.qt.io/qt-6/qimagewriter.html

/// q_imagewriter_new constructs a new QImageWriter object.
///
///
QImageWriter* q_imagewriter_new() {
    return QImageWriter_new();
}

/// q_imagewriter_new2 constructs a new QImageWriter object.
///
/// ``` QIODevice* device, const char* format ```
QImageWriter* q_imagewriter_new2(void* device, const char* format) {
    return QImageWriter_new2((QIODevice*)device, qstring(format));
}

/// q_imagewriter_new3 constructs a new QImageWriter object.
///
/// ``` const char* fileName ```
QImageWriter* q_imagewriter_new3(const char* fileName) {
    return QImageWriter_new3(qstring(fileName));
}

/// q_imagewriter_new4 constructs a new QImageWriter object.
///
/// ``` const char* fileName, const char* format ```
QImageWriter* q_imagewriter_new4(const char* fileName, const char* format) {
    return QImageWriter_new4(qstring(fileName), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_imagewriter_tr(const char* sourceText) {
    libqt_string _str = QImageWriter_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setFormat)
///
/// ``` QImageWriter* self, const char* format ```
void q_imagewriter_set_format(void* self, const char* format) {
    QImageWriter_SetFormat((QImageWriter*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#format)
///
/// ``` QImageWriter* self ```
char* q_imagewriter_format(void* self) {
    libqt_string _str = QImageWriter_Format((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setDevice)
///
/// ``` QImageWriter* self, QIODevice* device ```
void q_imagewriter_set_device(void* self, void* device) {
    QImageWriter_SetDevice((QImageWriter*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#device)
///
/// ``` QImageWriter* self ```
QIODevice* q_imagewriter_device(void* self) {
    return QImageWriter_Device((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setFileName)
///
/// ``` QImageWriter* self, const char* fileName ```
void q_imagewriter_set_file_name(void* self, const char* fileName) {
    QImageWriter_SetFileName((QImageWriter*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#fileName)
///
/// ``` QImageWriter* self ```
const char* q_imagewriter_file_name(void* self) {
    libqt_string _str = QImageWriter_FileName((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setQuality)
///
/// ``` QImageWriter* self, int quality ```
void q_imagewriter_set_quality(void* self, int quality) {
    QImageWriter_SetQuality((QImageWriter*)self, quality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#quality)
///
/// ``` QImageWriter* self ```
int32_t q_imagewriter_quality(void* self) {
    return QImageWriter_Quality((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setCompression)
///
/// ``` QImageWriter* self, int compression ```
void q_imagewriter_set_compression(void* self, int compression) {
    QImageWriter_SetCompression((QImageWriter*)self, compression);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#compression)
///
/// ``` QImageWriter* self ```
int32_t q_imagewriter_compression(void* self) {
    return QImageWriter_Compression((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setSubType)
///
/// ``` QImageWriter* self, const char* typeVal ```
void q_imagewriter_set_sub_type(void* self, const char* typeVal) {
    QImageWriter_SetSubType((QImageWriter*)self, qstring(typeVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#subType)
///
/// ``` QImageWriter* self ```
char* q_imagewriter_sub_type(void* self) {
    libqt_string _str = QImageWriter_SubType((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedSubTypes)
///
/// ``` QImageWriter* self ```
const char** q_imagewriter_supported_sub_types(void* self) {
    libqt_list _arr = QImageWriter_SupportedSubTypes((QImageWriter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setOptimizedWrite)
///
/// ``` QImageWriter* self, bool optimize ```
void q_imagewriter_set_optimized_write(void* self, bool optimize) {
    QImageWriter_SetOptimizedWrite((QImageWriter*)self, optimize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#optimizedWrite)
///
/// ``` QImageWriter* self ```
bool q_imagewriter_optimized_write(void* self) {
    return QImageWriter_OptimizedWrite((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setProgressiveScanWrite)
///
/// ``` QImageWriter* self, bool progressive ```
void q_imagewriter_set_progressive_scan_write(void* self, bool progressive) {
    QImageWriter_SetProgressiveScanWrite((QImageWriter*)self, progressive);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#progressiveScanWrite)
///
/// ``` QImageWriter* self ```
bool q_imagewriter_progressive_scan_write(void* self) {
    return QImageWriter_ProgressiveScanWrite((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#transformation)
///
/// ``` QImageWriter* self ```
int64_t q_imagewriter_transformation(void* self) {
    return QImageWriter_Transformation((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setTransformation)
///
/// ``` QImageWriter* self, int orientation ```
void q_imagewriter_set_transformation(void* self, int64_t orientation) {
    QImageWriter_SetTransformation((QImageWriter*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setText)
///
/// ``` QImageWriter* self, const char* key, const char* text ```
void q_imagewriter_set_text(void* self, const char* key, const char* text) {
    QImageWriter_SetText((QImageWriter*)self, qstring(key), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#canWrite)
///
/// ``` QImageWriter* self ```
bool q_imagewriter_can_write(void* self) {
    return QImageWriter_CanWrite((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#write)
///
/// ``` QImageWriter* self, QImage* image ```
bool q_imagewriter_write(void* self, void* image) {
    return QImageWriter_Write((QImageWriter*)self, (QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#error)
///
/// ``` QImageWriter* self ```
int64_t q_imagewriter_error(void* self) {
    return QImageWriter_Error((QImageWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#errorString)
///
/// ``` QImageWriter* self ```
const char* q_imagewriter_error_string(void* self) {
    libqt_string _str = QImageWriter_ErrorString((QImageWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportsOption)
///
/// ``` QImageWriter* self, enum QImageIOHandler__ImageOption option ```
bool q_imagewriter_supports_option(void* self, int64_t option) {
    return QImageWriter_SupportsOption((QImageWriter*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedImageFormats)
///
///
const char** q_imagewriter_supported_image_formats() {
    libqt_list _arr = QImageWriter_SupportedImageFormats();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedMimeTypes)
///
///
const char** q_imagewriter_supported_mime_types() {
    libqt_list _arr = QImageWriter_SupportedMimeTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#imageFormatsForMimeType)
///
/// ``` const char* mimeType ```
const char** q_imagewriter_image_formats_for_mime_type(const char* mimeType) {
    libqt_list _arr = QImageWriter_ImageFormatsForMimeType(qstring(mimeType));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_imagewriter_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QImageWriter_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_imagewriter_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QImageWriter_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QImageWriter* self ```
void q_imagewriter_delete(void* self) {
    QImageWriter_Delete((QImageWriter*)(self));
}