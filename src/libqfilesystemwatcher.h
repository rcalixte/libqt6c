#pragma once
#ifndef SRCQT6C_LIBQFILESYSTEMWATCHER_H
#define SRCQT6C_LIBQFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfilesystemwatcher.html

/// q_filesystemwatcher_new constructs a new QFileSystemWatcher object.
///
QFileSystemWatcher* q_filesystemwatcher_new();

/// q_filesystemwatcher_new2 constructs a new QFileSystemWatcher object.
///
/// @param paths const char**
QFileSystemWatcher* q_filesystemwatcher_new2(const char* paths[]);

/// q_filesystemwatcher_new3 constructs a new QFileSystemWatcher object.
///
/// @param parent QObject*
QFileSystemWatcher* q_filesystemwatcher_new3(void* parent);

/// q_filesystemwatcher_new4 constructs a new QFileSystemWatcher object.
///
/// @param paths const char**
/// @param parent QObject*
QFileSystemWatcher* q_filesystemwatcher_new4(const char* paths[], void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFileSystemWatcher*
const QMetaObject* q_filesystemwatcher_meta_object(void* self);

/// @param self QFileSystemWatcher*
/// @param param1 const char*
void* q_filesystemwatcher_metacast(void* self, const char* param1);

/// @param self QFileSystemWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_filesystemwatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFileSystemWatcher*
/// @param callback int32_t fn(QFileSystemWatcher*, enum QMetaObject__Call, int, void*)
void q_filesystemwatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFileSystemWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_filesystemwatcher_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_filesystemwatcher_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#addPath)
///
/// @param self QFileSystemWatcher*
/// @param file const char*
bool q_filesystemwatcher_add_path(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#addPaths)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemWatcher*
/// @param files const char**
const char** q_filesystemwatcher_add_paths(void* self, const char* files[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#removePath)
///
/// @param self QFileSystemWatcher*
/// @param file const char*
bool q_filesystemwatcher_remove_path(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#removePaths)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemWatcher*
/// @param files const char**
const char** q_filesystemwatcher_remove_paths(void* self, const char* files[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#files)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemWatcher*
const char** q_filesystemwatcher_files(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#directories)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemWatcher*
const char** q_filesystemwatcher_directories(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_filesystemwatcher_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_filesystemwatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemWatcher*
const char* q_filesystemwatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFileSystemWatcher*
/// @param name char*
void q_filesystemwatcher_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFileSystemWatcher*
bool q_filesystemwatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFileSystemWatcher*
bool q_filesystemwatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFileSystemWatcher*
bool q_filesystemwatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFileSystemWatcher*
bool q_filesystemwatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFileSystemWatcher*
/// @param b bool
bool q_filesystemwatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFileSystemWatcher*
QThread* q_filesystemwatcher_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileSystemWatcher*
/// @param thread QThread*
bool q_filesystemwatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemWatcher*
/// @param interval int
int32_t q_filesystemwatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileSystemWatcher*
/// @param id int
void q_filesystemwatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileSystemWatcher*
/// @param id enum Qt__TimerId
void q_filesystemwatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFileSystemWatcher*
libqt_list /* of QObject* */ q_filesystemwatcher_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFileSystemWatcher*
/// @param parent QObject*
void q_filesystemwatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFileSystemWatcher*
/// @param filterObj QObject*
void q_filesystemwatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFileSystemWatcher*
/// @param obj QObject*
void q_filesystemwatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_filesystemwatcher_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileSystemWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_filesystemwatcher_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_filesystemwatcher_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_filesystemwatcher_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFileSystemWatcher*
void q_filesystemwatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFileSystemWatcher*
void q_filesystemwatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFileSystemWatcher*
/// @param name const char*
/// @param value QVariant*
bool q_filesystemwatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFileSystemWatcher*
/// @param name const char*
QVariant* q_filesystemwatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemWatcher*
const char** q_filesystemwatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileSystemWatcher*
QBindingStorage* q_filesystemwatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileSystemWatcher*
const QBindingStorage* q_filesystemwatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemWatcher*
void q_filesystemwatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*)
void q_filesystemwatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFileSystemWatcher*
QObject* q_filesystemwatcher_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFileSystemWatcher*
/// @param classname const char*
bool q_filesystemwatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFileSystemWatcher*
void q_filesystemwatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileSystemWatcher*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_filesystemwatcher_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_filesystemwatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_filesystemwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileSystemWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_filesystemwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemWatcher*
/// @param param1 QObject*
void q_filesystemwatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, QObject*)
void q_filesystemwatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QEvent*
bool q_filesystemwatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QEvent*
bool q_filesystemwatcher_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback bool fn(QFileSystemWatcher*, QEvent*)
void q_filesystemwatcher_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param watched QObject*
/// @param event QEvent*
bool q_filesystemwatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param watched QObject*
/// @param event QEvent*
bool q_filesystemwatcher_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback bool fn(QFileSystemWatcher*, QObject*, QEvent*)
void q_filesystemwatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QTimerEvent*
void q_filesystemwatcher_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QTimerEvent*
void q_filesystemwatcher_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, QTimerEvent*)
void q_filesystemwatcher_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QChildEvent*
void q_filesystemwatcher_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QChildEvent*
void q_filesystemwatcher_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, QChildEvent*)
void q_filesystemwatcher_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QEvent*
void q_filesystemwatcher_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param event QEvent*
void q_filesystemwatcher_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, QEvent*)
void q_filesystemwatcher_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal QMetaMethod*
void q_filesystemwatcher_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal QMetaMethod*
void q_filesystemwatcher_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, QMetaMethod*)
void q_filesystemwatcher_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal QMetaMethod*
void q_filesystemwatcher_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal QMetaMethod*
void q_filesystemwatcher_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, QMetaMethod*)
void q_filesystemwatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
QObject* q_filesystemwatcher_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
QObject* q_filesystemwatcher_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback QObject* fn()
void q_filesystemwatcher_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
int32_t q_filesystemwatcher_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
int32_t q_filesystemwatcher_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback int32_t fn()
void q_filesystemwatcher_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal const char*
int32_t q_filesystemwatcher_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal const char*
int32_t q_filesystemwatcher_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback int32_t fn(QFileSystemWatcher*, const char*)
void q_filesystemwatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal QMetaMethod*
bool q_filesystemwatcher_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param signal QMetaMethod*
bool q_filesystemwatcher_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemWatcher*
/// @param callback bool fn(QFileSystemWatcher*, QMetaMethod*)
void q_filesystemwatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#fileChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, const char*)
void q_filesystemwatcher_on_file_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#directoryChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, const char*)
void q_filesystemwatcher_on_directory_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemWatcher*
/// @param callback void fn(QFileSystemWatcher*, const char*)
void q_filesystemwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#dtor.QFileSystemWatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QFileSystemWatcher*
void q_filesystemwatcher_delete(void* self);

#endif
