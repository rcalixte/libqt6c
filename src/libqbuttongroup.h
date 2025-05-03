#pragma once
#ifndef SRCQT6C_LIBQBUTTONGROUP_H
#define SRCQT6C_LIBQBUTTONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qbuttongroup.html

/// q_buttongroup_new constructs a new QButtonGroup object.
///
///
QButtonGroup* q_buttongroup_new();

/// q_buttongroup_new2 constructs a new QButtonGroup object.
///
/// ``` QObject* parent ```
QButtonGroup* q_buttongroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QButtonGroup* self ```
QMetaObject* q_buttongroup_meta_object(void* self);

/// ``` QButtonGroup* self, const char* param1 ```
void* q_buttongroup_metacast(void* self, const char* param1);

/// ``` QButtonGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_buttongroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QButtonGroup* self, int32_t (*slot)(QButtonGroup*, enum QMetaObject__Call, int, void*) ```
void q_buttongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QButtonGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_buttongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_buttongroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#setExclusive)
///
/// ``` QButtonGroup* self, bool exclusive ```
void q_buttongroup_set_exclusive(void* self, bool exclusive);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#exclusive)
///
/// ``` QButtonGroup* self ```
bool q_buttongroup_exclusive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#addButton)
///
/// ``` QButtonGroup* self, QAbstractButton* param1 ```
void q_buttongroup_add_button(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#removeButton)
///
/// ``` QButtonGroup* self, QAbstractButton* param1 ```
void q_buttongroup_remove_button(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttons)
///
/// ``` QButtonGroup* self ```
libqt_list /* of QAbstractButton* */ q_buttongroup_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#checkedButton)
///
/// ``` QButtonGroup* self ```
QAbstractButton* q_buttongroup_checked_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#button)
///
/// ``` QButtonGroup* self, int id ```
QAbstractButton* q_buttongroup_button(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#setId)
///
/// ``` QButtonGroup* self, QAbstractButton* button, int id ```
void q_buttongroup_set_id(void* self, void* button, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#id)
///
/// ``` QButtonGroup* self, QAbstractButton* button ```
int32_t q_buttongroup_id(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#checkedId)
///
/// ``` QButtonGroup* self ```
int32_t q_buttongroup_checked_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonClicked)
///
/// ``` QButtonGroup* self, QAbstractButton* param1 ```
void q_buttongroup_button_clicked(void* self, void* param1);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QAbstractButton*) ```
void q_buttongroup_on_button_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonPressed)
///
/// ``` QButtonGroup* self, QAbstractButton* param1 ```
void q_buttongroup_button_pressed(void* self, void* param1);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QAbstractButton*) ```
void q_buttongroup_on_button_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonReleased)
///
/// ``` QButtonGroup* self, QAbstractButton* param1 ```
void q_buttongroup_button_released(void* self, void* param1);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QAbstractButton*) ```
void q_buttongroup_on_button_released(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#buttonToggled)
///
/// ``` QButtonGroup* self, QAbstractButton* param1, bool param2 ```
void q_buttongroup_button_toggled(void* self, void* param1, bool param2);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QAbstractButton*, bool) ```
void q_buttongroup_on_button_toggled(void* self, void (*slot)(void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idClicked)
///
/// ``` QButtonGroup* self, int param1 ```
void q_buttongroup_id_clicked(void* self, int param1);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, int) ```
void q_buttongroup_on_id_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idPressed)
///
/// ``` QButtonGroup* self, int param1 ```
void q_buttongroup_id_pressed(void* self, int param1);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, int) ```
void q_buttongroup_on_id_pressed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idReleased)
///
/// ``` QButtonGroup* self, int param1 ```
void q_buttongroup_id_released(void* self, int param1);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, int) ```
void q_buttongroup_on_id_released(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#idToggled)
///
/// ``` QButtonGroup* self, int param1, bool param2 ```
void q_buttongroup_id_toggled(void* self, int param1, bool param2);

/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, int, bool) ```
void q_buttongroup_on_id_toggled(void* self, void (*slot)(void*, int, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_buttongroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_buttongroup_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuttongroup.html#addButton)
///
/// ``` QButtonGroup* self, QAbstractButton* param1, int id ```
void q_buttongroup_add_button2(void* self, void* param1, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QButtonGroup* self ```
const char* q_buttongroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QButtonGroup* self, char* name ```
void q_buttongroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QButtonGroup* self ```
bool q_buttongroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QButtonGroup* self ```
bool q_buttongroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QButtonGroup* self ```
bool q_buttongroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QButtonGroup* self ```
bool q_buttongroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QButtonGroup* self, bool b ```
bool q_buttongroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QButtonGroup* self ```
QThread* q_buttongroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QButtonGroup* self, QThread* thread ```
void q_buttongroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QButtonGroup* self, int interval ```
int32_t q_buttongroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QButtonGroup* self, int id ```
void q_buttongroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QButtonGroup* self ```
libqt_list /* of QObject* */ q_buttongroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QButtonGroup* self, QObject* parent ```
void q_buttongroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QButtonGroup* self, QObject* filterObj ```
void q_buttongroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QButtonGroup* self, QObject* obj ```
void q_buttongroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_buttongroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QButtonGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_buttongroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_buttongroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_buttongroup_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QButtonGroup* self ```
void q_buttongroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QButtonGroup* self ```
void q_buttongroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QButtonGroup* self, const char* name, QVariant* value ```
bool q_buttongroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QButtonGroup* self, const char* name ```
QVariant* q_buttongroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QButtonGroup* self ```
const char** q_buttongroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QButtonGroup* self ```
QBindingStorage* q_buttongroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QButtonGroup* self ```
QBindingStorage* q_buttongroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QButtonGroup* self ```
void q_buttongroup_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QButtonGroup* self, void (*slot)(QObject*) ```
void q_buttongroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QButtonGroup* self ```
QObject* q_buttongroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QButtonGroup* self, const char* classname ```
bool q_buttongroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QButtonGroup* self ```
void q_buttongroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QButtonGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_buttongroup_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_buttongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QButtonGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_buttongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QButtonGroup* self, QObject* param1 ```
void q_buttongroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QButtonGroup* self, void (*slot)(QObject*, QObject*) ```
void q_buttongroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QEvent* event ```
bool q_buttongroup_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QEvent* event ```
bool q_buttongroup_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, bool (*slot)(QButtonGroup*, QEvent*) ```
void q_buttongroup_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QObject* watched, QEvent* event ```
bool q_buttongroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QObject* watched, QEvent* event ```
bool q_buttongroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, bool (*slot)(QButtonGroup*, QObject*, QEvent*) ```
void q_buttongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QTimerEvent* event ```
void q_buttongroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QTimerEvent* event ```
void q_buttongroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QTimerEvent*) ```
void q_buttongroup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QChildEvent* event ```
void q_buttongroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QChildEvent* event ```
void q_buttongroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QChildEvent*) ```
void q_buttongroup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QEvent* event ```
void q_buttongroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QEvent* event ```
void q_buttongroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QEvent*) ```
void q_buttongroup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QMetaMethod* signal ```
void q_buttongroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QMetaMethod* signal ```
void q_buttongroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QMetaMethod*) ```
void q_buttongroup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QMetaMethod* signal ```
void q_buttongroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QMetaMethod* signal ```
void q_buttongroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, void (*slot)(QButtonGroup*, QMetaMethod*) ```
void q_buttongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self ```
QObject* q_buttongroup_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self ```
QObject* q_buttongroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, QObject* (*slot)() ```
void q_buttongroup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self ```
int32_t q_buttongroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self ```
int32_t q_buttongroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, int32_t (*slot)() ```
void q_buttongroup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, const char* signal ```
int32_t q_buttongroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, const char* signal ```
int32_t q_buttongroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, int32_t (*slot)(QButtonGroup*, const char*) ```
void q_buttongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QButtonGroup* self, QMetaMethod* signal ```
bool q_buttongroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QButtonGroup* self, QMetaMethod* signal ```
bool q_buttongroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QButtonGroup* self, bool (*slot)(QButtonGroup*, QMetaMethod*) ```
void q_buttongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QButtonGroup* self ```
void q_buttongroup_delete(void* self);

#endif
