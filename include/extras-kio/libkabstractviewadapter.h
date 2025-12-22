#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKABSTRACTVIEWADAPTER_H
#define SRC_EXTRAS_KIO_QT6C_LIBKABSTRACTVIEWADAPTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html)

/// k_abstractviewadapter_new constructs a new KAbstractViewAdapter object.
///
/// @param parent QObject*
///
KAbstractViewAdapter* k_abstractviewadapter_new(void* parent);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#model)
///
/// @param self KAbstractViewAdapter*
///
QAbstractItemModel* k_abstractviewadapter_model(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#model)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractViewAdapter*
/// @param callback QAbstractItemModel* func()
///
void k_abstractviewadapter_on_model(void* self, QAbstractItemModel* (*callback)());

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#model)
///
/// Base class method implementation
///
/// @param self KAbstractViewAdapter*
///
QAbstractItemModel* k_abstractviewadapter_qbase_model(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#iconSize)
///
/// @param self KAbstractViewAdapter*
///
QSize* k_abstractviewadapter_icon_size(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#iconSize)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractViewAdapter*
/// @param callback QSize* func()
///
void k_abstractviewadapter_on_icon_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#iconSize)
///
/// Base class method implementation
///
/// @param self KAbstractViewAdapter*
///
QSize* k_abstractviewadapter_qbase_icon_size(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#palette)
///
/// @param self KAbstractViewAdapter*
///
QPalette* k_abstractviewadapter_palette(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#palette)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractViewAdapter*
/// @param callback QPalette* func()
///
void k_abstractviewadapter_on_palette(void* self, QPalette* (*callback)());

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#palette)
///
/// Base class method implementation
///
/// @param self KAbstractViewAdapter*
///
QPalette* k_abstractviewadapter_qbase_palette(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#visibleArea)
///
/// @param self KAbstractViewAdapter*
///
QRect* k_abstractviewadapter_visible_area(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#visibleArea)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractViewAdapter*
/// @param callback QRect* func()
///
void k_abstractviewadapter_on_visible_area(void* self, QRect* (*callback)());

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#visibleArea)
///
/// Base class method implementation
///
/// @param self KAbstractViewAdapter*
///
QRect* k_abstractviewadapter_qbase_visible_area(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#visualRect)
///
/// @param self KAbstractViewAdapter*
/// @param index QModelIndex*
///
QRect* k_abstractviewadapter_visual_rect(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractViewAdapter*
/// @param callback QRect* func(KAbstractViewAdapter* self, QModelIndex* index)
///
void k_abstractviewadapter_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#visualRect)
///
/// Base class method implementation
///
/// @param self KAbstractViewAdapter*
/// @param index QModelIndex*
///
QRect* k_abstractviewadapter_qbase_visual_rect(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#connect)
///
/// @param self KAbstractViewAdapter*
/// @param signal enum KAbstractViewAdapter__Signal
/// @param receiver QObject*
/// @param slot const char*
///
void k_abstractviewadapter_connect(void* self, int32_t signal, void* receiver, const char* slot);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#connect)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, enum KAbstractViewAdapter__Signal signal, QObject* receiver, const char* slot)
///
void k_abstractviewadapter_on_connect(void* self, void (*callback)(void*, int32_t, void*, const char*));

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#connect)
///
/// Base class method implementation
///
/// @param self KAbstractViewAdapter*
/// @param signal enum KAbstractViewAdapter__Signal
/// @param receiver QObject*
/// @param slot const char*
///
void k_abstractviewadapter_qbase_connect(void* self, int32_t signal, void* receiver, const char* slot);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KAbstractViewAdapter*
///
const QMetaObject* k_abstractviewadapter_meta_object(void* self);

/// Inherited from QObject
///
/// @param self KAbstractViewAdapter*
/// @param param1 const char*
///
void* k_abstractviewadapter_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_abstractviewadapter_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KAbstractViewAdapter*
///
const char* k_abstractviewadapter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAbstractViewAdapter*
/// @param name char*
///
void k_abstractviewadapter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAbstractViewAdapter*
///
bool k_abstractviewadapter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAbstractViewAdapter*
///
bool k_abstractviewadapter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAbstractViewAdapter*
///
bool k_abstractviewadapter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAbstractViewAdapter*
///
bool k_abstractviewadapter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAbstractViewAdapter*
/// @param b bool
///
bool k_abstractviewadapter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KAbstractViewAdapter*
///
QThread* k_abstractviewadapter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractViewAdapter*
/// @param thread QThread*
///
bool k_abstractviewadapter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractViewAdapter*
/// @param interval int
///
int32_t k_abstractviewadapter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractViewAdapter*
/// @param id int
///
void k_abstractviewadapter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractViewAdapter*
/// @param id enum Qt__TimerId
///
void k_abstractviewadapter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KAbstractViewAdapter*
///
libqt_list /* of QObject* */ k_abstractviewadapter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KAbstractViewAdapter*
/// @param parent QObject*
///
void k_abstractviewadapter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAbstractViewAdapter*
/// @param filterObj QObject*
///
void k_abstractviewadapter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAbstractViewAdapter*
/// @param obj QObject*
///
void k_abstractviewadapter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractViewAdapter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_abstractviewadapter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_abstractviewadapter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_abstractviewadapter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAbstractViewAdapter*
///
void k_abstractviewadapter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAbstractViewAdapter*
///
void k_abstractviewadapter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAbstractViewAdapter*
/// @param name const char*
/// @param value QVariant*
///
bool k_abstractviewadapter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAbstractViewAdapter*
/// @param name const char*
///
QVariant* k_abstractviewadapter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KAbstractViewAdapter*
///
const char** k_abstractviewadapter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractViewAdapter*
///
QBindingStorage* k_abstractviewadapter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractViewAdapter*
///
const QBindingStorage* k_abstractviewadapter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractViewAdapter*
///
void k_abstractviewadapter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self)
///
void k_abstractviewadapter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KAbstractViewAdapter*
///
QObject* k_abstractviewadapter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAbstractViewAdapter*
/// @param classname const char*
///
bool k_abstractviewadapter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAbstractViewAdapter*
///
void k_abstractviewadapter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_abstractviewadapter_tr2(const char* s, const char* c);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_abstractviewadapter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractViewAdapter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_abstractviewadapter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractViewAdapter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_abstractviewadapter_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_abstractviewadapter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractViewAdapter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_abstractviewadapter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractViewAdapter*
/// @param param1 QObject*
///
void k_abstractviewadapter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, QObject* param1)
///
void k_abstractviewadapter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_abstractviewadapter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_abstractviewadapter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback int32_t func(KAbstractViewAdapter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_abstractviewadapter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QEvent*
///
bool k_abstractviewadapter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QEvent*
///
bool k_abstractviewadapter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback bool func(KAbstractViewAdapter* self, QEvent* event)
///
void k_abstractviewadapter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_abstractviewadapter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_abstractviewadapter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback bool func(KAbstractViewAdapter* self, QObject* watched, QEvent* event)
///
void k_abstractviewadapter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QTimerEvent*
///
void k_abstractviewadapter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QTimerEvent*
///
void k_abstractviewadapter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, QTimerEvent* event)
///
void k_abstractviewadapter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QChildEvent*
///
void k_abstractviewadapter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QChildEvent*
///
void k_abstractviewadapter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, QChildEvent* event)
///
void k_abstractviewadapter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QEvent*
///
void k_abstractviewadapter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param event QEvent*
///
void k_abstractviewadapter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, QEvent* event)
///
void k_abstractviewadapter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal QMetaMethod*
///
void k_abstractviewadapter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal QMetaMethod*
///
void k_abstractviewadapter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, QMetaMethod* signal)
///
void k_abstractviewadapter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal QMetaMethod*
///
void k_abstractviewadapter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal QMetaMethod*
///
void k_abstractviewadapter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, QMetaMethod* signal)
///
void k_abstractviewadapter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
///
QObject* k_abstractviewadapter_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
///
QObject* k_abstractviewadapter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback QObject* func()
///
void k_abstractviewadapter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
///
int32_t k_abstractviewadapter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
///
int32_t k_abstractviewadapter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback int32_t func()
///
void k_abstractviewadapter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal const char*
///
int32_t k_abstractviewadapter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal const char*
///
int32_t k_abstractviewadapter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback int32_t func(KAbstractViewAdapter* self, const char* signal)
///
void k_abstractviewadapter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal QMetaMethod*
///
bool k_abstractviewadapter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param signal QMetaMethod*
///
bool k_abstractviewadapter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractViewAdapter*
/// @param callback bool func(KAbstractViewAdapter* self, QMetaMethod* signal)
///
void k_abstractviewadapter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAbstractViewAdapter*
/// @param callback void func(KAbstractViewAdapter* self, const char* objectName)
///
void k_abstractviewadapter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#dtor.KAbstractViewAdapter)
///
/// Delete this object from C++ memory.
///
/// @param self KAbstractViewAdapter*
///
void k_abstractviewadapter_delete(void* self);

/// [Upstream resources](https://api.kde.org/kabstractviewadapter.html#public-types)

typedef enum {
    KABSTRACTVIEWADAPTER_SIGNAL_SCROLLBARVALUECHANGED = 0,
    KABSTRACTVIEWADAPTER_SIGNAL_ICONSIZECHANGED = 1
} KAbstractViewAdapter__Signal;

#endif
