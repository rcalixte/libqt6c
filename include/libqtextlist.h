#pragma once
#ifndef SRCQT6C_LIBQTEXTLIST_H
#define SRCQT6C_LIBQTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextdocument.h"
#include "libqtextformat.h"

/// https://doc.qt.io/qt-6/qtextlist.html

/// q_textlist_new constructs a new QTextList object.
///
/// ``` QTextDocument* doc ```
QTextList* q_textlist_new(void* doc);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextList* self ```
const QMetaObject* q_textlist_meta_object(void* self);

/// ``` QTextList* self, const char* param1 ```
void* q_textlist_metacast(void* self, const char* param1);

/// ``` QTextList* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textlist_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTextList* self, int32_t (*slot)(QTextList*, enum QMetaObject__Call, int, void*) ```
void q_textlist_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTextList* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textlist_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textlist_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#count)
///
/// ``` QTextList* self ```
int32_t q_textlist_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#item)
///
/// ``` QTextList* self, int i ```
QTextBlock* q_textlist_item(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#itemNumber)
///
/// ``` QTextList* self, QTextBlock* param1 ```
int32_t q_textlist_item_number(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#itemText)
///
/// ``` QTextList* self, QTextBlock* param1 ```
const char* q_textlist_item_text(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#removeItem)
///
/// ``` QTextList* self, int i ```
void q_textlist_remove_item(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#remove)
///
/// ``` QTextList* self, QTextBlock* param1 ```
void q_textlist_remove(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#add)
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_add(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#setFormat)
///
/// ``` QTextList* self, QTextListFormat* format ```
void q_textlist_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#format)
///
/// ``` QTextList* self ```
QTextListFormat* q_textlist_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textlist_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textlist_tr3(const char* s, const char* c, int n);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextList* self ```
int32_t q_textlist_format_index(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextList* self ```
QTextDocument* q_textlist_document(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextList* self ```
int32_t q_textlist_object_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextList* self ```
const char* q_textlist_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextList* self, char* name ```
void q_textlist_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextList* self ```
bool q_textlist_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextList* self ```
bool q_textlist_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextList* self ```
bool q_textlist_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextList* self ```
bool q_textlist_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextList* self, bool b ```
bool q_textlist_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextList* self ```
QThread* q_textlist_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextList* self, QThread* thread ```
void q_textlist_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextList* self, int interval ```
int32_t q_textlist_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextList* self, int id ```
void q_textlist_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextList* self ```
libqt_list /* of QObject* */ q_textlist_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextList* self, QObject* parent ```
void q_textlist_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextList* self, QObject* filterObj ```
void q_textlist_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextList* self, QObject* obj ```
void q_textlist_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textlist_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextList* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textlist_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textlist_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textlist_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextList* self ```
void q_textlist_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextList* self ```
void q_textlist_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextList* self, const char* name, QVariant* value ```
bool q_textlist_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextList* self, const char* name ```
QVariant* q_textlist_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextList* self ```
const char** q_textlist_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextList* self ```
QBindingStorage* q_textlist_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextList* self ```
const QBindingStorage* q_textlist_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextList* self ```
void q_textlist_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextList* self, void (*slot)(QObject*) ```
void q_textlist_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextList* self ```
QObject* q_textlist_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextList* self, const char* classname ```
bool q_textlist_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextList* self ```
void q_textlist_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextList* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textlist_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textlist_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextList* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textlist_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextList* self, QObject* param1 ```
void q_textlist_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextList* self, void (*slot)(QObject*, QObject*) ```
void q_textlist_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_block_inserted(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_qbase_block_inserted(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTextBlock*) ```
void q_textlist_on_block_inserted(void* self, void (*slot)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_block_removed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_qbase_block_removed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTextBlock*) ```
void q_textlist_on_block_removed(void* self, void (*slot)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_block_format_changed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTextBlock* block ```
void q_textlist_qbase_block_format_changed(void* self, void* block);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockFormatChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTextBlock*) ```
void q_textlist_on_block_format_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
bool q_textlist_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
bool q_textlist_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, bool (*slot)(QTextList*, QEvent*) ```
void q_textlist_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QObject* watched, QEvent* event ```
bool q_textlist_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QObject* watched, QEvent* event ```
bool q_textlist_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, bool (*slot)(QTextList*, QObject*, QEvent*) ```
void q_textlist_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QTimerEvent* event ```
void q_textlist_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QTimerEvent* event ```
void q_textlist_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QTimerEvent*) ```
void q_textlist_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QChildEvent* event ```
void q_textlist_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QChildEvent* event ```
void q_textlist_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QChildEvent*) ```
void q_textlist_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
void q_textlist_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QEvent* event ```
void q_textlist_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QEvent*) ```
void q_textlist_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QMetaMethod*) ```
void q_textlist_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
void q_textlist_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, void (*slot)(QTextList*, QMetaMethod*) ```
void q_textlist_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self ```
libqt_list /* of QTextBlock* */ q_textlist_block_list(void* self);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self ```
libqt_list /* of QTextBlock* */ q_textlist_qbase_block_list(void* self);

/// Inherited from QTextBlockGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockgroup.html#blockList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, libqt_list /* of QTextBlock* */ (*slot)() ```
void q_textlist_on_block_list(void* self, libqt_list /* of QTextBlock* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self ```
QObject* q_textlist_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self ```
QObject* q_textlist_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, QObject* (*slot)() ```
void q_textlist_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self ```
int32_t q_textlist_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self ```
int32_t q_textlist_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, int32_t (*slot)() ```
void q_textlist_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, const char* signal ```
int32_t q_textlist_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, const char* signal ```
int32_t q_textlist_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, int32_t (*slot)(QTextList*, const char*) ```
void q_textlist_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
bool q_textlist_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextList* self, QMetaMethod* signal ```
bool q_textlist_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextList* self, bool (*slot)(QTextList*, QMetaMethod*) ```
void q_textlist_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextList* self, void (*slot)(QObject*, const char*) ```
void q_textlist_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlist.html#dtor.QTextList)
///
/// Delete this object from C++ memory.
///
/// ``` QTextList* self ```
void q_textlist_delete(void* self);

#endif
