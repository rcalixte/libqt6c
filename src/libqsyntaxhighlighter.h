#pragma once
#ifndef SRC_QT6C_LIBQSYNTAXHIGHLIGHTER_H
#define SRC_QT6C_LIBQSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html)

/// q_syntaxhighlighter_new constructs a new QSyntaxHighlighter object.
///
/// @param parent QObject*
///
QSyntaxHighlighter* q_syntaxhighlighter_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html)

/// q_syntaxhighlighter_new2 constructs a new QSyntaxHighlighter object.
///
/// @param parent QTextDocument*
///
QSyntaxHighlighter* q_syntaxhighlighter_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSyntaxHighlighter*
///
const QMetaObject* q_syntaxhighlighter_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback const QMetaObject* func()
///
void q_syntaxhighlighter_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
///
const QMetaObject* q_syntaxhighlighter_qbase_meta_object(void* self);

/// @param self QSyntaxHighlighter*
/// @param param1 const char*
///
void* q_syntaxhighlighter_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void* func(QSyntaxHighlighter* self, const char* param1)
///
void q_syntaxhighlighter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param param1 const char*
///
void* q_syntaxhighlighter_qbase_metacast(void* self, const char* param1);

/// @param self QSyntaxHighlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_syntaxhighlighter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback int32_t func(QSyntaxHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_syntaxhighlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_syntaxhighlighter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_syntaxhighlighter_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
///
/// @param self QSyntaxHighlighter*
/// @param doc QTextDocument*
///
void q_syntaxhighlighter_set_document(void* self, void* doc);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
///
/// @param self QSyntaxHighlighter*
///
QTextDocument* q_syntaxhighlighter_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
///
/// @param self QSyntaxHighlighter*
///
void q_syntaxhighlighter_rehighlight(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
///
/// @param self QSyntaxHighlighter*
/// @param block QTextBlock*
///
void q_syntaxhighlighter_rehighlight_block(void* self, void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
///
/// @param self QSyntaxHighlighter*
/// @param text const char*
///
void q_syntaxhighlighter_highlight_block(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, const char* text)
///
void q_syntaxhighlighter_on_highlight_block(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#highlightBlock)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param text const char*
///
void q_syntaxhighlighter_qbase_highlight_block(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// @param self QSyntaxHighlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
///
void q_syntaxhighlighter_set_format(void* self, int start, int count, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format)
///
void q_syntaxhighlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
///
void q_syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// @param self QSyntaxHighlighter*
/// @param start int
/// @param count int
/// @param color QColor*
///
void q_syntaxhighlighter_set_format2(void* self, int start, int count, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, int start, int count, QColor* color)
///
void q_syntaxhighlighter_on_set_format2(void* self, void (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param start int
/// @param count int
/// @param color QColor*
///
void q_syntaxhighlighter_qbase_set_format2(void* self, int start, int count, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// @param self QSyntaxHighlighter*
/// @param start int
/// @param count int
/// @param font QFont*
///
void q_syntaxhighlighter_set_format3(void* self, int start, int count, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, int start, int count, QFont* font)
///
void q_syntaxhighlighter_on_set_format3(void* self, void (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param start int
/// @param count int
/// @param font QFont*
///
void q_syntaxhighlighter_qbase_set_format3(void* self, int start, int count, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// @param self QSyntaxHighlighter*
/// @param pos int
///
QTextCharFormat* q_syntaxhighlighter_format(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback QTextCharFormat* func(QSyntaxHighlighter* self, int pos)
///
void q_syntaxhighlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param pos int
///
QTextCharFormat* q_syntaxhighlighter_qbase_format(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// @param self QSyntaxHighlighter*
///
int32_t q_syntaxhighlighter_previous_block_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback int32_t func()
///
void q_syntaxhighlighter_on_previous_block_state(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
///
int32_t q_syntaxhighlighter_qbase_previous_block_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// @param self QSyntaxHighlighter*
///
int32_t q_syntaxhighlighter_current_block_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback int32_t func()
///
void q_syntaxhighlighter_on_current_block_state(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
///
int32_t q_syntaxhighlighter_qbase_current_block_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// @param self QSyntaxHighlighter*
/// @param newState int
///
void q_syntaxhighlighter_set_current_block_state(void* self, int newState);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, int newState)
///
void q_syntaxhighlighter_on_set_current_block_state(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param newState int
///
void q_syntaxhighlighter_qbase_set_current_block_state(void* self, int newState);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// @param self QSyntaxHighlighter*
/// @param data QTextBlockUserData*
///
void q_syntaxhighlighter_set_current_block_user_data(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QTextBlockUserData* data)
///
void q_syntaxhighlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
/// @param data QTextBlockUserData*
///
void q_syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// @param self QSyntaxHighlighter*
///
QTextBlockUserData* q_syntaxhighlighter_current_block_user_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback QTextBlockUserData* func()
///
void q_syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
///
QTextBlockUserData* q_syntaxhighlighter_qbase_current_block_user_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// @param self QSyntaxHighlighter*
///
QTextBlock* q_syntaxhighlighter_current_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Allows for overriding the related default method
///
/// @param self QSyntaxHighlighter*
/// @param callback QTextBlock* func()
///
void q_syntaxhighlighter_on_current_block(void* self, QTextBlock* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Base class method implementation
///
/// @param self QSyntaxHighlighter*
///
QTextBlock* q_syntaxhighlighter_qbase_current_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_syntaxhighlighter_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_syntaxhighlighter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSyntaxHighlighter*
///
const char* q_syntaxhighlighter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSyntaxHighlighter*
/// @param name char*
///
void q_syntaxhighlighter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSyntaxHighlighter*
///
bool q_syntaxhighlighter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSyntaxHighlighter*
///
bool q_syntaxhighlighter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSyntaxHighlighter*
///
bool q_syntaxhighlighter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSyntaxHighlighter*
///
bool q_syntaxhighlighter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSyntaxHighlighter*
/// @param b bool
///
bool q_syntaxhighlighter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSyntaxHighlighter*
///
QThread* q_syntaxhighlighter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSyntaxHighlighter*
/// @param thread QThread*
///
bool q_syntaxhighlighter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSyntaxHighlighter*
/// @param interval int
///
int32_t q_syntaxhighlighter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSyntaxHighlighter*
/// @param time int64_t of nanoseconds
///
int32_t q_syntaxhighlighter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSyntaxHighlighter*
/// @param id int
///
void q_syntaxhighlighter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSyntaxHighlighter*
/// @param id enum Qt__TimerId
///
void q_syntaxhighlighter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSyntaxHighlighter*
///
/// @return libqt_list of QObject*
///
libqt_list q_syntaxhighlighter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSyntaxHighlighter*
/// @param parent QObject*
///
void q_syntaxhighlighter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSyntaxHighlighter*
/// @param filterObj QObject*
///
void q_syntaxhighlighter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSyntaxHighlighter*
/// @param obj QObject*
///
void q_syntaxhighlighter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_syntaxhighlighter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSyntaxHighlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_syntaxhighlighter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_syntaxhighlighter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_syntaxhighlighter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSyntaxHighlighter*
///
void q_syntaxhighlighter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSyntaxHighlighter*
///
void q_syntaxhighlighter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSyntaxHighlighter*
/// @param name const char*
/// @param value QVariant*
///
bool q_syntaxhighlighter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSyntaxHighlighter*
/// @param name const char*
///
QVariant* q_syntaxhighlighter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSyntaxHighlighter*
///
const char** q_syntaxhighlighter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSyntaxHighlighter*
///
QBindingStorage* q_syntaxhighlighter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSyntaxHighlighter*
///
const QBindingStorage* q_syntaxhighlighter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSyntaxHighlighter*
///
void q_syntaxhighlighter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self)
///
void q_syntaxhighlighter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSyntaxHighlighter*
///
QObject* q_syntaxhighlighter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSyntaxHighlighter*
/// @param classname const char*
///
bool q_syntaxhighlighter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSyntaxHighlighter*
///
void q_syntaxhighlighter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSyntaxHighlighter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_syntaxhighlighter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSyntaxHighlighter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_syntaxhighlighter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSyntaxHighlighter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_syntaxhighlighter_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_syntaxhighlighter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSyntaxHighlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSyntaxHighlighter*
/// @param param1 QObject*
///
void q_syntaxhighlighter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QObject* param1)
///
void q_syntaxhighlighter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QEvent*
///
bool q_syntaxhighlighter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QEvent*
///
bool q_syntaxhighlighter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback bool func(QSyntaxHighlighter* self, QEvent* event)
///
void q_syntaxhighlighter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_syntaxhighlighter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback bool func(QSyntaxHighlighter* self, QObject* watched, QEvent* event)
///
void q_syntaxhighlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QTimerEvent*
///
void q_syntaxhighlighter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QTimerEvent*
///
void q_syntaxhighlighter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QTimerEvent* event)
///
void q_syntaxhighlighter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QChildEvent*
///
void q_syntaxhighlighter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QChildEvent*
///
void q_syntaxhighlighter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QChildEvent* event)
///
void q_syntaxhighlighter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QEvent*
///
void q_syntaxhighlighter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param event QEvent*
///
void q_syntaxhighlighter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QEvent* event)
///
void q_syntaxhighlighter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal QMetaMethod*
///
void q_syntaxhighlighter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal QMetaMethod*
///
void q_syntaxhighlighter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QMetaMethod* signal)
///
void q_syntaxhighlighter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal QMetaMethod*
///
void q_syntaxhighlighter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal QMetaMethod*
///
void q_syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, QMetaMethod* signal)
///
void q_syntaxhighlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
///
QObject* q_syntaxhighlighter_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
///
QObject* q_syntaxhighlighter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback QObject* func()
///
void q_syntaxhighlighter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
///
int32_t q_syntaxhighlighter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
///
int32_t q_syntaxhighlighter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback int32_t func()
///
void q_syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal const char*
///
int32_t q_syntaxhighlighter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal const char*
///
int32_t q_syntaxhighlighter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback int32_t func(QSyntaxHighlighter* self, const char* signal)
///
void q_syntaxhighlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal QMetaMethod*
///
bool q_syntaxhighlighter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param signal QMetaMethod*
///
bool q_syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSyntaxHighlighter*
/// @param callback bool func(QSyntaxHighlighter* self, QMetaMethod* signal)
///
void q_syntaxhighlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSyntaxHighlighter*
/// @param callback void func(QSyntaxHighlighter* self, const char* objectName)
///
void q_syntaxhighlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#dtor.QSyntaxHighlighter)
///
/// Delete this object from C++ memory.
///
/// @param self QSyntaxHighlighter*
///
void q_syntaxhighlighter_delete(void* self);

#endif
