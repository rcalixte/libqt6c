#pragma once
#ifndef SRCQT6C_LIBQSHORTCUT_H
#define SRCQT6C_LIBQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qshortcut.html

/// q_shortcut_new constructs a new QShortcut object.
///
/// ``` QObject* parent ```
QShortcut* q_shortcut_new(void* parent);

/// q_shortcut_new2 constructs a new QShortcut object.
///
/// ``` QKeySequence* key, QObject* parent ```
QShortcut* q_shortcut_new2(void* key, void* parent);

/// q_shortcut_new3 constructs a new QShortcut object.
///
/// ``` enum QKeySequence__StandardKey key, QObject* parent ```
QShortcut* q_shortcut_new3(int64_t key, void* parent);

/// q_shortcut_new4 constructs a new QShortcut object.
///
/// ``` QKeySequence* key, QObject* parent, const char* member ```
QShortcut* q_shortcut_new4(void* key, void* parent, const char* member);

/// q_shortcut_new5 constructs a new QShortcut object.
///
/// ``` QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember ```
QShortcut* q_shortcut_new5(void* key, void* parent, const char* member, const char* ambiguousMember);

/// q_shortcut_new6 constructs a new QShortcut object.
///
/// ``` QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, enum Qt__ShortcutContext context ```
QShortcut* q_shortcut_new6(void* key, void* parent, const char* member, const char* ambiguousMember, int64_t context);

/// q_shortcut_new7 constructs a new QShortcut object.
///
/// ``` enum QKeySequence__StandardKey key, QObject* parent, const char* member ```
QShortcut* q_shortcut_new7(int64_t key, void* parent, const char* member);

/// q_shortcut_new8 constructs a new QShortcut object.
///
/// ``` enum QKeySequence__StandardKey key, QObject* parent, const char* member, const char* ambiguousMember ```
QShortcut* q_shortcut_new8(int64_t key, void* parent, const char* member, const char* ambiguousMember);

