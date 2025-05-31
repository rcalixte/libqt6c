#pragma once
#ifndef SRCQT6C_LIBQVALIDATOR_H
#define SRCQT6C_LIBQVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqlocale.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqregularexpression.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qvalidator.html

/// q_validator_new constructs a new QValidator object.
///
///
QValidator* q_validator_new();

/// q_validator_new2 constructs a new QValidator object.
///
/// ``` QObject* parent ```
QValidator* q_validator_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QValidator* self ```
const QMetaObject* q_validator_meta_object(void* self);

/// ``` QValidator* self, const char* param1 ```
void* q_validator_metacast(void* self, const char* param1);

/// ``` QValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_validator_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QValidator* self, int32_t (*slot)(QValidator*, enum QMetaObject__Call, int, void*) ```
void q_validator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_validator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_validator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// ``` QValidator* self, QLocale* locale ```
void q_validator_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// ``` QValidator* self ```
QLocale* q_validator_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// ``` QValidator* self, const char* param1, int* param2 ```
int64_t q_validator_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// ``` QValidator* self, int64_t (*slot)(QValidator*, const char*, int*) ```
void q_validator_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// Base class method implementation
///
/// ``` QValidator* self, const char* param1, int* param2 ```
int64_t q_validator_qbase_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// ``` QValidator* self, const char* param1 ```
void q_validator_fixup(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// ``` QValidator* self, void (*slot)(QValidator*, const char*) ```
void q_validator_on_fixup(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Base class method implementation
///
/// ``` QValidator* self, const char* param1 ```
void q_validator_qbase_fixup(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QValidator* self ```
void q_validator_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QValidator* self, void (*slot)(QValidator*) ```
void q_validator_on_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_validator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_validator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QValidator* self ```
const char* q_validator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QValidator* self, char* name ```
void q_validator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QValidator* self ```
bool q_validator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QValidator* self ```
bool q_validator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QValidator* self ```
bool q_validator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QValidator* self ```
bool q_validator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QValidator* self, bool b ```
bool q_validator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QValidator* self ```
QThread* q_validator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QValidator* self, QThread* thread ```
void q_validator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QValidator* self, int interval ```
int32_t q_validator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QValidator* self, int id ```
void q_validator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QValidator* self ```
const libqt_list /* of QObject* */ q_validator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QValidator* self, QObject* parent ```
void q_validator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QValidator* self, QObject* filterObj ```
void q_validator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QValidator* self, QObject* obj ```
void q_validator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_validator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QValidator* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_validator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_validator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_validator_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QValidator* self ```
void q_validator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QValidator* self ```
void q_validator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QValidator* self, const char* name, QVariant* value ```
bool q_validator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QValidator* self, const char* name ```
QVariant* q_validator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QValidator* self ```
const char** q_validator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QValidator* self ```
QBindingStorage* q_validator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QValidator* self ```
const QBindingStorage* q_validator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValidator* self ```
void q_validator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValidator* self, void (*slot)(QObject*) ```
void q_validator_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QValidator* self ```
QObject* q_validator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QValidator* self, const char* classname ```
bool q_validator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QValidator* self ```
void q_validator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QValidator* self, int interval, enum Qt__TimerType timerType ```
int32_t q_validator_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_validator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QValidator* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_validator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValidator* self, QObject* param1 ```
void q_validator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValidator* self, void (*slot)(QObject*, QObject*) ```
void q_validator_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QEvent* event ```
bool q_validator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QEvent* event ```
bool q_validator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, bool (*slot)(QValidator*, QEvent*) ```
void q_validator_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QObject* watched, QEvent* event ```
bool q_validator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QObject* watched, QEvent* event ```
bool q_validator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, bool (*slot)(QValidator*, QObject*, QEvent*) ```
void q_validator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QTimerEvent* event ```
void q_validator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QTimerEvent* event ```
void q_validator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, void (*slot)(QValidator*, QTimerEvent*) ```
void q_validator_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QChildEvent* event ```
void q_validator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QChildEvent* event ```
void q_validator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, void (*slot)(QValidator*, QChildEvent*) ```
void q_validator_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QEvent* event ```
void q_validator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QEvent* event ```
void q_validator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, void (*slot)(QValidator*, QEvent*) ```
void q_validator_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QMetaMethod* signal ```
void q_validator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QMetaMethod* signal ```
void q_validator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, void (*slot)(QValidator*, QMetaMethod*) ```
void q_validator_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QMetaMethod* signal ```
void q_validator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QMetaMethod* signal ```
void q_validator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, void (*slot)(QValidator*, QMetaMethod*) ```
void q_validator_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self ```
QObject* q_validator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self ```
QObject* q_validator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, QObject* (*slot)() ```
void q_validator_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self ```
int32_t q_validator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self ```
int32_t q_validator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, int32_t (*slot)() ```
void q_validator_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, const char* signal ```
int32_t q_validator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, const char* signal ```
int32_t q_validator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, int32_t (*slot)(QValidator*, const char*) ```
void q_validator_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValidator* self, QMetaMethod* signal ```
bool q_validator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValidator* self, QMetaMethod* signal ```
bool q_validator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValidator* self, bool (*slot)(QValidator*, QMetaMethod*) ```
void q_validator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QValidator* self, void (*slot)(QObject*, const char*) ```
void q_validator_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#dtor.QValidator)
///
/// Delete this object from C++ memory.
///
/// ``` QValidator* self ```
void q_validator_delete(void* self);

/// https://doc.qt.io/qt-6/qintvalidator.html

/// q_intvalidator_new constructs a new QIntValidator object.
///
///
QIntValidator* q_intvalidator_new();

/// q_intvalidator_new2 constructs a new QIntValidator object.
///
/// ``` int bottom, int top ```
QIntValidator* q_intvalidator_new2(int bottom, int top);

/// q_intvalidator_new3 constructs a new QIntValidator object.
///
/// ``` QObject* parent ```
QIntValidator* q_intvalidator_new3(void* parent);

/// q_intvalidator_new4 constructs a new QIntValidator object.
///
/// ``` int bottom, int top, QObject* parent ```
QIntValidator* q_intvalidator_new4(int bottom, int top, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QIntValidator* self ```
const QMetaObject* q_intvalidator_meta_object(void* self);

