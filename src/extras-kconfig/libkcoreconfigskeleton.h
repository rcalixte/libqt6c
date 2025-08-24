#pragma once
#ifndef SRC_EXTRAS_KCONFIGQT6C_LIBKCORECONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIGQT6C_LIBKCORECONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kconfigskeletonitem.html

/// k_configskeletonitem_new constructs a new KConfigSkeletonItem object.
///
/// @param _group const char*
/// @param _key const char*
KConfigSkeletonItem* k_configskeletonitem_new(const char* _group, const char* _key);

/// k_configskeletonitem_new2 constructs a new KConfigSkeletonItem object.
///
/// @param param1 KConfigSkeletonItem*
KConfigSkeletonItem* k_configskeletonitem_new2(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KConfigSkeletonItem*
/// @param _group const char*
void k_configskeletonitem_set_group(void* self, const char* _group);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigSkeletonItem*
const char* k_configskeletonitem_group(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KConfigSkeletonItem*
/// @param cg KConfigGroup*
void k_configskeletonitem_set_group2(void* self, void* cg);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#configGroup)
///
/// @param self KConfigSkeletonItem*
/// @param config KConfig*
KConfigGroup* k_configskeletonitem_config_group(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setKey)
///
/// @param self KConfigSkeletonItem*
/// @param _key const char*
void k_configskeletonitem_set_key(void* self, const char* _key);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigSkeletonItem*
const char* k_configskeletonitem_key(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setName)
///
/// @param self KConfigSkeletonItem*
/// @param _name const char*
void k_configskeletonitem_set_name(void* self, const char* _name);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigSkeletonItem*
const char* k_configskeletonitem_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setLabel)
///
/// @param self KConfigSkeletonItem*
/// @param l const char*
void k_configskeletonitem_set_label(void* self, const char* l);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigSkeletonItem*
const char* k_configskeletonitem_label(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setToolTip)
///
/// @param self KConfigSkeletonItem*
/// @param t const char*
void k_configskeletonitem_set_tool_tip(void* self, const char* t);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigSkeletonItem*
const char* k_configskeletonitem_tool_tip(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setWhatsThis)
///
/// @param self KConfigSkeletonItem*
/// @param w const char*
void k_configskeletonitem_set_whats_this(void* self, const char* w);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigSkeletonItem*
const char* k_configskeletonitem_whats_this(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setWriteFlags)
///
/// @param self KConfigSkeletonItem*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
void k_configskeletonitem_set_write_flags(void* self, int64_t flags);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#writeFlags)
///
/// @param self KConfigSkeletonItem*
///
/// @return flag of enum KConfigBase__WriteConfigFlag
int64_t k_configskeletonitem_write_flags(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readConfig)
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
void k_configskeletonitem_read_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn(KConfigSkeletonItem*, KConfig*)
void k_configskeletonitem_on_read_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readConfig)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
void k_configskeletonitem_qbase_read_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#writeConfig)
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
void k_configskeletonitem_write_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn(KConfigSkeletonItem*, KConfig*)
void k_configskeletonitem_on_write_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
void k_configskeletonitem_qbase_write_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readDefault)
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
void k_configskeletonitem_read_default(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn(KConfigSkeletonItem*, KConfig*)
void k_configskeletonitem_on_read_default(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readDefault)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param param1 KConfig*
void k_configskeletonitem_qbase_read_default(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setProperty)
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
void k_configskeletonitem_set_property(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn(KConfigSkeletonItem*, QVariant*)
void k_configskeletonitem_on_set_property(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setProperty)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
void k_configskeletonitem_qbase_set_property(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isEqual)
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
bool k_configskeletonitem_is_equal(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback bool fn(KConfigSkeletonItem*, QVariant*)
void k_configskeletonitem_on_is_equal(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isEqual)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param p QVariant*
bool k_configskeletonitem_qbase_is_equal(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#property)
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_property(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback QVariant* fn()
void k_configskeletonitem_on_property(void* self, QVariant* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#property)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_qbase_property(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#minValue)
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_min_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#minValue)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback QVariant* fn()
void k_configskeletonitem_on_min_value(void* self, QVariant* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#minValue)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_qbase_min_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#maxValue)
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_max_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback QVariant* fn()
void k_configskeletonitem_on_max_value(void* self, QVariant* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_qbase_max_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setDefault)
///
/// @param self KConfigSkeletonItem*
void k_configskeletonitem_set_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn()
void k_configskeletonitem_on_set_default(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setDefault)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
void k_configskeletonitem_qbase_set_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#swapDefault)
///
/// @param self KConfigSkeletonItem*
void k_configskeletonitem_swap_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#swapDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn()
void k_configskeletonitem_on_swap_default(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#swapDefault)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
void k_configskeletonitem_qbase_swap_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isImmutable)
///
/// @param self KConfigSkeletonItem*
bool k_configskeletonitem_is_immutable(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isDefault)
///
/// @param self KConfigSkeletonItem*
bool k_configskeletonitem_is_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isSaveNeeded)
///
/// @param self KConfigSkeletonItem*
bool k_configskeletonitem_is_save_needed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#getDefault)
///
/// @param self KConfigSkeletonItem*
QVariant* k_configskeletonitem_get_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// @param self KConfigSkeletonItem*
/// @param group KConfigGroup*
void k_configskeletonitem_read_immutability(void* self, void* group);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeletonItem*
/// @param callback void fn(KConfigSkeletonItem*, KConfigGroup*)
void k_configskeletonitem_on_read_immutability(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Base class method implementation
///
/// @param self KConfigSkeletonItem*
/// @param group KConfigGroup*
void k_configskeletonitem_qbase_read_immutability(void* self, void* group);

/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#dtor.KConfigSkeletonItem)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigSkeletonItem*
void k_configskeletonitem_delete(void* self);

/// https://api-staging.kde.org/kpropertyskeletonitem.html

/// k_propertyskeletonitem_new constructs a new KPropertySkeletonItem object.
///
/// @param object QObject*
/// @param propertyName const char*
/// @param defaultValue QVariant*
KPropertySkeletonItem* k_propertyskeletonitem_new(void* object, const char* propertyName, void* defaultValue);

/// k_propertyskeletonitem_new2 constructs a new KPropertySkeletonItem object.
///
/// @param param1 KPropertySkeletonItem*
KPropertySkeletonItem* k_propertyskeletonitem_new2(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#property)
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_property(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback QVariant* fn()
void k_propertyskeletonitem_on_property(void* self, QVariant* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#property)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_qbase_property(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#setProperty)
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
void k_propertyskeletonitem_set_property(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn(KPropertySkeletonItem*, QVariant*)
void k_propertyskeletonitem_on_set_property(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#setProperty)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
void k_propertyskeletonitem_qbase_set_property(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#isEqual)
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
bool k_propertyskeletonitem_is_equal(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback bool fn(KPropertySkeletonItem*, QVariant*)
void k_propertyskeletonitem_on_is_equal(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#isEqual)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param p QVariant*
bool k_propertyskeletonitem_qbase_is_equal(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#readConfig)
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
void k_propertyskeletonitem_read_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn(KPropertySkeletonItem*, KConfig*)
void k_propertyskeletonitem_on_read_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#readConfig)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
void k_propertyskeletonitem_qbase_read_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#writeConfig)
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
void k_propertyskeletonitem_write_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn(KPropertySkeletonItem*, KConfig*)
void k_propertyskeletonitem_on_write_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
void k_propertyskeletonitem_qbase_write_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#readDefault)
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
void k_propertyskeletonitem_read_default(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#readDefault)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn(KPropertySkeletonItem*, KConfig*)
void k_propertyskeletonitem_on_read_default(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#readDefault)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
/// @param param1 KConfig*
void k_propertyskeletonitem_qbase_read_default(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#setDefault)
///
/// @param self KPropertySkeletonItem*
void k_propertyskeletonitem_set_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#setDefault)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn()
void k_propertyskeletonitem_on_set_default(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#setDefault)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
void k_propertyskeletonitem_qbase_set_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#swapDefault)
///
/// @param self KPropertySkeletonItem*
void k_propertyskeletonitem_swap_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#swapDefault)
///
/// Allows for overriding the related default method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn()
void k_propertyskeletonitem_on_swap_default(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#swapDefault)
///
/// Base class method implementation
///
/// @param self KPropertySkeletonItem*
void k_propertyskeletonitem_qbase_swap_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KPropertySkeletonItem*
/// @param _group const char*
void k_propertyskeletonitem_set_group(void* self, const char* _group);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPropertySkeletonItem*
const char* k_propertyskeletonitem_group(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KPropertySkeletonItem*
/// @param cg KConfigGroup*
void k_propertyskeletonitem_set_group2(void* self, void* cg);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#configGroup)
///
/// @param self KPropertySkeletonItem*
/// @param config KConfig*
KConfigGroup* k_propertyskeletonitem_config_group(void* self, void* config);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setKey)
///
/// @param self KPropertySkeletonItem*
/// @param _key const char*
void k_propertyskeletonitem_set_key(void* self, const char* _key);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPropertySkeletonItem*
const char* k_propertyskeletonitem_key(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setName)
///
/// @param self KPropertySkeletonItem*
/// @param _name const char*
void k_propertyskeletonitem_set_name(void* self, const char* _name);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPropertySkeletonItem*
const char* k_propertyskeletonitem_name(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setLabel)
///
/// @param self KPropertySkeletonItem*
/// @param l const char*
void k_propertyskeletonitem_set_label(void* self, const char* l);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPropertySkeletonItem*
const char* k_propertyskeletonitem_label(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setToolTip)
///
/// @param self KPropertySkeletonItem*
/// @param t const char*
void k_propertyskeletonitem_set_tool_tip(void* self, const char* t);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPropertySkeletonItem*
const char* k_propertyskeletonitem_tool_tip(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setWhatsThis)
///
/// @param self KPropertySkeletonItem*
/// @param w const char*
void k_propertyskeletonitem_set_whats_this(void* self, const char* w);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPropertySkeletonItem*
const char* k_propertyskeletonitem_whats_this(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setWriteFlags)
///
/// @param self KPropertySkeletonItem*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
void k_propertyskeletonitem_set_write_flags(void* self, int64_t flags);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#writeFlags)
///
/// @param self KPropertySkeletonItem*
///
/// @return flag of enum KConfigBase__WriteConfigFlag
int64_t k_propertyskeletonitem_write_flags(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isImmutable)
///
/// @param self KPropertySkeletonItem*
bool k_propertyskeletonitem_is_immutable(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isDefault)
///
/// @param self KPropertySkeletonItem*
bool k_propertyskeletonitem_is_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isSaveNeeded)
///
/// @param self KPropertySkeletonItem*
bool k_propertyskeletonitem_is_save_needed(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#getDefault)
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_get_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#minValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_min_value(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#minValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_qbase_min_value(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#minValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param callback QVariant* fn()
void k_propertyskeletonitem_on_min_value(void* self, QVariant* (*callback)());

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_max_value(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
QVariant* k_propertyskeletonitem_qbase_max_value(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#maxValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param callback QVariant* fn()
void k_propertyskeletonitem_on_max_value(void* self, QVariant* (*callback)());

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param group KConfigGroup*
void k_propertyskeletonitem_read_immutability(void* self, void* group);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param group KConfigGroup*
void k_propertyskeletonitem_qbase_read_immutability(void* self, void* group);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#readImmutability)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertySkeletonItem*
/// @param callback void fn(KPropertySkeletonItem*, KConfigGroup*)
void k_propertyskeletonitem_on_read_immutability(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kpropertyskeletonitem.html#dtor.KPropertySkeletonItem)
///
/// Delete this object from C++ memory.
///
/// @param self KPropertySkeletonItem*
void k_propertyskeletonitem_delete(void* self);

/// https://api-staging.kde.org/kconfigcompilersignallingitem.html

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#readConfig)
///
/// @param self KConfigCompilerSignallingItem*
/// @param param1 KConfig*
void k_configcompilersignallingitem_read_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#writeConfig)
///
/// @param self KConfigCompilerSignallingItem*
/// @param param1 KConfig*
void k_configcompilersignallingitem_write_config(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#readDefault)
///
/// @param self KConfigCompilerSignallingItem*
/// @param param1 KConfig*
void k_configcompilersignallingitem_read_default(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#setProperty)
///
/// @param self KConfigCompilerSignallingItem*
/// @param p QVariant*
void k_configcompilersignallingitem_set_property(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#isEqual)
///
/// @param self KConfigCompilerSignallingItem*
/// @param p QVariant*
bool k_configcompilersignallingitem_is_equal(void* self, void* p);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#property)
///
/// @param self KConfigCompilerSignallingItem*
QVariant* k_configcompilersignallingitem_property(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#minValue)
///
/// @param self KConfigCompilerSignallingItem*
QVariant* k_configcompilersignallingitem_min_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#maxValue)
///
/// @param self KConfigCompilerSignallingItem*
QVariant* k_configcompilersignallingitem_max_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#setDefault)
///
/// @param self KConfigCompilerSignallingItem*
void k_configcompilersignallingitem_set_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#swapDefault)
///
/// @param self KConfigCompilerSignallingItem*
void k_configcompilersignallingitem_swap_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#setWriteFlags)
///
/// @param self KConfigCompilerSignallingItem*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
void k_configcompilersignallingitem_set_write_flags(void* self, int64_t flags);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#writeFlags)
///
/// @param self KConfigCompilerSignallingItem*
///
/// @return flag of enum KConfigBase__WriteConfigFlag
int64_t k_configcompilersignallingitem_write_flags(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#setGroup)
///
/// @param self KConfigCompilerSignallingItem*
/// @param cg KConfigGroup*
void k_configcompilersignallingitem_set_group(void* self, void* cg);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#configGroup)
///
/// @param self KConfigCompilerSignallingItem*
/// @param config KConfig*
KConfigGroup* k_configcompilersignallingitem_config_group(void* self, void* config);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigCompilerSignallingItem*
const char* k_configcompilersignallingitem_group(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setGroup)
///
/// @param self KConfigCompilerSignallingItem*
/// @param cg KConfigGroup*
void k_configcompilersignallingitem_set_group2(void* self, void* cg);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setKey)
///
/// @param self KConfigCompilerSignallingItem*
/// @param _key const char*
void k_configcompilersignallingitem_set_key(void* self, const char* _key);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigCompilerSignallingItem*
const char* k_configcompilersignallingitem_key(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setName)
///
/// @param self KConfigCompilerSignallingItem*
/// @param _name const char*
void k_configcompilersignallingitem_set_name(void* self, const char* _name);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigCompilerSignallingItem*
const char* k_configcompilersignallingitem_name(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setLabel)
///
/// @param self KConfigCompilerSignallingItem*
/// @param l const char*
void k_configcompilersignallingitem_set_label(void* self, const char* l);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigCompilerSignallingItem*
const char* k_configcompilersignallingitem_label(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setToolTip)
///
/// @param self KConfigCompilerSignallingItem*
/// @param t const char*
void k_configcompilersignallingitem_set_tool_tip(void* self, const char* t);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigCompilerSignallingItem*
const char* k_configcompilersignallingitem_tool_tip(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#setWhatsThis)
///
/// @param self KConfigCompilerSignallingItem*
/// @param w const char*
void k_configcompilersignallingitem_set_whats_this(void* self, const char* w);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigCompilerSignallingItem*
const char* k_configcompilersignallingitem_whats_this(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isImmutable)
///
/// @param self KConfigCompilerSignallingItem*
bool k_configcompilersignallingitem_is_immutable(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isDefault)
///
/// @param self KConfigCompilerSignallingItem*
bool k_configcompilersignallingitem_is_default(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#isSaveNeeded)
///
/// @param self KConfigCompilerSignallingItem*
bool k_configcompilersignallingitem_is_save_needed(void* self);

/// Inherited from KConfigSkeletonItem
///
/// [Qt documentation](https://api-staging.kde.org/kconfigskeletonitem.html#getDefault)
///
/// @param self KConfigCompilerSignallingItem*
QVariant* k_configcompilersignallingitem_get_default(void* self);

/// [Qt documentation](https://api-staging.kde.org/kconfigcompilersignallingitem.html#dtor.KConfigCompilerSignallingItem)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigCompilerSignallingItem*
void k_configcompilersignallingitem_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton.html

/// k_coreconfigskeleton_new constructs a new KCoreConfigSkeleton object.
///
KCoreConfigSkeleton* k_coreconfigskeleton_new();

/// k_coreconfigskeleton_new2 constructs a new KCoreConfigSkeleton object.
///
/// @param configname const char*
KCoreConfigSkeleton* k_coreconfigskeleton_new2(const char* configname);

/// k_coreconfigskeleton_new3 constructs a new KCoreConfigSkeleton object.
///
/// @param configname const char*
/// @param parent QObject*
KCoreConfigSkeleton* k_coreconfigskeleton_new3(const char* configname, void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KCoreConfigSkeleton*
const QMetaObject* k_coreconfigskeleton_meta_object(void* self);

/// @param self KCoreConfigSkeleton*
/// @param param1 const char*
void* k_coreconfigskeleton_metacast(void* self, const char* param1);

/// @param self KCoreConfigSkeleton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_coreconfigskeleton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback int32_t fn(KCoreConfigSkeleton*, enum QMetaObject__Call, int, void*)
void k_coreconfigskeleton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_coreconfigskeleton_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_coreconfigskeleton_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_set_defaults(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn()
void k_coreconfigskeleton_on_set_defaults(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_qbase_set_defaults(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#load)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_load(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#read)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_read(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#isDefaults)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_is_defaults(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_is_save_needed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
///
/// @param self KCoreConfigSkeleton*
/// @param group const char*
void k_coreconfigskeleton_set_current_group(void* self, const char* group);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#currentGroup)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton*
const char* k_coreconfigskeleton_current_group(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KCoreConfigSkeleton*
/// @param item KConfigSkeletonItem*
void k_coreconfigskeleton_add_item(void* self, void* item);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password(void* self, const char* name, const char* reference);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path(void* self, const char* name, const char* reference);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KCoreConfigSkeleton*
KConfig* k_coreconfigskeleton_config(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KCoreConfigSkeleton*
const KConfig* k_coreconfigskeleton_config2(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#items)
///
/// @param self KCoreConfigSkeleton*
libqt_list /* of KConfigSkeletonItem* */ k_coreconfigskeleton_items(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#removeItem)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
void k_coreconfigskeleton_remove_item(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#clearItems)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_clear_items(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#isImmutable)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
bool k_coreconfigskeleton_is_immutable(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#findItem)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
KConfigSkeletonItem* k_coreconfigskeleton_find_item(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
bool k_coreconfigskeleton_use_defaults(void* self, bool b);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool fn(KCoreConfigSkeleton*, bool)
void k_coreconfigskeleton_on_use_defaults(void* self, bool (*callback)(void*, bool));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
bool k_coreconfigskeleton_qbase_use_defaults(void* self, bool b);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#save)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_save(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_config_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*)
void k_coreconfigskeleton_on_config_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
bool k_coreconfigskeleton_usr_use_defaults(void* self, bool b);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool fn(KCoreConfigSkeleton*, bool)
void k_coreconfigskeleton_on_usr_use_defaults(void* self, bool (*callback)(void*, bool));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
bool k_coreconfigskeleton_qbase_usr_use_defaults(void* self, bool b);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_usr_set_defaults(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn()
void k_coreconfigskeleton_on_usr_set_defaults(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_qbase_usr_set_defaults(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_usr_read(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn()
void k_coreconfigskeleton_on_usr_read(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_qbase_usr_read(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_usr_save(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool fn()
void k_coreconfigskeleton_on_usr_save(void* self, bool (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_qbase_usr_save(void* self);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_coreconfigskeleton_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_coreconfigskeleton_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KCoreConfigSkeleton*
/// @param item KConfigSkeletonItem*
/// @param name const char*
void k_coreconfigskeleton_add_item2(void* self, void* item, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton*
const char* k_coreconfigskeleton_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCoreConfigSkeleton*
/// @param name char*
void k_coreconfigskeleton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCoreConfigSkeleton*
bool k_coreconfigskeleton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCoreConfigSkeleton*
/// @param b bool
bool k_coreconfigskeleton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCoreConfigSkeleton*
QThread* k_coreconfigskeleton_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreConfigSkeleton*
/// @param thread QThread*
bool k_coreconfigskeleton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param interval int
int32_t k_coreconfigskeleton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param id int
void k_coreconfigskeleton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param id enum Qt__TimerId
void k_coreconfigskeleton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCoreConfigSkeleton*
libqt_list /* of QObject* */ k_coreconfigskeleton_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCoreConfigSkeleton*
/// @param parent QObject*
void k_coreconfigskeleton_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCoreConfigSkeleton*
/// @param filterObj QObject*
void k_coreconfigskeleton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCoreConfigSkeleton*
/// @param obj QObject*
void k_coreconfigskeleton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_coreconfigskeleton_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreConfigSkeleton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_coreconfigskeleton_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_coreconfigskeleton_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_coreconfigskeleton_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
/// @param value QVariant*
bool k_coreconfigskeleton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCoreConfigSkeleton*
/// @param name const char*
QVariant* k_coreconfigskeleton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton*
const char** k_coreconfigskeleton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreConfigSkeleton*
QBindingStorage* k_coreconfigskeleton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreConfigSkeleton*
const QBindingStorage* k_coreconfigskeleton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*)
void k_coreconfigskeleton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCoreConfigSkeleton*
QObject* k_coreconfigskeleton_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCoreConfigSkeleton*
/// @param classname const char*
bool k_coreconfigskeleton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreConfigSkeleton*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_coreconfigskeleton_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreConfigSkeleton*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_coreconfigskeleton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_coreconfigskeleton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreConfigSkeleton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_coreconfigskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
/// @param param1 QObject*
void k_coreconfigskeleton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, QObject*)
void k_coreconfigskeleton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
bool k_coreconfigskeleton_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
bool k_coreconfigskeleton_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool fn(KCoreConfigSkeleton*, QEvent*)
void k_coreconfigskeleton_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param watched QObject*
/// @param event QEvent*
bool k_coreconfigskeleton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param watched QObject*
/// @param event QEvent*
bool k_coreconfigskeleton_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool fn(KCoreConfigSkeleton*, QObject*, QEvent*)
void k_coreconfigskeleton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QTimerEvent*
void k_coreconfigskeleton_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QTimerEvent*
void k_coreconfigskeleton_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, QTimerEvent*)
void k_coreconfigskeleton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QChildEvent*
void k_coreconfigskeleton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QChildEvent*
void k_coreconfigskeleton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, QChildEvent*)
void k_coreconfigskeleton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
void k_coreconfigskeleton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param event QEvent*
void k_coreconfigskeleton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, QEvent*)
void k_coreconfigskeleton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
void k_coreconfigskeleton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
void k_coreconfigskeleton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, QMetaMethod*)
void k_coreconfigskeleton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
void k_coreconfigskeleton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
void k_coreconfigskeleton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, QMetaMethod*)
void k_coreconfigskeleton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
QObject* k_coreconfigskeleton_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
QObject* k_coreconfigskeleton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback QObject* fn()
void k_coreconfigskeleton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
int32_t k_coreconfigskeleton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
int32_t k_coreconfigskeleton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback int32_t fn()
void k_coreconfigskeleton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
int32_t k_coreconfigskeleton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal const char*
int32_t k_coreconfigskeleton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback int32_t fn(KCoreConfigSkeleton*, const char*)
void k_coreconfigskeleton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
bool k_coreconfigskeleton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param signal QMetaMethod*
bool k_coreconfigskeleton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton*
/// @param callback bool fn(KCoreConfigSkeleton*, QMetaMethod*)
void k_coreconfigskeleton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCoreConfigSkeleton*
/// @param callback void fn(KCoreConfigSkeleton*, const char*)
void k_coreconfigskeleton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton.html#dtor.KCoreConfigSkeleton)
///
/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton*
void k_coreconfigskeleton_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton-itempassword.html

/// k_coreconfigskeleton__itempassword_new constructs a new KCoreConfigSkeleton::ItemPassword object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton__itempassword_new(const char* _group, const char* _key, const char* reference);

/// k_coreconfigskeleton__itempassword_new2 constructs a new KCoreConfigSkeleton::ItemPassword object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemPassword* k_coreconfigskeleton__itempassword_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
void k_coreconfigskeleton__itempassword_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
void k_coreconfigskeleton__itempassword_qbase_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback void fn(KCoreConfigSkeleton__ItemPassword*, KConfig*)
void k_coreconfigskeleton__itempassword_on_write_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
void k_coreconfigskeleton__itempassword_read_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param config KConfig*
void k_coreconfigskeleton__itempassword_qbase_read_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback void fn(KCoreConfigSkeleton__ItemPassword*, KConfig*)
void k_coreconfigskeleton__itempassword_on_read_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
void k_coreconfigskeleton__itempassword_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
void k_coreconfigskeleton__itempassword_qbase_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback void fn(KCoreConfigSkeleton__ItemPassword*, QVariant*)
void k_coreconfigskeleton__itempassword_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
bool k_coreconfigskeleton__itempassword_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param p QVariant*
bool k_coreconfigskeleton__itempassword_qbase_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback bool fn(KCoreConfigSkeleton__ItemPassword*, QVariant*)
void k_coreconfigskeleton__itempassword_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
QVariant* k_coreconfigskeleton__itempassword_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
QVariant* k_coreconfigskeleton__itempassword_qbase_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPassword*
/// @param callback QVariant* fn()
void k_coreconfigskeleton__itempassword_on_property(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPassword*
void k_coreconfigskeleton__itempassword_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton-itempath.html

/// k_coreconfigskeleton__itempath_new constructs a new KCoreConfigSkeleton::ItemPath object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton__itempath_new(const char* _group, const char* _key, const char* reference);

/// k_coreconfigskeleton__itempath_new2 constructs a new KCoreConfigSkeleton::ItemPath object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemPath* k_coreconfigskeleton__itempath_new2(const char* _group, const char* _key, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
void k_coreconfigskeleton__itempath_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
void k_coreconfigskeleton__itempath_qbase_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#writeConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback void fn(KCoreConfigSkeleton__ItemPath*, KConfig*)
void k_coreconfigskeleton__itempath_on_write_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
void k_coreconfigskeleton__itempath_read_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param config KConfig*
void k_coreconfigskeleton__itempath_qbase_read_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#readConfig)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback void fn(KCoreConfigSkeleton__ItemPath*, KConfig*)
void k_coreconfigskeleton__itempath_on_read_config(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
void k_coreconfigskeleton__itempath_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
void k_coreconfigskeleton__itempath_qbase_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback void fn(KCoreConfigSkeleton__ItemPath*, QVariant*)
void k_coreconfigskeleton__itempath_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
bool k_coreconfigskeleton__itempath_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param p QVariant*
bool k_coreconfigskeleton__itempath_qbase_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback bool fn(KCoreConfigSkeleton__ItemPath*, QVariant*)
void k_coreconfigskeleton__itempath_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
QVariant* k_coreconfigskeleton__itempath_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
QVariant* k_coreconfigskeleton__itempath_qbase_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemString
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstring.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPath*
/// @param callback QVariant* fn()
void k_coreconfigskeleton__itempath_on_property(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPath*
void k_coreconfigskeleton__itempath_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html

/// k_coreconfigskeleton__itemenum__choice_new constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
///
/// @param param1 KCoreConfigSkeleton__ItemEnum__Choice*
KCoreConfigSkeleton__ItemEnum__Choice* k_coreconfigskeleton__itemenum__choice_new(void* param1);

/// k_coreconfigskeleton__itemenum__choice_new2 constructs a new KCoreConfigSkeleton::ItemEnum::Choice object.
///
KCoreConfigSkeleton__ItemEnum__Choice* k_coreconfigskeleton__itemenum__choice_new2();

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
const char* k_coreconfigskeleton__itemenum__choice_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#name-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param name const char*
void k_coreconfigskeleton__itemenum__choice_set_name(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
const char* k_coreconfigskeleton__itemenum__choice_label(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#label-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param label const char*
void k_coreconfigskeleton__itemenum__choice_set_label(void* self, const char* label);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
const char* k_coreconfigskeleton__itemenum__choice_tool_tip(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#toolTip-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param toolTip const char*
void k_coreconfigskeleton__itemenum__choice_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
const char* k_coreconfigskeleton__itemenum__choice_whats_this(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#whatsThis-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param whatsThis const char*
void k_coreconfigskeleton__itemenum__choice_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
const char* k_coreconfigskeleton__itemenum__choice_value(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#value-var)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param value const char*
void k_coreconfigskeleton__itemenum__choice_set_value(void* self, const char* value);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum-choice.html#operator-eq)
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
/// @param param1 KCoreConfigSkeleton__ItemEnum__Choice*
void k_coreconfigskeleton__itemenum__choice_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemEnum__Choice*
void k_coreconfigskeleton__itemenum__choice_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html

/// k_coreconfigskeleton__itemenum_new constructs a new KCoreConfigSkeleton::ItemEnum object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference int*
/// @param choices libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */
KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new(const char* _group, const char* _key, int* reference, libqt_list choices);

/// k_coreconfigskeleton__itemenum_new2 constructs a new KCoreConfigSkeleton::ItemEnum object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference int*
/// @param choices libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */
/// @param defaultValue int
KCoreConfigSkeleton__ItemEnum* k_coreconfigskeleton__itemenum_new2(const char* _group, const char* _key, int* reference, libqt_list choices, int defaultValue);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#choices)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
libqt_list /* of KCoreConfigSkeleton__ItemEnum__Choice* */ k_coreconfigskeleton__itemenum_choices(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
void k_coreconfigskeleton__itemenum_read_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback void fn(KCoreConfigSkeleton__ItemEnum*, KConfig*)
void k_coreconfigskeleton__itemenum_on_read_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
void k_coreconfigskeleton__itemenum_qbase_read_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
void k_coreconfigskeleton__itemenum_write_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback void fn(KCoreConfigSkeleton__ItemEnum*, KConfig*)
void k_coreconfigskeleton__itemenum_on_write_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param config KConfig*
void k_coreconfigskeleton__itemenum_qbase_write_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#valueForChoice)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param name const char*
const char* k_coreconfigskeleton__itemenum_value_for_choice(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemenum.html#setValueForChoice)
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param name const char*
/// @param valueForChoice const char*
void k_coreconfigskeleton__itemenum_set_value_for_choice(void* self, const char* name, const char* valueForChoice);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
void k_coreconfigskeleton__itemenum_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
void k_coreconfigskeleton__itemenum_qbase_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback void fn(KCoreConfigSkeleton__ItemEnum*, QVariant*)
void k_coreconfigskeleton__itemenum_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
bool k_coreconfigskeleton__itemenum_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param p QVariant*
bool k_coreconfigskeleton__itemenum_qbase_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback bool fn(KCoreConfigSkeleton__ItemEnum*, QVariant*)
void k_coreconfigskeleton__itemenum_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
QVariant* k_coreconfigskeleton__itemenum_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
QVariant* k_coreconfigskeleton__itemenum_qbase_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback QVariant* fn()
void k_coreconfigskeleton__itemenum_on_property(void* self, QVariant* (*callback)());

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
QVariant* k_coreconfigskeleton__itemenum_min_value(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
QVariant* k_coreconfigskeleton__itemenum_qbase_min_value(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#minValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback QVariant* fn()
void k_coreconfigskeleton__itemenum_on_min_value(void* self, QVariant* (*callback)());

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
QVariant* k_coreconfigskeleton__itemenum_max_value(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
QVariant* k_coreconfigskeleton__itemenum_qbase_max_value(void* self);

/// Inherited from KCoreConfigSkeleton::ItemInt
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemint.html#maxValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemEnum*
/// @param callback QVariant* fn()
void k_coreconfigskeleton__itemenum_on_max_value(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemEnum*
void k_coreconfigskeleton__itemenum_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html

/// k_coreconfigskeleton__itempathlist_new constructs a new KCoreConfigSkeleton::ItemPathList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char**
KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new(const char* _group, const char* _key, const char* reference[]);

/// k_coreconfigskeleton__itempathlist_new2 constructs a new KCoreConfigSkeleton::ItemPathList object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference const char**
/// @param defaultValue const char**
KCoreConfigSkeleton__ItemPathList* k_coreconfigskeleton__itempathlist_new2(const char* _group, const char* _key, const char* reference[], const char* defaultValue[]);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
void k_coreconfigskeleton__itempathlist_read_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback void fn(KCoreConfigSkeleton__ItemPathList*, KConfig*)
void k_coreconfigskeleton__itempathlist_on_read_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html#readConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
void k_coreconfigskeleton__itempathlist_qbase_read_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
void k_coreconfigskeleton__itempathlist_write_config(void* self, void* config);

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback void fn(KCoreConfigSkeleton__ItemPathList*, KConfig*)
void k_coreconfigskeleton__itempathlist_on_write_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itempathlist.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param config KConfig*
void k_coreconfigskeleton__itempathlist_qbase_write_config(void* self, void* config);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
void k_coreconfigskeleton__itempathlist_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
void k_coreconfigskeleton__itempathlist_qbase_set_property(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#setProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback void fn(KCoreConfigSkeleton__ItemPathList*, QVariant*)
void k_coreconfigskeleton__itempathlist_on_set_property(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
bool k_coreconfigskeleton__itempathlist_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param p QVariant*
bool k_coreconfigskeleton__itempathlist_qbase_is_equal(void* self, void* p);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#isEqual)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback bool fn(KCoreConfigSkeleton__ItemPathList*, QVariant*)
void k_coreconfigskeleton__itempathlist_on_is_equal(void* self, bool (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
QVariant* k_coreconfigskeleton__itempathlist_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
QVariant* k_coreconfigskeleton__itempathlist_qbase_property(void* self);

/// Inherited from KCoreConfigSkeleton::ItemStringList
///
/// [Qt documentation](https://api-staging.kde.org/kcoreconfigskeleton-itemstringlist.html#property)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreConfigSkeleton__ItemPathList*
/// @param callback QVariant* fn()
void k_coreconfigskeleton__itempathlist_on_property(void* self, QVariant* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KCoreConfigSkeleton__ItemPathList*
void k_coreconfigskeleton__itempathlist_delete(void* self);

/// https://api-staging.kde.org/kcoreconfigskeleton.html#types

typedef enum {
    KCORECONFIGSKELETON_ITEMSTRING_TYPE_NORMAL = 0,
    KCORECONFIGSKELETON_ITEMSTRING_TYPE_PASSWORD = 1,
    KCORECONFIGSKELETON_ITEMSTRING_TYPE_PATH = 2
} KCoreConfigSkeleton__ItemString__Type;

#endif
