#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDRAGWIDGETDECORATOR_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDRAGWIDGETDECORATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html)

/// k_dragwidgetdecoratorbase_new constructs a new KDragWidgetDecoratorBase object.
///
/// @param parent QWidget*
///
KDragWidgetDecoratorBase* k_dragwidgetdecoratorbase_new(void* parent);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html)

/// k_dragwidgetdecoratorbase_new2 constructs a new KDragWidgetDecoratorBase object.
///
KDragWidgetDecoratorBase* k_dragwidgetdecoratorbase_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDragWidgetDecoratorBase*
///
const QMetaObject* k_dragwidgetdecoratorbase_meta_object(void* self);

/// @param self KDragWidgetDecoratorBase*
/// @param param1 const char*
///
void* k_dragwidgetdecoratorbase_metacast(void* self, const char* param1);

/// @param self KDragWidgetDecoratorBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dragwidgetdecoratorbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback int32_t func(KDragWidgetDecoratorBase* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_dragwidgetdecoratorbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDragWidgetDecoratorBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dragwidgetdecoratorbase_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_dragwidgetdecoratorbase_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#setDragEnabled)
///
/// @param self KDragWidgetDecoratorBase*
/// @param enable bool
///
void k_dragwidgetdecoratorbase_set_drag_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#isDragEnabled)
///
/// @param self KDragWidgetDecoratorBase*
///
bool k_dragwidgetdecoratorbase_is_drag_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#decoratedWidget)
///
/// @param self KDragWidgetDecoratorBase*
///
QWidget* k_dragwidgetdecoratorbase_decorated_widget(void* self);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#decoratedWidget)
///
/// Allows for overriding the related default method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback QWidget* func()
///
void k_dragwidgetdecoratorbase_on_decorated_widget(void* self, QWidget* (*callback)());

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#decoratedWidget)
///
/// Base class method implementation
///
/// @param self KDragWidgetDecoratorBase*
///
QWidget* k_dragwidgetdecoratorbase_qbase_decorated_widget(void* self);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#dragObject)
///
/// @param self KDragWidgetDecoratorBase*
///
QDrag* k_dragwidgetdecoratorbase_drag_object(void* self);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#dragObject)
///
/// Allows for overriding the related default method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback QDrag* func()
///
void k_dragwidgetdecoratorbase_on_drag_object(void* self, QDrag* (*callback)());

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#dragObject)
///
/// Base class method implementation
///
/// @param self KDragWidgetDecoratorBase*
///
QDrag* k_dragwidgetdecoratorbase_qbase_drag_object(void* self);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#eventFilter)
///
/// @param self KDragWidgetDecoratorBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dragwidgetdecoratorbase_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback bool func(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event)
///
void k_dragwidgetdecoratorbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KDragWidgetDecoratorBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dragwidgetdecoratorbase_qbase_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#startDrag)
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_start_drag(void* self);

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#startDrag)
///
/// Allows for overriding the related default method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func()
///
void k_dragwidgetdecoratorbase_on_start_drag(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#startDrag)
///
/// Base class method implementation
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_qbase_start_drag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_dragwidgetdecoratorbase_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_dragwidgetdecoratorbase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDragWidgetDecoratorBase*
///
const char* k_dragwidgetdecoratorbase_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDragWidgetDecoratorBase*
/// @param name char*
///
void k_dragwidgetdecoratorbase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDragWidgetDecoratorBase*
///
bool k_dragwidgetdecoratorbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDragWidgetDecoratorBase*
///
bool k_dragwidgetdecoratorbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDragWidgetDecoratorBase*
///
bool k_dragwidgetdecoratorbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDragWidgetDecoratorBase*
///
bool k_dragwidgetdecoratorbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDragWidgetDecoratorBase*
/// @param b bool
///
bool k_dragwidgetdecoratorbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDragWidgetDecoratorBase*
///
QThread* k_dragwidgetdecoratorbase_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDragWidgetDecoratorBase*
/// @param thread QThread*
///
bool k_dragwidgetdecoratorbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDragWidgetDecoratorBase*
/// @param interval int
///
int32_t k_dragwidgetdecoratorbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDragWidgetDecoratorBase*
/// @param id int
///
void k_dragwidgetdecoratorbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDragWidgetDecoratorBase*
/// @param id enum Qt__TimerId
///
void k_dragwidgetdecoratorbase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDragWidgetDecoratorBase*
///
libqt_list /* of QObject* */ k_dragwidgetdecoratorbase_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDragWidgetDecoratorBase*
/// @param parent QObject*
///
void k_dragwidgetdecoratorbase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDragWidgetDecoratorBase*
/// @param filterObj QObject*
///
void k_dragwidgetdecoratorbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDragWidgetDecoratorBase*
/// @param obj QObject*
///
void k_dragwidgetdecoratorbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_dragwidgetdecoratorbase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDragWidgetDecoratorBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_dragwidgetdecoratorbase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_dragwidgetdecoratorbase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_dragwidgetdecoratorbase_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDragWidgetDecoratorBase*
/// @param name const char*
/// @param value QVariant*
///
bool k_dragwidgetdecoratorbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDragWidgetDecoratorBase*
/// @param name const char*
///
QVariant* k_dragwidgetdecoratorbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDragWidgetDecoratorBase*
///
const char** k_dragwidgetdecoratorbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDragWidgetDecoratorBase*
///
QBindingStorage* k_dragwidgetdecoratorbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDragWidgetDecoratorBase*
///
const QBindingStorage* k_dragwidgetdecoratorbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self)
///
void k_dragwidgetdecoratorbase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDragWidgetDecoratorBase*
///
QObject* k_dragwidgetdecoratorbase_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDragWidgetDecoratorBase*
/// @param classname const char*
///
bool k_dragwidgetdecoratorbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDragWidgetDecoratorBase*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_dragwidgetdecoratorbase_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDragWidgetDecoratorBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_dragwidgetdecoratorbase_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_dragwidgetdecoratorbase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDragWidgetDecoratorBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_dragwidgetdecoratorbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDragWidgetDecoratorBase*
/// @param param1 QObject*
///
void k_dragwidgetdecoratorbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, QObject* param1)
///
void k_dragwidgetdecoratorbase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QEvent*
///
bool k_dragwidgetdecoratorbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QEvent*
///
bool k_dragwidgetdecoratorbase_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback bool func(KDragWidgetDecoratorBase* self, QEvent* event)
///
void k_dragwidgetdecoratorbase_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QTimerEvent*
///
void k_dragwidgetdecoratorbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QTimerEvent*
///
void k_dragwidgetdecoratorbase_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, QTimerEvent* event)
///
void k_dragwidgetdecoratorbase_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QChildEvent*
///
void k_dragwidgetdecoratorbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QChildEvent*
///
void k_dragwidgetdecoratorbase_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, QChildEvent* event)
///
void k_dragwidgetdecoratorbase_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QEvent*
///
void k_dragwidgetdecoratorbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param event QEvent*
///
void k_dragwidgetdecoratorbase_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, QEvent* event)
///
void k_dragwidgetdecoratorbase_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal QMetaMethod*
///
void k_dragwidgetdecoratorbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal QMetaMethod*
///
void k_dragwidgetdecoratorbase_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, QMetaMethod* signal)
///
void k_dragwidgetdecoratorbase_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal QMetaMethod*
///
void k_dragwidgetdecoratorbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal QMetaMethod*
///
void k_dragwidgetdecoratorbase_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, QMetaMethod* signal)
///
void k_dragwidgetdecoratorbase_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
///
QObject* k_dragwidgetdecoratorbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
///
QObject* k_dragwidgetdecoratorbase_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback QObject* func()
///
void k_dragwidgetdecoratorbase_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
///
int32_t k_dragwidgetdecoratorbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
///
int32_t k_dragwidgetdecoratorbase_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback int32_t func()
///
void k_dragwidgetdecoratorbase_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal const char*
///
int32_t k_dragwidgetdecoratorbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal const char*
///
int32_t k_dragwidgetdecoratorbase_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback int32_t func(KDragWidgetDecoratorBase* self, const char* signal)
///
void k_dragwidgetdecoratorbase_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal QMetaMethod*
///
bool k_dragwidgetdecoratorbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param signal QMetaMethod*
///
bool k_dragwidgetdecoratorbase_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback bool func(KDragWidgetDecoratorBase* self, QMetaMethod* signal)
///
void k_dragwidgetdecoratorbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDragWidgetDecoratorBase*
/// @param callback void func(KDragWidgetDecoratorBase* self, const char* objectName)
///
void k_dragwidgetdecoratorbase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdragwidgetdecoratorbase.html#dtor.KDragWidgetDecoratorBase)
///
/// Delete this object from C++ memory.
///
/// @param self KDragWidgetDecoratorBase*
///
void k_dragwidgetdecoratorbase_delete(void* self);

#endif
