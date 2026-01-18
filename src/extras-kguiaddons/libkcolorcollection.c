#include "../libqcolor.hpp"
#include "libkcolorcollection.hpp"
#include "libkcolorcollection.h"

KColorCollection* k_colorcollection_new() {
    return KColorCollection_new();
}

KColorCollection* k_colorcollection_new2(void* param1) {
    return KColorCollection_new2((KColorCollection*)param1);
}

KColorCollection* k_colorcollection_new3(const char* name) {
    return KColorCollection_new3(qstring(name));
}

const char** k_colorcollection_installed_collections() {
    libqt_list _arr = KColorCollection_InstalledCollections();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorcollection_installed_collections\n");
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

void k_colorcollection_operator_assign(void* self, void* param1) {
    KColorCollection_OperatorAssign((KColorCollection*)self, (KColorCollection*)param1);
}

bool k_colorcollection_save(void* self) {
    return KColorCollection_Save((KColorCollection*)self);
}

const char* k_colorcollection_description(void* self) {
    libqt_string _str = KColorCollection_Description((KColorCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcollection_set_description(void* self, const char* desc) {
    KColorCollection_SetDescription((KColorCollection*)self, qstring(desc));
}

const char* k_colorcollection_name(void* self) {
    libqt_string _str = KColorCollection_Name((KColorCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcollection_set_name(void* self, const char* name) {
    KColorCollection_SetName((KColorCollection*)self, qstring(name));
}

int32_t k_colorcollection_editable(void* self) {
    return KColorCollection_Editable((KColorCollection*)self);
}

void k_colorcollection_set_editable(void* self, int32_t editable) {
    KColorCollection_SetEditable((KColorCollection*)self, editable);
}

int32_t k_colorcollection_count(void* self) {
    return KColorCollection_Count((KColorCollection*)self);
}

QColor* k_colorcollection_color(void* self, int index) {
    return KColorCollection_Color((KColorCollection*)self, index);
}

int32_t k_colorcollection_find_color(void* self, void* color) {
    return KColorCollection_FindColor((KColorCollection*)self, (QColor*)color);
}

const char* k_colorcollection_name2(void* self, int index) {
    libqt_string _str = KColorCollection_Name2((KColorCollection*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorcollection_name3(void* self, void* color) {
    libqt_string _str = KColorCollection_Name3((KColorCollection*)self, (QColor*)color);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_colorcollection_add_color(void* self, void* newColor) {
    return KColorCollection_AddColor((KColorCollection*)self, (QColor*)newColor);
}

int32_t k_colorcollection_change_color(void* self, int index, void* newColor) {
    return KColorCollection_ChangeColor((KColorCollection*)self, index, (QColor*)newColor);
}

int32_t k_colorcollection_change_color2(void* self, void* oldColor, void* newColor) {
    return KColorCollection_ChangeColor2((KColorCollection*)self, (QColor*)oldColor, (QColor*)newColor);
}

int32_t k_colorcollection_add_color2(void* self, void* newColor, const char* newColorName) {
    return KColorCollection_AddColor2((KColorCollection*)self, (QColor*)newColor, qstring(newColorName));
}

int32_t k_colorcollection_change_color3(void* self, int index, void* newColor, const char* newColorName) {
    return KColorCollection_ChangeColor3((KColorCollection*)self, index, (QColor*)newColor, qstring(newColorName));
}

int32_t k_colorcollection_change_color32(void* self, void* oldColor, void* newColor, const char* newColorName) {
    return KColorCollection_ChangeColor32((KColorCollection*)self, (QColor*)oldColor, (QColor*)newColor, qstring(newColorName));
}

void k_colorcollection_delete(void* self) {
    KColorCollection_Delete((KColorCollection*)(self));
}
