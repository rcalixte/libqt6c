#pragma once
#ifndef LIBQTEXTOBJECT_H
#define LIBQTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTextObject*
///
const QMetaObject* q_textobject_meta_object(const void* self);

/// @param self QTextObject*
/// @param param1 const char*
///
void* q_textobject_metacast(void* self, const char* param1);

/// @param self QTextObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textobject_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
///
/// @param self const QTextObject*
///
QTextFormat* q_textobject_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// @param self const QTextObject*
///
int32_t q_textobject_format_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// @param self const QTextObject*
///
QTextDocument* q_textobject_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// @param self const QTextObject*
///
int32_t q_textobject_object_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textobject_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QTextObject*
/// @param event QEvent*
///
bool q_textobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QTextObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextObject*
///
const char* q_textobject_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextObject*
/// @param name const char*
///
void q_textobject_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTextObject*
///
bool q_textobject_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTextObject*
///
bool q_textobject_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTextObject*
///
bool q_textobject_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTextObject*
///
bool q_textobject_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextObject*
/// @param b bool
///
bool q_textobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTextObject*
///
QThread* q_textobject_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextObject*
/// @param thread QThread*
///
bool q_textobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextObject*
/// @param interval int
///
int32_t q_textobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextObject*
/// @param time int64_t of nanoseconds
///
int32_t q_textobject_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextObject*
/// @param id int
///
void q_textobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextObject*
/// @param id enum Qt__TimerId
///
void q_textobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTextObject*
///
/// @return libqt_list of QObject*
///
libqt_list q_textobject_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextObject*
/// @param parent QObject*
///
void q_textobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextObject*
/// @param filterObj QObject*
///
void q_textobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextObject*
/// @param obj QObject*
///
void q_textobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_textobject_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textobject_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textobject_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textobject_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textobject_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextObject*
///
bool q_textobject_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextObject*
/// @param receiver QObject*
///
bool q_textobject_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textobject_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTextObject*
///
void q_textobject_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTextObject*
///
void q_textobject_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextObject*
/// @param name const char*
/// @param value QVariant*
///
bool q_textobject_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTextObject*
/// @param name const char*
///
QVariant* q_textobject_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTextObject*
///
const char** q_textobject_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextObject*
///
QBindingStorage* q_textobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTextObject*
///
const QBindingStorage* q_textobject_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextObject*
///
void q_textobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextObject*
/// @param callback void func(QTextObject* self)
///
void q_textobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTextObject*
///
QObject* q_textobject_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTextObject*
/// @param classname const char*
///
bool q_textobject_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextObject*
///
void q_textobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textobject_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextObject*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_textobject_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_textobject_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_textobject_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textobject_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextObject*
/// @param signal const char*
///
bool q_textobject_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextObject*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_textobject_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textobject_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextObject*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textobject_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextObject*
/// @param param1 QObject*
///
void q_textobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextObject*
/// @param callback void func(QTextObject* self, QObject* param1)
///
void q_textobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextObject*
/// @param callback void func(QTextObject* self, const char* objectName)
///
void q_textobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTextBlockGroup*
///
const QMetaObject* q_textblockgroup_meta_object(const void* self);

/// @param self QTextBlockGroup*
/// @param param1 const char*
///
void* q_textblockgroup_metacast(void* self, const char* param1);

