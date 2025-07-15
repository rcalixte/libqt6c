#pragma once
#ifndef SRCQT6C_LIBQOBJECT_H
#define SRCQT6C_LIBQOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qobjectdata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dynamicMetaObject)
///
/// ``` QObjectData* self ```
QMetaObject* q_objectdata_dynamic_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dtor.QObjectData)
///
/// Delete this object from C++ memory.
///
/// ``` QObjectData* self ```
void q_objectdata_delete(void* self);

/// https://doc.qt.io/qt-6/qobject.html

/// q_object_new constructs a new QObject object.
///
///
QObject* q_object_new();

/// q_object_new2 constructs a new QObject object.
///
/// ``` QObject* parent ```
QObject* q_object_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QObject* self ```
const QMetaObject* q_object_meta_object(void* self);

/// ``` QObject* self, const char* param1 ```
void* q_object_metacast(void* self, const char* param1);

/// ``` QObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_object_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QObject* self, int32_t (*slot)(QObject*, enum QMetaObject__Call, int, void*) ```
void q_object_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_object_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_object_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QObject* self, QEvent* event ```
bool q_object_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, bool (*slot)(QObject*, QEvent*) ```
void q_object_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Base class method implementation
///
/// ``` QObject* self, QEvent* event ```
bool q_object_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QObject* self, QObject* watched, QEvent* event ```
bool q_object_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, bool (*slot)(QObject*, QObject*, QEvent*) ```
void q_object_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Base class method implementation
///
/// ``` QObject* self, QObject* watched, QEvent* event ```
bool q_object_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QObject* self ```
const char* q_object_object_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QObject* self, char* name ```
void q_object_set_object_name(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QObject* self ```
bool q_object_is_widget_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QObject* self ```
bool q_object_is_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QObject* self ```
bool q_object_is_quick_item_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QObject* self ```
bool q_object_signals_blocked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QObject* self, bool b ```
bool q_object_block_signals(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QObject* self ```
QThread* q_object_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QObject* self, QThread* thread ```
bool q_object_move_to_thread(void* self, void* thread);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObject* self, int interval ```
int32_t q_object_start_timer(void* self, int interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QObject* self, int id ```
void q_object_kill_timer(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QObject* self, enum Qt__TimerId id ```
void q_object_kill_timer2(void* self, int64_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QObject* self ```
libqt_list /* of QObject* */ q_object_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QObject* self, QObject* parent ```
void q_object_set_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QObject* self, QObject* filterObj ```
void q_object_install_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QObject* self, QObject* obj ```
void q_object_remove_event_filter(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_object_connect(void* sender, void* signal, void* receiver, void* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_object_connect2(void* self, void* sender, const char* signal, const char* member);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_object_disconnect(void* sender, void* signal, void* receiver, void* member);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_object_disconnect2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QObject* self ```
void q_object_dump_object_tree(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QObject* self ```
void q_object_dump_object_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QObject* self, const char* name, QVariant* value ```
bool q_object_set_property(void* self, const char* name, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QObject* self, const char* name ```
QVariant* q_object_property(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QObject* self ```
const char** q_object_dynamic_property_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObject* self ```
QBindingStorage* q_object_binding_storage(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObject* self ```
const QBindingStorage* q_object_binding_storage2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObject* self ```
void q_object_destroyed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObject* self, void (*slot)(QObject*) ```
void q_object_on_destroyed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QObject* self ```
QObject* q_object_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QObject* self, const char* classname ```
bool q_object_inherits(void* self, const char* classname);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QObject* self ```
void q_object_delete_later(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// ``` QObject* self ```
QObject* q_object_sender(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, QObject* (*slot)() ```
void q_object_on_sender(void* self, QObject* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Base class method implementation
///
/// ``` QObject* self ```
QObject* q_object_qbase_sender(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// ``` QObject* self ```
int32_t q_object_sender_signal_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, int32_t (*slot)() ```
void q_object_on_sender_signal_index(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Base class method implementation
///
/// ``` QObject* self ```
int32_t q_object_qbase_sender_signal_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// ``` QObject* self, const char* signal ```
int32_t q_object_receivers(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, int32_t (*slot)(QObject*, const char*) ```
void q_object_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Base class method implementation
///
/// ``` QObject* self, const char* signal ```
int32_t q_object_qbase_receivers(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// ``` QObject* self, QMetaMethod* signal ```
bool q_object_is_signal_connected(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, bool (*slot)(QObject*, QMetaMethod*) ```
void q_object_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Base class method implementation
///
/// ``` QObject* self, QMetaMethod* signal ```
bool q_object_qbase_is_signal_connected(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// ``` QObject* self, QTimerEvent* event ```
void q_object_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QTimerEvent*) ```
void q_object_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QObject* self, QTimerEvent* event ```
void q_object_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// ``` QObject* self, QChildEvent* event ```
void q_object_child_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QChildEvent*) ```
void q_object_on_child_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Base class method implementation
///
/// ``` QObject* self, QChildEvent* event ```
void q_object_qbase_child_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// ``` QObject* self, QEvent* event ```
void q_object_custom_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QEvent*) ```
void q_object_on_custom_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Base class method implementation
///
/// ``` QObject* self, QEvent* event ```
void q_object_qbase_custom_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_connect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QMetaMethod*) ```
void q_object_on_connect_notify(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Base class method implementation
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_qbase_connect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_disconnect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QMetaMethod*) ```
void q_object_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Base class method implementation
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_qbase_disconnect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_object_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_object_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QObject* self, QThread* thread, Disambiguated_t* param2 ```
bool q_object_move_to_thread2(void* self, void* thread, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObject* self, int interval, enum Qt__TimerType timerType ```
int32_t q_object_start_timer22(void* self, int interval, int64_t timerType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_object_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_object_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObject* self, QObject* param1 ```
void q_object_destroyed1(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObject* self, void (*slot)(QObject*, QObject*) ```
void q_object_on_destroyed1(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QObject* self, void (*slot)(QObject*, const char*) ```
void q_object_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dtor.QObject)
///
/// Delete this object from C++ memory.
///
/// ``` QObject* self ```
void q_object_delete(void* self);

/// https://doc.qt.io/qt-6/qsignalblocker.html

/// q_signalblocker_new constructs a new QSignalBlocker object.
///
/// ``` QObject* o ```
QSignalBlocker* q_signalblocker_new(void* o);

/// q_signalblocker_new2 constructs a new QSignalBlocker object.
///
/// ``` QObject* o ```
QSignalBlocker* q_signalblocker_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#reblock)
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_reblock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#unblock)
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_unblock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#dismiss)
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_dismiss(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#dtor.QSignalBlocker)
///
/// Delete this object from C++ memory.
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_delete(void* self);

/// https://doc.qt.io/qt-6/qobject.html#types

typedef enum {
    QOBJECTDATA__CHECKFORPARENTCHILDLOOPSWARNDEPTH = 4096
} QObjectData__;

#endif
