#pragma once
#ifndef LIBQTRANSLATOR_H
#define LIBQTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html)

/// q_translator_new constructs a new QTranslator object.
///
QTranslator* q_translator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html)

/// q_translator_new2 constructs a new QTranslator object.
///
/// @param parent QObject*
///
QTranslator* q_translator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTranslator*
///
const QMetaObject* q_translator_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QTranslator*
/// @param callback const QMetaObject* func(const QTranslator* self)
///
void q_translator_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTranslator*
///
const QMetaObject* q_translator_super_meta_object(const void* self);

/// @param self QTranslator*
/// @param param1 const char*
///
void* q_translator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTranslator*
/// @param callback void* func(QTranslator* self, const char* param1)
///
void q_translator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTranslator*
/// @param param1 const char*
///
void* q_translator_super_metacast(void* self, const char* param1);

/// @param self QTranslator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_translator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTranslator*
/// @param callback int32_t func(QTranslator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_translator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTranslator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_translator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_translator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#translate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTranslator*
/// @param context const char*
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_translator_translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#translate)
///
/// Allows for overriding the related default method
///
/// @param self const QTranslator*
/// @param callback const char* func(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n)
///
void q_translator_on_translate(const void* self, const char* (*callback)(const void*, const char*, const char*, const char*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#translate)
///
/// Base class method implementation
///
/// @param self const QTranslator*
/// @param context const char*
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_translator_super_translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// @param self const QTranslator*
///
bool q_translator_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self const QTranslator*
/// @param callback bool func(const QTranslator* self)
///
void q_translator_on_is_empty(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Base class method implementation
///
/// @param self const QTranslator*
///
bool q_translator_super_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#language)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTranslator*
///
const char* q_translator_language(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTranslator*
///
const char* q_translator_file_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param filename const char*
///
bool q_translator_load(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param locale QLocale*
/// @param filename const char*
///
bool q_translator_load2(void* self, const void* locale, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param data unsigned char*
/// @param lenVal int
///
bool q_translator_load3(void* self, unsigned char* data, int lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_translator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_translator_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param filename const char*
/// @param directory const char*
///
bool q_translator_load22(void* self, const char* filename, const char* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param filename const char*
/// @param directory const char*
/// @param search_delimiters const char*
///
bool q_translator_load32(void* self, const char* filename, const char* directory, const char* search_delimiters);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param filename const char*
/// @param directory const char*
/// @param search_delimiters const char*
/// @param suffix const char*
///
bool q_translator_load4(void* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
///
bool q_translator_load33(void* self, const void* locale, const char* filename, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
/// @param directory const char*
///
bool q_translator_load42(void* self, const void* locale, const char* filename, const char* prefix, const char* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
/// @param directory const char*
/// @param suffix const char*
///
bool q_translator_load5(void* self, const void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param data unsigned char*
/// @param lenVal int
/// @param directory const char*
///
bool q_translator_load34(void* self, unsigned char* data, int lenVal, const char* directory);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTranslator*
///
const char* q_translator_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTranslator*
/// @param name const char*
///
void q_translator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTranslator*
///
bool q_translator_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTranslator*
///
bool q_translator_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTranslator*
///
bool q_translator_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTranslator*
///
bool q_translator_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTranslator*
/// @param b bool
///
bool q_translator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTranslator*
///
QThread* q_translator_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTranslator*
/// @param thread QThread*
///
bool q_translator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTranslator*
/// @param interval int
///
int32_t q_translator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTranslator*
/// @param time int64_t of nanoseconds
///
int32_t q_translator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTranslator*
/// @param id int
///
void q_translator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTranslator*
/// @param id enum Qt__TimerId
///
void q_translator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTranslator*
///
/// @return libqt_list of QObject*
///
libqt_list q_translator_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTranslator*
/// @param parent QObject*
///
void q_translator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTranslator*
/// @param filterObj QObject*
///
void q_translator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTranslator*
/// @param obj QObject*
///
void q_translator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_translator_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_translator_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTranslator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_translator_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_translator_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_translator_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTranslator*
///
bool q_translator_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTranslator*
/// @param receiver QObject*
///
bool q_translator_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_translator_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTranslator*
///
void q_translator_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTranslator*
///
void q_translator_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTranslator*
/// @param name const char*
/// @param value QVariant*
///
bool q_translator_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTranslator*
/// @param name const char*
///
QVariant* q_translator_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTranslator*
///
const char** q_translator_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTranslator*
///
QBindingStorage* q_translator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTranslator*
///
const QBindingStorage* q_translator_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTranslator*
///
void q_translator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self)
///
void q_translator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTranslator*
///
QObject* q_translator_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTranslator*
/// @param classname const char*
///
bool q_translator_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTranslator*
///
void q_translator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTranslator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_translator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTranslator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_translator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_translator_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_translator_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTranslator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_translator_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTranslator*
/// @param signal const char*
///
bool q_translator_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTranslator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_translator_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTranslator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_translator_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTranslator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_translator_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTranslator*
/// @param param1 QObject*
///
void q_translator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QObject* param1)
///
void q_translator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param event QEvent*
///
bool q_translator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param event QEvent*
///
bool q_translator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback bool func(QTranslator* self, QEvent* event)
///
void q_translator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_translator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_translator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback bool func(QTranslator* self, QObject* watched, QEvent* event)
///
void q_translator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param event QTimerEvent*
///
void q_translator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param event QTimerEvent*
///
void q_translator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QTimerEvent* event)
///
void q_translator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param event QChildEvent*
///
void q_translator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param event QChildEvent*
///
void q_translator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QChildEvent* event)
///
void q_translator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param event QEvent*
///
void q_translator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param event QEvent*
///
void q_translator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QEvent* event)
///
void q_translator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QMetaMethod* signal)
///
void q_translator_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QMetaMethod* signal)
///
void q_translator_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTranslator*
///
QObject* q_translator_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTranslator*
///
QObject* q_translator_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTranslator*
/// @param callback QObject* func(QTranslator* self)
///
void q_translator_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTranslator*
///
int32_t q_translator_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTranslator*
///
int32_t q_translator_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTranslator*
/// @param callback int32_t func(QTranslator* self)
///
void q_translator_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTranslator*
/// @param signal const char*
///
int32_t q_translator_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTranslator*
/// @param signal const char*
///
int32_t q_translator_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTranslator*
/// @param callback int32_t func(QTranslator* self, const char* signal)
///
void q_translator_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTranslator*
/// @param signal QMetaMethod*
///
bool q_translator_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTranslator*
/// @param signal QMetaMethod*
///
bool q_translator_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTranslator*
/// @param callback bool func(QTranslator* self, QMetaMethod* signal)
///
void q_translator_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, const char* objectName)
///
void q_translator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#dtor.QTranslator)
///
/// Delete this object from C++ memory.
///
/// @param self QTranslator*
///
void q_translator_delete(void* self);

#endif
