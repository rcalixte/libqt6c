#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEPREVIEWGENERATOR_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEPREVIEWGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html)

/// k_filepreviewgenerator_new constructs a new KFilePreviewGenerator object.
///
/// @param parent QAbstractItemView*
///
KFilePreviewGenerator* k_filepreviewgenerator_new(void* parent);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html)

/// k_filepreviewgenerator_new2 constructs a new KFilePreviewGenerator object.
///
/// @param parent KAbstractViewAdapter*
/// @param model QAbstractProxyModel*
///
KFilePreviewGenerator* k_filepreviewgenerator_new2(void* parent, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFilePreviewGenerator*
///
const QMetaObject* k_filepreviewgenerator_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KFilePreviewGenerator*
/// @param callback const QMetaObject* func()
///
void k_filepreviewgenerator_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KFilePreviewGenerator*
///
const QMetaObject* k_filepreviewgenerator_qbase_meta_object(void* self);

/// @param self KFilePreviewGenerator*
/// @param param1 const char*
///
void* k_filepreviewgenerator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFilePreviewGenerator*
/// @param callback void* func(KFilePreviewGenerator* self, const char* param1)
///
void k_filepreviewgenerator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KFilePreviewGenerator*
/// @param param1 const char*
///
void* k_filepreviewgenerator_qbase_metacast(void* self, const char* param1);

/// @param self KFilePreviewGenerator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_filepreviewgenerator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFilePreviewGenerator*
/// @param callback int32_t func(KFilePreviewGenerator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_filepreviewgenerator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFilePreviewGenerator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_filepreviewgenerator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_filepreviewgenerator_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#setPreviewShown)
///
/// @param self KFilePreviewGenerator*
/// @param show bool
///
void k_filepreviewgenerator_set_preview_shown(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#isPreviewShown)
///
/// @param self KFilePreviewGenerator*
///
bool k_filepreviewgenerator_is_preview_shown(void* self);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#setEnabledPlugins)
///
/// @param self KFilePreviewGenerator*
/// @param list const char**
///
void k_filepreviewgenerator_set_enabled_plugins(void* self, const char* list[static 1]);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#enabledPlugins)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFilePreviewGenerator*
///
const char** k_filepreviewgenerator_enabled_plugins(void* self);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#updateIcons)
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_update_icons(void* self);

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#cancelPreviews)
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_cancel_previews(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_filepreviewgenerator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_filepreviewgenerator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePreviewGenerator*
///
const char* k_filepreviewgenerator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFilePreviewGenerator*
/// @param name char*
///
void k_filepreviewgenerator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFilePreviewGenerator*
///
bool k_filepreviewgenerator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFilePreviewGenerator*
///
bool k_filepreviewgenerator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFilePreviewGenerator*
///
bool k_filepreviewgenerator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFilePreviewGenerator*
///
bool k_filepreviewgenerator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFilePreviewGenerator*
/// @param b bool
///
bool k_filepreviewgenerator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFilePreviewGenerator*
///
QThread* k_filepreviewgenerator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFilePreviewGenerator*
/// @param thread QThread*
///
bool k_filepreviewgenerator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePreviewGenerator*
/// @param interval int
///
int32_t k_filepreviewgenerator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePreviewGenerator*
/// @param time int64_t of nanoseconds
///
int32_t k_filepreviewgenerator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePreviewGenerator*
/// @param id int
///
void k_filepreviewgenerator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePreviewGenerator*
/// @param id enum Qt__TimerId
///
void k_filepreviewgenerator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFilePreviewGenerator*
///
/// @return libqt_list of QObject*
///
libqt_list k_filepreviewgenerator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFilePreviewGenerator*
/// @param parent QObject*
///
void k_filepreviewgenerator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFilePreviewGenerator*
/// @param filterObj QObject*
///
void k_filepreviewgenerator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFilePreviewGenerator*
/// @param obj QObject*
///
void k_filepreviewgenerator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_filepreviewgenerator_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_filepreviewgenerator_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFilePreviewGenerator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_filepreviewgenerator_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_filepreviewgenerator_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_filepreviewgenerator_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFilePreviewGenerator*
///
bool k_filepreviewgenerator_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFilePreviewGenerator*
/// @param receiver QObject*
///
bool k_filepreviewgenerator_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_filepreviewgenerator_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFilePreviewGenerator*
/// @param name const char*
/// @param value QVariant*
///
bool k_filepreviewgenerator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFilePreviewGenerator*
/// @param name const char*
///
QVariant* k_filepreviewgenerator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFilePreviewGenerator*
///
const char** k_filepreviewgenerator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePreviewGenerator*
///
QBindingStorage* k_filepreviewgenerator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePreviewGenerator*
///
const QBindingStorage* k_filepreviewgenerator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self)
///
void k_filepreviewgenerator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFilePreviewGenerator*
///
QObject* k_filepreviewgenerator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFilePreviewGenerator*
/// @param classname const char*
///
bool k_filepreviewgenerator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePreviewGenerator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_filepreviewgenerator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePreviewGenerator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_filepreviewgenerator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_filepreviewgenerator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_filepreviewgenerator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFilePreviewGenerator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_filepreviewgenerator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFilePreviewGenerator*
/// @param signal const char*
///
bool k_filepreviewgenerator_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFilePreviewGenerator*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_filepreviewgenerator_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFilePreviewGenerator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_filepreviewgenerator_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFilePreviewGenerator*
/// @param receiver QObject*
/// @param member const char*
///
bool k_filepreviewgenerator_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePreviewGenerator*
/// @param param1 QObject*
///
void k_filepreviewgenerator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, QObject* param1)
///
void k_filepreviewgenerator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QEvent*
///
bool k_filepreviewgenerator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QEvent*
///
bool k_filepreviewgenerator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback bool func(KFilePreviewGenerator* self, QEvent* event)
///
void k_filepreviewgenerator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_filepreviewgenerator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_filepreviewgenerator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback bool func(KFilePreviewGenerator* self, QObject* watched, QEvent* event)
///
void k_filepreviewgenerator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QTimerEvent*
///
void k_filepreviewgenerator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QTimerEvent*
///
void k_filepreviewgenerator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, QTimerEvent* event)
///
void k_filepreviewgenerator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QChildEvent*
///
void k_filepreviewgenerator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QChildEvent*
///
void k_filepreviewgenerator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, QChildEvent* event)
///
void k_filepreviewgenerator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QEvent*
///
void k_filepreviewgenerator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param event QEvent*
///
void k_filepreviewgenerator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, QEvent* event)
///
void k_filepreviewgenerator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal QMetaMethod*
///
void k_filepreviewgenerator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal QMetaMethod*
///
void k_filepreviewgenerator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, QMetaMethod* signal)
///
void k_filepreviewgenerator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal QMetaMethod*
///
void k_filepreviewgenerator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal QMetaMethod*
///
void k_filepreviewgenerator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, QMetaMethod* signal)
///
void k_filepreviewgenerator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
///
QObject* k_filepreviewgenerator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
///
QObject* k_filepreviewgenerator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback QObject* func()
///
void k_filepreviewgenerator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
///
int32_t k_filepreviewgenerator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
///
int32_t k_filepreviewgenerator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback int32_t func()
///
void k_filepreviewgenerator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal const char*
///
int32_t k_filepreviewgenerator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal const char*
///
int32_t k_filepreviewgenerator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback int32_t func(KFilePreviewGenerator* self, const char* signal)
///
void k_filepreviewgenerator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal QMetaMethod*
///
bool k_filepreviewgenerator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param signal QMetaMethod*
///
bool k_filepreviewgenerator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePreviewGenerator*
/// @param callback bool func(KFilePreviewGenerator* self, QMetaMethod* signal)
///
void k_filepreviewgenerator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePreviewGenerator*
/// @param callback void func(KFilePreviewGenerator* self, const char* objectName)
///
void k_filepreviewgenerator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfilepreviewgenerator.html#dtor.KFilePreviewGenerator)
///
/// Delete this object from C++ memory.
///
/// @param self KFilePreviewGenerator*
///
void k_filepreviewgenerator_delete(void* self);

#endif
