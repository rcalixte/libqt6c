#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBFILTER_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBFILTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__filter_new constructs a new Konsole::Filter object.
///
Konsole__Filter* k_onsole__filter_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_process(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter*
/// @param callback void func()
///
void k_onsole__filter_on_process(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_qbase_process(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_reset(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter*
/// @param line int
/// @param column int
///
Konsole__Filter__HotSpot* k_onsole__filter_hot_spot_at(void* self, int line, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter*
/// @param param1 Konsole__Filter__HotSpot*
///
void k_onsole__filter_add_hot_spot(void* self, void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, Konsole__Filter__HotSpot* param1)
///
void k_onsole__filter_on_add_hot_spot(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter*
/// @param param1 Konsole__Filter__HotSpot*
///
void k_onsole__filter_qbase_add_hot_spot(void* self, void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__Filter*
///
const char* k_onsole__filter_buffer(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter*
/// @param callback const char* func()
///
void k_onsole__filter_on_buffer(void* self, const char* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter*
///
const char* k_onsole__filter_qbase_buffer(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter*
/// @param position int
/// @param startLine int*
/// @param startColumn int*
///
void k_onsole__filter_get_line_column(void* self, int position, int* startLine, int* startColumn);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, int position, int* startLine, int* startColumn)
///
void k_onsole__filter_on_get_line_column(void* self, void (*callback)(void*, int, int*, int*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter*
/// @param position int
/// @param startLine int*
/// @param startColumn int*
///
void k_onsole__filter_qbase_get_line_column(void* self, int position, int* startLine, int* startColumn);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Konsole__Filter*
///
const QMetaObject* k_onsole__filter_meta_object(void* self);

/// Inherited from QObject
///
/// @param self Konsole__Filter*
/// @param param1 const char*
///
void* k_onsole__filter_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_onsole__filter_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__Filter*
///
const char* k_onsole__filter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Konsole__Filter*
/// @param name char*
///
void k_onsole__filter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Konsole__Filter*
///
bool k_onsole__filter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Konsole__Filter*
///
bool k_onsole__filter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Konsole__Filter*
///
bool k_onsole__filter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Konsole__Filter*
///
bool k_onsole__filter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Konsole__Filter*
/// @param b bool
///
bool k_onsole__filter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Konsole__Filter*
///
QThread* k_onsole__filter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__Filter*
/// @param thread QThread*
///
bool k_onsole__filter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__Filter*
/// @param interval int
///
int32_t k_onsole__filter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__Filter*
/// @param id int
///
void k_onsole__filter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__Filter*
/// @param id enum Qt__TimerId
///
void k_onsole__filter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Konsole__Filter*
///
libqt_list /* of QObject* */ k_onsole__filter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Konsole__Filter*
/// @param parent QObject*
///
void k_onsole__filter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Konsole__Filter*
/// @param filterObj QObject*
///
void k_onsole__filter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Konsole__Filter*
/// @param obj QObject*
///
void k_onsole__filter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_onsole__filter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__Filter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_onsole__filter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_onsole__filter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_onsole__filter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Konsole__Filter*
/// @param name const char*
/// @param value QVariant*
///
bool k_onsole__filter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Konsole__Filter*
/// @param name const char*
///
QVariant* k_onsole__filter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__Filter*
///
const char** k_onsole__filter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__Filter*
///
QBindingStorage* k_onsole__filter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__Filter*
///
const QBindingStorage* k_onsole__filter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self)
///
void k_onsole__filter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Konsole__Filter*
///
QObject* k_onsole__filter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Konsole__Filter*
/// @param classname const char*
///
bool k_onsole__filter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_onsole__filter_tr2(const char* s, const char* c);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_onsole__filter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__Filter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_onsole__filter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__Filter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_onsole__filter_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_onsole__filter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__Filter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_onsole__filter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Filter*
/// @param param1 QObject*
///
void k_onsole__filter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, QObject* param1)
///
void k_onsole__filter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__filter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__filter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback int32_t func(Konsole__Filter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_onsole__filter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QEvent*
///
bool k_onsole__filter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QEvent*
///
bool k_onsole__filter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback bool func(Konsole__Filter* self, QEvent* event)
///
void k_onsole__filter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__filter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__filter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback bool func(Konsole__Filter* self, QObject* watched, QEvent* event)
///
void k_onsole__filter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QTimerEvent*
///
void k_onsole__filter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QTimerEvent*
///
void k_onsole__filter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, QTimerEvent* event)
///
void k_onsole__filter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QChildEvent*
///
void k_onsole__filter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QChildEvent*
///
void k_onsole__filter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, QChildEvent* event)
///
void k_onsole__filter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QEvent*
///
void k_onsole__filter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param event QEvent*
///
void k_onsole__filter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, QEvent* event)
///
void k_onsole__filter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal QMetaMethod*
///
void k_onsole__filter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal QMetaMethod*
///
void k_onsole__filter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, QMetaMethod* signal)
///
void k_onsole__filter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal QMetaMethod*
///
void k_onsole__filter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal QMetaMethod*
///
void k_onsole__filter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, QMetaMethod* signal)
///
void k_onsole__filter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
///
QObject* k_onsole__filter_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
///
QObject* k_onsole__filter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback QObject* func()
///
void k_onsole__filter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
///
int32_t k_onsole__filter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
///
int32_t k_onsole__filter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback int32_t func()
///
void k_onsole__filter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal const char*
///
int32_t k_onsole__filter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal const char*
///
int32_t k_onsole__filter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback int32_t func(Konsole__Filter* self, const char* signal)
///
void k_onsole__filter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal QMetaMethod*
///
bool k_onsole__filter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param signal QMetaMethod*
///
bool k_onsole__filter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Filter*
/// @param callback bool func(Konsole__Filter* self, QMetaMethod* signal)
///
void k_onsole__filter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Konsole__Filter*
/// @param callback void func(Konsole__Filter* self, const char* objectName)
///
void k_onsole__filter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Konsole__Filter*
///
void k_onsole__filter_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__regexpfilter_new constructs a new Konsole::RegExpFilter object.
///
Konsole__RegExpFilter* k_onsole__regexpfilter_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter*
/// @param text QRegularExpression*
///
void k_onsole__regexpfilter_set_reg_exp(void* self, void* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter*
///
QRegularExpression* k_onsole__regexpfilter_reg_exp(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_process(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func()
///
void k_onsole__regexpfilter_on_process(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_qbase_process(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter*
/// @param startLine int
/// @param startColumn int
/// @param endLine int
/// @param endColumn int
///
Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter_new_hot_spot(void* self, int startLine, int startColumn, int endLine, int endColumn);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__RegExpFilter*
/// @param callback Konsole__RegExpFilter__HotSpot* func(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn)
///
void k_onsole__regexpfilter_on_new_hot_spot(void* self, Konsole__RegExpFilter__HotSpot* (*callback)(void*, int, int, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__RegExpFilter*
/// @param startLine int
/// @param startColumn int
/// @param endLine int
/// @param endColumn int
///
Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter_qbase_new_hot_spot(void* self, int startLine, int startColumn, int endLine, int endColumn);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_reset(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter*
/// @param line int
/// @param column int
///
Konsole__Filter__HotSpot* k_onsole__regexpfilter_hot_spot_at(void* self, int line, int column);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Konsole__RegExpFilter*
///
const QMetaObject* k_onsole__regexpfilter_meta_object(void* self);

/// Inherited from QObject
///
/// @param self Konsole__RegExpFilter*
/// @param param1 const char*
///
void* k_onsole__regexpfilter_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_onsole__regexpfilter_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__RegExpFilter*
///
const char* k_onsole__regexpfilter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Konsole__RegExpFilter*
/// @param name char*
///
void k_onsole__regexpfilter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Konsole__RegExpFilter*
///
bool k_onsole__regexpfilter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Konsole__RegExpFilter*
///
bool k_onsole__regexpfilter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Konsole__RegExpFilter*
///
bool k_onsole__regexpfilter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Konsole__RegExpFilter*
///
bool k_onsole__regexpfilter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Konsole__RegExpFilter*
/// @param b bool
///
bool k_onsole__regexpfilter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Konsole__RegExpFilter*
///
QThread* k_onsole__regexpfilter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__RegExpFilter*
/// @param thread QThread*
///
bool k_onsole__regexpfilter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__RegExpFilter*
/// @param interval int
///
int32_t k_onsole__regexpfilter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__RegExpFilter*
/// @param id int
///
void k_onsole__regexpfilter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__RegExpFilter*
/// @param id enum Qt__TimerId
///
void k_onsole__regexpfilter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Konsole__RegExpFilter*
///
libqt_list /* of QObject* */ k_onsole__regexpfilter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Konsole__RegExpFilter*
/// @param parent QObject*
///
void k_onsole__regexpfilter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Konsole__RegExpFilter*
/// @param filterObj QObject*
///
void k_onsole__regexpfilter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Konsole__RegExpFilter*
/// @param obj QObject*
///
void k_onsole__regexpfilter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_onsole__regexpfilter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__RegExpFilter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_onsole__regexpfilter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_onsole__regexpfilter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_onsole__regexpfilter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Konsole__RegExpFilter*
/// @param name const char*
/// @param value QVariant*
///
bool k_onsole__regexpfilter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Konsole__RegExpFilter*
/// @param name const char*
///
QVariant* k_onsole__regexpfilter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__RegExpFilter*
///
const char** k_onsole__regexpfilter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__RegExpFilter*
///
QBindingStorage* k_onsole__regexpfilter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__RegExpFilter*
///
const QBindingStorage* k_onsole__regexpfilter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self)
///
void k_onsole__regexpfilter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Konsole__RegExpFilter*
///
QObject* k_onsole__regexpfilter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Konsole__RegExpFilter*
/// @param classname const char*
///
bool k_onsole__regexpfilter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_onsole__regexpfilter_tr2(const char* s, const char* c);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_onsole__regexpfilter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__RegExpFilter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_onsole__regexpfilter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__RegExpFilter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_onsole__regexpfilter_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_onsole__regexpfilter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__RegExpFilter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_onsole__regexpfilter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__RegExpFilter*
/// @param param1 QObject*
///
void k_onsole__regexpfilter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, QObject* param1)
///
void k_onsole__regexpfilter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__regexpfilter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__regexpfilter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback int32_t func(Konsole__RegExpFilter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_onsole__regexpfilter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QEvent*
///
bool k_onsole__regexpfilter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QEvent*
///
bool k_onsole__regexpfilter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback bool func(Konsole__RegExpFilter* self, QEvent* event)
///
void k_onsole__regexpfilter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__regexpfilter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__regexpfilter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback bool func(Konsole__RegExpFilter* self, QObject* watched, QEvent* event)
///
void k_onsole__regexpfilter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QTimerEvent*
///
void k_onsole__regexpfilter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QTimerEvent*
///
void k_onsole__regexpfilter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, QTimerEvent* event)
///
void k_onsole__regexpfilter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QChildEvent*
///
void k_onsole__regexpfilter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QChildEvent*
///
void k_onsole__regexpfilter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, QChildEvent* event)
///
void k_onsole__regexpfilter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QEvent*
///
void k_onsole__regexpfilter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param event QEvent*
///
void k_onsole__regexpfilter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, QEvent* event)
///
void k_onsole__regexpfilter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal QMetaMethod*
///
void k_onsole__regexpfilter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal QMetaMethod*
///
void k_onsole__regexpfilter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, QMetaMethod* signal)
///
void k_onsole__regexpfilter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal QMetaMethod*
///
void k_onsole__regexpfilter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal QMetaMethod*
///
void k_onsole__regexpfilter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, QMetaMethod* signal)
///
void k_onsole__regexpfilter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param param1 Konsole__Filter__HotSpot*
///
void k_onsole__regexpfilter_add_hot_spot(void* self, void* param1);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param param1 Konsole__Filter__HotSpot*
///
void k_onsole__regexpfilter_qbase_add_hot_spot(void* self, void* param1);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, Konsole__Filter__HotSpot* param1)
///
void k_onsole__regexpfilter_on_add_hot_spot(void* self, void (*callback)(void*, void*));

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
///
const char* k_onsole__regexpfilter_buffer(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
///
const char* k_onsole__regexpfilter_qbase_buffer(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback const char* func()
///
void k_onsole__regexpfilter_on_buffer(void* self, const char* (*callback)());

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param position int
/// @param startLine int*
/// @param startColumn int*
///
void k_onsole__regexpfilter_get_line_column(void* self, int position, int* startLine, int* startColumn);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param position int
/// @param startLine int*
/// @param startColumn int*
///
void k_onsole__regexpfilter_qbase_get_line_column(void* self, int position, int* startLine, int* startColumn);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, int position, int* startLine, int* startColumn)
///
void k_onsole__regexpfilter_on_get_line_column(void* self, void (*callback)(void*, int, int*, int*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
///
QObject* k_onsole__regexpfilter_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
///
QObject* k_onsole__regexpfilter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback QObject* func()
///
void k_onsole__regexpfilter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
///
int32_t k_onsole__regexpfilter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
///
int32_t k_onsole__regexpfilter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback int32_t func()
///
void k_onsole__regexpfilter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal const char*
///
int32_t k_onsole__regexpfilter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal const char*
///
int32_t k_onsole__regexpfilter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback int32_t func(Konsole__RegExpFilter* self, const char* signal)
///
void k_onsole__regexpfilter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal QMetaMethod*
///
bool k_onsole__regexpfilter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param signal QMetaMethod*
///
bool k_onsole__regexpfilter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter*
/// @param callback bool func(Konsole__RegExpFilter* self, QMetaMethod* signal)
///
void k_onsole__regexpfilter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Konsole__RegExpFilter*
/// @param callback void func(Konsole__RegExpFilter* self, const char* objectName)
///
void k_onsole__regexpfilter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Konsole__RegExpFilter*
///
void k_onsole__regexpfilter_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__urlfilter_new constructs a new Konsole::UrlFilter object.
///
Konsole__UrlFilter* k_onsole__urlfilter_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
///
const QMetaObject* k_onsole__urlfilter_meta_object(void* self);

/// @param self Konsole__UrlFilter*
/// @param param1 const char*
///
void* k_onsole__urlfilter_metacast(void* self, const char* param1);

/// @param self Konsole__UrlFilter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__urlfilter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Konsole__UrlFilter*
/// @param callback int32_t func(Konsole__UrlFilter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_onsole__urlfilter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Konsole__UrlFilter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__urlfilter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_onsole__urlfilter_tr(const char* s);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
/// @param param1 int
/// @param param2 int
/// @param param3 int
/// @param param4 int
///
Konsole__RegExpFilter__HotSpot* k_onsole__urlfilter_new_hot_spot(void* self, int param1, int param2, int param3, int param4);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__UrlFilter*
/// @param callback Konsole__RegExpFilter__HotSpot* func(Konsole__UrlFilter* self, int param1, int param2, int param3, int param4)
///
void k_onsole__urlfilter_on_new_hot_spot(void* self, Konsole__RegExpFilter__HotSpot* (*callback)(void*, int, int, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__UrlFilter*
/// @param param1 int
/// @param param2 int
/// @param param3 int
/// @param param4 int
///
Konsole__RegExpFilter__HotSpot* k_onsole__urlfilter_qbase_new_hot_spot(void* self, int param1, int param2, int param3, int param4);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
/// @param url QUrl*
/// @param fromContextMenu bool
///
void k_onsole__urlfilter_activated(void* self, void* url, bool fromContextMenu);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QUrl* url, bool fromContextMenu)
///
void k_onsole__urlfilter_on_activated(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_onsole__urlfilter_tr2(const char* s, const char* c);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_onsole__urlfilter_tr3(const char* s, const char* c, int n);

/// Inherited from Konsole::RegExpFilter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
/// @param text QRegularExpression*
///
void k_onsole__urlfilter_set_reg_exp(void* self, void* text);

/// Inherited from Konsole::RegExpFilter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
///
QRegularExpression* k_onsole__urlfilter_reg_exp(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_reset(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter*
/// @param line int
/// @param column int
///
Konsole__Filter__HotSpot* k_onsole__urlfilter_hot_spot_at(void* self, int line, int column);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__UrlFilter*
///
const char* k_onsole__urlfilter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Konsole__UrlFilter*
/// @param name char*
///
void k_onsole__urlfilter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Konsole__UrlFilter*
///
bool k_onsole__urlfilter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Konsole__UrlFilter*
///
bool k_onsole__urlfilter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Konsole__UrlFilter*
///
bool k_onsole__urlfilter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Konsole__UrlFilter*
///
bool k_onsole__urlfilter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Konsole__UrlFilter*
/// @param b bool
///
bool k_onsole__urlfilter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Konsole__UrlFilter*
///
QThread* k_onsole__urlfilter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__UrlFilter*
/// @param thread QThread*
///
bool k_onsole__urlfilter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__UrlFilter*
/// @param interval int
///
int32_t k_onsole__urlfilter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__UrlFilter*
/// @param id int
///
void k_onsole__urlfilter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__UrlFilter*
/// @param id enum Qt__TimerId
///
void k_onsole__urlfilter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Konsole__UrlFilter*
///
libqt_list /* of QObject* */ k_onsole__urlfilter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Konsole__UrlFilter*
/// @param parent QObject*
///
void k_onsole__urlfilter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Konsole__UrlFilter*
/// @param filterObj QObject*
///
void k_onsole__urlfilter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Konsole__UrlFilter*
/// @param obj QObject*
///
void k_onsole__urlfilter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_onsole__urlfilter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__UrlFilter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_onsole__urlfilter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_onsole__urlfilter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_onsole__urlfilter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Konsole__UrlFilter*
/// @param name const char*
/// @param value QVariant*
///
bool k_onsole__urlfilter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Konsole__UrlFilter*
/// @param name const char*
///
QVariant* k_onsole__urlfilter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__UrlFilter*
///
const char** k_onsole__urlfilter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__UrlFilter*
///
QBindingStorage* k_onsole__urlfilter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__UrlFilter*
///
const QBindingStorage* k_onsole__urlfilter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self)
///
void k_onsole__urlfilter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Konsole__UrlFilter*
///
QObject* k_onsole__urlfilter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Konsole__UrlFilter*
/// @param classname const char*
///
bool k_onsole__urlfilter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__UrlFilter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_onsole__urlfilter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__UrlFilter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_onsole__urlfilter_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_onsole__urlfilter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__UrlFilter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_onsole__urlfilter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__UrlFilter*
/// @param param1 QObject*
///
void k_onsole__urlfilter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QObject* param1)
///
void k_onsole__urlfilter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from Konsole::RegExpFilter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_process(void* self);

/// Inherited from Konsole::RegExpFilter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_qbase_process(void* self);

/// Inherited from Konsole::RegExpFilter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func()
///
void k_onsole__urlfilter_on_process(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QEvent*
///
bool k_onsole__urlfilter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QEvent*
///
bool k_onsole__urlfilter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback bool func(Konsole__UrlFilter* self, QEvent* event)
///
void k_onsole__urlfilter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__urlfilter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__urlfilter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback bool func(Konsole__UrlFilter* self, QObject* watched, QEvent* event)
///
void k_onsole__urlfilter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QTimerEvent*
///
void k_onsole__urlfilter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QTimerEvent*
///
void k_onsole__urlfilter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QTimerEvent* event)
///
void k_onsole__urlfilter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QChildEvent*
///
void k_onsole__urlfilter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QChildEvent*
///
void k_onsole__urlfilter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QChildEvent* event)
///
void k_onsole__urlfilter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QEvent*
///
void k_onsole__urlfilter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param event QEvent*
///
void k_onsole__urlfilter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QEvent* event)
///
void k_onsole__urlfilter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal QMetaMethod*
///
void k_onsole__urlfilter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal QMetaMethod*
///
void k_onsole__urlfilter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QMetaMethod* signal)
///
void k_onsole__urlfilter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal QMetaMethod*
///
void k_onsole__urlfilter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal QMetaMethod*
///
void k_onsole__urlfilter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, QMetaMethod* signal)
///
void k_onsole__urlfilter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param param1 Konsole__Filter__HotSpot*
///
void k_onsole__urlfilter_add_hot_spot(void* self, void* param1);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param param1 Konsole__Filter__HotSpot*
///
void k_onsole__urlfilter_qbase_add_hot_spot(void* self, void* param1);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, Konsole__Filter__HotSpot* param1)
///
void k_onsole__urlfilter_on_add_hot_spot(void* self, void (*callback)(void*, void*));

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
const char* k_onsole__urlfilter_buffer(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
const char* k_onsole__urlfilter_qbase_buffer(void* self);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback const char* func()
///
void k_onsole__urlfilter_on_buffer(void* self, const char* (*callback)());

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param position int
/// @param startLine int*
/// @param startColumn int*
///
void k_onsole__urlfilter_get_line_column(void* self, int position, int* startLine, int* startColumn);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param position int
/// @param startLine int*
/// @param startColumn int*
///
void k_onsole__urlfilter_qbase_get_line_column(void* self, int position, int* startLine, int* startColumn);

/// Inherited from Konsole::Filter
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, int position, int* startLine, int* startColumn)
///
void k_onsole__urlfilter_on_get_line_column(void* self, void (*callback)(void*, int, int*, int*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
QObject* k_onsole__urlfilter_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
QObject* k_onsole__urlfilter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback QObject* func()
///
void k_onsole__urlfilter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
int32_t k_onsole__urlfilter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
///
int32_t k_onsole__urlfilter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback int32_t func()
///
void k_onsole__urlfilter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal const char*
///
int32_t k_onsole__urlfilter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal const char*
///
int32_t k_onsole__urlfilter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback int32_t func(Konsole__UrlFilter* self, const char* signal)
///
void k_onsole__urlfilter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal QMetaMethod*
///
bool k_onsole__urlfilter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param signal QMetaMethod*
///
bool k_onsole__urlfilter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter*
/// @param callback bool func(Konsole__UrlFilter* self, QMetaMethod* signal)
///
void k_onsole__urlfilter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Konsole__UrlFilter*
/// @param callback void func(Konsole__UrlFilter* self, const char* objectName)
///
void k_onsole__urlfilter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Konsole__UrlFilter*
///
void k_onsole__urlfilter_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__filterobject_new constructs a new Konsole::FilterObject object.
///
/// @param filter Konsole__Filter__HotSpot*
///
Konsole__FilterObject* k_onsole__filterobject_new(void* filter);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterObject*
///
const QMetaObject* k_onsole__filterobject_meta_object(void* self);

/// @param self Konsole__FilterObject*
/// @param param1 const char*
///
void* k_onsole__filterobject_metacast(void* self, const char* param1);

/// @param self Konsole__FilterObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__filterobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Konsole__FilterObject*
/// @param callback int32_t func(Konsole__FilterObject* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_onsole__filterobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Konsole__FilterObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__filterobject_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_onsole__filterobject_tr(const char* s);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterObject*
/// @param url QUrl*
/// @param fromContextMenu bool
///
void k_onsole__filterobject_emit_activated(void* self, void* url, bool fromContextMenu);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterObject*
///
void k_onsole__filterobject_activate(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterObject*
/// @param url QUrl*
/// @param fromContextMenu bool
///
void k_onsole__filterobject_activated(void* self, void* url, bool fromContextMenu);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QUrl* url, bool fromContextMenu)
///
void k_onsole__filterobject_on_activated(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_onsole__filterobject_tr2(const char* s, const char* c);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_onsole__filterobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__FilterObject*
///
const char* k_onsole__filterobject_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Konsole__FilterObject*
/// @param name char*
///
void k_onsole__filterobject_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Konsole__FilterObject*
///
bool k_onsole__filterobject_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Konsole__FilterObject*
///
bool k_onsole__filterobject_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Konsole__FilterObject*
///
bool k_onsole__filterobject_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Konsole__FilterObject*
///
bool k_onsole__filterobject_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Konsole__FilterObject*
/// @param b bool
///
bool k_onsole__filterobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Konsole__FilterObject*
///
QThread* k_onsole__filterobject_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__FilterObject*
/// @param thread QThread*
///
bool k_onsole__filterobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__FilterObject*
/// @param interval int
///
int32_t k_onsole__filterobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__FilterObject*
/// @param id int
///
void k_onsole__filterobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__FilterObject*
/// @param id enum Qt__TimerId
///
void k_onsole__filterobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Konsole__FilterObject*
///
libqt_list /* of QObject* */ k_onsole__filterobject_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Konsole__FilterObject*
/// @param parent QObject*
///
void k_onsole__filterobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Konsole__FilterObject*
/// @param filterObj QObject*
///
void k_onsole__filterobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Konsole__FilterObject*
/// @param obj QObject*
///
void k_onsole__filterobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_onsole__filterobject_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__FilterObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_onsole__filterobject_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_onsole__filterobject_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_onsole__filterobject_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Konsole__FilterObject*
///
void k_onsole__filterobject_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Konsole__FilterObject*
///
void k_onsole__filterobject_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Konsole__FilterObject*
/// @param name const char*
/// @param value QVariant*
///
bool k_onsole__filterobject_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Konsole__FilterObject*
/// @param name const char*
///
QVariant* k_onsole__filterobject_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__FilterObject*
///
const char** k_onsole__filterobject_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__FilterObject*
///
QBindingStorage* k_onsole__filterobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__FilterObject*
///
const QBindingStorage* k_onsole__filterobject_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__FilterObject*
///
void k_onsole__filterobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self)
///
void k_onsole__filterobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Konsole__FilterObject*
///
QObject* k_onsole__filterobject_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Konsole__FilterObject*
/// @param classname const char*
///
bool k_onsole__filterobject_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Konsole__FilterObject*
///
void k_onsole__filterobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__FilterObject*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_onsole__filterobject_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__FilterObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_onsole__filterobject_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_onsole__filterobject_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__FilterObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_onsole__filterobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__FilterObject*
/// @param param1 QObject*
///
void k_onsole__filterobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QObject* param1)
///
void k_onsole__filterobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QEvent*
///
bool k_onsole__filterobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QEvent*
///
bool k_onsole__filterobject_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback bool func(Konsole__FilterObject* self, QEvent* event)
///
void k_onsole__filterobject_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__filterobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__filterobject_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback bool func(Konsole__FilterObject* self, QObject* watched, QEvent* event)
///
void k_onsole__filterobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QTimerEvent*
///
void k_onsole__filterobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QTimerEvent*
///
void k_onsole__filterobject_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QTimerEvent* event)
///
void k_onsole__filterobject_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QChildEvent*
///
void k_onsole__filterobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QChildEvent*
///
void k_onsole__filterobject_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QChildEvent* event)
///
void k_onsole__filterobject_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QEvent*
///
void k_onsole__filterobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param event QEvent*
///
void k_onsole__filterobject_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QEvent* event)
///
void k_onsole__filterobject_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal QMetaMethod*
///
void k_onsole__filterobject_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal QMetaMethod*
///
void k_onsole__filterobject_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QMetaMethod* signal)
///
void k_onsole__filterobject_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal QMetaMethod*
///
void k_onsole__filterobject_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal QMetaMethod*
///
void k_onsole__filterobject_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, QMetaMethod* signal)
///
void k_onsole__filterobject_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
///
QObject* k_onsole__filterobject_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
///
QObject* k_onsole__filterobject_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback QObject* func()
///
void k_onsole__filterobject_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
///
int32_t k_onsole__filterobject_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
///
int32_t k_onsole__filterobject_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback int32_t func()
///
void k_onsole__filterobject_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal const char*
///
int32_t k_onsole__filterobject_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal const char*
///
int32_t k_onsole__filterobject_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback int32_t func(Konsole__FilterObject* self, const char* signal)
///
void k_onsole__filterobject_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal QMetaMethod*
///
bool k_onsole__filterobject_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param signal QMetaMethod*
///
bool k_onsole__filterobject_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__FilterObject*
/// @param callback bool func(Konsole__FilterObject* self, QMetaMethod* signal)
///
void k_onsole__filterobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Konsole__FilterObject*
/// @param callback void func(Konsole__FilterObject* self, const char* objectName)
///
void k_onsole__filterobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Konsole__FilterObject*
///
void k_onsole__filterobject_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__filterchain_new constructs a new Konsole::FilterChain object.
///
/// @param param1 Konsole__FilterChain*
///
Konsole__FilterChain* k_onsole__filterchain_new(void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
/// @param filter Konsole__Filter*
///
void k_onsole__filterchain_add_filter(void* self, void* filter);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
/// @param filter Konsole__Filter*
///
void k_onsole__filterchain_remove_filter(void* self, void* filter);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
/// @param filter Konsole__Filter*
///
bool k_onsole__filterchain_contains_filter(void* self, void* filter);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
///
void k_onsole__filterchain_clear(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
///
void k_onsole__filterchain_reset(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
///
void k_onsole__filterchain_process(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
/// @param line int
/// @param column int
///
Konsole__Filter__HotSpot* k_onsole__filterchain_hot_spot_at(void* self, int line, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
///
libqt_list /* of Konsole__Filter__HotSpot* */ k_onsole__filterchain_hot_spots(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__FilterChain*
/// @param param1 Konsole__FilterChain*
///
void k_onsole__filterchain_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self Konsole__FilterChain*
///
void k_onsole__filterchain_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__terminalimagefilterchain_new constructs a new Konsole::TerminalImageFilterChain object.
///
Konsole__TerminalImageFilterChain* k_onsole__terminalimagefilterchain_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__terminalimagefilterchain_new2 constructs a new Konsole::TerminalImageFilterChain object.
///
/// @param param1 Konsole__TerminalImageFilterChain*
///
Konsole__TerminalImageFilterChain* k_onsole__terminalimagefilterchain_new2(void* param1);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
/// @param filter Konsole__Filter*
///
void k_onsole__terminalimagefilterchain_add_filter(void* self, void* filter);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
/// @param filter Konsole__Filter*
///
void k_onsole__terminalimagefilterchain_remove_filter(void* self, void* filter);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
/// @param filter Konsole__Filter*
///
bool k_onsole__terminalimagefilterchain_contains_filter(void* self, void* filter);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
///
void k_onsole__terminalimagefilterchain_clear(void* self);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
///
void k_onsole__terminalimagefilterchain_reset(void* self);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
///
void k_onsole__terminalimagefilterchain_process(void* self);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
/// @param line int
/// @param column int
///
Konsole__Filter__HotSpot* k_onsole__terminalimagefilterchain_hot_spot_at(void* self, int line, int column);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
///
libqt_list /* of Konsole__Filter__HotSpot* */ k_onsole__terminalimagefilterchain_hot_spots(void* self);

/// Inherited from Konsole::FilterChain
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__TerminalImageFilterChain*
/// @param param1 Konsole__FilterChain*
///
void k_onsole__terminalimagefilterchain_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self Konsole__TerminalImageFilterChain*
///
void k_onsole__terminalimagefilterchain_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__filter__hotspot_new constructs a new Konsole::Filter::HotSpot object.
///
/// @param startLine int
/// @param startColumn int
/// @param endLine int
/// @param endColumn int
///
Konsole__Filter__HotSpot* k_onsole__filter__hotspot_new(int startLine, int startColumn, int endLine, int endColumn);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__filter__hotspot_new2 constructs a new Konsole::Filter::HotSpot object.
///
/// @param param1 Konsole__Filter__HotSpot*
///
Konsole__Filter__HotSpot* k_onsole__filter__hotspot_new2(void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
///
int32_t k_onsole__filter__hotspot_start_line(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
///
int32_t k_onsole__filter__hotspot_end_line(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
///
int32_t k_onsole__filter__hotspot_start_column(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
///
int32_t k_onsole__filter__hotspot_end_column(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
///
/// @return enum Konsole__Filter__HotSpot__Type
///
int32_t k_onsole__filter__hotspot_type(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
/// @param action const char*
///
void k_onsole__filter__hotspot_activate(void* self, const char* action);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter__HotSpot*
/// @param callback void func(Konsole__Filter__HotSpot* self, const char* action)
///
void k_onsole__filter__hotspot_on_activate(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter__HotSpot*
/// @param action const char*
///
void k_onsole__filter__hotspot_qbase_activate(void* self, const char* action);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
///
libqt_list /* of QAction* */ k_onsole__filter__hotspot_actions(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter__HotSpot*
/// @param callback QAction** func()
///
void k_onsole__filter__hotspot_on_actions(void* self, QAction** (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter__HotSpot*
///
libqt_list /* of QAction* */ k_onsole__filter__hotspot_qbase_actions(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Filter__HotSpot*
/// @param type enum Konsole__Filter__HotSpot__Type
///
void k_onsole__filter__hotspot_set_type(void* self, int32_t type);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Filter__HotSpot*
/// @param callback void func(Konsole__Filter__HotSpot* self, enum Konsole__Filter__HotSpot__Type type)
///
void k_onsole__filter__hotspot_on_set_type(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Filter__HotSpot*
/// @param type enum Konsole__Filter__HotSpot__Type
///
void k_onsole__filter__hotspot_qbase_set_type(void* self, int32_t type);

/// Delete this object from C++ memory.
///
/// @param self Konsole__Filter__HotSpot*
///
void k_onsole__filter__hotspot_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__regexpfilter__hotspot_new constructs a new Konsole::RegExpFilter::HotSpot object.
///
/// @param startLine int
/// @param startColumn int
/// @param endLine int
/// @param endColumn int
///
Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter__hotspot_new(int startLine, int startColumn, int endLine, int endColumn);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__regexpfilter__hotspot_new2 constructs a new Konsole::RegExpFilter::HotSpot object.
///
/// @param param1 Konsole__RegExpFilter__HotSpot*
///
Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter__hotspot_new2(void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param action const char*
///
void k_onsole__regexpfilter__hotspot_activate(void* self, const char* action);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param callback void func(Konsole__RegExpFilter__HotSpot* self, const char* action)
///
void k_onsole__regexpfilter__hotspot_on_activate(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param action const char*
///
void k_onsole__regexpfilter__hotspot_qbase_activate(void* self, const char* action);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param texts const char**
///
void k_onsole__regexpfilter__hotspot_set_captured_texts(void* self, const char* texts[static 1]);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
const char** k_onsole__regexpfilter__hotspot_captured_texts(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
int32_t k_onsole__regexpfilter__hotspot_start_line(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
int32_t k_onsole__regexpfilter__hotspot_end_line(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
int32_t k_onsole__regexpfilter__hotspot_start_column(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
int32_t k_onsole__regexpfilter__hotspot_end_column(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
/// @return enum Konsole__Filter__HotSpot__Type
///
int32_t k_onsole__regexpfilter__hotspot_type(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
libqt_list /* of QAction* */ k_onsole__regexpfilter__hotspot_actions(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
libqt_list /* of QAction* */ k_onsole__regexpfilter__hotspot_qbase_actions(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param callback QAction** func()
///
void k_onsole__regexpfilter__hotspot_on_actions(void* self, QAction** (*callback)());

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param type enum Konsole__Filter__HotSpot__Type
///
void k_onsole__regexpfilter__hotspot_set_type(void* self, int32_t type);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param type enum Konsole__Filter__HotSpot__Type
///
void k_onsole__regexpfilter__hotspot_qbase_set_type(void* self, int32_t type);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__RegExpFilter__HotSpot*
/// @param callback void func(Konsole__RegExpFilter__HotSpot* self, enum Konsole__Filter__HotSpot__Type type)
///
void k_onsole__regexpfilter__hotspot_on_set_type(void* self, void (*callback)(void*, int32_t));

/// Delete this object from C++ memory.
///
/// @param self Konsole__RegExpFilter__HotSpot*
///
void k_onsole__regexpfilter__hotspot_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__urlfilter__hotspot_new constructs a new Konsole::UrlFilter::HotSpot object.
///
/// @param startLine int
/// @param startColumn int
/// @param endLine int
/// @param endColumn int
///
Konsole__UrlFilter__HotSpot* k_onsole__urlfilter__hotspot_new(int startLine, int startColumn, int endLine, int endColumn);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
Konsole__FilterObject* k_onsole__urlfilter__hotspot_get_url_object(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
libqt_list /* of QAction* */ k_onsole__urlfilter__hotspot_actions(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param callback QAction** func()
///
void k_onsole__urlfilter__hotspot_on_actions(void* self, QAction** (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__UrlFilter__HotSpot*
///
libqt_list /* of QAction* */ k_onsole__urlfilter__hotspot_qbase_actions(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param action const char*
///
void k_onsole__urlfilter__hotspot_activate(void* self, const char* action);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param callback void func(Konsole__UrlFilter__HotSpot* self, const char* action)
///
void k_onsole__urlfilter__hotspot_on_activate(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param action const char*
///
void k_onsole__urlfilter__hotspot_qbase_activate(void* self, const char* action);

/// Inherited from Konsole::RegExpFilter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param texts const char**
///
void k_onsole__urlfilter__hotspot_set_captured_texts(void* self, const char* texts[static 1]);

/// Inherited from Konsole::RegExpFilter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Konsole__UrlFilter__HotSpot*
///
const char** k_onsole__urlfilter__hotspot_captured_texts(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
int32_t k_onsole__urlfilter__hotspot_start_line(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
int32_t k_onsole__urlfilter__hotspot_end_line(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
int32_t k_onsole__urlfilter__hotspot_start_column(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
int32_t k_onsole__urlfilter__hotspot_end_column(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__UrlFilter__HotSpot*
///
/// @return enum Konsole__Filter__HotSpot__Type
///
int32_t k_onsole__urlfilter__hotspot_type(void* self);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param type enum Konsole__Filter__HotSpot__Type
///
void k_onsole__urlfilter__hotspot_set_type(void* self, int32_t type);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param type enum Konsole__Filter__HotSpot__Type
///
void k_onsole__urlfilter__hotspot_qbase_set_type(void* self, int32_t type);

/// Inherited from Konsole::Filter::HotSpot
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__UrlFilter__HotSpot*
/// @param callback void func(Konsole__UrlFilter__HotSpot* self, enum Konsole__Filter__HotSpot__Type type)
///
void k_onsole__urlfilter__hotspot_on_set_type(void* self, void (*callback)(void*, int32_t));

/// Delete this object from C++ memory.
///
/// @param self Konsole__UrlFilter__HotSpot*
///
void k_onsole__urlfilter__hotspot_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

typedef enum {
    KONSOLE_FILTER_HOTSPOT_TYPE_NOTSPECIFIED = 0,
    KONSOLE_FILTER_HOTSPOT_TYPE_LINK = 1,
    KONSOLE_FILTER_HOTSPOT_TYPE_MARKER = 2
} Konsole__Filter__HotSpot__Type;

#endif
