#pragma once
#ifndef LIBQTEXTLIST_H
#define LIBQTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html)

/// q_textlist_new constructs a new QTextList object.
///
/// @param doc QTextDocument*
///
QTextList* q_textlist_new(void* doc);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTextList*
///
const QMetaObject* q_textlist_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QTextList*
/// @param callback const QMetaObject* func(const QTextList* self)
///
void q_textlist_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTextList*
///
const QMetaObject* q_textlist_super_meta_object(const void* self);

/// @param self QTextList*
/// @param param1 const char*
///
void* q_textlist_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTextList*
/// @param callback void* func(QTextList* self, const char* param1)
///
void q_textlist_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTextList*
/// @param param1 const char*
///
void* q_textlist_super_metacast(void* self, const char* param1);

/// @param self QTextList*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textlist_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextList*
/// @param callback int32_t func(QTextList* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_textlist_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextList*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textlist_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textlist_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#count)
///
/// @param self const QTextList*
///
int32_t q_textlist_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#item)
///
/// @param self const QTextList*
/// @param i int
///
QTextBlock* q_textlist_item(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#itemNumber)
///
/// @param self const QTextList*
/// @param param1 QTextBlock*
///
int32_t q_textlist_item_number(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextList*
/// @param param1 QTextBlock*
///
const char* q_textlist_item_text(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#removeItem)
///
/// @param self QTextList*
/// @param i int
///
void q_textlist_remove_item(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#remove)
///
/// @param self QTextList*
/// @param param1 QTextBlock*
///
void q_textlist_remove(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#add)
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_add(void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#setFormat)
///
/// @param self QTextList*
/// @param format QTextListFormat*
///
void q_textlist_set_format(void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#format)
///
/// @param self const QTextList*
///
QTextListFormat* q_textlist_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textlist_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textlist_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// @param self const QTextList*
///
int32_t q_textlist_format_index(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// @param self const QTextList*
///
QTextDocument* q_textlist_document(const void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// @param self const QTextList*
///
int32_t q_textlist_object_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextList*
///
const char* q_textlist_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextList*
/// @param name const char*
///
void q_textlist_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTextList*
///
bool q_textlist_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTextList*
///
bool q_textlist_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTextList*
///
bool q_textlist_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTextList*
///
bool q_textlist_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextList*
/// @param b bool
///
bool q_textlist_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTextList*
///
QThread* q_textlist_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextList*
/// @param thread QThread*
///
bool q_textlist_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextList*
/// @param interval int
///
int32_t q_textlist_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextList*
/// @param time int64_t of nanoseconds
///
int32_t q_textlist_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextList*
/// @param id int
///
void q_textlist_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextList*
/// @param id enum Qt__TimerId
///
void q_textlist_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTextList*
///
/// @return libqt_list of QObject*
///
libqt_list q_textlist_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextList*
/// @param parent QObject*
///
void q_textlist_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextList*
/// @param filterObj QObject*
///
void q_textlist_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextList*
/// @param obj QObject*
///
void q_textlist_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_textlist_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textlist_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextList*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textlist_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textlist_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textlist_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextList*
///
bool q_textlist_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextList*
/// @param receiver QObject*
///
bool q_textlist_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textlist_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTextList*
///
void q_textlist_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTextList*
///
void q_textlist_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextList*
/// @param name const char*
/// @param value QVariant*
///
bool q_textlist_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTextList*
/// @param name const char*
///
QVariant* q_textlist_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTextList*
///
const char** q_textlist_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextList*
///
QBindingStorage* q_textlist_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTextList*
///
const QBindingStorage* q_textlist_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
///
void q_textlist_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
/// @param callback void func(QTextList* self)
///
void q_textlist_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTextList*
///
QObject* q_textlist_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTextList*
/// @param classname const char*
///
bool q_textlist_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextList*
///
void q_textlist_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextList*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textlist_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextList*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_textlist_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_textlist_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_textlist_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextList*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textlist_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextList*
/// @param signal const char*
///
bool q_textlist_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextList*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_textlist_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextList*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textlist_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextList*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textlist_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
/// @param param1 QObject*
///
void q_textlist_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QObject* param1)
///
void q_textlist_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_block_inserted(void* self, const void* block);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_super_block_inserted(void* self, const void* block);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTextBlock* block)
///
void q_textlist_on_block_inserted(void* self, void (*callback)(void*, const void*));

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_block_removed(void* self, const void* block);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_super_block_removed(void* self, const void* block);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTextBlock* block)
///
void q_textlist_on_block_removed(void* self, void (*callback)(void*, const void*));

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_block_format_changed(void* self, const void* block);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
///
void q_textlist_super_block_format_changed(void* self, const void* block);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTextBlock* block)
///
void q_textlist_on_block_format_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
///
bool q_textlist_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
///
bool q_textlist_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback bool func(QTextList* self, QEvent* event)
///
void q_textlist_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textlist_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textlist_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback bool func(QTextList* self, QObject* watched, QEvent* event)
///
void q_textlist_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QTimerEvent*
///
void q_textlist_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QTimerEvent*
///
void q_textlist_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTimerEvent* event)
///
void q_textlist_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QChildEvent*
///
void q_textlist_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QChildEvent*
///
void q_textlist_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QChildEvent* event)
///
void q_textlist_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
///
void q_textlist_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
///
void q_textlist_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QEvent* event)
///
void q_textlist_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
///
void q_textlist_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
///
void q_textlist_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QMetaMethod* signal)
///
void q_textlist_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
///
void q_textlist_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
///
void q_textlist_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QMetaMethod* signal)
///
void q_textlist_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextList*
///
/// @return libqt_list of QTextBlock*
///
libqt_list q_textlist_block_list(const void* self);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextList*
///
/// @return libqt_list of QTextBlock*
///
libqt_list q_textlist_super_block_list(const void* self);

/// Inherited from QTextBlockGroup
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextList*
/// @param callback libqt_list of QTextBlock* func(QTextList* self)
///
void q_textlist_on_block_list(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextList*
///
QObject* q_textlist_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextList*
///
QObject* q_textlist_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextList*
/// @param callback QObject* func(QTextList* self)
///
void q_textlist_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextList*
///
int32_t q_textlist_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextList*
///
int32_t q_textlist_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextList*
/// @param callback int32_t func(QTextList* self)
///
void q_textlist_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextList*
/// @param signal const char*
///
int32_t q_textlist_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextList*
/// @param signal const char*
///
int32_t q_textlist_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextList*
/// @param callback int32_t func(QTextList* self, const char* signal)
///
void q_textlist_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextList*
/// @param signal QMetaMethod*
///
bool q_textlist_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextList*
/// @param signal QMetaMethod*
///
bool q_textlist_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QTextList*
/// @param callback bool func(QTextList* self, QMetaMethod* signal)
///
void q_textlist_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, const char* objectName)
///
void q_textlist_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlist.html#dtor.QTextList)
///
/// Delete this object from C++ memory.
///
/// @param self QTextList*
///
void q_textlist_delete(void* self);

#endif
