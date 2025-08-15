#pragma once
#ifndef SRCQT6C_LIBQACTIONGROUP_H
#define SRCQT6C_LIBQACTIONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qactiongroup.html

/// q_actiongroup_new constructs a new QActionGroup object.
///
/// @param parent QObject*
QActionGroup* q_actiongroup_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QActionGroup*
const QMetaObject* q_actiongroup_meta_object(void* self);

/// @param self QActionGroup*
/// @param param1 const char*
void* q_actiongroup_metacast(void* self, const char* param1);

/// @param self QActionGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_actiongroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QActionGroup*
/// @param callback int32_t fn(QActionGroup*, enum QMetaObject__Call, int, void*)
void q_actiongroup_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QActionGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_actiongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_actiongroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// @param self QActionGroup*
/// @param a QAction*
QAction* q_actiongroup_add_action(void* self, void* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// @param self QActionGroup*
/// @param text const char*
QAction* q_actiongroup_add_action2(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// @param self QActionGroup*
/// @param icon QIcon*
/// @param text const char*
QAction* q_actiongroup_add_action3(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#removeAction)
///
/// @param self QActionGroup*
/// @param a QAction*
void q_actiongroup_remove_action(void* self, void* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#actions)
///
/// @param self QActionGroup*
libqt_list /* of QAction* */ q_actiongroup_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#checkedAction)
///
/// @param self QActionGroup*
QAction* q_actiongroup_checked_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isExclusive)
///
/// @param self QActionGroup*
bool q_actiongroup_is_exclusive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isEnabled)
///
/// @param self QActionGroup*
bool q_actiongroup_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isVisible)
///
/// @param self QActionGroup*
bool q_actiongroup_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#exclusionPolicy)
///
/// @param self QActionGroup*
///
/// @return enum QActionGroup__ExclusionPolicy
int64_t q_actiongroup_exclusion_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setEnabled)
///
/// @param self QActionGroup*
/// @param enabled bool
void q_actiongroup_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setDisabled)
///
/// @param self QActionGroup*
/// @param b bool
void q_actiongroup_set_disabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setVisible)
///
/// @param self QActionGroup*
/// @param visible bool
void q_actiongroup_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setExclusive)
///
/// @param self QActionGroup*
/// @param exclusive bool
void q_actiongroup_set_exclusive(void* self, bool exclusive);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setExclusionPolicy)
///
/// @param self QActionGroup*
/// @param policy enum QActionGroup__ExclusionPolicy
void q_actiongroup_set_exclusion_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#triggered)
///
/// @param self QActionGroup*
/// @param param1 QAction*
void q_actiongroup_triggered(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#triggered)
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QAction*)
void q_actiongroup_on_triggered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#hovered)
///
/// @param self QActionGroup*
/// @param param1 QAction*
void q_actiongroup_hovered(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#hovered)
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QAction*)
void q_actiongroup_on_hovered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_actiongroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_actiongroup_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QActionGroup*
const char* q_actiongroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QActionGroup*
/// @param name char*
void q_actiongroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QActionGroup*
bool q_actiongroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QActionGroup*
bool q_actiongroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QActionGroup*
bool q_actiongroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QActionGroup*
bool q_actiongroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QActionGroup*
/// @param b bool
bool q_actiongroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QActionGroup*
QThread* q_actiongroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QActionGroup*
/// @param thread QThread*
bool q_actiongroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QActionGroup*
/// @param interval int
int32_t q_actiongroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QActionGroup*
/// @param id int
void q_actiongroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QActionGroup*
/// @param id enum Qt__TimerId
void q_actiongroup_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QActionGroup*
libqt_list /* of QObject* */ q_actiongroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QActionGroup*
/// @param parent QObject*
void q_actiongroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QActionGroup*
/// @param filterObj QObject*
void q_actiongroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QActionGroup*
/// @param obj QObject*
void q_actiongroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_actiongroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QActionGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_actiongroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_actiongroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_actiongroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QActionGroup*
void q_actiongroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QActionGroup*
void q_actiongroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QActionGroup*
/// @param name const char*
/// @param value QVariant*
bool q_actiongroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QActionGroup*
/// @param name const char*
QVariant* q_actiongroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QActionGroup*
const char** q_actiongroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QActionGroup*
QBindingStorage* q_actiongroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QActionGroup*
const QBindingStorage* q_actiongroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QActionGroup*
void q_actiongroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*)
void q_actiongroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QActionGroup*
QObject* q_actiongroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QActionGroup*
/// @param classname const char*
bool q_actiongroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QActionGroup*
void q_actiongroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QActionGroup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_actiongroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QActionGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_actiongroup_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_actiongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QActionGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_actiongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QActionGroup*
/// @param param1 QObject*
void q_actiongroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QObject*)
void q_actiongroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param event QEvent*
bool q_actiongroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param event QEvent*
bool q_actiongroup_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback bool fn(QActionGroup*, QEvent*)
void q_actiongroup_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_actiongroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_actiongroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback bool fn(QActionGroup*, QObject*, QEvent*)
void q_actiongroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param event QTimerEvent*
void q_actiongroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param event QTimerEvent*
void q_actiongroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QTimerEvent*)
void q_actiongroup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param event QChildEvent*
void q_actiongroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param event QChildEvent*
void q_actiongroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QChildEvent*)
void q_actiongroup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param event QEvent*
void q_actiongroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param event QEvent*
void q_actiongroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QEvent*)
void q_actiongroup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param signal QMetaMethod*
void q_actiongroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param signal QMetaMethod*
void q_actiongroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QMetaMethod*)
void q_actiongroup_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param signal QMetaMethod*
void q_actiongroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param signal QMetaMethod*
void q_actiongroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, QMetaMethod*)
void q_actiongroup_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
QObject* q_actiongroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
QObject* q_actiongroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback QObject* fn()
void q_actiongroup_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
int32_t q_actiongroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
int32_t q_actiongroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback int32_t fn()
void q_actiongroup_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param signal const char*
int32_t q_actiongroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param signal const char*
int32_t q_actiongroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback int32_t fn(QActionGroup*, const char*)
void q_actiongroup_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionGroup*
/// @param signal QMetaMethod*
bool q_actiongroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionGroup*
/// @param signal QMetaMethod*
bool q_actiongroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionGroup*
/// @param callback bool fn(QActionGroup*, QMetaMethod*)
void q_actiongroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QActionGroup*
/// @param callback void fn(QActionGroup*, const char*)
void q_actiongroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#dtor.QActionGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QActionGroup*
void q_actiongroup_delete(void* self);

/// https://doc.qt.io/qt-6/qactiongroup.html#types

typedef enum {
    QACTIONGROUP_EXCLUSIONPOLICY_NONE = 0,
    QACTIONGROUP_EXCLUSIONPOLICY_EXCLUSIVE = 1,
    QACTIONGROUP_EXCLUSIONPOLICY_EXCLUSIVEOPTIONAL = 2
} QActionGroup__ExclusionPolicy;

#endif
