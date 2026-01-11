#include "libmembersheet.hpp"
#include "libmembersheet.h"

QDesignerMemberSheetExtension* q_designermembersheetextension_new() {
    return QDesignerMemberSheetExtension_new();
}

int32_t q_designermembersheetextension_count(void* self) {
    return QDesignerMemberSheetExtension_Count((QDesignerMemberSheetExtension*)self);
}

void q_designermembersheetextension_on_count(void* self, int32_t (*callback)()) {
    QDesignerMemberSheetExtension_OnCount((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

int32_t q_designermembersheetextension_qbase_count(void* self) {
    return QDesignerMemberSheetExtension_QBaseCount((QDesignerMemberSheetExtension*)self);
}

int32_t q_designermembersheetextension_index_of(void* self, const char* name) {
    return QDesignerMemberSheetExtension_IndexOf((QDesignerMemberSheetExtension*)self, qstring(name));
}

void q_designermembersheetextension_on_index_of(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerMemberSheetExtension_OnIndexOf((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

int32_t q_designermembersheetextension_qbase_index_of(void* self, const char* name) {
    return QDesignerMemberSheetExtension_QBaseIndexOf((QDesignerMemberSheetExtension*)self, qstring(name));
}

const char* q_designermembersheetextension_member_name(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_MemberName((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermembersheetextension_on_member_name(void* self, const char* (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnMemberName((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

const char* q_designermembersheetextension_qbase_member_name(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_QBaseMemberName((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designermembersheetextension_member_group(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_MemberGroup((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermembersheetextension_on_member_group(void* self, const char* (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnMemberGroup((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

const char* q_designermembersheetextension_qbase_member_group(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_QBaseMemberGroup((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermembersheetextension_set_member_group(void* self, int index, const char* group) {
    QDesignerMemberSheetExtension_SetMemberGroup((QDesignerMemberSheetExtension*)self, index, qstring(group));
}

void q_designermembersheetextension_on_set_member_group(void* self, void (*callback)(void*, int, const char*)) {
    QDesignerMemberSheetExtension_OnSetMemberGroup((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

void q_designermembersheetextension_qbase_set_member_group(void* self, int index, const char* group) {
    QDesignerMemberSheetExtension_QBaseSetMemberGroup((QDesignerMemberSheetExtension*)self, index, qstring(group));
}

bool q_designermembersheetextension_is_visible(void* self, int index) {
    return QDesignerMemberSheetExtension_IsVisible((QDesignerMemberSheetExtension*)self, index);
}

void q_designermembersheetextension_on_is_visible(void* self, bool (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnIsVisible((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

bool q_designermembersheetextension_qbase_is_visible(void* self, int index) {
    return QDesignerMemberSheetExtension_QBaseIsVisible((QDesignerMemberSheetExtension*)self, index);
}

void q_designermembersheetextension_set_visible(void* self, int index, bool b) {
    QDesignerMemberSheetExtension_SetVisible((QDesignerMemberSheetExtension*)self, index, b);
}

void q_designermembersheetextension_on_set_visible(void* self, void (*callback)(void*, int, bool)) {
    QDesignerMemberSheetExtension_OnSetVisible((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

void q_designermembersheetextension_qbase_set_visible(void* self, int index, bool b) {
    QDesignerMemberSheetExtension_QBaseSetVisible((QDesignerMemberSheetExtension*)self, index, b);
}

bool q_designermembersheetextension_is_signal(void* self, int index) {
    return QDesignerMemberSheetExtension_IsSignal((QDesignerMemberSheetExtension*)self, index);
}

void q_designermembersheetextension_on_is_signal(void* self, bool (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnIsSignal((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

bool q_designermembersheetextension_qbase_is_signal(void* self, int index) {
    return QDesignerMemberSheetExtension_QBaseIsSignal((QDesignerMemberSheetExtension*)self, index);
}

bool q_designermembersheetextension_is_slot(void* self, int index) {
    return QDesignerMemberSheetExtension_IsSlot((QDesignerMemberSheetExtension*)self, index);
}

void q_designermembersheetextension_on_is_slot(void* self, bool (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnIsSlot((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

bool q_designermembersheetextension_qbase_is_slot(void* self, int index) {
    return QDesignerMemberSheetExtension_QBaseIsSlot((QDesignerMemberSheetExtension*)self, index);
}

bool q_designermembersheetextension_inherited_from_widget(void* self, int index) {
    return QDesignerMemberSheetExtension_InheritedFromWidget((QDesignerMemberSheetExtension*)self, index);
}

void q_designermembersheetextension_on_inherited_from_widget(void* self, bool (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnInheritedFromWidget((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

bool q_designermembersheetextension_qbase_inherited_from_widget(void* self, int index) {
    return QDesignerMemberSheetExtension_QBaseInheritedFromWidget((QDesignerMemberSheetExtension*)self, index);
}

const char* q_designermembersheetextension_declared_in_class(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_DeclaredInClass((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermembersheetextension_on_declared_in_class(void* self, const char* (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnDeclaredInClass((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

const char* q_designermembersheetextension_qbase_declared_in_class(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_QBaseDeclaredInClass((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designermembersheetextension_signature(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_Signature((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermembersheetextension_on_signature(void* self, const char* (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnSignature((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

const char* q_designermembersheetextension_qbase_signature(void* self, int index) {
    libqt_string _str = QDesignerMemberSheetExtension_QBaseSignature((QDesignerMemberSheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_designermembersheetextension_parameter_types(void* self, int index) {
    libqt_list _arr = QDesignerMemberSheetExtension_ParameterTypes((QDesignerMemberSheetExtension*)self, index);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designermembersheetextension_parameter_types");
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

void q_designermembersheetextension_on_parameter_types(void* self, const char** (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnParameterTypes((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

const char** q_designermembersheetextension_qbase_parameter_types(void* self, int index) {
    libqt_list _arr = QDesignerMemberSheetExtension_QBaseParameterTypes((QDesignerMemberSheetExtension*)self, index);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designermembersheetextension_parameter_types");
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

const char** q_designermembersheetextension_parameter_names(void* self, int index) {
    libqt_list _arr = QDesignerMemberSheetExtension_ParameterNames((QDesignerMemberSheetExtension*)self, index);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designermembersheetextension_parameter_names");
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

void q_designermembersheetextension_on_parameter_names(void* self, const char** (*callback)(void*, int)) {
    QDesignerMemberSheetExtension_OnParameterNames((QDesignerMemberSheetExtension*)self, (intptr_t)callback);
}

const char** q_designermembersheetextension_qbase_parameter_names(void* self, int index) {
    libqt_list _arr = QDesignerMemberSheetExtension_QBaseParameterNames((QDesignerMemberSheetExtension*)self, index);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designermembersheetextension_parameter_names");
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

void q_designermembersheetextension_delete(void* self) {
    QDesignerMemberSheetExtension_Delete((QDesignerMemberSheetExtension*)(self));
}
