#include "libkconfig.hpp"
#include "libkcoreconfigskeleton.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libkconfigskeleton.hpp"
#include "libkconfigskeleton.h"

KConfigSkeleton* k_configskeleton_new() {
    return KConfigSkeleton_new();
}

KConfigSkeleton* k_configskeleton_new2(const char* configname) {
    return KConfigSkeleton_new2(qstring(configname));
}

KConfigSkeleton* k_configskeleton_new3(const char* configname, void* parent) {
    return KConfigSkeleton_new3(qstring(configname), (QObject*)parent);
}

const QMetaObject* k_configskeleton_meta_object(void* self) {
    return KConfigSkeleton_MetaObject((KConfigSkeleton*)self);
}

void k_configskeleton_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KConfigSkeleton_OnMetaObject((KConfigSkeleton*)self, (intptr_t)callback);
}

const QMetaObject* k_configskeleton_qbase_meta_object(void* self) {
    return KConfigSkeleton_QBaseMetaObject((KConfigSkeleton*)self);
}

void* k_configskeleton_metacast(void* self, const char* param1) {
    return KConfigSkeleton_Metacast((KConfigSkeleton*)self, param1);
}

void k_configskeleton_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KConfigSkeleton_OnMetacast((KConfigSkeleton*)self, (intptr_t)callback);
}

void* k_configskeleton_qbase_metacast(void* self, const char* param1) {
    return KConfigSkeleton_QBaseMetacast((KConfigSkeleton*)self, param1);
}

int32_t k_configskeleton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigSkeleton_Metacall((KConfigSkeleton*)self, param1, param2, param3);
}

void k_configskeleton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigSkeleton_OnMetacall((KConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_configskeleton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigSkeleton_QBaseMetacall((KConfigSkeleton*)self, param1, param2, param3);
}

const char* k_configskeleton_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigSkeleton__ItemColor* k_configskeleton_add_item_color(void* self, const char* name, void* reference) {
    return KConfigSkeleton_AddItemColor((KConfigSkeleton*)self, qstring(name), (QColor*)reference);
}

KConfigSkeleton__ItemFont* k_configskeleton_add_item_font(void* self, const char* name, void* reference) {
    return KConfigSkeleton_AddItemFont((KConfigSkeleton*)self, qstring(name), (QFont*)reference);
}

const char* k_configskeleton_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configskeleton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigSkeleton__ItemColor* k_configskeleton_add_item_color3(void* self, const char* name, void* reference, void* defaultValue) {
    return KConfigSkeleton_AddItemColor3((KConfigSkeleton*)self, qstring(name), (QColor*)reference, (QColor*)defaultValue);
}

KConfigSkeleton__ItemColor* k_configskeleton_add_item_color4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KConfigSkeleton_AddItemColor4((KConfigSkeleton*)self, qstring(name), (QColor*)reference, (QColor*)defaultValue, qstring(key));
}

KConfigSkeleton__ItemFont* k_configskeleton_add_item_font3(void* self, const char* name, void* reference, void* defaultValue) {
    return KConfigSkeleton_AddItemFont3((KConfigSkeleton*)self, qstring(name), (QFont*)reference, (QFont*)defaultValue);
}

KConfigSkeleton__ItemFont* k_configskeleton_add_item_font4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KConfigSkeleton_AddItemFont4((KConfigSkeleton*)self, qstring(name), (QFont*)reference, (QFont*)defaultValue, qstring(key));
}

void k_configskeleton_load(void* self) {
    KCoreConfigSkeleton_Load((KCoreConfigSkeleton*)self);
}

void k_configskeleton_read(void* self) {
    KCoreConfigSkeleton_Read((KCoreConfigSkeleton*)self);
}

bool k_configskeleton_is_defaults(void* self) {
    return KCoreConfigSkeleton_IsDefaults((KCoreConfigSkeleton*)self);
}

bool k_configskeleton_is_save_needed(void* self) {
    return KCoreConfigSkeleton_IsSaveNeeded((KCoreConfigSkeleton*)self);
}

void k_configskeleton_set_current_group(void* self, const char* group) {
    KCoreConfigSkeleton_SetCurrentGroup((KCoreConfigSkeleton*)self, qstring(group));
}

