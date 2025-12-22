#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBAPPLICATION_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html)

/// k_texteditor__application_new constructs a new KTextEditor::Application object.
///
/// @param parent QObject*
///
KTextEditor__Application* k_texteditor__application_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__Application*
///
const QMetaObject* k_texteditor__application_meta_object(void* self);

/// @param self KTextEditor__Application*
/// @param param1 const char*
///
void* k_texteditor__application_metacast(void* self, const char* param1);

/// @param self KTextEditor__Application*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__application_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__Application*
/// @param callback int32_t func(KTextEditor__Application* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texteditor__application_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__Application*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__application_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__application_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#quit)
///
/// @param self KTextEditor__Application*
///
bool k_texteditor__application_quit(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#mainWindows)
///
/// @param self KTextEditor__Application*
///
libqt_list /* of KTextEditor__MainWindow* */ k_texteditor__application_main_windows(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#activeMainWindow)
///
/// @param self KTextEditor__Application*
///
KTextEditor__MainWindow* k_texteditor__application_active_main_window(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documents)
///
/// @param self KTextEditor__Application*
///
libqt_list /* of KTextEditor__Document* */ k_texteditor__application_documents(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#findUrl)
///
/// @param self KTextEditor__Application*
/// @param url QUrl*
///
KTextEditor__Document* k_texteditor__application_find_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#openUrl)
///
/// @param self KTextEditor__Application*
/// @param url QUrl*
///
KTextEditor__Document* k_texteditor__application_open_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#closeDocument)
///
/// @param self KTextEditor__Application*
/// @param document KTextEditor__Document*
///
bool k_texteditor__application_close_document(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#closeDocuments)
///
/// @param self KTextEditor__Application*
/// @param documents libqt_list /* of KTextEditor__Document* */
///
bool k_texteditor__application_close_documents(void* self, libqt_list documents);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentCreated)
///
/// @param self KTextEditor__Application*
/// @param document KTextEditor__Document*
///
void k_texteditor__application_document_created(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentCreated)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, KTextEditor__Document* document)
///
void k_texteditor__application_on_document_created(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentWillBeDeleted)
///
/// @param self KTextEditor__Application*
/// @param document KTextEditor__Document*
///
void k_texteditor__application_document_will_be_deleted(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentWillBeDeleted)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, KTextEditor__Document* document)
///
void k_texteditor__application_on_document_will_be_deleted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentDeleted)
///
/// @param self KTextEditor__Application*
/// @param document KTextEditor__Document*
///
void k_texteditor__application_document_deleted(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentDeleted)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, KTextEditor__Document* document)
///
void k_texteditor__application_on_document_deleted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#plugin)
///
/// @param self KTextEditor__Application*
/// @param name const char*
///
KTextEditor__Plugin* k_texteditor__application_plugin(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginCreated)
///
/// @param self KTextEditor__Application*
/// @param name const char*
/// @param plugin KTextEditor__Plugin*
///
void k_texteditor__application_plugin_created(void* self, const char* name, void* plugin);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginCreated)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, const char* name, KTextEditor__Plugin* plugin)
///
void k_texteditor__application_on_plugin_created(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginDeleted)
///
/// @param self KTextEditor__Application*
/// @param name const char*
/// @param plugin KTextEditor__Plugin*
///
void k_texteditor__application_plugin_deleted(void* self, const char* name, void* plugin);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginDeleted)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, const char* name, KTextEditor__Plugin* plugin)
///
void k_texteditor__application_on_plugin_deleted(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__application_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__application_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#openUrl)
///
/// @param self KTextEditor__Application*
/// @param url QUrl*
/// @param encoding const char*
///
KTextEditor__Document* k_texteditor__application_open_url2(void* self, void* url, const char* encoding);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Application*
///
const char* k_texteditor__application_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Application*
/// @param name char*
///
void k_texteditor__application_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__Application*
///
bool k_texteditor__application_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__Application*
///
bool k_texteditor__application_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__Application*
///
bool k_texteditor__application_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__Application*
///
bool k_texteditor__application_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Application*
/// @param b bool
///
bool k_texteditor__application_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__Application*
///
QThread* k_texteditor__application_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Application*
/// @param thread QThread*
///
bool k_texteditor__application_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Application*
/// @param interval int
///
int32_t k_texteditor__application_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Application*
/// @param id int
///
void k_texteditor__application_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Application*
/// @param id enum Qt__TimerId
///
void k_texteditor__application_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__Application*
///
libqt_list /* of QObject* */ k_texteditor__application_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Application*
/// @param parent QObject*
///
void k_texteditor__application_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Application*
/// @param filterObj QObject*
///
void k_texteditor__application_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Application*
/// @param obj QObject*
///
void k_texteditor__application_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__application_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Application*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__application_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__application_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__application_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__Application*
///
void k_texteditor__application_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__Application*
///
void k_texteditor__application_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Application*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__application_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__Application*
/// @param name const char*
///
QVariant* k_texteditor__application_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Application*
///
const char** k_texteditor__application_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Application*
///
QBindingStorage* k_texteditor__application_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Application*
///
const QBindingStorage* k_texteditor__application_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Application*
///
void k_texteditor__application_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self)
///
void k_texteditor__application_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__Application*
///
QObject* k_texteditor__application_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__Application*
/// @param classname const char*
///
bool k_texteditor__application_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Application*
///
void k_texteditor__application_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Application*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_texteditor__application_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Application*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__application_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__application_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Application*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__application_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Application*
/// @param param1 QObject*
///
void k_texteditor__application_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QObject* param1)
///
void k_texteditor__application_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QEvent*
///
bool k_texteditor__application_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QEvent*
///
bool k_texteditor__application_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback bool func(KTextEditor__Application* self, QEvent* event)
///
void k_texteditor__application_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__application_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__application_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback bool func(KTextEditor__Application* self, QObject* watched, QEvent* event)
///
void k_texteditor__application_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QTimerEvent*
///
void k_texteditor__application_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QTimerEvent*
///
void k_texteditor__application_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QTimerEvent* event)
///
void k_texteditor__application_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QChildEvent*
///
void k_texteditor__application_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QChildEvent*
///
void k_texteditor__application_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QChildEvent* event)
///
void k_texteditor__application_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QEvent*
///
void k_texteditor__application_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param event QEvent*
///
void k_texteditor__application_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QEvent* event)
///
void k_texteditor__application_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QMetaMethod* signal)
///
void k_texteditor__application_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QMetaMethod* signal)
///
void k_texteditor__application_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
///
QObject* k_texteditor__application_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
///
QObject* k_texteditor__application_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback QObject* func()
///
void k_texteditor__application_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
///
int32_t k_texteditor__application_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
///
int32_t k_texteditor__application_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback int32_t func()
///
void k_texteditor__application_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal const char*
///
int32_t k_texteditor__application_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal const char*
///
int32_t k_texteditor__application_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback int32_t func(KTextEditor__Application* self, const char* signal)
///
void k_texteditor__application_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
bool k_texteditor__application_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
bool k_texteditor__application_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback bool func(KTextEditor__Application* self, QMetaMethod* signal)
///
void k_texteditor__application_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, const char* objectName)
///
void k_texteditor__application_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Application*
///
void k_texteditor__application_delete(void* self);

#endif
