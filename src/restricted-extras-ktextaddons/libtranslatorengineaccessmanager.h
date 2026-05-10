#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORENGINEACCESSMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORENGINEACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)

/// k_texttranslator__translatorengineaccessmanager_new constructs a new TextTranslator::TranslatorEngineAccessManager object.
///
TextTranslator__TranslatorEngineAccessManager* k_texttranslator__translatorengineaccessmanager_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)

/// k_texttranslator__translatorengineaccessmanager_new2 constructs a new TextTranslator::TranslatorEngineAccessManager object.
///
/// @param parent QObject*
///
TextTranslator__TranslatorEngineAccessManager* k_texttranslator__translatorengineaccessmanager_new2(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
const QMetaObject* k_texttranslator__translatorengineaccessmanager_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback const QMetaObject* func()
///
void k_texttranslator__translatorengineaccessmanager_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_meta_object` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_meta_object k_texttranslator__translatorengineaccessmanager_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
const QMetaObject* k_texttranslator__translatorengineaccessmanager_super_meta_object(void* self);

/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param param1 const char*
///
void* k_texttranslator__translatorengineaccessmanager_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void* func(TextTranslator__TranslatorEngineAccessManager* self, const char* param1)
///
void k_texttranslator__translatorengineaccessmanager_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_metacast` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_metacast k_texttranslator__translatorengineaccessmanager_super_metacast

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param param1 const char*
///
void* k_texttranslator__translatorengineaccessmanager_super_metacast(void* self, const char* param1);

/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorengineaccessmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback int32_t func(TextTranslator__TranslatorEngineAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texttranslator__translatorengineaccessmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_metacall` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_metacall k_texttranslator__translatorengineaccessmanager_super_metacall

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorengineaccessmanager_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texttranslator__translatorengineaccessmanager_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
TextTranslator__TranslatorEngineAccessManager* k_texttranslator__translatorengineaccessmanager_self();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
QNetworkAccessManager* k_texttranslator__translatorengineaccessmanager_network_manager(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texttranslator__translatorengineaccessmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texttranslator__translatorengineaccessmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
const char* k_texttranslator__translatorengineaccessmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param name const char*
///
void k_texttranslator__translatorengineaccessmanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
bool k_texttranslator__translatorengineaccessmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
bool k_texttranslator__translatorengineaccessmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
bool k_texttranslator__translatorengineaccessmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
bool k_texttranslator__translatorengineaccessmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param b bool
///
bool k_texttranslator__translatorengineaccessmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
QThread* k_texttranslator__translatorengineaccessmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param thread QThread*
///
bool k_texttranslator__translatorengineaccessmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param interval int
///
int32_t k_texttranslator__translatorengineaccessmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param time int64_t of nanoseconds
///
int32_t k_texttranslator__translatorengineaccessmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param id int
///
void k_texttranslator__translatorengineaccessmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param id enum Qt__TimerId
///
void k_texttranslator__translatorengineaccessmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
/// @return libqt_list of QObject*
///
libqt_list k_texttranslator__translatorengineaccessmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param parent QObject*
///
void k_texttranslator__translatorengineaccessmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param filterObj QObject*
///
void k_texttranslator__translatorengineaccessmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param obj QObject*
///
void k_texttranslator__translatorengineaccessmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param receiver QObject*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
void k_texttranslator__translatorengineaccessmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
void k_texttranslator__translatorengineaccessmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param name const char*
/// @param value QVariant*
///
bool k_texttranslator__translatorengineaccessmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param name const char*
///
QVariant* k_texttranslator__translatorengineaccessmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
const char** k_texttranslator__translatorengineaccessmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
QBindingStorage* k_texttranslator__translatorengineaccessmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
const QBindingStorage* k_texttranslator__translatorengineaccessmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
void k_texttranslator__translatorengineaccessmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self)
///
void k_texttranslator__translatorengineaccessmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
QObject* k_texttranslator__translatorengineaccessmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param classname const char*
///
bool k_texttranslator__translatorengineaccessmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
void k_texttranslator__translatorengineaccessmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorengineaccessmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorengineaccessmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal const char*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorengineaccessmanager_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param param1 QObject*
///
void k_texttranslator__translatorengineaccessmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, QObject* param1)
///
void k_texttranslator__translatorengineaccessmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineaccessmanager_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_event` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_event k_texttranslator__translatorengineaccessmanager_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineaccessmanager_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback bool func(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event)
///
void k_texttranslator__translatorengineaccessmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineaccessmanager_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_event_filter` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_event_filter k_texttranslator__translatorengineaccessmanager_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorengineaccessmanager_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback bool func(TextTranslator__TranslatorEngineAccessManager* self, QObject* watched, QEvent* event)
///
void k_texttranslator__translatorengineaccessmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorengineaccessmanager_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_timer_event` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_timer_event k_texttranslator__translatorengineaccessmanager_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorengineaccessmanager_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, QTimerEvent* event)
///
void k_texttranslator__translatorengineaccessmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QChildEvent*
///
void k_texttranslator__translatorengineaccessmanager_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_child_event` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_child_event k_texttranslator__translatorengineaccessmanager_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QChildEvent*
///
void k_texttranslator__translatorengineaccessmanager_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, QChildEvent* event)
///
void k_texttranslator__translatorengineaccessmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QEvent*
///
void k_texttranslator__translatorengineaccessmanager_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_custom_event` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_custom_event k_texttranslator__translatorengineaccessmanager_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param event QEvent*
///
void k_texttranslator__translatorengineaccessmanager_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, QEvent* event)
///
void k_texttranslator__translatorengineaccessmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineaccessmanager_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_connect_notify` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_connect_notify k_texttranslator__translatorengineaccessmanager_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineaccessmanager_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineaccessmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineaccessmanager_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_disconnect_notify` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_disconnect_notify k_texttranslator__translatorengineaccessmanager_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorengineaccessmanager_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineaccessmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
QObject* k_texttranslator__translatorengineaccessmanager_sender(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_sender` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_sender k_texttranslator__translatorengineaccessmanager_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
QObject* k_texttranslator__translatorengineaccessmanager_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback QObject* func()
///
void k_texttranslator__translatorengineaccessmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
int32_t k_texttranslator__translatorengineaccessmanager_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_sender_signal_index` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_sender_signal_index k_texttranslator__translatorengineaccessmanager_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
int32_t k_texttranslator__translatorengineaccessmanager_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback int32_t func()
///
void k_texttranslator__translatorengineaccessmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal const char*
///
int32_t k_texttranslator__translatorengineaccessmanager_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_receivers` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_receivers k_texttranslator__translatorengineaccessmanager_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal const char*
///
int32_t k_texttranslator__translatorengineaccessmanager_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback int32_t func(TextTranslator__TranslatorEngineAccessManager* self, const char* signal)
///
void k_texttranslator__translatorengineaccessmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorengineaccessmanager_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorengineaccessmanager_super_is_signal_connected` instead
///
#define k_texttranslator__translatorengineaccessmanager_qbase_is_signal_connected k_texttranslator__translatorengineaccessmanager_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorengineaccessmanager_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback bool func(TextTranslator__TranslatorEngineAccessManager* self, QMetaMethod* signal)
///
void k_texttranslator__translatorengineaccessmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
/// @param callback void func(TextTranslator__TranslatorEngineAccessManager* self, const char* objectName)
///
void k_texttranslator__translatorengineaccessmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorEngineAccessManager.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorEngineAccessManager*
///
void k_texttranslator__translatorengineaccessmanager_delete(void* self);

#endif
