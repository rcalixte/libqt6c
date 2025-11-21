#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKMODIFIERKEYINFOPROVIDER_P_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKMODIFIERKEYINFOPROVIDER_P_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmodifierkeyinfoprovider.html

/// k_modifierkeyinfoprovider_new constructs a new KModifierKeyInfoProvider object.
///
KModifierKeyInfoProvider* k_modifierkeyinfoprovider_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KModifierKeyInfoProvider*
const QMetaObject* k_modifierkeyinfoprovider_meta_object(void* self);

/// @param self KModifierKeyInfoProvider*
/// @param param1 const char*
void* k_modifierkeyinfoprovider_metacast(void* self, const char* param1);

/// @param self KModifierKeyInfoProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_modifierkeyinfoprovider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback int32_t func(KModifierKeyInfoProvider* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_modifierkeyinfoprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KModifierKeyInfoProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_modifierkeyinfoprovider_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_modifierkeyinfoprovider_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyPressed)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
bool k_modifierkeyinfoprovider_is_key_pressed(void* self, int32_t key);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLatched)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
bool k_modifierkeyinfoprovider_is_key_latched(void* self, int32_t key);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param latched bool
bool k_modifierkeyinfoprovider_set_key_latched(void* self, int32_t key, bool latched);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
///
/// Allows for overriding the related default method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback bool func(KModifierKeyInfoProvider* self, enum Qt__Key key, bool latched)
void k_modifierkeyinfoprovider_on_set_key_latched(void* self, bool (*callback)(void*, int32_t, bool));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
///
/// Base class method implementation
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param latched bool
bool k_modifierkeyinfoprovider_qbase_set_key_latched(void* self, int32_t key, bool latched);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLocked)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
bool k_modifierkeyinfoprovider_is_key_locked(void* self, int32_t key);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param locked bool
bool k_modifierkeyinfoprovider_set_key_locked(void* self, int32_t key, bool locked);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
///
/// Allows for overriding the related default method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback bool func(KModifierKeyInfoProvider* self, enum Qt__Key key, bool locked)
void k_modifierkeyinfoprovider_on_set_key_locked(void* self, bool (*callback)(void*, int32_t, bool));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
///
/// Base class method implementation
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param locked bool
bool k_modifierkeyinfoprovider_qbase_set_key_locked(void* self, int32_t key, bool locked);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isButtonPressed)
///
/// @param self KModifierKeyInfoProvider*
/// @param button enum Qt__MouseButton
bool k_modifierkeyinfoprovider_is_button_pressed(void* self, int64_t button);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#knowsKey)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
bool k_modifierkeyinfoprovider_knows_key(void* self, int32_t key);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#knownKeys)
///
/// @param self KModifierKeyInfoProvider*
///
/// @return libqt_list of enum Qt__Key
libqt_list /* of int32_t */ k_modifierkeyinfoprovider_known_keys(void* self);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param state bool
void k_modifierkeyinfoprovider_key_latched(void* self, int32_t key, bool state);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__Key key, bool state)
void k_modifierkeyinfoprovider_on_key_latched(void* self, void (*callback)(void*, int32_t, bool));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param state bool
void k_modifierkeyinfoprovider_key_locked(void* self, int32_t key, bool state);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__Key key, bool state)
void k_modifierkeyinfoprovider_on_key_locked(void* self, void (*callback)(void*, int32_t, bool));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param state bool
void k_modifierkeyinfoprovider_key_pressed(void* self, int32_t key, bool state);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__Key key, bool state)
void k_modifierkeyinfoprovider_on_key_pressed(void* self, void (*callback)(void*, int32_t, bool));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
///
/// @param self KModifierKeyInfoProvider*
/// @param button enum Qt__MouseButton
/// @param state bool
void k_modifierkeyinfoprovider_button_pressed(void* self, int64_t button, bool state);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__MouseButton button, bool state)
void k_modifierkeyinfoprovider_on_button_pressed(void* self, void (*callback)(void*, int64_t, bool));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
void k_modifierkeyinfoprovider_key_added(void* self, int32_t key);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__Key key)
void k_modifierkeyinfoprovider_on_key_added(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
void k_modifierkeyinfoprovider_key_removed(void* self, int32_t key);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__Key key)
void k_modifierkeyinfoprovider_on_key_removed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param state flag of enum KModifierKeyInfoProvider__ModifierState
void k_modifierkeyinfoprovider_state_updated(void* self, int32_t key, int32_t state);

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
///
/// Allows for overriding the related default method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, enum Qt__Key key, flag of enum KModifierKeyInfoProvider__ModifierState state)
void k_modifierkeyinfoprovider_on_state_updated(void* self, void (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
///
/// Base class method implementation
///
/// @param self KModifierKeyInfoProvider*
/// @param key enum Qt__Key
/// @param state flag of enum KModifierKeyInfoProvider__ModifierState
void k_modifierkeyinfoprovider_qbase_state_updated(void* self, int32_t key, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_modifierkeyinfoprovider_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_modifierkeyinfoprovider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KModifierKeyInfoProvider*
const char* k_modifierkeyinfoprovider_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KModifierKeyInfoProvider*
/// @param name char*
void k_modifierkeyinfoprovider_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KModifierKeyInfoProvider*
bool k_modifierkeyinfoprovider_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KModifierKeyInfoProvider*
bool k_modifierkeyinfoprovider_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KModifierKeyInfoProvider*
bool k_modifierkeyinfoprovider_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KModifierKeyInfoProvider*
bool k_modifierkeyinfoprovider_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KModifierKeyInfoProvider*
/// @param b bool
bool k_modifierkeyinfoprovider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KModifierKeyInfoProvider*
QThread* k_modifierkeyinfoprovider_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KModifierKeyInfoProvider*
/// @param thread QThread*
bool k_modifierkeyinfoprovider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModifierKeyInfoProvider*
/// @param interval int
int32_t k_modifierkeyinfoprovider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KModifierKeyInfoProvider*
/// @param id int
void k_modifierkeyinfoprovider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KModifierKeyInfoProvider*
/// @param id enum Qt__TimerId
void k_modifierkeyinfoprovider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KModifierKeyInfoProvider*
libqt_list /* of QObject* */ k_modifierkeyinfoprovider_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KModifierKeyInfoProvider*
/// @param parent QObject*
void k_modifierkeyinfoprovider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KModifierKeyInfoProvider*
/// @param filterObj QObject*
void k_modifierkeyinfoprovider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KModifierKeyInfoProvider*
/// @param obj QObject*
void k_modifierkeyinfoprovider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_modifierkeyinfoprovider_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KModifierKeyInfoProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_modifierkeyinfoprovider_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_modifierkeyinfoprovider_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_modifierkeyinfoprovider_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KModifierKeyInfoProvider*
void k_modifierkeyinfoprovider_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KModifierKeyInfoProvider*
void k_modifierkeyinfoprovider_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KModifierKeyInfoProvider*
/// @param name const char*
/// @param value QVariant*
bool k_modifierkeyinfoprovider_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KModifierKeyInfoProvider*
/// @param name const char*
QVariant* k_modifierkeyinfoprovider_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KModifierKeyInfoProvider*
const char** k_modifierkeyinfoprovider_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KModifierKeyInfoProvider*
QBindingStorage* k_modifierkeyinfoprovider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KModifierKeyInfoProvider*
const QBindingStorage* k_modifierkeyinfoprovider_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfoProvider*
void k_modifierkeyinfoprovider_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self)
void k_modifierkeyinfoprovider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KModifierKeyInfoProvider*
QObject* k_modifierkeyinfoprovider_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KModifierKeyInfoProvider*
/// @param classname const char*
bool k_modifierkeyinfoprovider_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KModifierKeyInfoProvider*
void k_modifierkeyinfoprovider_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KModifierKeyInfoProvider*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_modifierkeyinfoprovider_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModifierKeyInfoProvider*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_modifierkeyinfoprovider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_modifierkeyinfoprovider_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KModifierKeyInfoProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_modifierkeyinfoprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfoProvider*
/// @param param1 QObject*
void k_modifierkeyinfoprovider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, QObject* param1)
void k_modifierkeyinfoprovider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QEvent*
bool k_modifierkeyinfoprovider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QEvent*
bool k_modifierkeyinfoprovider_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback bool func(KModifierKeyInfoProvider* self, QEvent* event)
void k_modifierkeyinfoprovider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param watched QObject*
/// @param event QEvent*
bool k_modifierkeyinfoprovider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param watched QObject*
/// @param event QEvent*
bool k_modifierkeyinfoprovider_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback bool func(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event)
void k_modifierkeyinfoprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QTimerEvent*
void k_modifierkeyinfoprovider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QTimerEvent*
void k_modifierkeyinfoprovider_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, QTimerEvent* event)
void k_modifierkeyinfoprovider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QChildEvent*
void k_modifierkeyinfoprovider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QChildEvent*
void k_modifierkeyinfoprovider_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, QChildEvent* event)
void k_modifierkeyinfoprovider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QEvent*
void k_modifierkeyinfoprovider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param event QEvent*
void k_modifierkeyinfoprovider_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, QEvent* event)
void k_modifierkeyinfoprovider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal QMetaMethod*
void k_modifierkeyinfoprovider_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal QMetaMethod*
void k_modifierkeyinfoprovider_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, QMetaMethod* signal)
void k_modifierkeyinfoprovider_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal QMetaMethod*
void k_modifierkeyinfoprovider_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal QMetaMethod*
void k_modifierkeyinfoprovider_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, QMetaMethod* signal)
void k_modifierkeyinfoprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
QObject* k_modifierkeyinfoprovider_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
QObject* k_modifierkeyinfoprovider_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback QObject* func()
void k_modifierkeyinfoprovider_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
int32_t k_modifierkeyinfoprovider_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
int32_t k_modifierkeyinfoprovider_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback int32_t func()
void k_modifierkeyinfoprovider_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal const char*
int32_t k_modifierkeyinfoprovider_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal const char*
int32_t k_modifierkeyinfoprovider_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback int32_t func(KModifierKeyInfoProvider* self, const char* signal)
void k_modifierkeyinfoprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal QMetaMethod*
bool k_modifierkeyinfoprovider_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param signal QMetaMethod*
bool k_modifierkeyinfoprovider_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModifierKeyInfoProvider*
/// @param callback bool func(KModifierKeyInfoProvider* self, QMetaMethod* signal)
void k_modifierkeyinfoprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KModifierKeyInfoProvider*
/// @param callback void func(KModifierKeyInfoProvider* self, const char* objectName)
void k_modifierkeyinfoprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#dtor.KModifierKeyInfoProvider)
///
/// Delete this object from C++ memory.
///
/// @param self KModifierKeyInfoProvider*
void k_modifierkeyinfoprovider_delete(void* self);

/// https://api.kde.org/kmodifierkeyinfoprovider-p.html#types

typedef enum {
    KMODIFIERKEYINFOPROVIDER_MODIFIERSTATE_NOTHING = 0,
    KMODIFIERKEYINFOPROVIDER_MODIFIERSTATE_PRESSED = 1,
    KMODIFIERKEYINFOPROVIDER_MODIFIERSTATE_LATCHED = 2,
    KMODIFIERKEYINFOPROVIDER_MODIFIERSTATE_LOCKED = 4
} KModifierKeyInfoProvider__ModifierState;

#endif
