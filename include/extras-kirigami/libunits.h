#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBUNITS_H
#define EXTRAS_KIRIGAMI_LIBUNITS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html)

/// k_kirigami__platform__iconsizes_new constructs a new Kirigami::Platform::IconSizes object.
///
/// @param units Kirigami__Platform__Units*
///
Kirigami__Platform__IconSizes* k_kirigami__platform__iconsizes_new(void* units);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Kirigami__Platform__IconSizes*
///
const QMetaObject* k_kirigami__platform__iconsizes_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback const QMetaObject* func()
///
void k_kirigami__platform__iconsizes_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__IconSizes*
///
const QMetaObject* k_kirigami__platform__iconsizes_super_meta_object(void* self);

/// @param self Kirigami__Platform__IconSizes*
/// @param param1 const char*
///
void* k_kirigami__platform__iconsizes_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void* func(Kirigami__Platform__IconSizes* self, const char* param1)
///
void k_kirigami__platform__iconsizes_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__IconSizes*
/// @param param1 const char*
///
void* k_kirigami__platform__iconsizes_super_metacast(void* self, const char* param1);

/// @param self Kirigami__Platform__IconSizes*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__iconsizes_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback int32_t func(Kirigami__Platform__IconSizes* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_kirigami__platform__iconsizes_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__IconSizes*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__iconsizes_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigami__platform__iconsizes_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#sizeForLabels)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_size_for_labels(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#small)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_small(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallMedium)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_small_medium(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#medium)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_medium(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#large)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_large(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#huge)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_huge(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#enormous)
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_enormous(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#roundedIconSize)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param size int
///
int32_t k_kirigami__platform__iconsizes_rounded_icon_size(void* self, int size);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#sizeForLabelsChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_size_for_labels_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#sizeForLabelsChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_size_for_labels_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_small_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_small_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallMediumChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_small_medium_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallMediumChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_small_medium_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#mediumChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_medium_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#mediumChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_medium_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#largeChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_large_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#largeChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_large_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#hugeChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_huge_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#hugeChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_huge_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#enormousChanged)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_enormous_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#enormousChanged)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_enormous_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigami__platform__iconsizes_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigami__platform__iconsizes_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Kirigami__Platform__IconSizes*
///
const char* k_kirigami__platform__iconsizes_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param name const char*
///
void k_kirigami__platform__iconsizes_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Kirigami__Platform__IconSizes*
///
bool k_kirigami__platform__iconsizes_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Kirigami__Platform__IconSizes*
///
bool k_kirigami__platform__iconsizes_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Kirigami__Platform__IconSizes*
///
bool k_kirigami__platform__iconsizes_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Kirigami__Platform__IconSizes*
///
bool k_kirigami__platform__iconsizes_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param b bool
///
bool k_kirigami__platform__iconsizes_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Kirigami__Platform__IconSizes*
///
QThread* k_kirigami__platform__iconsizes_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param thread QThread*
///
bool k_kirigami__platform__iconsizes_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param interval int
///
int32_t k_kirigami__platform__iconsizes_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigami__platform__iconsizes_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param id int
///
void k_kirigami__platform__iconsizes_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param id enum Qt__TimerId
///
void k_kirigami__platform__iconsizes_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Kirigami__Platform__IconSizes*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigami__platform__iconsizes_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param parent QObject*
///
void k_kirigami__platform__iconsizes_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param filterObj QObject*
///
void k_kirigami__platform__iconsizes_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param obj QObject*
///
void k_kirigami__platform__iconsizes_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__iconsizes_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigami__platform__iconsizes_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__iconsizes_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__iconsizes_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigami__platform__iconsizes_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__IconSizes*
///
bool k_kirigami__platform__iconsizes_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param receiver QObject*
///
bool k_kirigami__platform__iconsizes_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigami__platform__iconsizes_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigami__platform__iconsizes_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param name const char*
///
QVariant* k_kirigami__platform__iconsizes_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Kirigami__Platform__IconSizes*
///
const char** k_kirigami__platform__iconsizes_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__IconSizes*
///
QBindingStorage* k_kirigami__platform__iconsizes_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__IconSizes*
///
const QBindingStorage* k_kirigami__platform__iconsizes_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self)
///
void k_kirigami__platform__iconsizes_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Kirigami__Platform__IconSizes*
///
QObject* k_kirigami__platform__iconsizes_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param classname const char*
///
bool k_kirigami__platform__iconsizes_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__iconsizes_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__iconsizes_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_kirigami__platform__iconsizes_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_kirigami__platform__iconsizes_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__iconsizes_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal const char*
///
bool k_kirigami__platform__iconsizes_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigami__platform__iconsizes_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__iconsizes_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__iconsizes_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param param1 QObject*
///
void k_kirigami__platform__iconsizes_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, QObject* param1)
///
void k_kirigami__platform__iconsizes_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QEvent*
///
bool k_kirigami__platform__iconsizes_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QEvent*
///
bool k_kirigami__platform__iconsizes_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback bool func(Kirigami__Platform__IconSizes* self, QEvent* event)
///
void k_kirigami__platform__iconsizes_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__iconsizes_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__iconsizes_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback bool func(Kirigami__Platform__IconSizes* self, QObject* watched, QEvent* event)
///
void k_kirigami__platform__iconsizes_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QTimerEvent*
///
void k_kirigami__platform__iconsizes_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QTimerEvent*
///
void k_kirigami__platform__iconsizes_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, QTimerEvent* event)
///
void k_kirigami__platform__iconsizes_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QChildEvent*
///
void k_kirigami__platform__iconsizes_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QChildEvent*
///
void k_kirigami__platform__iconsizes_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, QChildEvent* event)
///
void k_kirigami__platform__iconsizes_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QEvent*
///
void k_kirigami__platform__iconsizes_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param event QEvent*
///
void k_kirigami__platform__iconsizes_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, QEvent* event)
///
void k_kirigami__platform__iconsizes_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__iconsizes_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__iconsizes_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, QMetaMethod* signal)
///
void k_kirigami__platform__iconsizes_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__iconsizes_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__iconsizes_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, QMetaMethod* signal)
///
void k_kirigami__platform__iconsizes_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
///
QObject* k_kirigami__platform__iconsizes_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
///
QObject* k_kirigami__platform__iconsizes_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback QObject* func()
///
void k_kirigami__platform__iconsizes_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
///
int32_t k_kirigami__platform__iconsizes_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback int32_t func()
///
void k_kirigami__platform__iconsizes_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal const char*
///
int32_t k_kirigami__platform__iconsizes_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal const char*
///
int32_t k_kirigami__platform__iconsizes_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback int32_t func(Kirigami__Platform__IconSizes* self, const char* signal)
///
void k_kirigami__platform__iconsizes_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__iconsizes_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__iconsizes_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback bool func(Kirigami__Platform__IconSizes* self, QMetaMethod* signal)
///
void k_kirigami__platform__iconsizes_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Kirigami__Platform__IconSizes*
/// @param callback void func(Kirigami__Platform__IconSizes* self, const char* objectName)
///
void k_kirigami__platform__iconsizes_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__IconSizes*
///
void k_kirigami__platform__iconsizes_delete(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Kirigami__Platform__Units*
///
const QMetaObject* k_kirigami__platform__units_meta_object(void* self);

/// @param self Kirigami__Platform__Units*
/// @param param1 const char*
///
void* k_kirigami__platform__units_metacast(void* self, const char* param1);

/// @param self Kirigami__Platform__Units*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__units_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigami__platform__units_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#gridUnit)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_grid_unit(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setGridUnit)
///
/// @param self Kirigami__Platform__Units*
/// @param size int
///
void k_kirigami__platform__units_set_grid_unit(void* self, int size);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#smallSpacing)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_small_spacing(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setSmallSpacing)
///
/// @param self Kirigami__Platform__Units*
/// @param size int
///
void k_kirigami__platform__units_set_small_spacing(void* self, int size);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#mediumSpacing)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_medium_spacing(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setMediumSpacing)
///
/// @param self Kirigami__Platform__Units*
/// @param size int
///
void k_kirigami__platform__units_set_medium_spacing(void* self, int size);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#largeSpacing)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_large_spacing(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setLargeSpacing)
///
/// @param self Kirigami__Platform__Units*
/// @param size int
///
void k_kirigami__platform__units_set_large_spacing(void* self, int size);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryLongDuration)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_very_long_duration(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setVeryLongDuration)
///
/// @param self Kirigami__Platform__Units*
/// @param duration int
///
void k_kirigami__platform__units_set_very_long_duration(void* self, int duration);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#longDuration)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_long_duration(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setLongDuration)
///
/// @param self Kirigami__Platform__Units*
/// @param duration int
///
void k_kirigami__platform__units_set_long_duration(void* self, int duration);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#shortDuration)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_short_duration(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setShortDuration)
///
/// @param self Kirigami__Platform__Units*
/// @param duration int
///
void k_kirigami__platform__units_set_short_duration(void* self, int duration);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryShortDuration)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_very_short_duration(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setVeryShortDuration)
///
/// @param self Kirigami__Platform__Units*
/// @param duration int
///
void k_kirigami__platform__units_set_very_short_duration(void* self, int duration);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#humanMoment)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_human_moment(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setHumanMoment)
///
/// @param self Kirigami__Platform__Units*
/// @param duration int
///
void k_kirigami__platform__units_set_human_moment(void* self, int duration);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#toolTipDelay)
///
/// @param self Kirigami__Platform__Units*
///
int32_t k_kirigami__platform__units_tool_tip_delay(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setToolTipDelay)
///
/// @param self Kirigami__Platform__Units*
/// @param delay int
///
void k_kirigami__platform__units_set_tool_tip_delay(void* self, int delay);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#cornerRadius)
///
/// @param self Kirigami__Platform__Units*
///
double k_kirigami__platform__units_corner_radius(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setcornerRadius)
///
/// @param self Kirigami__Platform__Units*
/// @param cornerRadius double
///
void k_kirigami__platform__units_setcorner_radius(void* self, double cornerRadius);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#iconSizes)
///
/// @param self Kirigami__Platform__Units*
///
Kirigami__Platform__IconSizes* k_kirigami__platform__units_icon_sizes(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#create)
///
/// @param qmlEngine QQmlEngine*
/// @param jsEngine QJSEngine*
///
Kirigami__Platform__Units* k_kirigami__platform__units_create(void* qmlEngine, void* jsEngine);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#gridUnitChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_grid_unit_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#gridUnitChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_grid_unit_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#smallSpacingChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_small_spacing_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#smallSpacingChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_small_spacing_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#mediumSpacingChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_medium_spacing_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#mediumSpacingChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_medium_spacing_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#largeSpacingChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_large_spacing_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#largeSpacingChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_large_spacing_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryLongDurationChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_very_long_duration_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryLongDurationChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_very_long_duration_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#longDurationChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_long_duration_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#longDurationChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_long_duration_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#shortDurationChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_short_duration_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#shortDurationChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_short_duration_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryShortDurationChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_very_short_duration_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryShortDurationChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_very_short_duration_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#humanMomentChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_human_moment_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#humanMomentChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_human_moment_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#toolTipDelayChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_tool_tip_delay_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#toolTipDelayChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_tool_tip_delay_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#wheelScrollLinesChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_wheel_scroll_lines_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#wheelScrollLinesChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_wheel_scroll_lines_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#cornerRadiusChanged)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_corner_radius_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-units.html#cornerRadiusChanged)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_corner_radius_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigami__platform__units_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigami__platform__units_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Kirigami__Platform__Units*
/// @param event QEvent*
///
bool k_kirigami__platform__units_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Kirigami__Platform__Units*
///
const char* k_kirigami__platform__units_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Kirigami__Platform__Units*
/// @param name const char*
///
void k_kirigami__platform__units_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Kirigami__Platform__Units*
///
bool k_kirigami__platform__units_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Kirigami__Platform__Units*
///
bool k_kirigami__platform__units_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Kirigami__Platform__Units*
///
bool k_kirigami__platform__units_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Kirigami__Platform__Units*
///
bool k_kirigami__platform__units_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Kirigami__Platform__Units*
/// @param b bool
///
bool k_kirigami__platform__units_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Kirigami__Platform__Units*
///
QThread* k_kirigami__platform__units_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Kirigami__Platform__Units*
/// @param thread QThread*
///
bool k_kirigami__platform__units_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__Units*
/// @param interval int
///
int32_t k_kirigami__platform__units_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__Units*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigami__platform__units_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__Units*
/// @param id int
///
void k_kirigami__platform__units_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__Units*
/// @param id enum Qt__TimerId
///
void k_kirigami__platform__units_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Kirigami__Platform__Units*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigami__platform__units_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Kirigami__Platform__Units*
/// @param parent QObject*
///
void k_kirigami__platform__units_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Kirigami__Platform__Units*
/// @param filterObj QObject*
///
void k_kirigami__platform__units_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Kirigami__Platform__Units*
/// @param obj QObject*
///
void k_kirigami__platform__units_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__units_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigami__platform__units_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__Units*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__units_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__units_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigami__platform__units_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__Units*
///
bool k_kirigami__platform__units_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__Units*
/// @param receiver QObject*
///
bool k_kirigami__platform__units_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigami__platform__units_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Kirigami__Platform__Units*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigami__platform__units_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Kirigami__Platform__Units*
/// @param name const char*
///
QVariant* k_kirigami__platform__units_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Kirigami__Platform__Units*
///
const char** k_kirigami__platform__units_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__Units*
///
QBindingStorage* k_kirigami__platform__units_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__Units*
///
const QBindingStorage* k_kirigami__platform__units_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self)
///
void k_kirigami__platform__units_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Kirigami__Platform__Units*
///
QObject* k_kirigami__platform__units_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Kirigami__Platform__Units*
/// @param classname const char*
///
bool k_kirigami__platform__units_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__Units*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__units_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__Units*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__units_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_kirigami__platform__units_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_kirigami__platform__units_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__Units*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__units_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__Units*
/// @param signal const char*
///
bool k_kirigami__platform__units_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__Units*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigami__platform__units_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__Units*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__units_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__Units*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__units_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__Units*
/// @param param1 QObject*
///
void k_kirigami__platform__units_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self, QObject* param1)
///
void k_kirigami__platform__units_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Kirigami__Platform__Units*
/// @param callback void func(Kirigami__Platform__Units* self, const char* objectName)
///
void k_kirigami__platform__units_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__Units*
///
void k_kirigami__platform__units_delete(void* self);

#endif
