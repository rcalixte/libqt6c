#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTEXTEDITORCOMPLETER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTEXTEDITORCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)

/// k_textcustomeditor__texteditorcompleter_new constructs a new TextCustomEditor::TextEditorCompleter object.
///
/// @param editor QTextEdit*
/// @param parent QObject*
///
TextCustomEditor__TextEditorCompleter* k_textcustomeditor__texteditorcompleter_new(void* editor, void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)

/// k_textcustomeditor__texteditorcompleter_new2 constructs a new TextCustomEditor::TextEditorCompleter object.
///
/// @param editor QPlainTextEdit*
/// @param parent QObject*
///
TextCustomEditor__TextEditorCompleter* k_textcustomeditor__texteditorcompleter_new2(void* editor, void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
const QMetaObject* k_textcustomeditor__texteditorcompleter_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback const QMetaObject* func()
///
void k_textcustomeditor__texteditorcompleter_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_meta_object` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_meta_object k_textcustomeditor__texteditorcompleter_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
const QMetaObject* k_textcustomeditor__texteditorcompleter_super_meta_object(void* self);

/// @param self TextCustomEditor__TextEditorCompleter*
/// @param param1 const char*
///
void* k_textcustomeditor__texteditorcompleter_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void* func(TextCustomEditor__TextEditorCompleter* self, const char* param1)
///
void k_textcustomeditor__texteditorcompleter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_metacast` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_metacast k_textcustomeditor__texteditorcompleter_super_metacast

/// Base class method implementation
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param param1 const char*
///
void* k_textcustomeditor__texteditorcompleter_super_metacast(void* self, const char* param1);

/// @param self TextCustomEditor__TextEditorCompleter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__texteditorcompleter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback int32_t func(TextCustomEditor__TextEditorCompleter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textcustomeditor__texteditorcompleter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_metacall` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_metacall k_textcustomeditor__texteditorcompleter_super_metacall

/// Base class method implementation
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__texteditorcompleter_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textcustomeditor__texteditorcompleter_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param list const char**
///
void k_textcustomeditor__texteditorcompleter_set_completer_string_list(void* self, const char* list[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
QCompleter* k_textcustomeditor__texteditorcompleter_completer(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
void k_textcustomeditor__texteditorcompleter_complete_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param excludes const char*
///
void k_textcustomeditor__texteditorcompleter_set_exclude_of_characters(void* self, const char* excludes);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textcustomeditor__texteditorcompleter_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textcustomeditor__texteditorcompleter_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
const char* k_textcustomeditor__texteditorcompleter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param name const char*
///
void k_textcustomeditor__texteditorcompleter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
bool k_textcustomeditor__texteditorcompleter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
bool k_textcustomeditor__texteditorcompleter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
bool k_textcustomeditor__texteditorcompleter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
bool k_textcustomeditor__texteditorcompleter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param b bool
///
bool k_textcustomeditor__texteditorcompleter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
QThread* k_textcustomeditor__texteditorcompleter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param thread QThread*
///
bool k_textcustomeditor__texteditorcompleter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param interval int
///
int32_t k_textcustomeditor__texteditorcompleter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param time int64_t of nanoseconds
///
int32_t k_textcustomeditor__texteditorcompleter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param id int
///
void k_textcustomeditor__texteditorcompleter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param id enum Qt__TimerId
///
void k_textcustomeditor__texteditorcompleter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
/// @return libqt_list of QObject*
///
libqt_list k_textcustomeditor__texteditorcompleter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param parent QObject*
///
void k_textcustomeditor__texteditorcompleter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param filterObj QObject*
///
void k_textcustomeditor__texteditorcompleter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param obj QObject*
///
void k_textcustomeditor__texteditorcompleter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__texteditorcompleter_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textcustomeditor__texteditorcompleter_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
bool k_textcustomeditor__texteditorcompleter_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param receiver QObject*
///
bool k_textcustomeditor__texteditorcompleter_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textcustomeditor__texteditorcompleter_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
void k_textcustomeditor__texteditorcompleter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
void k_textcustomeditor__texteditorcompleter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param name const char*
/// @param value QVariant*
///
bool k_textcustomeditor__texteditorcompleter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param name const char*
///
QVariant* k_textcustomeditor__texteditorcompleter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
const char** k_textcustomeditor__texteditorcompleter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
QBindingStorage* k_textcustomeditor__texteditorcompleter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
const QBindingStorage* k_textcustomeditor__texteditorcompleter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
void k_textcustomeditor__texteditorcompleter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self)
///
void k_textcustomeditor__texteditorcompleter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
QObject* k_textcustomeditor__texteditorcompleter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param classname const char*
///
bool k_textcustomeditor__texteditorcompleter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
void k_textcustomeditor__texteditorcompleter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__texteditorcompleter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__texteditorcompleter_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__texteditorcompleter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal const char*
///
bool k_textcustomeditor__texteditorcompleter_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textcustomeditor__texteditorcompleter_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__texteditorcompleter_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__texteditorcompleter_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param param1 QObject*
///
void k_textcustomeditor__texteditorcompleter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, QObject* param1)
///
void k_textcustomeditor__texteditorcompleter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QEvent*
///
bool k_textcustomeditor__texteditorcompleter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_event` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_event k_textcustomeditor__texteditorcompleter_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QEvent*
///
bool k_textcustomeditor__texteditorcompleter_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback bool func(TextCustomEditor__TextEditorCompleter* self, QEvent* event)
///
void k_textcustomeditor__texteditorcompleter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textcustomeditor__texteditorcompleter_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_event_filter` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_event_filter k_textcustomeditor__texteditorcompleter_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textcustomeditor__texteditorcompleter_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback bool func(TextCustomEditor__TextEditorCompleter* self, QObject* watched, QEvent* event)
///
void k_textcustomeditor__texteditorcompleter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QTimerEvent*
///
void k_textcustomeditor__texteditorcompleter_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_timer_event` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_timer_event k_textcustomeditor__texteditorcompleter_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QTimerEvent*
///
void k_textcustomeditor__texteditorcompleter_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, QTimerEvent* event)
///
void k_textcustomeditor__texteditorcompleter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QChildEvent*
///
void k_textcustomeditor__texteditorcompleter_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_child_event` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_child_event k_textcustomeditor__texteditorcompleter_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QChildEvent*
///
void k_textcustomeditor__texteditorcompleter_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, QChildEvent* event)
///
void k_textcustomeditor__texteditorcompleter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QEvent*
///
void k_textcustomeditor__texteditorcompleter_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_custom_event` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_custom_event k_textcustomeditor__texteditorcompleter_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param event QEvent*
///
void k_textcustomeditor__texteditorcompleter_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, QEvent* event)
///
void k_textcustomeditor__texteditorcompleter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__texteditorcompleter_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_connect_notify` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_connect_notify k_textcustomeditor__texteditorcompleter_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__texteditorcompleter_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, QMetaMethod* signal)
///
void k_textcustomeditor__texteditorcompleter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__texteditorcompleter_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_disconnect_notify` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_disconnect_notify k_textcustomeditor__texteditorcompleter_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__texteditorcompleter_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, QMetaMethod* signal)
///
void k_textcustomeditor__texteditorcompleter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
QObject* k_textcustomeditor__texteditorcompleter_sender(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_sender` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_sender k_textcustomeditor__texteditorcompleter_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
QObject* k_textcustomeditor__texteditorcompleter_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback QObject* func()
///
void k_textcustomeditor__texteditorcompleter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
int32_t k_textcustomeditor__texteditorcompleter_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_sender_signal_index` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_sender_signal_index k_textcustomeditor__texteditorcompleter_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
int32_t k_textcustomeditor__texteditorcompleter_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback int32_t func()
///
void k_textcustomeditor__texteditorcompleter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal const char*
///
int32_t k_textcustomeditor__texteditorcompleter_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_receivers` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_receivers k_textcustomeditor__texteditorcompleter_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal const char*
///
int32_t k_textcustomeditor__texteditorcompleter_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback int32_t func(TextCustomEditor__TextEditorCompleter* self, const char* signal)
///
void k_textcustomeditor__texteditorcompleter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__texteditorcompleter_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__texteditorcompleter_super_is_signal_connected` instead
///
#define k_textcustomeditor__texteditorcompleter_qbase_is_signal_connected k_textcustomeditor__texteditorcompleter_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__texteditorcompleter_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback bool func(TextCustomEditor__TextEditorCompleter* self, QMetaMethod* signal)
///
void k_textcustomeditor__texteditorcompleter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextCustomEditor__TextEditorCompleter*
/// @param callback void func(TextCustomEditor__TextEditorCompleter* self, const char* objectName)
///
void k_textcustomeditor__texteditorcompleter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditorCompleter.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextCustomEditor__TextEditorCompleter*
///
void k_textcustomeditor__texteditorcompleter_delete(void* self);

#endif