/// ``` QIntValidator* self, const char* param1 ```
void* q_intvalidator_metacast(void* self, const char* param1);

/// ``` QIntValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_intvalidator_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QIntValidator* self, int32_t (*slot)(QIntValidator*, enum QMetaObject__Call, int, void*) ```
void q_intvalidator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QIntValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_intvalidator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_intvalidator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// ``` QIntValidator* self, const char* param1, int* param2 ```
int64_t q_intvalidator_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// ``` QIntValidator* self, int64_t (*slot)(QIntValidator*, const char*, int*) ```
void q_intvalidator_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// Base class method implementation
///
/// ``` QIntValidator* self, const char* param1, int* param2 ```
int64_t q_intvalidator_qbase_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// ``` QIntValidator* self, const char* input ```
void q_intvalidator_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, const char*) ```
void q_intvalidator_on_fixup(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// Base class method implementation
///
/// ``` QIntValidator* self, const char* input ```
void q_intvalidator_qbase_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#setBottom)
///
/// ``` QIntValidator* self, int bottom ```
void q_intvalidator_set_bottom(void* self, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#setTop)
///
/// ``` QIntValidator* self, int top ```
void q_intvalidator_set_top(void* self, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#setRange)
///
/// ``` QIntValidator* self, int bottom, int top ```
void q_intvalidator_set_range(void* self, int bottom, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#bottom)
///
/// ``` QIntValidator* self ```
int32_t q_intvalidator_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#top)
///
/// ``` QIntValidator* self ```
int32_t q_intvalidator_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#bottomChanged)
///
/// ``` QIntValidator* self, int bottom ```
void q_intvalidator_bottom_changed(void* self, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#bottomChanged)
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, int) ```
void q_intvalidator_on_bottom_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#topChanged)
///
/// ``` QIntValidator* self, int top ```
void q_intvalidator_top_changed(void* self, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#topChanged)
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, int) ```
void q_intvalidator_on_top_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_intvalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_intvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// ``` QIntValidator* self, QLocale* locale ```
void q_intvalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// ``` QIntValidator* self ```
QLocale* q_intvalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QIntValidator* self ```
void q_intvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QIntValidator* self, void (*slot)(QValidator*) ```
void q_intvalidator_on_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QIntValidator* self ```
const char* q_intvalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QIntValidator* self, char* name ```
void q_intvalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QIntValidator* self ```
bool q_intvalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QIntValidator* self ```
bool q_intvalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QIntValidator* self ```
bool q_intvalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QIntValidator* self ```
bool q_intvalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QIntValidator* self, bool b ```
bool q_intvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QIntValidator* self ```
QThread* q_intvalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QIntValidator* self, QThread* thread ```
void q_intvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIntValidator* self, int interval ```
int32_t q_intvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QIntValidator* self, int id ```
void q_intvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QIntValidator* self ```
const libqt_list /* of QObject* */ q_intvalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QIntValidator* self, QObject* parent ```
void q_intvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QIntValidator* self, QObject* filterObj ```
void q_intvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QIntValidator* self, QObject* obj ```
void q_intvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_intvalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIntValidator* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_intvalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_intvalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_intvalidator_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QIntValidator* self ```
void q_intvalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QIntValidator* self ```
void q_intvalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QIntValidator* self, const char* name, QVariant* value ```
bool q_intvalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QIntValidator* self, const char* name ```
QVariant* q_intvalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QIntValidator* self ```
const char** q_intvalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIntValidator* self ```
QBindingStorage* q_intvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIntValidator* self ```
const QBindingStorage* q_intvalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIntValidator* self ```
void q_intvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIntValidator* self, void (*slot)(QObject*) ```
void q_intvalidator_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QIntValidator* self ```
QObject* q_intvalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QIntValidator* self, const char* classname ```
bool q_intvalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QIntValidator* self ```
void q_intvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIntValidator* self, int interval, enum Qt__TimerType timerType ```
int32_t q_intvalidator_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_intvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIntValidator* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_intvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIntValidator* self, QObject* param1 ```
void q_intvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIntValidator* self, void (*slot)(QObject*, QObject*) ```
void q_intvalidator_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QEvent* event ```
bool q_intvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QEvent* event ```
bool q_intvalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, bool (*slot)(QIntValidator*, QEvent*) ```
void q_intvalidator_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QObject* watched, QEvent* event ```
bool q_intvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QObject* watched, QEvent* event ```
bool q_intvalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, bool (*slot)(QIntValidator*, QObject*, QEvent*) ```
void q_intvalidator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QTimerEvent* event ```
void q_intvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QTimerEvent* event ```
void q_intvalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, QTimerEvent*) ```
void q_intvalidator_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QChildEvent* event ```
void q_intvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QChildEvent* event ```
void q_intvalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, QChildEvent*) ```
void q_intvalidator_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QEvent* event ```
void q_intvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QEvent* event ```
void q_intvalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, QEvent*) ```
void q_intvalidator_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QMetaMethod* signal ```
void q_intvalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QMetaMethod* signal ```
void q_intvalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, QMetaMethod*) ```
void q_intvalidator_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QMetaMethod* signal ```
void q_intvalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QMetaMethod* signal ```
void q_intvalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, void (*slot)(QIntValidator*, QMetaMethod*) ```
void q_intvalidator_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self ```
QObject* q_intvalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self ```
QObject* q_intvalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, QObject* (*slot)() ```
void q_intvalidator_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self ```
int32_t q_intvalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self ```
int32_t q_intvalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, int32_t (*slot)() ```
void q_intvalidator_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, const char* signal ```
int32_t q_intvalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, const char* signal ```
int32_t q_intvalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, int32_t (*slot)(QIntValidator*, const char*) ```
void q_intvalidator_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIntValidator* self, QMetaMethod* signal ```
bool q_intvalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIntValidator* self, QMetaMethod* signal ```
bool q_intvalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIntValidator* self, bool (*slot)(QIntValidator*, QMetaMethod*) ```
void q_intvalidator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QIntValidator* self, void (*slot)(QObject*, const char*) ```
void q_intvalidator_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#dtor.QIntValidator)
///
/// Delete this object from C++ memory.
///
/// ``` QIntValidator* self ```
void q_intvalidator_delete(void* self);

/// https://doc.qt.io/qt-6/qdoublevalidator.html

/// q_doublevalidator_new constructs a new QDoubleValidator object.
///
///
QDoubleValidator* q_doublevalidator_new();

/// q_doublevalidator_new2 constructs a new QDoubleValidator object.
///
/// ``` double bottom, double top, int decimals ```
QDoubleValidator* q_doublevalidator_new2(double bottom, double top, int decimals);

/// q_doublevalidator_new3 constructs a new QDoubleValidator object.
///
/// ``` QObject* parent ```
QDoubleValidator* q_doublevalidator_new3(void* parent);

/// q_doublevalidator_new4 constructs a new QDoubleValidator object.
///
/// ``` double bottom, double top, int decimals, QObject* parent ```
QDoubleValidator* q_doublevalidator_new4(double bottom, double top, int decimals, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDoubleValidator* self ```
const QMetaObject* q_doublevalidator_meta_object(void* self);