const char* k_configskeleton_current_group(void* self) {
    libqt_string _str = KCoreConfigSkeleton_CurrentGroup((KCoreConfigSkeleton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeleton_add_item(void* self, void* item) {
    KCoreConfigSkeleton_AddItem((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item);
}

KCoreConfigSkeleton__ItemString* k_configskeleton_add_item_string(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemString((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPassword((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPath((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemProperty* k_configskeleton_add_item_property(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemProperty((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference);
}

KCoreConfigSkeleton__ItemBool* k_configskeleton_add_item_bool(void* self, const char* name, bool* reference) {
    return KCoreConfigSkeleton_AddItemBool((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference);
}

KCoreConfigSkeleton__ItemInt* k_configskeleton_add_item_int(void* self, const char* name, int* reference) {
    return KCoreConfigSkeleton_AddItemInt((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemUInt* k_configskeleton_add_item_u_int(void* self, const char* name, uint32_t* reference) {
    return KCoreConfigSkeleton_AddItemUInt((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemLongLong* k_configskeleton_add_item_long_long(void* self, const char* name, long long* reference) {
    return KCoreConfigSkeleton_AddItemLongLong((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemULongLong* k_configskeleton_add_item_u_long_long(void* self, const char* name, uint64_t* reference) {
    return KCoreConfigSkeleton_AddItemULongLong((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference);
}

KCoreConfigSkeleton__ItemDouble* k_configskeleton_add_item_double(void* self, const char* name, double* reference) {
    return KCoreConfigSkeleton_AddItemDouble((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemRect* k_configskeleton_add_item_rect(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemRect((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference);
}

KCoreConfigSkeleton__ItemRectF* k_configskeleton_add_item_rect_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemRectF((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference);
}

KCoreConfigSkeleton__ItemPoint* k_configskeleton_add_item_point(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemPoint((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference);
}

KCoreConfigSkeleton__ItemPointF* k_configskeleton_add_item_point_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemPointF((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference);
}

KCoreConfigSkeleton__ItemSize* k_configskeleton_add_item_size(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemSize((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference);
}

KCoreConfigSkeleton__ItemSizeF* k_configskeleton_add_item_size_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemSizeF((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference);
}

KCoreConfigSkeleton__ItemDateTime* k_configskeleton_add_item_date_time(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemDateTime((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference);
}

KCoreConfigSkeleton__ItemStringList* k_configskeleton_add_item_string_list(void* self, const char* name, const char* reference[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configskeleton_add_item_string_list\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton_AddItemStringList((KCoreConfigSkeleton*)self, qstring(name), reference_list);
    free(reference_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemIntList* k_configskeleton_add_item_int_list(void* self, const char* name, libqt_list /* of int */ reference) {
    return KCoreConfigSkeleton_AddItemIntList((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KConfig* k_configskeleton_config(void* self) {
    return KCoreConfigSkeleton_Config((KCoreConfigSkeleton*)self);
}

const KConfig* k_configskeleton_config2(void* self) {
    return KCoreConfigSkeleton_Config2((KCoreConfigSkeleton*)self);
}

libqt_list /* of KConfigSkeletonItem* */ k_configskeleton_items(void* self) {
    libqt_list _arr = KCoreConfigSkeleton_Items((KCoreConfigSkeleton*)self);
    return _arr;
}

void k_configskeleton_remove_item(void* self, const char* name) {
    KCoreConfigSkeleton_RemoveItem((KCoreConfigSkeleton*)self, qstring(name));
}

void k_configskeleton_clear_items(void* self) {
    KCoreConfigSkeleton_ClearItems((KCoreConfigSkeleton*)self);
}

bool k_configskeleton_is_immutable(void* self, const char* name) {
    return KCoreConfigSkeleton_IsImmutable((KCoreConfigSkeleton*)self, qstring(name));
}

KConfigSkeletonItem* k_configskeleton_find_item(void* self, const char* name) {
    return KCoreConfigSkeleton_FindItem((KCoreConfigSkeleton*)self, qstring(name));
}

bool k_configskeleton_save(void* self) {
    return KCoreConfigSkeleton_Save((KCoreConfigSkeleton*)self);
}

void k_configskeleton_config_changed(void* self) {
    KCoreConfigSkeleton_ConfigChanged((KCoreConfigSkeleton*)self);
}

void k_configskeleton_on_config_changed(void* self, void (*callback)(void*)) {
    KCoreConfigSkeleton_Connect_ConfigChanged((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_add_item2(void* self, void* item, const char* name) {
    KCoreConfigSkeleton_AddItem2((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item, qstring(name));
}

KCoreConfigSkeleton__ItemString* k_configskeleton_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemString3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemString* k_configskeleton_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemString4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPassword3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPassword4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPath3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPath4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemProperty* k_configskeleton_add_item_property3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemProperty3((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference, (QVariant*)defaultValue);
}

KCoreConfigSkeleton__ItemProperty* k_configskeleton_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemProperty4((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference, (QVariant*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemBool* k_configskeleton_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue) {
    return KCoreConfigSkeleton_AddItemBool3((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference, defaultValue);
}

KCoreConfigSkeleton__ItemBool* k_configskeleton_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemBool4((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemInt* k_configskeleton_add_item_int3(void* self, const char* name, int* reference, int defaultValue) {
    return KCoreConfigSkeleton_AddItemInt3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemInt* k_configskeleton_add_item_int4(void* self, const char* name, int* reference, int defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemInt4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemUInt* k_configskeleton_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue) {
    return KCoreConfigSkeleton_AddItemUInt3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemUInt* k_configskeleton_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemUInt4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemLongLong* k_configskeleton_add_item_long_long3(void* self, const char* name, long long* reference, long long defaultValue) {
    return KCoreConfigSkeleton_AddItemLongLong3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemLongLong* k_configskeleton_add_item_long_long4(void* self, const char* name, long long* reference, long long defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemLongLong4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemULongLong* k_configskeleton_add_item_u_long_long3(void* self, const char* name, uint64_t* reference, uint64_t defaultValue) {
    return KCoreConfigSkeleton_AddItemULongLong3((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference, defaultValue);
}

KCoreConfigSkeleton__ItemULongLong* k_configskeleton_add_item_u_long_long4(void* self, const char* name, uint64_t* reference, uint64_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemULongLong4((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemDouble* k_configskeleton_add_item_double3(void* self, const char* name, double* reference, double defaultValue) {
    return KCoreConfigSkeleton_AddItemDouble3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemDouble* k_configskeleton_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemDouble4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemRect* k_configskeleton_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemRect3((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference, (QRect*)defaultValue);
}

KCoreConfigSkeleton__ItemRect* k_configskeleton_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemRect4((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference, (QRect*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemRectF* k_configskeleton_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemRectF3((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference, (QRectF*)defaultValue);
}

KCoreConfigSkeleton__ItemRectF* k_configskeleton_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemRectF4((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference, (QRectF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemPoint* k_configskeleton_add_item_point3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemPoint3((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference, (QPoint*)defaultValue);
}

KCoreConfigSkeleton__ItemPoint* k_configskeleton_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPoint4((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference, (QPoint*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemPointF* k_configskeleton_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemPointF3((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference, (QPointF*)defaultValue);
}

KCoreConfigSkeleton__ItemPointF* k_configskeleton_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPointF4((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference, (QPointF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemSize* k_configskeleton_add_item_size3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemSize3((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference, (QSize*)defaultValue);
}

KCoreConfigSkeleton__ItemSize* k_configskeleton_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemSize4((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference, (QSize*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemSizeF* k_configskeleton_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemSizeF3((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference, (QSizeF*)defaultValue);
}

KCoreConfigSkeleton__ItemSizeF* k_configskeleton_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemSizeF4((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference, (QSizeF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemDateTime* k_configskeleton_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemDateTime3((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference, (QDateTime*)defaultValue);
}

KCoreConfigSkeleton__ItemDateTime* k_configskeleton_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemDateTime4((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference, (QDateTime*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemStringList* k_configskeleton_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configskeleton_add_item_string_list3\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configskeleton_add_item_string_list3\n");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);
    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton_AddItemStringList3((KCoreConfigSkeleton*)self, qstring(name), reference_list, defaultValue_list);
    free(reference_qstr);
    free(defaultValue_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemStringList* k_configskeleton_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configskeleton_add_item_string_list4\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configskeleton_add_item_string_list4\n");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);
    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton_AddItemStringList4((KCoreConfigSkeleton*)self, qstring(name), reference_list, defaultValue_list, qstring(key));
    free(reference_qstr);
    free(defaultValue_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemIntList* k_configskeleton_add_item_int_list3(void* self, const char* name, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue) {
    return KCoreConfigSkeleton_AddItemIntList3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemIntList* k_configskeleton_add_item_int_list4(void* self, const char* name, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemIntList4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

const char* k_configskeleton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeleton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configskeleton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configskeleton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configskeleton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configskeleton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configskeleton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configskeleton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configskeleton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configskeleton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_configskeleton_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_configskeleton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configskeleton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configskeleton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configskeleton_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_configskeleton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configskeleton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configskeleton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configskeleton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configskeleton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configskeleton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_configskeleton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configskeleton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_configskeleton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_configskeleton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_configskeleton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configskeleton_dynamic_property_names\n");
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

QBindingStorage* k_configskeleton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configskeleton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configskeleton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configskeleton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configskeleton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configskeleton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configskeleton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_configskeleton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_configskeleton_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_configskeleton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_configskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_configskeleton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configskeleton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_configskeleton_set_defaults(void* self) {
    KConfigSkeleton_SetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_qbase_set_defaults(void* self) {
    KConfigSkeleton_QBaseSetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_on_set_defaults(void* self, void (*callback)()) {
    KConfigSkeleton_OnSetDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_use_defaults(void* self, bool b) {
    return KConfigSkeleton_UseDefaults((KConfigSkeleton*)self, b);
}

bool k_configskeleton_qbase_use_defaults(void* self, bool b) {
    return KConfigSkeleton_QBaseUseDefaults((KConfigSkeleton*)self, b);
}

void k_configskeleton_on_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KConfigSkeleton_OnUseDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_usr_use_defaults(void* self, bool b) {
    return KConfigSkeleton_UsrUseDefaults((KConfigSkeleton*)self, b);
}

bool k_configskeleton_qbase_usr_use_defaults(void* self, bool b) {
    return KConfigSkeleton_QBaseUsrUseDefaults((KConfigSkeleton*)self, b);
}

void k_configskeleton_on_usr_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KConfigSkeleton_OnUsrUseDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_usr_set_defaults(void* self) {
    KConfigSkeleton_UsrSetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_qbase_usr_set_defaults(void* self) {
    KConfigSkeleton_QBaseUsrSetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_on_usr_set_defaults(void* self, void (*callback)()) {
    KConfigSkeleton_OnUsrSetDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_usr_read(void* self) {
    KConfigSkeleton_UsrRead((KConfigSkeleton*)self);
}

void k_configskeleton_qbase_usr_read(void* self) {
    KConfigSkeleton_QBaseUsrRead((KConfigSkeleton*)self);
}

void k_configskeleton_on_usr_read(void* self, void (*callback)()) {
    KConfigSkeleton_OnUsrRead((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_usr_save(void* self) {
    return KConfigSkeleton_UsrSave((KConfigSkeleton*)self);
}

bool k_configskeleton_qbase_usr_save(void* self) {
    return KConfigSkeleton_QBaseUsrSave((KConfigSkeleton*)self);
}

void k_configskeleton_on_usr_save(void* self, bool (*callback)()) {
    KConfigSkeleton_OnUsrSave((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_event(void* self, void* event) {
    return KConfigSkeleton_Event((KConfigSkeleton*)self, (QEvent*)event);
}

bool k_configskeleton_qbase_event(void* self, void* event) {
    return KConfigSkeleton_QBaseEvent((KConfigSkeleton*)self, (QEvent*)event);
}

void k_configskeleton_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeleton_OnEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_event_filter(void* self, void* watched, void* event) {
    return KConfigSkeleton_EventFilter((KConfigSkeleton*)self, (QObject*)watched, (QEvent*)event);
}

bool k_configskeleton_qbase_event_filter(void* self, void* watched, void* event) {
    return KConfigSkeleton_QBaseEventFilter((KConfigSkeleton*)self, (QObject*)watched, (QEvent*)event);
}

void k_configskeleton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigSkeleton_OnEventFilter((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_timer_event(void* self, void* event) {
    KConfigSkeleton_TimerEvent((KConfigSkeleton*)self, (QTimerEvent*)event);
}

void k_configskeleton_qbase_timer_event(void* self, void* event) {
    KConfigSkeleton_QBaseTimerEvent((KConfigSkeleton*)self, (QTimerEvent*)event);
}

void k_configskeleton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnTimerEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_child_event(void* self, void* event) {
    KConfigSkeleton_ChildEvent((KConfigSkeleton*)self, (QChildEvent*)event);
}

void k_configskeleton_qbase_child_event(void* self, void* event) {
    KConfigSkeleton_QBaseChildEvent((KConfigSkeleton*)self, (QChildEvent*)event);
}

void k_configskeleton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnChildEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_custom_event(void* self, void* event) {
    KConfigSkeleton_CustomEvent((KConfigSkeleton*)self, (QEvent*)event);
}

void k_configskeleton_qbase_custom_event(void* self, void* event) {
    KConfigSkeleton_QBaseCustomEvent((KConfigSkeleton*)self, (QEvent*)event);
}

void k_configskeleton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnCustomEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_connect_notify(void* self, void* signal) {
    KConfigSkeleton_ConnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_qbase_connect_notify(void* self, void* signal) {
    KConfigSkeleton_QBaseConnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnConnectNotify((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_disconnect_notify(void* self, void* signal) {
    KConfigSkeleton_DisconnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_qbase_disconnect_notify(void* self, void* signal) {
    KConfigSkeleton_QBaseDisconnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnDisconnectNotify((KConfigSkeleton*)self, (intptr_t)callback);
}

QObject* k_configskeleton_sender(void* self) {
    return KConfigSkeleton_Sender((KConfigSkeleton*)self);
}

QObject* k_configskeleton_qbase_sender(void* self) {
    return KConfigSkeleton_QBaseSender((KConfigSkeleton*)self);
}

void k_configskeleton_on_sender(void* self, QObject* (*callback)()) {
    KConfigSkeleton_OnSender((KConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_configskeleton_sender_signal_index(void* self) {
    return KConfigSkeleton_SenderSignalIndex((KConfigSkeleton*)self);
}

int32_t k_configskeleton_qbase_sender_signal_index(void* self) {
    return KConfigSkeleton_QBaseSenderSignalIndex((KConfigSkeleton*)self);
}

void k_configskeleton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KConfigSkeleton_OnSenderSignalIndex((KConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_configskeleton_receivers(void* self, const char* signal) {
    return KConfigSkeleton_Receivers((KConfigSkeleton*)self, signal);
}

int32_t k_configskeleton_qbase_receivers(void* self, const char* signal) {
    return KConfigSkeleton_QBaseReceivers((KConfigSkeleton*)self, signal);
}

void k_configskeleton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KConfigSkeleton_OnReceivers((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_is_signal_connected(void* self, void* signal) {
    return KConfigSkeleton_IsSignalConnected((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

bool k_configskeleton_qbase_is_signal_connected(void* self, void* signal) {
    return KConfigSkeleton_QBaseIsSignalConnected((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeleton_OnIsSignalConnected((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configskeleton_delete(void* self) {
    KConfigSkeleton_Delete((KConfigSkeleton*)(self));
}

KConfigSkeleton__ItemColor* k_configskeleton__itemcolor_new(const char* _group, const char* _key, void* reference) {
    return KConfigSkeleton__ItemColor_new(qstring(_group), qstring(_key), (QColor*)reference);
}

KConfigSkeleton__ItemColor* k_configskeleton__itemcolor_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KConfigSkeleton__ItemColor_new2(qstring(_group), qstring(_key), (QColor*)reference, (QColor*)defaultValue);
}

void k_configskeleton__itemcolor_read_config(void* self, void* config) {
    KConfigSkeleton__ItemColor_ReadConfig((KConfigSkeleton__ItemColor*)self, (KConfig*)config);
}

void k_configskeleton__itemcolor_on_read_config(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton__ItemColor_OnReadConfig((KConfigSkeleton__ItemColor*)self, (intptr_t)callback);
}

void k_configskeleton__itemcolor_qbase_read_config(void* self, void* config) {
    KConfigSkeleton__ItemColor_QBaseReadConfig((KConfigSkeleton__ItemColor*)self, (KConfig*)config);
}

void k_configskeleton__itemcolor_set_property(void* self, void* p) {
    KConfigSkeleton__ItemColor_SetProperty((KConfigSkeleton__ItemColor*)self, (QVariant*)p);
}

void k_configskeleton__itemcolor_on_set_property(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton__ItemColor_OnSetProperty((KConfigSkeleton__ItemColor*)self, (intptr_t)callback);
}

void k_configskeleton__itemcolor_qbase_set_property(void* self, void* p) {
    KConfigSkeleton__ItemColor_QBaseSetProperty((KConfigSkeleton__ItemColor*)self, (QVariant*)p);
}

bool k_configskeleton__itemcolor_is_equal(void* self, void* p) {
    return KConfigSkeleton__ItemColor_IsEqual((KConfigSkeleton__ItemColor*)self, (QVariant*)p);
}

void k_configskeleton__itemcolor_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeleton__ItemColor_OnIsEqual((KConfigSkeleton__ItemColor*)self, (intptr_t)callback);
}

bool k_configskeleton__itemcolor_qbase_is_equal(void* self, void* p) {
    return KConfigSkeleton__ItemColor_QBaseIsEqual((KConfigSkeleton__ItemColor*)self, (QVariant*)p);
}

QVariant* k_configskeleton__itemcolor_property(void* self) {
    return KConfigSkeleton__ItemColor_Property((KConfigSkeleton__ItemColor*)self);
}

void k_configskeleton__itemcolor_on_property(void* self, QVariant* (*callback)()) {
    KConfigSkeleton__ItemColor_OnProperty((KConfigSkeleton__ItemColor*)self, (intptr_t)callback);
}

QVariant* k_configskeleton__itemcolor_qbase_property(void* self) {
    return KConfigSkeleton__ItemColor_QBaseProperty((KConfigSkeleton__ItemColor*)self);
}

void k_configskeleton__itemcolor_delete(void* self) {
    KConfigSkeleton__ItemColor_Delete((KConfigSkeleton__ItemColor*)(self));
}

KConfigSkeleton__ItemFont* k_configskeleton__itemfont_new(const char* _group, const char* _key, void* reference) {
    return KConfigSkeleton__ItemFont_new(qstring(_group), qstring(_key), (QFont*)reference);
}

KConfigSkeleton__ItemFont* k_configskeleton__itemfont_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KConfigSkeleton__ItemFont_new2(qstring(_group), qstring(_key), (QFont*)reference, (QFont*)defaultValue);
}

void k_configskeleton__itemfont_read_config(void* self, void* config) {
    KConfigSkeleton__ItemFont_ReadConfig((KConfigSkeleton__ItemFont*)self, (KConfig*)config);
}

void k_configskeleton__itemfont_on_read_config(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton__ItemFont_OnReadConfig((KConfigSkeleton__ItemFont*)self, (intptr_t)callback);
}

void k_configskeleton__itemfont_qbase_read_config(void* self, void* config) {
    KConfigSkeleton__ItemFont_QBaseReadConfig((KConfigSkeleton__ItemFont*)self, (KConfig*)config);
}

void k_configskeleton__itemfont_set_property(void* self, void* p) {
    KConfigSkeleton__ItemFont_SetProperty((KConfigSkeleton__ItemFont*)self, (QVariant*)p);
}

void k_configskeleton__itemfont_on_set_property(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton__ItemFont_OnSetProperty((KConfigSkeleton__ItemFont*)self, (intptr_t)callback);
}

void k_configskeleton__itemfont_qbase_set_property(void* self, void* p) {
    KConfigSkeleton__ItemFont_QBaseSetProperty((KConfigSkeleton__ItemFont*)self, (QVariant*)p);
}

bool k_configskeleton__itemfont_is_equal(void* self, void* p) {
    return KConfigSkeleton__ItemFont_IsEqual((KConfigSkeleton__ItemFont*)self, (QVariant*)p);
}

void k_configskeleton__itemfont_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeleton__ItemFont_OnIsEqual((KConfigSkeleton__ItemFont*)self, (intptr_t)callback);
}

bool k_configskeleton__itemfont_qbase_is_equal(void* self, void* p) {
    return KConfigSkeleton__ItemFont_QBaseIsEqual((KConfigSkeleton__ItemFont*)self, (QVariant*)p);
}

QVariant* k_configskeleton__itemfont_property(void* self) {
    return KConfigSkeleton__ItemFont_Property((KConfigSkeleton__ItemFont*)self);
}

void k_configskeleton__itemfont_on_property(void* self, QVariant* (*callback)()) {
    KConfigSkeleton__ItemFont_OnProperty((KConfigSkeleton__ItemFont*)self, (intptr_t)callback);
}

QVariant* k_configskeleton__itemfont_qbase_property(void* self) {
    return KConfigSkeleton__ItemFont_QBaseProperty((KConfigSkeleton__ItemFont*)self);
}

void k_configskeleton__itemfont_delete(void* self) {
    KConfigSkeleton__ItemFont_Delete((KConfigSkeleton__ItemFont*)(self));
}
