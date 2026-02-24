#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKCORECONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKCORECONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html)

/// k_configskeletonitem_new constructs a new KConfigSkeletonItem object.
///
/// @param _group const char*
/// @param _key const char*
///
KConfigSkeletonItem* k_configskeletonitem_new(const char* _group, const char* _key);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html)

/// k_configskeletonitem_new2 constructs a new KConfigSkeletonItem object.
///
/// @param param1 KConfigSkeletonItem*
///
KConfigSkeletonItem* k_configskeletonitem_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KConfigSkeletonItem*
/// @param _group const char*
///
void k_configskeletonitem_set_group(void* self, const char* _group);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeletonItem*
///
const char* k_configskeletonitem_group(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KConfigSkeletonItem*
/// @param cg KConfigGroup*
///
void k_configskeletonitem_set_group2(void* self, void* cg);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
///
/// @param self KConfigSkeletonItem*
/// @param config KConfig*
///
KConfigGroup* k_configskeletonitem_config_group(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
///
/// @param self KConfigSkeletonItem*
/// @param _key const char*
///
void k_configskeletonitem_set_key(void* self, const char* _key);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeletonItem*
///
const char* k_configskeletonitem_key(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
///
/// @param self KConfigSkeletonItem*
/// @param _name const char*
///
void k_configskeletonitem_set_name(void* self, const char* _name);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeletonItem*
///
const char* k_configskeletonitem_name(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
///
/// @param self KConfigSkeletonItem*
/// @param l const char*
///
void k_configskeletonitem_set_label(void* self, const char* l);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeletonItem*
///
const char* k_configskeletonitem_label(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
///
/// @param self KConfigSkeletonItem*
/// @param t const char*
///
void k_configskeletonitem_set_tool_tip(void* self, const char* t);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeletonItem*
///
const char* k_configskeletonitem_tool_tip(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
///
/// @param self KConfigSkeletonItem*
/// @param w const char*
///
void k_configskeletonitem_set_whats_this(void* self, const char* w);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeletonItem*
///
const char* k_configskeletonitem_whats_this(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWriteFlags)
///
/// @param self KConfigSkeletonItem*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_configskeletonitem_set_write_flags(void* self, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeFlags)
///
/// @param self KConfigSkeletonItem*
///
/// @return flag of enum KConfigBase__WriteConfigFlag
///
int32_t k_configskeletonitem_write_flags(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
///
void k_configskeletonitem_read_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func(KConfigSkeletonItem* self, KConfig* param1)
///
void k_configskeletonitem_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_configskeletonitem_super_read_config` instead
///
#define k_configskeletonitem_qbase_read_config k_configskeletonitem_super_read_config

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readConfig)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
///
void k_configskeletonitem_super_read_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
///
void k_configskeletonitem_write_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func(KConfigSkeletonItem* self, KConfig* param1)
///
void k_configskeletonitem_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_configskeletonitem_super_write_config` instead
///
#define k_configskeletonitem_qbase_write_config k_configskeletonitem_super_write_config

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
///
void k_configskeletonitem_super_write_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
///
void k_configskeletonitem_read_default(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func(KConfigSkeletonItem* self, KConfig* param1)
///
void k_configskeletonitem_on_read_default(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_configskeletonitem_super_read_default` instead
///
#define k_configskeletonitem_qbase_read_default k_configskeletonitem_super_read_default

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readDefault)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
///
void k_configskeletonitem_super_read_default(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
///
void k_configskeletonitem_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func(KConfigSkeletonItem* self, QVariant* p)
///
void k_configskeletonitem_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_configskeletonitem_super_set_property` instead
///
#define k_configskeletonitem_qbase_set_property k_configskeletonitem_super_set_property

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setProperty)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
///
void k_configskeletonitem_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
///
bool k_configskeletonitem_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback bool func(KConfigSkeletonItem* self, QVariant* p)
///
void k_configskeletonitem_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_configskeletonitem_super_is_equal` instead
///
#define k_configskeletonitem_qbase_is_equal k_configskeletonitem_super_is_equal

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isEqual)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
///
bool k_configskeletonitem_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_property(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback QVariant* func()
///
void k_configskeletonitem_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_configskeletonitem_super_property` instead
///
#define k_configskeletonitem_qbase_property k_configskeletonitem_super_property

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#property)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback QVariant* func()
///
void k_configskeletonitem_on_min_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_configskeletonitem_super_min_value` instead
///
#define k_configskeletonitem_qbase_min_value k_configskeletonitem_super_min_value

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_super_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback QVariant* func()
///
void k_configskeletonitem_on_max_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_configskeletonitem_super_max_value` instead
///
#define k_configskeletonitem_qbase_max_value k_configskeletonitem_super_max_value

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_super_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
///
/// @param self KConfigSkeletonItem*
///
void k_configskeletonitem_set_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func()
///
void k_configskeletonitem_on_set_default(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_configskeletonitem_super_set_default` instead
///
#define k_configskeletonitem_qbase_set_default k_configskeletonitem_super_set_default

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setDefault)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
///
void k_configskeletonitem_super_set_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
///
/// @param self KConfigSkeletonItem*
///
void k_configskeletonitem_swap_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func()
///
void k_configskeletonitem_on_swap_default(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_configskeletonitem_super_swap_default` instead
///
#define k_configskeletonitem_qbase_swap_default k_configskeletonitem_super_swap_default

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#swapDefault)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
///
void k_configskeletonitem_super_swap_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
///
/// @param self KConfigSkeletonItem*
///
bool k_configskeletonitem_is_immutable(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
///
/// @param self KConfigSkeletonItem*
///
bool k_configskeletonitem_is_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
///
/// @param self KConfigSkeletonItem*
///
bool k_configskeletonitem_is_save_needed(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
///
/// @param self KConfigSkeletonItem*
///
QVariant* k_configskeletonitem_get_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// @param self KConfigSkeletonItem*
/// @param group KConfigGroup*
///
void k_configskeletonitem_read_immutability(void* self, void* group);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void func(KConfigSkeletonItem* self, KConfigGroup* group)
///
void k_configskeletonitem_on_read_immutability(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_configskeletonitem_super_read_immutability` instead
///
#define k_configskeletonitem_qbase_read_immutability k_configskeletonitem_super_read_immutability

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param group KConfigGroup*
///
void k_configskeletonitem_super_read_immutability(void* self, void* group);

/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#dtor.KConfigSkeletonItem)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigSkeletonItem*
///
void k_configskeletonitem_delete(void* self);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html)

/// k_propertyskeletonitem_new constructs a new KPropertySkeletonItem object.
///
/// @param object QObject*
/// @param propertyName char*
/// @param defaultValue QVariant*
///
KPropertySkeletonItem* k_propertyskeletonitem_new(void* object, char* propertyName, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html)

/// k_propertyskeletonitem_new2 constructs a new KPropertySkeletonItem object.
///
/// @param param1 KPropertySkeletonItem*
///
KPropertySkeletonItem* k_propertyskeletonitem_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_property(void* self);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback QVariant* func()
///
void k_propertyskeletonitem_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_property` instead
///
#define k_propertyskeletonitem_qbase_property k_propertyskeletonitem_super_property

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#property)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
///
void k_propertyskeletonitem_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func(KPropertySkeletonItem* self, QVariant* p)
///
void k_propertyskeletonitem_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_set_property` instead
///
#define k_propertyskeletonitem_qbase_set_property k_propertyskeletonitem_super_set_property

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setProperty)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
///
void k_propertyskeletonitem_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
///
bool k_propertyskeletonitem_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback bool func(KPropertySkeletonItem* self, QVariant* p)
///
void k_propertyskeletonitem_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_is_equal` instead
///
#define k_propertyskeletonitem_qbase_is_equal k_propertyskeletonitem_super_is_equal

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#isEqual)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
///
bool k_propertyskeletonitem_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
///
void k_propertyskeletonitem_read_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func(KPropertySkeletonItem* self, KConfig* param1)
///
void k_propertyskeletonitem_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_read_config` instead
///
#define k_propertyskeletonitem_qbase_read_config k_propertyskeletonitem_super_read_config

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readConfig)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
///
void k_propertyskeletonitem_super_read_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
///
void k_propertyskeletonitem_write_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func(KPropertySkeletonItem* self, KConfig* param1)
///
void k_propertyskeletonitem_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_write_config` instead
///
#define k_propertyskeletonitem_qbase_write_config k_propertyskeletonitem_super_write_config

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
///
void k_propertyskeletonitem_super_write_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
///
void k_propertyskeletonitem_read_default(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func(KPropertySkeletonItem* self, KConfig* param1)
///
void k_propertyskeletonitem_on_read_default(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_read_default` instead
///
#define k_propertyskeletonitem_qbase_read_default k_propertyskeletonitem_super_read_default

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#readDefault)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
///
void k_propertyskeletonitem_super_read_default(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
///
/// @param self KPropertySkeletonItem*
///
void k_propertyskeletonitem_set_default(void* self);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func()
///
void k_propertyskeletonitem_on_set_default(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_set_default` instead
///
#define k_propertyskeletonitem_qbase_set_default k_propertyskeletonitem_super_set_default

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#setDefault)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
///
void k_propertyskeletonitem_super_set_default(void* self);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
///
/// @param self KPropertySkeletonItem*
///
void k_propertyskeletonitem_swap_default(void* self);

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func()
///
void k_propertyskeletonitem_on_swap_default(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_swap_default` instead
///
#define k_propertyskeletonitem_qbase_swap_default k_propertyskeletonitem_super_swap_default

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#swapDefault)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
///
void k_propertyskeletonitem_super_swap_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KPropertySkeletonItem*
/// @param _group const char*
///
void k_propertyskeletonitem_set_group(void* self, const char* _group);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertySkeletonItem*
///
const char* k_propertyskeletonitem_group(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KPropertySkeletonItem*
/// @param cg KConfigGroup*
///
void k_propertyskeletonitem_set_group2(void* self, void* cg);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#configGroup)
///
/// @param self KPropertySkeletonItem*
/// @param config KConfig*
///
KConfigGroup* k_propertyskeletonitem_config_group(void* self, void* config);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
///
/// @param self KPropertySkeletonItem*
/// @param _key const char*
///
void k_propertyskeletonitem_set_key(void* self, const char* _key);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertySkeletonItem*
///
const char* k_propertyskeletonitem_key(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
///
/// @param self KPropertySkeletonItem*
/// @param _name const char*
///
void k_propertyskeletonitem_set_name(void* self, const char* _name);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertySkeletonItem*
///
const char* k_propertyskeletonitem_name(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
///
/// @param self KPropertySkeletonItem*
/// @param l const char*
///
void k_propertyskeletonitem_set_label(void* self, const char* l);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertySkeletonItem*
///
const char* k_propertyskeletonitem_label(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
///
/// @param self KPropertySkeletonItem*
/// @param t const char*
///
void k_propertyskeletonitem_set_tool_tip(void* self, const char* t);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertySkeletonItem*
///
const char* k_propertyskeletonitem_tool_tip(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
///
/// @param self KPropertySkeletonItem*
/// @param w const char*
///
void k_propertyskeletonitem_set_whats_this(void* self, const char* w);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertySkeletonItem*
///
const char* k_propertyskeletonitem_whats_this(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWriteFlags)
///
/// @param self KPropertySkeletonItem*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_propertyskeletonitem_set_write_flags(void* self, int32_t flags);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#writeFlags)
///
/// @param self KPropertySkeletonItem*
///
/// @return flag of enum KConfigBase__WriteConfigFlag
///
int32_t k_propertyskeletonitem_write_flags(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
///
/// @param self KPropertySkeletonItem*
///
bool k_propertyskeletonitem_is_immutable(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
///
/// @param self KPropertySkeletonItem*
///
bool k_propertyskeletonitem_is_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
///
/// @param self KPropertySkeletonItem*
///
bool k_propertyskeletonitem_is_save_needed(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_get_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_min_value(void* self);

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_min_value` instead
///
#define k_propertyskeletonitem_qbase_min_value k_propertyskeletonitem_super_min_value

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_super_min_value(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#minValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param callback QVariant* func()
///
void k_propertyskeletonitem_on_min_value(void* self, QVariant* (*callback)());

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_max_value(void* self);

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_max_value` instead
///
#define k_propertyskeletonitem_qbase_max_value k_propertyskeletonitem_super_max_value

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
///
QVariant* k_propertyskeletonitem_super_max_value(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param callback QVariant* func()
///
void k_propertyskeletonitem_on_max_value(void* self, QVariant* (*callback)());

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param group KConfigGroup*
///
void k_propertyskeletonitem_read_immutability(void* self, void* group);

/// @warning DEPRECATED: Use `k_propertyskeletonitem_super_read_immutability` instead
///
#define k_propertyskeletonitem_qbase_read_immutability k_propertyskeletonitem_super_read_immutability

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param group KConfigGroup*
///
void k_propertyskeletonitem_super_read_immutability(void* self, void* group);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param callback void func(KPropertySkeletonItem* self, KConfigGroup* group)
///
void k_propertyskeletonitem_on_read_immutability(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kpropertyskeletonitem.html#dtor.KPropertySkeletonItem)
///
/// Delete this object from C++ memory.
///
/// @param self KPropertySkeletonItem*
///
void k_propertyskeletonitem_delete(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html)

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readConfig)
///
/// @param self KConfigCompilerSignallingItem*
/// @param param1 KConfig*
///
void k_configcompilersignallingitem_read_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeConfig)
///
/// @param self KConfigCompilerSignallingItem*
/// @param param1 KConfig*
///
void k_configcompilersignallingitem_write_config(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#readDefault)
///
/// @param self KConfigCompilerSignallingItem*
/// @param param1 KConfig*
///
void k_configcompilersignallingitem_read_default(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setProperty)
///
/// @param self KConfigCompilerSignallingItem*
/// @param p QVariant*
///
void k_configcompilersignallingitem_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#isEqual)
///
/// @param self KConfigCompilerSignallingItem*
/// @param p QVariant*
///
bool k_configcompilersignallingitem_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#property)
///
/// @param self KConfigCompilerSignallingItem*
///
QVariant* k_configcompilersignallingitem_property(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#minValue)
///
/// @param self KConfigCompilerSignallingItem*
///
QVariant* k_configcompilersignallingitem_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#maxValue)
///
/// @param self KConfigCompilerSignallingItem*
///
QVariant* k_configcompilersignallingitem_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setDefault)
///
/// @param self KConfigCompilerSignallingItem*
///
void k_configcompilersignallingitem_set_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#swapDefault)
///
/// @param self KConfigCompilerSignallingItem*
///
void k_configcompilersignallingitem_swap_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setWriteFlags)
///
/// @param self KConfigCompilerSignallingItem*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_configcompilersignallingitem_set_write_flags(void* self, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#writeFlags)
///
/// @param self KConfigCompilerSignallingItem*
///
/// @return flag of enum KConfigBase__WriteConfigFlag
///
int32_t k_configcompilersignallingitem_write_flags(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#setGroup)
///
/// @param self KConfigCompilerSignallingItem*
/// @param cg KConfigGroup*
///
void k_configcompilersignallingitem_set_group(void* self, void* cg);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#configGroup)
///
/// @param self KConfigCompilerSignallingItem*
/// @param config KConfig*
///
KConfigGroup* k_configcompilersignallingitem_config_group(void* self, void* config);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigCompilerSignallingItem*
///
const char* k_configcompilersignallingitem_group(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KConfigCompilerSignallingItem*
/// @param cg KConfigGroup*
///
void k_configcompilersignallingitem_set_group2(void* self, void* cg);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setKey)
///
/// @param self KConfigCompilerSignallingItem*
/// @param _key const char*
///
void k_configcompilersignallingitem_set_key(void* self, const char* _key);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigCompilerSignallingItem*
///
const char* k_configcompilersignallingitem_key(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setName)
///
/// @param self KConfigCompilerSignallingItem*
/// @param _name const char*
///
void k_configcompilersignallingitem_set_name(void* self, const char* _name);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigCompilerSignallingItem*
///
const char* k_configcompilersignallingitem_name(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setLabel)
///
/// @param self KConfigCompilerSignallingItem*
/// @param l const char*
///
void k_configcompilersignallingitem_set_label(void* self, const char* l);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigCompilerSignallingItem*
///
const char* k_configcompilersignallingitem_label(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setToolTip)
///
/// @param self KConfigCompilerSignallingItem*
/// @param t const char*
///
void k_configcompilersignallingitem_set_tool_tip(void* self, const char* t);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigCompilerSignallingItem*
///
const char* k_configcompilersignallingitem_tool_tip(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#setWhatsThis)
///
/// @param self KConfigCompilerSignallingItem*
/// @param w const char*
///
void k_configcompilersignallingitem_set_whats_this(void* self, const char* w);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigCompilerSignallingItem*
///
const char* k_configcompilersignallingitem_whats_this(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isImmutable)
///
/// @param self KConfigCompilerSignallingItem*
///
bool k_configcompilersignallingitem_is_immutable(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isDefault)
///
/// @param self KConfigCompilerSignallingItem*
///
bool k_configcompilersignallingitem_is_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#isSaveNeeded)
///
/// @param self KConfigCompilerSignallingItem*
///
bool k_configcompilersignallingitem_is_save_needed(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Upstream resources](https://api.kde.org/kconfigskeletonitem.html#getDefault)
///
/// @param self KConfigCompilerSignallingItem*
///
QVariant* k_configcompilersignallingitem_get_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigcompilersignallingitem.html#dtor.KConfigCompilerSignallingItem)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigCompilerSignallingItem*
///
void k_configcompilersignallingitem_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html)

/// k_coreconfigskeleton_new constructs a new KCoreConfigSkeleton object.
///
KCoreConfigSkeleton* k_coreconfigskeleton_new();

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html)

/// k_coreconfigskeleton_new2 constructs a new KCoreConfigSkeleton object.
///
/// @param configname const char*
///
KCoreConfigSkeleton* k_coreconfigskeleton_new2(const char* configname);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html)

/// k_coreconfigskeleton_new3 constructs a new KCoreConfigSkeleton object.
///
/// @param configname const char*
/// @param parent QObject*
///
KCoreConfigSkeleton* k_coreconfigskeleton_new3(const char* configname, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCoreConfigSkeleton*
///
const QMetaObject* k_coreconfigskeleton_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback const QMetaObject* func()
///
void k_coreconfigskeleton_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_meta_object` instead
///
#define k_coreconfigskeleton_qbase_meta_object k_coreconfigskeleton_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
///
const QMetaObject* k_coreconfigskeleton_super_meta_object(void* self);

/// @param self KCoreConfigSkeleton*
/// @param param1 const char*
///
void* k_coreconfigskeleton_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void* func(KCoreConfigSkeleton* self, const char* param1)
///
void k_coreconfigskeleton_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_metacast` instead
///
#define k_coreconfigskeleton_qbase_metacast k_coreconfigskeleton_super_metacast

/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param param1 const char*
///
void* k_coreconfigskeleton_super_metacast(void* self, const char* param1);

/// @param self KCoreConfigSkeleton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_coreconfigskeleton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback int32_t func(KCoreConfigSkeleton* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_coreconfigskeleton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_metacall` instead
///
#define k_coreconfigskeleton_qbase_metacall k_coreconfigskeleton_super_metacall

/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_coreconfigskeleton_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_coreconfigskeleton_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_set_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func()
///
void k_coreconfigskeleton_on_set_defaults(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_set_defaults` instead
///
#define k_coreconfigskeleton_qbase_set_defaults k_coreconfigskeleton_super_set_defaults

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_super_set_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_load(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_read(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_is_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_is_save_needed(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
///
/// @param self KCoreConfigSkeleton*
/// @param group const char*
///
void k_coreconfigskeleton_set_current_group(void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton*
///
const char* k_coreconfigskeleton_current_group(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KCoreConfigSkeleton*
/// @param item KConfigSkeletonItem*
///
void k_coreconfigskeleton_add_item(void* self, void* item);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemString* k_coreconfigskeleton_add_item_string(void* self, const char* name, const char* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password(void* self, const char* name, const char* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path(void* self, const char* name, const char* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton_add_item_property(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference bool*
///
KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton_add_item_bool(void* self, const char* name, bool* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference int*
///
KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton_add_item_int(void* self, const char* name, int* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference uint32_t*
///
KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton_add_item_u_int(void* self, const char* name, uint32_t* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference long long*
///
KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton_add_item_long_long(void* self, const char* name, long long* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference uint64_t*
///
KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton_add_item_u_long_long(void* self, const char* name, uint64_t* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference double*
///
KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton_add_item_double(void* self, const char* name, double* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QRect*
///
KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton_add_item_rect(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton_add_item_rect_f(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton_add_item_point(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton_add_item_point_f(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QSize*
///
KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton_add_item_size(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton_add_item_size_f(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton_add_item_date_time(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char**
///
KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton_add_item_string_list(void* self, const char* name, const char* reference[static 1]);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference libqt_list of int
///
KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton_add_item_int_list(void* self, const char* name, libqt_list reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KCoreConfigSkeleton*
///
KConfig* k_coreconfigskeleton_config(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KCoreConfigSkeleton*
///
const KConfig* k_coreconfigskeleton_config2(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
///
/// @param self KCoreConfigSkeleton*
///
/// @return libqt_list of KConfigSkeletonItem*
///
libqt_list k_coreconfigskeleton_items(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
///
void k_coreconfigskeleton_remove_item(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_clear_items(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
///
bool k_coreconfigskeleton_is_immutable(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
///
KConfigSkeletonItem* k_coreconfigskeleton_find_item(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
///
bool k_coreconfigskeleton_use_defaults(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool func(KCoreConfigSkeleton* self, bool b)
///
void k_coreconfigskeleton_on_use_defaults(void* self, bool (*callback)(void*, bool));

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_use_defaults` instead
///
#define k_coreconfigskeleton_qbase_use_defaults k_coreconfigskeleton_super_use_defaults

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
///
bool k_coreconfigskeleton_super_use_defaults(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_save(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_config_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self)
///
void k_coreconfigskeleton_on_config_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
///
bool k_coreconfigskeleton_usr_use_defaults(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool func(KCoreConfigSkeleton* self, bool b)
///
void k_coreconfigskeleton_on_usr_use_defaults(void* self, bool (*callback)(void*, bool));

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_usr_use_defaults` instead
///
#define k_coreconfigskeleton_qbase_usr_use_defaults k_coreconfigskeleton_super_usr_use_defaults

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
///
bool k_coreconfigskeleton_super_usr_use_defaults(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_usr_set_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func()
///
void k_coreconfigskeleton_on_usr_set_defaults(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_usr_set_defaults` instead
///
#define k_coreconfigskeleton_qbase_usr_set_defaults k_coreconfigskeleton_super_usr_set_defaults

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_super_usr_set_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_usr_read(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func()
///
void k_coreconfigskeleton_on_usr_read(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_usr_read` instead
///
#define k_coreconfigskeleton_qbase_usr_read k_coreconfigskeleton_super_usr_read

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_super_usr_read(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_usr_save(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool func()
///
void k_coreconfigskeleton_on_usr_save(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_usr_save` instead
///
#define k_coreconfigskeleton_qbase_usr_save k_coreconfigskeleton_super_usr_save

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_super_usr_save(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_coreconfigskeleton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_coreconfigskeleton_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KCoreConfigSkeleton*
/// @param item KConfigSkeletonItem*
/// @param name const char*
///
void k_coreconfigskeleton_add_item2(void* self, void* item, const char* name);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemString* k_coreconfigskeleton_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemString* k_coreconfigskeleton_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton_add_item_property3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
/// @param key const char*
///
KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
///
KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
/// @param key const char*
///
KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int
///
KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton_add_item_int3(void* self, const char* name, int* reference, int defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int
/// @param key const char*
///
KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton_add_item_int4(void* self, const char* name, int* reference, int defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
///
KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue long long
///
KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton_add_item_long_long3(void* self, const char* name, long long* reference, long long defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue long long
/// @param key const char*
///
KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton_add_item_long_long4(void* self, const char* name, long long* reference, long long defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
///
KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton_add_item_u_long_long3(void* self, const char* name, uint64_t* reference, uint64_t defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton_add_item_u_long_long4(void* self, const char* name, uint64_t* reference, uint64_t defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
///
KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton_add_item_double3(void* self, const char* name, double* reference, double defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
/// @param key const char*
///
KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
///
KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
/// @param key const char*
///
KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton_add_item_point3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
///
KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton_add_item_size3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
/// @param key const char*
///
KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
/// @param key const char*
///
KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
///
KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
/// @param key const char*
///
KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference libqt_list of int
/// @param defaultValue libqt_list of int
///
KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton_add_item_int_list3(void* self, const char* name, libqt_list reference, libqt_list defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference libqt_list of int
/// @param defaultValue libqt_list of int
/// @param key const char*
///
KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton_add_item_int_list4(void* self, const char* name, libqt_list reference, libqt_list defaultValue, const char* key);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton*
///
const char* k_coreconfigskeleton_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
///
void k_coreconfigskeleton_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
///
bool k_coreconfigskeleton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCoreConfigSkeleton*
///
QThread* k_coreconfigskeleton_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreConfigSkeleton*
/// @param thread QThread*
///
bool k_coreconfigskeleton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param interval int
///
int32_t k_coreconfigskeleton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param time int64_t of nanoseconds
///
int32_t k_coreconfigskeleton_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param id int
///
void k_coreconfigskeleton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param id enum Qt__TimerId
///
void k_coreconfigskeleton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCoreConfigSkeleton*
///
/// @return libqt_list of QObject*
///
libqt_list k_coreconfigskeleton_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCoreConfigSkeleton*
/// @param parent QObject*
///
void k_coreconfigskeleton_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCoreConfigSkeleton*
/// @param filterObj QObject*
///
void k_coreconfigskeleton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCoreConfigSkeleton*
/// @param obj QObject*
///
void k_coreconfigskeleton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_coreconfigskeleton_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_coreconfigskeleton_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreConfigSkeleton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_coreconfigskeleton_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_coreconfigskeleton_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_coreconfigskeleton_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCoreConfigSkeleton*
///
bool k_coreconfigskeleton_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCoreConfigSkeleton*
/// @param receiver QObject*
///
bool k_coreconfigskeleton_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_coreconfigskeleton_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param value QVariant*
///
bool k_coreconfigskeleton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
///
QVariant* k_coreconfigskeleton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCoreConfigSkeleton*
///
const char** k_coreconfigskeleton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreConfigSkeleton*
///
QBindingStorage* k_coreconfigskeleton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreConfigSkeleton*
///
const QBindingStorage* k_coreconfigskeleton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self)
///
void k_coreconfigskeleton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCoreConfigSkeleton*
///
QObject* k_coreconfigskeleton_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCoreConfigSkeleton*
/// @param classname const char*
///
bool k_coreconfigskeleton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_coreconfigskeleton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_coreconfigskeleton_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_coreconfigskeleton_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_coreconfigskeleton_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreConfigSkeleton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_coreconfigskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
///
bool k_coreconfigskeleton_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_coreconfigskeleton_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_coreconfigskeleton_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCoreConfigSkeleton*
/// @param receiver QObject*
/// @param member const char*
///
bool k_coreconfigskeleton_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
/// @param param1 QObject*
///
void k_coreconfigskeleton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, QObject* param1)
///
void k_coreconfigskeleton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
///
bool k_coreconfigskeleton_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_event` instead
///
#define k_coreconfigskeleton_qbase_event k_coreconfigskeleton_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
///
bool k_coreconfigskeleton_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool func(KCoreConfigSkeleton* self, QEvent* event)
///
void k_coreconfigskeleton_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_coreconfigskeleton_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_event_filter` instead
///
#define k_coreconfigskeleton_qbase_event_filter k_coreconfigskeleton_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_coreconfigskeleton_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool func(KCoreConfigSkeleton* self, QObject* watched, QEvent* event)
///
void k_coreconfigskeleton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QTimerEvent*
///
void k_coreconfigskeleton_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_timer_event` instead
///
#define k_coreconfigskeleton_qbase_timer_event k_coreconfigskeleton_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QTimerEvent*
///
void k_coreconfigskeleton_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, QTimerEvent* event)
///
void k_coreconfigskeleton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QChildEvent*
///
void k_coreconfigskeleton_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_child_event` instead
///
#define k_coreconfigskeleton_qbase_child_event k_coreconfigskeleton_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QChildEvent*
///
void k_coreconfigskeleton_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, QChildEvent* event)
///
void k_coreconfigskeleton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
///
void k_coreconfigskeleton_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_custom_event` instead
///
#define k_coreconfigskeleton_qbase_custom_event k_coreconfigskeleton_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
///
void k_coreconfigskeleton_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, QEvent* event)
///
void k_coreconfigskeleton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_coreconfigskeleton_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_connect_notify` instead
///
#define k_coreconfigskeleton_qbase_connect_notify k_coreconfigskeleton_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_coreconfigskeleton_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, QMetaMethod* signal)
///
void k_coreconfigskeleton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_coreconfigskeleton_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_disconnect_notify` instead
///
#define k_coreconfigskeleton_qbase_disconnect_notify k_coreconfigskeleton_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_coreconfigskeleton_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, QMetaMethod* signal)
///
void k_coreconfigskeleton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
///
QObject* k_coreconfigskeleton_sender(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_sender` instead
///
#define k_coreconfigskeleton_qbase_sender k_coreconfigskeleton_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
///
QObject* k_coreconfigskeleton_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback QObject* func()
///
void k_coreconfigskeleton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
///
int32_t k_coreconfigskeleton_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_sender_signal_index` instead
///
#define k_coreconfigskeleton_qbase_sender_signal_index k_coreconfigskeleton_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
///
int32_t k_coreconfigskeleton_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback int32_t func()
///
void k_coreconfigskeleton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
///
int32_t k_coreconfigskeleton_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_receivers` instead
///
#define k_coreconfigskeleton_qbase_receivers k_coreconfigskeleton_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
///
int32_t k_coreconfigskeleton_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback int32_t func(KCoreConfigSkeleton* self, const char* signal)
///
void k_coreconfigskeleton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
///
bool k_coreconfigskeleton_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_coreconfigskeleton_super_is_signal_connected` instead
///
#define k_coreconfigskeleton_qbase_is_signal_connected k_coreconfigskeleton_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
///
bool k_coreconfigskeleton_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool func(KCoreConfigSkeleton* self, QMetaMethod* signal)
///
void k_coreconfigskeleton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCoreConfigSkeleton*
/// @param callback void func(KCoreConfigSkeleton* self, const char* objectName)
///
void k_coreconfigskeleton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#dtor.KCoreConfigSkeleton)
///
/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton*
///
void k_coreconfigskeleton_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html)

/// k_coreconfigskeleton__itemstring_new constructs a new KCoreConfigSkeleton::ItemString object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemString* k_coreconfigskeleton__itemstring_new(const char* _group, const char* _key, const char* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html)

/// k_coreconfigskeleton__itemstring_new2 constructs a new KCoreConfigSkeleton::ItemString object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemString* k_coreconfigskeleton__itemstring_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html)

/// k_coreconfigskeleton__itemstring_new3 constructs a new KCoreConfigSkeleton::ItemString object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param type enum KCoreConfigSkeleton__ItemString__Type
///
KCoreConfigSkeleton__ItemString* k_coreconfigskeleton__itemstring_new3(const char* _group, const char* _key, const char* reference, const char* defaultValue, int32_t type);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemstring_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param callback void func(KCoreConfigSkeleton__ItemString* self, KConfig* config)
///
void k_coreconfigskeleton__itemstring_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstring_super_write_config` instead
///
#define k_coreconfigskeleton__itemstring_qbase_write_config k_coreconfigskeleton__itemstring_super_write_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemstring_super_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemstring_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param callback void func(KCoreConfigSkeleton__ItemString* self, KConfig* config)
///
void k_coreconfigskeleton__itemstring_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstring_super_read_config` instead
///
#define k_coreconfigskeleton__itemstring_qbase_read_config k_coreconfigskeleton__itemstring_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemstring_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemstring_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param callback void func(KCoreConfigSkeleton__ItemString* self, QVariant* p)
///
void k_coreconfigskeleton__itemstring_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstring_super_set_property` instead
///
#define k_coreconfigskeleton__itemstring_qbase_set_property k_coreconfigskeleton__itemstring_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemstring_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemstring_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param callback bool func(KCoreConfigSkeleton__ItemString* self, QVariant* p)
///
void k_coreconfigskeleton__itemstring_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstring_super_is_equal` instead
///
#define k_coreconfigskeleton__itemstring_qbase_is_equal k_coreconfigskeleton__itemstring_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemstring_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// @param self KCoreConfigSkeleton__ItemString*
///
QVariant* k_coreconfigskeleton__itemstring_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemString*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemstring_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstring_super_property` instead
///
#define k_coreconfigskeleton__itemstring_qbase_property k_coreconfigskeleton__itemstring_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemString*
///
QVariant* k_coreconfigskeleton__itemstring_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemString*
///
void k_coreconfigskeleton__itemstring_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempassword.html)

/// k_coreconfigskeleton__itempassword_new constructs a new KCoreConfigSkeleton::ItemPassword object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton__itempassword_new(const char* _group, const char* _key, const char* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempassword.html)

/// k_coreconfigskeleton__itempassword_new2 constructs a new KCoreConfigSkeleton::ItemPassword object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton__itempassword_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempassword_write_config(void* self, void* config);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempassword_super_write_config` instead
///
#define k_coreconfigskeleton__itempassword_qbase_write_config k_coreconfigskeleton__itempassword_super_write_config

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempassword_super_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback void func(KCoreConfigSkeleton__ItemPassword* self, KConfig* config)
///
void k_coreconfigskeleton__itempassword_on_write_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempassword_read_config(void* self, void* config);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempassword_super_read_config` instead
///
#define k_coreconfigskeleton__itempassword_qbase_read_config k_coreconfigskeleton__itempassword_super_read_config

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempassword_super_read_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback void func(KCoreConfigSkeleton__ItemPassword* self, KConfig* config)
///
void k_coreconfigskeleton__itempassword_on_read_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempassword_set_property(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempassword_super_set_property` instead
///
#define k_coreconfigskeleton__itempassword_qbase_set_property k_coreconfigskeleton__itempassword_super_set_property

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempassword_super_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback void func(KCoreConfigSkeleton__ItemPassword* self, QVariant* p)
///
void k_coreconfigskeleton__itempassword_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempassword_is_equal(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempassword_super_is_equal` instead
///
#define k_coreconfigskeleton__itempassword_qbase_is_equal k_coreconfigskeleton__itempassword_super_is_equal

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempassword_super_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback bool func(KCoreConfigSkeleton__ItemPassword* self, QVariant* p)
///
void k_coreconfigskeleton__itempassword_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
///
QVariant* k_coreconfigskeleton__itempassword_property(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempassword_super_property` instead
///
#define k_coreconfigskeleton__itempassword_qbase_property k_coreconfigskeleton__itempassword_super_property

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
///
QVariant* k_coreconfigskeleton__itempassword_super_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itempassword_on_property(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPassword*
///
void k_coreconfigskeleton__itempassword_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempath.html)

/// k_coreconfigskeleton__itempath_new constructs a new KCoreConfigSkeleton::ItemPath object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton__itempath_new(const char* _group, const char* _key, const char* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempath.html)

/// k_coreconfigskeleton__itempath_new2 constructs a new KCoreConfigSkeleton::ItemPath object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton__itempath_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempath_write_config(void* self, void* config);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempath_super_write_config` instead
///
#define k_coreconfigskeleton__itempath_qbase_write_config k_coreconfigskeleton__itempath_super_write_config

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempath_super_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback void func(KCoreConfigSkeleton__ItemPath* self, KConfig* config)
///
void k_coreconfigskeleton__itempath_on_write_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempath_read_config(void* self, void* config);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempath_super_read_config` instead
///
#define k_coreconfigskeleton__itempath_qbase_read_config k_coreconfigskeleton__itempath_super_read_config

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempath_super_read_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback void func(KCoreConfigSkeleton__ItemPath* self, KConfig* config)
///
void k_coreconfigskeleton__itempath_on_read_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempath_set_property(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempath_super_set_property` instead
///
#define k_coreconfigskeleton__itempath_qbase_set_property k_coreconfigskeleton__itempath_super_set_property

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempath_super_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback void func(KCoreConfigSkeleton__ItemPath* self, QVariant* p)
///
void k_coreconfigskeleton__itempath_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempath_is_equal(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempath_super_is_equal` instead
///
#define k_coreconfigskeleton__itempath_qbase_is_equal k_coreconfigskeleton__itempath_super_is_equal

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempath_super_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback bool func(KCoreConfigSkeleton__ItemPath* self, QVariant* p)
///
void k_coreconfigskeleton__itempath_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
///
QVariant* k_coreconfigskeleton__itempath_property(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempath_super_property` instead
///
#define k_coreconfigskeleton__itempath_qbase_property k_coreconfigskeleton__itempath_super_property

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
///
QVariant* k_coreconfigskeleton__itempath_super_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itempath_on_property(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPath*
///
void k_coreconfigskeleton__itempath_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html)

/// k_coreconfigskeleton__itemurl_new constructs a new KCoreConfigSkeleton::ItemUrl object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QUrl*
///
KCoreConfigSkeleton__ItemUrl* k_coreconfigskeleton__itemurl_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html)

/// k_coreconfigskeleton__itemurl_new2 constructs a new KCoreConfigSkeleton::ItemUrl object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QUrl*
/// @param defaultValue QUrl*
///
KCoreConfigSkeleton__ItemUrl* k_coreconfigskeleton__itemurl_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurl_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param callback void func(KCoreConfigSkeleton__ItemUrl* self, KConfig* config)
///
void k_coreconfigskeleton__itemurl_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurl_super_write_config` instead
///
#define k_coreconfigskeleton__itemurl_qbase_write_config k_coreconfigskeleton__itemurl_super_write_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurl_super_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurl_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param callback void func(KCoreConfigSkeleton__ItemUrl* self, KConfig* config)
///
void k_coreconfigskeleton__itemurl_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurl_super_read_config` instead
///
#define k_coreconfigskeleton__itemurl_qbase_read_config k_coreconfigskeleton__itemurl_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurl_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemurl_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param callback void func(KCoreConfigSkeleton__ItemUrl* self, QVariant* p)
///
void k_coreconfigskeleton__itemurl_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurl_super_set_property` instead
///
#define k_coreconfigskeleton__itemurl_qbase_set_property k_coreconfigskeleton__itemurl_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemurl_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemurl_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param callback bool func(KCoreConfigSkeleton__ItemUrl* self, QVariant* p)
///
void k_coreconfigskeleton__itemurl_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurl_super_is_equal` instead
///
#define k_coreconfigskeleton__itemurl_qbase_is_equal k_coreconfigskeleton__itemurl_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemurl_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
///
/// @param self KCoreConfigSkeleton__ItemUrl*
///
QVariant* k_coreconfigskeleton__itemurl_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrl*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemurl_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurl_super_property` instead
///
#define k_coreconfigskeleton__itemurl_qbase_property k_coreconfigskeleton__itemurl_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurl.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrl*
///
QVariant* k_coreconfigskeleton__itemurl_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemUrl*
///
void k_coreconfigskeleton__itemurl_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html)

/// k_coreconfigskeleton__itemproperty_new constructs a new KCoreConfigSkeleton::ItemProperty object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton__itemproperty_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html)

/// k_coreconfigskeleton__itemproperty_new2 constructs a new KCoreConfigSkeleton::ItemProperty object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_coreconfigskeleton__itemproperty_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemproperty_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param callback void func(KCoreConfigSkeleton__ItemProperty* self, KConfig* config)
///
void k_coreconfigskeleton__itemproperty_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemproperty_super_read_config` instead
///
#define k_coreconfigskeleton__itemproperty_qbase_read_config k_coreconfigskeleton__itemproperty_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemproperty_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemproperty_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param callback void func(KCoreConfigSkeleton__ItemProperty* self, QVariant* p)
///
void k_coreconfigskeleton__itemproperty_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemproperty_super_set_property` instead
///
#define k_coreconfigskeleton__itemproperty_qbase_set_property k_coreconfigskeleton__itemproperty_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemproperty_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemproperty_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param callback bool func(KCoreConfigSkeleton__ItemProperty* self, QVariant* p)
///
void k_coreconfigskeleton__itemproperty_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemproperty_super_is_equal` instead
///
#define k_coreconfigskeleton__itemproperty_qbase_is_equal k_coreconfigskeleton__itemproperty_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemproperty_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
///
/// @param self KCoreConfigSkeleton__ItemProperty*
///
QVariant* k_coreconfigskeleton__itemproperty_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemProperty*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemproperty_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemproperty_super_property` instead
///
#define k_coreconfigskeleton__itemproperty_qbase_property k_coreconfigskeleton__itemproperty_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemproperty.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemProperty*
///
QVariant* k_coreconfigskeleton__itemproperty_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemProperty*
///
void k_coreconfigskeleton__itemproperty_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html)

/// k_coreconfigskeleton__itembool_new constructs a new KCoreConfigSkeleton::ItemBool object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference bool*
///
KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton__itembool_new(const char* _group, const char* _key, bool* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html)

/// k_coreconfigskeleton__itembool_new2 constructs a new KCoreConfigSkeleton::ItemBool object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference bool*
/// @param defaultValue bool
///
KCoreConfigSkeleton__ItemBool* k_coreconfigskeleton__itembool_new2(const char* _group, const char* _key, bool* reference, bool defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param config KConfig*
///
void k_coreconfigskeleton__itembool_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param callback void func(KCoreConfigSkeleton__ItemBool* self, KConfig* config)
///
void k_coreconfigskeleton__itembool_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itembool_super_read_config` instead
///
#define k_coreconfigskeleton__itembool_qbase_read_config k_coreconfigskeleton__itembool_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param config KConfig*
///
void k_coreconfigskeleton__itembool_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param p QVariant*
///
void k_coreconfigskeleton__itembool_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param callback void func(KCoreConfigSkeleton__ItemBool* self, QVariant* p)
///
void k_coreconfigskeleton__itembool_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itembool_super_set_property` instead
///
#define k_coreconfigskeleton__itembool_qbase_set_property k_coreconfigskeleton__itembool_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param p QVariant*
///
void k_coreconfigskeleton__itembool_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itembool_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param callback bool func(KCoreConfigSkeleton__ItemBool* self, QVariant* p)
///
void k_coreconfigskeleton__itembool_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itembool_super_is_equal` instead
///
#define k_coreconfigskeleton__itembool_qbase_is_equal k_coreconfigskeleton__itembool_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itembool_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
///
/// @param self KCoreConfigSkeleton__ItemBool*
///
QVariant* k_coreconfigskeleton__itembool_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemBool*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itembool_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itembool_super_property` instead
///
#define k_coreconfigskeleton__itembool_qbase_property k_coreconfigskeleton__itembool_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itembool.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemBool*
///
QVariant* k_coreconfigskeleton__itembool_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemBool*
///
void k_coreconfigskeleton__itembool_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html)

/// k_coreconfigskeleton__itemint_new constructs a new KCoreConfigSkeleton::ItemInt object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference int*
///
KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton__itemint_new(const char* _group, const char* _key, int* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html)

/// k_coreconfigskeleton__itemint_new2 constructs a new KCoreConfigSkeleton::ItemInt object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference int*
/// @param defaultValue int
///
KCoreConfigSkeleton__ItemInt* k_coreconfigskeleton__itemint_new2(const char* _group, const char* _key, int* reference, int defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemint_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param callback void func(KCoreConfigSkeleton__ItemInt* self, KConfig* config)
///
void k_coreconfigskeleton__itemint_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemint_super_read_config` instead
///
#define k_coreconfigskeleton__itemint_qbase_read_config k_coreconfigskeleton__itemint_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemint_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemint_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param callback void func(KCoreConfigSkeleton__ItemInt* self, QVariant* p)
///
void k_coreconfigskeleton__itemint_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemint_super_set_property` instead
///
#define k_coreconfigskeleton__itemint_qbase_set_property k_coreconfigskeleton__itemint_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemint_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemint_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param callback bool func(KCoreConfigSkeleton__ItemInt* self, QVariant* p)
///
void k_coreconfigskeleton__itemint_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemint_super_is_equal` instead
///
#define k_coreconfigskeleton__itemint_qbase_is_equal k_coreconfigskeleton__itemint_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemint_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
QVariant* k_coreconfigskeleton__itemint_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemint_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemint_super_property` instead
///
#define k_coreconfigskeleton__itemint_qbase_property k_coreconfigskeleton__itemint_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
QVariant* k_coreconfigskeleton__itemint_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
QVariant* k_coreconfigskeleton__itemint_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemint_on_min_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemint_super_min_value` instead
///
#define k_coreconfigskeleton__itemint_qbase_min_value k_coreconfigskeleton__itemint_super_min_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
QVariant* k_coreconfigskeleton__itemint_super_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
QVariant* k_coreconfigskeleton__itemint_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemInt*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemint_on_max_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemint_super_max_value` instead
///
#define k_coreconfigskeleton__itemint_qbase_max_value k_coreconfigskeleton__itemint_super_max_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
QVariant* k_coreconfigskeleton__itemint_super_max_value(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemInt*
///
void k_coreconfigskeleton__itemint_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html)

/// k_coreconfigskeleton__itemlonglong_new constructs a new KCoreConfigSkeleton::ItemLongLong object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference long long*
///
KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton__itemlonglong_new(const char* _group, const char* _key, long long* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html)

/// k_coreconfigskeleton__itemlonglong_new2 constructs a new KCoreConfigSkeleton::ItemLongLong object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference long long*
/// @param defaultValue long long
///
KCoreConfigSkeleton__ItemLongLong* k_coreconfigskeleton__itemlonglong_new2(const char* _group, const char* _key, long long* reference, long long defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemlonglong_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param callback void func(KCoreConfigSkeleton__ItemLongLong* self, KConfig* config)
///
void k_coreconfigskeleton__itemlonglong_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemlonglong_super_read_config` instead
///
#define k_coreconfigskeleton__itemlonglong_qbase_read_config k_coreconfigskeleton__itemlonglong_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemlonglong_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemlonglong_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param callback void func(KCoreConfigSkeleton__ItemLongLong* self, QVariant* p)
///
void k_coreconfigskeleton__itemlonglong_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemlonglong_super_set_property` instead
///
#define k_coreconfigskeleton__itemlonglong_qbase_set_property k_coreconfigskeleton__itemlonglong_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemlonglong_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemlonglong_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param callback bool func(KCoreConfigSkeleton__ItemLongLong* self, QVariant* p)
///
void k_coreconfigskeleton__itemlonglong_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemlonglong_super_is_equal` instead
///
#define k_coreconfigskeleton__itemlonglong_qbase_is_equal k_coreconfigskeleton__itemlonglong_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemlonglong_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
QVariant* k_coreconfigskeleton__itemlonglong_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemlonglong_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemlonglong_super_property` instead
///
#define k_coreconfigskeleton__itemlonglong_qbase_property k_coreconfigskeleton__itemlonglong_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
QVariant* k_coreconfigskeleton__itemlonglong_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
QVariant* k_coreconfigskeleton__itemlonglong_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemlonglong_on_min_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemlonglong_super_min_value` instead
///
#define k_coreconfigskeleton__itemlonglong_qbase_min_value k_coreconfigskeleton__itemlonglong_super_min_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#minValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
QVariant* k_coreconfigskeleton__itemlonglong_super_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
QVariant* k_coreconfigskeleton__itemlonglong_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemlonglong_on_max_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemlonglong_super_max_value` instead
///
#define k_coreconfigskeleton__itemlonglong_qbase_max_value k_coreconfigskeleton__itemlonglong_super_max_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#maxValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
QVariant* k_coreconfigskeleton__itemlonglong_super_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMinValue)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param minValue long long
///
void k_coreconfigskeleton__itemlonglong_set_min_value(void* self, long long minValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemlonglong.html#setMaxValue)
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
/// @param maxValue long long
///
void k_coreconfigskeleton__itemlonglong_set_max_value(void* self, long long maxValue);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemLongLong*
///
void k_coreconfigskeleton__itemlonglong_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html)

/// k_coreconfigskeleton__itemenum__choice_new constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
///
/// @param param1 KCoreConfigSkeleton__ItemEnum__Choice*
///
KCoreConfigSkeleton__ItemEnum__Choice* k_coreconfigskeleton__itemenum__choice_new(void* param1);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html)

/// k_coreconfigskeleton__itemenum__choice_new2 constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
///
KCoreConfigSkeleton__ItemEnum__Choice* k_coreconfigskeleton__itemenum__choice_new2();

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
///
const char* k_coreconfigskeleton__itemenum__choice_name(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param name const char*
///
void k_coreconfigskeleton__itemenum__choice_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
///
const char* k_coreconfigskeleton__itemenum__choice_label(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param label const char*
///
void k_coreconfigskeleton__itemenum__choice_set_label(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
///
const char* k_coreconfigskeleton__itemenum__choice_tool_tip(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param toolTip const char*
///
void k_coreconfigskeleton__itemenum__choice_set_tool_tip(void* self, const char* toolTip);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
///
const char* k_coreconfigskeleton__itemenum__choice_whats_this(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param whatsThis const char*
///
void k_coreconfigskeleton__itemenum__choice_set_whats_this(void* self, const char* whatsThis);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
///
const char* k_coreconfigskeleton__itemenum__choice_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param value const char*
///
void k_coreconfigskeleton__itemenum__choice_set_value(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum-choice.html#operator-eq)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param param1 KCoreConfigSkeleton__ItemEnum__Choice*
///
void k_coreconfigskeleton__itemenum__choice_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
///
void k_coreconfigskeleton__itemenum__choice_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html)

/// k_coreconfigskeleton__itemenum_new constructs a new KCoreConfigSkeleton::ItemEnum object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference int*
/// @param choices libqt_list of KCoreConfigSkeleton__ItemEnum__Choice*
///
KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new(const char* _group, const char* _key, int* reference, libqt_list choices);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html)

/// k_coreconfigskeleton__itemenum_new2 constructs a new KCoreConfigSkeleton::ItemEnum object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference int*
/// @param choices libqt_list of KCoreConfigSkeleton__ItemEnum__Choice*
/// @param defaultValue int
///
KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new2(const char* _group, const char* _key, int* reference, libqt_list choices, int defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#choices)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
/// @return libqt_list of KCoreConfigSkeleton__ItemEnum__Choice*
///
libqt_list k_coreconfigskeleton__itemenum_choices(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemenum_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback void func(KCoreConfigSkeleton__ItemEnum* self, KConfig* config)
///
void k_coreconfigskeleton__itemenum_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_read_config` instead
///
#define k_coreconfigskeleton__itemenum_qbase_read_config k_coreconfigskeleton__itemenum_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemenum_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemenum_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback void func(KCoreConfigSkeleton__ItemEnum* self, KConfig* config)
///
void k_coreconfigskeleton__itemenum_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_write_config` instead
///
#define k_coreconfigskeleton__itemenum_qbase_write_config k_coreconfigskeleton__itemenum_super_write_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemenum_super_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#valueForChoice)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param name const char*
///
const char* k_coreconfigskeleton__itemenum_value_for_choice(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemenum.html#setValueForChoice)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param name const char*
/// @param valueForChoice const char*
///
void k_coreconfigskeleton__itemenum_set_value_for_choice(void* self, const char* name, const char* valueForChoice);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemenum_set_property(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_set_property` instead
///
#define k_coreconfigskeleton__itemenum_qbase_set_property k_coreconfigskeleton__itemenum_super_set_property

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemenum_super_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback void func(KCoreConfigSkeleton__ItemEnum* self, QVariant* p)
///
void k_coreconfigskeleton__itemenum_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemenum_is_equal(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_is_equal` instead
///
#define k_coreconfigskeleton__itemenum_qbase_is_equal k_coreconfigskeleton__itemenum_super_is_equal

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemenum_super_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback bool func(KCoreConfigSkeleton__ItemEnum* self, QVariant* p)
///
void k_coreconfigskeleton__itemenum_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
QVariant* k_coreconfigskeleton__itemenum_property(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_property` instead
///
#define k_coreconfigskeleton__itemenum_qbase_property k_coreconfigskeleton__itemenum_super_property

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
QVariant* k_coreconfigskeleton__itemenum_super_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemenum_on_property(void* self, QVariant* (*callback)());

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
QVariant* k_coreconfigskeleton__itemenum_min_value(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_min_value` instead
///
#define k_coreconfigskeleton__itemenum_qbase_min_value k_coreconfigskeleton__itemenum_super_min_value

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
QVariant* k_coreconfigskeleton__itemenum_super_min_value(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemenum_on_min_value(void* self, QVariant* (*callback)());

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
QVariant* k_coreconfigskeleton__itemenum_max_value(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemenum_super_max_value` instead
///
#define k_coreconfigskeleton__itemenum_qbase_max_value k_coreconfigskeleton__itemenum_super_max_value

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
QVariant* k_coreconfigskeleton__itemenum_super_max_value(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemenum_on_max_value(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemEnum*
///
void k_coreconfigskeleton__itemenum_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html)

/// k_coreconfigskeleton__itemuint_new constructs a new KCoreConfigSkeleton::ItemUInt object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference uint32_t*
///
KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton__itemuint_new(const char* _group, const char* _key, uint32_t* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html)

/// k_coreconfigskeleton__itemuint_new2 constructs a new KCoreConfigSkeleton::ItemUInt object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
///
KCoreConfigSkeleton__ItemUInt* k_coreconfigskeleton__itemuint_new2(const char* _group, const char* _key, uint32_t* reference, uint32_t defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemuint_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param callback void func(KCoreConfigSkeleton__ItemUInt* self, KConfig* config)
///
void k_coreconfigskeleton__itemuint_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemuint_super_read_config` instead
///
#define k_coreconfigskeleton__itemuint_qbase_read_config k_coreconfigskeleton__itemuint_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemuint_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemuint_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param callback void func(KCoreConfigSkeleton__ItemUInt* self, QVariant* p)
///
void k_coreconfigskeleton__itemuint_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemuint_super_set_property` instead
///
#define k_coreconfigskeleton__itemuint_qbase_set_property k_coreconfigskeleton__itemuint_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemuint_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemuint_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param callback bool func(KCoreConfigSkeleton__ItemUInt* self, QVariant* p)
///
void k_coreconfigskeleton__itemuint_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemuint_super_is_equal` instead
///
#define k_coreconfigskeleton__itemuint_qbase_is_equal k_coreconfigskeleton__itemuint_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemuint_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
QVariant* k_coreconfigskeleton__itemuint_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemuint_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemuint_super_property` instead
///
#define k_coreconfigskeleton__itemuint_qbase_property k_coreconfigskeleton__itemuint_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
QVariant* k_coreconfigskeleton__itemuint_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
QVariant* k_coreconfigskeleton__itemuint_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemuint_on_min_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemuint_super_min_value` instead
///
#define k_coreconfigskeleton__itemuint_qbase_min_value k_coreconfigskeleton__itemuint_super_min_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#minValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
QVariant* k_coreconfigskeleton__itemuint_super_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
QVariant* k_coreconfigskeleton__itemuint_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemuint_on_max_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemuint_super_max_value` instead
///
#define k_coreconfigskeleton__itemuint_qbase_max_value k_coreconfigskeleton__itemuint_super_max_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#maxValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
QVariant* k_coreconfigskeleton__itemuint_super_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMinValue)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param minValue uint32_t
///
void k_coreconfigskeleton__itemuint_set_min_value(void* self, uint32_t minValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemuint.html#setMaxValue)
///
/// @param self KCoreConfigSkeleton__ItemUInt*
/// @param maxValue uint32_t
///
void k_coreconfigskeleton__itemuint_set_max_value(void* self, uint32_t maxValue);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemUInt*
///
void k_coreconfigskeleton__itemuint_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html)

/// k_coreconfigskeleton__itemulonglong_new constructs a new KCoreConfigSkeleton::ItemULongLong object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference uint64_t*
///
KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton__itemulonglong_new(const char* _group, const char* _key, uint64_t* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html)

/// k_coreconfigskeleton__itemulonglong_new2 constructs a new KCoreConfigSkeleton::ItemULongLong object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
///
KCoreConfigSkeleton__ItemULongLong* k_coreconfigskeleton__itemulonglong_new2(const char* _group, const char* _key, uint64_t* reference, uint64_t defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemulonglong_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param callback void func(KCoreConfigSkeleton__ItemULongLong* self, KConfig* config)
///
void k_coreconfigskeleton__itemulonglong_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemulonglong_super_read_config` instead
///
#define k_coreconfigskeleton__itemulonglong_qbase_read_config k_coreconfigskeleton__itemulonglong_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemulonglong_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemulonglong_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param callback void func(KCoreConfigSkeleton__ItemULongLong* self, QVariant* p)
///
void k_coreconfigskeleton__itemulonglong_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemulonglong_super_set_property` instead
///
#define k_coreconfigskeleton__itemulonglong_qbase_set_property k_coreconfigskeleton__itemulonglong_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemulonglong_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemulonglong_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param callback bool func(KCoreConfigSkeleton__ItemULongLong* self, QVariant* p)
///
void k_coreconfigskeleton__itemulonglong_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemulonglong_super_is_equal` instead
///
#define k_coreconfigskeleton__itemulonglong_qbase_is_equal k_coreconfigskeleton__itemulonglong_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemulonglong_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
QVariant* k_coreconfigskeleton__itemulonglong_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemulonglong_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemulonglong_super_property` instead
///
#define k_coreconfigskeleton__itemulonglong_qbase_property k_coreconfigskeleton__itemulonglong_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
QVariant* k_coreconfigskeleton__itemulonglong_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
QVariant* k_coreconfigskeleton__itemulonglong_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemulonglong_on_min_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemulonglong_super_min_value` instead
///
#define k_coreconfigskeleton__itemulonglong_qbase_min_value k_coreconfigskeleton__itemulonglong_super_min_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#minValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
QVariant* k_coreconfigskeleton__itemulonglong_super_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
QVariant* k_coreconfigskeleton__itemulonglong_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemulonglong_on_max_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemulonglong_super_max_value` instead
///
#define k_coreconfigskeleton__itemulonglong_qbase_max_value k_coreconfigskeleton__itemulonglong_super_max_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#maxValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
QVariant* k_coreconfigskeleton__itemulonglong_super_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMinValue)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param minValue uint64_t
///
void k_coreconfigskeleton__itemulonglong_set_min_value(void* self, uint64_t minValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemulonglong.html#setMaxValue)
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
/// @param maxValue uint64_t
///
void k_coreconfigskeleton__itemulonglong_set_max_value(void* self, uint64_t maxValue);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemULongLong*
///
void k_coreconfigskeleton__itemulonglong_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html)

/// k_coreconfigskeleton__itemdouble_new constructs a new KCoreConfigSkeleton::ItemDouble object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference double*
///
KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton__itemdouble_new(const char* _group, const char* _key, double* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html)

/// k_coreconfigskeleton__itemdouble_new2 constructs a new KCoreConfigSkeleton::ItemDouble object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference double*
/// @param defaultValue double
///
KCoreConfigSkeleton__ItemDouble* k_coreconfigskeleton__itemdouble_new2(const char* _group, const char* _key, double* reference, double defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemdouble_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param callback void func(KCoreConfigSkeleton__ItemDouble* self, KConfig* config)
///
void k_coreconfigskeleton__itemdouble_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdouble_super_read_config` instead
///
#define k_coreconfigskeleton__itemdouble_qbase_read_config k_coreconfigskeleton__itemdouble_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemdouble_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemdouble_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param callback void func(KCoreConfigSkeleton__ItemDouble* self, QVariant* p)
///
void k_coreconfigskeleton__itemdouble_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdouble_super_set_property` instead
///
#define k_coreconfigskeleton__itemdouble_qbase_set_property k_coreconfigskeleton__itemdouble_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemdouble_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemdouble_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param callback bool func(KCoreConfigSkeleton__ItemDouble* self, QVariant* p)
///
void k_coreconfigskeleton__itemdouble_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdouble_super_is_equal` instead
///
#define k_coreconfigskeleton__itemdouble_qbase_is_equal k_coreconfigskeleton__itemdouble_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemdouble_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
QVariant* k_coreconfigskeleton__itemdouble_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemdouble_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdouble_super_property` instead
///
#define k_coreconfigskeleton__itemdouble_qbase_property k_coreconfigskeleton__itemdouble_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
QVariant* k_coreconfigskeleton__itemdouble_super_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
QVariant* k_coreconfigskeleton__itemdouble_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemdouble_on_min_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdouble_super_min_value` instead
///
#define k_coreconfigskeleton__itemdouble_qbase_min_value k_coreconfigskeleton__itemdouble_super_min_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#minValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
QVariant* k_coreconfigskeleton__itemdouble_super_min_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
QVariant* k_coreconfigskeleton__itemdouble_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemdouble_on_max_value(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdouble_super_max_value` instead
///
#define k_coreconfigskeleton__itemdouble_qbase_max_value k_coreconfigskeleton__itemdouble_super_max_value

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#maxValue)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
QVariant* k_coreconfigskeleton__itemdouble_super_max_value(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMinValue)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param minValue double
///
void k_coreconfigskeleton__itemdouble_set_min_value(void* self, double minValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdouble.html#setMaxValue)
///
/// @param self KCoreConfigSkeleton__ItemDouble*
/// @param maxValue double
///
void k_coreconfigskeleton__itemdouble_set_max_value(void* self, double maxValue);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemDouble*
///
void k_coreconfigskeleton__itemdouble_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html)

/// k_coreconfigskeleton__itemrect_new constructs a new KCoreConfigSkeleton::ItemRect object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QRect*
///
KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton__itemrect_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html)

/// k_coreconfigskeleton__itemrect_new2 constructs a new KCoreConfigSkeleton::ItemRect object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QRect*
/// @param defaultValue QRect*
///
KCoreConfigSkeleton__ItemRect* k_coreconfigskeleton__itemrect_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemrect_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param callback void func(KCoreConfigSkeleton__ItemRect* self, KConfig* config)
///
void k_coreconfigskeleton__itemrect_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrect_super_read_config` instead
///
#define k_coreconfigskeleton__itemrect_qbase_read_config k_coreconfigskeleton__itemrect_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemrect_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemrect_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param callback void func(KCoreConfigSkeleton__ItemRect* self, QVariant* p)
///
void k_coreconfigskeleton__itemrect_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrect_super_set_property` instead
///
#define k_coreconfigskeleton__itemrect_qbase_set_property k_coreconfigskeleton__itemrect_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemrect_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemrect_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param callback bool func(KCoreConfigSkeleton__ItemRect* self, QVariant* p)
///
void k_coreconfigskeleton__itemrect_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrect_super_is_equal` instead
///
#define k_coreconfigskeleton__itemrect_qbase_is_equal k_coreconfigskeleton__itemrect_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemrect_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
///
/// @param self KCoreConfigSkeleton__ItemRect*
///
QVariant* k_coreconfigskeleton__itemrect_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRect*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemrect_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrect_super_property` instead
///
#define k_coreconfigskeleton__itemrect_qbase_property k_coreconfigskeleton__itemrect_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrect.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRect*
///
QVariant* k_coreconfigskeleton__itemrect_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemRect*
///
void k_coreconfigskeleton__itemrect_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html)

/// k_coreconfigskeleton__itemrectf_new constructs a new KCoreConfigSkeleton::ItemRectF object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton__itemrectf_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html)

/// k_coreconfigskeleton__itemrectf_new2 constructs a new KCoreConfigSkeleton::ItemRectF object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_coreconfigskeleton__itemrectf_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemrectf_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param callback void func(KCoreConfigSkeleton__ItemRectF* self, KConfig* config)
///
void k_coreconfigskeleton__itemrectf_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrectf_super_read_config` instead
///
#define k_coreconfigskeleton__itemrectf_qbase_read_config k_coreconfigskeleton__itemrectf_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemrectf_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemrectf_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param callback void func(KCoreConfigSkeleton__ItemRectF* self, QVariant* p)
///
void k_coreconfigskeleton__itemrectf_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrectf_super_set_property` instead
///
#define k_coreconfigskeleton__itemrectf_qbase_set_property k_coreconfigskeleton__itemrectf_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemrectf_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemrectf_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param callback bool func(KCoreConfigSkeleton__ItemRectF* self, QVariant* p)
///
void k_coreconfigskeleton__itemrectf_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrectf_super_is_equal` instead
///
#define k_coreconfigskeleton__itemrectf_qbase_is_equal k_coreconfigskeleton__itemrectf_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemrectf_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
///
/// @param self KCoreConfigSkeleton__ItemRectF*
///
QVariant* k_coreconfigskeleton__itemrectf_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemRectF*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemrectf_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemrectf_super_property` instead
///
#define k_coreconfigskeleton__itemrectf_qbase_property k_coreconfigskeleton__itemrectf_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemrectf.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemRectF*
///
QVariant* k_coreconfigskeleton__itemrectf_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemRectF*
///
void k_coreconfigskeleton__itemrectf_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html)

/// k_coreconfigskeleton__itempoint_new constructs a new KCoreConfigSkeleton::ItemPoint object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton__itempoint_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html)

/// k_coreconfigskeleton__itempoint_new2 constructs a new KCoreConfigSkeleton::ItemPoint object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_coreconfigskeleton__itempoint_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempoint_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param callback void func(KCoreConfigSkeleton__ItemPoint* self, KConfig* config)
///
void k_coreconfigskeleton__itempoint_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempoint_super_read_config` instead
///
#define k_coreconfigskeleton__itempoint_qbase_read_config k_coreconfigskeleton__itempoint_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempoint_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempoint_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param callback void func(KCoreConfigSkeleton__ItemPoint* self, QVariant* p)
///
void k_coreconfigskeleton__itempoint_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempoint_super_set_property` instead
///
#define k_coreconfigskeleton__itempoint_qbase_set_property k_coreconfigskeleton__itempoint_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempoint_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempoint_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param callback bool func(KCoreConfigSkeleton__ItemPoint* self, QVariant* p)
///
void k_coreconfigskeleton__itempoint_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempoint_super_is_equal` instead
///
#define k_coreconfigskeleton__itempoint_qbase_is_equal k_coreconfigskeleton__itempoint_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempoint_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
///
/// @param self KCoreConfigSkeleton__ItemPoint*
///
QVariant* k_coreconfigskeleton__itempoint_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPoint*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itempoint_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempoint_super_property` instead
///
#define k_coreconfigskeleton__itempoint_qbase_property k_coreconfigskeleton__itempoint_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempoint.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPoint*
///
QVariant* k_coreconfigskeleton__itempoint_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPoint*
///
void k_coreconfigskeleton__itempoint_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html)

/// k_coreconfigskeleton__itempointf_new constructs a new KCoreConfigSkeleton::ItemPointF object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton__itempointf_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html)

/// k_coreconfigskeleton__itempointf_new2 constructs a new KCoreConfigSkeleton::ItemPointF object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_coreconfigskeleton__itempointf_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempointf_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param callback void func(KCoreConfigSkeleton__ItemPointF* self, KConfig* config)
///
void k_coreconfigskeleton__itempointf_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempointf_super_read_config` instead
///
#define k_coreconfigskeleton__itempointf_qbase_read_config k_coreconfigskeleton__itempointf_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempointf_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempointf_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param callback void func(KCoreConfigSkeleton__ItemPointF* self, QVariant* p)
///
void k_coreconfigskeleton__itempointf_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempointf_super_set_property` instead
///
#define k_coreconfigskeleton__itempointf_qbase_set_property k_coreconfigskeleton__itempointf_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempointf_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempointf_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param callback bool func(KCoreConfigSkeleton__ItemPointF* self, QVariant* p)
///
void k_coreconfigskeleton__itempointf_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempointf_super_is_equal` instead
///
#define k_coreconfigskeleton__itempointf_qbase_is_equal k_coreconfigskeleton__itempointf_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempointf_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
///
/// @param self KCoreConfigSkeleton__ItemPointF*
///
QVariant* k_coreconfigskeleton__itempointf_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPointF*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itempointf_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempointf_super_property` instead
///
#define k_coreconfigskeleton__itempointf_qbase_property k_coreconfigskeleton__itempointf_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempointf.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPointF*
///
QVariant* k_coreconfigskeleton__itempointf_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPointF*
///
void k_coreconfigskeleton__itempointf_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html)

/// k_coreconfigskeleton__itemsize_new constructs a new KCoreConfigSkeleton::ItemSize object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QSize*
///
KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton__itemsize_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html)

/// k_coreconfigskeleton__itemsize_new2 constructs a new KCoreConfigSkeleton::ItemSize object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QSize*
/// @param defaultValue QSize*
///
KCoreConfigSkeleton__ItemSize* k_coreconfigskeleton__itemsize_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemsize_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param callback void func(KCoreConfigSkeleton__ItemSize* self, KConfig* config)
///
void k_coreconfigskeleton__itemsize_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsize_super_read_config` instead
///
#define k_coreconfigskeleton__itemsize_qbase_read_config k_coreconfigskeleton__itemsize_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemsize_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemsize_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param callback void func(KCoreConfigSkeleton__ItemSize* self, QVariant* p)
///
void k_coreconfigskeleton__itemsize_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsize_super_set_property` instead
///
#define k_coreconfigskeleton__itemsize_qbase_set_property k_coreconfigskeleton__itemsize_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemsize_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemsize_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param callback bool func(KCoreConfigSkeleton__ItemSize* self, QVariant* p)
///
void k_coreconfigskeleton__itemsize_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsize_super_is_equal` instead
///
#define k_coreconfigskeleton__itemsize_qbase_is_equal k_coreconfigskeleton__itemsize_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemsize_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
///
/// @param self KCoreConfigSkeleton__ItemSize*
///
QVariant* k_coreconfigskeleton__itemsize_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSize*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemsize_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsize_super_property` instead
///
#define k_coreconfigskeleton__itemsize_qbase_property k_coreconfigskeleton__itemsize_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsize.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSize*
///
QVariant* k_coreconfigskeleton__itemsize_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemSize*
///
void k_coreconfigskeleton__itemsize_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html)

/// k_coreconfigskeleton__itemsizef_new constructs a new KCoreConfigSkeleton::ItemSizeF object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton__itemsizef_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html)

/// k_coreconfigskeleton__itemsizef_new2 constructs a new KCoreConfigSkeleton::ItemSizeF object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_coreconfigskeleton__itemsizef_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemsizef_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param callback void func(KCoreConfigSkeleton__ItemSizeF* self, KConfig* config)
///
void k_coreconfigskeleton__itemsizef_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsizef_super_read_config` instead
///
#define k_coreconfigskeleton__itemsizef_qbase_read_config k_coreconfigskeleton__itemsizef_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemsizef_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemsizef_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param callback void func(KCoreConfigSkeleton__ItemSizeF* self, QVariant* p)
///
void k_coreconfigskeleton__itemsizef_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsizef_super_set_property` instead
///
#define k_coreconfigskeleton__itemsizef_qbase_set_property k_coreconfigskeleton__itemsizef_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemsizef_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemsizef_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param callback bool func(KCoreConfigSkeleton__ItemSizeF* self, QVariant* p)
///
void k_coreconfigskeleton__itemsizef_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsizef_super_is_equal` instead
///
#define k_coreconfigskeleton__itemsizef_qbase_is_equal k_coreconfigskeleton__itemsizef_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemsizef_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
///
QVariant* k_coreconfigskeleton__itemsizef_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemsizef_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemsizef_super_property` instead
///
#define k_coreconfigskeleton__itemsizef_qbase_property k_coreconfigskeleton__itemsizef_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemsizef.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
///
QVariant* k_coreconfigskeleton__itemsizef_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemSizeF*
///
void k_coreconfigskeleton__itemsizef_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html)

/// k_coreconfigskeleton__itemdatetime_new constructs a new KCoreConfigSkeleton::ItemDateTime object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton__itemdatetime_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html)

/// k_coreconfigskeleton__itemdatetime_new2 constructs a new KCoreConfigSkeleton::ItemDateTime object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_coreconfigskeleton__itemdatetime_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemdatetime_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param callback void func(KCoreConfigSkeleton__ItemDateTime* self, KConfig* config)
///
void k_coreconfigskeleton__itemdatetime_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdatetime_super_read_config` instead
///
#define k_coreconfigskeleton__itemdatetime_qbase_read_config k_coreconfigskeleton__itemdatetime_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemdatetime_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemdatetime_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param callback void func(KCoreConfigSkeleton__ItemDateTime* self, QVariant* p)
///
void k_coreconfigskeleton__itemdatetime_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdatetime_super_set_property` instead
///
#define k_coreconfigskeleton__itemdatetime_qbase_set_property k_coreconfigskeleton__itemdatetime_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemdatetime_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemdatetime_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param callback bool func(KCoreConfigSkeleton__ItemDateTime* self, QVariant* p)
///
void k_coreconfigskeleton__itemdatetime_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdatetime_super_is_equal` instead
///
#define k_coreconfigskeleton__itemdatetime_qbase_is_equal k_coreconfigskeleton__itemdatetime_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemdatetime_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
///
QVariant* k_coreconfigskeleton__itemdatetime_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemdatetime_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemdatetime_super_property` instead
///
#define k_coreconfigskeleton__itemdatetime_qbase_property k_coreconfigskeleton__itemdatetime_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemdatetime.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
///
QVariant* k_coreconfigskeleton__itemdatetime_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemDateTime*
///
void k_coreconfigskeleton__itemdatetime_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html)

/// k_coreconfigskeleton__itemstringlist_new constructs a new KCoreConfigSkeleton::ItemStringList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char**
///
KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton__itemstringlist_new(const char* _group, const char* _key, const char* reference[static 1]);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html)

/// k_coreconfigskeleton__itemstringlist_new2 constructs a new KCoreConfigSkeleton::ItemStringList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char**
/// @param defaultValue const char**
///
KCoreConfigSkeleton__ItemStringList* k_coreconfigskeleton__itemstringlist_new2(const char* _group, const char* _key, const char* reference[static 1], const char* defaultValue[static 1]);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemstringlist_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param callback void func(KCoreConfigSkeleton__ItemStringList* self, KConfig* config)
///
void k_coreconfigskeleton__itemstringlist_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstringlist_super_read_config` instead
///
#define k_coreconfigskeleton__itemstringlist_qbase_read_config k_coreconfigskeleton__itemstringlist_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemstringlist_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemstringlist_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param callback void func(KCoreConfigSkeleton__ItemStringList* self, QVariant* p)
///
void k_coreconfigskeleton__itemstringlist_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstringlist_super_set_property` instead
///
#define k_coreconfigskeleton__itemstringlist_qbase_set_property k_coreconfigskeleton__itemstringlist_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemstringlist_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemstringlist_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param callback bool func(KCoreConfigSkeleton__ItemStringList* self, QVariant* p)
///
void k_coreconfigskeleton__itemstringlist_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstringlist_super_is_equal` instead
///
#define k_coreconfigskeleton__itemstringlist_qbase_is_equal k_coreconfigskeleton__itemstringlist_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemstringlist_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// @param self KCoreConfigSkeleton__ItemStringList*
///
QVariant* k_coreconfigskeleton__itemstringlist_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemStringList*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemstringlist_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemstringlist_super_property` instead
///
#define k_coreconfigskeleton__itemstringlist_qbase_property k_coreconfigskeleton__itemstringlist_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemStringList*
///
QVariant* k_coreconfigskeleton__itemstringlist_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemStringList*
///
void k_coreconfigskeleton__itemstringlist_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html)

/// k_coreconfigskeleton__itempathlist_new constructs a new KCoreConfigSkeleton::ItemPathList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char**
///
KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new(const char* _group, const char* _key, const char* reference[static 1]);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html)

/// k_coreconfigskeleton__itempathlist_new2 constructs a new KCoreConfigSkeleton::ItemPathList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char**
/// @param defaultValue const char**
///
KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new2(const char* _group, const char* _key, const char* reference[static 1], const char* defaultValue[static 1]);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempathlist_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback void func(KCoreConfigSkeleton__ItemPathList* self, KConfig* config)
///
void k_coreconfigskeleton__itempathlist_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempathlist_super_read_config` instead
///
#define k_coreconfigskeleton__itempathlist_qbase_read_config k_coreconfigskeleton__itempathlist_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempathlist_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempathlist_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback void func(KCoreConfigSkeleton__ItemPathList* self, KConfig* config)
///
void k_coreconfigskeleton__itempathlist_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempathlist_super_write_config` instead
///
#define k_coreconfigskeleton__itempathlist_qbase_write_config k_coreconfigskeleton__itempathlist_super_write_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itempathlist_super_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempathlist_set_property(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempathlist_super_set_property` instead
///
#define k_coreconfigskeleton__itempathlist_qbase_set_property k_coreconfigskeleton__itempathlist_super_set_property

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itempathlist_super_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback void func(KCoreConfigSkeleton__ItemPathList* self, QVariant* p)
///
void k_coreconfigskeleton__itempathlist_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempathlist_is_equal(void* self, void* p);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempathlist_super_is_equal` instead
///
#define k_coreconfigskeleton__itempathlist_qbase_is_equal k_coreconfigskeleton__itempathlist_super_is_equal

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itempathlist_super_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback bool func(KCoreConfigSkeleton__ItemPathList* self, QVariant* p)
///
void k_coreconfigskeleton__itempathlist_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
///
QVariant* k_coreconfigskeleton__itempathlist_property(void* self);

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itempathlist_super_property` instead
///
#define k_coreconfigskeleton__itempathlist_qbase_property k_coreconfigskeleton__itempathlist_super_property

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
///
QVariant* k_coreconfigskeleton__itempathlist_super_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itempathlist_on_property(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPathList*
///
void k_coreconfigskeleton__itempathlist_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html)

/// k_coreconfigskeleton__itemurllist_new constructs a new KCoreConfigSkeleton::ItemUrlList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference libqt_list of QUrl*
///
KCoreConfigSkeleton__ItemUrlList* k_coreconfigskeleton__itemurllist_new(const char* _group, const char* _key, libqt_list reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html)

/// k_coreconfigskeleton__itemurllist_new2 constructs a new KCoreConfigSkeleton::ItemUrlList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference libqt_list of QUrl*
/// @param defaultValue libqt_list of QUrl*
///
KCoreConfigSkeleton__ItemUrlList* k_coreconfigskeleton__itemurllist_new2(const char* _group, const char* _key, libqt_list reference, libqt_list defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurllist_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param callback void func(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config)
///
void k_coreconfigskeleton__itemurllist_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurllist_super_read_config` instead
///
#define k_coreconfigskeleton__itemurllist_qbase_read_config k_coreconfigskeleton__itemurllist_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurllist_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurllist_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param callback void func(KCoreConfigSkeleton__ItemUrlList* self, KConfig* config)
///
void k_coreconfigskeleton__itemurllist_on_write_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurllist_super_write_config` instead
///
#define k_coreconfigskeleton__itemurllist_qbase_write_config k_coreconfigskeleton__itemurllist_super_write_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemurllist_super_write_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemurllist_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param callback void func(KCoreConfigSkeleton__ItemUrlList* self, QVariant* p)
///
void k_coreconfigskeleton__itemurllist_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurllist_super_set_property` instead
///
#define k_coreconfigskeleton__itemurllist_qbase_set_property k_coreconfigskeleton__itemurllist_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemurllist_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemurllist_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param callback bool func(KCoreConfigSkeleton__ItemUrlList* self, QVariant* p)
///
void k_coreconfigskeleton__itemurllist_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurllist_super_is_equal` instead
///
#define k_coreconfigskeleton__itemurllist_qbase_is_equal k_coreconfigskeleton__itemurllist_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemurllist_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
///
QVariant* k_coreconfigskeleton__itemurllist_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemurllist_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemurllist_super_property` instead
///
#define k_coreconfigskeleton__itemurllist_qbase_property k_coreconfigskeleton__itemurllist_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemurllist.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
///
QVariant* k_coreconfigskeleton__itemurllist_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemUrlList*
///
void k_coreconfigskeleton__itemurllist_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html)

/// k_coreconfigskeleton__itemintlist_new constructs a new KCoreConfigSkeleton::ItemIntList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference libqt_list of int
///
KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton__itemintlist_new(const char* _group, const char* _key, libqt_list reference);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html)

/// k_coreconfigskeleton__itemintlist_new2 constructs a new KCoreConfigSkeleton::ItemIntList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference libqt_list of int
/// @param defaultValue libqt_list of int
///
KCoreConfigSkeleton__ItemIntList* k_coreconfigskeleton__itemintlist_new2(const char* _group, const char* _key, libqt_list reference, libqt_list defaultValue);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemintlist_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param callback void func(KCoreConfigSkeleton__ItemIntList* self, KConfig* config)
///
void k_coreconfigskeleton__itemintlist_on_read_config(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemintlist_super_read_config` instead
///
#define k_coreconfigskeleton__itemintlist_qbase_read_config k_coreconfigskeleton__itemintlist_super_read_config

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param config KConfig*
///
void k_coreconfigskeleton__itemintlist_super_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemintlist_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param callback void func(KCoreConfigSkeleton__ItemIntList* self, QVariant* p)
///
void k_coreconfigskeleton__itemintlist_on_set_property(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemintlist_super_set_property` instead
///
#define k_coreconfigskeleton__itemintlist_qbase_set_property k_coreconfigskeleton__itemintlist_super_set_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#setProperty)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param p QVariant*
///
void k_coreconfigskeleton__itemintlist_super_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemintlist_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param callback bool func(KCoreConfigSkeleton__ItemIntList* self, QVariant* p)
///
void k_coreconfigskeleton__itemintlist_on_is_equal(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemintlist_super_is_equal` instead
///
#define k_coreconfigskeleton__itemintlist_qbase_is_equal k_coreconfigskeleton__itemintlist_super_is_equal

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#isEqual)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param p QVariant*
///
bool k_coreconfigskeleton__itemintlist_super_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
///
/// @param self KCoreConfigSkeleton__ItemIntList*
///
QVariant* k_coreconfigskeleton__itemintlist_property(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemIntList*
/// @param callback QVariant* func()
///
void k_coreconfigskeleton__itemintlist_on_property(void* self, QVariant* (*callback)());

/// @warning DEPRECATED: Use `k_coreconfigskeleton__itemintlist_super_property` instead
///
#define k_coreconfigskeleton__itemintlist_qbase_property k_coreconfigskeleton__itemintlist_super_property

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton-itemintlist.html#property)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemIntList*
///
QVariant* k_coreconfigskeleton__itemintlist_super_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemIntList*
///
void k_coreconfigskeleton__itemintlist_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#public-types)

typedef enum {
    KCORECONFIGSKELETON_ITEMSTRING_TYPE_NORMAL = 0,
    KCORECONFIGSKELETON_ITEMSTRING_TYPE_PASSWORD = 1,
    KCORECONFIGSKELETON_ITEMSTRING_TYPE_PATH = 2
} KCoreConfigSkeleton__ItemString__Type;

#endif
