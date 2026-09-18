#include "../libqurl.hpp"
#include "libstyleselector.hpp"
#include "libstyleselector.h"

Kirigami__Platform__StyleSelector* k_irigami__platform__styleselector_new(void* other) {
    return Kirigami__Platform__StyleSelector_New((Kirigami__Platform__StyleSelector*)other);
}

Kirigami__Platform__StyleSelector* k_irigami__platform__styleselector_new2(void* other) {
    return Kirigami__Platform__StyleSelector_New2((Kirigami__Platform__StyleSelector*)other);
}

void k_irigami__platform__styleselector_copy_assign(void* self, void* other) {
    Kirigami__Platform__StyleSelector_CopyAssign((Kirigami__Platform__StyleSelector*)self, (Kirigami__Platform__StyleSelector*)other);
}

void k_irigami__platform__styleselector_move_assign(void* self, void* other) {
    Kirigami__Platform__StyleSelector_MoveAssign((Kirigami__Platform__StyleSelector*)self, (Kirigami__Platform__StyleSelector*)other);
}

const char* k_irigami__platform__styleselector_style() {
    libqt_string _str = Kirigami__Platform__StyleSelector_Style();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_irigami__platform__styleselector_style_chain() {
    libqt_list _arr = Kirigami__Platform__StyleSelector_StyleChain();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__styleselector_style_chain\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QUrl* k_irigami__platform__styleselector_component_url(const char* fileName) {
    return Kirigami__Platform__StyleSelector_ComponentUrl(qstring(fileName));
}

void k_irigami__platform__styleselector_set_base_url(void* baseUrl) {
    Kirigami__Platform__StyleSelector_SetBaseUrl((QUrl*)baseUrl);
}

const char* k_irigami__platform__styleselector_resolve_file_path(const char* path) {
    libqt_string _str = Kirigami__Platform__StyleSelector_ResolveFilePath(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__styleselector_resolve_file_url(const char* path) {
    libqt_string _str = Kirigami__Platform__StyleSelector_ResolveFileUrl(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__styleselector_delete(void* self) {
    Kirigami__Platform__StyleSelector_Delete((Kirigami__Platform__StyleSelector*)(self));
}
