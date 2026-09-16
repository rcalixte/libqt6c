#pragma once
#ifndef QUICK_LIBQQUICKTEXTDOCUMENT_H
#define QUICK_LIBQQUICKTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html)

/// q_quicktextdocument_new constructs a new QQuickTextDocument object.
///
/// @param parent QQuickItem*
///
QQuickTextDocument* q_quicktextdocument_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickTextDocument*
///
const QMetaObject* q_quicktextdocument_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTextDocument*
/// @param callback const QMetaObject* func()
///
void q_quicktextdocument_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickTextDocument*
///
const QMetaObject* q_quicktextdocument_super_meta_object(void* self);

/// @param self QQuickTextDocument*
/// @param param1 const char*
///
void* q_quicktextdocument_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickTextDocument*
/// @param callback void* func(QQuickTextDocument* self, const char* param1)
///
void q_quicktextdocument_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickTextDocument*
/// @param param1 const char*
///
void* q_quicktextdocument_super_metacast(void* self, const char* param1);

/// @param self QQuickTextDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quicktextdocument_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickTextDocument*
/// @param callback int32_t func(QQuickTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quicktextdocument_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickTextDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quicktextdocument_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quicktextdocument_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#source)
///
/// @param self QQuickTextDocument*
///
QUrl* q_quicktextdocument_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#setSource)
///
/// @param self QQuickTextDocument*
/// @param url QUrl*
///
void q_quicktextdocument_set_source(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#isModified)
///
/// @param self QQuickTextDocument*
///
bool q_quicktextdocument_is_modified(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#setModified)
///
/// @param self QQuickTextDocument*
/// @param modified bool
///
void q_quicktextdocument_set_modified(void* self, bool modified);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#textDocument)
///
/// @param self QQuickTextDocument*
///
QTextDocument* q_quicktextdocument_text_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#setTextDocument)
///
/// @param self QQuickTextDocument*
/// @param document QTextDocument*
///
void q_quicktextdocument_set_text_document(void* self, void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#save)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_save(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#saveAs)
///
/// @param self QQuickTextDocument*
/// @param url QUrl*
///
void q_quicktextdocument_save_as(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#status)
///
/// @param self QQuickTextDocument*
///
/// @return enum QQuickTextDocument__Status
///
uint8_t q_quicktextdocument_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickTextDocument*
///
const char* q_quicktextdocument_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#textDocumentChanged)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_text_document_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#textDocumentChanged)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self)
///
void q_quicktextdocument_on_text_document_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#sourceChanged)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_source_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#sourceChanged)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self)
///
void q_quicktextdocument_on_source_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#modifiedChanged)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_modified_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#modifiedChanged)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self)
///
void q_quicktextdocument_on_modified_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#statusChanged)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_status_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#statusChanged)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self)
///
void q_quicktextdocument_on_status_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#errorStringChanged)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_error_string_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#errorStringChanged)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self)
///
void q_quicktextdocument_on_error_string_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quicktextdocument_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quicktextdocument_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickTextDocument*
///
const char* q_quicktextdocument_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickTextDocument*
/// @param name const char*
///
void q_quicktextdocument_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickTextDocument*
///
bool q_quicktextdocument_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickTextDocument*
///
bool q_quicktextdocument_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickTextDocument*
///
bool q_quicktextdocument_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickTextDocument*
///
bool q_quicktextdocument_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickTextDocument*
/// @param b bool
///
bool q_quicktextdocument_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickTextDocument*
///
QThread* q_quicktextdocument_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickTextDocument*
/// @param thread QThread*
///
bool q_quicktextdocument_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextDocument*
/// @param interval int
///
int32_t q_quicktextdocument_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextDocument*
/// @param time int64_t of nanoseconds
///
int32_t q_quicktextdocument_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickTextDocument*
/// @param id int
///
void q_quicktextdocument_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickTextDocument*
/// @param id enum Qt__TimerId
///
void q_quicktextdocument_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickTextDocument*
///
/// @return libqt_list of QObject*
///
libqt_list q_quicktextdocument_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickTextDocument*
/// @param parent QObject*
///
void q_quicktextdocument_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickTextDocument*
/// @param filterObj QObject*
///
void q_quicktextdocument_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickTextDocument*
/// @param obj QObject*
///
void q_quicktextdocument_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quicktextdocument_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quicktextdocument_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickTextDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quicktextdocument_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktextdocument_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quicktextdocument_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextDocument*
///
bool q_quicktextdocument_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextDocument*
/// @param receiver QObject*
///
bool q_quicktextdocument_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quicktextdocument_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickTextDocument*
/// @param name const char*
/// @param value QVariant*
///
bool q_quicktextdocument_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickTextDocument*
/// @param name const char*
///
QVariant* q_quicktextdocument_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickTextDocument*
///
const char** q_quicktextdocument_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickTextDocument*
///
QBindingStorage* q_quicktextdocument_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickTextDocument*
///
const QBindingStorage* q_quicktextdocument_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self)
///
void q_quicktextdocument_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickTextDocument*
///
QObject* q_quicktextdocument_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickTextDocument*
/// @param classname const char*
///
bool q_quicktextdocument_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextDocument*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quicktextdocument_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextDocument*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quicktextdocument_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quicktextdocument_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quicktextdocument_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickTextDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quicktextdocument_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextDocument*
/// @param signal const char*
///
bool q_quicktextdocument_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextDocument*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quicktextdocument_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextDocument*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktextdocument_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextDocument*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktextdocument_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextDocument*
/// @param param1 QObject*
///
void q_quicktextdocument_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, QObject* param1)
///
void q_quicktextdocument_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QEvent*
///
bool q_quicktextdocument_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QEvent*
///
bool q_quicktextdocument_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback bool func(QQuickTextDocument* self, QEvent* event)
///
void q_quicktextdocument_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quicktextdocument_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quicktextdocument_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback bool func(QQuickTextDocument* self, QObject* watched, QEvent* event)
///
void q_quicktextdocument_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QTimerEvent*
///
void q_quicktextdocument_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QTimerEvent*
///
void q_quicktextdocument_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, QTimerEvent* event)
///
void q_quicktextdocument_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QChildEvent*
///
void q_quicktextdocument_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QChildEvent*
///
void q_quicktextdocument_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, QChildEvent* event)
///
void q_quicktextdocument_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QEvent*
///
void q_quicktextdocument_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param event QEvent*
///
void q_quicktextdocument_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, QEvent* event)
///
void q_quicktextdocument_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal QMetaMethod*
///
void q_quicktextdocument_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal QMetaMethod*
///
void q_quicktextdocument_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, QMetaMethod* signal)
///
void q_quicktextdocument_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal QMetaMethod*
///
void q_quicktextdocument_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal QMetaMethod*
///
void q_quicktextdocument_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, QMetaMethod* signal)
///
void q_quicktextdocument_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
///
QObject* q_quicktextdocument_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
///
QObject* q_quicktextdocument_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback QObject* func()
///
void q_quicktextdocument_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
///
int32_t q_quicktextdocument_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
///
int32_t q_quicktextdocument_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback int32_t func()
///
void q_quicktextdocument_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal const char*
///
int32_t q_quicktextdocument_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal const char*
///
int32_t q_quicktextdocument_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback int32_t func(QQuickTextDocument* self, const char* signal)
///
void q_quicktextdocument_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal QMetaMethod*
///
bool q_quicktextdocument_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param signal QMetaMethod*
///
bool q_quicktextdocument_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextDocument*
/// @param callback bool func(QQuickTextDocument* self, QMetaMethod* signal)
///
void q_quicktextdocument_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickTextDocument*
/// @param callback void func(QQuickTextDocument* self, const char* objectName)
///
void q_quicktextdocument_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#dtor.QQuickTextDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickTextDocument*
///
void q_quicktextdocument_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktextdocument.html#public-types)

typedef enum {
    QQUICKTEXTDOCUMENT_STATUS_NULL = 0,
    QQUICKTEXTDOCUMENT_STATUS_LOADING = 1,
    QQUICKTEXTDOCUMENT_STATUS_LOADED = 2,
    QQUICKTEXTDOCUMENT_STATUS_SAVING = 3,
    QQUICKTEXTDOCUMENT_STATUS_SAVED = 4,
    QQUICKTEXTDOCUMENT_STATUS_READERROR = 5,
    QQUICKTEXTDOCUMENT_STATUS_WRITEERROR = 6,
    QQUICKTEXTDOCUMENT_STATUS_NONLOCALFILEERROR = 7
} QQuickTextDocument__Status;

#endif