/// ``` QDoubleValidator* self, const char* param1 ```
void* q_doublevalidator_metacast(void* self, const char* param1);

/// ``` QDoubleValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_doublevalidator_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDoubleValidator* self, int32_t (*slot)(QDoubleValidator*, enum QMetaObject__Call, int, void*) ```
void q_doublevalidator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDoubleValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_doublevalidator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_doublevalidator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// ``` QDoubleValidator* self, const char* param1, int* param2 ```
int64_t q_doublevalidator_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// ``` QDoubleValidator* self, int64_t (*slot)(QDoubleValidator*, const char*, int*) ```
void q_doublevalidator_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// Base class method implementation
///
/// ``` QDoubleValidator* self, const char* param1, int* param2 ```
int64_t q_doublevalidator_qbase_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// ``` QDoubleValidator* self, const char* input ```
void q_doublevalidator_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, const char*) ```
void q_doublevalidator_on_fixup(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// Base class method implementation
///
/// ``` QDoubleValidator* self, const char* input ```
void q_doublevalidator_qbase_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setRange)
///
/// ``` QDoubleValidator* self, double bottom, double top, int decimals ```
void q_doublevalidator_set_range(void* self, double bottom, double top, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setRange)
///
/// ``` QDoubleValidator* self, double bottom, double top ```
void q_doublevalidator_set_range2(void* self, double bottom, double top);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setBottom)
///
/// ``` QDoubleValidator* self, double bottom ```
void q_doublevalidator_set_bottom(void* self, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setTop)
///
/// ``` QDoubleValidator* self, double top ```
void q_doublevalidator_set_top(void* self, double top);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setDecimals)
///
/// ``` QDoubleValidator* self, int decimals ```
void q_doublevalidator_set_decimals(void* self, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setNotation)
///
/// ``` QDoubleValidator* self, enum QDoubleValidator__Notation notation ```
void q_doublevalidator_set_notation(void* self, int64_t notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#bottom)
///
/// ``` QDoubleValidator* self ```
double q_doublevalidator_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#top)
///
/// ``` QDoubleValidator* self ```
double q_doublevalidator_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#decimals)
///
/// ``` QDoubleValidator* self ```
int32_t q_doublevalidator_decimals(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#notation)
///
/// ``` QDoubleValidator* self ```
int64_t q_doublevalidator_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#bottomChanged)
///
/// ``` QDoubleValidator* self, double bottom ```
void q_doublevalidator_bottom_changed(void* self, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#bottomChanged)
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, double) ```
void q_doublevalidator_on_bottom_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#topChanged)
///
/// ``` QDoubleValidator* self, double top ```
void q_doublevalidator_top_changed(void* self, double top);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#topChanged)
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, double) ```
void q_doublevalidator_on_top_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#decimalsChanged)
///
/// ``` QDoubleValidator* self, int decimals ```
void q_doublevalidator_decimals_changed(void* self, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#decimalsChanged)
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, int) ```
void q_doublevalidator_on_decimals_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#notationChanged)
///
/// ``` QDoubleValidator* self, enum QDoubleValidator__Notation notation ```
void q_doublevalidator_notation_changed(void* self, int64_t notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#notationChanged)
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, enum QDoubleValidator__Notation) ```
void q_doublevalidator_on_notation_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_doublevalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_doublevalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// ``` QDoubleValidator* self, QLocale* locale ```
void q_doublevalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// ``` QDoubleValidator* self ```
QLocale* q_doublevalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QDoubleValidator* self ```
void q_doublevalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QDoubleValidator* self, void (*slot)(QValidator*) ```
void q_doublevalidator_on_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDoubleValidator* self ```
const char* q_doublevalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDoubleValidator* self, char* name ```
void q_doublevalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDoubleValidator* self ```
bool q_doublevalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDoubleValidator* self ```
bool q_doublevalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDoubleValidator* self ```
bool q_doublevalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDoubleValidator* self ```
bool q_doublevalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDoubleValidator* self, bool b ```
bool q_doublevalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDoubleValidator* self ```
QThread* q_doublevalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDoubleValidator* self, QThread* thread ```
void q_doublevalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDoubleValidator* self, int interval ```
int32_t q_doublevalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDoubleValidator* self, int id ```
void q_doublevalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDoubleValidator* self ```
const libqt_list /* of QObject* */ q_doublevalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDoubleValidator* self, QObject* parent ```
void q_doublevalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDoubleValidator* self, QObject* filterObj ```
void q_doublevalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDoubleValidator* self, QObject* obj ```
void q_doublevalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_doublevalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDoubleValidator* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_doublevalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_doublevalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_doublevalidator_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDoubleValidator* self ```
void q_doublevalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDoubleValidator* self ```
void q_doublevalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDoubleValidator* self, const char* name, QVariant* value ```
bool q_doublevalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDoubleValidator* self, const char* name ```
QVariant* q_doublevalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDoubleValidator* self ```
const char** q_doublevalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDoubleValidator* self ```
QBindingStorage* q_doublevalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDoubleValidator* self ```
const QBindingStorage* q_doublevalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleValidator* self ```
void q_doublevalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleValidator* self, void (*slot)(QObject*) ```
void q_doublevalidator_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDoubleValidator* self ```
QObject* q_doublevalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDoubleValidator* self, const char* classname ```
bool q_doublevalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDoubleValidator* self ```
void q_doublevalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDoubleValidator* self, int interval, enum Qt__TimerType timerType ```
int32_t q_doublevalidator_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_doublevalidator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDoubleValidator* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_doublevalidator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleValidator* self, QObject* param1 ```
void q_doublevalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleValidator* self, void (*slot)(QObject*, QObject*) ```
void q_doublevalidator_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QEvent* event ```
bool q_doublevalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QEvent* event ```
bool q_doublevalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, bool (*slot)(QDoubleValidator*, QEvent*) ```
void q_doublevalidator_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QObject* watched, QEvent* event ```
bool q_doublevalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QObject* watched, QEvent* event ```
bool q_doublevalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, bool (*slot)(QDoubleValidator*, QObject*, QEvent*) ```
void q_doublevalidator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QTimerEvent* event ```
void q_doublevalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QTimerEvent* event ```
void q_doublevalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, QTimerEvent*) ```
void q_doublevalidator_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QChildEvent* event ```
void q_doublevalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QChildEvent* event ```
void q_doublevalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, QChildEvent*) ```
void q_doublevalidator_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QEvent* event ```
void q_doublevalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QEvent* event ```
void q_doublevalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, QEvent*) ```
void q_doublevalidator_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QMetaMethod* signal ```
void q_doublevalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QMetaMethod* signal ```
void q_doublevalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, QMetaMethod*) ```
void q_doublevalidator_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QMetaMethod* signal ```
void q_doublevalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QMetaMethod* signal ```
void q_doublevalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, void (*slot)(QDoubleValidator*, QMetaMethod*) ```
void q_doublevalidator_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self ```
QObject* q_doublevalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self ```
QObject* q_doublevalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, QObject* (*slot)() ```
void q_doublevalidator_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self ```
int32_t q_doublevalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self ```
int32_t q_doublevalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, int32_t (*slot)() ```
void q_doublevalidator_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, const char* signal ```
int32_t q_doublevalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, const char* signal ```
int32_t q_doublevalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, int32_t (*slot)(QDoubleValidator*, const char*) ```
void q_doublevalidator_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleValidator* self, QMetaMethod* signal ```
bool q_doublevalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleValidator* self, QMetaMethod* signal ```
bool q_doublevalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleValidator* self, bool (*slot)(QDoubleValidator*, QMetaMethod*) ```
void q_doublevalidator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDoubleValidator* self, void (*slot)(QObject*, const char*) ```
void q_doublevalidator_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#dtor.QDoubleValidator)
///
/// Delete this object from C++ memory.
///
/// ``` QDoubleValidator* self ```
void q_doublevalidator_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpressionvalidator.html

/// q_regularexpressionvalidator_new constructs a new QRegularExpressionValidator object.
///
///
QRegularExpressionValidator* q_regularexpressionvalidator_new();

/// q_regularexpressionvalidator_new2 constructs a new QRegularExpressionValidator object.
///
/// ``` QRegularExpression* re ```
QRegularExpressionValidator* q_regularexpressionvalidator_new2(void* re);

/// q_regularexpressionvalidator_new3 constructs a new QRegularExpressionValidator object.
///
/// ``` QObject* parent ```
QRegularExpressionValidator* q_regularexpressionvalidator_new3(void* parent);

/// q_regularexpressionvalidator_new4 constructs a new QRegularExpressionValidator object.
///
/// ``` QRegularExpression* re, QObject* parent ```
QRegularExpressionValidator* q_regularexpressionvalidator_new4(void* re, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QRegularExpressionValidator* self ```
const QMetaObject* q_regularexpressionvalidator_meta_object(void* self);

