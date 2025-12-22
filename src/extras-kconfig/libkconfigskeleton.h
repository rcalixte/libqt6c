#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKCONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKCONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html)

/// k_configskeleton_new constructs a new KConfigSkeleton object.
///
KConfigSkeleton* k_configskeleton_new();

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html)

/// k_configskeleton_new2 constructs a new KConfigSkeleton object.
///
/// @param configname const char*
///
KConfigSkeleton* k_configskeleton_new2(const char* configname);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html)

/// k_configskeleton_new3 constructs a new KConfigSkeleton object.
///
/// @param configname const char*
/// @param parent QObject*
///
KConfigSkeleton* k_configskeleton_new3(const char* configname, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KConfigSkeleton*
///
const QMetaObject* k_configskeleton_meta_object(void* self);

/// @param self KConfigSkeleton*
/// @param param1 const char*
///
void* k_configskeleton_metacast(void* self, const char* param1);

/// @param self KConfigSkeleton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_configskeleton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton*
/// @param callback int32_t func(KConfigSkeleton* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_configskeleton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KConfigSkeleton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_configskeleton_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_configskeleton_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QColor*
///
KConfigSkeleton__ItemColor* k_configskeleton_add_item_color(void* self, const char* name, void* reference);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QFont*
///
KConfigSkeleton__ItemFont* k_configskeleton_add_item_font(void* self, const char* name, void* reference);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_configskeleton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_configskeleton_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QColor*
/// @param defaultValue QColor*
///
KConfigSkeleton__ItemColor* k_configskeleton_add_item_color3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QColor*
/// @param defaultValue QColor*
/// @param key const char*
///
KConfigSkeleton__ItemColor* k_configskeleton_add_item_color4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QFont*
/// @param defaultValue QFont*
///
KConfigSkeleton__ItemFont* k_configskeleton_add_item_font3(void* self, const char* name, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QFont*
/// @param defaultValue QFont*
/// @param key const char*
///
KConfigSkeleton__ItemFont* k_configskeleton_add_item_font4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_load(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_is_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_is_save_needed(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
///
/// @param self KConfigSkeleton*
/// @param group const char*
///
void k_configskeleton_set_current_group(void* self, const char* group);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeleton*
///
const char* k_configskeleton_current_group(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KConfigSkeleton*
/// @param item KConfigSkeletonItem*
///
void k_configskeleton_add_item(void* self, void* item);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemString* k_configskeleton_add_item_string(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_configskeleton_add_item_property(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference bool*
///
KCoreConfigSkeleton__ItemBool* k_configskeleton_add_item_bool(void* self, const char* name, bool* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference int*
///
KCoreConfigSkeleton__ItemInt* k_configskeleton_add_item_int(void* self, const char* name, int* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference uint32_t*
///
KCoreConfigSkeleton__ItemUInt* k_configskeleton_add_item_u_int(void* self, const char* name, uint32_t* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference long long*
///
KCoreConfigSkeleton__ItemLongLong* k_configskeleton_add_item_long_long(void* self, const char* name, long long* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference uint64_t*
///
KCoreConfigSkeleton__ItemULongLong* k_configskeleton_add_item_u_long_long(void* self, const char* name, uint64_t* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference double*
///
KCoreConfigSkeleton__ItemDouble* k_configskeleton_add_item_double(void* self, const char* name, double* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QRect*
///
KCoreConfigSkeleton__ItemRect* k_configskeleton_add_item_rect(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_configskeleton_add_item_rect_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_configskeleton_add_item_point(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_configskeleton_add_item_point_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QSize*
///
KCoreConfigSkeleton__ItemSize* k_configskeleton_add_item_size(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_configskeleton_add_item_size_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_configskeleton_add_item_date_time(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char**
///
KCoreConfigSkeleton__ItemStringList* k_configskeleton_add_item_string_list(void* self, const char* name, const char* reference[static 1]);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference libqt_list /* of int */
///
KCoreConfigSkeleton__ItemIntList* k_configskeleton_add_item_int_list(void* self, const char* name, libqt_list reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KConfigSkeleton*
///
KConfig* k_configskeleton_config(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self KConfigSkeleton*
///
const KConfig* k_configskeleton_config2(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
///
/// @param self KConfigSkeleton*
///
libqt_list /* of KConfigSkeletonItem* */ k_configskeleton_items(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
///
/// @param self KConfigSkeleton*
/// @param name const char*
///
void k_configskeleton_remove_item(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_clear_items(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
///
/// @param self KConfigSkeleton*
/// @param name const char*
///
bool k_configskeleton_is_immutable(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
///
/// @param self KConfigSkeleton*
/// @param name const char*
///
KConfigSkeletonItem* k_configskeleton_find_item(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_save(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_config_changed(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self)
///
void k_configskeleton_on_config_changed(void* self, void (*callback)(void*));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self KConfigSkeleton*
/// @param item KConfigSkeletonItem*
/// @param name const char*
///
void k_configskeleton_add_item2(void* self, void* item, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemString* k_configskeleton_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemString* k_configskeleton_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_configskeleton_add_item_property3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
/// @param key const char*
///
KCoreConfigSkeleton__ItemProperty* k_configskeleton_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
///
KCoreConfigSkeleton__ItemBool* k_configskeleton_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
/// @param key const char*
///
KCoreConfigSkeleton__ItemBool* k_configskeleton_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int
///
KCoreConfigSkeleton__ItemInt* k_configskeleton_add_item_int3(void* self, const char* name, int* reference, int defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int
/// @param key const char*
///
KCoreConfigSkeleton__ItemInt* k_configskeleton_add_item_int4(void* self, const char* name, int* reference, int defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
///
KCoreConfigSkeleton__ItemUInt* k_configskeleton_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemUInt* k_configskeleton_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue long long
///
KCoreConfigSkeleton__ItemLongLong* k_configskeleton_add_item_long_long3(void* self, const char* name, long long* reference, long long defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue long long
/// @param key const char*
///
KCoreConfigSkeleton__ItemLongLong* k_configskeleton_add_item_long_long4(void* self, const char* name, long long* reference, long long defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
///
KCoreConfigSkeleton__ItemULongLong* k_configskeleton_add_item_u_long_long3(void* self, const char* name, uint64_t* reference, uint64_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference uint64_t*
/// @param defaultValue uint64_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemULongLong* k_configskeleton_add_item_u_long_long4(void* self, const char* name, uint64_t* reference, uint64_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
///
KCoreConfigSkeleton__ItemDouble* k_configskeleton_add_item_double3(void* self, const char* name, double* reference, double defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
/// @param key const char*
///
KCoreConfigSkeleton__ItemDouble* k_configskeleton_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
///
KCoreConfigSkeleton__ItemRect* k_configskeleton_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
/// @param key const char*
///
KCoreConfigSkeleton__ItemRect* k_configskeleton_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_configskeleton_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemRectF* k_configskeleton_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_configskeleton_add_item_point3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPoint* k_configskeleton_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_configskeleton_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPointF* k_configskeleton_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
///
KCoreConfigSkeleton__ItemSize* k_configskeleton_add_item_size3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
/// @param key const char*
///
KCoreConfigSkeleton__ItemSize* k_configskeleton_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_configskeleton_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemSizeF* k_configskeleton_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_configskeleton_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
/// @param key const char*
///
KCoreConfigSkeleton__ItemDateTime* k_configskeleton_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
///
KCoreConfigSkeleton__ItemStringList* k_configskeleton_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
/// @param key const char*
///
KCoreConfigSkeleton__ItemStringList* k_configskeleton_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference libqt_list /* of int */
/// @param defaultValue libqt_list /* of int */
///
KCoreConfigSkeleton__ItemIntList* k_configskeleton_add_item_int_list3(void* self, const char* name, libqt_list reference, libqt_list defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param reference libqt_list /* of int */
/// @param defaultValue libqt_list /* of int */
/// @param key const char*
///
KCoreConfigSkeleton__ItemIntList* k_configskeleton_add_item_int_list4(void* self, const char* name, libqt_list reference, libqt_list defaultValue, const char* key);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfigSkeleton*
///
const char* k_configskeleton_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KConfigSkeleton*
/// @param name char*
///
void k_configskeleton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KConfigSkeleton*
/// @param b bool
///
bool k_configskeleton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KConfigSkeleton*
///
QThread* k_configskeleton_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigSkeleton*
/// @param thread QThread*
///
bool k_configskeleton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigSkeleton*
/// @param interval int
///
int32_t k_configskeleton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigSkeleton*
/// @param id int
///
void k_configskeleton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigSkeleton*
/// @param id enum Qt__TimerId
///
void k_configskeleton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KConfigSkeleton*
///
libqt_list /* of QObject* */ k_configskeleton_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KConfigSkeleton*
/// @param parent QObject*
///
void k_configskeleton_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KConfigSkeleton*
/// @param filterObj QObject*
///
void k_configskeleton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KConfigSkeleton*
/// @param obj QObject*
///
void k_configskeleton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_configskeleton_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KConfigSkeleton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_configskeleton_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_configskeleton_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_configskeleton_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KConfigSkeleton*
/// @param name const char*
/// @param value QVariant*
///
bool k_configskeleton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KConfigSkeleton*
/// @param name const char*
///
QVariant* k_configskeleton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KConfigSkeleton*
///
const char** k_configskeleton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigSkeleton*
///
QBindingStorage* k_configskeleton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigSkeleton*
///
const QBindingStorage* k_configskeleton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self)
///
void k_configskeleton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KConfigSkeleton*
///
QObject* k_configskeleton_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KConfigSkeleton*
/// @param classname const char*
///
bool k_configskeleton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigSkeleton*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_configskeleton_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigSkeleton*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_configskeleton_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_configskeleton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KConfigSkeleton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_configskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigSkeleton*
/// @param param1 QObject*
///
void k_configskeleton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, QObject* param1)
///
void k_configskeleton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_qbase_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func()
///
void k_configskeleton_on_set_defaults(void* self, void (*callback)());

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param b bool
///
bool k_configskeleton_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param b bool
///
bool k_configskeleton_qbase_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback bool func(KConfigSkeleton* self, bool b)
///
void k_configskeleton_on_use_defaults(void* self, bool (*callback)(void*, bool));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param b bool
///
bool k_configskeleton_usr_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param b bool
///
bool k_configskeleton_qbase_usr_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback bool func(KConfigSkeleton* self, bool b)
///
void k_configskeleton_on_usr_use_defaults(void* self, bool (*callback)(void*, bool));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_usr_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_qbase_usr_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func()
///
void k_configskeleton_on_usr_set_defaults(void* self, void (*callback)());

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_usr_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_qbase_usr_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func()
///
void k_configskeleton_on_usr_read(void* self, void (*callback)());

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_usr_save(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
///
bool k_configskeleton_qbase_usr_save(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback bool func()
///
void k_configskeleton_on_usr_save(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QEvent*
///
bool k_configskeleton_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QEvent*
///
bool k_configskeleton_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback bool func(KConfigSkeleton* self, QEvent* event)
///
void k_configskeleton_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_configskeleton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_configskeleton_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback bool func(KConfigSkeleton* self, QObject* watched, QEvent* event)
///
void k_configskeleton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QTimerEvent*
///
void k_configskeleton_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QTimerEvent*
///
void k_configskeleton_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, QTimerEvent* event)
///
void k_configskeleton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QChildEvent*
///
void k_configskeleton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QChildEvent*
///
void k_configskeleton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, QChildEvent* event)
///
void k_configskeleton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QEvent*
///
void k_configskeleton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param event QEvent*
///
void k_configskeleton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, QEvent* event)
///
void k_configskeleton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_configskeleton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_configskeleton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, QMetaMethod* signal)
///
void k_configskeleton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_configskeleton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal QMetaMethod*
///
void k_configskeleton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, QMetaMethod* signal)
///
void k_configskeleton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
///
QObject* k_configskeleton_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
///
QObject* k_configskeleton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback QObject* func()
///
void k_configskeleton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
///
int32_t k_configskeleton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
///
int32_t k_configskeleton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback int32_t func()
///
void k_configskeleton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal const char*
///
int32_t k_configskeleton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal const char*
///
int32_t k_configskeleton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback int32_t func(KConfigSkeleton* self, const char* signal)
///
void k_configskeleton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal QMetaMethod*
///
bool k_configskeleton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param signal QMetaMethod*
///
bool k_configskeleton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigSkeleton*
/// @param callback bool func(KConfigSkeleton* self, QMetaMethod* signal)
///
void k_configskeleton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KConfigSkeleton*
/// @param callback void func(KConfigSkeleton* self, const char* objectName)
///
void k_configskeleton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#dtor.KConfigSkeleton)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigSkeleton*
///
void k_configskeleton_delete(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html)

/// k_configskeleton__itemcolor_new constructs a new KConfigSkeleton::ItemColor object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QColor*
///
KConfigSkeleton__ItemColor* k_configskeleton__itemcolor_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html)

/// k_configskeleton__itemcolor_new2 constructs a new KConfigSkeleton::ItemColor object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QColor*
/// @param defaultValue QColor*
///
KConfigSkeleton__ItemColor* k_configskeleton__itemcolor_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
///
/// @param self KConfigSkeleton__ItemColor*
/// @param config KConfig*
///
void k_configskeleton__itemcolor_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemColor*
/// @param callback void func(KConfigSkeleton__ItemColor* self, KConfig* config)
///
void k_configskeleton__itemcolor_on_read_config(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemColor*
/// @param config KConfig*
///
void k_configskeleton__itemcolor_qbase_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
///
/// @param self KConfigSkeleton__ItemColor*
/// @param p QVariant*
///
void k_configskeleton__itemcolor_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemColor*
/// @param callback void func(KConfigSkeleton__ItemColor* self, QVariant* p)
///
void k_configskeleton__itemcolor_on_set_property(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemColor*
/// @param p QVariant*
///
void k_configskeleton__itemcolor_qbase_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
///
/// @param self KConfigSkeleton__ItemColor*
/// @param p QVariant*
///
bool k_configskeleton__itemcolor_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemColor*
/// @param callback bool func(KConfigSkeleton__ItemColor* self, QVariant* p)
///
void k_configskeleton__itemcolor_on_is_equal(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemColor*
/// @param p QVariant*
///
bool k_configskeleton__itemcolor_qbase_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
///
/// @param self KConfigSkeleton__ItemColor*
///
QVariant* k_configskeleton__itemcolor_property(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemColor*
/// @param callback QVariant* func()
///
void k_configskeleton__itemcolor_on_property(void* self, QVariant* (*callback)());

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemColor*
///
QVariant* k_configskeleton__itemcolor_qbase_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KConfigSkeleton__ItemColor*
///
void k_configskeleton__itemcolor_delete(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html)

/// k_configskeleton__itemfont_new constructs a new KConfigSkeleton::ItemFont object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QFont*
///
KConfigSkeleton__ItemFont* k_configskeleton__itemfont_new(const char* _group, const char* _key, void* reference);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html)

/// k_configskeleton__itemfont_new2 constructs a new KConfigSkeleton::ItemFont object.
///
/// @param _group const char*
/// @param _key const char*
/// @param reference QFont*
/// @param defaultValue QFont*
///
KConfigSkeleton__ItemFont* k_configskeleton__itemfont_new2(const char* _group, const char* _key, void* reference, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
///
/// @param self KConfigSkeleton__ItemFont*
/// @param config KConfig*
///
void k_configskeleton__itemfont_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemFont*
/// @param callback void func(KConfigSkeleton__ItemFont* self, KConfig* config)
///
void k_configskeleton__itemfont_on_read_config(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemFont*
/// @param config KConfig*
///
void k_configskeleton__itemfont_qbase_read_config(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
///
/// @param self KConfigSkeleton__ItemFont*
/// @param p QVariant*
///
void k_configskeleton__itemfont_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemFont*
/// @param callback void func(KConfigSkeleton__ItemFont* self, QVariant* p)
///
void k_configskeleton__itemfont_on_set_property(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemFont*
/// @param p QVariant*
///
void k_configskeleton__itemfont_qbase_set_property(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
///
/// @param self KConfigSkeleton__ItemFont*
/// @param p QVariant*
///
bool k_configskeleton__itemfont_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemFont*
/// @param callback bool func(KConfigSkeleton__ItemFont* self, QVariant* p)
///
void k_configskeleton__itemfont_on_is_equal(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemFont*
/// @param p QVariant*
///
bool k_configskeleton__itemfont_qbase_is_equal(void* self, void* p);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#property)
///
/// @param self KConfigSkeleton__ItemFont*
///
QVariant* k_configskeleton__itemfont_property(void* self);

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#property)
///
/// Allows for overriding the related default method
///
/// @param self KConfigSkeleton__ItemFont*
/// @param callback QVariant* func()
///
void k_configskeleton__itemfont_on_property(void* self, QVariant* (*callback)());

/// [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#property)
///
/// Base class method implementation
///
/// @param self KConfigSkeleton__ItemFont*
///
QVariant* k_configskeleton__itemfont_qbase_property(void* self);

/// Delete this object from C++ memory.
///
/// @param self KConfigSkeleton__ItemFont*
///
void k_configskeleton__itemfont_delete(void* self);

#endif
