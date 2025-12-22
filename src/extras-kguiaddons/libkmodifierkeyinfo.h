#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKMODIFIERKEYINFO_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKMODIFIERKEYINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html)

/// k_modifierkeyinfo_new constructs a new KModifierKeyInfo object.
///
KModifierKeyInfo* k_modifierkeyinfo_new();

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html)

/// k_modifierkeyinfo_new2 constructs a new KModifierKeyInfo object.
///
/// @param parent QObject*
///
KModifierKeyInfo* k_modifierkeyinfo_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KModifierKeyInfo*
///
const QMetaObject* k_modifierkeyinfo_meta_object(void* self);

/// @param self KModifierKeyInfo*
/// @param param1 const char*
///
void* k_modifierkeyinfo_metacast(void* self, const char* param1);

/// @param self KModifierKeyInfo*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_modifierkeyinfo_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KModifierKeyInfo*
/// @param callback int32_t func(KModifierKeyInfo* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_modifierkeyinfo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KModifierKeyInfo*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_modifierkeyinfo_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_modifierkeyinfo_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#knowsKey)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
///
bool k_modifierkeyinfo_knows_key(void* self, int32_t key);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#knownKeys)
///
/// @param self KModifierKeyInfo*
///
/// @return libqt_list of enum Qt__Key
///
libqt_list /* of int32_t */ k_modifierkeyinfo_known_keys(void* self);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isKeyPressed)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
///
bool k_modifierkeyinfo_is_key_pressed(void* self, int32_t key);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isKeyLatched)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
///
bool k_modifierkeyinfo_is_key_latched(void* self, int32_t key);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#setKeyLatched)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
/// @param latched bool
///
bool k_modifierkeyinfo_set_key_latched(void* self, int32_t key, bool latched);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isKeyLocked)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
///
bool k_modifierkeyinfo_is_key_locked(void* self, int32_t key);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#setKeyLocked)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
/// @param locked bool
///
bool k_modifierkeyinfo_set_key_locked(void* self, int32_t key, bool locked);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isButtonPressed)
///
/// @param self KModifierKeyInfo*
/// @param button enum Qt__MouseButton
///
bool k_modifierkeyinfo_is_button_pressed(void* self, int64_t button);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyPressed)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
/// @param pressed bool
///
void k_modifierkeyinfo_key_pressed(void* self, int32_t key, bool pressed);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyPressed)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, enum Qt__Key key, bool pressed)
///
void k_modifierkeyinfo_on_key_pressed(void* self, void (*callback)(void*, int32_t, bool));

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLatched)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
/// @param latched bool
///
void k_modifierkeyinfo_key_latched(void* self, int32_t key, bool latched);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLatched)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, enum Qt__Key key, bool latched)
///
void k_modifierkeyinfo_on_key_latched(void* self, void (*callback)(void*, int32_t, bool));

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLocked)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
/// @param locked bool
///
void k_modifierkeyinfo_key_locked(void* self, int32_t key, bool locked);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLocked)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, enum Qt__Key key, bool locked)
///
void k_modifierkeyinfo_on_key_locked(void* self, void (*callback)(void*, int32_t, bool));

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#buttonPressed)
///
/// @param self KModifierKeyInfo*
/// @param button enum Qt__MouseButton
/// @param pressed bool
///
void k_modifierkeyinfo_button_pressed(void* self, int64_t button, bool pressed);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#buttonPressed)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, enum Qt__MouseButton button, bool pressed)
///
void k_modifierkeyinfo_on_button_pressed(void* self, void (*callback)(void*, int64_t, bool));

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyAdded)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
///
void k_modifierkeyinfo_key_added(void* self, int32_t key);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyAdded)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, enum Qt__Key key)
///
void k_modifierkeyinfo_on_key_added(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyRemoved)
///
/// @param self KModifierKeyInfo*
/// @param key enum Qt__Key
///
void k_modifierkeyinfo_key_removed(void* self, int32_t key);

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyRemoved)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, enum Qt__Key key)
///
void k_modifierkeyinfo_on_key_removed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_modifierkeyinfo_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_modifierkeyinfo_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KModifierKeyInfo*
///
const char* k_modifierkeyinfo_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KModifierKeyInfo*
/// @param name char*
///
void k_modifierkeyinfo_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KModifierKeyInfo*
///
bool k_modifierkeyinfo_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KModifierKeyInfo*
///
bool k_modifierkeyinfo_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KModifierKeyInfo*
///
bool k_modifierkeyinfo_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KModifierKeyInfo*
///
bool k_modifierkeyinfo_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KModifierKeyInfo*
/// @param b bool
///
bool k_modifierkeyinfo_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KModifierKeyInfo*
///
QThread* k_modifierkeyinfo_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KModifierKeyInfo*
/// @param thread QThread*
///
bool k_modifierkeyinfo_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModifierKeyInfo*
/// @param interval int
///
int32_t k_modifierkeyinfo_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KModifierKeyInfo*
/// @param id int
///
void k_modifierkeyinfo_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KModifierKeyInfo*
/// @param id enum Qt__TimerId
///
void k_modifierkeyinfo_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KModifierKeyInfo*
///
libqt_list /* of QObject* */ k_modifierkeyinfo_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KModifierKeyInfo*
/// @param parent QObject*
///
void k_modifierkeyinfo_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KModifierKeyInfo*
/// @param filterObj QObject*
///
void k_modifierkeyinfo_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KModifierKeyInfo*
/// @param obj QObject*
///
void k_modifierkeyinfo_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_modifierkeyinfo_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KModifierKeyInfo*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_modifierkeyinfo_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_modifierkeyinfo_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_modifierkeyinfo_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KModifierKeyInfo*
///
void k_modifierkeyinfo_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KModifierKeyInfo*
///
void k_modifierkeyinfo_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KModifierKeyInfo*
/// @param name const char*
/// @param value QVariant*
///
bool k_modifierkeyinfo_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KModifierKeyInfo*
/// @param name const char*
///
QVariant* k_modifierkeyinfo_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KModifierKeyInfo*
///
const char** k_modifierkeyinfo_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KModifierKeyInfo*
///
QBindingStorage* k_modifierkeyinfo_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KModifierKeyInfo*
///
const QBindingStorage* k_modifierkeyinfo_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfo*
///
void k_modifierkeyinfo_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self)
///
void k_modifierkeyinfo_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KModifierKeyInfo*
///
QObject* k_modifierkeyinfo_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KModifierKeyInfo*
/// @param classname const char*
///
bool k_modifierkeyinfo_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KModifierKeyInfo*
///
void k_modifierkeyinfo_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KModifierKeyInfo*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_modifierkeyinfo_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModifierKeyInfo*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_modifierkeyinfo_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_modifierkeyinfo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KModifierKeyInfo*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_modifierkeyinfo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfo*
/// @param param1 QObject*
///
void k_modifierkeyinfo_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, QObject* param1)
///
void k_modifierkeyinfo_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QEvent*
///
bool k_modifierkeyinfo_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QEvent*
///
bool k_modifierkeyinfo_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback bool func(KModifierKeyInfo* self, QEvent* event)
///
void k_modifierkeyinfo_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_modifierkeyinfo_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_modifierkeyinfo_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback bool func(KModifierKeyInfo* self, QObject* watched, QEvent* event)
///
void k_modifierkeyinfo_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QTimerEvent*
///
void k_modifierkeyinfo_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QTimerEvent*
///
void k_modifierkeyinfo_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, QTimerEvent* event)
///
void k_modifierkeyinfo_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QChildEvent*
///
void k_modifierkeyinfo_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QChildEvent*
///
void k_modifierkeyinfo_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, QChildEvent* event)
///
void k_modifierkeyinfo_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QEvent*
///
void k_modifierkeyinfo_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param event QEvent*
///
void k_modifierkeyinfo_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, QEvent* event)
///
void k_modifierkeyinfo_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal QMetaMethod*
///
void k_modifierkeyinfo_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal QMetaMethod*
///
void k_modifierkeyinfo_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, QMetaMethod* signal)
///
void k_modifierkeyinfo_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal QMetaMethod*
///
void k_modifierkeyinfo_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal QMetaMethod*
///
void k_modifierkeyinfo_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, QMetaMethod* signal)
///
void k_modifierkeyinfo_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
///
QObject* k_modifierkeyinfo_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
///
QObject* k_modifierkeyinfo_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback QObject* func()
///
void k_modifierkeyinfo_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
///
int32_t k_modifierkeyinfo_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
///
int32_t k_modifierkeyinfo_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback int32_t func()
///
void k_modifierkeyinfo_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal const char*
///
int32_t k_modifierkeyinfo_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal const char*
///
int32_t k_modifierkeyinfo_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback int32_t func(KModifierKeyInfo* self, const char* signal)
///
void k_modifierkeyinfo_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal QMetaMethod*
///
bool k_modifierkeyinfo_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param signal QMetaMethod*
///
bool k_modifierkeyinfo_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfo*
/// @param callback bool func(KModifierKeyInfo* self, QMetaMethod* signal)
///
void k_modifierkeyinfo_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KModifierKeyInfo*
/// @param callback void func(KModifierKeyInfo* self, const char* objectName)
///
void k_modifierkeyinfo_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#dtor.KModifierKeyInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KModifierKeyInfo*
///
void k_modifierkeyinfo_delete(void* self);

#endif
