#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKPROPERTIESDIALOGPLUGIN_H
#define SRC_EXTRAS_KIO_QT6C_LIBKPROPERTIESDIALOGPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html)

/// k_propertiesdialogplugin_new constructs a new KPropertiesDialogPlugin object.
///
/// @param parent QObject*
///
KPropertiesDialogPlugin* k_propertiesdialogplugin_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KPropertiesDialogPlugin*
///
const QMetaObject* k_propertiesdialogplugin_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback const QMetaObject* func()
///
void k_propertiesdialogplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KPropertiesDialogPlugin*
///
const QMetaObject* k_propertiesdialogplugin_qbase_meta_object(void* self);

/// @param self KPropertiesDialogPlugin*
/// @param param1 const char*
///
void* k_propertiesdialogplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void* func(KPropertiesDialogPlugin* self, const char* param1)
///
void k_propertiesdialogplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPropertiesDialogPlugin*
/// @param param1 const char*
///
void* k_propertiesdialogplugin_qbase_metacast(void* self, const char* param1);

/// @param self KPropertiesDialogPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_propertiesdialogplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback int32_t func(KPropertiesDialogPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_propertiesdialogplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPropertiesDialogPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_propertiesdialogplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_propertiesdialogplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#applyChanges)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_apply_changes(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#applyChanges)
///
/// Allows for overriding the related default method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func()
///
void k_propertiesdialogplugin_on_apply_changes(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#applyChanges)
///
/// Base class method implementation
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_qbase_apply_changes(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#setDirty)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_set_dirty(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#isDirty)
///
/// @param self KPropertiesDialogPlugin*
///
bool k_propertiesdialogplugin_is_dirty(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#changed)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_changed(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#changed)
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self)
///
void k_propertiesdialogplugin_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#fontHeight)
///
/// @param self KPropertiesDialogPlugin*
///
int32_t k_propertiesdialogplugin_font_height(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#fontHeight)
///
/// Allows for overriding the related default method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback int32_t func()
///
void k_propertiesdialogplugin_on_font_height(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#fontHeight)
///
/// Base class method implementation
///
/// @param self KPropertiesDialogPlugin*
///
int32_t k_propertiesdialogplugin_qbase_font_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_propertiesdialogplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_propertiesdialogplugin_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#setDirty)
///
/// @param self KPropertiesDialogPlugin*
/// @param b bool
///
void k_propertiesdialogplugin_set_dirty1(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialogPlugin*
///
const char* k_propertiesdialogplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPropertiesDialogPlugin*
/// @param name char*
///
void k_propertiesdialogplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPropertiesDialogPlugin*
///
bool k_propertiesdialogplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPropertiesDialogPlugin*
///
bool k_propertiesdialogplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPropertiesDialogPlugin*
///
bool k_propertiesdialogplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPropertiesDialogPlugin*
///
bool k_propertiesdialogplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPropertiesDialogPlugin*
/// @param b bool
///
bool k_propertiesdialogplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPropertiesDialogPlugin*
///
QThread* k_propertiesdialogplugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPropertiesDialogPlugin*
/// @param thread QThread*
///
bool k_propertiesdialogplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPropertiesDialogPlugin*
/// @param interval int
///
int32_t k_propertiesdialogplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPropertiesDialogPlugin*
/// @param time int64_t of nanoseconds
///
int32_t k_propertiesdialogplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPropertiesDialogPlugin*
/// @param id int
///
void k_propertiesdialogplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPropertiesDialogPlugin*
/// @param id enum Qt__TimerId
///
void k_propertiesdialogplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPropertiesDialogPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_propertiesdialogplugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KPropertiesDialogPlugin*
/// @param parent QObject*
///
void k_propertiesdialogplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPropertiesDialogPlugin*
/// @param filterObj QObject*
///
void k_propertiesdialogplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPropertiesDialogPlugin*
/// @param obj QObject*
///
void k_propertiesdialogplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_propertiesdialogplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPropertiesDialogPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_propertiesdialogplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_propertiesdialogplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_propertiesdialogplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPropertiesDialogPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_propertiesdialogplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPropertiesDialogPlugin*
/// @param name const char*
///
QVariant* k_propertiesdialogplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPropertiesDialogPlugin*
///
const char** k_propertiesdialogplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPropertiesDialogPlugin*
///
QBindingStorage* k_propertiesdialogplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPropertiesDialogPlugin*
///
const QBindingStorage* k_propertiesdialogplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self)
///
void k_propertiesdialogplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KPropertiesDialogPlugin*
///
QObject* k_propertiesdialogplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPropertiesDialogPlugin*
/// @param classname const char*
///
bool k_propertiesdialogplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPropertiesDialogPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_propertiesdialogplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPropertiesDialogPlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_propertiesdialogplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_propertiesdialogplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPropertiesDialogPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_propertiesdialogplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialogPlugin*
/// @param param1 QObject*
///
void k_propertiesdialogplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, QObject* param1)
///
void k_propertiesdialogplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QEvent*
///
bool k_propertiesdialogplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QEvent*
///
bool k_propertiesdialogplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback bool func(KPropertiesDialogPlugin* self, QEvent* event)
///
void k_propertiesdialogplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_propertiesdialogplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_propertiesdialogplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback bool func(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event)
///
void k_propertiesdialogplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QTimerEvent*
///
void k_propertiesdialogplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QTimerEvent*
///
void k_propertiesdialogplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, QTimerEvent* event)
///
void k_propertiesdialogplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QChildEvent*
///
void k_propertiesdialogplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QChildEvent*
///
void k_propertiesdialogplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, QChildEvent* event)
///
void k_propertiesdialogplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QEvent*
///
void k_propertiesdialogplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param event QEvent*
///
void k_propertiesdialogplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, QEvent* event)
///
void k_propertiesdialogplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal QMetaMethod*
///
void k_propertiesdialogplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal QMetaMethod*
///
void k_propertiesdialogplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, QMetaMethod* signal)
///
void k_propertiesdialogplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal QMetaMethod*
///
void k_propertiesdialogplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal QMetaMethod*
///
void k_propertiesdialogplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, QMetaMethod* signal)
///
void k_propertiesdialogplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
///
QObject* k_propertiesdialogplugin_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
///
QObject* k_propertiesdialogplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback QObject* func()
///
void k_propertiesdialogplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
///
int32_t k_propertiesdialogplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
///
int32_t k_propertiesdialogplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback int32_t func()
///
void k_propertiesdialogplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal const char*
///
int32_t k_propertiesdialogplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal const char*
///
int32_t k_propertiesdialogplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback int32_t func(KPropertiesDialogPlugin* self, const char* signal)
///
void k_propertiesdialogplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal QMetaMethod*
///
bool k_propertiesdialogplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param signal QMetaMethod*
///
bool k_propertiesdialogplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialogPlugin*
/// @param callback bool func(KPropertiesDialogPlugin* self, QMetaMethod* signal)
///
void k_propertiesdialogplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPropertiesDialogPlugin*
/// @param callback void func(KPropertiesDialogPlugin* self, const char* objectName)
///
void k_propertiesdialogplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpropertiesdialogplugin.html#dtor.KPropertiesDialogPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self KPropertiesDialogPlugin*
///
void k_propertiesdialogplugin_delete(void* self);

#endif
