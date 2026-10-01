#pragma once
#ifndef EXTRAS_KIO_LIBKOVERLAYICONPLUGIN_H
#define EXTRAS_KIO_LIBKOVERLAYICONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html)

/// k_overlayiconplugin_new constructs a new KOverlayIconPlugin object.
///
KOverlayIconPlugin* k_overlayiconplugin_new();

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html)

/// k_overlayiconplugin_new2 constructs a new KOverlayIconPlugin object.
///
/// @param parent QObject*
///
KOverlayIconPlugin* k_overlayiconplugin_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KOverlayIconPlugin*
///
const QMetaObject* k_overlayiconplugin_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KOverlayIconPlugin*
/// @param callback const QMetaObject* func(const KOverlayIconPlugin* self)
///
void k_overlayiconplugin_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KOverlayIconPlugin*
///
const QMetaObject* k_overlayiconplugin_super_meta_object(const void* self);

/// @param self KOverlayIconPlugin*
/// @param param1 const char*
///
void* k_overlayiconplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KOverlayIconPlugin*
/// @param callback void* func(KOverlayIconPlugin* self, const char* param1)
///
void k_overlayiconplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KOverlayIconPlugin*
/// @param param1 const char*
///
void* k_overlayiconplugin_super_metacast(void* self, const char* param1);