/// @param self QTextBlockGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textblockgroup_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textblockgroup_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textblockgroup_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textblockgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
///
/// @param self const QTextBlockGroup*
///
QTextFormat* q_textblockgroup_format(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// @param self const QTextBlockGroup*
///
int32_t q_textblockgroup_format_index(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// @param self const QTextBlockGroup*
///
QTextDocument* q_textblockgroup_document(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// @param self const QTextBlockGroup*
///
int32_t q_textblockgroup_object_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QTextBlockGroup*
/// @param event QEvent*
///
bool q_textblockgroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QTextBlockGroup*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textblockgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextBlockGroup*
///
const char* q_textblockgroup_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextBlockGroup*
/// @param name const char*
///
void q_textblockgroup_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTextBlockGroup*
///
bool q_textblockgroup_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTextBlockGroup*
///
bool q_textblockgroup_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTextBlockGroup*
///
bool q_textblockgroup_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTextBlockGroup*
///
bool q_textblockgroup_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextBlockGroup*
/// @param b bool
///
bool q_textblockgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTextBlockGroup*
///
QThread* q_textblockgroup_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextBlockGroup*
/// @param thread QThread*
///
bool q_textblockgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextBlockGroup*
/// @param interval int
///
int32_t q_textblockgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextBlockGroup*
/// @param time int64_t of nanoseconds
///
int32_t q_textblockgroup_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextBlockGroup*
/// @param id int
///
void q_textblockgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextBlockGroup*
/// @param id enum Qt__TimerId
///
void q_textblockgroup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTextBlockGroup*
///
/// @return libqt_list of QObject*
///
libqt_list q_textblockgroup_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextBlockGroup*
/// @param parent QObject*
///
void q_textblockgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextBlockGroup*
/// @param filterObj QObject*
///
void q_textblockgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextBlockGroup*
/// @param obj QObject*
///
void q_textblockgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_textblockgroup_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textblockgroup_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextBlockGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textblockgroup_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textblockgroup_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textblockgroup_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextBlockGroup*
///
bool q_textblockgroup_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextBlockGroup*
/// @param receiver QObject*
///
bool q_textblockgroup_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textblockgroup_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTextBlockGroup*
///
void q_textblockgroup_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTextBlockGroup*
///
void q_textblockgroup_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextBlockGroup*
/// @param name const char*
/// @param value QVariant*
///
bool q_textblockgroup_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTextBlockGroup*
/// @param name const char*
///
QVariant* q_textblockgroup_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTextBlockGroup*
///
const char** q_textblockgroup_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextBlockGroup*
///
QBindingStorage* q_textblockgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTextBlockGroup*
///
const QBindingStorage* q_textblockgroup_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBlockGroup*
///
void q_textblockgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBlockGroup*
/// @param callback void func(QTextBlockGroup* self)
///
void q_textblockgroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTextBlockGroup*
///
QObject* q_textblockgroup_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTextBlockGroup*
/// @param classname const char*
///
bool q_textblockgroup_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextBlockGroup*
///
void q_textblockgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextBlockGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textblockgroup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextBlockGroup*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_textblockgroup_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_textblockgroup_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_textblockgroup_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextBlockGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textblockgroup_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextBlockGroup*
/// @param signal const char*
///
bool q_textblockgroup_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextBlockGroup*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_textblockgroup_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextBlockGroup*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textblockgroup_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextBlockGroup*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textblockgroup_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBlockGroup*
/// @param param1 QObject*
///
void q_textblockgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBlockGroup*
/// @param callback void func(QTextBlockGroup* self, QObject* param1)
///
void q_textblockgroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextBlockGroup*
/// @param callback void func(QTextBlockGroup* self, const char* objectName)
///
void q_textblockgroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html)

/// q_textframe_new constructs a new QTextFrame object.
///
/// @param doc QTextDocument*
///
QTextFrame* q_textframe_new(void* doc);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTextFrame*
///
const QMetaObject* q_textframe_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QTextFrame*
/// @param callback const QMetaObject* func(const QTextFrame* self)
///
void q_textframe_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTextFrame*
///
const QMetaObject* q_textframe_super_meta_object(const void* self);

/// @param self QTextFrame*
/// @param param1 const char*
///
void* q_textframe_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTextFrame*
/// @param callback void* func(QTextFrame* self, const char* param1)
///
void q_textframe_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTextFrame*
/// @param param1 const char*
///
void* q_textframe_super_metacast(void* self, const char* param1);

/// @param self QTextFrame*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textframe_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextFrame*
/// @param callback int32_t func(QTextFrame* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_textframe_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextFrame*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textframe_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textframe_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
///
/// @param self QTextFrame*
/// @param format QTextFrameFormat*
///
void q_textframe_set_frame_format(void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
///
/// @param self const QTextFrame*
///
QTextFrameFormat* q_textframe_frame_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
///
/// @param self const QTextFrame*
///
QTextCursor* q_textframe_first_cursor_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
///
/// @param self const QTextFrame*
///
QTextCursor* q_textframe_last_cursor_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
///
/// @param self const QTextFrame*
///
int32_t q_textframe_first_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
///
/// @param self const QTextFrame*
///
int32_t q_textframe_last_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
///
/// @param self const QTextFrame*
///
/// @return libqt_list of QTextFrame*
///
libqt_list q_textframe_child_frames(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
///
/// @param self const QTextFrame*
///
QTextFrame* q_textframe_parent_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#begin)
///
/// @param self const QTextFrame*
///
QTextFrame__iterator* q_textframe_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#end)
///
/// @param self const QTextFrame*
///
QTextFrame__iterator* q_textframe_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textframe_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textframe_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
///
/// @param self const QTextFrame*
///
QTextFormat* q_textframe_format(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// @param self const QTextFrame*
///
int32_t q_textframe_format_index(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// @param self const QTextFrame*
///
QTextDocument* q_textframe_document(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// @param self const QTextFrame*
///
int32_t q_textframe_object_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextFrame*
///
const char* q_textframe_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextFrame*
/// @param name const char*
///
void q_textframe_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTextFrame*
///
bool q_textframe_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTextFrame*
///
bool q_textframe_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTextFrame*
///
bool q_textframe_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTextFrame*
///
bool q_textframe_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextFrame*
/// @param b bool
///
bool q_textframe_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTextFrame*
///
QThread* q_textframe_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextFrame*
/// @param thread QThread*
///
bool q_textframe_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextFrame*
/// @param interval int
///
int32_t q_textframe_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextFrame*
/// @param time int64_t of nanoseconds
///
int32_t q_textframe_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextFrame*
/// @param id int
///
void q_textframe_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextFrame*
/// @param id enum Qt__TimerId
///
void q_textframe_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTextFrame*
///
/// @return libqt_list of QObject*
///
libqt_list q_textframe_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextFrame*
/// @param parent QObject*
///
void q_textframe_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextFrame*
/// @param filterObj QObject*
///
void q_textframe_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextFrame*
/// @param obj QObject*
///
void q_textframe_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_textframe_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textframe_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextFrame*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textframe_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textframe_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textframe_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextFrame*
///
bool q_textframe_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextFrame*
/// @param receiver QObject*
///
bool q_textframe_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textframe_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTextFrame*
///
void q_textframe_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTextFrame*
///
void q_textframe_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextFrame*
/// @param name const char*
/// @param value QVariant*
///
bool q_textframe_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTextFrame*
/// @param name const char*
///
QVariant* q_textframe_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTextFrame*
///
const char** q_textframe_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextFrame*
///
QBindingStorage* q_textframe_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTextFrame*
///
const QBindingStorage* q_textframe_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextFrame*
///
void q_textframe_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self)
///
void q_textframe_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTextFrame*
///
QObject* q_textframe_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTextFrame*
/// @param classname const char*
///
bool q_textframe_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextFrame*
///
void q_textframe_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextFrame*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textframe_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextFrame*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_textframe_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_textframe_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_textframe_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextFrame*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textframe_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextFrame*
/// @param signal const char*
///
bool q_textframe_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextFrame*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_textframe_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextFrame*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textframe_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextFrame*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textframe_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextFrame*
/// @param param1 QObject*
///
void q_textframe_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QObject* param1)
///
void q_textframe_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param event QEvent*
///
bool q_textframe_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param event QEvent*
///
bool q_textframe_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback bool func(QTextFrame* self, QEvent* event)
///
void q_textframe_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textframe_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textframe_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback bool func(QTextFrame* self, QObject* watched, QEvent* event)
///
void q_textframe_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param event QTimerEvent*
///
void q_textframe_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param event QTimerEvent*
///
void q_textframe_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QTimerEvent* event)
///
void q_textframe_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param event QChildEvent*
///
void q_textframe_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param event QChildEvent*
///
void q_textframe_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QChildEvent* event)
///
void q_textframe_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param event QEvent*
///
void q_textframe_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param event QEvent*
///
void q_textframe_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QEvent* event)
///
void q_textframe_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param signal QMetaMethod*
///
void q_textframe_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param signal QMetaMethod*
///
void q_textframe_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QMetaMethod* signal)
///
void q_textframe_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param signal QMetaMethod*
///
void q_textframe_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param signal QMetaMethod*
///
void q_textframe_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QMetaMethod* signal)
///
void q_textframe_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextFrame*
/// @param format QTextFormat*
///
void q_textframe_set_format(void* self, const void* format);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextFrame*
/// @param format QTextFormat*
///
void q_textframe_super_set_format(void* self, const void* format);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, QTextFormat* format)
///
void q_textframe_on_set_format(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextFrame*
///
QObject* q_textframe_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextFrame*
///
QObject* q_textframe_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextFrame*
/// @param callback QObject* func(QTextFrame* self)
///
void q_textframe_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextFrame*
///
int32_t q_textframe_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextFrame*
///
int32_t q_textframe_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextFrame*
/// @param callback int32_t func(QTextFrame* self)
///
void q_textframe_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextFrame*
/// @param signal const char*
///
int32_t q_textframe_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextFrame*
/// @param signal const char*
///
int32_t q_textframe_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextFrame*
/// @param callback int32_t func(QTextFrame* self, const char* signal)
///
void q_textframe_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextFrame*
/// @param signal QMetaMethod*
///
bool q_textframe_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextFrame*
/// @param signal QMetaMethod*
///
bool q_textframe_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextFrame*
/// @param callback bool func(QTextFrame* self, QMetaMethod* signal)
///
void q_textframe_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextFrame*
/// @param callback void func(QTextFrame* self, const char* objectName)
///
void q_textframe_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#dtor.QTextFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QTextFrame*
///
void q_textframe_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html)

