#include "libkconfig.hpp"
#include "libkconfiggroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libkcoreconfigskeleton.hpp"
#include "libkcoreconfigskeleton.h"

KConfigSkeletonItem* k_configskeletonitem_new(const char* _group, const char* _key) {
    return KConfigSkeletonItem_new(qstring(_group), qstring(_key));
}

KConfigSkeletonItem* k_configskeletonitem_new2(void* param1) {
    return KConfigSkeletonItem_new2((KConfigSkeletonItem*)param1);
}

void k_configskeletonitem_set_group(void* self, const char* _group) {
    KConfigSkeletonItem_SetGroup((KConfigSkeletonItem*)self, qstring(_group));
}

const char* k_configskeletonitem_group(void* self) {
    libqt_string _str = KConfigSkeletonItem_Group((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeletonitem_set_group2(void* self, void* cg) {
    KConfigSkeletonItem_SetGroup2((KConfigSkeletonItem*)self, (KConfigGroup*)cg);
}

KConfigGroup* k_configskeletonitem_config_group(void* self, void* config) {
    return KConfigSkeletonItem_ConfigGroup((KConfigSkeletonItem*)self, (KConfig*)config);
}

void k_configskeletonitem_set_key(void* self, const char* _key) {
    KConfigSkeletonItem_SetKey((KConfigSkeletonItem*)self, qstring(_key));
}

const char* k_configskeletonitem_key(void* self) {
    libqt_string _str = KConfigSkeletonItem_Key((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeletonitem_set_name(void* self, const char* _name) {
    KConfigSkeletonItem_SetName((KConfigSkeletonItem*)self, qstring(_name));
}

const char* k_configskeletonitem_name(void* self) {
    libqt_string _str = KConfigSkeletonItem_Name((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeletonitem_set_label(void* self, const char* l) {
    KConfigSkeletonItem_SetLabel((KConfigSkeletonItem*)self, qstring(l));
}

const char* k_configskeletonitem_label(void* self) {
    libqt_string _str = KConfigSkeletonItem_Label((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeletonitem_set_tool_tip(void* self, const char* t) {
    KConfigSkeletonItem_SetToolTip((KConfigSkeletonItem*)self, qstring(t));
}

const char* k_configskeletonitem_tool_tip(void* self) {
    libqt_string _str = KConfigSkeletonItem_ToolTip((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeletonitem_set_whats_this(void* self, const char* w) {
    KConfigSkeletonItem_SetWhatsThis((KConfigSkeletonItem*)self, qstring(w));
}

const char* k_configskeletonitem_whats_this(void* self) {
    libqt_string _str = KConfigSkeletonItem_WhatsThis((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeletonitem_set_write_flags(void* self, int64_t flags) {
    KConfigSkeletonItem_SetWriteFlags((KConfigSkeletonItem*)self, flags);
}

int64_t k_configskeletonitem_write_flags(void* self) {
    return KConfigSkeletonItem_WriteFlags((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_read_config(void* self, void* param1) {
    KConfigSkeletonItem_ReadConfig((KConfigSkeletonItem*)self, (KConfig*)param1);
}

void k_configskeletonitem_on_read_config(void* self, void (*callback)(void*, void*)) {
    KConfigSkeletonItem_OnReadConfig((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_read_config(void* self, void* param1) {
    KConfigSkeletonItem_QBaseReadConfig((KConfigSkeletonItem*)self, (KConfig*)param1);
}

void k_configskeletonitem_write_config(void* self, void* param1) {
    KConfigSkeletonItem_WriteConfig((KConfigSkeletonItem*)self, (KConfig*)param1);
}

void k_configskeletonitem_on_write_config(void* self, void (*callback)(void*, void*)) {
    KConfigSkeletonItem_OnWriteConfig((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_write_config(void* self, void* param1) {
    KConfigSkeletonItem_QBaseWriteConfig((KConfigSkeletonItem*)self, (KConfig*)param1);
}

void k_configskeletonitem_read_default(void* self, void* param1) {
    KConfigSkeletonItem_ReadDefault((KConfigSkeletonItem*)self, (KConfig*)param1);
}

void k_configskeletonitem_on_read_default(void* self, void (*callback)(void*, void*)) {
    KConfigSkeletonItem_OnReadDefault((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_read_default(void* self, void* param1) {
    KConfigSkeletonItem_QBaseReadDefault((KConfigSkeletonItem*)self, (KConfig*)param1);
}

void k_configskeletonitem_set_property(void* self, void* p) {
    KConfigSkeletonItem_SetProperty((KConfigSkeletonItem*)self, (QVariant*)p);
}

void k_configskeletonitem_on_set_property(void* self, void (*callback)(void*, void*)) {
    KConfigSkeletonItem_OnSetProperty((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_set_property(void* self, void* p) {
    KConfigSkeletonItem_QBaseSetProperty((KConfigSkeletonItem*)self, (QVariant*)p);
}

bool k_configskeletonitem_is_equal(void* self, void* p) {
    return KConfigSkeletonItem_IsEqual((KConfigSkeletonItem*)self, (QVariant*)p);
}

void k_configskeletonitem_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeletonItem_OnIsEqual((KConfigSkeletonItem*)self, (intptr_t)callback);
}

bool k_configskeletonitem_qbase_is_equal(void* self, void* p) {
    return KConfigSkeletonItem_QBaseIsEqual((KConfigSkeletonItem*)self, (QVariant*)p);
}

QVariant* k_configskeletonitem_property(void* self) {
    return KConfigSkeletonItem_Property((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_on_property(void* self, QVariant* (*callback)()) {
    KConfigSkeletonItem_OnProperty((KConfigSkeletonItem*)self, (intptr_t)callback);
}

QVariant* k_configskeletonitem_qbase_property(void* self) {
    return KConfigSkeletonItem_QBaseProperty((KConfigSkeletonItem*)self);
}

QVariant* k_configskeletonitem_min_value(void* self) {
    return KConfigSkeletonItem_MinValue((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_on_min_value(void* self, QVariant* (*callback)()) {
    KConfigSkeletonItem_OnMinValue((KConfigSkeletonItem*)self, (intptr_t)callback);
}

QVariant* k_configskeletonitem_qbase_min_value(void* self) {
    return KConfigSkeletonItem_QBaseMinValue((KConfigSkeletonItem*)self);
}

QVariant* k_configskeletonitem_max_value(void* self) {
    return KConfigSkeletonItem_MaxValue((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_on_max_value(void* self, QVariant* (*callback)()) {
    KConfigSkeletonItem_OnMaxValue((KConfigSkeletonItem*)self, (intptr_t)callback);
}

QVariant* k_configskeletonitem_qbase_max_value(void* self) {
    return KConfigSkeletonItem_QBaseMaxValue((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_set_default(void* self) {
    KConfigSkeletonItem_SetDefault((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_on_set_default(void* self, void (*callback)()) {
    KConfigSkeletonItem_OnSetDefault((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_set_default(void* self) {
    KConfigSkeletonItem_QBaseSetDefault((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_swap_default(void* self) {
    KConfigSkeletonItem_SwapDefault((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_on_swap_default(void* self, void (*callback)()) {
    KConfigSkeletonItem_OnSwapDefault((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_swap_default(void* self) {
    KConfigSkeletonItem_QBaseSwapDefault((KConfigSkeletonItem*)self);
}

bool k_configskeletonitem_is_immutable(void* self) {
    return KConfigSkeletonItem_IsImmutable((KConfigSkeletonItem*)self);
}

bool k_configskeletonitem_is_default(void* self) {
    return KConfigSkeletonItem_IsDefault((KConfigSkeletonItem*)self);
}

bool k_configskeletonitem_is_save_needed(void* self) {
    return KConfigSkeletonItem_IsSaveNeeded((KConfigSkeletonItem*)self);
}

QVariant* k_configskeletonitem_get_default(void* self) {
    return KConfigSkeletonItem_GetDefault((KConfigSkeletonItem*)self);
}

void k_configskeletonitem_read_immutability(void* self, void* group) {
    KConfigSkeletonItem_ReadImmutability((KConfigSkeletonItem*)self, (KConfigGroup*)group);
}

void k_configskeletonitem_on_read_immutability(void* self, void (*callback)(void*, void*)) {
    KConfigSkeletonItem_OnReadImmutability((KConfigSkeletonItem*)self, (intptr_t)callback);
}

void k_configskeletonitem_qbase_read_immutability(void* self, void* group) {
    KConfigSkeletonItem_QBaseReadImmutability((KConfigSkeletonItem*)self, (KConfigGroup*)group);
}

void k_configskeletonitem_delete(void* self) {
    KConfigSkeletonItem_Delete((KConfigSkeletonItem*)(self));
}

KPropertySkeletonItem* k_propertyskeletonitem_new(void* object, const char* propertyName, void* defaultValue) {
    return KPropertySkeletonItem_new((QObject*)object, qstring(propertyName), (QVariant*)defaultValue);
}

KPropertySkeletonItem* k_propertyskeletonitem_new2(void* param1) {
    return KPropertySkeletonItem_new2((KPropertySkeletonItem*)param1);
}

QVariant* k_propertyskeletonitem_property(void* self) {
    return KPropertySkeletonItem_Property((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_on_property(void* self, QVariant* (*callback)()) {
    KPropertySkeletonItem_OnProperty((KPropertySkeletonItem*)self, (intptr_t)callback);
}

QVariant* k_propertyskeletonitem_qbase_property(void* self) {
    return KPropertySkeletonItem_QBaseProperty((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_set_property(void* self, void* p) {
    KPropertySkeletonItem_SetProperty((KPropertySkeletonItem*)self, (QVariant*)p);
}

void k_propertyskeletonitem_on_set_property(void* self, void (*callback)(void*, void*)) {
    KPropertySkeletonItem_OnSetProperty((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_qbase_set_property(void* self, void* p) {
    KPropertySkeletonItem_QBaseSetProperty((KPropertySkeletonItem*)self, (QVariant*)p);
}

bool k_propertyskeletonitem_is_equal(void* self, void* p) {
    return KPropertySkeletonItem_IsEqual((KPropertySkeletonItem*)self, (QVariant*)p);
}

void k_propertyskeletonitem_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KPropertySkeletonItem_OnIsEqual((KPropertySkeletonItem*)self, (intptr_t)callback);
}

bool k_propertyskeletonitem_qbase_is_equal(void* self, void* p) {
    return KPropertySkeletonItem_QBaseIsEqual((KPropertySkeletonItem*)self, (QVariant*)p);
}

void k_propertyskeletonitem_read_config(void* self, void* param1) {
    KPropertySkeletonItem_ReadConfig((KPropertySkeletonItem*)self, (KConfig*)param1);
}

void k_propertyskeletonitem_on_read_config(void* self, void (*callback)(void*, void*)) {
    KPropertySkeletonItem_OnReadConfig((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_qbase_read_config(void* self, void* param1) {
    KPropertySkeletonItem_QBaseReadConfig((KPropertySkeletonItem*)self, (KConfig*)param1);
}

void k_propertyskeletonitem_write_config(void* self, void* param1) {
    KPropertySkeletonItem_WriteConfig((KPropertySkeletonItem*)self, (KConfig*)param1);
}

void k_propertyskeletonitem_on_write_config(void* self, void (*callback)(void*, void*)) {
    KPropertySkeletonItem_OnWriteConfig((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_qbase_write_config(void* self, void* param1) {
    KPropertySkeletonItem_QBaseWriteConfig((KPropertySkeletonItem*)self, (KConfig*)param1);
}

void k_propertyskeletonitem_read_default(void* self, void* param1) {
    KPropertySkeletonItem_ReadDefault((KPropertySkeletonItem*)self, (KConfig*)param1);
}

void k_propertyskeletonitem_on_read_default(void* self, void (*callback)(void*, void*)) {
    KPropertySkeletonItem_OnReadDefault((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_qbase_read_default(void* self, void* param1) {
    KPropertySkeletonItem_QBaseReadDefault((KPropertySkeletonItem*)self, (KConfig*)param1);
}

void k_propertyskeletonitem_set_default(void* self) {
    KPropertySkeletonItem_SetDefault((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_on_set_default(void* self, void (*callback)()) {
    KPropertySkeletonItem_OnSetDefault((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_qbase_set_default(void* self) {
    KPropertySkeletonItem_QBaseSetDefault((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_swap_default(void* self) {
    KPropertySkeletonItem_SwapDefault((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_on_swap_default(void* self, void (*callback)()) {
    KPropertySkeletonItem_OnSwapDefault((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_qbase_swap_default(void* self) {
    KPropertySkeletonItem_QBaseSwapDefault((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_set_group(void* self, const char* _group) {
    KConfigSkeletonItem_SetGroup((KConfigSkeletonItem*)self, qstring(_group));
}

const char* k_propertyskeletonitem_group(void* self) {
    libqt_string _str = KConfigSkeletonItem_Group((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertyskeletonitem_set_group2(void* self, void* cg) {
    KConfigSkeletonItem_SetGroup2((KConfigSkeletonItem*)self, (KConfigGroup*)cg);
}

KConfigGroup* k_propertyskeletonitem_config_group(void* self, void* config) {
    return KConfigSkeletonItem_ConfigGroup((KConfigSkeletonItem*)self, (KConfig*)config);
}

void k_propertyskeletonitem_set_key(void* self, const char* _key) {
    KConfigSkeletonItem_SetKey((KConfigSkeletonItem*)self, qstring(_key));
}

const char* k_propertyskeletonitem_key(void* self) {
    libqt_string _str = KConfigSkeletonItem_Key((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertyskeletonitem_set_name(void* self, const char* _name) {
    KConfigSkeletonItem_SetName((KConfigSkeletonItem*)self, qstring(_name));
}

const char* k_propertyskeletonitem_name(void* self) {
    libqt_string _str = KConfigSkeletonItem_Name((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertyskeletonitem_set_label(void* self, const char* l) {
    KConfigSkeletonItem_SetLabel((KConfigSkeletonItem*)self, qstring(l));
}

const char* k_propertyskeletonitem_label(void* self) {
    libqt_string _str = KConfigSkeletonItem_Label((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertyskeletonitem_set_tool_tip(void* self, const char* t) {
    KConfigSkeletonItem_SetToolTip((KConfigSkeletonItem*)self, qstring(t));
}

const char* k_propertyskeletonitem_tool_tip(void* self) {
    libqt_string _str = KConfigSkeletonItem_ToolTip((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertyskeletonitem_set_whats_this(void* self, const char* w) {
    KConfigSkeletonItem_SetWhatsThis((KConfigSkeletonItem*)self, qstring(w));
}

const char* k_propertyskeletonitem_whats_this(void* self) {
    libqt_string _str = KConfigSkeletonItem_WhatsThis((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertyskeletonitem_set_write_flags(void* self, int64_t flags) {
    KConfigSkeletonItem_SetWriteFlags((KConfigSkeletonItem*)self, flags);
}

int64_t k_propertyskeletonitem_write_flags(void* self) {
    return KConfigSkeletonItem_WriteFlags((KConfigSkeletonItem*)self);
}

bool k_propertyskeletonitem_is_immutable(void* self) {
    return KConfigSkeletonItem_IsImmutable((KConfigSkeletonItem*)self);
}

bool k_propertyskeletonitem_is_default(void* self) {
    return KConfigSkeletonItem_IsDefault((KConfigSkeletonItem*)self);
}

bool k_propertyskeletonitem_is_save_needed(void* self) {
    return KConfigSkeletonItem_IsSaveNeeded((KConfigSkeletonItem*)self);
}

QVariant* k_propertyskeletonitem_get_default(void* self) {
    return KConfigSkeletonItem_GetDefault((KConfigSkeletonItem*)self);
}

QVariant* k_propertyskeletonitem_min_value(void* self) {
    return KPropertySkeletonItem_MinValue((KPropertySkeletonItem*)self);
}

QVariant* k_propertyskeletonitem_qbase_min_value(void* self) {
    return KPropertySkeletonItem_QBaseMinValue((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_on_min_value(void* self, QVariant* (*callback)()) {
    KPropertySkeletonItem_OnMinValue((KPropertySkeletonItem*)self, (intptr_t)callback);
}

QVariant* k_propertyskeletonitem_max_value(void* self) {
    return KPropertySkeletonItem_MaxValue((KPropertySkeletonItem*)self);
}

QVariant* k_propertyskeletonitem_qbase_max_value(void* self) {
    return KPropertySkeletonItem_QBaseMaxValue((KPropertySkeletonItem*)self);
}

void k_propertyskeletonitem_on_max_value(void* self, QVariant* (*callback)()) {
    KPropertySkeletonItem_OnMaxValue((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_read_immutability(void* self, void* group) {
    KPropertySkeletonItem_ReadImmutability((KPropertySkeletonItem*)self, (KConfigGroup*)group);
}

void k_propertyskeletonitem_qbase_read_immutability(void* self, void* group) {
    KPropertySkeletonItem_QBaseReadImmutability((KPropertySkeletonItem*)self, (KConfigGroup*)group);
}

void k_propertyskeletonitem_on_read_immutability(void* self, void (*callback)(void*, void*)) {
    KPropertySkeletonItem_OnReadImmutability((KPropertySkeletonItem*)self, (intptr_t)callback);
}

void k_propertyskeletonitem_delete(void* self) {
    KPropertySkeletonItem_Delete((KPropertySkeletonItem*)(self));
}

void k_configcompilersignallingitem_read_config(void* self, void* param1) {
    KConfigCompilerSignallingItem_ReadConfig((KConfigCompilerSignallingItem*)self, (KConfig*)param1);
}

void k_configcompilersignallingitem_write_config(void* self, void* param1) {
    KConfigCompilerSignallingItem_WriteConfig((KConfigCompilerSignallingItem*)self, (KConfig*)param1);
}

void k_configcompilersignallingitem_read_default(void* self, void* param1) {
    KConfigCompilerSignallingItem_ReadDefault((KConfigCompilerSignallingItem*)self, (KConfig*)param1);
}

void k_configcompilersignallingitem_set_property(void* self, void* p) {
    KConfigCompilerSignallingItem_SetProperty((KConfigCompilerSignallingItem*)self, (QVariant*)p);
}

bool k_configcompilersignallingitem_is_equal(void* self, void* p) {
    return KConfigCompilerSignallingItem_IsEqual((KConfigCompilerSignallingItem*)self, (QVariant*)p);
}

QVariant* k_configcompilersignallingitem_property(void* self) {
    return KConfigCompilerSignallingItem_Property((KConfigCompilerSignallingItem*)self);
}

QVariant* k_configcompilersignallingitem_min_value(void* self) {
    return KConfigCompilerSignallingItem_MinValue((KConfigCompilerSignallingItem*)self);
}

QVariant* k_configcompilersignallingitem_max_value(void* self) {
    return KConfigCompilerSignallingItem_MaxValue((KConfigCompilerSignallingItem*)self);
}

void k_configcompilersignallingitem_set_default(void* self) {
    KConfigCompilerSignallingItem_SetDefault((KConfigCompilerSignallingItem*)self);
}

void k_configcompilersignallingitem_swap_default(void* self) {
    KConfigCompilerSignallingItem_SwapDefault((KConfigCompilerSignallingItem*)self);
}

void k_configcompilersignallingitem_set_write_flags(void* self, int64_t flags) {
    KConfigCompilerSignallingItem_SetWriteFlags((KConfigCompilerSignallingItem*)self, flags);
}

int64_t k_configcompilersignallingitem_write_flags(void* self) {
    return KConfigCompilerSignallingItem_WriteFlags((KConfigCompilerSignallingItem*)self);
}

void k_configcompilersignallingitem_set_group(void* self, void* cg) {
    KConfigCompilerSignallingItem_SetGroup((KConfigCompilerSignallingItem*)self, (KConfigGroup*)cg);
}

KConfigGroup* k_configcompilersignallingitem_config_group(void* self, void* config) {
    return KConfigCompilerSignallingItem_ConfigGroup((KConfigCompilerSignallingItem*)self, (KConfig*)config);
}

const char* k_configcompilersignallingitem_group(void* self) {
    libqt_string _str = KConfigSkeletonItem_Group((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configcompilersignallingitem_set_group2(void* self, void* cg) {
    KConfigSkeletonItem_SetGroup2((KConfigSkeletonItem*)self, (KConfigGroup*)cg);
}

void k_configcompilersignallingitem_set_key(void* self, const char* _key) {
    KConfigSkeletonItem_SetKey((KConfigSkeletonItem*)self, qstring(_key));
}

const char* k_configcompilersignallingitem_key(void* self) {
    libqt_string _str = KConfigSkeletonItem_Key((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configcompilersignallingitem_set_name(void* self, const char* _name) {
    KConfigSkeletonItem_SetName((KConfigSkeletonItem*)self, qstring(_name));
}

const char* k_configcompilersignallingitem_name(void* self) {
    libqt_string _str = KConfigSkeletonItem_Name((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configcompilersignallingitem_set_label(void* self, const char* l) {
    KConfigSkeletonItem_SetLabel((KConfigSkeletonItem*)self, qstring(l));
}

const char* k_configcompilersignallingitem_label(void* self) {
    libqt_string _str = KConfigSkeletonItem_Label((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configcompilersignallingitem_set_tool_tip(void* self, const char* t) {
    KConfigSkeletonItem_SetToolTip((KConfigSkeletonItem*)self, qstring(t));
}

const char* k_configcompilersignallingitem_tool_tip(void* self) {
    libqt_string _str = KConfigSkeletonItem_ToolTip((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configcompilersignallingitem_set_whats_this(void* self, const char* w) {
    KConfigSkeletonItem_SetWhatsThis((KConfigSkeletonItem*)self, qstring(w));
}

const char* k_configcompilersignallingitem_whats_this(void* self) {
    libqt_string _str = KConfigSkeletonItem_WhatsThis((KConfigSkeletonItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_configcompilersignallingitem_is_immutable(void* self) {
    return KConfigSkeletonItem_IsImmutable((KConfigSkeletonItem*)self);
}

bool k_configcompilersignallingitem_is_default(void* self) {
    return KConfigSkeletonItem_IsDefault((KConfigSkeletonItem*)self);
}

bool k_configcompilersignallingitem_is_save_needed(void* self) {
    return KConfigSkeletonItem_IsSaveNeeded((KConfigSkeletonItem*)self);
}

QVariant* k_configcompilersignallingitem_get_default(void* self) {
    return KConfigSkeletonItem_GetDefault((KConfigSkeletonItem*)self);
}

void k_configcompilersignallingitem_delete(void* self) {
    KConfigCompilerSignallingItem_Delete((KConfigCompilerSignallingItem*)(self));
}

KCoreConfigSkeleton* k_coreconfigskeleton_new() {
    return KCoreConfigSkeleton_new();
}

KCoreConfigSkeleton* k_coreconfigskeleton_new2(const char* configname) {
    return KCoreConfigSkeleton_new2(qstring(configname));
}

KCoreConfigSkeleton* k_coreconfigskeleton_new3(const char* configname, void* parent) {
    return KCoreConfigSkeleton_new3(qstring(configname), (QObject*)parent);
}

const QMetaObject* k_coreconfigskeleton_meta_object(void* self) {
    return KCoreConfigSkeleton_MetaObject((KCoreConfigSkeleton*)self);
}

void* k_coreconfigskeleton_metacast(void* self, const char* param1) {
    return KCoreConfigSkeleton_Metacast((KCoreConfigSkeleton*)self, param1);
}

int32_t k_coreconfigskeleton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCoreConfigSkeleton_Metacall((KCoreConfigSkeleton*)self, param1, param2, param3);
}

void k_coreconfigskeleton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCoreConfigSkeleton_OnMetacall((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_coreconfigskeleton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCoreConfigSkeleton_QBaseMetacall((KCoreConfigSkeleton*)self, param1, param2, param3);
}

const char* k_coreconfigskeleton_tr(const char* s) {
    libqt_string _str = KCoreConfigSkeleton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton_set_defaults(void* self) {
    KCoreConfigSkeleton_SetDefaults((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_set_defaults(void* self, void (*callback)()) {
    KCoreConfigSkeleton_OnSetDefaults((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_qbase_set_defaults(void* self) {
    KCoreConfigSkeleton_QBaseSetDefaults((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_load(void* self) {
    KCoreConfigSkeleton_Load((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_read(void* self) {
    KCoreConfigSkeleton_Read((KCoreConfigSkeleton*)self);
}

bool k_coreconfigskeleton_is_defaults(void* self) {
    return KCoreConfigSkeleton_IsDefaults((KCoreConfigSkeleton*)self);
}

bool k_coreconfigskeleton_is_save_needed(void* self) {
    return KCoreConfigSkeleton_IsSaveNeeded((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_set_current_group(void* self, const char* group) {
    KCoreConfigSkeleton_SetCurrentGroup((KCoreConfigSkeleton*)self, qstring(group));
}

const char* k_coreconfigskeleton_current_group(void* self) {
    libqt_string _str = KCoreConfigSkeleton_CurrentGroup((KCoreConfigSkeleton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton_add_item(void* self, void* item) {
    KCoreConfigSkeleton_AddItem((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item);
}

KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPassword((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPath((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KConfig* k_coreconfigskeleton_config(void* self) {
    return KCoreConfigSkeleton_Config((KCoreConfigSkeleton*)self);
}

const KConfig* k_coreconfigskeleton_config2(void* self) {
    return KCoreConfigSkeleton_Config2((KCoreConfigSkeleton*)self);
}

libqt_list /* of KConfigSkeletonItem* */ k_coreconfigskeleton_items(void* self) {
    libqt_list _arr = KCoreConfigSkeleton_Items((KCoreConfigSkeleton*)self);
    return _arr;
}

void k_coreconfigskeleton_remove_item(void* self, const char* name) {
    KCoreConfigSkeleton_RemoveItem((KCoreConfigSkeleton*)self, qstring(name));
}

void k_coreconfigskeleton_clear_items(void* self) {
    KCoreConfigSkeleton_ClearItems((KCoreConfigSkeleton*)self);
}

bool k_coreconfigskeleton_is_immutable(void* self, const char* name) {
    return KCoreConfigSkeleton_IsImmutable((KCoreConfigSkeleton*)self, qstring(name));
}

KConfigSkeletonItem* k_coreconfigskeleton_find_item(void* self, const char* name) {
    return KCoreConfigSkeleton_FindItem((KCoreConfigSkeleton*)self, qstring(name));
}

bool k_coreconfigskeleton_use_defaults(void* self, bool b) {
    return KCoreConfigSkeleton_UseDefaults((KCoreConfigSkeleton*)self, b);
}

void k_coreconfigskeleton_on_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KCoreConfigSkeleton_OnUseDefaults((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_qbase_use_defaults(void* self, bool b) {
    return KCoreConfigSkeleton_QBaseUseDefaults((KCoreConfigSkeleton*)self, b);
}

bool k_coreconfigskeleton_save(void* self) {
    return KCoreConfigSkeleton_Save((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_config_changed(void* self) {
    KCoreConfigSkeleton_ConfigChanged((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_config_changed(void* self, void (*callback)(void*)) {
    KCoreConfigSkeleton_Connect_ConfigChanged((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_usr_use_defaults(void* self, bool b) {
    return KCoreConfigSkeleton_UsrUseDefaults((KCoreConfigSkeleton*)self, b);
}

void k_coreconfigskeleton_on_usr_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KCoreConfigSkeleton_OnUsrUseDefaults((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_qbase_usr_use_defaults(void* self, bool b) {
    return KCoreConfigSkeleton_QBaseUsrUseDefaults((KCoreConfigSkeleton*)self, b);
}

void k_coreconfigskeleton_usr_set_defaults(void* self) {
    KCoreConfigSkeleton_UsrSetDefaults((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_usr_set_defaults(void* self, void (*callback)()) {
    KCoreConfigSkeleton_OnUsrSetDefaults((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_qbase_usr_set_defaults(void* self) {
    KCoreConfigSkeleton_QBaseUsrSetDefaults((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_usr_read(void* self) {
    KCoreConfigSkeleton_UsrRead((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_usr_read(void* self, void (*callback)()) {
    KCoreConfigSkeleton_OnUsrRead((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_qbase_usr_read(void* self) {
    KCoreConfigSkeleton_QBaseUsrRead((KCoreConfigSkeleton*)self);
}

bool k_coreconfigskeleton_usr_save(void* self) {
    return KCoreConfigSkeleton_UsrSave((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_usr_save(void* self, bool (*callback)()) {
    KCoreConfigSkeleton_OnUsrSave((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_qbase_usr_save(void* self) {
    return KCoreConfigSkeleton_QBaseUsrSave((KCoreConfigSkeleton*)self);
}

const char* k_coreconfigskeleton_tr2(const char* s, const char* c) {
    libqt_string _str = KCoreConfigSkeleton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_coreconfigskeleton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KCoreConfigSkeleton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton_add_item2(void* self, void* item, const char* name) {
    KCoreConfigSkeleton_AddItem2((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item, qstring(name));
}

KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPassword3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPassword4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPath3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPath4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

const char* k_coreconfigskeleton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_coreconfigskeleton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_coreconfigskeleton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_coreconfigskeleton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_coreconfigskeleton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_coreconfigskeleton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_coreconfigskeleton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_coreconfigskeleton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_coreconfigskeleton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_coreconfigskeleton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_coreconfigskeleton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_coreconfigskeleton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_coreconfigskeleton_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_coreconfigskeleton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_coreconfigskeleton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_coreconfigskeleton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_coreconfigskeleton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_coreconfigskeleton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_coreconfigskeleton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_coreconfigskeleton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_coreconfigskeleton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_coreconfigskeleton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_coreconfigskeleton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_coreconfigskeleton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_coreconfigskeleton_dynamic_property_names");
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

QBindingStorage* k_coreconfigskeleton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_coreconfigskeleton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_coreconfigskeleton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_coreconfigskeleton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_coreconfigskeleton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_coreconfigskeleton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_coreconfigskeleton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_coreconfigskeleton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_coreconfigskeleton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_coreconfigskeleton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_coreconfigskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_coreconfigskeleton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_coreconfigskeleton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_event(void* self, void* event) {
    return KCoreConfigSkeleton_Event((KCoreConfigSkeleton*)self, (QEvent*)event);
}

bool k_coreconfigskeleton_qbase_event(void* self, void* event) {
    return KCoreConfigSkeleton_QBaseEvent((KCoreConfigSkeleton*)self, (QEvent*)event);
}

void k_coreconfigskeleton_on_event(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnEvent((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_event_filter(void* self, void* watched, void* event) {
    return KCoreConfigSkeleton_EventFilter((KCoreConfigSkeleton*)self, (QObject*)watched, (QEvent*)event);
}

bool k_coreconfigskeleton_qbase_event_filter(void* self, void* watched, void* event) {
    return KCoreConfigSkeleton_QBaseEventFilter((KCoreConfigSkeleton*)self, (QObject*)watched, (QEvent*)event);
}

void k_coreconfigskeleton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCoreConfigSkeleton_OnEventFilter((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_timer_event(void* self, void* event) {
    KCoreConfigSkeleton_TimerEvent((KCoreConfigSkeleton*)self, (QTimerEvent*)event);
}

void k_coreconfigskeleton_qbase_timer_event(void* self, void* event) {
    KCoreConfigSkeleton_QBaseTimerEvent((KCoreConfigSkeleton*)self, (QTimerEvent*)event);
}

void k_coreconfigskeleton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnTimerEvent((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_child_event(void* self, void* event) {
    KCoreConfigSkeleton_ChildEvent((KCoreConfigSkeleton*)self, (QChildEvent*)event);
}

void k_coreconfigskeleton_qbase_child_event(void* self, void* event) {
    KCoreConfigSkeleton_QBaseChildEvent((KCoreConfigSkeleton*)self, (QChildEvent*)event);
}

void k_coreconfigskeleton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnChildEvent((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_custom_event(void* self, void* event) {
    KCoreConfigSkeleton_CustomEvent((KCoreConfigSkeleton*)self, (QEvent*)event);
}

void k_coreconfigskeleton_qbase_custom_event(void* self, void* event) {
    KCoreConfigSkeleton_QBaseCustomEvent((KCoreConfigSkeleton*)self, (QEvent*)event);
}

void k_coreconfigskeleton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnCustomEvent((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_connect_notify(void* self, void* signal) {
    KCoreConfigSkeleton_ConnectNotify((KCoreConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_coreconfigskeleton_qbase_connect_notify(void* self, void* signal) {
    KCoreConfigSkeleton_QBaseConnectNotify((KCoreConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_coreconfigskeleton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnConnectNotify((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_disconnect_notify(void* self, void* signal) {
    KCoreConfigSkeleton_DisconnectNotify((KCoreConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_coreconfigskeleton_qbase_disconnect_notify(void* self, void* signal) {
    KCoreConfigSkeleton_QBaseDisconnectNotify((KCoreConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_coreconfigskeleton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnDisconnectNotify((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

QObject* k_coreconfigskeleton_sender(void* self) {
    return KCoreConfigSkeleton_Sender((KCoreConfigSkeleton*)self);
}

QObject* k_coreconfigskeleton_qbase_sender(void* self) {
    return KCoreConfigSkeleton_QBaseSender((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_sender(void* self, QObject* (*callback)()) {
    KCoreConfigSkeleton_OnSender((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_coreconfigskeleton_sender_signal_index(void* self) {
    return KCoreConfigSkeleton_SenderSignalIndex((KCoreConfigSkeleton*)self);
}

int32_t k_coreconfigskeleton_qbase_sender_signal_index(void* self) {
    return KCoreConfigSkeleton_QBaseSenderSignalIndex((KCoreConfigSkeleton*)self);
}

void k_coreconfigskeleton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCoreConfigSkeleton_OnSenderSignalIndex((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_coreconfigskeleton_receivers(void* self, const char* signal) {
    return KCoreConfigSkeleton_Receivers((KCoreConfigSkeleton*)self, signal);
}

int32_t k_coreconfigskeleton_qbase_receivers(void* self, const char* signal) {
    return KCoreConfigSkeleton_QBaseReceivers((KCoreConfigSkeleton*)self, signal);
}

void k_coreconfigskeleton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCoreConfigSkeleton_OnReceivers((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton_is_signal_connected(void* self, void* signal) {
    return KCoreConfigSkeleton_IsSignalConnected((KCoreConfigSkeleton*)self, (QMetaMethod*)signal);
}

bool k_coreconfigskeleton_qbase_is_signal_connected(void* self, void* signal) {
    return KCoreConfigSkeleton_QBaseIsSignalConnected((KCoreConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_coreconfigskeleton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton_OnIsSignalConnected((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_coreconfigskeleton_delete(void* self) {
    KCoreConfigSkeleton_Delete((KCoreConfigSkeleton*)(self));
}

KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton__itempassword_new(const char* _group, const char* _key, const char* reference) {
    return KCoreConfigSkeleton__ItemPassword_new(qstring(_group), qstring(_key), qstring(reference));
}

KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton__itempassword_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton__ItemPassword_new2(qstring(_group), qstring(_key), qstring(reference), qstring(defaultValue));
}

void k_coreconfigskeleton__itempassword_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPassword_WriteConfig((KCoreConfigSkeleton__ItemPassword*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempassword_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPassword_QBaseWriteConfig((KCoreConfigSkeleton__ItemPassword*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempassword_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPassword_OnWriteConfig((KCoreConfigSkeleton__ItemPassword*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempassword_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPassword_ReadConfig((KCoreConfigSkeleton__ItemPassword*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempassword_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPassword_QBaseReadConfig((KCoreConfigSkeleton__ItemPassword*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempassword_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPassword_OnReadConfig((KCoreConfigSkeleton__ItemPassword*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempassword_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPassword_SetProperty((KCoreConfigSkeleton__ItemPassword*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempassword_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPassword_QBaseSetProperty((KCoreConfigSkeleton__ItemPassword*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempassword_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPassword_OnSetProperty((KCoreConfigSkeleton__ItemPassword*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itempassword_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPassword_IsEqual((KCoreConfigSkeleton__ItemPassword*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itempassword_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPassword_QBaseIsEqual((KCoreConfigSkeleton__ItemPassword*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempassword_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPassword_OnIsEqual((KCoreConfigSkeleton__ItemPassword*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itempassword_property(void* self) {
    return KCoreConfigSkeleton__ItemPassword_Property((KCoreConfigSkeleton__ItemPassword*)self);
}

QVariant* k_coreconfigskeleton__itempassword_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemPassword_QBaseProperty((KCoreConfigSkeleton__ItemPassword*)self);
}

void k_coreconfigskeleton__itempassword_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemPassword_OnProperty((KCoreConfigSkeleton__ItemPassword*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempassword_delete(void* self) {
    KCoreConfigSkeleton__ItemPassword_Delete((KCoreConfigSkeleton__ItemPassword*)(self));
}

KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton__itempath_new(const char* _group, const char* _key, const char* reference) {
    return KCoreConfigSkeleton__ItemPath_new(qstring(_group), qstring(_key), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton__itempath_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton__ItemPath_new2(qstring(_group), qstring(_key), qstring(reference), qstring(defaultValue));
}

void k_coreconfigskeleton__itempath_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPath_WriteConfig((KCoreConfigSkeleton__ItemPath*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempath_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPath_QBaseWriteConfig((KCoreConfigSkeleton__ItemPath*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempath_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPath_OnWriteConfig((KCoreConfigSkeleton__ItemPath*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempath_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPath_ReadConfig((KCoreConfigSkeleton__ItemPath*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempath_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPath_QBaseReadConfig((KCoreConfigSkeleton__ItemPath*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempath_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPath_OnReadConfig((KCoreConfigSkeleton__ItemPath*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempath_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPath_SetProperty((KCoreConfigSkeleton__ItemPath*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempath_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPath_QBaseSetProperty((KCoreConfigSkeleton__ItemPath*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempath_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPath_OnSetProperty((KCoreConfigSkeleton__ItemPath*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itempath_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPath_IsEqual((KCoreConfigSkeleton__ItemPath*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itempath_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPath_QBaseIsEqual((KCoreConfigSkeleton__ItemPath*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempath_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPath_OnIsEqual((KCoreConfigSkeleton__ItemPath*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itempath_property(void* self) {
    return KCoreConfigSkeleton__ItemPath_Property((KCoreConfigSkeleton__ItemPath*)self);
}

QVariant* k_coreconfigskeleton__itempath_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemPath_QBaseProperty((KCoreConfigSkeleton__ItemPath*)self);
}

void k_coreconfigskeleton__itempath_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemPath_OnProperty((KCoreConfigSkeleton__ItemPath*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempath_delete(void* self) {
    KCoreConfigSkeleton__ItemPath_Delete((KCoreConfigSkeleton__ItemPath*)(self));
}

KCoreConfigSkeleton__ItemEnum__Choice* k_coreconfigskeleton__itemenum__choice_new(void* param1) {
    return KCoreConfigSkeleton__ItemEnum__Choice_new((KCoreConfigSkeleton__ItemEnum__Choice*)param1);
}

KCoreConfigSkeleton__ItemEnum__Choice* k_coreconfigskeleton__itemenum__choice_new2() {
    return KCoreConfigSkeleton__ItemEnum__Choice_new2();
}

const char* k_coreconfigskeleton__itemenum__choice_name(void* self) {
    libqt_string name_str = KCoreConfigSkeleton__ItemEnum__Choice_Name((KCoreConfigSkeleton__ItemEnum__Choice*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_coreconfigskeleton__itemenum__choice_set_name(void* self, const char* name) {
    KCoreConfigSkeleton__ItemEnum__Choice_SetName((KCoreConfigSkeleton__ItemEnum__Choice*)self, qstring(name));
}

const char* k_coreconfigskeleton__itemenum__choice_label(void* self) {
    libqt_string label_str = KCoreConfigSkeleton__ItemEnum__Choice_Label((KCoreConfigSkeleton__ItemEnum__Choice*)self);
    char* label_ret = qstring_to_char(label_str);
    libqt_string_free(&label_str);
    return label_ret;
}

void k_coreconfigskeleton__itemenum__choice_set_label(void* self, const char* label) {
    KCoreConfigSkeleton__ItemEnum__Choice_SetLabel((KCoreConfigSkeleton__ItemEnum__Choice*)self, qstring(label));
}

const char* k_coreconfigskeleton__itemenum__choice_tool_tip(void* self) {
    libqt_string toolTip_str = KCoreConfigSkeleton__ItemEnum__Choice_ToolTip((KCoreConfigSkeleton__ItemEnum__Choice*)self);
    char* toolTip_ret = qstring_to_char(toolTip_str);
    libqt_string_free(&toolTip_str);
    return toolTip_ret;
}

void k_coreconfigskeleton__itemenum__choice_set_tool_tip(void* self, const char* toolTip) {
    KCoreConfigSkeleton__ItemEnum__Choice_SetToolTip((KCoreConfigSkeleton__ItemEnum__Choice*)self, qstring(toolTip));
}

const char* k_coreconfigskeleton__itemenum__choice_whats_this(void* self) {
    libqt_string whatsThis_str = KCoreConfigSkeleton__ItemEnum__Choice_WhatsThis((KCoreConfigSkeleton__ItemEnum__Choice*)self);
    char* whatsThis_ret = qstring_to_char(whatsThis_str);
    libqt_string_free(&whatsThis_str);
    return whatsThis_ret;
}

void k_coreconfigskeleton__itemenum__choice_set_whats_this(void* self, const char* whatsThis) {
    KCoreConfigSkeleton__ItemEnum__Choice_SetWhatsThis((KCoreConfigSkeleton__ItemEnum__Choice*)self, qstring(whatsThis));
}

const char* k_coreconfigskeleton__itemenum__choice_value(void* self) {
    libqt_string value_str = KCoreConfigSkeleton__ItemEnum__Choice_Value((KCoreConfigSkeleton__ItemEnum__Choice*)self);
    char* value_ret = qstring_to_char(value_str);
    libqt_string_free(&value_str);
    return value_ret;
}

void k_coreconfigskeleton__itemenum__choice_set_value(void* self, const char* value) {
    KCoreConfigSkeleton__ItemEnum__Choice_SetValue((KCoreConfigSkeleton__ItemEnum__Choice*)self, qstring(value));
}

void k_coreconfigskeleton__itemenum__choice_operator_assign(void* self, void* param1) {
    KCoreConfigSkeleton__ItemEnum__Choice_OperatorAssign((KCoreConfigSkeleton__ItemEnum__Choice*)self, (KCoreConfigSkeleton__ItemEnum__Choice*)param1);
}

void k_coreconfigskeleton__itemenum__choice_delete(void* self) {
    KCoreConfigSkeleton__ItemEnum__Choice_Delete((KCoreConfigSkeleton__ItemEnum__Choice*)(self));
}

KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new(const char* _group, const char* _key, int* reference, libqt_list choices) {
    return KCoreConfigSkeleton__ItemEnum_new(qstring(_group), qstring(_key), reference, choices);
}

KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new2(const char* _group, const char* _key, int* reference, libqt_list choices, int defaultValue) {
    return KCoreConfigSkeleton__ItemEnum_new2(qstring(_group), qstring(_key), reference, choices, defaultValue);
}

libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ k_coreconfigskeleton__itemenum_choices(void* self) {
    libqt_list _arr = KCoreConfigSkeleton__ItemEnum_Choices((KCoreConfigSkeleton__ItemEnum*)self);
    return _arr;
}

void k_coreconfigskeleton__itemenum_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemEnum_ReadConfig((KCoreConfigSkeleton__ItemEnum*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemenum_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemEnum_OnReadConfig((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemenum_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemEnum_QBaseReadConfig((KCoreConfigSkeleton__ItemEnum*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemenum_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemEnum_WriteConfig((KCoreConfigSkeleton__ItemEnum*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemenum_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemEnum_OnWriteConfig((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemenum_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemEnum_QBaseWriteConfig((KCoreConfigSkeleton__ItemEnum*)self, (KConfig*)config);
}

const char* k_coreconfigskeleton__itemenum_value_for_choice(void* self, const char* name) {
    libqt_string _str = KCoreConfigSkeleton__ItemEnum_ValueForChoice((KCoreConfigSkeleton__ItemEnum*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton__itemenum_set_value_for_choice(void* self, const char* name, const char* valueForChoice) {
    KCoreConfigSkeleton__ItemEnum_SetValueForChoice((KCoreConfigSkeleton__ItemEnum*)self, qstring(name), qstring(valueForChoice));
}

void k_coreconfigskeleton__itemenum_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemEnum_SetProperty((KCoreConfigSkeleton__ItemEnum*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemenum_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemEnum_QBaseSetProperty((KCoreConfigSkeleton__ItemEnum*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemenum_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemEnum_OnSetProperty((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemenum_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemEnum_IsEqual((KCoreConfigSkeleton__ItemEnum*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemenum_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemEnum_QBaseIsEqual((KCoreConfigSkeleton__ItemEnum*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemenum_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemEnum_OnIsEqual((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemenum_property(void* self) {
    return KCoreConfigSkeleton__ItemEnum_Property((KCoreConfigSkeleton__ItemEnum*)self);
}

QVariant* k_coreconfigskeleton__itemenum_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemEnum_QBaseProperty((KCoreConfigSkeleton__ItemEnum*)self);
}

void k_coreconfigskeleton__itemenum_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemEnum_OnProperty((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemenum_min_value(void* self) {
    return KCoreConfigSkeleton__ItemEnum_MinValue((KCoreConfigSkeleton__ItemEnum*)self);
}

QVariant* k_coreconfigskeleton__itemenum_qbase_min_value(void* self) {
    return KCoreConfigSkeleton__ItemEnum_QBaseMinValue((KCoreConfigSkeleton__ItemEnum*)self);
}

void k_coreconfigskeleton__itemenum_on_min_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemEnum_OnMinValue((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemenum_max_value(void* self) {
    return KCoreConfigSkeleton__ItemEnum_MaxValue((KCoreConfigSkeleton__ItemEnum*)self);
}

QVariant* k_coreconfigskeleton__itemenum_qbase_max_value(void* self) {
    return KCoreConfigSkeleton__ItemEnum_QBaseMaxValue((KCoreConfigSkeleton__ItemEnum*)self);
}

void k_coreconfigskeleton__itemenum_on_max_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemEnum_OnMaxValue((KCoreConfigSkeleton__ItemEnum*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemenum_delete(void* self) {
    KCoreConfigSkeleton__ItemEnum_Delete((KCoreConfigSkeleton__ItemEnum*)(self));
}

KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new(const char* _group, const char* _key, const char* reference[]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_coreconfigskeleton__itempathlist_new");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);

    KCoreConfigSkeleton__ItemPathList* _out = KCoreConfigSkeleton__ItemPathList_new(qstring(_group), qstring(_key), reference_list);
    free(reference_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new2(const char* _group, const char* _key, const char* reference[], const char* defaultValue[]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_coreconfigskeleton__itempathlist_new2");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_coreconfigskeleton__itempathlist_new2");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);

    KCoreConfigSkeleton__ItemPathList* _out = KCoreConfigSkeleton__ItemPathList_new2(qstring(_group), qstring(_key), reference_list, defaultValue_list);
    free(reference_qstr);
    free(defaultValue_qstr);
    return _out;
}

void k_coreconfigskeleton__itempathlist_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPathList_ReadConfig((KCoreConfigSkeleton__ItemPathList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempathlist_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPathList_OnReadConfig((KCoreConfigSkeleton__ItemPathList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempathlist_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPathList_QBaseReadConfig((KCoreConfigSkeleton__ItemPathList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempathlist_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPathList_WriteConfig((KCoreConfigSkeleton__ItemPathList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempathlist_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPathList_OnWriteConfig((KCoreConfigSkeleton__ItemPathList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempathlist_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPathList_QBaseWriteConfig((KCoreConfigSkeleton__ItemPathList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempathlist_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPathList_SetProperty((KCoreConfigSkeleton__ItemPathList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempathlist_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPathList_QBaseSetProperty((KCoreConfigSkeleton__ItemPathList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempathlist_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPathList_OnSetProperty((KCoreConfigSkeleton__ItemPathList*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itempathlist_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPathList_IsEqual((KCoreConfigSkeleton__ItemPathList*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itempathlist_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPathList_QBaseIsEqual((KCoreConfigSkeleton__ItemPathList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempathlist_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPathList_OnIsEqual((KCoreConfigSkeleton__ItemPathList*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itempathlist_property(void* self) {
    return KCoreConfigSkeleton__ItemPathList_Property((KCoreConfigSkeleton__ItemPathList*)self);
}

QVariant* k_coreconfigskeleton__itempathlist_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemPathList_QBaseProperty((KCoreConfigSkeleton__ItemPathList*)self);
}

void k_coreconfigskeleton__itempathlist_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemPathList_OnProperty((KCoreConfigSkeleton__ItemPathList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempathlist_delete(void* self) {
    KCoreConfigSkeleton__ItemPathList_Delete((KCoreConfigSkeleton__ItemPathList*)(self));
}
