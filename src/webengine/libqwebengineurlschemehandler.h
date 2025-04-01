#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEMEHANDLER_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEMEHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqwebengineurlrequestjob.h"

/// https://doc.qt.io/qt-6/qwebengineurlschemehandler.html

/// q_webengineurlschemehandler_new constructs a new QWebEngineUrlSchemeHandler object.
///
///
QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new();

/// q_webengineurlschemehandler_new2 constructs a new QWebEngineUrlSchemeHandler object.
///
/// ``` QObject* parent ```
QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QMetaObject* q_webengineurlschemehandler_meta_object(void* self);

/// ``` QWebEngineUrlSchemeHandler* self, const char* param1 ```
void* q_webengineurlschemehandler_metacast(void* self, const char* param1);

/// ``` QWebEngineUrlSchemeHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlschemehandler_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebEngineUrlSchemeHandler* self, int32_t (*slot)(QWebEngineUrlSchemeHandler*, enum QMetaObject__Call, int, void*) ```
void q_webengineurlschemehandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebEngineUrlSchemeHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlschemehandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineurlschemehandler_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlschemehandler.html#requestStarted)
///
/// ``` QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1 ```
void q_webengineurlschemehandler_request_started(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QWebEngineUrlRequestJob*) ```
void q_webengineurlschemehandler_on_request_started(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1 ```
void q_webengineurlschemehandler_qbase_request_started(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineurlschemehandler_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineurlschemehandler_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
const char* q_webengineurlschemehandler_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* name ```
void q_webengineurlschemehandler_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineUrlSchemeHandler* self, bool b ```
bool q_webengineurlschemehandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QThread* q_webengineurlschemehandler_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlSchemeHandler* self, QThread* thread ```
void q_webengineurlschemehandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlSchemeHandler* self, int interval ```
int32_t q_webengineurlschemehandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlSchemeHandler* self, int id ```
void q_webengineurlschemehandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
libqt_list /* of QObject* */ q_webengineurlschemehandler_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* parent ```
void q_webengineurlschemehandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* filterObj ```
void q_webengineurlschemehandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* obj ```
void q_webengineurlschemehandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineurlschemehandler_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineurlschemehandler_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineurlschemehandler_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineurlschemehandler_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* name, QVariant* value ```
bool q_webengineurlschemehandler_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* name ```
QVariant* q_webengineurlschemehandler_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
const char** q_webengineurlschemehandler_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QBindingStorage* q_webengineurlschemehandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QBindingStorage* q_webengineurlschemehandler_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QObject*) ```
void q_webengineurlschemehandler_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QObject* q_webengineurlschemehandler_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* classname ```
bool q_webengineurlschemehandler_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlSchemeHandler* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineurlschemehandler_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlschemehandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlschemehandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* param1 ```
void q_webengineurlschemehandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QObject*, QObject*) ```
void q_webengineurlschemehandler_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
bool q_webengineurlschemehandler_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
bool q_webengineurlschemehandler_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, bool (*slot)(QWebEngineUrlSchemeHandler*, QEvent*) ```
void q_webengineurlschemehandler_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event ```
bool q_webengineurlschemehandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event ```
bool q_webengineurlschemehandler_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, bool (*slot)(QWebEngineUrlSchemeHandler*, QObject*, QEvent*) ```
void q_webengineurlschemehandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QTimerEvent* event ```
void q_webengineurlschemehandler_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QTimerEvent* event ```
void q_webengineurlschemehandler_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QTimerEvent*) ```
void q_webengineurlschemehandler_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QChildEvent* event ```
void q_webengineurlschemehandler_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QChildEvent* event ```
void q_webengineurlschemehandler_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QChildEvent*) ```
void q_webengineurlschemehandler_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
void q_webengineurlschemehandler_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
void q_webengineurlschemehandler_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QEvent*) ```
void q_webengineurlschemehandler_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QMetaMethod*) ```
void q_webengineurlschemehandler_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QMetaMethod*) ```
void q_webengineurlschemehandler_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QObject* q_webengineurlschemehandler_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QObject* q_webengineurlschemehandler_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* (*slot)() ```
void q_webengineurlschemehandler_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
int32_t q_webengineurlschemehandler_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
int32_t q_webengineurlschemehandler_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, int32_t (*slot)() ```
void q_webengineurlschemehandler_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* signal ```
int32_t q_webengineurlschemehandler_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* signal ```
int32_t q_webengineurlschemehandler_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, int32_t (*slot)(QWebEngineUrlSchemeHandler*, const char*) ```
void q_webengineurlschemehandler_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
bool q_webengineurlschemehandler_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
bool q_webengineurlschemehandler_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, bool (*slot)(QWebEngineUrlSchemeHandler*, QMetaMethod*) ```
void q_webengineurlschemehandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_delete(void* self);

#endif