/// q_textblockuserdata_new constructs a new QTextBlockUserData object.
///
QTextBlockUserData* q_textblockuserdata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html#operator-eq)
///
/// @param self QTextBlockUserData*
/// @param param1 QTextBlockUserData*
///
void q_textblockuserdata_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html#dtor.QTextBlockUserData)
///
/// Delete this object from C++ memory.
///
/// @param self QTextBlockUserData*
///
void q_textblockuserdata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html)

/// q_textblock_new constructs a new QTextBlock object.
///
QTextBlock* q_textblock_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html)

/// q_textblock_new2 constructs a new QTextBlock object.
///
/// @param o QTextBlock*
///
QTextBlock* q_textblock_new2(const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-eq)
///
/// @param self QTextBlock*
/// @param o QTextBlock*
///
void q_textblock_operator_assign(void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#isValid)
///
/// @param self const QTextBlock*
///
bool q_textblock_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-eq-eq)
///
/// @param self const QTextBlock*
/// @param o QTextBlock*
///
bool q_textblock_operator_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-not-eq)
///
/// @param self const QTextBlock*
/// @param o QTextBlock*
///
bool q_textblock_operator_not_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-lt)
///
/// @param self const QTextBlock*
/// @param o QTextBlock*
///
bool q_textblock_operator_lesser(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#position)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#length)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#contains)
///
/// @param self const QTextBlock*
/// @param position int
///
bool q_textblock_contains(const void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#layout)
///
/// @param self const QTextBlock*
///
QTextLayout* q_textblock_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#clearLayout)
///
/// @param self QTextBlock*
///
void q_textblock_clear_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockFormat)
///
/// @param self const QTextBlock*
///
QTextBlockFormat* q_textblock_block_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockFormatIndex)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_block_format_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#charFormat)
///
/// @param self const QTextBlock*
///
QTextCharFormat* q_textblock_char_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#charFormatIndex)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_char_format_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textDirection)
///
/// @param self const QTextBlock*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_textblock_text_direction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextBlock*
///
const char* q_textblock_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textFormats)
///
/// @param self const QTextBlock*
///
/// @return libqt_list of QTextLayout__FormatRange*
///
libqt_list q_textblock_text_formats(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#document)
///
/// @param self const QTextBlock*
///
const QTextDocument* q_textblock_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textList)
///
/// @param self const QTextBlock*
///
QTextList* q_textblock_text_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#userData)
///
/// @param self const QTextBlock*
///
QTextBlockUserData* q_textblock_user_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setUserData)
///
/// @param self QTextBlock*
/// @param data QTextBlockUserData*
///
void q_textblock_set_user_data(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#userState)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_user_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setUserState)
///
/// @param self QTextBlock*
/// @param state int
///
void q_textblock_set_user_state(void* self, int state);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#revision)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_revision(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setRevision)
///
/// @param self QTextBlock*
/// @param rev int
///
void q_textblock_set_revision(void* self, int rev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#isVisible)
///
/// @param self const QTextBlock*
///
bool q_textblock_is_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setVisible)
///
/// @param self QTextBlock*
/// @param visible bool
///
void q_textblock_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockNumber)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_block_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#firstLineNumber)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_first_line_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setLineCount)
///
/// @param self QTextBlock*
/// @param count int
///
void q_textblock_set_line_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#lineCount)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_line_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#begin)
///
/// @param self const QTextBlock*
///
QTextBlock__iterator* q_textblock_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#end)
///
/// @param self const QTextBlock*
///
QTextBlock__iterator* q_textblock_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#next)
///
/// @param self const QTextBlock*
///
QTextBlock* q_textblock_next(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#previous)
///
/// @param self const QTextBlock*
///
QTextBlock* q_textblock_previous(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#fragmentIndex)
///
/// @param self const QTextBlock*
///
int32_t q_textblock_fragment_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#dtor.QTextBlock)
///
/// Delete this object from C++ memory.
///
/// @param self QTextBlock*
///
void q_textblock_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html)

/// q_textfragment_new constructs a new QTextFragment object.
///
QTextFragment* q_textfragment_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html)

