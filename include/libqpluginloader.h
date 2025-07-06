#pragma once
#ifndef SRCQT6C_LIBQPLUGINLOADER_H
#define SRCQT6C_LIBQPLUGINLOADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpluginloader.html

/// q_pluginloader_new constructs a new QPluginLoader object.
///
///
QPluginLoader* q_pluginloader_new();

/// q_pluginloader_new2 constructs a new QPluginLoader object.
///
/// ``` const char* fileName ```
QPluginLoader* q_pluginloader_new2(const char* fileName);

/// q_pluginloader_new3 constructs a new QPluginLoader object.
///
/// ``` QObject* parent ```
QPluginLoader* q_pluginloader_new3(void* parent);

/// q_pluginloader_new4 constructs a new QPluginLoader object.
///
/// ``` const char* fileName, QObject* parent ```
QPluginLoader* q_pluginloader_new4(const char* fileName, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPluginLoader* self ```
const QMetaObject* q_pluginloader_meta_object(void* self);

/// ``` QPluginLoader* self, const char* param1 ```
void* q_pluginloader_metacast(void* self, const char* param1);

/// ``` QPluginLoader* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pluginloader_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPluginLoader* self, int32_t (*slot)(QPluginLoader*, enum QMetaObject__Call, int, void*) ```
void q_pluginloader_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPluginLoader* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pluginloader_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pluginloader_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#instance)
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_instance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#metaData)
///
/// ``` QPluginLoader* self ```
QJsonObject* q_pluginloader_meta_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#staticInstances)
///
///
libqt_list /* of QObject* */ q_pluginloader_static_instances();

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#staticPlugins)
///
///
libqt_list /* of QStaticPlugin* */ q_pluginloader_static_plugins();

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#load)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_load(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#unload)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_unload(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#isLoaded)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_loaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#setFileName)
///
/// ``` QPluginLoader* self, const char* fileName ```
void q_pluginloader_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#fileName)
///
/// ``` QPluginLoader* self ```
const char* q_pluginloader_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#errorString)
///
/// ``` QPluginLoader* self ```
const char* q_pluginloader_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#setLoadHints)
///
/// ``` QPluginLoader* self, int loadHints ```
void q_pluginloader_set_load_hints(void* self, int64_t loadHints);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#loadHints)
///
/// ``` QPluginLoader* self ```
int64_t q_pluginloader_load_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pluginloader_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pluginloader_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPluginLoader* self ```
const char* q_pluginloader_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPluginLoader* self, char* name ```
void q_pluginloader_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPluginLoader* self, bool b ```
bool q_pluginloader_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPluginLoader* self ```
QThread* q_pluginloader_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPluginLoader* self, QThread* thread ```
bool q_pluginloader_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPluginLoader* self, int interval ```
int32_t q_pluginloader_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPluginLoader* self, int id ```
void q_pluginloader_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPluginLoader* self, enum Qt__TimerId id ```
void q_pluginloader_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPluginLoader* self ```
libqt_list /* of QObject* */ q_pluginloader_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPluginLoader* self, QObject* parent ```
void q_pluginloader_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPluginLoader* self, QObject* filterObj ```
void q_pluginloader_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPluginLoader* self, QObject* obj ```
void q_pluginloader_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pluginloader_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPluginLoader* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pluginloader_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pluginloader_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pluginloader_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPluginLoader* self, const char* name, QVariant* value ```
bool q_pluginloader_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPluginLoader* self, const char* name ```
QVariant* q_pluginloader_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPluginLoader* self ```
const char** q_pluginloader_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPluginLoader* self ```
QBindingStorage* q_pluginloader_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPluginLoader* self ```
const QBindingStorage* q_pluginloader_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPluginLoader* self, void (*slot)(QObject*) ```
void q_pluginloader_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPluginLoader* self, const char* classname ```
bool q_pluginloader_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPluginLoader* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pluginloader_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPluginLoader* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pluginloader_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pluginloader_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPluginLoader* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pluginloader_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPluginLoader* self, QObject* param1 ```
void q_pluginloader_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPluginLoader* self, void (*slot)(QObject*, QObject*) ```
void q_pluginloader_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
bool q_pluginloader_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
bool q_pluginloader_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, bool (*slot)(QPluginLoader*, QEvent*) ```
void q_pluginloader_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QObject* watched, QEvent* event ```
bool q_pluginloader_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QObject* watched, QEvent* event ```
bool q_pluginloader_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, bool (*slot)(QPluginLoader*, QObject*, QEvent*) ```
void q_pluginloader_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QTimerEvent* event ```
void q_pluginloader_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QTimerEvent* event ```
void q_pluginloader_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QTimerEvent*) ```
void q_pluginloader_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QChildEvent* event ```
void q_pluginloader_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QChildEvent* event ```
void q_pluginloader_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QChildEvent*) ```
void q_pluginloader_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
void q_pluginloader_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
void q_pluginloader_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QEvent*) ```
void q_pluginloader_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QMetaMethod*) ```
void q_pluginloader_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QMetaMethod*) ```
void q_pluginloader_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, QObject* (*slot)() ```
void q_pluginloader_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self ```
int32_t q_pluginloader_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self ```
int32_t q_pluginloader_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, int32_t (*slot)() ```
void q_pluginloader_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, const char* signal ```
int32_t q_pluginloader_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, const char* signal ```
int32_t q_pluginloader_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, int32_t (*slot)(QPluginLoader*, const char*) ```
void q_pluginloader_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
bool q_pluginloader_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
bool q_pluginloader_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, bool (*slot)(QPluginLoader*, QMetaMethod*) ```
void q_pluginloader_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPluginLoader* self, void (*slot)(QObject*, const char*) ```
void q_pluginloader_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#dtor.QPluginLoader)
///
/// Delete this object from C++ memory.
///
/// ``` QPluginLoader* self ```
void q_pluginloader_delete(void* self);

#endif
