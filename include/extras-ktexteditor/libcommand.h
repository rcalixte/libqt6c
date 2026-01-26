#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCOMMAND_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCOMMAND_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html)

/// k_texteditor__command_new constructs a new KTextEditor::Command object.
///
/// @param cmds const char**
///
KTextEditor__Command* k_texteditor__command_new(const char* cmds[static 1]);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html)

/// k_texteditor__command_new2 constructs a new KTextEditor::Command object.
///
/// @param cmds const char**
/// @param parent QObject*
///
KTextEditor__Command* k_texteditor__command_new2(const char* cmds[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__Command*
///
const QMetaObject* k_texteditor__command_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback const QMetaObject* func()
///
void k_texteditor__command_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
///
const QMetaObject* k_texteditor__command_qbase_meta_object(void* self);

/// @param self KTextEditor__Command*
/// @param param1 const char*
///
void* k_texteditor__command_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback void* func(KTextEditor__Command* self, const char* param1)
///
void k_texteditor__command_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param param1 const char*
///
void* k_texteditor__command_qbase_metacast(void* self, const char* param1);

/// @param self KTextEditor__Command*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__command_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback int32_t func(KTextEditor__Command* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texteditor__command_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__command_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__command_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#cmds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Command*
///
const char** k_texteditor__command_cmds(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#supportsRange)
///
/// @param self KTextEditor__Command*
/// @param cmd const char*
///
bool k_texteditor__command_supports_range(void* self, const char* cmd);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#supportsRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, const char* cmd)
///
void k_texteditor__command_on_supports_range(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#supportsRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param cmd const char*
///
bool k_texteditor__command_qbase_supports_range(void* self, const char* cmd);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#exec)
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param cmd const char*
/// @param msg const char*
/// @param range KTextEditor__Range*
///
bool k_texteditor__command_exec(void* self, void* view, const char* cmd, const char* msg, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#exec)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, KTextEditor__View* view, const char* cmd, const char* msg, KTextEditor__Range* range)
///
void k_texteditor__command_on_exec(void* self, bool (*callback)(void*, void*, const char*, const char*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#exec)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param cmd const char*
/// @param msg const char*
/// @param range KTextEditor__Range*
///
bool k_texteditor__command_qbase_exec(void* self, void* view, const char* cmd, const char* msg, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#help)
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param cmd const char*
/// @param msg const char*
///
bool k_texteditor__command_help(void* self, void* view, const char* cmd, const char* msg);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#help)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, KTextEditor__View* view, const char* cmd, const char* msg)
///
void k_texteditor__command_on_help(void* self, bool (*callback)(void*, void*, const char*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#help)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param cmd const char*
/// @param msg const char*
///
bool k_texteditor__command_qbase_help(void* self, void* view, const char* cmd, const char* msg);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#completionObject)
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param cmdname const char*
///
KCompletion* k_texteditor__command_completion_object(void* self, void* view, const char* cmdname);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#completionObject)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback KCompletion* func(KTextEditor__Command* self, KTextEditor__View* view, const char* cmdname)
///
void k_texteditor__command_on_completion_object(void* self, KCompletion* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#completionObject)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param cmdname const char*
///
KCompletion* k_texteditor__command_qbase_completion_object(void* self, void* view, const char* cmdname);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#wantsToProcessText)
///
/// @param self KTextEditor__Command*
/// @param cmdname const char*
///
bool k_texteditor__command_wants_to_process_text(void* self, const char* cmdname);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#wantsToProcessText)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, const char* cmdname)
///
void k_texteditor__command_on_wants_to_process_text(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#wantsToProcessText)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param cmdname const char*
///
bool k_texteditor__command_qbase_wants_to_process_text(void* self, const char* cmdname);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#processText)
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param text const char*
///
void k_texteditor__command_process_text(void* self, void* view, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#processText)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, KTextEditor__View* view, const char* text)
///
void k_texteditor__command_on_process_text(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-command.html#processText)
///
/// Base class method implementation
///
/// @param self KTextEditor__Command*
/// @param view KTextEditor__View*
/// @param text const char*
///
void k_texteditor__command_qbase_process_text(void* self, void* view, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__command_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__command_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Command*
///
const char* k_texteditor__command_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Command*
/// @param name char*
///
void k_texteditor__command_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__Command*
///
bool k_texteditor__command_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__Command*
///
bool k_texteditor__command_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__Command*
///
bool k_texteditor__command_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__Command*
///
bool k_texteditor__command_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Command*
/// @param b bool
///
bool k_texteditor__command_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__Command*
///
QThread* k_texteditor__command_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Command*
/// @param thread QThread*
///
bool k_texteditor__command_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Command*
/// @param interval int
///
int32_t k_texteditor__command_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Command*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__command_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Command*
/// @param id int
///
void k_texteditor__command_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Command*
/// @param id enum Qt__TimerId
///
void k_texteditor__command_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__Command*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__command_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Command*
/// @param parent QObject*
///
void k_texteditor__command_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Command*
/// @param filterObj QObject*
///
void k_texteditor__command_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Command*
/// @param obj QObject*
///
void k_texteditor__command_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__command_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Command*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__command_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__command_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__command_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__Command*
///
void k_texteditor__command_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__Command*
///
void k_texteditor__command_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Command*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__command_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__Command*
/// @param name const char*
///
QVariant* k_texteditor__command_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Command*
///
const char** k_texteditor__command_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Command*
///
QBindingStorage* k_texteditor__command_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Command*
///
const QBindingStorage* k_texteditor__command_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Command*
///
void k_texteditor__command_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self)
///
void k_texteditor__command_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__Command*
///
QObject* k_texteditor__command_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__Command*
/// @param classname const char*
///
bool k_texteditor__command_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Command*
///
void k_texteditor__command_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Command*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_texteditor__command_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Command*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__command_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Command*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__command_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__command_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Command*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__command_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Command*
/// @param param1 QObject*
///
void k_texteditor__command_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, QObject* param1)
///
void k_texteditor__command_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QEvent*
///
bool k_texteditor__command_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QEvent*
///
bool k_texteditor__command_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, QEvent* event)
///
void k_texteditor__command_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__command_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__command_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, QObject* watched, QEvent* event)
///
void k_texteditor__command_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QTimerEvent*
///
void k_texteditor__command_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QTimerEvent*
///
void k_texteditor__command_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, QTimerEvent* event)
///
void k_texteditor__command_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QChildEvent*
///
void k_texteditor__command_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QChildEvent*
///
void k_texteditor__command_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, QChildEvent* event)
///
void k_texteditor__command_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QEvent*
///
void k_texteditor__command_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param event QEvent*
///
void k_texteditor__command_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, QEvent* event)
///
void k_texteditor__command_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal QMetaMethod*
///
void k_texteditor__command_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal QMetaMethod*
///
void k_texteditor__command_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, QMetaMethod* signal)
///
void k_texteditor__command_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal QMetaMethod*
///
void k_texteditor__command_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal QMetaMethod*
///
void k_texteditor__command_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, QMetaMethod* signal)
///
void k_texteditor__command_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
///
QObject* k_texteditor__command_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
///
QObject* k_texteditor__command_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback QObject* func()
///
void k_texteditor__command_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
///
int32_t k_texteditor__command_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
///
int32_t k_texteditor__command_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback int32_t func()
///
void k_texteditor__command_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal const char*
///
int32_t k_texteditor__command_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal const char*
///
int32_t k_texteditor__command_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback int32_t func(KTextEditor__Command* self, const char* signal)
///
void k_texteditor__command_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal QMetaMethod*
///
bool k_texteditor__command_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param signal QMetaMethod*
///
bool k_texteditor__command_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Command*
/// @param callback bool func(KTextEditor__Command* self, QMetaMethod* signal)
///
void k_texteditor__command_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Command*
/// @param callback void func(KTextEditor__Command* self, const char* objectName)
///
void k_texteditor__command_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Command*
///
void k_texteditor__command_delete(void* self);

#endif
