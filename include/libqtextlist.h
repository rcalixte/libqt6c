#pragma once
#ifndef SRCQT6C_LIBQTEXTLIST_H
#define SRCQT6C_LIBQTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextlist.html

/// q_textlist_new constructs a new QTextList object.
///
/// @param doc QTextDocument*
QTextList* q_textlist_new(void* doc);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextList*
const QMetaObject* q_textlist_meta_object(void* self);

/// @param self QTextList*
/// @param param1 const char*
void* q_textlist_metacast(void* self, const char* param1);

/// @param self QTextList*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_textlist_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextList*
/// @param callback int32_t func(QTextList* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_textlist_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextList*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_textlist_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_textlist_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#count)
///
/// @param self QTextList*
int32_t q_textlist_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#item)
///
/// @param self QTextList*
/// @param i int
QTextBlock* q_textlist_item(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#itemNumber)
///
/// @param self QTextList*
/// @param param1 QTextBlock*
int32_t q_textlist_item_number(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#itemText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextList*
/// @param param1 QTextBlock*
const char* q_textlist_item_text(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#removeItem)
///
/// @param self QTextList*
/// @param i int
void q_textlist_remove_item(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#remove)
///
/// @param self QTextList*
/// @param param1 QTextBlock*
void q_textlist_remove(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#add)
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_add(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#setFormat)
///
/// @param self QTextList*
/// @param format QTextListFormat*
void q_textlist_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#format)
///
/// @param self QTextList*
QTextListFormat* q_textlist_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_textlist_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_textlist_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// @param self QTextList*
int32_t q_textlist_format_index(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// @param self QTextList*
QTextDocument* q_textlist_document(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// @param self QTextList*
int32_t q_textlist_object_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextList*
const char* q_textlist_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextList*
/// @param name char*
void q_textlist_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextList*
bool q_textlist_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextList*
bool q_textlist_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextList*
bool q_textlist_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextList*
bool q_textlist_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextList*
/// @param b bool
bool q_textlist_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextList*
QThread* q_textlist_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextList*
/// @param thread QThread*
bool q_textlist_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextList*
/// @param interval int
int32_t q_textlist_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextList*
/// @param id int
void q_textlist_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextList*
/// @param id enum Qt__TimerId
void q_textlist_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextList*
libqt_list /* of QObject* */ q_textlist_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextList*
/// @param parent QObject*
void q_textlist_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextList*
/// @param filterObj QObject*
void q_textlist_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextList*
/// @param obj QObject*
void q_textlist_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_textlist_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextList*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_textlist_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_textlist_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_textlist_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextList*
void q_textlist_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextList*
void q_textlist_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextList*
/// @param name const char*
/// @param value QVariant*
bool q_textlist_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextList*
/// @param name const char*
QVariant* q_textlist_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextList*
const char** q_textlist_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextList*
QBindingStorage* q_textlist_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextList*
const QBindingStorage* q_textlist_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
void q_textlist_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
/// @param callback void func(QTextList* self)
void q_textlist_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextList*
QObject* q_textlist_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextList*
/// @param classname const char*
bool q_textlist_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextList*
void q_textlist_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextList*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_textlist_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextList*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_textlist_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_textlist_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextList*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_textlist_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
/// @param param1 QObject*
void q_textlist_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QObject* param1)
void q_textlist_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_block_inserted(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_qbase_block_inserted(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTextBlock* block)
void q_textlist_on_block_inserted(void* self, void (*callback)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_block_removed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_qbase_block_removed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTextBlock* block)
void q_textlist_on_block_removed(void* self, void (*callback)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_block_format_changed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param block QTextBlock*
void q_textlist_qbase_block_format_changed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTextBlock* block)
void q_textlist_on_block_format_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
bool q_textlist_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
bool q_textlist_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback bool func(QTextList* self, QEvent* event)
void q_textlist_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param watched QObject*
/// @param event QEvent*
bool q_textlist_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param watched QObject*
/// @param event QEvent*
bool q_textlist_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback bool func(QTextList* self, QObject* watched, QEvent* event)
void q_textlist_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QTimerEvent*
void q_textlist_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QTimerEvent*
void q_textlist_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QTimerEvent* event)
void q_textlist_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QChildEvent*
void q_textlist_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QChildEvent*
void q_textlist_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QChildEvent* event)
void q_textlist_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
void q_textlist_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param event QEvent*
void q_textlist_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QEvent* event)
void q_textlist_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
void q_textlist_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
void q_textlist_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QMetaMethod* signal)
void q_textlist_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
void q_textlist_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
void q_textlist_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, QMetaMethod* signal)
void q_textlist_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
libqt_list /* of QTextBlock* */ q_textlist_block_list(void* self);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
libqt_list /* of QTextBlock* */ q_textlist_qbase_block_list(void* self);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback libqt_list /* of QTextBlock* */ func()
void q_textlist_on_block_list(void* self, libqt_list /* of QTextBlock* */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
QObject* q_textlist_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
QObject* q_textlist_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback QObject* func()
void q_textlist_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
int32_t q_textlist_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
int32_t q_textlist_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback int32_t func()
void q_textlist_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param signal const char*
int32_t q_textlist_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param signal const char*
int32_t q_textlist_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback int32_t func(QTextList* self, const char* signal)
void q_textlist_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
bool q_textlist_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextList*
/// @param signal QMetaMethod*
bool q_textlist_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextList*
/// @param callback bool func(QTextList* self, QMetaMethod* signal)
void q_textlist_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextList*
/// @param callback void func(QTextList* self, const char* objectName)
void q_textlist_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#dtor.QTextList)
///
/// Delete this object from C++ memory.
///
/// @param self QTextList*
void q_textlist_delete(void* self);

#endif
