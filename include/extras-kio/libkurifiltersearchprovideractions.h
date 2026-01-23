#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKURIFILTERSEARCHPROVIDERACTIONS_H
#define SRC_EXTRAS_KIO_QT6C_LIBKURIFILTERSEARCHPROVIDERACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-kurifiltersearchprovideractions.html)

/// k_io__kurifiltersearchprovideractions_new constructs a new KIO::KUriFilterSearchProviderActions object.
///
KIO__KUriFilterSearchProviderActions* k_io__kurifiltersearchprovideractions_new();

/// [Upstream resources](https://api.kde.org/kio-kurifiltersearchprovideractions.html)

/// k_io__kurifiltersearchprovideractions_new2 constructs a new KIO::KUriFilterSearchProviderActions object.
///
/// @param parent QObject*
///
KIO__KUriFilterSearchProviderActions* k_io__kurifiltersearchprovideractions_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
const QMetaObject* k_io__kurifiltersearchprovideractions_meta_object(void* self);

/// @param self KIO__KUriFilterSearchProviderActions*
/// @param param1 const char*
///
void* k_io__kurifiltersearchprovideractions_metacast(void* self, const char* param1);

/// @param self KIO__KUriFilterSearchProviderActions*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__kurifiltersearchprovideractions_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback int32_t func(KIO__KUriFilterSearchProviderActions* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_io__kurifiltersearchprovideractions_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__kurifiltersearchprovideractions_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_io__kurifiltersearchprovideractions_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-kurifiltersearchprovideractions.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
const char* k_io__kurifiltersearchprovideractions_selected_text(void* self);

/// [Upstream resources](https://api.kde.org/kio-kurifiltersearchprovideractions.html#setSelectedText)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param selectedText const char*
///
void k_io__kurifiltersearchprovideractions_set_selected_text(void* self, const char* selectedText);

/// [Upstream resources](https://api.kde.org/kio-kurifiltersearchprovideractions.html#addWebShortcutsToMenu)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param menu QMenu*
///
void k_io__kurifiltersearchprovideractions_add_web_shortcuts_to_menu(void* self, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__kurifiltersearchprovideractions_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__kurifiltersearchprovideractions_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
const char* k_io__kurifiltersearchprovideractions_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param name char*
///
void k_io__kurifiltersearchprovideractions_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
bool k_io__kurifiltersearchprovideractions_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
bool k_io__kurifiltersearchprovideractions_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
bool k_io__kurifiltersearchprovideractions_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
bool k_io__kurifiltersearchprovideractions_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param b bool
///
bool k_io__kurifiltersearchprovideractions_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
QThread* k_io__kurifiltersearchprovideractions_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param thread QThread*
///
bool k_io__kurifiltersearchprovideractions_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param interval int
///
int32_t k_io__kurifiltersearchprovideractions_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param time int64_t of nanoseconds
///
int32_t k_io__kurifiltersearchprovideractions_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param id int
///
void k_io__kurifiltersearchprovideractions_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param id enum Qt__TimerId
///
void k_io__kurifiltersearchprovideractions_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
/// @return libqt_list of QObject*
///
libqt_list k_io__kurifiltersearchprovideractions_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param parent QObject*
///
void k_io__kurifiltersearchprovideractions_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param filterObj QObject*
///
void k_io__kurifiltersearchprovideractions_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param obj QObject*
///
void k_io__kurifiltersearchprovideractions_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__kurifiltersearchprovideractions_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__kurifiltersearchprovideractions_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
void k_io__kurifiltersearchprovideractions_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
void k_io__kurifiltersearchprovideractions_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__kurifiltersearchprovideractions_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param name const char*
///
QVariant* k_io__kurifiltersearchprovideractions_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
const char** k_io__kurifiltersearchprovideractions_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
QBindingStorage* k_io__kurifiltersearchprovideractions_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
const QBindingStorage* k_io__kurifiltersearchprovideractions_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
void k_io__kurifiltersearchprovideractions_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self)
///
void k_io__kurifiltersearchprovideractions_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
QObject* k_io__kurifiltersearchprovideractions_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param classname const char*
///
bool k_io__kurifiltersearchprovideractions_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
void k_io__kurifiltersearchprovideractions_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_io__kurifiltersearchprovideractions_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__kurifiltersearchprovideractions_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_io__kurifiltersearchprovideractions_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param param1 QObject*
///
void k_io__kurifiltersearchprovideractions_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, QObject* param1)
///
void k_io__kurifiltersearchprovideractions_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QEvent*
///
bool k_io__kurifiltersearchprovideractions_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QEvent*
///
bool k_io__kurifiltersearchprovideractions_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback bool func(KIO__KUriFilterSearchProviderActions* self, QEvent* event)
///
void k_io__kurifiltersearchprovideractions_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__kurifiltersearchprovideractions_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__kurifiltersearchprovideractions_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback bool func(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event)
///
void k_io__kurifiltersearchprovideractions_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QTimerEvent*
///
void k_io__kurifiltersearchprovideractions_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QTimerEvent*
///
void k_io__kurifiltersearchprovideractions_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event)
///
void k_io__kurifiltersearchprovideractions_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QChildEvent*
///
void k_io__kurifiltersearchprovideractions_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QChildEvent*
///
void k_io__kurifiltersearchprovideractions_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event)
///
void k_io__kurifiltersearchprovideractions_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QEvent*
///
void k_io__kurifiltersearchprovideractions_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param event QEvent*
///
void k_io__kurifiltersearchprovideractions_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, QEvent* event)
///
void k_io__kurifiltersearchprovideractions_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal QMetaMethod*
///
void k_io__kurifiltersearchprovideractions_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal QMetaMethod*
///
void k_io__kurifiltersearchprovideractions_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, QMetaMethod* signal)
///
void k_io__kurifiltersearchprovideractions_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal QMetaMethod*
///
void k_io__kurifiltersearchprovideractions_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal QMetaMethod*
///
void k_io__kurifiltersearchprovideractions_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, QMetaMethod* signal)
///
void k_io__kurifiltersearchprovideractions_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
QObject* k_io__kurifiltersearchprovideractions_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
QObject* k_io__kurifiltersearchprovideractions_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback QObject* func()
///
void k_io__kurifiltersearchprovideractions_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
int32_t k_io__kurifiltersearchprovideractions_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
int32_t k_io__kurifiltersearchprovideractions_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback int32_t func()
///
void k_io__kurifiltersearchprovideractions_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal const char*
///
int32_t k_io__kurifiltersearchprovideractions_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal const char*
///
int32_t k_io__kurifiltersearchprovideractions_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback int32_t func(KIO__KUriFilterSearchProviderActions* self, const char* signal)
///
void k_io__kurifiltersearchprovideractions_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal QMetaMethod*
///
bool k_io__kurifiltersearchprovideractions_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param signal QMetaMethod*
///
bool k_io__kurifiltersearchprovideractions_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback bool func(KIO__KUriFilterSearchProviderActions* self, QMetaMethod* signal)
///
void k_io__kurifiltersearchprovideractions_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__KUriFilterSearchProviderActions*
/// @param callback void func(KIO__KUriFilterSearchProviderActions* self, const char* objectName)
///
void k_io__kurifiltersearchprovideractions_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__KUriFilterSearchProviderActions*
///
void k_io__kurifiltersearchprovideractions_delete(void* self);

#endif