/// q_textfragment_new2 constructs a new QTextFragment object.
///
/// @param o QTextFragment*
///
QTextFragment* q_textfragment_new2(const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq)
///
/// @param self QTextFragment*
/// @param o QTextFragment*
///
void q_textfragment_operator_assign(void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#isValid)
///
/// @param self const QTextFragment*
///
bool q_textfragment_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq-eq)
///
/// @param self const QTextFragment*
/// @param o QTextFragment*
///
bool q_textfragment_operator_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-not-eq)
///
/// @param self const QTextFragment*
/// @param o QTextFragment*
///
bool q_textfragment_operator_not_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-lt)
///
/// @param self const QTextFragment*
/// @param o QTextFragment*
///
bool q_textfragment_operator_lesser(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#position)
///
/// @param self const QTextFragment*
///
int32_t q_textfragment_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#length)
///
/// @param self const QTextFragment*
///
int32_t q_textfragment_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#contains)
///
/// @param self const QTextFragment*
/// @param position int
///
bool q_textfragment_contains(const void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#charFormat)
///
/// @param self const QTextFragment*
///
QTextCharFormat* q_textfragment_char_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#charFormatIndex)
///
/// @param self const QTextFragment*
///
int32_t q_textfragment_char_format_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextFragment*
///
const char* q_textfragment_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
///
/// @param self const QTextFragment*
///
/// @return libqt_list of QGlyphRun*
///
libqt_list q_textfragment_glyph_runs(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
///
/// @param self const QTextFragment*
/// @param from int
///
/// @return libqt_list of QGlyphRun*
///
libqt_list q_textfragment_glyph_runs1(const void* self, int from);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
///
/// @param self const QTextFragment*
/// @param from int
/// @param length int
///
/// @return libqt_list of QGlyphRun*
///
libqt_list q_textfragment_glyph_runs2(const void* self, int from, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#dtor.QTextFragment)
///
/// Delete this object from C++ memory.
///
/// @param self QTextFragment*
///
void q_textfragment_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html)

/// q_textframe__iterator_new constructs a new QTextFrame::iterator object.
///
QTextFrame__iterator* q_textframe__iterator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html)

/// q_textframe__iterator_new2 constructs a new QTextFrame::iterator object.
///
/// @param other QTextFrame__iterator*
///
QTextFrame__iterator* q_textframe__iterator_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html)

/// q_textframe__iterator_new3 constructs a new QTextFrame::iterator object and invalidates the source QTextFrame::iterator object.
///
/// @param other QTextFrame__iterator*
///
QTextFrame__iterator* q_textframe__iterator_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html)

