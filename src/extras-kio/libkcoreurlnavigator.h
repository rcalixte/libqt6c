#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKCOREURLNAVIGATOR_H
#define SRC_EXTRAS_KIO_QT6C_LIBKCOREURLNAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html)

/// k_coreurlnavigator_new constructs a new KCoreUrlNavigator object.
///
KCoreUrlNavigator* k_coreurlnavigator_new();

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html)

/// k_coreurlnavigator_new2 constructs a new KCoreUrlNavigator object.
///
/// @param url QUrl*
///
KCoreUrlNavigator* k_coreurlnavigator_new2(void* url);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html)

/// k_coreurlnavigator_new3 constructs a new KCoreUrlNavigator object.
///
/// @param url QUrl*
/// @param parent QObject*
///
KCoreUrlNavigator* k_coreurlnavigator_new3(void* url, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCoreUrlNavigator*
///
const QMetaObject* k_coreurlnavigator_meta_object(void* self);

/// @param self KCoreUrlNavigator*
/// @param param1 const char*
///
void* k_coreurlnavigator_metacast(void* self, const char* param1);

/// @param self KCoreUrlNavigator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_coreurlnavigator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCoreUrlNavigator*
/// @param callback int32_t func(KCoreUrlNavigator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_coreurlnavigator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCoreUrlNavigator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_coreurlnavigator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_coreurlnavigator_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#currentLocationUrl)
///
/// @param self KCoreUrlNavigator*
///
QUrl* k_coreurlnavigator_current_location_url(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#setCurrentLocationUrl)
///
/// @param self KCoreUrlNavigator*
/// @param url QUrl*
///
void k_coreurlnavigator_set_current_location_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#currentLocationUrlChanged)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_current_location_url_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#currentUrlAboutToChange)
///
/// @param self KCoreUrlNavigator*
/// @param newUrl QUrl*
///
void k_coreurlnavigator_current_url_about_to_change(void* self, void* newUrl);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historySize)
///
/// @param self KCoreUrlNavigator*
///
int32_t k_coreurlnavigator_history_size(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historySizeChanged)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_history_size_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#urlSelectionRequested)
///
/// @param self KCoreUrlNavigator*
/// @param url QUrl*
///
void k_coreurlnavigator_url_selection_requested(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historyIndex)
///
/// @param self KCoreUrlNavigator*
///
int32_t k_coreurlnavigator_history_index(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historyIndexChanged)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_history_index_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historyChanged)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_history_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationUrl)
///
/// @param self KCoreUrlNavigator*
///
QUrl* k_coreurlnavigator_location_url(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#saveLocationState)
///
/// @param self KCoreUrlNavigator*
/// @param state QVariant*
///
void k_coreurlnavigator_save_location_state(void* self, void* state);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationState)
///
/// @param self KCoreUrlNavigator*
///
QVariant* k_coreurlnavigator_location_state(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#goBack)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_go_back(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#goForward)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_go_forward(void* self);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#goUp)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_go_up(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_coreurlnavigator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_coreurlnavigator_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationUrl)
///
/// @param self KCoreUrlNavigator*
/// @param historyIndex int
///
QUrl* k_coreurlnavigator_location_url1(void* self, int historyIndex);

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationState)
///
/// @param self KCoreUrlNavigator*
/// @param historyIndex int
///
QVariant* k_coreurlnavigator_location_state1(void* self, int historyIndex);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreUrlNavigator*
///
const char* k_coreurlnavigator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCoreUrlNavigator*
/// @param name char*
///
void k_coreurlnavigator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCoreUrlNavigator*
///
bool k_coreurlnavigator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCoreUrlNavigator*
/// @param b bool
///
bool k_coreurlnavigator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCoreUrlNavigator*
///
QThread* k_coreurlnavigator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreUrlNavigator*
/// @param thread QThread*
///
bool k_coreurlnavigator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreUrlNavigator*
/// @param interval int
///
int32_t k_coreurlnavigator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreUrlNavigator*
/// @param id int
///
void k_coreurlnavigator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreUrlNavigator*
/// @param id enum Qt__TimerId
///
void k_coreurlnavigator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCoreUrlNavigator*
///
libqt_list /* of QObject* */ k_coreurlnavigator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCoreUrlNavigator*
/// @param parent QObject*
///
void k_coreurlnavigator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCoreUrlNavigator*
/// @param filterObj QObject*
///
void k_coreurlnavigator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCoreUrlNavigator*
/// @param obj QObject*
///
void k_coreurlnavigator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_coreurlnavigator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreUrlNavigator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_coreurlnavigator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_coreurlnavigator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_coreurlnavigator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCoreUrlNavigator*
/// @param name const char*
/// @param value QVariant*
///
bool k_coreurlnavigator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCoreUrlNavigator*
/// @param name const char*
///
QVariant* k_coreurlnavigator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreUrlNavigator*
///
const char** k_coreurlnavigator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreUrlNavigator*
///
QBindingStorage* k_coreurlnavigator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreUrlNavigator*
///
const QBindingStorage* k_coreurlnavigator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self)
///
void k_coreurlnavigator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCoreUrlNavigator*
///
QObject* k_coreurlnavigator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCoreUrlNavigator*
/// @param classname const char*
///
bool k_coreurlnavigator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreUrlNavigator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_coreurlnavigator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreUrlNavigator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_coreurlnavigator_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_coreurlnavigator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreUrlNavigator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_coreurlnavigator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreUrlNavigator*
/// @param param1 QObject*
///
void k_coreurlnavigator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, QObject* param1)
///
void k_coreurlnavigator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QEvent*
///
bool k_coreurlnavigator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QEvent*
///
bool k_coreurlnavigator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback bool func(KCoreUrlNavigator* self, QEvent* event)
///
void k_coreurlnavigator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_coreurlnavigator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_coreurlnavigator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback bool func(KCoreUrlNavigator* self, QObject* watched, QEvent* event)
///
void k_coreurlnavigator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QTimerEvent*
///
void k_coreurlnavigator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QTimerEvent*
///
void k_coreurlnavigator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, QTimerEvent* event)
///
void k_coreurlnavigator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QChildEvent*
///
void k_coreurlnavigator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QChildEvent*
///
void k_coreurlnavigator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, QChildEvent* event)
///
void k_coreurlnavigator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QEvent*
///
void k_coreurlnavigator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param event QEvent*
///
void k_coreurlnavigator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, QEvent* event)
///
void k_coreurlnavigator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal QMetaMethod*
///
void k_coreurlnavigator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal QMetaMethod*
///
void k_coreurlnavigator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, QMetaMethod* signal)
///
void k_coreurlnavigator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal QMetaMethod*
///
void k_coreurlnavigator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal QMetaMethod*
///
void k_coreurlnavigator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, QMetaMethod* signal)
///
void k_coreurlnavigator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
///
QObject* k_coreurlnavigator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
///
QObject* k_coreurlnavigator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback QObject* func()
///
void k_coreurlnavigator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
///
int32_t k_coreurlnavigator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
///
int32_t k_coreurlnavigator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback int32_t func()
///
void k_coreurlnavigator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal const char*
///
int32_t k_coreurlnavigator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal const char*
///
int32_t k_coreurlnavigator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback int32_t func(KCoreUrlNavigator* self, const char* signal)
///
void k_coreurlnavigator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal QMetaMethod*
///
bool k_coreurlnavigator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param signal QMetaMethod*
///
bool k_coreurlnavigator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreUrlNavigator*
/// @param callback bool func(KCoreUrlNavigator* self, QMetaMethod* signal)
///
void k_coreurlnavigator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCoreUrlNavigator*
/// @param callback void func(KCoreUrlNavigator* self, const char* objectName)
///
void k_coreurlnavigator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#dtor.KCoreUrlNavigator)
///
/// Delete this object from C++ memory.
///
/// @param self KCoreUrlNavigator*
///
void k_coreurlnavigator_delete(void* self);

#endif
