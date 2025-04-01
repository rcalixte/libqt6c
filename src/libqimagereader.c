#include "libqcolor.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqimagereader.hpp"
#include "libqimagereader.h"

QImageReader* q_imagereader_new() {
    return QImageReader_new();
}

QImageReader* q_imagereader_new2(void* device) {
    return QImageReader_new2((QIODevice*)device);
}

QImageReader* q_imagereader_new3(const char* fileName) {
    return QImageReader_new3(qstring(fileName));
}

QImageReader* q_imagereader_new4(void* device, const char* format) {
    return QImageReader_new4((QIODevice*)device, qstring(format));
}

QImageReader* q_imagereader_new5(const char* fileName, const char* format) {
    return QImageReader_new5(qstring(fileName), qstring(format));
}

const char* q_imagereader_tr(const char* sourceText) {
    libqt_string _str = QImageReader_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagereader_set_format(void* self, const char* format) {
    QImageReader_SetFormat((QImageReader*)self, qstring(format));
}

char* q_imagereader_format(void* self) {
    libqt_string _str = QImageReader_Format((QImageReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagereader_set_auto_detect_image_format(void* self, bool enabled) {
    QImageReader_SetAutoDetectImageFormat((QImageReader*)self, enabled);
}

bool q_imagereader_auto_detect_image_format(void* self) {
    return QImageReader_AutoDetectImageFormat((QImageReader*)self);
}

void q_imagereader_set_decide_format_from_content(void* self, bool ignored) {
    QImageReader_SetDecideFormatFromContent((QImageReader*)self, ignored);
}

bool q_imagereader_decide_format_from_content(void* self) {
    return QImageReader_DecideFormatFromContent((QImageReader*)self);
}

void q_imagereader_set_device(void* self, void* device) {
    QImageReader_SetDevice((QImageReader*)self, (QIODevice*)device);
}

QIODevice* q_imagereader_device(void* self) {
    return QImageReader_Device((QImageReader*)self);
}

void q_imagereader_set_file_name(void* self, const char* fileName) {
    QImageReader_SetFileName((QImageReader*)self, qstring(fileName));
}

const char* q_imagereader_file_name(void* self) {
    libqt_string _str = QImageReader_FileName((QImageReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_imagereader_size(void* self) {
    return QImageReader_Size((QImageReader*)self);
}

int64_t q_imagereader_image_format(void* self) {
    return QImageReader_ImageFormat((QImageReader*)self);
}

const char** q_imagereader_text_keys(void* self) {
    libqt_list _arr = QImageReader_TextKeys((QImageReader*)self);
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

const char* q_imagereader_text(void* self, const char* key) {
    libqt_string _str = QImageReader_Text((QImageReader*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagereader_set_clip_rect(void* self, void* rect) {
    QImageReader_SetClipRect((QImageReader*)self, (QRect*)rect);
}

QRect* q_imagereader_clip_rect(void* self) {
    return QImageReader_ClipRect((QImageReader*)self);
}

void q_imagereader_set_scaled_size(void* self, void* size) {
    QImageReader_SetScaledSize((QImageReader*)self, (QSize*)size);
}

QSize* q_imagereader_scaled_size(void* self) {
    return QImageReader_ScaledSize((QImageReader*)self);
}

void q_imagereader_set_quality(void* self, int quality) {
    QImageReader_SetQuality((QImageReader*)self, quality);
}

int32_t q_imagereader_quality(void* self) {
    return QImageReader_Quality((QImageReader*)self);
}

void q_imagereader_set_scaled_clip_rect(void* self, void* rect) {
    QImageReader_SetScaledClipRect((QImageReader*)self, (QRect*)rect);
}

QRect* q_imagereader_scaled_clip_rect(void* self) {
    return QImageReader_ScaledClipRect((QImageReader*)self);
}

void q_imagereader_set_background_color(void* self, void* color) {
    QImageReader_SetBackgroundColor((QImageReader*)self, (QColor*)color);
}

QColor* q_imagereader_background_color(void* self) {
    return QImageReader_BackgroundColor((QImageReader*)self);
}

bool q_imagereader_supports_animation(void* self) {
    return QImageReader_SupportsAnimation((QImageReader*)self);
}

int64_t q_imagereader_transformation(void* self) {
    return QImageReader_Transformation((QImageReader*)self);
}

void q_imagereader_set_auto_transform(void* self, bool enabled) {
    QImageReader_SetAutoTransform((QImageReader*)self, enabled);
}

bool q_imagereader_auto_transform(void* self) {
    return QImageReader_AutoTransform((QImageReader*)self);
}

char* q_imagereader_sub_type(void* self) {
    libqt_string _str = QImageReader_SubType((QImageReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_imagereader_supported_sub_types(void* self) {
    libqt_list _arr = QImageReader_SupportedSubTypes((QImageReader*)self);
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

bool q_imagereader_can_read(void* self) {
    return QImageReader_CanRead((QImageReader*)self);
}

QImage* q_imagereader_read(void* self) {
    return QImageReader_Read((QImageReader*)self);
}

bool q_imagereader_read_with_image(void* self, void* image) {
    return QImageReader_ReadWithImage((QImageReader*)self, (QImage*)image);
}

bool q_imagereader_jump_to_next_image(void* self) {
    return QImageReader_JumpToNextImage((QImageReader*)self);
}

bool q_imagereader_jump_to_image(void* self, int imageNumber) {
    return QImageReader_JumpToImage((QImageReader*)self, imageNumber);
}

int32_t q_imagereader_loop_count(void* self) {
    return QImageReader_LoopCount((QImageReader*)self);
}

int32_t q_imagereader_image_count(void* self) {
    return QImageReader_ImageCount((QImageReader*)self);
}

int32_t q_imagereader_next_image_delay(void* self) {
    return QImageReader_NextImageDelay((QImageReader*)self);
}

int32_t q_imagereader_current_image_number(void* self) {
    return QImageReader_CurrentImageNumber((QImageReader*)self);
}

QRect* q_imagereader_current_image_rect(void* self) {
    return QImageReader_CurrentImageRect((QImageReader*)self);
}

int64_t q_imagereader_error(void* self) {
    return QImageReader_Error((QImageReader*)self);
}

const char* q_imagereader_error_string(void* self) {
    libqt_string _str = QImageReader_ErrorString((QImageReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_imagereader_supports_option(void* self, int64_t option) {
    return QImageReader_SupportsOption((QImageReader*)self, option);
}

char* q_imagereader_image_format_with_file_name(const char* fileName) {
    libqt_string _str = QImageReader_ImageFormatWithFileName(qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_imagereader_image_format_with_device(void* device) {
    libqt_string _str = QImageReader_ImageFormatWithDevice((QIODevice*)device);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_imagereader_supported_image_formats() {
    libqt_list _arr = QImageReader_SupportedImageFormats();
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

const char** q_imagereader_supported_mime_types() {
    libqt_list _arr = QImageReader_SupportedMimeTypes();
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

const char** q_imagereader_image_formats_for_mime_type(const char* mimeType) {
    libqt_list _arr = QImageReader_ImageFormatsForMimeType(qstring(mimeType));
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

int32_t q_imagereader_allocation_limit() {
    return QImageReader_AllocationLimit();
}

void q_imagereader_set_allocation_limit(int mbLimit) {
    QImageReader_SetAllocationLimit(mbLimit);
}

const char* q_imagereader_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QImageReader_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imagereader_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QImageReader_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imagereader_delete(void* self) {
    QImageReader_Delete((QImageReader*)(self));
}