/// q_textframe__iterator_new4 constructs a new QTextFrame::iterator object.
///
/// @param param1 QTextFrame__iterator*
///
QTextFrame__iterator* q_textframe__iterator_new4(const void* param1);

/// q_textframe__iterator_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextFrame__iterator*
/// @param other QTextFrame__iterator*
///
void q_textframe__iterator_copy_assign(void* self, void* other);

/// q_textframe__iterator_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextFrame__iterator*
/// @param other QTextFrame__iterator*
///
void q_textframe__iterator_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#parentFrame)
///
/// @param self const QTextFrame__iterator*
///
QTextFrame* q_textframe__iterator_parent_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#currentFrame)
///
/// @param self const QTextFrame__iterator*
///
QTextFrame* q_textframe__iterator_current_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#currentBlock)
///
/// @param self const QTextFrame__iterator*
///
QTextBlock* q_textframe__iterator_current_block(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#atEnd)
///
/// @param self const QTextFrame__iterator*
///
bool q_textframe__iterator_at_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-eq-eq)
///
/// @param self const QTextFrame__iterator*
/// @param o QTextFrame__iterator*
///
bool q_textframe__iterator_operator_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-not-eq)
///
/// @param self const QTextFrame__iterator*
/// @param o QTextFrame__iterator*
///
bool q_textframe__iterator_operator_not_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-2b-2b)
///
/// @param self QTextFrame__iterator*
///
QTextFrame__iterator* q_textframe__iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-2b-2b)
///
/// @param self QTextFrame__iterator*
/// @param param1 int
///
QTextFrame__iterator* q_textframe__iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator--)
///
/// @param self QTextFrame__iterator*
///
QTextFrame__iterator* q_textframe__iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator--)
///
/// @param self QTextFrame__iterator*
/// @param param1 int
///
QTextFrame__iterator* q_textframe__iterator_operator_minus_minus2(void* self, int param1);

