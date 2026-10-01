#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBAPPLICATION_H
#define EXTRAS_KTEXTEDITOR_LIBAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html)

/// k_texteditor__application_new constructs a new KTextEditor::Application object.
///
/// @param parent QObject*
///
KTextEditor__Application* k_texteditor__application_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KTextEditor__Application*
///
const QMetaObject* k_texteditor__application_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KTextEditor__Application*
/// @param callback const QMetaObject* func(const KTextEditor__Application* self)
///
void k_texteditor__application_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KTextEditor__Application*
///
const QMetaObject* k_texteditor__application_super_meta_object(const void* self);

/// @param self KTextEditor__Application*
/// @param param1 const char*
///
void* k_texteditor__application_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__Application*
/// @param callback void* func(KTextEditor__Application* self, const char* param1)
///
void k_texteditor__application_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KTextEditor__Application*
/// @param param1 const char*
///
void* k_texteditor__application_super_metacast(void* self, const char* param1);

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
int32_t k_texteditor__application_super_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @return libqt_list of KTextEditor__MainWindow*
///
libqt_list k_texteditor__application_main_windows(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#activeMainWindow)
///
/// @param self KTextEditor__Application*
///
KTextEditor__MainWindow* k_texteditor__application_active_main_window(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#documents)
///
/// @param self KTextEditor__Application*
///
/// @return libqt_list of KTextEditor__Document*
///
libqt_list k_texteditor__application_documents(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#findUrl)
///
/// @param self KTextEditor__Application*
/// @param url QUrl*
///
KTextEditor__Document* k_texteditor__application_find_url(void* self, const void* url);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#openUrl)
///
/// @param self KTextEditor__Application*
/// @param url QUrl*
///
KTextEditor__Document* k_texteditor__application_open_url(void* self, const void* url);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#closeDocument)
///
/// @param self KTextEditor__Application*
/// @param document KTextEditor__Document*
///
bool k_texteditor__application_close_document(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-application.html#closeDocuments)
///
/// @param self KTextEditor__Application*
/// @param documents libqt_list of KTextEditor__Document*
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
KTextEditor__Document* k_texteditor__application_open_url2(void* self, const void* url, const char* encoding);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__Application*
///
const char* k_texteditor__application_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Application*
/// @param name const char*
///
void k_texteditor__application_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KTextEditor__Application*
///
bool k_texteditor__application_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KTextEditor__Application*
///
bool k_texteditor__application_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KTextEditor__Application*
///
bool k_texteditor__application_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KTextEditor__Application*
///
bool k_texteditor__application_signals_blocked(const void* self);

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
/// @param self const KTextEditor__Application*
///
QThread* k_texteditor__application_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Application*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__application_start_timer2(void* self, int64_t time);

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
/// @param self const KTextEditor__Application*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__application_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__application_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__application_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__Application*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__application_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__application_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__application_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Application*
///
bool k_texteditor__application_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Application*
/// @param receiver QObject*
///
bool k_texteditor__application_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__application_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KTextEditor__Application*
///
void k_texteditor__application_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KTextEditor__Application*
///
void k_texteditor__application_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Application*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__application_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KTextEditor__Application*
/// @param name const char*
///
QVariant* k_texteditor__application_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KTextEditor__Application*
///
const char** k_texteditor__application_dynamic_property_names(const void* self);

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
/// @param self const KTextEditor__Application*
///
const QBindingStorage* k_texteditor__application_binding_storage2(const void* self);

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
/// @param self const KTextEditor__Application*
///
QObject* k_texteditor__application_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KTextEditor__Application*
/// @param classname const char*
///
bool k_texteditor__application_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Application*
///
void k_texteditor__application_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Application*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__application_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__application_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texteditor__application_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__Application*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__application_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Application*
/// @param signal const char*
///
bool k_texteditor__application_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Application*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texteditor__application_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Application*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__application_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__Application*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__application_disconnect23(const void* self, const void* receiver, const char* member);

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
bool k_texteditor__application_super_event(void* self, void* event);

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
bool k_texteditor__application_super_event_filter(void* self, void* watched, void* event);

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
void k_texteditor__application_super_timer_event(void* self, void* event);

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
void k_texteditor__application_super_child_event(void* self, void* event);

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
void k_texteditor__application_super_custom_event(void* self, void* event);

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
void k_texteditor__application_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QMetaMethod* signal)
///
void k_texteditor__application_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param signal QMetaMethod*
///
void k_texteditor__application_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Application*
/// @param callback void func(KTextEditor__Application* self, QMetaMethod* signal)
///
void k_texteditor__application_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__Application*
///
QObject* k_texteditor__application_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__Application*
///
QObject* k_texteditor__application_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param callback QObject* func(KTextEditor__Application* self)
///
void k_texteditor__application_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__Application*
///
int32_t k_texteditor__application_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__Application*
///
int32_t k_texteditor__application_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param callback int32_t func(KTextEditor__Application* self)
///
void k_texteditor__application_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param signal const char*
///
int32_t k_texteditor__application_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param signal const char*
///
int32_t k_texteditor__application_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param callback int32_t func(KTextEditor__Application* self, const char* signal)
///
void k_texteditor__application_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param signal QMetaMethod*
///
bool k_texteditor__application_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param signal QMetaMethod*
///
bool k_texteditor__application_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__Application*
/// @param callback bool func(KTextEditor__Application* self, QMetaMethod* signal)
///
void k_texteditor__application_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

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
