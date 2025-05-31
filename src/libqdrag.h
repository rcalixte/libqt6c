#pragma once
#ifndef SRCQT6C_LIBQDRAG_H
#define SRCQT6C_LIBQDRAG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qdrag.html

/// q_drag_new constructs a new QDrag object.
///
/// ``` QObject* dragSource ```
QDrag* q_drag_new(void* dragSource);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDrag* self ```
const QMetaObject* q_drag_meta_object(void* self);

/// ``` QDrag* self, const char* param1 ```
void* q_drag_metacast(void* self, const char* param1);

/// ``` QDrag* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_drag_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDrag* self, int32_t (*slot)(QDrag*, enum QMetaObject__Call, int, void*) ```
void q_drag_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDrag* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_drag_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_drag_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#setMimeData)
///
/// ``` QDrag* self, QMimeData* data ```
void q_drag_set_mime_data(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#mimeData)
///
/// ``` QDrag* self ```
QMimeData* q_drag_mime_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#setPixmap)
///
/// ``` QDrag* self, QPixmap* pixmap ```
void q_drag_set_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#pixmap)
///
/// ``` QDrag* self ```
QPixmap* q_drag_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#setHotSpot)
///
/// ``` QDrag* self, QPoint* hotspot ```
void q_drag_set_hot_spot(void* self, void* hotspot);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#hotSpot)
///
/// ``` QDrag* self ```
QPoint* q_drag_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#source)
///
/// ``` QDrag* self ```
QObject* q_drag_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#target)
///
/// ``` QDrag* self ```
QObject* q_drag_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#exec)
///
/// ``` QDrag* self ```
int64_t q_drag_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#exec)
///
/// ``` QDrag* self, int supportedActions, enum Qt__DropAction defaultAction ```
int64_t q_drag_exec2(void* self, int64_t supportedActions, int64_t defaultAction);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#setDragCursor)
///
/// ``` QDrag* self, QPixmap* cursor, enum Qt__DropAction action ```
void q_drag_set_drag_cursor(void* self, void* cursor, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#dragCursor)
///
/// ``` QDrag* self, enum Qt__DropAction action ```
QPixmap* q_drag_drag_cursor(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#supportedActions)
///
/// ``` QDrag* self ```
int64_t q_drag_supported_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#defaultAction)
///
/// ``` QDrag* self ```
int64_t q_drag_default_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#cancel)
///
///
void q_drag_cancel();

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#actionChanged)
///
/// ``` QDrag* self, enum Qt__DropAction action ```
void q_drag_action_changed(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#actionChanged)
///
/// ``` QDrag* self, void (*slot)(QDrag*, enum Qt__DropAction) ```
void q_drag_on_action_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#targetChanged)
///
/// ``` QDrag* self, QObject* newTarget ```
void q_drag_target_changed(void* self, void* newTarget);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#targetChanged)
///
/// ``` QDrag* self, void (*slot)(QDrag*, QObject*) ```
void q_drag_on_target_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_drag_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_drag_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#exec)
///
/// ``` QDrag* self, int supportedActions ```
int64_t q_drag_exec1(void* self, int64_t supportedActions);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDrag* self ```
const char* q_drag_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDrag* self, char* name ```
void q_drag_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDrag* self ```
bool q_drag_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDrag* self ```
bool q_drag_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDrag* self ```
bool q_drag_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDrag* self ```
bool q_drag_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDrag* self, bool b ```
bool q_drag_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDrag* self ```
QThread* q_drag_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDrag* self, QThread* thread ```
void q_drag_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDrag* self, int interval ```
int32_t q_drag_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDrag* self, int id ```
void q_drag_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDrag* self ```
const libqt_list /* of QObject* */ q_drag_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDrag* self, QObject* parent ```
void q_drag_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDrag* self, QObject* filterObj ```
void q_drag_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDrag* self, QObject* obj ```
void q_drag_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_drag_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDrag* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_drag_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_drag_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_drag_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDrag* self ```
void q_drag_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDrag* self ```
void q_drag_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDrag* self, const char* name, QVariant* value ```
bool q_drag_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDrag* self, const char* name ```
QVariant* q_drag_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDrag* self ```
const char** q_drag_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDrag* self ```
QBindingStorage* q_drag_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDrag* self ```
const QBindingStorage* q_drag_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDrag* self ```
void q_drag_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDrag* self, void (*slot)(QObject*) ```
void q_drag_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDrag* self ```
QObject* q_drag_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDrag* self, const char* classname ```
bool q_drag_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDrag* self ```
void q_drag_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDrag* self, int interval, enum Qt__TimerType timerType ```
int32_t q_drag_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_drag_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDrag* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_drag_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDrag* self, QObject* param1 ```
void q_drag_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDrag* self, void (*slot)(QObject*, QObject*) ```
void q_drag_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QEvent* event ```
bool q_drag_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QEvent* event ```
bool q_drag_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, bool (*slot)(QDrag*, QEvent*) ```
void q_drag_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QObject* watched, QEvent* event ```
bool q_drag_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QObject* watched, QEvent* event ```
bool q_drag_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, bool (*slot)(QDrag*, QObject*, QEvent*) ```
void q_drag_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QTimerEvent* event ```
void q_drag_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QTimerEvent* event ```
void q_drag_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, void (*slot)(QDrag*, QTimerEvent*) ```
void q_drag_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QChildEvent* event ```
void q_drag_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QChildEvent* event ```
void q_drag_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, void (*slot)(QDrag*, QChildEvent*) ```
void q_drag_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QEvent* event ```
void q_drag_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QEvent* event ```
void q_drag_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, void (*slot)(QDrag*, QEvent*) ```
void q_drag_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QMetaMethod* signal ```
void q_drag_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QMetaMethod* signal ```
void q_drag_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, void (*slot)(QDrag*, QMetaMethod*) ```
void q_drag_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QMetaMethod* signal ```
void q_drag_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QMetaMethod* signal ```
void q_drag_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, void (*slot)(QDrag*, QMetaMethod*) ```
void q_drag_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self ```
QObject* q_drag_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self ```
QObject* q_drag_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, QObject* (*slot)() ```
void q_drag_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self ```
int32_t q_drag_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self ```
int32_t q_drag_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, int32_t (*slot)() ```
void q_drag_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, const char* signal ```
int32_t q_drag_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, const char* signal ```
int32_t q_drag_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, int32_t (*slot)(QDrag*, const char*) ```
void q_drag_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDrag* self, QMetaMethod* signal ```
bool q_drag_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDrag* self, QMetaMethod* signal ```
bool q_drag_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDrag* self, bool (*slot)(QDrag*, QMetaMethod*) ```
void q_drag_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDrag* self, void (*slot)(QObject*, const char*) ```
void q_drag_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdrag.html#dtor.QDrag)
///
/// Delete this object from C++ memory.
///
/// ``` QDrag* self ```
void q_drag_delete(void* self);

#endif