/// Delete this object from C++ memory.
///
/// @param self QTextFrame__iterator*
///
void q_textframe__iterator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html)

/// q_textblock__iterator_new constructs a new QTextBlock::iterator object.
///
QTextBlock__iterator* q_textblock__iterator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html)

/// q_textblock__iterator_new2 constructs a new QTextBlock::iterator object.
///
/// @param other QTextBlock__iterator*
///
QTextBlock__iterator* q_textblock__iterator_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html)

/// q_textblock__iterator_new3 constructs a new QTextBlock::iterator object and invalidates the source QTextBlock::iterator object.
///
/// @param other QTextBlock__iterator*
///
QTextBlock__iterator* q_textblock__iterator_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html)

/// q_textblock__iterator_new4 constructs a new QTextBlock::iterator object.
///
/// @param param1 QTextBlock__iterator*
///
QTextBlock__iterator* q_textblock__iterator_new4(const void* param1);

/// q_textblock__iterator_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextBlock__iterator*
/// @param other QTextBlock__iterator*
///
void q_textblock__iterator_copy_assign(void* self, void* other);

/// q_textblock__iterator_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextBlock__iterator*
/// @param other QTextBlock__iterator*
///
void q_textblock__iterator_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#fragment)
///
/// @param self const QTextBlock__iterator*
///
QTextFragment* q_textblock__iterator_fragment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#atEnd)
///
/// @param self const QTextBlock__iterator*
///
bool q_textblock__iterator_at_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-eq-eq)
///
/// @param self const QTextBlock__iterator*
/// @param o QTextBlock__iterator*
///
bool q_textblock__iterator_operator_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-not-eq)
///
/// @param self const QTextBlock__iterator*
/// @param o QTextBlock__iterator*
///
bool q_textblock__iterator_operator_not_equal(const void* self, const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-2b-2b)
///
/// @param self QTextBlock__iterator*
///
QTextBlock__iterator* q_textblock__iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-2b-2b)
///
/// @param self QTextBlock__iterator*
/// @param param1 int
///
QTextBlock__iterator* q_textblock__iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator--)
///
/// @param self QTextBlock__iterator*
///
QTextBlock__iterator* q_textblock__iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator--)
///
/// @param self QTextBlock__iterator*
/// @param param1 int
///
QTextBlock__iterator* q_textblock__iterator_operator_minus_minus2(void* self, int param1);

/// Delete this object from C++ memory.
///
/// @param self QTextBlock__iterator*
///
void q_textblock__iterator_delete(void* self);

#endif