/// @param self KOverlayIconPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_overlayiconplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KOverlayIconPlugin*
/// @param callback int32_t func(KOverlayIconPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_overlayiconplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KOverlayIconPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_overlayiconplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_overlayiconplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#getOverlays)
///
/// @warning This method must be implemented with `k_overlayiconplugin_on_get_overlays` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KOverlayIconPlugin*
/// @param item QUrl*
///
const char** k_overlayiconplugin_get_overlays(void* self, const void* item);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#getOverlays)
///
/// Allows for overriding the related default method
///
/// @param self KOverlayIconPlugin*
/// @param callback const char** func(KOverlayIconPlugin* self, QUrl* item)
///
void k_overlayiconplugin_on_get_overlays(void* self, const char** (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#overlaysChanged)
///
/// @param self KOverlayIconPlugin*
/// @param url QUrl*
/// @param overlays const char**
///
void k_overlayiconplugin_overlays_changed(void* self, const void* url, const char* overlays[static 1]);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#overlaysChanged)
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QUrl* url, const char** overlays)
///
void k_overlayiconplugin_on_overlays_changed(void* self, void (*callback)(void*, const void*, const char**));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_overlayiconplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_overlayiconplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KOverlayIconPlugin*
///
const char* k_overlayiconplugin_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KOverlayIconPlugin*
/// @param name const char*
///
void k_overlayiconplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KOverlayIconPlugin*
///
bool k_overlayiconplugin_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KOverlayIconPlugin*
///
bool k_overlayiconplugin_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KOverlayIconPlugin*
///
bool k_overlayiconplugin_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KOverlayIconPlugin*
///
bool k_overlayiconplugin_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KOverlayIconPlugin*
/// @param b bool
///
bool k_overlayiconplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KOverlayIconPlugin*
///
QThread* k_overlayiconplugin_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KOverlayIconPlugin*
/// @param thread QThread*
///
bool k_overlayiconplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KOverlayIconPlugin*
/// @param interval int
///
int32_t k_overlayiconplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KOverlayIconPlugin*
/// @param time int64_t of nanoseconds
///
int32_t k_overlayiconplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KOverlayIconPlugin*
/// @param id int
///
void k_overlayiconplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KOverlayIconPlugin*
/// @param id enum Qt__TimerId
///
void k_overlayiconplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KOverlayIconPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_overlayiconplugin_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KOverlayIconPlugin*
/// @param parent QObject*
///
void k_overlayiconplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KOverlayIconPlugin*
/// @param filterObj QObject*
///
void k_overlayiconplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KOverlayIconPlugin*
/// @param obj QObject*
///
void k_overlayiconplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_overlayiconplugin_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_overlayiconplugin_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KOverlayIconPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_overlayiconplugin_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_overlayiconplugin_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_overlayiconplugin_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KOverlayIconPlugin*
///
bool k_overlayiconplugin_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KOverlayIconPlugin*
/// @param receiver QObject*
///
bool k_overlayiconplugin_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_overlayiconplugin_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KOverlayIconPlugin*
///
void k_overlayiconplugin_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KOverlayIconPlugin*
///
void k_overlayiconplugin_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KOverlayIconPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_overlayiconplugin_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KOverlayIconPlugin*
/// @param name const char*
///
QVariant* k_overlayiconplugin_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KOverlayIconPlugin*
///
const char** k_overlayiconplugin_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KOverlayIconPlugin*
///
QBindingStorage* k_overlayiconplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KOverlayIconPlugin*
///
const QBindingStorage* k_overlayiconplugin_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KOverlayIconPlugin*
///
void k_overlayiconplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self)
///
void k_overlayiconplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KOverlayIconPlugin*
///
QObject* k_overlayiconplugin_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KOverlayIconPlugin*
/// @param classname const char*
///
bool k_overlayiconplugin_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KOverlayIconPlugin*
///
void k_overlayiconplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KOverlayIconPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_overlayiconplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KOverlayIconPlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_overlayiconplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_overlayiconplugin_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_overlayiconplugin_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KOverlayIconPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_overlayiconplugin_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KOverlayIconPlugin*
/// @param signal const char*
///
bool k_overlayiconplugin_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KOverlayIconPlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_overlayiconplugin_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KOverlayIconPlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_overlayiconplugin_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KOverlayIconPlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool k_overlayiconplugin_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KOverlayIconPlugin*
/// @param param1 QObject*
///
void k_overlayiconplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QObject* param1)
///
void k_overlayiconplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QEvent*
///
bool k_overlayiconplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QEvent*
///
bool k_overlayiconplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback bool func(KOverlayIconPlugin* self, QEvent* event)
///
void k_overlayiconplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_overlayiconplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_overlayiconplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback bool func(KOverlayIconPlugin* self, QObject* watched, QEvent* event)
///
void k_overlayiconplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QTimerEvent*
///
void k_overlayiconplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QTimerEvent*
///
void k_overlayiconplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QTimerEvent* event)
///
void k_overlayiconplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QChildEvent*
///
void k_overlayiconplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QChildEvent*
///
void k_overlayiconplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QChildEvent* event)
///
void k_overlayiconplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QEvent*
///
void k_overlayiconplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param event QEvent*
///
void k_overlayiconplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QEvent* event)
///
void k_overlayiconplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QMetaMethod* signal)
///
void k_overlayiconplugin_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QMetaMethod* signal)
///
void k_overlayiconplugin_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KOverlayIconPlugin*
///
QObject* k_overlayiconplugin_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KOverlayIconPlugin*
///
QObject* k_overlayiconplugin_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback QObject* func(KOverlayIconPlugin* self)
///
void k_overlayiconplugin_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KOverlayIconPlugin*
///
int32_t k_overlayiconplugin_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KOverlayIconPlugin*
///
int32_t k_overlayiconplugin_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback int32_t func(KOverlayIconPlugin* self)
///
void k_overlayiconplugin_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KOverlayIconPlugin*
/// @param signal const char*
///
int32_t k_overlayiconplugin_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KOverlayIconPlugin*
/// @param signal const char*
///
int32_t k_overlayiconplugin_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback int32_t func(KOverlayIconPlugin* self, const char* signal)
///
void k_overlayiconplugin_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
bool k_overlayiconplugin_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
bool k_overlayiconplugin_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback bool func(KOverlayIconPlugin* self, QMetaMethod* signal)
///
void k_overlayiconplugin_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, const char* objectName)
///
void k_overlayiconplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#dtor.KOverlayIconPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self KOverlayIconPlugin*
///
void k_overlayiconplugin_delete(void* self);

#endif
