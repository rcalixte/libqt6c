#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSQT6C_LIBKBOOKMARKMANAGER_H
#define SRC_EXTRAS_KBOOKMARKSQT6C_LIBKBOOKMARKMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kbookmarkmanager.html

/// k_bookmarkmanager_new constructs a new KBookmarkManager object.
///
/// @param bookmarksFile const char*
KBookmarkManager* k_bookmarkmanager_new(const char* bookmarksFile);

/// k_bookmarkmanager_new2 constructs a new KBookmarkManager object.
///
/// @param bookmarksFile const char*
/// @param parent QObject*
KBookmarkManager* k_bookmarkmanager_new2(const char* bookmarksFile, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KBookmarkManager*
const QMetaObject* k_bookmarkmanager_meta_object(void* self);

/// @param self KBookmarkManager*
/// @param param1 const char*
void* k_bookmarkmanager_metacast(void* self, const char* param1);

/// @param self KBookmarkManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_bookmarkmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KBookmarkManager*
/// @param callback int32_t func(KBookmarkManager* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_bookmarkmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KBookmarkManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_bookmarkmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_bookmarkmanager_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#saveAs)
///
/// @param self KBookmarkManager*
/// @param filename const char*
bool k_bookmarkmanager_save_as(void* self, const char* filename);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#updateAccessMetadata)
///
/// @param self KBookmarkManager*
/// @param url const char*
bool k_bookmarkmanager_update_access_metadata(void* self, const char* url);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkManager*
const char* k_bookmarkmanager_path(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#root)
///
/// @param self KBookmarkManager*
KBookmarkGroup* k_bookmarkmanager_root(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#toolbar)
///
/// @param self KBookmarkManager*
KBookmarkGroup* k_bookmarkmanager_toolbar(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#findByAddress)
///
/// @param self KBookmarkManager*
/// @param address const char*
KBookmark* k_bookmarkmanager_find_by_address(void* self, const char* address);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#emitChanged)
///
/// @param self KBookmarkManager*
void k_bookmarkmanager_emit_changed(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#emitChanged)
///
/// @param self KBookmarkManager*
/// @param group KBookmarkGroup*
void k_bookmarkmanager_emit_changed2(void* self, void* group);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#save)
///
/// @param self KBookmarkManager*
bool k_bookmarkmanager_save(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#internalDocument)
///
/// @param self KBookmarkManager*
QDomDocument* k_bookmarkmanager_internal_document(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#changed)
///
/// @param self KBookmarkManager*
/// @param groupAddress const char*
void k_bookmarkmanager_changed(void* self, const char* groupAddress);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#changed)
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, const char* groupAddress)
void k_bookmarkmanager_on_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#error)
///
/// @param self KBookmarkManager*
/// @param errorMessage const char*
void k_bookmarkmanager_error(void* self, const char* errorMessage);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#error)
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, const char* errorMessage)
void k_bookmarkmanager_on_error(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_bookmarkmanager_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_bookmarkmanager_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#saveAs)
///
/// @param self KBookmarkManager*
/// @param filename const char*
/// @param toolbarCache bool
bool k_bookmarkmanager_save_as2(void* self, const char* filename, bool toolbarCache);

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#save)
///
/// @param self KBookmarkManager*
/// @param toolbarCache bool
bool k_bookmarkmanager_save1(void* self, bool toolbarCache);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkManager*
const char* k_bookmarkmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBookmarkManager*
/// @param name char*
void k_bookmarkmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KBookmarkManager*
bool k_bookmarkmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KBookmarkManager*
bool k_bookmarkmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KBookmarkManager*
bool k_bookmarkmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KBookmarkManager*
bool k_bookmarkmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBookmarkManager*
/// @param b bool
bool k_bookmarkmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KBookmarkManager*
QThread* k_bookmarkmanager_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBookmarkManager*
/// @param thread QThread*
bool k_bookmarkmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkManager*
/// @param interval int
int32_t k_bookmarkmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkManager*
/// @param id int
void k_bookmarkmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkManager*
/// @param id enum Qt__TimerId
void k_bookmarkmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KBookmarkManager*
libqt_list /* of QObject* */ k_bookmarkmanager_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KBookmarkManager*
/// @param parent QObject*
void k_bookmarkmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBookmarkManager*
/// @param filterObj QObject*
void k_bookmarkmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBookmarkManager*
/// @param obj QObject*
void k_bookmarkmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_bookmarkmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBookmarkManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_bookmarkmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_bookmarkmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_bookmarkmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KBookmarkManager*
void k_bookmarkmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KBookmarkManager*
void k_bookmarkmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBookmarkManager*
/// @param name const char*
/// @param value QVariant*
bool k_bookmarkmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KBookmarkManager*
/// @param name const char*
QVariant* k_bookmarkmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkManager*
const char** k_bookmarkmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkManager*
QBindingStorage* k_bookmarkmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkManager*
const QBindingStorage* k_bookmarkmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkManager*
void k_bookmarkmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self)
void k_bookmarkmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KBookmarkManager*
QObject* k_bookmarkmanager_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KBookmarkManager*
/// @param classname const char*
bool k_bookmarkmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBookmarkManager*
void k_bookmarkmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBookmarkManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_bookmarkmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_bookmarkmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_bookmarkmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBookmarkManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_bookmarkmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkManager*
/// @param param1 QObject*
void k_bookmarkmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, QObject* param1)
void k_bookmarkmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QEvent*
bool k_bookmarkmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QEvent*
bool k_bookmarkmanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback bool func(KBookmarkManager* self, QEvent* event)
void k_bookmarkmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param watched QObject*
/// @param event QEvent*
bool k_bookmarkmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param watched QObject*
/// @param event QEvent*
bool k_bookmarkmanager_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback bool func(KBookmarkManager* self, QObject* watched, QEvent* event)
void k_bookmarkmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QTimerEvent*
void k_bookmarkmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QTimerEvent*
void k_bookmarkmanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, QTimerEvent* event)
void k_bookmarkmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QChildEvent*
void k_bookmarkmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QChildEvent*
void k_bookmarkmanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, QChildEvent* event)
void k_bookmarkmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QEvent*
void k_bookmarkmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param event QEvent*
void k_bookmarkmanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, QEvent* event)
void k_bookmarkmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal QMetaMethod*
void k_bookmarkmanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal QMetaMethod*
void k_bookmarkmanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, QMetaMethod* signal)
void k_bookmarkmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal QMetaMethod*
void k_bookmarkmanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal QMetaMethod*
void k_bookmarkmanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, QMetaMethod* signal)
void k_bookmarkmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
QObject* k_bookmarkmanager_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
QObject* k_bookmarkmanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback QObject* func()
void k_bookmarkmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
int32_t k_bookmarkmanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
int32_t k_bookmarkmanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback int32_t func()
void k_bookmarkmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal const char*
int32_t k_bookmarkmanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal const char*
int32_t k_bookmarkmanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback int32_t func(KBookmarkManager* self, const char* signal)
void k_bookmarkmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal QMetaMethod*
bool k_bookmarkmanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param signal QMetaMethod*
bool k_bookmarkmanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkManager*
/// @param callback bool func(KBookmarkManager* self, QMetaMethod* signal)
void k_bookmarkmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBookmarkManager*
/// @param callback void func(KBookmarkManager* self, const char* objectName)
void k_bookmarkmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kbookmarkmanager.html#dtor.KBookmarkManager)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkManager*
void k_bookmarkmanager_delete(void* self);

#endif
