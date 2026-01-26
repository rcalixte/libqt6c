#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKOVERLAYICONPLUGIN_H
#define SRC_EXTRAS_KIO_QT6C_LIBKOVERLAYICONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self KOverlayIconPlugin*
///
const QMetaObject* k_overlayiconplugin_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KOverlayIconPlugin*
/// @param callback const QMetaObject* func()
///
void k_overlayiconplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KOverlayIconPlugin*
///
const QMetaObject* k_overlayiconplugin_qbase_meta_object(void* self);

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
void* k_overlayiconplugin_qbase_metacast(void* self, const char* param1);

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
int32_t k_overlayiconplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_overlayiconplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#getOverlays)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KOverlayIconPlugin*
/// @param item QUrl*
///
const char** k_overlayiconplugin_get_overlays(void* self, void* item);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#getOverlays)
///
/// Allows for overriding the related default method
///
/// @param self KOverlayIconPlugin*
/// @param callback const char** func(KOverlayIconPlugin* self, QUrl* item)
///
void k_overlayiconplugin_on_get_overlays(void* self, const char** (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#getOverlays)
///
/// Base class method implementation
///
/// @param self KOverlayIconPlugin*
/// @param item QUrl*
///
const char** k_overlayiconplugin_qbase_get_overlays(void* self, void* item);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#overlaysChanged)
///
/// @param self KOverlayIconPlugin*
/// @param url QUrl*
/// @param overlays const char**
///
void k_overlayiconplugin_overlays_changed(void* self, void* url, const char* overlays[static 1]);

/// [Upstream resources](https://api.kde.org/koverlayiconplugin.html#overlaysChanged)
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QUrl* url, const char** overlays)
///
void k_overlayiconplugin_on_overlays_changed(void* self, void (*callback)(void*, void*, const char**));

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
/// @param self KOverlayIconPlugin*
///
const char* k_overlayiconplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KOverlayIconPlugin*
/// @param name char*
///
void k_overlayiconplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KOverlayIconPlugin*
///
bool k_overlayiconplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KOverlayIconPlugin*
///
bool k_overlayiconplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KOverlayIconPlugin*
///
bool k_overlayiconplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KOverlayIconPlugin*
///
bool k_overlayiconplugin_signals_blocked(void* self);

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
/// @param self KOverlayIconPlugin*
///
QThread* k_overlayiconplugin_thread(void* self);

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
/// @param self KOverlayIconPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_overlayiconplugin_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_overlayiconplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KOverlayIconPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_overlayiconplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_overlayiconplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_overlayiconplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KOverlayIconPlugin*
///
void k_overlayiconplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KOverlayIconPlugin*
///
void k_overlayiconplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KOverlayIconPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_overlayiconplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KOverlayIconPlugin*
/// @param name const char*
///
QVariant* k_overlayiconplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KOverlayIconPlugin*
///
const char** k_overlayiconplugin_dynamic_property_names(void* self);

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
/// @param self KOverlayIconPlugin*
///
const QBindingStorage* k_overlayiconplugin_binding_storage2(void* self);

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
/// @param self KOverlayIconPlugin*
///
QObject* k_overlayiconplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KOverlayIconPlugin*
/// @param classname const char*
///
bool k_overlayiconplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KOverlayIconPlugin*
///
void k_overlayiconplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KOverlayIconPlugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_overlayiconplugin_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_overlayiconplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KOverlayIconPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_overlayiconplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool k_overlayiconplugin_qbase_event(void* self, void* event);

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
bool k_overlayiconplugin_qbase_event_filter(void* self, void* watched, void* event);

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
void k_overlayiconplugin_qbase_timer_event(void* self, void* event);

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
void k_overlayiconplugin_qbase_child_event(void* self, void* event);

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
void k_overlayiconplugin_qbase_custom_event(void* self, void* event);

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
void k_overlayiconplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QMetaMethod* signal)
///
void k_overlayiconplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
void k_overlayiconplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback void func(KOverlayIconPlugin* self, QMetaMethod* signal)
///
void k_overlayiconplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
///
QObject* k_overlayiconplugin_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
///
QObject* k_overlayiconplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback QObject* func()
///
void k_overlayiconplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
///
int32_t k_overlayiconplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
///
int32_t k_overlayiconplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback int32_t func()
///
void k_overlayiconplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal const char*
///
int32_t k_overlayiconplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal const char*
///
int32_t k_overlayiconplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback int32_t func(KOverlayIconPlugin* self, const char* signal)
///
void k_overlayiconplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
bool k_overlayiconplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param signal QMetaMethod*
///
bool k_overlayiconplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KOverlayIconPlugin*
/// @param callback bool func(KOverlayIconPlugin* self, QMetaMethod* signal)
///
void k_overlayiconplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
