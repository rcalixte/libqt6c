#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKNETWORKMOUNTS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKNETWORKMOUNTS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knetworkmounts.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNetworkMounts*
const QMetaObject* k_networkmounts_meta_object(void* self);

/// @param self KNetworkMounts*
/// @param param1 const char*
void* k_networkmounts_metacast(void* self, const char* param1);

/// @param self KNetworkMounts*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_networkmounts_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_networkmounts_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#self)
///
KNetworkMounts* k_networkmounts_self();

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#isSlowPath)
///
/// @param self KNetworkMounts*
/// @param path const char*
bool k_networkmounts_is_slow_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#isOptionEnabledForPath)
///
/// @param self KNetworkMounts*
/// @param path const char*
/// @param option enum KNetworkMounts__KNetworkMountOption
bool k_networkmounts_is_option_enabled_for_path(void* self, const char* path, int32_t option);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#isEnabled)
///
/// @param self KNetworkMounts*
bool k_networkmounts_is_enabled(void* self);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#setEnabled)
///
/// @param self KNetworkMounts*
/// @param value bool
void k_networkmounts_set_enabled(void* self, bool value);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#isOptionEnabled)
///
/// @param self KNetworkMounts*
/// @param option enum KNetworkMounts__KNetworkMountOption
bool k_networkmounts_is_option_enabled(void* self, int32_t option);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#setOption)
///
/// @param self KNetworkMounts*
/// @param option enum KNetworkMounts__KNetworkMountOption
/// @param value bool
void k_networkmounts_set_option(void* self, int32_t option, bool value);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#paths)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNetworkMounts*
const char** k_networkmounts_paths(void* self);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#setPaths)
///
/// @param self KNetworkMounts*
/// @param paths const char**
/// @param type enum KNetworkMounts__KNetworkMountsType
void k_networkmounts_set_paths(void* self, const char* paths[static 1], int32_t type);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#addPath)
///
/// @param self KNetworkMounts*
/// @param path const char*
/// @param type enum KNetworkMounts__KNetworkMountsType
void k_networkmounts_add_path(void* self, const char* path, int32_t type);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#canonicalSymlinkPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNetworkMounts*
/// @param path const char*
const char* k_networkmounts_canonical_symlink_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#clearCache)
///
/// @param self KNetworkMounts*
void k_networkmounts_clear_cache(void* self);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#sync)
///
/// @param self KNetworkMounts*
void k_networkmounts_sync(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_networkmounts_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_networkmounts_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#isSlowPath)
///
/// @param self KNetworkMounts*
/// @param path const char*
/// @param type enum KNetworkMounts__KNetworkMountsType
bool k_networkmounts_is_slow_path2(void* self, const char* path, int32_t type);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#isOptionEnabled)
///
/// @param self KNetworkMounts*
/// @param option enum KNetworkMounts__KNetworkMountOption
/// @param defaultValue bool
bool k_networkmounts_is_option_enabled2(void* self, int32_t option, bool defaultValue);

/// [Upstream resources](https://api.kde.org/knetworkmounts.html#paths)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNetworkMounts*
/// @param type enum KNetworkMounts__KNetworkMountsType
const char** k_networkmounts_paths1(void* self, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KNetworkMounts*
/// @param event QEvent*
bool k_networkmounts_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KNetworkMounts*
/// @param watched QObject*
/// @param event QEvent*
bool k_networkmounts_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNetworkMounts*
const char* k_networkmounts_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNetworkMounts*
/// @param name char*
void k_networkmounts_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNetworkMounts*
bool k_networkmounts_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNetworkMounts*
bool k_networkmounts_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNetworkMounts*
bool k_networkmounts_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNetworkMounts*
bool k_networkmounts_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNetworkMounts*
/// @param b bool
bool k_networkmounts_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNetworkMounts*
QThread* k_networkmounts_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNetworkMounts*
/// @param thread QThread*
bool k_networkmounts_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNetworkMounts*
/// @param interval int
int32_t k_networkmounts_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNetworkMounts*
/// @param id int
void k_networkmounts_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNetworkMounts*
/// @param id enum Qt__TimerId
void k_networkmounts_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNetworkMounts*
libqt_list /* of QObject* */ k_networkmounts_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNetworkMounts*
/// @param parent QObject*
void k_networkmounts_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNetworkMounts*
/// @param filterObj QObject*
void k_networkmounts_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNetworkMounts*
/// @param obj QObject*
void k_networkmounts_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_networkmounts_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNetworkMounts*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_networkmounts_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_networkmounts_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_networkmounts_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNetworkMounts*
void k_networkmounts_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNetworkMounts*
void k_networkmounts_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNetworkMounts*
/// @param name const char*
/// @param value QVariant*
bool k_networkmounts_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNetworkMounts*
/// @param name const char*
QVariant* k_networkmounts_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNetworkMounts*
const char** k_networkmounts_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNetworkMounts*
QBindingStorage* k_networkmounts_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNetworkMounts*
const QBindingStorage* k_networkmounts_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNetworkMounts*
void k_networkmounts_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNetworkMounts*
/// @param callback void func(KNetworkMounts* self)
void k_networkmounts_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNetworkMounts*
QObject* k_networkmounts_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNetworkMounts*
/// @param classname const char*
bool k_networkmounts_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNetworkMounts*
void k_networkmounts_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNetworkMounts*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_networkmounts_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNetworkMounts*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_networkmounts_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_networkmounts_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNetworkMounts*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_networkmounts_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNetworkMounts*
/// @param param1 QObject*
void k_networkmounts_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNetworkMounts*
/// @param callback void func(KNetworkMounts* self, QObject* param1)
void k_networkmounts_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNetworkMounts*
/// @param callback void func(KNetworkMounts* self, const char* objectName)
void k_networkmounts_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// https://api.kde.org/knetworkmounts.html#types

typedef enum {
    KNETWORKMOUNTS_KNETWORKMOUNTOPTION_LOWSIDEEFFECTSOPTIMIZATIONS = 0,
    KNETWORKMOUNTS_KNETWORKMOUNTOPTION_MEDIUMSIDEEFFECTSOPTIMIZATIONS = 1,
    KNETWORKMOUNTS_KNETWORKMOUNTOPTION_STRONGSIDEEFFECTSOPTIMIZATIONS = 2,
    KNETWORKMOUNTS_KNETWORKMOUNTOPTION_KDIRWATCHDONTADDWATCHES = 3,
    KNETWORKMOUNTS_KNETWORKMOUNTOPTION_SYMLINKPATHSUSECACHE = 4
} KNetworkMounts__KNetworkMountOption;

typedef enum {
    KNETWORKMOUNTS_KNETWORKMOUNTSTYPE_NFSPATHS = 0,
    KNETWORKMOUNTS_KNETWORKMOUNTSTYPE_SMBPATHS = 1,
    KNETWORKMOUNTS_KNETWORKMOUNTSTYPE_SYMLINKDIRECTORY = 2,
    KNETWORKMOUNTS_KNETWORKMOUNTSTYPE_SYMLINKTONETWORKMOUNT = 3,
    KNETWORKMOUNTS_KNETWORKMOUNTSTYPE_ANY = 4
} KNetworkMounts__KNetworkMountsType;

#endif
