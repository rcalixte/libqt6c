#include "libkstandardactions_p.hpp"
#include "libkstandardactions_p.h"

KStandardActions__RawStringData* k_standardactions__rawstringdata_new(void* other) {
    return KStandardActions__RawStringData_new((KStandardActions__RawStringData*)other);
}

KStandardActions__RawStringData* k_standardactions__rawstringdata_new2(void* other) {
    return KStandardActions__RawStringData_new2((KStandardActions__RawStringData*)other);
}

KStandardActions__RawStringData* k_standardactions__rawstringdata_new3() {
    return KStandardActions__RawStringData_new3();
}

KStandardActions__RawStringData* k_standardactions__rawstringdata_new4(void* param1) {
    return KStandardActions__RawStringData_new4((KStandardActions__RawStringData*)param1);
}

const char* k_standardactions__rawstringdata_to_string(void* self) {
    libqt_string _str = KStandardActions__RawStringData_ToString((KStandardActions__RawStringData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_standardactions__rawstringdata_delete(void* self) {
    KStandardActions__RawStringData_Delete((KStandardActions__RawStringData*)(self));
}

KStandardActions__KStandardActionsInfo* k_standardactions__kstandardactionsinfo_new(void* param1) {
    return KStandardActions__KStandardActionsInfo_new((KStandardActions__KStandardActionsInfo*)param1);
}

int32_t k_standardactions__kstandardactionsinfo_id(void* self) {
    return KStandardActions__KStandardActionsInfo_Id((KStandardActions__KStandardActionsInfo*)self);
}

void k_standardactions__kstandardactionsinfo_set_id(void* self, int32_t id) {
    KStandardActions__KStandardActionsInfo_SetId((KStandardActions__KStandardActionsInfo*)self, id);
}

int32_t k_standardactions__kstandardactionsinfo_id_accel(void* self) {
    return KStandardActions__KStandardActionsInfo_IdAccel((KStandardActions__KStandardActionsInfo*)self);
}

void k_standardactions__kstandardactionsinfo_set_id_accel(void* self, int32_t idAccel) {
    KStandardActions__KStandardActionsInfo_SetIdAccel((KStandardActions__KStandardActionsInfo*)self, idAccel);
}

const char* k_standardactions__kstandardactionsinfo_ps_label(void* self) {
    return KStandardActions__KStandardActionsInfo_PsLabel((KStandardActions__KStandardActionsInfo*)self);
}

void k_standardactions__kstandardactionsinfo_set_ps_label(void* self, const char* psLabel) {
    KStandardActions__KStandardActionsInfo_SetPsLabel((KStandardActions__KStandardActionsInfo*)self, psLabel);
}

const char* k_standardactions__kstandardactionsinfo_ps_tool_tip(void* self) {
    return KStandardActions__KStandardActionsInfo_PsToolTip((KStandardActions__KStandardActionsInfo*)self);
}

void k_standardactions__kstandardactionsinfo_set_ps_tool_tip(void* self, const char* psToolTip) {
    KStandardActions__KStandardActionsInfo_SetPsToolTip((KStandardActions__KStandardActionsInfo*)self, psToolTip);
}

void k_standardactions__kstandardactionsinfo_delete(void* self) {
    KStandardActions__KStandardActionsInfo_Delete((KStandardActions__KStandardActionsInfo*)(self));
}

const KStandardActions__KStandardActionsInfo* k_standardactions_info_ptr(int32_t param1) {
    return KStandardActions_InfoPtr(param1);
}

const char** k_standardactions_internal_std_names() {
    libqt_list _arr = KStandardActions_InternalStdNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_standardactions_internal_std_names");
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
