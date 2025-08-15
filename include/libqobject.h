#pragma once
#ifndef SRCQT6C_LIBQOBJECT_H
#define SRCQT6C_LIBQOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qobjectdata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dynamicMetaObject)
///
/// @param self QObjectData*
QMetaObject* q_objectdata_dynamic_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dtor.QObjectData)
///
/// Delete this object from C++ memory.
///
/// @param self QObjectData*
void q_objectdata_delete(void* self);

/// https://doc.qt.io/qt-6/qobject.html

/// q_object_new constructs a new QObject object.
///
QObject* q_object_new();

/// q_object_new2 constructs a new QObject object.
///
/// @param parent QObject*
QObject* q_object_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QObject*
const QMetaObject* q_object_meta_object(void* self);

/// @param self QObject*
/// @param param1 const char*
void* q_object_metacast(void* self, const char* param1);

/// @param self QObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_object_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback int32_t fn(QObject*, enum QMetaObject__Call, int, void*)
void q_object_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_object_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_object_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QObject*
/// @param event QEvent*
bool q_object_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback bool fn(QObject*, QEvent*)
void q_object_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QEvent*
bool q_object_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QObject*
/// @param watched QObject*
/// @param event QEvent*
bool q_object_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback bool fn(QObject*, QObject*, QEvent*)
void q_object_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param watched QObject*
/// @param event QEvent*
bool q_object_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QObject*
const char* q_object_object_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QObject*
/// @param name char*
void q_object_set_object_name(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QObject*
bool q_object_is_widget_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QObject*
bool q_object_is_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QObject*
bool q_object_is_quick_item_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QObject*
bool q_object_signals_blocked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QObject*
/// @param b bool
bool q_object_block_signals(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QObject*
QThread* q_object_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObject*
/// @param thread QThread*
bool q_object_move_to_thread(void* self, void* thread);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObject*
/// @param interval int
int32_t q_object_start_timer(void* self, int interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObject*
/// @param id int
void q_object_kill_timer(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObject*
/// @param id enum Qt__TimerId
void q_object_kill_timer2(void* self, int64_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QObject*
libqt_list /* of QObject* */ q_object_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QObject*
/// @param parent QObject*
void q_object_set_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QObject*
/// @param filterObj QObject*
void q_object_install_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QObject*
/// @param obj QObject*
void q_object_remove_event_filter(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_object_connect(void* sender, void* signal, void* receiver, void* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_object_connect2(void* self, void* sender, const char* signal, const char* member);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_object_disconnect(void* sender, void* signal, void* receiver, void* member);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_object_disconnect2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QObject*
void q_object_dump_object_tree(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QObject*
void q_object_dump_object_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QObject*
/// @param name const char*
/// @param value QVariant*
bool q_object_set_property(void* self, const char* name, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QObject*
/// @param name const char*
QVariant* q_object_property(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QObject*
const char** q_object_dynamic_property_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObject*
QBindingStorage* q_object_binding_storage(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObject*
const QBindingStorage* q_object_binding_storage2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
void q_object_destroyed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
/// @param callback void fn(QObject*)
void q_object_on_destroyed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QObject*
QObject* q_object_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QObject*
/// @param classname const char*
bool q_object_inherits(void* self, const char* classname);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QObject*
void q_object_delete_later(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// @param self QObject*
QObject* q_object_sender(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback QObject* fn()
void q_object_on_sender(void* self, QObject* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Base class method implementation
///
/// @param self QObject*
QObject* q_object_qbase_sender(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// @param self QObject*
int32_t q_object_sender_signal_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback int32_t fn()
void q_object_on_sender_signal_index(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Base class method implementation
///
/// @param self QObject*
int32_t q_object_qbase_sender_signal_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// @param self QObject*
/// @param signal const char*
int32_t q_object_receivers(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback int32_t fn(QObject*, const char*)
void q_object_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal const char*
int32_t q_object_qbase_receivers(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// @param self QObject*
/// @param signal QMetaMethod*
bool q_object_is_signal_connected(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback bool fn(QObject*, QMetaMethod*)
void q_object_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal QMetaMethod*
bool q_object_qbase_is_signal_connected(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// @param self QObject*
/// @param event QTimerEvent*
void q_object_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void fn(QObject*, QTimerEvent*)
void q_object_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QTimerEvent*
void q_object_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// @param self QObject*
/// @param event QChildEvent*
void q_object_child_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void fn(QObject*, QChildEvent*)
void q_object_on_child_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QChildEvent*
void q_object_qbase_child_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// @param self QObject*
/// @param event QEvent*
void q_object_custom_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void fn(QObject*, QEvent*)
void q_object_on_custom_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QEvent*
void q_object_qbase_custom_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// @param self QObject*
/// @param signal QMetaMethod*
void q_object_connect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void fn(QObject*, QMetaMethod*)
void q_object_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal QMetaMethod*
void q_object_qbase_connect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// @param self QObject*
/// @param signal QMetaMethod*
void q_object_disconnect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void fn(QObject*, QMetaMethod*)
void q_object_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal QMetaMethod*
void q_object_qbase_disconnect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_object_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_object_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObject*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_object_move_to_thread2(void* self, void* thread, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_object_start_timer22(void* self, int interval, int64_t timerType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_object_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_object_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
/// @param param1 QObject*
void q_object_destroyed1(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
/// @param callback void fn(QObject*, QObject*)
void q_object_on_destroyed1(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QObject*
/// @param callback void fn(QObject*, const char*)
void q_object_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dtor.QObject)
///
/// Delete this object from C++ memory.
///
/// @param self QObject*
void q_object_delete(void* self);

/// https://doc.qt.io/qt-6/qsignalblocker.html

/// q_signalblocker_new constructs a new QSignalBlocker object.
///
/// @param o QObject*
QSignalBlocker* q_signalblocker_new(void* o);

/// q_signalblocker_new2 constructs a new QSignalBlocker object.
///
/// @param o QObject*
QSignalBlocker* q_signalblocker_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#reblock)
///
/// @param self QSignalBlocker*
void q_signalblocker_reblock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#unblock)
///
/// @param self QSignalBlocker*
void q_signalblocker_unblock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#dismiss)
///
/// @param self QSignalBlocker*
void q_signalblocker_dismiss(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#dtor.QSignalBlocker)
///
/// Delete this object from C++ memory.
///
/// @param self QSignalBlocker*
void q_signalblocker_delete(void* self);

/// https://doc.qt.io/qt-6/qobject.html#types

typedef enum {
    QOBJECTDATA__CHECKFORPARENTCHILDLOOPSWARNDEPTH = 4096
} QObjectData__;

#endif
