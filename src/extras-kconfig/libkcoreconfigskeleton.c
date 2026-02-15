#include "libkconfig.hpp"
#include "libkconfiggroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
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

void k_configskeletonitem_set_write_flags(void* self, int32_t flags) {
    KConfigSkeletonItem_SetWriteFlags((KConfigSkeletonItem*)self, flags);
}

int32_t k_configskeletonitem_write_flags(void* self) {
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

KPropertySkeletonItem* k_propertyskeletonitem_new(void* object, char* propertyName, void* defaultValue) {
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

void k_propertyskeletonitem_set_write_flags(void* self, int32_t flags) {
    KConfigSkeletonItem_SetWriteFlags((KConfigSkeletonItem*)self, flags);
}

int32_t k_propertyskeletonitem_write_flags(void* self) {
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

void k_configcompilersignallingitem_set_write_flags(void* self, int32_t flags) {
    KConfigCompilerSignallingItem_SetWriteFlags((KConfigCompilerSignallingItem*)self, flags);
}

int32_t k_configcompilersignallingitem_write_flags(void* self) {
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

void k_coreconfigskeleton_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCoreConfigSkeleton_OnMetaObject((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

const QMetaObject* k_coreconfigskeleton_qbase_meta_object(void* self) {
    return KCoreConfigSkeleton_QBaseMetaObject((KCoreConfigSkeleton*)self);
}

void* k_coreconfigskeleton_metacast(void* self, const char* param1) {
    return KCoreConfigSkeleton_Metacast((KCoreConfigSkeleton*)self, param1);
}

void k_coreconfigskeleton_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCoreConfigSkeleton_OnMetacast((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void* k_coreconfigskeleton_qbase_metacast(void* self, const char* param1) {
    return KCoreConfigSkeleton_QBaseMetacast((KCoreConfigSkeleton*)self, param1);
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
    libqt_string _str = QObject_Tr(s);
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

KCoreConfigSkeleton__ItemString* k_coreconfigskeleton_add_item_string(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemString((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPassword((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPath((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton_add_item_property(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemProperty((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference);
}

KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton_add_item_bool(void* self, const char* name, bool* reference) {
    return KCoreConfigSkeleton_AddItemBool((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference);
}

KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton_add_item_int(void* self, const char* name, int* reference) {
    return KCoreConfigSkeleton_AddItemInt((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton_add_item_u_int(void* self, const char* name, uint32_t* reference) {
    return KCoreConfigSkeleton_AddItemUInt((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton_add_item_long_long(void* self, const char* name, long long* reference) {
    return KCoreConfigSkeleton_AddItemLongLong((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton_add_item_u_long_long(void* self, const char* name, uint64_t* reference) {
    return KCoreConfigSkeleton_AddItemULongLong((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference);
}

KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton_add_item_double(void* self, const char* name, double* reference) {
    return KCoreConfigSkeleton_AddItemDouble((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton_add_item_rect(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemRect((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference);
}

KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton_add_item_rect_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemRectF((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference);
}

KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton_add_item_point(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemPoint((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference);
}

KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton_add_item_point_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemPointF((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference);
}

KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton_add_item_size(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemSize((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference);
}

KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton_add_item_size_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemSizeF((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference);
}

KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton_add_item_date_time(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemDateTime((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference);
}

KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton_add_item_string_list(void* self, const char* name, const char* reference[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton_add_item_string_list\n");
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

KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton_add_item_int_list(void* self, const char* name, libqt_list /* of int */ reference) {
    return KCoreConfigSkeleton_AddItemIntList((KCoreConfigSkeleton*)self, qstring(name), reference);
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
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_coreconfigskeleton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton_add_item2(void* self, void* item, const char* name) {
    KCoreConfigSkeleton_AddItem2((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item, qstring(name));
}

KCoreConfigSkeleton__ItemString* k_coreconfigskeleton_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemString3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemString* k_coreconfigskeleton_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemString4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
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

KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton_add_item_property3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemProperty3((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference, (QVariant*)defaultValue);
}

KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemProperty4((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference, (QVariant*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue) {
    return KCoreConfigSkeleton_AddItemBool3((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference, defaultValue);
}

KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemBool4((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton_add_item_int3(void* self, const char* name, int* reference, int defaultValue) {
    return KCoreConfigSkeleton_AddItemInt3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton_add_item_int4(void* self, const char* name, int* reference, int defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemInt4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue) {
    return KCoreConfigSkeleton_AddItemUInt3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemUInt4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton_add_item_long_long3(void* self, const char* name, long long* reference, long long defaultValue) {
    return KCoreConfigSkeleton_AddItemLongLong3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton_add_item_long_long4(void* self, const char* name, long long* reference, long long defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemLongLong4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton_add_item_u_long_long3(void* self, const char* name, uint64_t* reference, uint64_t defaultValue) {
    return KCoreConfigSkeleton_AddItemULongLong3((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference, defaultValue);
}

KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton_add_item_u_long_long4(void* self, const char* name, uint64_t* reference, uint64_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemULongLong4((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton_add_item_double3(void* self, const char* name, double* reference, double defaultValue) {
    return KCoreConfigSkeleton_AddItemDouble3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemDouble4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemRect3((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference, (QRect*)defaultValue);
}

KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemRect4((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference, (QRect*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemRectF3((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference, (QRectF*)defaultValue);
}

KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemRectF4((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference, (QRectF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton_add_item_point3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemPoint3((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference, (QPoint*)defaultValue);
}

KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPoint4((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference, (QPoint*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemPointF3((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference, (QPointF*)defaultValue);
}

KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPointF4((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference, (QPointF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton_add_item_size3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemSize3((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference, (QSize*)defaultValue);
}

KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemSize4((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference, (QSize*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemSizeF3((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference, (QSizeF*)defaultValue);
}

KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemSizeF4((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference, (QSizeF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemDateTime3((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference, (QDateTime*)defaultValue);
}

KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemDateTime4((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference, (QDateTime*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton_add_item_string_list3\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton_add_item_string_list3\n");
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

KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton_add_item_string_list4\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton_add_item_string_list4\n");
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

KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton_add_item_int_list3(void* self, const char* name, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue) {
    return KCoreConfigSkeleton_AddItemIntList3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton_add_item_int_list4(void* self, const char* name, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemIntList4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

const char* k_coreconfigskeleton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coreconfigskeleton_set_object_name(void* self, const char* name) {
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

int32_t k_coreconfigskeleton_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
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

QMetaObject__Connection* k_coreconfigskeleton_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_coreconfigskeleton_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_coreconfigskeleton_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_coreconfigskeleton_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_coreconfigskeleton_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_coreconfigskeleton_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_coreconfigskeleton_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_coreconfigskeleton_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton_dynamic_property_names\n");
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

int32_t k_coreconfigskeleton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_coreconfigskeleton_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_coreconfigskeleton_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_coreconfigskeleton_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_coreconfigskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_coreconfigskeleton_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_coreconfigskeleton_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_coreconfigskeleton_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_coreconfigskeleton_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

KCoreConfigSkeleton__ItemString* k_coreconfigskeleton__itemstring_new(const char* _group, const char* _key, const char* reference) {
    return KCoreConfigSkeleton__ItemString_new(qstring(_group), qstring(_key), qstring(reference));
}

KCoreConfigSkeleton__ItemString* k_coreconfigskeleton__itemstring_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton__ItemString_new2(qstring(_group), qstring(_key), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemString* k_coreconfigskeleton__itemstring_new3(const char* _group, const char* _key, const char* reference, const char* defaultValue, int32_t type) {
    return KCoreConfigSkeleton__ItemString_new3(qstring(_group), qstring(_key), qstring(reference), qstring(defaultValue), type);
}

void k_coreconfigskeleton__itemstring_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemString_WriteConfig((KCoreConfigSkeleton__ItemString*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemstring_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemString_OnWriteConfig((KCoreConfigSkeleton__ItemString*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemstring_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemString_QBaseWriteConfig((KCoreConfigSkeleton__ItemString*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemstring_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemString_ReadConfig((KCoreConfigSkeleton__ItemString*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemstring_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemString_OnReadConfig((KCoreConfigSkeleton__ItemString*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemstring_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemString_QBaseReadConfig((KCoreConfigSkeleton__ItemString*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemstring_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemString_SetProperty((KCoreConfigSkeleton__ItemString*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemstring_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemString_OnSetProperty((KCoreConfigSkeleton__ItemString*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemstring_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemString_QBaseSetProperty((KCoreConfigSkeleton__ItemString*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemstring_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemString_IsEqual((KCoreConfigSkeleton__ItemString*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemstring_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemString_OnIsEqual((KCoreConfigSkeleton__ItemString*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemstring_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemString_QBaseIsEqual((KCoreConfigSkeleton__ItemString*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemstring_property(void* self) {
    return KCoreConfigSkeleton__ItemString_Property((KCoreConfigSkeleton__ItemString*)self);
}

void k_coreconfigskeleton__itemstring_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemString_OnProperty((KCoreConfigSkeleton__ItemString*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemstring_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemString_QBaseProperty((KCoreConfigSkeleton__ItemString*)self);
}

void k_coreconfigskeleton__itemstring_delete(void* self) {
    KCoreConfigSkeleton__ItemString_Delete((KCoreConfigSkeleton__ItemString*)(self));
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

KCoreConfigSkeleton__ItemUrl* k_coreconfigskeleton__itemurl_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemUrl_new(qstring(_group), qstring(_key), (QUrl*)reference);
}

KCoreConfigSkeleton__ItemUrl* k_coreconfigskeleton__itemurl_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemUrl_new2(qstring(_group), qstring(_key), (QUrl*)reference, (QUrl*)defaultValue);
}

void k_coreconfigskeleton__itemurl_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrl_WriteConfig((KCoreConfigSkeleton__ItemUrl*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurl_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrl_OnWriteConfig((KCoreConfigSkeleton__ItemUrl*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemurl_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrl_QBaseWriteConfig((KCoreConfigSkeleton__ItemUrl*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurl_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrl_ReadConfig((KCoreConfigSkeleton__ItemUrl*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurl_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrl_OnReadConfig((KCoreConfigSkeleton__ItemUrl*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemurl_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrl_QBaseReadConfig((KCoreConfigSkeleton__ItemUrl*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurl_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemUrl_SetProperty((KCoreConfigSkeleton__ItemUrl*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemurl_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrl_OnSetProperty((KCoreConfigSkeleton__ItemUrl*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemurl_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemUrl_QBaseSetProperty((KCoreConfigSkeleton__ItemUrl*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemurl_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemUrl_IsEqual((KCoreConfigSkeleton__ItemUrl*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemurl_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrl_OnIsEqual((KCoreConfigSkeleton__ItemUrl*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemurl_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemUrl_QBaseIsEqual((KCoreConfigSkeleton__ItemUrl*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemurl_property(void* self) {
    return KCoreConfigSkeleton__ItemUrl_Property((KCoreConfigSkeleton__ItemUrl*)self);
}

void k_coreconfigskeleton__itemurl_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemUrl_OnProperty((KCoreConfigSkeleton__ItemUrl*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemurl_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemUrl_QBaseProperty((KCoreConfigSkeleton__ItemUrl*)self);
}

void k_coreconfigskeleton__itemurl_delete(void* self) {
    KCoreConfigSkeleton__ItemUrl_Delete((KCoreConfigSkeleton__ItemUrl*)(self));
}

KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton__itemproperty_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemProperty_new(qstring(_group), qstring(_key), (QVariant*)reference);
}

KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton__itemproperty_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemProperty_new2(qstring(_group), qstring(_key), (QVariant*)reference, (QVariant*)defaultValue);
}

void k_coreconfigskeleton__itemproperty_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemProperty_ReadConfig((KCoreConfigSkeleton__ItemProperty*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemproperty_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemProperty_OnReadConfig((KCoreConfigSkeleton__ItemProperty*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemproperty_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemProperty_QBaseReadConfig((KCoreConfigSkeleton__ItemProperty*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemproperty_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemProperty_SetProperty((KCoreConfigSkeleton__ItemProperty*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemproperty_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemProperty_OnSetProperty((KCoreConfigSkeleton__ItemProperty*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemproperty_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemProperty_QBaseSetProperty((KCoreConfigSkeleton__ItemProperty*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemproperty_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemProperty_IsEqual((KCoreConfigSkeleton__ItemProperty*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemproperty_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemProperty_OnIsEqual((KCoreConfigSkeleton__ItemProperty*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemproperty_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemProperty_QBaseIsEqual((KCoreConfigSkeleton__ItemProperty*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemproperty_property(void* self) {
    return KCoreConfigSkeleton__ItemProperty_Property((KCoreConfigSkeleton__ItemProperty*)self);
}

void k_coreconfigskeleton__itemproperty_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemProperty_OnProperty((KCoreConfigSkeleton__ItemProperty*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemproperty_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemProperty_QBaseProperty((KCoreConfigSkeleton__ItemProperty*)self);
}

void k_coreconfigskeleton__itemproperty_delete(void* self) {
    KCoreConfigSkeleton__ItemProperty_Delete((KCoreConfigSkeleton__ItemProperty*)(self));
}

KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton__itembool_new(const char* _group, const char* _key, bool* reference) {
    return KCoreConfigSkeleton__ItemBool_new(qstring(_group), qstring(_key), (bool*)reference);
}

KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton__itembool_new2(const char* _group, const char* _key, bool* reference, bool defaultValue) {
    return KCoreConfigSkeleton__ItemBool_new2(qstring(_group), qstring(_key), (bool*)reference, defaultValue);
}

void k_coreconfigskeleton__itembool_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemBool_ReadConfig((KCoreConfigSkeleton__ItemBool*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itembool_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemBool_OnReadConfig((KCoreConfigSkeleton__ItemBool*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itembool_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemBool_QBaseReadConfig((KCoreConfigSkeleton__ItemBool*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itembool_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemBool_SetProperty((KCoreConfigSkeleton__ItemBool*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itembool_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemBool_OnSetProperty((KCoreConfigSkeleton__ItemBool*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itembool_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemBool_QBaseSetProperty((KCoreConfigSkeleton__ItemBool*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itembool_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemBool_IsEqual((KCoreConfigSkeleton__ItemBool*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itembool_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemBool_OnIsEqual((KCoreConfigSkeleton__ItemBool*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itembool_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemBool_QBaseIsEqual((KCoreConfigSkeleton__ItemBool*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itembool_property(void* self) {
    return KCoreConfigSkeleton__ItemBool_Property((KCoreConfigSkeleton__ItemBool*)self);
}

void k_coreconfigskeleton__itembool_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemBool_OnProperty((KCoreConfigSkeleton__ItemBool*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itembool_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemBool_QBaseProperty((KCoreConfigSkeleton__ItemBool*)self);
}

void k_coreconfigskeleton__itembool_delete(void* self) {
    KCoreConfigSkeleton__ItemBool_Delete((KCoreConfigSkeleton__ItemBool*)(self));
}

KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton__itemint_new(const char* _group, const char* _key, int* reference) {
    return KCoreConfigSkeleton__ItemInt_new(qstring(_group), qstring(_key), reference);
}

KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton__itemint_new2(const char* _group, const char* _key, int* reference, int defaultValue) {
    return KCoreConfigSkeleton__ItemInt_new2(qstring(_group), qstring(_key), reference, defaultValue);
}

void k_coreconfigskeleton__itemint_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemInt_ReadConfig((KCoreConfigSkeleton__ItemInt*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemint_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemInt_OnReadConfig((KCoreConfigSkeleton__ItemInt*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemint_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemInt_QBaseReadConfig((KCoreConfigSkeleton__ItemInt*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemint_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemInt_SetProperty((KCoreConfigSkeleton__ItemInt*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemint_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemInt_OnSetProperty((KCoreConfigSkeleton__ItemInt*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemint_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemInt_QBaseSetProperty((KCoreConfigSkeleton__ItemInt*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemint_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemInt_IsEqual((KCoreConfigSkeleton__ItemInt*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemint_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemInt_OnIsEqual((KCoreConfigSkeleton__ItemInt*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemint_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemInt_QBaseIsEqual((KCoreConfigSkeleton__ItemInt*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemint_property(void* self) {
    return KCoreConfigSkeleton__ItemInt_Property((KCoreConfigSkeleton__ItemInt*)self);
}

void k_coreconfigskeleton__itemint_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemInt_OnProperty((KCoreConfigSkeleton__ItemInt*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemint_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemInt_QBaseProperty((KCoreConfigSkeleton__ItemInt*)self);
}

QVariant* k_coreconfigskeleton__itemint_min_value(void* self) {
    return KCoreConfigSkeleton__ItemInt_MinValue((KCoreConfigSkeleton__ItemInt*)self);
}

void k_coreconfigskeleton__itemint_on_min_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemInt_OnMinValue((KCoreConfigSkeleton__ItemInt*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemint_qbase_min_value(void* self) {
    return KCoreConfigSkeleton__ItemInt_QBaseMinValue((KCoreConfigSkeleton__ItemInt*)self);
}

QVariant* k_coreconfigskeleton__itemint_max_value(void* self) {
    return KCoreConfigSkeleton__ItemInt_MaxValue((KCoreConfigSkeleton__ItemInt*)self);
}

void k_coreconfigskeleton__itemint_on_max_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemInt_OnMaxValue((KCoreConfigSkeleton__ItemInt*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemint_qbase_max_value(void* self) {
    return KCoreConfigSkeleton__ItemInt_QBaseMaxValue((KCoreConfigSkeleton__ItemInt*)self);
}

void k_coreconfigskeleton__itemint_delete(void* self) {
    KCoreConfigSkeleton__ItemInt_Delete((KCoreConfigSkeleton__ItemInt*)(self));
}

KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton__itemlonglong_new(const char* _group, const char* _key, long long* reference) {
    return KCoreConfigSkeleton__ItemLongLong_new(qstring(_group), qstring(_key), reference);
}

KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton__itemlonglong_new2(const char* _group, const char* _key, long long* reference, long long defaultValue) {
    return KCoreConfigSkeleton__ItemLongLong_new2(qstring(_group), qstring(_key), reference, defaultValue);
}

void k_coreconfigskeleton__itemlonglong_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemLongLong_ReadConfig((KCoreConfigSkeleton__ItemLongLong*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemlonglong_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemLongLong_OnReadConfig((KCoreConfigSkeleton__ItemLongLong*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemlonglong_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemLongLong_QBaseReadConfig((KCoreConfigSkeleton__ItemLongLong*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemlonglong_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemLongLong_SetProperty((KCoreConfigSkeleton__ItemLongLong*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemlonglong_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemLongLong_OnSetProperty((KCoreConfigSkeleton__ItemLongLong*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemlonglong_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemLongLong_QBaseSetProperty((KCoreConfigSkeleton__ItemLongLong*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemlonglong_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemLongLong_IsEqual((KCoreConfigSkeleton__ItemLongLong*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemlonglong_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemLongLong_OnIsEqual((KCoreConfigSkeleton__ItemLongLong*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemlonglong_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemLongLong_QBaseIsEqual((KCoreConfigSkeleton__ItemLongLong*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemlonglong_property(void* self) {
    return KCoreConfigSkeleton__ItemLongLong_Property((KCoreConfigSkeleton__ItemLongLong*)self);
}

void k_coreconfigskeleton__itemlonglong_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemLongLong_OnProperty((KCoreConfigSkeleton__ItemLongLong*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemlonglong_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemLongLong_QBaseProperty((KCoreConfigSkeleton__ItemLongLong*)self);
}

QVariant* k_coreconfigskeleton__itemlonglong_min_value(void* self) {
    return KCoreConfigSkeleton__ItemLongLong_MinValue((KCoreConfigSkeleton__ItemLongLong*)self);
}

void k_coreconfigskeleton__itemlonglong_on_min_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemLongLong_OnMinValue((KCoreConfigSkeleton__ItemLongLong*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemlonglong_qbase_min_value(void* self) {
    return KCoreConfigSkeleton__ItemLongLong_QBaseMinValue((KCoreConfigSkeleton__ItemLongLong*)self);
}

QVariant* k_coreconfigskeleton__itemlonglong_max_value(void* self) {
    return KCoreConfigSkeleton__ItemLongLong_MaxValue((KCoreConfigSkeleton__ItemLongLong*)self);
}

void k_coreconfigskeleton__itemlonglong_on_max_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemLongLong_OnMaxValue((KCoreConfigSkeleton__ItemLongLong*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemlonglong_qbase_max_value(void* self) {
    return KCoreConfigSkeleton__ItemLongLong_QBaseMaxValue((KCoreConfigSkeleton__ItemLongLong*)self);
}

void k_coreconfigskeleton__itemlonglong_set_min_value(void* self, long long minValue) {
    KCoreConfigSkeleton__ItemLongLong_SetMinValue((KCoreConfigSkeleton__ItemLongLong*)self, minValue);
}

void k_coreconfigskeleton__itemlonglong_set_max_value(void* self, long long maxValue) {
    KCoreConfigSkeleton__ItemLongLong_SetMaxValue((KCoreConfigSkeleton__ItemLongLong*)self, maxValue);
}

void k_coreconfigskeleton__itemlonglong_delete(void* self) {
    KCoreConfigSkeleton__ItemLongLong_Delete((KCoreConfigSkeleton__ItemLongLong*)(self));
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

KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new(const char* _group, const char* _key, int* reference, libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ choices) {
    return KCoreConfigSkeleton__ItemEnum_new(qstring(_group), qstring(_key), reference, choices);
}

KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new2(const char* _group, const char* _key, int* reference, libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ choices, int defaultValue) {
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

KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton__itemuint_new(const char* _group, const char* _key, uint32_t* reference) {
    return KCoreConfigSkeleton__ItemUInt_new(qstring(_group), qstring(_key), reference);
}

KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton__itemuint_new2(const char* _group, const char* _key, uint32_t* reference, uint32_t defaultValue) {
    return KCoreConfigSkeleton__ItemUInt_new2(qstring(_group), qstring(_key), reference, defaultValue);
}

void k_coreconfigskeleton__itemuint_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUInt_ReadConfig((KCoreConfigSkeleton__ItemUInt*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemuint_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUInt_OnReadConfig((KCoreConfigSkeleton__ItemUInt*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemuint_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUInt_QBaseReadConfig((KCoreConfigSkeleton__ItemUInt*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemuint_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemUInt_SetProperty((KCoreConfigSkeleton__ItemUInt*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemuint_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUInt_OnSetProperty((KCoreConfigSkeleton__ItemUInt*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemuint_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemUInt_QBaseSetProperty((KCoreConfigSkeleton__ItemUInt*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemuint_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemUInt_IsEqual((KCoreConfigSkeleton__ItemUInt*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemuint_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUInt_OnIsEqual((KCoreConfigSkeleton__ItemUInt*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemuint_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemUInt_QBaseIsEqual((KCoreConfigSkeleton__ItemUInt*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemuint_property(void* self) {
    return KCoreConfigSkeleton__ItemUInt_Property((KCoreConfigSkeleton__ItemUInt*)self);
}

void k_coreconfigskeleton__itemuint_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemUInt_OnProperty((KCoreConfigSkeleton__ItemUInt*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemuint_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemUInt_QBaseProperty((KCoreConfigSkeleton__ItemUInt*)self);
}

QVariant* k_coreconfigskeleton__itemuint_min_value(void* self) {
    return KCoreConfigSkeleton__ItemUInt_MinValue((KCoreConfigSkeleton__ItemUInt*)self);
}

void k_coreconfigskeleton__itemuint_on_min_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemUInt_OnMinValue((KCoreConfigSkeleton__ItemUInt*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemuint_qbase_min_value(void* self) {
    return KCoreConfigSkeleton__ItemUInt_QBaseMinValue((KCoreConfigSkeleton__ItemUInt*)self);
}

QVariant* k_coreconfigskeleton__itemuint_max_value(void* self) {
    return KCoreConfigSkeleton__ItemUInt_MaxValue((KCoreConfigSkeleton__ItemUInt*)self);
}

void k_coreconfigskeleton__itemuint_on_max_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemUInt_OnMaxValue((KCoreConfigSkeleton__ItemUInt*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemuint_qbase_max_value(void* self) {
    return KCoreConfigSkeleton__ItemUInt_QBaseMaxValue((KCoreConfigSkeleton__ItemUInt*)self);
}

void k_coreconfigskeleton__itemuint_set_min_value(void* self, uint32_t minValue) {
    KCoreConfigSkeleton__ItemUInt_SetMinValue((KCoreConfigSkeleton__ItemUInt*)self, minValue);
}

void k_coreconfigskeleton__itemuint_set_max_value(void* self, uint32_t maxValue) {
    KCoreConfigSkeleton__ItemUInt_SetMaxValue((KCoreConfigSkeleton__ItemUInt*)self, maxValue);
}

void k_coreconfigskeleton__itemuint_delete(void* self) {
    KCoreConfigSkeleton__ItemUInt_Delete((KCoreConfigSkeleton__ItemUInt*)(self));
}

KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton__itemulonglong_new(const char* _group, const char* _key, uint64_t* reference) {
    return KCoreConfigSkeleton__ItemULongLong_new(qstring(_group), qstring(_key), (unsigned long long*)reference);
}

KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton__itemulonglong_new2(const char* _group, const char* _key, uint64_t* reference, uint64_t defaultValue) {
    return KCoreConfigSkeleton__ItemULongLong_new2(qstring(_group), qstring(_key), (unsigned long long*)reference, defaultValue);
}

void k_coreconfigskeleton__itemulonglong_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemULongLong_ReadConfig((KCoreConfigSkeleton__ItemULongLong*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemulonglong_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemULongLong_OnReadConfig((KCoreConfigSkeleton__ItemULongLong*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemulonglong_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemULongLong_QBaseReadConfig((KCoreConfigSkeleton__ItemULongLong*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemulonglong_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemULongLong_SetProperty((KCoreConfigSkeleton__ItemULongLong*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemulonglong_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemULongLong_OnSetProperty((KCoreConfigSkeleton__ItemULongLong*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemulonglong_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemULongLong_QBaseSetProperty((KCoreConfigSkeleton__ItemULongLong*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemulonglong_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemULongLong_IsEqual((KCoreConfigSkeleton__ItemULongLong*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemulonglong_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemULongLong_OnIsEqual((KCoreConfigSkeleton__ItemULongLong*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemulonglong_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemULongLong_QBaseIsEqual((KCoreConfigSkeleton__ItemULongLong*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemulonglong_property(void* self) {
    return KCoreConfigSkeleton__ItemULongLong_Property((KCoreConfigSkeleton__ItemULongLong*)self);
}

void k_coreconfigskeleton__itemulonglong_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemULongLong_OnProperty((KCoreConfigSkeleton__ItemULongLong*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemulonglong_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemULongLong_QBaseProperty((KCoreConfigSkeleton__ItemULongLong*)self);
}

QVariant* k_coreconfigskeleton__itemulonglong_min_value(void* self) {
    return KCoreConfigSkeleton__ItemULongLong_MinValue((KCoreConfigSkeleton__ItemULongLong*)self);
}

void k_coreconfigskeleton__itemulonglong_on_min_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemULongLong_OnMinValue((KCoreConfigSkeleton__ItemULongLong*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemulonglong_qbase_min_value(void* self) {
    return KCoreConfigSkeleton__ItemULongLong_QBaseMinValue((KCoreConfigSkeleton__ItemULongLong*)self);
}

QVariant* k_coreconfigskeleton__itemulonglong_max_value(void* self) {
    return KCoreConfigSkeleton__ItemULongLong_MaxValue((KCoreConfigSkeleton__ItemULongLong*)self);
}

void k_coreconfigskeleton__itemulonglong_on_max_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemULongLong_OnMaxValue((KCoreConfigSkeleton__ItemULongLong*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemulonglong_qbase_max_value(void* self) {
    return KCoreConfigSkeleton__ItemULongLong_QBaseMaxValue((KCoreConfigSkeleton__ItemULongLong*)self);
}

void k_coreconfigskeleton__itemulonglong_set_min_value(void* self, uint64_t minValue) {
    KCoreConfigSkeleton__ItemULongLong_SetMinValue((KCoreConfigSkeleton__ItemULongLong*)self, minValue);
}

void k_coreconfigskeleton__itemulonglong_set_max_value(void* self, uint64_t maxValue) {
    KCoreConfigSkeleton__ItemULongLong_SetMaxValue((KCoreConfigSkeleton__ItemULongLong*)self, maxValue);
}

void k_coreconfigskeleton__itemulonglong_delete(void* self) {
    KCoreConfigSkeleton__ItemULongLong_Delete((KCoreConfigSkeleton__ItemULongLong*)(self));
}

KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton__itemdouble_new(const char* _group, const char* _key, double* reference) {
    return KCoreConfigSkeleton__ItemDouble_new(qstring(_group), qstring(_key), reference);
}

KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton__itemdouble_new2(const char* _group, const char* _key, double* reference, double defaultValue) {
    return KCoreConfigSkeleton__ItemDouble_new2(qstring(_group), qstring(_key), reference, defaultValue);
}

void k_coreconfigskeleton__itemdouble_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemDouble_ReadConfig((KCoreConfigSkeleton__ItemDouble*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemdouble_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemDouble_OnReadConfig((KCoreConfigSkeleton__ItemDouble*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemdouble_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemDouble_QBaseReadConfig((KCoreConfigSkeleton__ItemDouble*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemdouble_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemDouble_SetProperty((KCoreConfigSkeleton__ItemDouble*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemdouble_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemDouble_OnSetProperty((KCoreConfigSkeleton__ItemDouble*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemdouble_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemDouble_QBaseSetProperty((KCoreConfigSkeleton__ItemDouble*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemdouble_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemDouble_IsEqual((KCoreConfigSkeleton__ItemDouble*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemdouble_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemDouble_OnIsEqual((KCoreConfigSkeleton__ItemDouble*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemdouble_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemDouble_QBaseIsEqual((KCoreConfigSkeleton__ItemDouble*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemdouble_property(void* self) {
    return KCoreConfigSkeleton__ItemDouble_Property((KCoreConfigSkeleton__ItemDouble*)self);
}

void k_coreconfigskeleton__itemdouble_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemDouble_OnProperty((KCoreConfigSkeleton__ItemDouble*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemdouble_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemDouble_QBaseProperty((KCoreConfigSkeleton__ItemDouble*)self);
}

QVariant* k_coreconfigskeleton__itemdouble_min_value(void* self) {
    return KCoreConfigSkeleton__ItemDouble_MinValue((KCoreConfigSkeleton__ItemDouble*)self);
}

void k_coreconfigskeleton__itemdouble_on_min_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemDouble_OnMinValue((KCoreConfigSkeleton__ItemDouble*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemdouble_qbase_min_value(void* self) {
    return KCoreConfigSkeleton__ItemDouble_QBaseMinValue((KCoreConfigSkeleton__ItemDouble*)self);
}

QVariant* k_coreconfigskeleton__itemdouble_max_value(void* self) {
    return KCoreConfigSkeleton__ItemDouble_MaxValue((KCoreConfigSkeleton__ItemDouble*)self);
}

void k_coreconfigskeleton__itemdouble_on_max_value(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemDouble_OnMaxValue((KCoreConfigSkeleton__ItemDouble*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemdouble_qbase_max_value(void* self) {
    return KCoreConfigSkeleton__ItemDouble_QBaseMaxValue((KCoreConfigSkeleton__ItemDouble*)self);
}

void k_coreconfigskeleton__itemdouble_set_min_value(void* self, double minValue) {
    KCoreConfigSkeleton__ItemDouble_SetMinValue((KCoreConfigSkeleton__ItemDouble*)self, minValue);
}

void k_coreconfigskeleton__itemdouble_set_max_value(void* self, double maxValue) {
    KCoreConfigSkeleton__ItemDouble_SetMaxValue((KCoreConfigSkeleton__ItemDouble*)self, maxValue);
}

void k_coreconfigskeleton__itemdouble_delete(void* self) {
    KCoreConfigSkeleton__ItemDouble_Delete((KCoreConfigSkeleton__ItemDouble*)(self));
}

KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton__itemrect_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemRect_new(qstring(_group), qstring(_key), (QRect*)reference);
}

KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton__itemrect_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemRect_new2(qstring(_group), qstring(_key), (QRect*)reference, (QRect*)defaultValue);
}

void k_coreconfigskeleton__itemrect_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemRect_ReadConfig((KCoreConfigSkeleton__ItemRect*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemrect_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemRect_OnReadConfig((KCoreConfigSkeleton__ItemRect*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemrect_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemRect_QBaseReadConfig((KCoreConfigSkeleton__ItemRect*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemrect_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemRect_SetProperty((KCoreConfigSkeleton__ItemRect*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemrect_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemRect_OnSetProperty((KCoreConfigSkeleton__ItemRect*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemrect_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemRect_QBaseSetProperty((KCoreConfigSkeleton__ItemRect*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemrect_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemRect_IsEqual((KCoreConfigSkeleton__ItemRect*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemrect_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemRect_OnIsEqual((KCoreConfigSkeleton__ItemRect*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemrect_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemRect_QBaseIsEqual((KCoreConfigSkeleton__ItemRect*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemrect_property(void* self) {
    return KCoreConfigSkeleton__ItemRect_Property((KCoreConfigSkeleton__ItemRect*)self);
}

void k_coreconfigskeleton__itemrect_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemRect_OnProperty((KCoreConfigSkeleton__ItemRect*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemrect_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemRect_QBaseProperty((KCoreConfigSkeleton__ItemRect*)self);
}

void k_coreconfigskeleton__itemrect_delete(void* self) {
    KCoreConfigSkeleton__ItemRect_Delete((KCoreConfigSkeleton__ItemRect*)(self));
}

KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton__itemrectf_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemRectF_new(qstring(_group), qstring(_key), (QRectF*)reference);
}

KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton__itemrectf_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemRectF_new2(qstring(_group), qstring(_key), (QRectF*)reference, (QRectF*)defaultValue);
}

void k_coreconfigskeleton__itemrectf_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemRectF_ReadConfig((KCoreConfigSkeleton__ItemRectF*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemrectf_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemRectF_OnReadConfig((KCoreConfigSkeleton__ItemRectF*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemrectf_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemRectF_QBaseReadConfig((KCoreConfigSkeleton__ItemRectF*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemrectf_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemRectF_SetProperty((KCoreConfigSkeleton__ItemRectF*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemrectf_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemRectF_OnSetProperty((KCoreConfigSkeleton__ItemRectF*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemrectf_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemRectF_QBaseSetProperty((KCoreConfigSkeleton__ItemRectF*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemrectf_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemRectF_IsEqual((KCoreConfigSkeleton__ItemRectF*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemrectf_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemRectF_OnIsEqual((KCoreConfigSkeleton__ItemRectF*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemrectf_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemRectF_QBaseIsEqual((KCoreConfigSkeleton__ItemRectF*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemrectf_property(void* self) {
    return KCoreConfigSkeleton__ItemRectF_Property((KCoreConfigSkeleton__ItemRectF*)self);
}

void k_coreconfigskeleton__itemrectf_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemRectF_OnProperty((KCoreConfigSkeleton__ItemRectF*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemrectf_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemRectF_QBaseProperty((KCoreConfigSkeleton__ItemRectF*)self);
}

void k_coreconfigskeleton__itemrectf_delete(void* self) {
    KCoreConfigSkeleton__ItemRectF_Delete((KCoreConfigSkeleton__ItemRectF*)(self));
}

KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton__itempoint_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemPoint_new(qstring(_group), qstring(_key), (QPoint*)reference);
}

KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton__itempoint_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemPoint_new2(qstring(_group), qstring(_key), (QPoint*)reference, (QPoint*)defaultValue);
}

void k_coreconfigskeleton__itempoint_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPoint_ReadConfig((KCoreConfigSkeleton__ItemPoint*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempoint_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPoint_OnReadConfig((KCoreConfigSkeleton__ItemPoint*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempoint_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPoint_QBaseReadConfig((KCoreConfigSkeleton__ItemPoint*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempoint_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPoint_SetProperty((KCoreConfigSkeleton__ItemPoint*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempoint_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPoint_OnSetProperty((KCoreConfigSkeleton__ItemPoint*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempoint_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPoint_QBaseSetProperty((KCoreConfigSkeleton__ItemPoint*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itempoint_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPoint_IsEqual((KCoreConfigSkeleton__ItemPoint*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempoint_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPoint_OnIsEqual((KCoreConfigSkeleton__ItemPoint*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itempoint_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPoint_QBaseIsEqual((KCoreConfigSkeleton__ItemPoint*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itempoint_property(void* self) {
    return KCoreConfigSkeleton__ItemPoint_Property((KCoreConfigSkeleton__ItemPoint*)self);
}

void k_coreconfigskeleton__itempoint_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemPoint_OnProperty((KCoreConfigSkeleton__ItemPoint*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itempoint_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemPoint_QBaseProperty((KCoreConfigSkeleton__ItemPoint*)self);
}

void k_coreconfigskeleton__itempoint_delete(void* self) {
    KCoreConfigSkeleton__ItemPoint_Delete((KCoreConfigSkeleton__ItemPoint*)(self));
}

KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton__itempointf_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemPointF_new(qstring(_group), qstring(_key), (QPointF*)reference);
}

KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton__itempointf_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemPointF_new2(qstring(_group), qstring(_key), (QPointF*)reference, (QPointF*)defaultValue);
}

void k_coreconfigskeleton__itempointf_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPointF_ReadConfig((KCoreConfigSkeleton__ItemPointF*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempointf_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPointF_OnReadConfig((KCoreConfigSkeleton__ItemPointF*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempointf_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemPointF_QBaseReadConfig((KCoreConfigSkeleton__ItemPointF*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itempointf_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPointF_SetProperty((KCoreConfigSkeleton__ItemPointF*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempointf_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPointF_OnSetProperty((KCoreConfigSkeleton__ItemPointF*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itempointf_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemPointF_QBaseSetProperty((KCoreConfigSkeleton__ItemPointF*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itempointf_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPointF_IsEqual((KCoreConfigSkeleton__ItemPointF*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itempointf_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemPointF_OnIsEqual((KCoreConfigSkeleton__ItemPointF*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itempointf_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemPointF_QBaseIsEqual((KCoreConfigSkeleton__ItemPointF*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itempointf_property(void* self) {
    return KCoreConfigSkeleton__ItemPointF_Property((KCoreConfigSkeleton__ItemPointF*)self);
}

void k_coreconfigskeleton__itempointf_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemPointF_OnProperty((KCoreConfigSkeleton__ItemPointF*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itempointf_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemPointF_QBaseProperty((KCoreConfigSkeleton__ItemPointF*)self);
}

void k_coreconfigskeleton__itempointf_delete(void* self) {
    KCoreConfigSkeleton__ItemPointF_Delete((KCoreConfigSkeleton__ItemPointF*)(self));
}

KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton__itemsize_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemSize_new(qstring(_group), qstring(_key), (QSize*)reference);
}

KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton__itemsize_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemSize_new2(qstring(_group), qstring(_key), (QSize*)reference, (QSize*)defaultValue);
}

void k_coreconfigskeleton__itemsize_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemSize_ReadConfig((KCoreConfigSkeleton__ItemSize*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemsize_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemSize_OnReadConfig((KCoreConfigSkeleton__ItemSize*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemsize_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemSize_QBaseReadConfig((KCoreConfigSkeleton__ItemSize*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemsize_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemSize_SetProperty((KCoreConfigSkeleton__ItemSize*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemsize_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemSize_OnSetProperty((KCoreConfigSkeleton__ItemSize*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemsize_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemSize_QBaseSetProperty((KCoreConfigSkeleton__ItemSize*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemsize_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemSize_IsEqual((KCoreConfigSkeleton__ItemSize*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemsize_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemSize_OnIsEqual((KCoreConfigSkeleton__ItemSize*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemsize_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemSize_QBaseIsEqual((KCoreConfigSkeleton__ItemSize*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemsize_property(void* self) {
    return KCoreConfigSkeleton__ItemSize_Property((KCoreConfigSkeleton__ItemSize*)self);
}

void k_coreconfigskeleton__itemsize_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemSize_OnProperty((KCoreConfigSkeleton__ItemSize*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemsize_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemSize_QBaseProperty((KCoreConfigSkeleton__ItemSize*)self);
}

void k_coreconfigskeleton__itemsize_delete(void* self) {
    KCoreConfigSkeleton__ItemSize_Delete((KCoreConfigSkeleton__ItemSize*)(self));
}

KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton__itemsizef_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemSizeF_new(qstring(_group), qstring(_key), (QSizeF*)reference);
}

KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton__itemsizef_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemSizeF_new2(qstring(_group), qstring(_key), (QSizeF*)reference, (QSizeF*)defaultValue);
}

void k_coreconfigskeleton__itemsizef_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemSizeF_ReadConfig((KCoreConfigSkeleton__ItemSizeF*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemsizef_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemSizeF_OnReadConfig((KCoreConfigSkeleton__ItemSizeF*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemsizef_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemSizeF_QBaseReadConfig((KCoreConfigSkeleton__ItemSizeF*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemsizef_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemSizeF_SetProperty((KCoreConfigSkeleton__ItemSizeF*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemsizef_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemSizeF_OnSetProperty((KCoreConfigSkeleton__ItemSizeF*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemsizef_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemSizeF_QBaseSetProperty((KCoreConfigSkeleton__ItemSizeF*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemsizef_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemSizeF_IsEqual((KCoreConfigSkeleton__ItemSizeF*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemsizef_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemSizeF_OnIsEqual((KCoreConfigSkeleton__ItemSizeF*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemsizef_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemSizeF_QBaseIsEqual((KCoreConfigSkeleton__ItemSizeF*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemsizef_property(void* self) {
    return KCoreConfigSkeleton__ItemSizeF_Property((KCoreConfigSkeleton__ItemSizeF*)self);
}

void k_coreconfigskeleton__itemsizef_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemSizeF_OnProperty((KCoreConfigSkeleton__ItemSizeF*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemsizef_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemSizeF_QBaseProperty((KCoreConfigSkeleton__ItemSizeF*)self);
}

void k_coreconfigskeleton__itemsizef_delete(void* self) {
    KCoreConfigSkeleton__ItemSizeF_Delete((KCoreConfigSkeleton__ItemSizeF*)(self));
}

KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton__itemdatetime_new(const char* _group, const char* _key, void* reference) {
    return KCoreConfigSkeleton__ItemDateTime_new(qstring(_group), qstring(_key), (QDateTime*)reference);
}

KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton__itemdatetime_new2(const char* _group, const char* _key, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton__ItemDateTime_new2(qstring(_group), qstring(_key), (QDateTime*)reference, (QDateTime*)defaultValue);
}

void k_coreconfigskeleton__itemdatetime_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemDateTime_ReadConfig((KCoreConfigSkeleton__ItemDateTime*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemdatetime_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemDateTime_OnReadConfig((KCoreConfigSkeleton__ItemDateTime*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemdatetime_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemDateTime_QBaseReadConfig((KCoreConfigSkeleton__ItemDateTime*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemdatetime_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemDateTime_SetProperty((KCoreConfigSkeleton__ItemDateTime*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemdatetime_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemDateTime_OnSetProperty((KCoreConfigSkeleton__ItemDateTime*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemdatetime_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemDateTime_QBaseSetProperty((KCoreConfigSkeleton__ItemDateTime*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemdatetime_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemDateTime_IsEqual((KCoreConfigSkeleton__ItemDateTime*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemdatetime_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemDateTime_OnIsEqual((KCoreConfigSkeleton__ItemDateTime*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemdatetime_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemDateTime_QBaseIsEqual((KCoreConfigSkeleton__ItemDateTime*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemdatetime_property(void* self) {
    return KCoreConfigSkeleton__ItemDateTime_Property((KCoreConfigSkeleton__ItemDateTime*)self);
}

void k_coreconfigskeleton__itemdatetime_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemDateTime_OnProperty((KCoreConfigSkeleton__ItemDateTime*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemdatetime_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemDateTime_QBaseProperty((KCoreConfigSkeleton__ItemDateTime*)self);
}

void k_coreconfigskeleton__itemdatetime_delete(void* self) {
    KCoreConfigSkeleton__ItemDateTime_Delete((KCoreConfigSkeleton__ItemDateTime*)(self));
}

KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton__itemstringlist_new(const char* _group, const char* _key, const char* reference[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton__itemstringlist_new\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);

    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton__ItemStringList_new(qstring(_group), qstring(_key), reference_list);
    free(reference_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton__itemstringlist_new2(const char* _group, const char* _key, const char* reference[static 1], const char* defaultValue[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton__itemstringlist_new2\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton__itemstringlist_new2\n");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);

    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton__ItemStringList_new2(qstring(_group), qstring(_key), reference_list, defaultValue_list);
    free(reference_qstr);
    free(defaultValue_qstr);
    return _out;
}

void k_coreconfigskeleton__itemstringlist_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemStringList_ReadConfig((KCoreConfigSkeleton__ItemStringList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemstringlist_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemStringList_OnReadConfig((KCoreConfigSkeleton__ItemStringList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemstringlist_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemStringList_QBaseReadConfig((KCoreConfigSkeleton__ItemStringList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemstringlist_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemStringList_SetProperty((KCoreConfigSkeleton__ItemStringList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemstringlist_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemStringList_OnSetProperty((KCoreConfigSkeleton__ItemStringList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemstringlist_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemStringList_QBaseSetProperty((KCoreConfigSkeleton__ItemStringList*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemstringlist_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemStringList_IsEqual((KCoreConfigSkeleton__ItemStringList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemstringlist_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemStringList_OnIsEqual((KCoreConfigSkeleton__ItemStringList*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemstringlist_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemStringList_QBaseIsEqual((KCoreConfigSkeleton__ItemStringList*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemstringlist_property(void* self) {
    return KCoreConfigSkeleton__ItemStringList_Property((KCoreConfigSkeleton__ItemStringList*)self);
}

void k_coreconfigskeleton__itemstringlist_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemStringList_OnProperty((KCoreConfigSkeleton__ItemStringList*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemstringlist_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemStringList_QBaseProperty((KCoreConfigSkeleton__ItemStringList*)self);
}

void k_coreconfigskeleton__itemstringlist_delete(void* self) {
    KCoreConfigSkeleton__ItemStringList_Delete((KCoreConfigSkeleton__ItemStringList*)(self));
}

KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new(const char* _group, const char* _key, const char* reference[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton__itempathlist_new\n");
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

KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new2(const char* _group, const char* _key, const char* reference[static 1], const char* defaultValue[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton__itempathlist_new2\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coreconfigskeleton__itempathlist_new2\n");
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

KCoreConfigSkeleton__ItemUrlList* k_coreconfigskeleton__itemurllist_new(const char* _group, const char* _key, libqt_list /* of QUrl* */ reference) {
    return KCoreConfigSkeleton__ItemUrlList_new(qstring(_group), qstring(_key), reference);
}

KCoreConfigSkeleton__ItemUrlList* k_coreconfigskeleton__itemurllist_new2(const char* _group, const char* _key, libqt_list /* of QUrl* */ reference, libqt_list /* of QUrl* */ defaultValue) {
    return KCoreConfigSkeleton__ItemUrlList_new2(qstring(_group), qstring(_key), reference, defaultValue);
}

void k_coreconfigskeleton__itemurllist_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrlList_ReadConfig((KCoreConfigSkeleton__ItemUrlList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurllist_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrlList_OnReadConfig((KCoreConfigSkeleton__ItemUrlList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemurllist_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrlList_QBaseReadConfig((KCoreConfigSkeleton__ItemUrlList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurllist_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrlList_WriteConfig((KCoreConfigSkeleton__ItemUrlList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurllist_on_write_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrlList_OnWriteConfig((KCoreConfigSkeleton__ItemUrlList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemurllist_qbase_write_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemUrlList_QBaseWriteConfig((KCoreConfigSkeleton__ItemUrlList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemurllist_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemUrlList_SetProperty((KCoreConfigSkeleton__ItemUrlList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemurllist_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrlList_OnSetProperty((KCoreConfigSkeleton__ItemUrlList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemurllist_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemUrlList_QBaseSetProperty((KCoreConfigSkeleton__ItemUrlList*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemurllist_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemUrlList_IsEqual((KCoreConfigSkeleton__ItemUrlList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemurllist_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemUrlList_OnIsEqual((KCoreConfigSkeleton__ItemUrlList*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemurllist_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemUrlList_QBaseIsEqual((KCoreConfigSkeleton__ItemUrlList*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemurllist_property(void* self) {
    return KCoreConfigSkeleton__ItemUrlList_Property((KCoreConfigSkeleton__ItemUrlList*)self);
}

void k_coreconfigskeleton__itemurllist_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemUrlList_OnProperty((KCoreConfigSkeleton__ItemUrlList*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemurllist_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemUrlList_QBaseProperty((KCoreConfigSkeleton__ItemUrlList*)self);
}

void k_coreconfigskeleton__itemurllist_delete(void* self) {
    KCoreConfigSkeleton__ItemUrlList_Delete((KCoreConfigSkeleton__ItemUrlList*)(self));
}

KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton__itemintlist_new(const char* _group, const char* _key, libqt_list /* of int */ reference) {
    return KCoreConfigSkeleton__ItemIntList_new(qstring(_group), qstring(_key), reference);
}

KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton__itemintlist_new2(const char* _group, const char* _key, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue) {
    return KCoreConfigSkeleton__ItemIntList_new2(qstring(_group), qstring(_key), reference, defaultValue);
}

void k_coreconfigskeleton__itemintlist_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemIntList_ReadConfig((KCoreConfigSkeleton__ItemIntList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemintlist_on_read_config(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemIntList_OnReadConfig((KCoreConfigSkeleton__ItemIntList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemintlist_qbase_read_config(void* self, void* config) {
    KCoreConfigSkeleton__ItemIntList_QBaseReadConfig((KCoreConfigSkeleton__ItemIntList*)self, (KConfig*)config);
}

void k_coreconfigskeleton__itemintlist_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemIntList_SetProperty((KCoreConfigSkeleton__ItemIntList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemintlist_on_set_property(void* self, void (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemIntList_OnSetProperty((KCoreConfigSkeleton__ItemIntList*)self, (intptr_t)callback);
}

void k_coreconfigskeleton__itemintlist_qbase_set_property(void* self, void* p) {
    KCoreConfigSkeleton__ItemIntList_QBaseSetProperty((KCoreConfigSkeleton__ItemIntList*)self, (QVariant*)p);
}

bool k_coreconfigskeleton__itemintlist_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemIntList_IsEqual((KCoreConfigSkeleton__ItemIntList*)self, (QVariant*)p);
}

void k_coreconfigskeleton__itemintlist_on_is_equal(void* self, bool (*callback)(void*, void*)) {
    KCoreConfigSkeleton__ItemIntList_OnIsEqual((KCoreConfigSkeleton__ItemIntList*)self, (intptr_t)callback);
}

bool k_coreconfigskeleton__itemintlist_qbase_is_equal(void* self, void* p) {
    return KCoreConfigSkeleton__ItemIntList_QBaseIsEqual((KCoreConfigSkeleton__ItemIntList*)self, (QVariant*)p);
}

QVariant* k_coreconfigskeleton__itemintlist_property(void* self) {
    return KCoreConfigSkeleton__ItemIntList_Property((KCoreConfigSkeleton__ItemIntList*)self);
}

void k_coreconfigskeleton__itemintlist_on_property(void* self, QVariant* (*callback)()) {
    KCoreConfigSkeleton__ItemIntList_OnProperty((KCoreConfigSkeleton__ItemIntList*)self, (intptr_t)callback);
}

QVariant* k_coreconfigskeleton__itemintlist_qbase_property(void* self) {
    return KCoreConfigSkeleton__ItemIntList_QBaseProperty((KCoreConfigSkeleton__ItemIntList*)self);
}

void k_coreconfigskeleton__itemintlist_delete(void* self) {
    KCoreConfigSkeleton__ItemIntList_Delete((KCoreConfigSkeleton__ItemIntList*)(self));
}
