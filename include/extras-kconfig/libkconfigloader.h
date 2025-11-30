#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKCONFIGLOADER_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKCONFIGLOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kconfigloader.html

/// k_configloader_new constructs a new KConfigLoader object.
///
/// @param configFile const char*
/// @param xml QIODevice*
KConfigLoader* k_configloader_new(const char* configFile, void* xml);

/// k_configloader_new2 constructs a new KConfigLoader object.
///
/// @param config KConfigGroup*
/// @param xml QIODevice*
KConfigLoader* k_configloader_new2(void* config, void* xml);

/// k_configloader_new3 constructs a new KConfigLoader object.
///
/// @param configFile const char*
/// @param xml QIODevice*
/// @param parent QObject*
KConfigLoader* k_configloader_new3(const char* configFile, void* xml, void* parent);

/// k_configloader_new4 constructs a new KConfigLoader object.
///
/// @param config KConfigGroup*
/// @param xml QIODevice*
/// @param parent QObject*
KConfigLoader* k_configloader_new4(void* config, void* xml, void* parent);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#findItem)
///
/// @param self KConfigLoader*
/// @param group const char*
/// @param key const char*
KConfigSkeletonItem* k_configloader_find_item(void* self, const char* group, const char* key);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#findItemByName)
///
/// @param self KConfigLoader*
/// @param name const char*
KConfigSkeletonItem* k_configloader_find_item_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#property)
///
/// @param self KConfigLoader*
/// @param name const char*
QVariant* k_configloader_property(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#hasGroup)
///
/// @param self KConfigLoader*
/// @param group const char*
bool k_configloader_has_group(void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#groupList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigLoader*
const char** k_configloader_group_list(void* self);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#usrSave)
///
/// @param self KConfigLoader*
bool k_configloader_usr_save(void* self);

/// [Upstream resources](https://api.kde.org/kconfigloader.html#usrSave)
///
/// Allows for overriding the related default method
///
/// @param self KConfigLoader*
/// @param callback bool func()
void k_configloader_on_usr_save(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kconfigloader.html#usrSave)
///
/// Base class method implementation
///
/// @param self KConfigLoader*
bool k_configloader_qbase_usr_save(void* self);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KConfigLoader*
const QMetaObject* k_configloader_meta_object(void* self);

/// Inherited from KConfigSkeleton
///
/// @param self KConfigLoader*
/// @param param1 const char*
void* k_configloader_metacast(void* self, const char* param1);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_configloader_tr(const char* s);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QColor*
KConfigSkeleton__ItemColor* k_configloader_add_item_color(void* self, const char* name, void* reference);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QFont*
KConfigSkeleton__ItemFont* k_configloader_add_item_font(void* self, const char* name, void* reference);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_configloader_tr2(const char* s, const char* c);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_configloader_tr3(const char* s, const char* c, int n);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QColor*
/// @param defaultValue QColor*
KConfigSkeleton__ItemColor* k_configloader_add_item_color3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QColor*
/// @param defaultValue QColor*
/// @param key const char*
KConfigSkeleton__ItemColor* k_configloader_add_item_color4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QFont*
/// @param defaultValue QFont*
KConfigSkeleton__ItemFont* k_configloader_add_item_font3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QFont*
/// @param defaultValue QFont*
/// @param key const char*
KConfigSkeleton__ItemFont* k_configloader_add_item_font4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
///
/// @param self KConfigLoader*
void k_configloader_load(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
///
/// @param self KConfigLoader*
void k_configloader_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
///
/// @param self KConfigLoader*
bool k_configloader_is_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
///
/// @param self KConfigLoader*
bool k_configloader_is_save_needed(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
///
/// @param self KConfigLoader*
/// @param group const char*
void k_configloader_set_current_group(void* self, const char* group);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigLoader*
const char* k_configloader_current_group(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KConfigLoader*
/// @param item KConfigSkeletonItem*
void k_configloader_add_item(void* self, void* item);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemString* k_configloader_add_item_string(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemPassword* k_configloader_add_item_password(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
KCoreConfigSkeleton__ItemPath* k_configloader_add_item_path(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QVariant*
KCoreConfigSkeleton__ItemProperty* k_configloader_add_item_property(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference bool*
KCoreConfigSkeleton__ItemBool* k_configloader_add_item_bool(void* self, const char* name, bool* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference int*
KCoreConfigSkeleton__ItemInt* k_configloader_add_item_int(void* self, const char* name, int* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference uint32_t*
KCoreConfigSkeleton__ItemUInt* k_configloader_add_item_u_int(void* self, const char* name, uint32_t* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference long long*
KCoreConfigSkeleton__ItemLongLong* k_configloader_add_item_long_long(void* self, const char* name, long long* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference uint64_t*
KCoreConfigSkeleton__ItemULongLong* k_configloader_add_item_u_long_long(void* self, const char* name, uint64_t* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference double*
KCoreConfigSkeleton__ItemDouble* k_configloader_add_item_double(void* self, const char* name, double* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QRect*
KCoreConfigSkeleton__ItemRect* k_configloader_add_item_rect(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QRectF*
KCoreConfigSkeleton__ItemRectF* k_configloader_add_item_rect_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QPoint*
KCoreConfigSkeleton__ItemPoint* k_configloader_add_item_point(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QPointF*
KCoreConfigSkeleton__ItemPointF* k_configloader_add_item_point_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QSize*
KCoreConfigSkeleton__ItemSize* k_configloader_add_item_size(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QSizeF*
KCoreConfigSkeleton__ItemSizeF* k_configloader_add_item_size_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QDateTime*
KCoreConfigSkeleton__ItemDateTime* k_configloader_add_item_date_time(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char**
KCoreConfigSkeleton__ItemStringList* k_configloader_add_item_string_list(void* self, const char* name, const char* reference[static 1]);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference libqt_list /* of int */
KCoreConfigSkeleton__ItemIntList* k_configloader_add_item_int_list(void* self, const char* name, libqt_list reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KConfigLoader*
KConfig* k_configloader_config(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KConfigLoader*
const KConfig* k_configloader_config2(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
///
/// @param self KConfigLoader*
libqt_list /* of KConfigSkeletonItem* */ k_configloader_items(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
///
/// @param self KConfigLoader*
/// @param name const char*
void k_configloader_remove_item(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
///
/// @param self KConfigLoader*
void k_configloader_clear_items(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
///
/// @param self KConfigLoader*
/// @param name const char*
bool k_configloader_is_immutable(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
///
/// @param self KConfigLoader*
bool k_configloader_save(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KConfigLoader*
void k_configloader_config_changed(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self)
void k_configloader_on_config_changed(void* self, void (*callback)(void*));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KConfigLoader*
/// @param item KConfigSkeletonItem*
/// @param name const char*
void k_configloader_add_item2(void* self, void* item, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemString* k_configloader_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
KCoreConfigSkeleton__ItemString* k_configloader_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemPassword* k_configloader_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
KCoreConfigSkeleton__ItemPassword* k_configloader_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
KCoreConfigSkeleton__ItemPath* k_configloader_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
KCoreConfigSkeleton__ItemPath* k_configloader_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
KCoreConfigSkeleton__ItemProperty* k_configloader_add_item_property3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
/// @param key const char*
KCoreConfigSkeleton__ItemProperty* k_configloader_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
KCoreConfigSkeleton__ItemBool* k_configloader_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
/// @param key const char*
KCoreConfigSkeleton__ItemBool* k_configloader_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int
KCoreConfigSkeleton__ItemInt* k_configloader_add_item_int3(void* self, const char* name, int* reference, int defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int
/// @param key const char*
KCoreConfigSkeleton__ItemInt* k_configloader_add_item_int4(void* self, const char* name, int* reference, int defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
KCoreConfigSkeleton__ItemUInt* k_configloader_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
/// @param key const char*
KCoreConfigSkeleton__ItemUInt* k_configloader_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue long long
KCoreConfigSkeleton__ItemLongLong* k_configloader_add_item_long_long3(void* self, const char* name, long long* reference, long long defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue long long
/// @param key const char*
KCoreConfigSkeleton__ItemLongLong* k_configloader_add_item_long_long4(void* self, const char* name, long long* reference, long long defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
KCoreConfigSkeleton__ItemULongLong* k_configloader_add_item_u_long_long3(void* self, const char* name, uint64_t* reference, uint64_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
/// @param key const char*
KCoreConfigSkeleton__ItemULongLong* k_configloader_add_item_u_long_long4(void* self, const char* name, uint64_t* reference, uint64_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
KCoreConfigSkeleton__ItemDouble* k_configloader_add_item_double3(void* self, const char* name, double* reference, double defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
/// @param key const char*
KCoreConfigSkeleton__ItemDouble* k_configloader_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
KCoreConfigSkeleton__ItemRect* k_configloader_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
/// @param key const char*
KCoreConfigSkeleton__ItemRect* k_configloader_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
KCoreConfigSkeleton__ItemRectF* k_configloader_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
/// @param key const char*
KCoreConfigSkeleton__ItemRectF* k_configloader_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
KCoreConfigSkeleton__ItemPoint* k_configloader_add_item_point3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
/// @param key const char*
KCoreConfigSkeleton__ItemPoint* k_configloader_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
KCoreConfigSkeleton__ItemPointF* k_configloader_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
/// @param key const char*
KCoreConfigSkeleton__ItemPointF* k_configloader_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
KCoreConfigSkeleton__ItemSize* k_configloader_add_item_size3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
/// @param key const char*
KCoreConfigSkeleton__ItemSize* k_configloader_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
KCoreConfigSkeleton__ItemSizeF* k_configloader_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
/// @param key const char*
KCoreConfigSkeleton__ItemSizeF* k_configloader_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
KCoreConfigSkeleton__ItemDateTime* k_configloader_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
/// @param key const char*
KCoreConfigSkeleton__ItemDateTime* k_configloader_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
KCoreConfigSkeleton__ItemStringList* k_configloader_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
/// @param key const char*
KCoreConfigSkeleton__ItemStringList* k_configloader_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference libqt_list /* of int */
/// @param defaultValue libqt_list /* of int */
KCoreConfigSkeleton__ItemIntList* k_configloader_add_item_int_list3(void* self, const char* name, libqt_list reference, libqt_list defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param reference libqt_list /* of int */
/// @param defaultValue libqt_list /* of int */
/// @param key const char*
KCoreConfigSkeleton__ItemIntList* k_configloader_add_item_int_list4(void* self, const char* name, libqt_list reference, libqt_list defaultValue, const char* key);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigLoader*
const char* k_configloader_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KConfigLoader*
/// @param name char*
void k_configloader_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KConfigLoader*
bool k_configloader_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KConfigLoader*
bool k_configloader_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KConfigLoader*
bool k_configloader_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KConfigLoader*
bool k_configloader_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KConfigLoader*
/// @param b bool
bool k_configloader_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KConfigLoader*
QThread* k_configloader_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigLoader*
/// @param thread QThread*
bool k_configloader_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigLoader*
/// @param interval int
int32_t k_configloader_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigLoader*
/// @param id int
void k_configloader_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigLoader*
/// @param id enum Qt__TimerId
void k_configloader_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KConfigLoader*
libqt_list /* of QObject* */ k_configloader_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KConfigLoader*
/// @param parent QObject*
void k_configloader_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KConfigLoader*
/// @param filterObj QObject*
void k_configloader_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KConfigLoader*
/// @param obj QObject*
void k_configloader_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_configloader_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KConfigLoader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_configloader_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_configloader_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_configloader_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KConfigLoader*
void k_configloader_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KConfigLoader*
void k_configloader_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KConfigLoader*
/// @param name const char*
/// @param value QVariant*
bool k_configloader_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigLoader*
const char** k_configloader_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigLoader*
QBindingStorage* k_configloader_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigLoader*
const QBindingStorage* k_configloader_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigLoader*
void k_configloader_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self)
void k_configloader_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KConfigLoader*
QObject* k_configloader_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KConfigLoader*
/// @param classname const char*
bool k_configloader_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KConfigLoader*
void k_configloader_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigLoader*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_configloader_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigLoader*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_configloader_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_configloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KConfigLoader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_configloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigLoader*
/// @param param1 QObject*
void k_configloader_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, QObject* param1)
void k_configloader_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_configloader_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_configloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback int32_t func(KConfigLoader* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_configloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
void k_configloader_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
void k_configloader_qbase_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func()
void k_configloader_on_set_defaults(void* self, void (*callback)());

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param b bool
bool k_configloader_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param b bool
bool k_configloader_qbase_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback bool func(KConfigLoader* self, bool b)
void k_configloader_on_use_defaults(void* self, bool (*callback)(void*, bool));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param b bool
bool k_configloader_usr_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param b bool
bool k_configloader_qbase_usr_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback bool func(KConfigLoader* self, bool b)
void k_configloader_on_usr_use_defaults(void* self, bool (*callback)(void*, bool));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
void k_configloader_usr_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
void k_configloader_qbase_usr_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func()
void k_configloader_on_usr_set_defaults(void* self, void (*callback)());

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
void k_configloader_usr_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
void k_configloader_qbase_usr_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func()
void k_configloader_on_usr_read(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QEvent*
bool k_configloader_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QEvent*
bool k_configloader_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback bool func(KConfigLoader* self, QEvent* event)
void k_configloader_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param watched QObject*
/// @param event QEvent*
bool k_configloader_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param watched QObject*
/// @param event QEvent*
bool k_configloader_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback bool func(KConfigLoader* self, QObject* watched, QEvent* event)
void k_configloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QTimerEvent*
void k_configloader_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QTimerEvent*
void k_configloader_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, QTimerEvent* event)
void k_configloader_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QChildEvent*
void k_configloader_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QChildEvent*
void k_configloader_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, QChildEvent* event)
void k_configloader_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QEvent*
void k_configloader_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param event QEvent*
void k_configloader_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, QEvent* event)
void k_configloader_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal QMetaMethod*
void k_configloader_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal QMetaMethod*
void k_configloader_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, QMetaMethod* signal)
void k_configloader_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal QMetaMethod*
void k_configloader_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal QMetaMethod*
void k_configloader_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, QMetaMethod* signal)
void k_configloader_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
QObject* k_configloader_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
QObject* k_configloader_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback QObject* func()
void k_configloader_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
int32_t k_configloader_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
int32_t k_configloader_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback int32_t func()
void k_configloader_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal const char*
int32_t k_configloader_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal const char*
int32_t k_configloader_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback int32_t func(KConfigLoader* self, const char* signal)
void k_configloader_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal QMetaMethod*
bool k_configloader_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param signal QMetaMethod*
bool k_configloader_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigLoader*
/// @param callback bool func(KConfigLoader* self, QMetaMethod* signal)
void k_configloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KConfigLoader*
/// @param callback void func(KConfigLoader* self, const char* objectName)
void k_configloader_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kconfigloader.html#dtor.KConfigLoader)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigLoader*
void k_configloader_delete(void* self);

#endif