/// ``` QRegularExpressionValidator* self, const char* param1 ```
void* q_regularexpressionvalidator_metacast(void* self, const char* param1);

/// ``` QRegularExpressionValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_regularexpressionvalidator_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QRegularExpressionValidator* self, int32_t (*slot)(QRegularExpressionValidator*, enum QMetaObject__Call, int, void*) ```
void q_regularexpressionvalidator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QRegularExpressionValidator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_regularexpressionvalidator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_regularexpressionvalidator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// ``` QRegularExpressionValidator* self, const char* input, int* pos ```
int64_t q_regularexpressionvalidator_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// ``` QRegularExpressionValidator* self, int64_t (*slot)(QRegularExpressionValidator*, const char*, int*) ```
void q_regularexpressionvalidator_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// Base class method implementation
///
/// ``` QRegularExpressionValidator* self, const char* input, int* pos ```
int64_t q_regularexpressionvalidator_qbase_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpression)
///
/// ``` QRegularExpressionValidator* self ```
QRegularExpression* q_regularexpressionvalidator_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#setRegularExpression)
///
/// ``` QRegularExpressionValidator* self, QRegularExpression* re ```
void q_regularexpressionvalidator_set_regular_expression(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpressionChanged)
///
/// ``` QRegularExpressionValidator* self, QRegularExpression* re ```
void q_regularexpressionvalidator_regular_expression_changed(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpressionChanged)
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, QRegularExpression*) ```
void q_regularexpressionvalidator_on_regular_expression_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_regularexpressionvalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_regularexpressionvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// ``` QRegularExpressionValidator* self, QLocale* locale ```
void q_regularexpressionvalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// ``` QRegularExpressionValidator* self ```
QLocale* q_regularexpressionvalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QRegularExpressionValidator* self ```
void q_regularexpressionvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QValidator*) ```
void q_regularexpressionvalidator_on_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QRegularExpressionValidator* self ```
const char* q_regularexpressionvalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QRegularExpressionValidator* self, char* name ```
void q_regularexpressionvalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QRegularExpressionValidator* self ```
bool q_regularexpressionvalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QRegularExpressionValidator* self ```
bool q_regularexpressionvalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QRegularExpressionValidator* self ```
bool q_regularexpressionvalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QRegularExpressionValidator* self ```
bool q_regularexpressionvalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QRegularExpressionValidator* self, bool b ```
bool q_regularexpressionvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QRegularExpressionValidator* self ```
QThread* q_regularexpressionvalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRegularExpressionValidator* self, QThread* thread ```
void q_regularexpressionvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRegularExpressionValidator* self, int interval ```
int32_t q_regularexpressionvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRegularExpressionValidator* self, int id ```
void q_regularexpressionvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QRegularExpressionValidator* self ```
const libqt_list /* of QObject* */ q_regularexpressionvalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QRegularExpressionValidator* self, QObject* parent ```
void q_regularexpressionvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QRegularExpressionValidator* self, QObject* filterObj ```
void q_regularexpressionvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QRegularExpressionValidator* self, QObject* obj ```
void q_regularexpressionvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_regularexpressionvalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRegularExpressionValidator* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_regularexpressionvalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_regularexpressionvalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_regularexpressionvalidator_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QRegularExpressionValidator* self ```
void q_regularexpressionvalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QRegularExpressionValidator* self ```
void q_regularexpressionvalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QRegularExpressionValidator* self, const char* name, QVariant* value ```
bool q_regularexpressionvalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QRegularExpressionValidator* self, const char* name ```
QVariant* q_regularexpressionvalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QRegularExpressionValidator* self ```
const char** q_regularexpressionvalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRegularExpressionValidator* self ```
QBindingStorage* q_regularexpressionvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRegularExpressionValidator* self ```
const QBindingStorage* q_regularexpressionvalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRegularExpressionValidator* self ```
void q_regularexpressionvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QObject*) ```
void q_regularexpressionvalidator_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QRegularExpressionValidator* self ```
QObject* q_regularexpressionvalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QRegularExpressionValidator* self, const char* classname ```
bool q_regularexpressionvalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QRegularExpressionValidator* self ```
void q_regularexpressionvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRegularExpressionValidator* self, int interval, enum Qt__TimerType timerType ```
int32_t q_regularexpressionvalidator_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_regularexpressionvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRegularExpressionValidator* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_regularexpressionvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRegularExpressionValidator* self, QObject* param1 ```
void q_regularexpressionvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QObject*, QObject*) ```
void q_regularexpressionvalidator_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, const char* param1 ```
void q_regularexpressionvalidator_fixup(void* self, const char* param1);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, const char* param1 ```
void q_regularexpressionvalidator_qbase_fixup(void* self, const char* param1);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, const char*) ```
void q_regularexpressionvalidator_on_fixup(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QEvent* event ```
bool q_regularexpressionvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QEvent* event ```
bool q_regularexpressionvalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, bool (*slot)(QRegularExpressionValidator*, QEvent*) ```
void q_regularexpressionvalidator_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QObject* watched, QEvent* event ```
bool q_regularexpressionvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QObject* watched, QEvent* event ```
bool q_regularexpressionvalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, bool (*slot)(QRegularExpressionValidator*, QObject*, QEvent*) ```
void q_regularexpressionvalidator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QTimerEvent* event ```
void q_regularexpressionvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QTimerEvent* event ```
void q_regularexpressionvalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, QTimerEvent*) ```
void q_regularexpressionvalidator_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QChildEvent* event ```
void q_regularexpressionvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QChildEvent* event ```
void q_regularexpressionvalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, QChildEvent*) ```
void q_regularexpressionvalidator_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QEvent* event ```
void q_regularexpressionvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QEvent* event ```
void q_regularexpressionvalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, QEvent*) ```
void q_regularexpressionvalidator_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QMetaMethod* signal ```
void q_regularexpressionvalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QMetaMethod* signal ```
void q_regularexpressionvalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, QMetaMethod*) ```
void q_regularexpressionvalidator_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QMetaMethod* signal ```
void q_regularexpressionvalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QMetaMethod* signal ```
void q_regularexpressionvalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QRegularExpressionValidator*, QMetaMethod*) ```
void q_regularexpressionvalidator_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self ```
QObject* q_regularexpressionvalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self ```
QObject* q_regularexpressionvalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QObject* (*slot)() ```
void q_regularexpressionvalidator_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self ```
int32_t q_regularexpressionvalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self ```
int32_t q_regularexpressionvalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, int32_t (*slot)() ```
void q_regularexpressionvalidator_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, const char* signal ```
int32_t q_regularexpressionvalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, const char* signal ```
int32_t q_regularexpressionvalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, int32_t (*slot)(QRegularExpressionValidator*, const char*) ```
void q_regularexpressionvalidator_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QMetaMethod* signal ```
bool q_regularexpressionvalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, QMetaMethod* signal ```
bool q_regularexpressionvalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRegularExpressionValidator* self, bool (*slot)(QRegularExpressionValidator*, QMetaMethod*) ```
void q_regularexpressionvalidator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QRegularExpressionValidator* self, void (*slot)(QObject*, const char*) ```
void q_regularexpressionvalidator_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#dtor.QRegularExpressionValidator)
///
/// Delete this object from C++ memory.
///
/// ``` QRegularExpressionValidator* self ```
void q_regularexpressionvalidator_delete(void* self);

/// https://doc.qt.io/qt-6/qvalidator.html#types

typedef enum {
    QVALIDATOR_STATE_INVALID = 0,
    QVALIDATOR_STATE_INTERMEDIATE = 1,
    QVALIDATOR_STATE_ACCEPTABLE = 2
} QValidator__State;

typedef enum {
    QDOUBLEVALIDATOR_NOTATION_STANDARDNOTATION = 0,
    QDOUBLEVALIDATOR_NOTATION_SCIENTIFICNOTATION = 1
} QDoubleValidator__Notation;

#endif
