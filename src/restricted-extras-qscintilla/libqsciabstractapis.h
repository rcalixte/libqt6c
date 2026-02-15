#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCIABSTRACTAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCIABSTRACTAPIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)

/// q_sciabstractapis_new constructs a new QsciAbstractAPIs object.
///
/// @param lexer QsciLexer*
///
QsciAbstractAPIs* q_sciabstractapis_new(void* lexer);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciAbstractAPIs*
///
const QMetaObject* q_sciabstractapis_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciAbstractAPIs*
/// @param callback const QMetaObject* func()
///
void q_sciabstractapis_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciAbstractAPIs*
///
const QMetaObject* q_sciabstractapis_qbase_meta_object(void* self);

/// @param self QsciAbstractAPIs*
/// @param param1 const char*
///
void* q_sciabstractapis_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciAbstractAPIs*
/// @param callback void* func(QsciAbstractAPIs* self, const char* param1)
///
void q_sciabstractapis_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QsciAbstractAPIs*
/// @param param1 const char*
///
void* q_sciabstractapis_qbase_metacast(void* self, const char* param1);

/// @param self QsciAbstractAPIs*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sciabstractapis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciAbstractAPIs*
/// @param callback int32_t func(QsciAbstractAPIs* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sciabstractapis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciAbstractAPIs*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sciabstractapis_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sciabstractapis_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// @param self QsciAbstractAPIs*
///
QsciLexer* q_sciabstractapis_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// @param self QsciAbstractAPIs*
/// @param context const char**
/// @param list const char**
///
void q_sciabstractapis_update_auto_completion_list(void* self, const char* context[static 1], const char* list[static 1]);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, const char** context, const char** list)
///
void q_sciabstractapis_on_update_auto_completion_list(void* self, void (*callback)(void*, const char***, const char***));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Base class method implementation
///
/// @param self QsciAbstractAPIs*
/// @param context const char**
/// @param list const char**
///
void q_sciabstractapis_qbase_update_auto_completion_list(void* self, const char* context[static 1], const char* list[static 1]);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// @param self QsciAbstractAPIs*
/// @param selection const char*
///
void q_sciabstractapis_auto_completion_selected(void* self, const char* selection);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, const char* selection)
///
void q_sciabstractapis_on_auto_completion_selected(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Base class method implementation
///
/// @param self QsciAbstractAPIs*
/// @param selection const char*
///
void q_sciabstractapis_qbase_auto_completion_selected(void* self, const char* selection);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciAbstractAPIs*
/// @param context const char**
/// @param commas int
/// @param style enum QsciScintilla__CallTipsStyle
/// @param shifts libqt_list of int
///
const char** q_sciabstractapis_call_tips(void* self, const char* context[static 1], int commas, int32_t style, libqt_list shifts);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciAbstractAPIs*
/// @param callback const char** func(QsciAbstractAPIs* self, const char** context, int commas, enum QsciScintilla__CallTipsStyle style, libqt_list of int shifts)
///
void q_sciabstractapis_on_call_tips(void* self, const char** (*callback)(void*, const char***, int, int32_t, libqt_list));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Base class method implementation
///
/// @param self QsciAbstractAPIs*
/// @param context const char**
/// @param commas int
/// @param style enum QsciScintilla__CallTipsStyle
/// @param shifts libqt_list of int
///
const char** q_sciabstractapis_qbase_call_tips(void* self, const char* context[static 1], int commas, int32_t style, libqt_list shifts);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sciabstractapis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sciabstractapis_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciAbstractAPIs*
///
const char* q_sciabstractapis_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciAbstractAPIs*
/// @param name const char*
///
void q_sciabstractapis_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciAbstractAPIs*
///
bool q_sciabstractapis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciAbstractAPIs*
///
bool q_sciabstractapis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciAbstractAPIs*
///
bool q_sciabstractapis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciAbstractAPIs*
///
bool q_sciabstractapis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciAbstractAPIs*
/// @param b bool
///
bool q_sciabstractapis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciAbstractAPIs*
///
QThread* q_sciabstractapis_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciAbstractAPIs*
/// @param thread QThread*
///
bool q_sciabstractapis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciAbstractAPIs*
/// @param interval int
///
int32_t q_sciabstractapis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciAbstractAPIs*
/// @param time int64_t of nanoseconds
///
int32_t q_sciabstractapis_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciAbstractAPIs*
/// @param id int
///
void q_sciabstractapis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciAbstractAPIs*
/// @param id enum Qt__TimerId
///
void q_sciabstractapis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciAbstractAPIs*
///
/// @return libqt_list of QObject*
///
libqt_list q_sciabstractapis_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciAbstractAPIs*
/// @param parent QObject*
///
void q_sciabstractapis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciAbstractAPIs*
/// @param filterObj QObject*
///
void q_sciabstractapis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciAbstractAPIs*
/// @param obj QObject*
///
void q_sciabstractapis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_sciabstractapis_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sciabstractapis_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciAbstractAPIs*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sciabstractapis_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sciabstractapis_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sciabstractapis_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciAbstractAPIs*
///
bool q_sciabstractapis_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciAbstractAPIs*
/// @param receiver QObject*
///
bool q_sciabstractapis_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sciabstractapis_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciAbstractAPIs*
///
void q_sciabstractapis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciAbstractAPIs*
///
void q_sciabstractapis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciAbstractAPIs*
/// @param name const char*
/// @param value QVariant*
///
bool q_sciabstractapis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciAbstractAPIs*
/// @param name const char*
///
QVariant* q_sciabstractapis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciAbstractAPIs*
///
const char** q_sciabstractapis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciAbstractAPIs*
///
QBindingStorage* q_sciabstractapis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciAbstractAPIs*
///
const QBindingStorage* q_sciabstractapis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciAbstractAPIs*
///
void q_sciabstractapis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self)
///
void q_sciabstractapis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciAbstractAPIs*
///
QObject* q_sciabstractapis_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciAbstractAPIs*
/// @param classname const char*
///
bool q_sciabstractapis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciAbstractAPIs*
///
void q_sciabstractapis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciAbstractAPIs*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sciabstractapis_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciAbstractAPIs*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sciabstractapis_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_sciabstractapis_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_sciabstractapis_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciAbstractAPIs*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sciabstractapis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciAbstractAPIs*
/// @param signal const char*
///
bool q_sciabstractapis_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciAbstractAPIs*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sciabstractapis_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciAbstractAPIs*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sciabstractapis_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciAbstractAPIs*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sciabstractapis_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciAbstractAPIs*
/// @param param1 QObject*
///
void q_sciabstractapis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, QObject* param1)
///
void q_sciabstractapis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QEvent*
///
bool q_sciabstractapis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QEvent*
///
bool q_sciabstractapis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback bool func(QsciAbstractAPIs* self, QEvent* event)
///
void q_sciabstractapis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sciabstractapis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sciabstractapis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback bool func(QsciAbstractAPIs* self, QObject* watched, QEvent* event)
///
void q_sciabstractapis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QTimerEvent*
///
void q_sciabstractapis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QTimerEvent*
///
void q_sciabstractapis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, QTimerEvent* event)
///
void q_sciabstractapis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QChildEvent*
///
void q_sciabstractapis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QChildEvent*
///
void q_sciabstractapis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, QChildEvent* event)
///
void q_sciabstractapis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QEvent*
///
void q_sciabstractapis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param event QEvent*
///
void q_sciabstractapis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, QEvent* event)
///
void q_sciabstractapis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal QMetaMethod*
///
void q_sciabstractapis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal QMetaMethod*
///
void q_sciabstractapis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, QMetaMethod* signal)
///
void q_sciabstractapis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal QMetaMethod*
///
void q_sciabstractapis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal QMetaMethod*
///
void q_sciabstractapis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, QMetaMethod* signal)
///
void q_sciabstractapis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
///
QObject* q_sciabstractapis_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
///
QObject* q_sciabstractapis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback QObject* func()
///
void q_sciabstractapis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
///
int32_t q_sciabstractapis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
///
int32_t q_sciabstractapis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback int32_t func()
///
void q_sciabstractapis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal const char*
///
int32_t q_sciabstractapis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal const char*
///
int32_t q_sciabstractapis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback int32_t func(QsciAbstractAPIs* self, const char* signal)
///
void q_sciabstractapis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal QMetaMethod*
///
bool q_sciabstractapis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param signal QMetaMethod*
///
bool q_sciabstractapis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciAbstractAPIs*
/// @param callback bool func(QsciAbstractAPIs* self, QMetaMethod* signal)
///
void q_sciabstractapis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciAbstractAPIs*
/// @param callback void func(QsciAbstractAPIs* self, const char* objectName)
///
void q_sciabstractapis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciAbstractAPIs*
///
void q_sciabstractapis_delete(void* self);

#endif
