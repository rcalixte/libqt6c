#pragma once
#ifndef SRCQT6C_LIBQFILESYSTEMWATCHER_H
#define SRCQT6C_LIBQFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qfilesystemwatcher.html

/// q_filesystemwatcher_new constructs a new QFileSystemWatcher object.
///
///
QFileSystemWatcher* q_filesystemwatcher_new();

/// q_filesystemwatcher_new2 constructs a new QFileSystemWatcher object.
///
/// ``` const char* paths[] ```
QFileSystemWatcher* q_filesystemwatcher_new2(const char* paths[]);

/// q_filesystemwatcher_new3 constructs a new QFileSystemWatcher object.
///
/// ``` QObject* parent ```
QFileSystemWatcher* q_filesystemwatcher_new3(void* parent);

/// q_filesystemwatcher_new4 constructs a new QFileSystemWatcher object.
///
/// ``` const char* paths[], QObject* parent ```
QFileSystemWatcher* q_filesystemwatcher_new4(const char* paths[], void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileSystemWatcher* self ```
QMetaObject* q_filesystemwatcher_meta_object(void* self);

/// ``` QFileSystemWatcher* self, const char* param1 ```
void* q_filesystemwatcher_metacast(void* self, const char* param1);

/// ``` QFileSystemWatcher* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemwatcher_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QFileSystemWatcher* self, int32_t (*slot)(QFileSystemWatcher*, enum QMetaObject__Call, int, void*) ```
void q_filesystemwatcher_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QFileSystemWatcher* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemwatcher_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filesystemwatcher_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#addPath)
///
/// ``` QFileSystemWatcher* self, const char* file ```
bool q_filesystemwatcher_add_path(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#addPaths)
///
/// ``` QFileSystemWatcher* self, const char* files[] ```
const char** q_filesystemwatcher_add_paths(void* self, const char* files[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#removePath)
///
/// ``` QFileSystemWatcher* self, const char* file ```
bool q_filesystemwatcher_remove_path(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#removePaths)
///
/// ``` QFileSystemWatcher* self, const char* files[] ```
const char** q_filesystemwatcher_remove_paths(void* self, const char* files[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#files)
///
/// ``` QFileSystemWatcher* self ```
const char** q_filesystemwatcher_files(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#directories)
///
/// ``` QFileSystemWatcher* self ```
const char** q_filesystemwatcher_directories(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filesystemwatcher_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filesystemwatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileSystemWatcher* self ```
const char* q_filesystemwatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileSystemWatcher* self, char* name ```
void q_filesystemwatcher_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileSystemWatcher* self, bool b ```
bool q_filesystemwatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileSystemWatcher* self ```
QThread* q_filesystemwatcher_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileSystemWatcher* self, QThread* thread ```
void q_filesystemwatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemWatcher* self, int interval ```
int32_t q_filesystemwatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileSystemWatcher* self, int id ```
void q_filesystemwatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileSystemWatcher* self ```
libqt_list /* of QObject* */ q_filesystemwatcher_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileSystemWatcher* self, QObject* parent ```
void q_filesystemwatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileSystemWatcher* self, QObject* filterObj ```
void q_filesystemwatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileSystemWatcher* self, QObject* obj ```
void q_filesystemwatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filesystemwatcher_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemWatcher* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filesystemwatcher_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filesystemwatcher_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filesystemwatcher_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileSystemWatcher* self, const char* name, QVariant* value ```
bool q_filesystemwatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileSystemWatcher* self, const char* name ```
QVariant* q_filesystemwatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileSystemWatcher* self ```
const char** q_filesystemwatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSystemWatcher* self ```
QBindingStorage* q_filesystemwatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSystemWatcher* self ```
QBindingStorage* q_filesystemwatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QFileSystemWatcher* self, void (*slot)(QObject*) ```
void q_filesystemwatcher_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileSystemWatcher* self ```
QObject* q_filesystemwatcher_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileSystemWatcher* self, const char* classname ```
bool q_filesystemwatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemWatcher* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filesystemwatcher_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemWatcher* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemWatcher* self, QObject* param1 ```
void q_filesystemwatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QFileSystemWatcher* self, void (*slot)(QObject*, QObject*) ```
void q_filesystemwatcher_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
bool q_filesystemwatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
bool q_filesystemwatcher_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, bool (*slot)(QFileSystemWatcher*, QEvent*) ```
void q_filesystemwatcher_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QObject* watched, QEvent* event ```
bool q_filesystemwatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QObject* watched, QEvent* event ```
bool q_filesystemwatcher_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, bool (*slot)(QFileSystemWatcher*, QObject*, QEvent*) ```
void q_filesystemwatcher_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QTimerEvent* event ```
void q_filesystemwatcher_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QTimerEvent* event ```
void q_filesystemwatcher_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QTimerEvent*) ```
void q_filesystemwatcher_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QChildEvent* event ```
void q_filesystemwatcher_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QChildEvent* event ```
void q_filesystemwatcher_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QChildEvent*) ```
void q_filesystemwatcher_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
void q_filesystemwatcher_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
void q_filesystemwatcher_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QEvent*) ```
void q_filesystemwatcher_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QMetaMethod*) ```
void q_filesystemwatcher_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QMetaMethod*) ```
void q_filesystemwatcher_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
QObject* q_filesystemwatcher_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
QObject* q_filesystemwatcher_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QObject* (*slot)() ```
void q_filesystemwatcher_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
int32_t q_filesystemwatcher_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
int32_t q_filesystemwatcher_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, int32_t (*slot)() ```
void q_filesystemwatcher_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, const char* signal ```
int32_t q_filesystemwatcher_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, const char* signal ```
int32_t q_filesystemwatcher_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, int32_t (*slot)(QFileSystemWatcher*, const char*) ```
void q_filesystemwatcher_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
bool q_filesystemwatcher_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
bool q_filesystemwatcher_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, bool (*slot)(QFileSystemWatcher*, QMetaMethod*) ```
void q_filesystemwatcher_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_delete(void* self);

#endif
