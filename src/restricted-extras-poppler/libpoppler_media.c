#include "../libqsize.hpp"
#include "libpoppler_media.hpp"
#include "libpoppler_media.h"

bool q_poppler__mediarendition_is_valid(void* self) {
    return Poppler__MediaRendition_IsValid((Poppler__MediaRendition*)self);
}

const char* q_poppler__mediarendition_content_type(void* self) {
    libqt_string _str = Poppler__MediaRendition_ContentType((Poppler__MediaRendition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__mediarendition_file_name(void* self) {
    libqt_string _str = Poppler__MediaRendition_FileName((Poppler__MediaRendition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__mediarendition_is_embedded(void* self) {
    return Poppler__MediaRendition_IsEmbedded((Poppler__MediaRendition*)self);
}

char* q_poppler__mediarendition_data(void* self) {
    libqt_string _str = Poppler__MediaRendition_Data((Poppler__MediaRendition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__mediarendition_auto_play(void* self) {
    return Poppler__MediaRendition_AutoPlay((Poppler__MediaRendition*)self);
}

bool q_poppler__mediarendition_show_controls(void* self) {
    return Poppler__MediaRendition_ShowControls((Poppler__MediaRendition*)self);
}

float q_poppler__mediarendition_repeat_count(void* self) {
    return Poppler__MediaRendition_RepeatCount((Poppler__MediaRendition*)self);
}

QSize* q_poppler__mediarendition_size(void* self) {
    return Poppler__MediaRendition_Size((Poppler__MediaRendition*)self);
}

void q_poppler__mediarendition_delete(void* self) {
    Poppler__MediaRendition_Delete((Poppler__MediaRendition*)(self));
}
