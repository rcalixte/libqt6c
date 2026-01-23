#pragma once
#ifndef SRC_QT6C_LIBQTRANSLATOR_H
#define SRC_QT6C_LIBQTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QTranslator*
///
const QMetaObject* q_translator_meta_object(void* self);

/// @param self QTranslator*
/// @param param1 const char*
///
void* q_translator_metacast(void* self, const char* param1);

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
int32_t q_translator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param self QTranslator*
/// @param context const char*
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_translator_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#translate)
///
/// Allows for overriding the related default method
///
/// @param self QTranslator*
/// @param callback const char* func(QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n)
///
void q_translator_on_translate(void* self, const char* (*callback)(void*, const char*, const char*, const char*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#translate)
///
/// Base class method implementation
///
/// @param self QTranslator*
/// @param context const char*
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_translator_qbase_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// @param self QTranslator*
///
bool q_translator_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QTranslator*
/// @param callback bool func()
///
void q_translator_on_is_empty(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Base class method implementation
///
/// @param self QTranslator*
///
bool q_translator_qbase_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#language)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTranslator*
///
const char* q_translator_language(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTranslator*
///
const char* q_translator_file_path(void* self);

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
bool q_translator_load2(void* self, void* locale, const char* filename);

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
bool q_translator_load33(void* self, void* locale, const char* filename, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
/// @param directory const char*
///
bool q_translator_load42(void* self, void* locale, const char* filename, const char* prefix, const char* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self QTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
/// @param directory const char*
/// @param suffix const char*
///
bool q_translator_load5(void* self, void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix);

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
/// @param self QTranslator*
///
const char* q_translator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTranslator*
/// @param name char*
///
void q_translator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTranslator*
///
bool q_translator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTranslator*
///
bool q_translator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTranslator*
///
bool q_translator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTranslator*
///
bool q_translator_signals_blocked(void* self);

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
/// @param self QTranslator*
///
QThread* q_translator_thread(void* self);

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
/// @param self QTranslator*
///
/// @return libqt_list of QObject*
///
libqt_list q_translator_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_translator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTranslator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_translator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_translator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_translator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTranslator*
///
void q_translator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTranslator*
///
void q_translator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTranslator*
/// @param name const char*
/// @param value QVariant*
///
bool q_translator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTranslator*
/// @param name const char*
///
QVariant* q_translator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTranslator*
///
const char** q_translator_dynamic_property_names(void* self);

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
/// @param self QTranslator*
///
const QBindingStorage* q_translator_binding_storage2(void* self);

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
/// @param self QTranslator*
///
QObject* q_translator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTranslator*
/// @param classname const char*
///
bool q_translator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTranslator*
///
void q_translator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTranslator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_translator_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_translator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTranslator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_translator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_translator_qbase_event(void* self, void* event);

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
bool q_translator_qbase_event_filter(void* self, void* watched, void* event);

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
void q_translator_qbase_timer_event(void* self, void* event);

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
void q_translator_qbase_child_event(void* self, void* event);

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
void q_translator_qbase_custom_event(void* self, void* event);

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
void q_translator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QMetaMethod* signal)
///
void q_translator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
void q_translator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback void func(QTranslator* self, QMetaMethod* signal)
///
void q_translator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
///
QObject* q_translator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
///
QObject* q_translator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback QObject* func()
///
void q_translator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
///
int32_t q_translator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
///
int32_t q_translator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback int32_t func()
///
void q_translator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param signal const char*
///
int32_t q_translator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param signal const char*
///
int32_t q_translator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback int32_t func(QTranslator* self, const char* signal)
///
void q_translator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
bool q_translator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTranslator*
/// @param signal QMetaMethod*
///
bool q_translator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTranslator*
/// @param callback bool func(QTranslator* self, QMetaMethod* signal)
///
void q_translator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
