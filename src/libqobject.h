#pragma once
#ifndef SRC_QT6C_LIBQOBJECT_H
#define SRC_QT6C_LIBQOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#q_ptr-var)
///
/// @param self QObjectData*
///
QObject* q_objectdata_q_ptr(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#q_ptr-var)
///
/// @param self QObjectData*
/// @param q_ptr QObject*
///
void q_objectdata_set_q_ptr(void* self, void* q_ptr);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#parent-var)
///
/// @param self QObjectData*
///
QObject* q_objectdata_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#parent-var)
///
/// @param self QObjectData*
/// @param parent QObject*
///
void q_objectdata_set_parent(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#children-var)
///
/// @param self QObjectData*
///
libqt_list /* of QObject* */ q_objectdata_children(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#children-var)
///
/// @param self QObjectData*
/// @param children libqt_list /* of QObject* */
///
void q_objectdata_set_children(void* self, libqt_list children);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isWidget-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_is_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isWidget-var)
///
/// @param self QObjectData*
/// @param isWidget uint32_t
///
void q_objectdata_set_is_widget(void* self, uint32_t isWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#blockSig-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_block_sig(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#blockSig-var)
///
/// @param self QObjectData*
/// @param blockSig uint32_t
///
void q_objectdata_set_block_sig(void* self, uint32_t blockSig);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#wasDeleted-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_was_deleted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#wasDeleted-var)
///
/// @param self QObjectData*
/// @param wasDeleted uint32_t
///
void q_objectdata_set_was_deleted(void* self, uint32_t wasDeleted);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isDeletingChildren-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_is_deleting_children(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isDeletingChildren-var)
///
/// @param self QObjectData*
/// @param isDeletingChildren uint32_t
///
void q_objectdata_set_is_deleting_children(void* self, uint32_t isDeletingChildren);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#sendChildEvents-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_send_child_events(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#sendChildEvents-var)
///
/// @param self QObjectData*
/// @param sendChildEvents uint32_t
///
void q_objectdata_set_send_child_events(void* self, uint32_t sendChildEvents);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#receiveChildEvents-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_receive_child_events(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#receiveChildEvents-var)
///
/// @param self QObjectData*
/// @param receiveChildEvents uint32_t
///
void q_objectdata_set_receive_child_events(void* self, uint32_t receiveChildEvents);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isWindow-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_is_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isWindow-var)
///
/// @param self QObjectData*
/// @param isWindow uint32_t
///
void q_objectdata_set_is_window(void* self, uint32_t isWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#deleteLaterCalled-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_delete_later_called(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#deleteLaterCalled-var)
///
/// @param self QObjectData*
/// @param deleteLaterCalled uint32_t
///
void q_objectdata_set_delete_later_called(void* self, uint32_t deleteLaterCalled);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isQuickItem-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_is_quick_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#isQuickItem-var)
///
/// @param self QObjectData*
/// @param isQuickItem uint32_t
///
void q_objectdata_set_is_quick_item(void* self, uint32_t isQuickItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#willBeWidget-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_will_be_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#willBeWidget-var)
///
/// @param self QObjectData*
/// @param willBeWidget uint32_t
///
void q_objectdata_set_will_be_widget(void* self, uint32_t willBeWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#wasWidget-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_was_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#wasWidget-var)
///
/// @param self QObjectData*
/// @param wasWidget uint32_t
///
void q_objectdata_set_was_widget(void* self, uint32_t wasWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#receiveParentEvents-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_receive_parent_events(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#receiveParentEvents-var)
///
/// @param self QObjectData*
/// @param receiveParentEvents uint32_t
///
void q_objectdata_set_receive_parent_events(void* self, uint32_t receiveParentEvents);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#unused-var)
///
/// @param self QObjectData*
///
uint32_t q_objectdata_unused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#unused-var)
///
/// @param self QObjectData*
/// @param unused uint32_t
///
void q_objectdata_set_unused(void* self, uint32_t unused);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#bindingStorage-var)
///
/// @param self QObjectData*
///
QBindingStorage* q_objectdata_binding_storage(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#bindingStorage-var)
///
/// @param self QObjectData*
/// @param bindingStorage QBindingStorage*
///
void q_objectdata_set_binding_storage(void* self, void* bindingStorage);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#dynamicMetaObject)
///
/// @param self QObjectData*
///
QMetaObject* q_objectdata_dynamic_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectdata.html#dtor.QObjectData)
///
/// Delete this object from C++ memory.
///
/// @param self QObjectData*
///
void q_objectdata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html)

/// q_object_new constructs a new QObject object.
///
QObject* q_object_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html)

/// q_object_new2 constructs a new QObject object.
///
/// @param parent QObject*
///
QObject* q_object_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QObject*
///
const QMetaObject* q_object_meta_object(void* self);

/// @param self QObject*
/// @param param1 const char*
///
void* q_object_metacast(void* self, const char* param1);

/// @param self QObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_object_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback int32_t func(QObject* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_object_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_object_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_object_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QObject*
/// @param event QEvent*
///
bool q_object_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback bool func(QObject* self, QEvent* event)
///
void q_object_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QEvent*
///
bool q_object_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_object_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback bool func(QObject* self, QObject* watched, QEvent* event)
///
void q_object_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_object_qbase_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QObject*
///
const char* q_object_object_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QObject*
/// @param name char*
///
void q_object_set_object_name(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QObject*
///
bool q_object_is_widget_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QObject*
///
bool q_object_is_window_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QObject*
///
bool q_object_is_quick_item_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QObject*
///
bool q_object_signals_blocked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QObject*
/// @param b bool
///
bool q_object_block_signals(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QObject*
///
QThread* q_object_thread(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObject*
/// @param thread QThread*
///
bool q_object_move_to_thread(void* self, void* thread);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObject*
/// @param interval int
///
int32_t q_object_start_timer(void* self, int interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObject*
/// @param id int
///
void q_object_kill_timer(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObject*
/// @param id enum Qt__TimerId
///
void q_object_kill_timer2(void* self, int32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QObject*
///
libqt_list /* of QObject* */ q_object_children(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QObject*
/// @param parent QObject*
///
void q_object_set_parent(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QObject*
/// @param filterObj QObject*
///
void q_object_install_event_filter(void* self, void* filterObj);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QObject*
/// @param obj QObject*
///
void q_object_remove_event_filter(void* self, void* obj);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_object_connect(void* sender, void* signal, void* receiver, void* method);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_object_connect2(void* self, void* sender, const char* signal, const char* member);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_object_disconnect(void* sender, void* signal, void* receiver, void* member);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_object_disconnect2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QObject*
///
void q_object_dump_object_tree(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QObject*
///
void q_object_dump_object_info(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QObject*
/// @param name const char*
/// @param value QVariant*
///
bool q_object_set_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QObject*
/// @param name const char*
///
QVariant* q_object_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QObject*
///
const char** q_object_dynamic_property_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObject*
///
QBindingStorage* q_object_binding_storage(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObject*
///
const QBindingStorage* q_object_binding_storage2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
///
void q_object_destroyed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
/// @param callback void func(QObject* self)
///
void q_object_on_destroyed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QObject*
///
QObject* q_object_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QObject*
/// @param classname const char*
///
bool q_object_inherits(void* self, const char* classname);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QObject*
///
void q_object_delete_later(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// @param self QObject*
///
QObject* q_object_sender(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback QObject* func()
///
void q_object_on_sender(void* self, QObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Base class method implementation
///
/// @param self QObject*
///
QObject* q_object_qbase_sender(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// @param self QObject*
///
int32_t q_object_sender_signal_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback int32_t func()
///
void q_object_on_sender_signal_index(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Base class method implementation
///
/// @param self QObject*
///
int32_t q_object_qbase_sender_signal_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// @param self QObject*
/// @param signal const char*
///
int32_t q_object_receivers(void* self, const char* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback int32_t func(QObject* self, const char* signal)
///
void q_object_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal const char*
///
int32_t q_object_qbase_receivers(void* self, const char* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// @param self QObject*
/// @param signal QMetaMethod*
///
bool q_object_is_signal_connected(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback bool func(QObject* self, QMetaMethod* signal)
///
void q_object_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal QMetaMethod*
///
bool q_object_qbase_is_signal_connected(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// @param self QObject*
/// @param event QTimerEvent*
///
void q_object_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void func(QObject* self, QTimerEvent* event)
///
void q_object_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QTimerEvent*
///
void q_object_qbase_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// @param self QObject*
/// @param event QChildEvent*
///
void q_object_child_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void func(QObject* self, QChildEvent* event)
///
void q_object_on_child_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QChildEvent*
///
void q_object_qbase_child_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// @param self QObject*
/// @param event QEvent*
///
void q_object_custom_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void func(QObject* self, QEvent* event)
///
void q_object_on_custom_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param event QEvent*
///
void q_object_qbase_custom_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// @param self QObject*
/// @param signal QMetaMethod*
///
void q_object_connect_notify(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void func(QObject* self, QMetaMethod* signal)
///
void q_object_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal QMetaMethod*
///
void q_object_qbase_connect_notify(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// @param self QObject*
/// @param signal QMetaMethod*
///
void q_object_disconnect_notify(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QObject*
/// @param callback void func(QObject* self, QMetaMethod* signal)
///
void q_object_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Base class method implementation
///
/// @param self QObject*
/// @param signal QMetaMethod*
///
void q_object_qbase_disconnect_notify(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_object_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_object_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObject*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_object_move_to_thread2(void* self, void* thread, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_object_start_timer22(void* self, int interval, int32_t timerType);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_object_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_object_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
/// @param param1 QObject*
///
void q_object_destroyed1(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObject*
/// @param callback void func(QObject* self, QObject* param1)
///
void q_object_on_destroyed1(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QObject*
/// @param callback void func(QObject* self, const char* objectName)
///
void q_object_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dtor.QObject)
///
/// Delete this object from C++ memory.
///
/// @param self QObject*
///
void q_object_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalblocker.html)

/// q_signalblocker_new constructs a new QSignalBlocker object.
///
/// @param o QObject*
///
QSignalBlocker* q_signalblocker_new(void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalblocker.html)

/// q_signalblocker_new2 constructs a new QSignalBlocker object.
///
/// @param o QObject*
///
QSignalBlocker* q_signalblocker_new2(void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalblocker.html#reblock)
///
/// @param self QSignalBlocker*
///
void q_signalblocker_reblock(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalblocker.html#unblock)
///
/// @param self QSignalBlocker*
///
void q_signalblocker_unblock(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalblocker.html#dismiss)
///
/// @param self QSignalBlocker*
///
void q_signalblocker_dismiss(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalblocker.html#dtor.QSignalBlocker)
///
/// Delete this object from C++ memory.
///
/// @param self QSignalBlocker*
///
void q_signalblocker_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#public-types)

typedef enum {
    QOBJECTDATA__CHECKFORPARENTCHILDLOOPSWARNDEPTH = 4096
} QObjectData__;

#endif
