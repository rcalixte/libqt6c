#pragma once
#ifndef SRCQT6C_LIBQSYNTAXHIGHLIGHTER_H
#define SRCQT6C_LIBQSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqcolor.h"
#include "libqfont.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextformat.h"
#include "libqtextdocument.h"
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qsyntaxhighlighter.html

/// q_syntaxhighlighter_new constructs a new QSyntaxHighlighter object.
///
/// ``` QObject* parent ```
QSyntaxHighlighter* q_syntaxhighlighter_new(void* parent);

/// q_syntaxhighlighter_new2 constructs a new QSyntaxHighlighter object.
///
/// ``` QTextDocument* parent ```
QSyntaxHighlighter* q_syntaxhighlighter_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSyntaxHighlighter* self ```
QMetaObject* q_syntaxhighlighter_meta_object(void* self);

/// ``` QSyntaxHighlighter* self, const char* param1 ```
void* q_syntaxhighlighter_metacast(void* self, const char* param1);

/// ``` QSyntaxHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_syntaxhighlighter_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)(QSyntaxHighlighter*, enum QMetaObject__Call, int, void*) ```
void q_syntaxhighlighter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_syntaxhighlighter_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_syntaxhighlighter_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
///
/// ``` QSyntaxHighlighter* self, QTextDocument* doc ```
void q_syntaxhighlighter_set_document(void* self, void* doc);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
///
/// ``` QSyntaxHighlighter* self ```
QTextDocument* q_syntaxhighlighter_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_rehighlight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
///
/// ``` QSyntaxHighlighter* self, QTextBlock* block ```
void q_syntaxhighlighter_rehighlight_block(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
///
/// ``` QSyntaxHighlighter* self, const char* text ```
void q_syntaxhighlighter_highlight_block(void* self, const char* text);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, const char*) ```
void q_syntaxhighlighter_on_highlight_block(void* self, void (*slot)(void*, const char*));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, const char* text ```
void q_syntaxhighlighter_qbase_highlight_block(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// ``` QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format ```
void q_syntaxhighlighter_set_format(void* self, int start, int count, void* format);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int, int, QTextCharFormat*) ```
void q_syntaxhighlighter_on_set_format(void* self, void (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format ```
void q_syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// ``` QSyntaxHighlighter* self, int start, int count, QColor* color ```
void q_syntaxhighlighter_set_format2(void* self, int start, int count, void* color);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int, int, QColor*) ```
void q_syntaxhighlighter_on_set_format2(void* self, void (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int start, int count, QColor* color ```
void q_syntaxhighlighter_qbase_set_format2(void* self, int start, int count, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// ``` QSyntaxHighlighter* self, int start, int count, QFont* font ```
void q_syntaxhighlighter_set_format3(void* self, int start, int count, void* font);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int, int, QFont*) ```
void q_syntaxhighlighter_on_set_format3(void* self, void (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int start, int count, QFont* font ```
void q_syntaxhighlighter_qbase_set_format3(void* self, int start, int count, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// ``` QSyntaxHighlighter* self, int pos ```
QTextCharFormat* q_syntaxhighlighter_format(void* self, int pos);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, QTextCharFormat* (*slot)(QSyntaxHighlighter*, int) ```
void q_syntaxhighlighter_on_format(void* self, QTextCharFormat* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int pos ```
QTextCharFormat* q_syntaxhighlighter_qbase_format(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_previous_block_state(void* self);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)() ```
void q_syntaxhighlighter_on_previous_block_state(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_qbase_previous_block_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_current_block_state(void* self);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)() ```
void q_syntaxhighlighter_on_current_block_state(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_qbase_current_block_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// ``` QSyntaxHighlighter* self, int newState ```
void q_syntaxhighlighter_set_current_block_state(void* self, int newState);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, int) ```
void q_syntaxhighlighter_on_set_current_block_state(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, int newState ```
void q_syntaxhighlighter_qbase_set_current_block_state(void* self, int newState);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// ``` QSyntaxHighlighter* self, QTextBlockUserData* data ```
void q_syntaxhighlighter_set_current_block_user_data(void* self, void* data);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QTextBlockUserData*) ```
void q_syntaxhighlighter_on_set_current_block_user_data(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self, QTextBlockUserData* data ```
void q_syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// ``` QSyntaxHighlighter* self ```
QTextBlockUserData* q_syntaxhighlighter_current_block_user_data(void* self);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, QTextBlockUserData* (*slot)() ```
void q_syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*slot)());

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
QTextBlockUserData* q_syntaxhighlighter_qbase_current_block_user_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// ``` QSyntaxHighlighter* self ```
QTextBlock* q_syntaxhighlighter_current_block(void* self);

/// Allows for overriding the related default method
///
/// ``` QSyntaxHighlighter* self, QTextBlock* (*slot)() ```
void q_syntaxhighlighter_on_current_block(void* self, QTextBlock* (*slot)());

/// Base class method implementation
///
/// ``` QSyntaxHighlighter* self ```
QTextBlock* q_syntaxhighlighter_qbase_current_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_syntaxhighlighter_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_syntaxhighlighter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSyntaxHighlighter* self ```
const char* q_syntaxhighlighter_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSyntaxHighlighter* self, const char* name ```
void q_syntaxhighlighter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSyntaxHighlighter* self ```
bool q_syntaxhighlighter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSyntaxHighlighter* self, bool b ```
bool q_syntaxhighlighter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSyntaxHighlighter* self ```
QThread* q_syntaxhighlighter_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSyntaxHighlighter* self, QThread* thread ```
void q_syntaxhighlighter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSyntaxHighlighter* self, int interval ```
int32_t q_syntaxhighlighter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSyntaxHighlighter* self, int id ```
void q_syntaxhighlighter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSyntaxHighlighter* self ```
libqt_list /* of QObject* */ q_syntaxhighlighter_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSyntaxHighlighter* self, QObject* parent ```
void q_syntaxhighlighter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSyntaxHighlighter* self, QObject* filterObj ```
void q_syntaxhighlighter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSyntaxHighlighter* self, QObject* obj ```
void q_syntaxhighlighter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_syntaxhighlighter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSyntaxHighlighter* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_syntaxhighlighter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_syntaxhighlighter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_syntaxhighlighter_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSyntaxHighlighter* self, const char* name, QVariant* value ```
bool q_syntaxhighlighter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSyntaxHighlighter* self, const char* name ```
QVariant* q_syntaxhighlighter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSyntaxHighlighter* self ```
const char** q_syntaxhighlighter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSyntaxHighlighter* self ```
QBindingStorage* q_syntaxhighlighter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSyntaxHighlighter* self ```
QBindingStorage* q_syntaxhighlighter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QObject*) ```
void q_syntaxhighlighter_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSyntaxHighlighter* self ```
QObject* q_syntaxhighlighter_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSyntaxHighlighter* self, const char* classname ```
bool q_syntaxhighlighter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSyntaxHighlighter* self, int interval, enum Qt__TimerType timerType ```
int32_t q_syntaxhighlighter_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_syntaxhighlighter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSyntaxHighlighter* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSyntaxHighlighter* self, QObject* param1 ```
void q_syntaxhighlighter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QObject*, QObject*) ```
void q_syntaxhighlighter_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
bool q_syntaxhighlighter_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
bool q_syntaxhighlighter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, bool (*slot)(QSyntaxHighlighter*, QEvent*) ```
void q_syntaxhighlighter_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QObject* watched, QEvent* event ```
bool q_syntaxhighlighter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QObject* watched, QEvent* event ```
bool q_syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, bool (*slot)(QSyntaxHighlighter*, QObject*, QEvent*) ```
void q_syntaxhighlighter_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QTimerEvent* event ```
void q_syntaxhighlighter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QTimerEvent* event ```
void q_syntaxhighlighter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QTimerEvent*) ```
void q_syntaxhighlighter_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QChildEvent* event ```
void q_syntaxhighlighter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QChildEvent* event ```
void q_syntaxhighlighter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QChildEvent*) ```
void q_syntaxhighlighter_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
void q_syntaxhighlighter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QEvent* event ```
void q_syntaxhighlighter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QEvent*) ```
void q_syntaxhighlighter_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QMetaMethod*) ```
void q_syntaxhighlighter_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
void q_syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, void (*slot)(QSyntaxHighlighter*, QMetaMethod*) ```
void q_syntaxhighlighter_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
QObject* q_syntaxhighlighter_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
QObject* q_syntaxhighlighter_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QObject* (*slot)() ```
void q_syntaxhighlighter_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self ```
int32_t q_syntaxhighlighter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)() ```
void q_syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, const char* signal ```
int32_t q_syntaxhighlighter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, const char* signal ```
int32_t q_syntaxhighlighter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, int32_t (*slot)(QSyntaxHighlighter*, const char*) ```
void q_syntaxhighlighter_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
bool q_syntaxhighlighter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, QMetaMethod* signal ```
bool q_syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSyntaxHighlighter* self, bool (*slot)(QSyntaxHighlighter*, QMetaMethod*) ```
void q_syntaxhighlighter_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QSyntaxHighlighter* self ```
void q_syntaxhighlighter_delete(void* self);

#endif