/// q_shortcut_new9 constructs a new QShortcut object.
///
/// ``` enum QKeySequence__StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, enum Qt__ShortcutContext context ```
QShortcut* q_shortcut_new9(int64_t key, void* parent, const char* member, const char* ambiguousMember, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QShortcut* self ```
const QMetaObject* q_shortcut_meta_object(void* self);

/// ``` QShortcut* self, const char* param1 ```
void* q_shortcut_metacast(void* self, const char* param1);

/// ``` QShortcut* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_shortcut_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QShortcut* self, int32_t (*slot)(QShortcut*, enum QMetaObject__Call, int, void*) ```
void q_shortcut_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QShortcut* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_shortcut_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_shortcut_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setKey)
///
/// ``` QShortcut* self, QKeySequence* key ```
void q_shortcut_set_key(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#key)
///
/// ``` QShortcut* self ```
QKeySequence* q_shortcut_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
///
/// ``` QShortcut* self, enum QKeySequence__StandardKey key ```
void q_shortcut_set_keys(void* self, int64_t key);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
///
/// ``` QShortcut* self, libqt_list /* of QKeySequence* */ keys ```
void q_shortcut_set_keys2(void* self, libqt_list keys);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#keys)
///
/// ``` QShortcut* self ```
libqt_list /* of QKeySequence* */ q_shortcut_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setEnabled)
///
/// ``` QShortcut* self, bool enable ```
void q_shortcut_set_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#isEnabled)
///
/// ``` QShortcut* self ```
bool q_shortcut_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setContext)
///
/// ``` QShortcut* self, enum Qt__ShortcutContext context ```
void q_shortcut_set_context(void* self, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#context)
///
/// ``` QShortcut* self ```
int64_t q_shortcut_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setAutoRepeat)
///
/// ``` QShortcut* self, bool on ```
void q_shortcut_set_auto_repeat(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#autoRepeat)
///
/// ``` QShortcut* self ```
bool q_shortcut_auto_repeat(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#id)
///
/// ``` QShortcut* self ```
int32_t q_shortcut_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#setWhatsThis)
///
/// ``` QShortcut* self, const char* text ```
void q_shortcut_set_whats_this(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#whatsThis)
///
/// ``` QShortcut* self ```
const char* q_shortcut_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#activated)
///
/// ``` QShortcut* self ```
void q_shortcut_activated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#activated)
///
/// ``` QShortcut* self, void (*slot)(QShortcut*) ```
void q_shortcut_on_activated(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
///
/// ``` QShortcut* self ```
void q_shortcut_activated_ambiguously(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
///
/// ``` QShortcut* self, void (*slot)(QShortcut*) ```
void q_shortcut_on_activated_ambiguously(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// ``` QShortcut* self, QEvent* e ```
bool q_shortcut_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QShortcut* self, bool (*slot)(QShortcut*, QEvent*) ```
void q_shortcut_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// Base class method implementation
///
/// ``` QShortcut* self, QEvent* e ```
bool q_shortcut_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_shortcut_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_shortcut_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QShortcut* self ```
const char* q_shortcut_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QShortcut* self, char* name ```
void q_shortcut_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QShortcut* self ```
bool q_shortcut_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QShortcut* self ```
bool q_shortcut_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QShortcut* self ```
bool q_shortcut_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QShortcut* self ```
bool q_shortcut_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QShortcut* self, bool b ```
bool q_shortcut_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QShortcut* self ```
QThread* q_shortcut_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QShortcut* self, QThread* thread ```
bool q_shortcut_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QShortcut* self, int interval ```
int32_t q_shortcut_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QShortcut* self, int id ```
void q_shortcut_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QShortcut* self, enum Qt__TimerId id ```
void q_shortcut_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QShortcut* self ```
libqt_list /* of QObject* */ q_shortcut_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QShortcut* self, QObject* parent ```
void q_shortcut_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QShortcut* self, QObject* filterObj ```
void q_shortcut_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QShortcut* self, QObject* obj ```
void q_shortcut_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_shortcut_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QShortcut* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_shortcut_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_shortcut_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_shortcut_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QShortcut* self ```
void q_shortcut_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QShortcut* self ```
void q_shortcut_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QShortcut* self, const char* name, QVariant* value ```
bool q_shortcut_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QShortcut* self, const char* name ```
QVariant* q_shortcut_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QShortcut* self ```
const char** q_shortcut_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QShortcut* self ```
QBindingStorage* q_shortcut_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QShortcut* self ```
const QBindingStorage* q_shortcut_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QShortcut* self ```
void q_shortcut_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QShortcut* self, void (*slot)(QShortcut*) ```
void q_shortcut_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QShortcut* self ```
QObject* q_shortcut_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QShortcut* self, const char* classname ```
bool q_shortcut_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QShortcut* self ```
void q_shortcut_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QShortcut* self, QThread* thread, Disambiguated_t* param2 ```
bool q_shortcut_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QShortcut* self, int interval, enum Qt__TimerType timerType ```
int32_t q_shortcut_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_shortcut_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QShortcut* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_shortcut_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QShortcut* self, QObject* param1 ```
void q_shortcut_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, QObject*) ```
void q_shortcut_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QObject* watched, QEvent* event ```
bool q_shortcut_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QObject* watched, QEvent* event ```
bool q_shortcut_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, bool (*slot)(QShortcut*, QObject*, QEvent*) ```
void q_shortcut_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QTimerEvent* event ```
void q_shortcut_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QTimerEvent* event ```
void q_shortcut_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, QTimerEvent*) ```
void q_shortcut_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QChildEvent* event ```
void q_shortcut_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QChildEvent* event ```
void q_shortcut_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, QChildEvent*) ```
void q_shortcut_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QEvent* event ```
void q_shortcut_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QEvent* event ```
void q_shortcut_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, QEvent*) ```
void q_shortcut_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QMetaMethod* signal ```
void q_shortcut_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QMetaMethod* signal ```
void q_shortcut_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, QMetaMethod*) ```
void q_shortcut_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QMetaMethod* signal ```
void q_shortcut_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QMetaMethod* signal ```
void q_shortcut_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, QMetaMethod*) ```
void q_shortcut_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self ```
QObject* q_shortcut_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self ```
QObject* q_shortcut_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, QObject* (*slot)() ```
void q_shortcut_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self ```
int32_t q_shortcut_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self ```
int32_t q_shortcut_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, int32_t (*slot)() ```
void q_shortcut_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, const char* signal ```
int32_t q_shortcut_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, const char* signal ```
int32_t q_shortcut_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, int32_t (*slot)(QShortcut*, const char*) ```
void q_shortcut_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcut* self, QMetaMethod* signal ```
bool q_shortcut_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcut* self, QMetaMethod* signal ```
bool q_shortcut_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcut* self, bool (*slot)(QShortcut*, QMetaMethod*) ```
void q_shortcut_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QShortcut* self, void (*slot)(QShortcut*, const char*) ```
void q_shortcut_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcut.html#dtor.QShortcut)
///
/// Delete this object from C++ memory.
///
/// ``` QShortcut* self ```
void q_shortcut_delete(void* self);

#endif
