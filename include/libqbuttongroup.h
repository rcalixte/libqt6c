#pragma once
#ifndef SRCQT6C_LIBQBUTTONGROUP_H
#define SRCQT6C_LIBQBUTTONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbuttongroup.html

/// q_buttongroup_new constructs a new QButtonGroup object.
///
QButtonGroup* q_buttongroup_new();

/// q_buttongroup_new2 constructs a new QButtonGroup object.
///
/// @param parent QObject*
QButtonGroup* q_buttongroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QButtonGroup*
const QMetaObject* q_buttongroup_meta_object(void* self);

/// @param self QButtonGroup*
/// @param param1 const char*
void* q_buttongroup_metacast(void* self, const char* param1);

/// @param self QButtonGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_buttongroup_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QButtonGroup*
/// @param callback int32_t fn(QButtonGroup*, enum QMetaObject__Call, int, void*)
void q_buttongroup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QButtonGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_buttongroup_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_buttongroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#setExclusive)
///
/// @param self QButtonGroup*
/// @param exclusive bool
void q_buttongroup_set_exclusive(void* self, bool exclusive);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#exclusive)
///
/// @param self QButtonGroup*
bool q_buttongroup_exclusive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#addButton)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
void q_buttongroup_add_button(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#removeButton)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
void q_buttongroup_remove_button(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttons)
///
/// @param self QButtonGroup*
libqt_list /* of QAbstractButton* */ q_buttongroup_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#checkedButton)
///
/// @param self QButtonGroup*
QAbstractButton* q_buttongroup_checked_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#button)
///
/// @param self QButtonGroup*
/// @param id int
QAbstractButton* q_buttongroup_button(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#setId)
///
/// @param self QButtonGroup*
/// @param button QAbstractButton*
/// @param id int
void q_buttongroup_set_id(void* self, void* button, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#id)
///
/// @param self QButtonGroup*
/// @param button QAbstractButton*
int32_t q_buttongroup_id(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#checkedId)
///
/// @param self QButtonGroup*
int32_t q_buttongroup_checked_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonClicked)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
void q_buttongroup_button_clicked(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonClicked)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QAbstractButton*)
void q_buttongroup_on_button_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonPressed)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
void q_buttongroup_button_pressed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonPressed)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QAbstractButton*)
void q_buttongroup_on_button_pressed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonReleased)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
void q_buttongroup_button_released(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonReleased)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QAbstractButton*)
void q_buttongroup_on_button_released(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonToggled)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
/// @param param2 bool
void q_buttongroup_button_toggled(void* self, void* param1, bool param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonToggled)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QAbstractButton*, bool)
void q_buttongroup_on_button_toggled(void* self, void (*callback)(void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idClicked)
///
/// @param self QButtonGroup*
/// @param param1 int
void q_buttongroup_id_clicked(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idClicked)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, int)
void q_buttongroup_on_id_clicked(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idPressed)
///
/// @param self QButtonGroup*
/// @param param1 int
void q_buttongroup_id_pressed(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idPressed)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, int)
void q_buttongroup_on_id_pressed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idReleased)
///
/// @param self QButtonGroup*
/// @param param1 int
void q_buttongroup_id_released(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idReleased)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, int)
void q_buttongroup_on_id_released(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idToggled)
///
/// @param self QButtonGroup*
/// @param param1 int
/// @param param2 bool
void q_buttongroup_id_toggled(void* self, int param1, bool param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idToggled)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, int, bool)
void q_buttongroup_on_id_toggled(void* self, void (*callback)(void*, int, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_buttongroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_buttongroup_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#addButton)
///
/// @param self QButtonGroup*
/// @param param1 QAbstractButton*
/// @param id int
void q_buttongroup_add_button2(void* self, void* param1, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QButtonGroup*
const char* q_buttongroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QButtonGroup*
/// @param name char*
void q_buttongroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QButtonGroup*
bool q_buttongroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QButtonGroup*
bool q_buttongroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QButtonGroup*
bool q_buttongroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QButtonGroup*
bool q_buttongroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QButtonGroup*
/// @param b bool
bool q_buttongroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QButtonGroup*
QThread* q_buttongroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QButtonGroup*
/// @param thread QThread*
bool q_buttongroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QButtonGroup*
/// @param interval int
int32_t q_buttongroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QButtonGroup*
/// @param id int
void q_buttongroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QButtonGroup*
/// @param id enum Qt__TimerId
void q_buttongroup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QButtonGroup*
libqt_list /* of QObject* */ q_buttongroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QButtonGroup*
/// @param parent QObject*
void q_buttongroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QButtonGroup*
/// @param filterObj QObject*
void q_buttongroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QButtonGroup*
/// @param obj QObject*
void q_buttongroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_buttongroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QButtonGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_buttongroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_buttongroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_buttongroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QButtonGroup*
void q_buttongroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QButtonGroup*
void q_buttongroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QButtonGroup*
/// @param name const char*
/// @param value QVariant*
bool q_buttongroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QButtonGroup*
/// @param name const char*
QVariant* q_buttongroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QButtonGroup*
const char** q_buttongroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QButtonGroup*
QBindingStorage* q_buttongroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QButtonGroup*
const QBindingStorage* q_buttongroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QButtonGroup*
void q_buttongroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*)
void q_buttongroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QButtonGroup*
QObject* q_buttongroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QButtonGroup*
/// @param classname const char*
bool q_buttongroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QButtonGroup*
void q_buttongroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QButtonGroup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_buttongroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QButtonGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_buttongroup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_buttongroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QButtonGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_buttongroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QButtonGroup*
/// @param param1 QObject*
void q_buttongroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QObject*)
void q_buttongroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QEvent*
bool q_buttongroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QEvent*
bool q_buttongroup_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback bool fn(QButtonGroup*, QEvent*)
void q_buttongroup_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_buttongroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_buttongroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback bool fn(QButtonGroup*, QObject*, QEvent*)
void q_buttongroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QTimerEvent*
void q_buttongroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QTimerEvent*
void q_buttongroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QTimerEvent*)
void q_buttongroup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QChildEvent*
void q_buttongroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QChildEvent*
void q_buttongroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QChildEvent*)
void q_buttongroup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QEvent*
void q_buttongroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param event QEvent*
void q_buttongroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QEvent*)
void q_buttongroup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal QMetaMethod*
void q_buttongroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal QMetaMethod*
void q_buttongroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QMetaMethod*)
void q_buttongroup_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal QMetaMethod*
void q_buttongroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal QMetaMethod*
void q_buttongroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, QMetaMethod*)
void q_buttongroup_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
QObject* q_buttongroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
QObject* q_buttongroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback QObject* fn()
void q_buttongroup_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
int32_t q_buttongroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
int32_t q_buttongroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback int32_t fn()
void q_buttongroup_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal const char*
int32_t q_buttongroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal const char*
int32_t q_buttongroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback int32_t fn(QButtonGroup*, const char*)
void q_buttongroup_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal QMetaMethod*
bool q_buttongroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param signal QMetaMethod*
bool q_buttongroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QButtonGroup*
/// @param callback bool fn(QButtonGroup*, QMetaMethod*)
void q_buttongroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QButtonGroup*
/// @param callback void fn(QButtonGroup*, const char*)
void q_buttongroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#dtor.QButtonGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QButtonGroup*
void q_buttongroup_delete(void* self);

#endif
