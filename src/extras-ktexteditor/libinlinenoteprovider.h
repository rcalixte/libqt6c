#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBINLINENOTEPROVIDER_H
#define EXTRAS_KTEXTEDITOR_LIBINLINENOTEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html)

/// k_texteditor__inlinenoteprovider_new constructs a new KTextEditor::InlineNoteProvider object.
///
KTextEditor__InlineNoteProvider* k_texteditor__inlinenoteprovider_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
const QMetaObject* k_texteditor__inlinenoteprovider_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback const QMetaObject* func(const KTextEditor__InlineNoteProvider* self)
///
void k_texteditor__inlinenoteprovider_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KTextEditor__InlineNoteProvider*
///
const QMetaObject* k_texteditor__inlinenoteprovider_super_meta_object(const void* self);

/// @param self KTextEditor__InlineNoteProvider*
/// @param param1 const char*
///
void* k_texteditor__inlinenoteprovider_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void* func(KTextEditor__InlineNoteProvider* self, const char* param1)
///
void k_texteditor__inlinenoteprovider_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param param1 const char*
///
void* k_texteditor__inlinenoteprovider_super_metacast(void* self, const char* param1);

/// @param self KTextEditor__InlineNoteProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__inlinenoteprovider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback int32_t func(KTextEditor__InlineNoteProvider* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texteditor__inlinenoteprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__inlinenoteprovider_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__inlinenoteprovider_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
///
/// @warning This method must be implemented with `k_texteditor__inlinenoteprovider_on_inline_notes` before it can be called.
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param line int
///
/// @return libqt_list of int
///
libqt_list k_texteditor__inlinenoteprovider_inline_notes(const void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
///
/// Allows for overriding the related default method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback libqt_list of int func(const KTextEditor__InlineNoteProvider* self, int line)
///
void k_texteditor__inlinenoteprovider_on_inline_notes(const void* self, libqt_list (*callback)(const void*, int));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
///
/// @warning This method must be implemented with `k_texteditor__inlinenoteprovider_on_inline_note_size` before it can be called.
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
///
QSize* k_texteditor__inlinenoteprovider_inline_note_size(const void* self, const void* note);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
///
/// Allows for overriding the related default method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback QSize* func(const KTextEditor__InlineNoteProvider* self, KTextEditor__InlineNote* note)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_texteditor__inlinenoteprovider_on_inline_note_size(const void* self, QSize* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
///
/// @warning This method must be implemented with `k_texteditor__inlinenoteprovider_on_paint_inline_note` before it can be called.
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param painter QPainter*
/// @param direction enum Qt__LayoutDirection
///
void k_texteditor__inlinenoteprovider_paint_inline_note(const void* self, const void* note, void* painter, int32_t direction);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
///
/// Allows for overriding the related default method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback void func(const KTextEditor__InlineNoteProvider* self, KTextEditor__InlineNote* note, QPainter* painter, enum Qt__LayoutDirection direction)
///
void k_texteditor__inlinenoteprovider_on_paint_inline_note(const void* self, void (*callback)(const void*, const void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param buttons flag of enum Qt__MouseButton
/// @param globalPos QPoint*
///
void k_texteditor__inlinenoteprovider_inline_note_activated(void* self, const void* note, int32_t buttons, const void* globalPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, KTextEditor__InlineNote* note, flag of enum Qt__MouseButton buttons, QPoint* globalPos)
///
void k_texteditor__inlinenoteprovider_on_inline_note_activated(void* self, void (*callback)(void*, const void*, int32_t, const void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
///
/// Base class method implementation
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param buttons flag of enum Qt__MouseButton
/// @param globalPos QPoint*
///
void k_texteditor__inlinenoteprovider_super_inline_note_activated(void* self, const void* note, int32_t buttons, const void* globalPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param globalPos QPoint*
///
void k_texteditor__inlinenoteprovider_inline_note_focus_in_event(void* self, const void* note, const void* globalPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, KTextEditor__InlineNote* note, QPoint* globalPos)
///
void k_texteditor__inlinenoteprovider_on_inline_note_focus_in_event(void* self, void (*callback)(void*, const void*, const void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
///
/// Base class method implementation
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param globalPos QPoint*
///
void k_texteditor__inlinenoteprovider_super_inline_note_focus_in_event(void* self, const void* note, const void* globalPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
///
void k_texteditor__inlinenoteprovider_inline_note_focus_out_event(void* self, const void* note);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, KTextEditor__InlineNote* note)
///
void k_texteditor__inlinenoteprovider_on_inline_note_focus_out_event(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
///
/// Base class method implementation
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
///
void k_texteditor__inlinenoteprovider_super_inline_note_focus_out_event(void* self, const void* note);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param globalPos QPoint*
///
void k_texteditor__inlinenoteprovider_inline_note_mouse_move_event(void* self, const void* note, const void* globalPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, KTextEditor__InlineNote* note, QPoint* globalPos)
///
void k_texteditor__inlinenoteprovider_on_inline_note_mouse_move_event(void* self, void (*callback)(void*, const void*, const void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
///
/// Base class method implementation
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param note KTextEditor__InlineNote*
/// @param globalPos QPoint*
///
void k_texteditor__inlinenoteprovider_super_inline_note_mouse_move_event(void* self, const void* note, const void* globalPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesReset)
///
/// @param self KTextEditor__InlineNoteProvider*
///
void k_texteditor__inlinenoteprovider_inline_notes_reset(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesReset)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self)
///
void k_texteditor__inlinenoteprovider_on_inline_notes_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesChanged)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param line int
///
void k_texteditor__inlinenoteprovider_inline_notes_changed(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesChanged)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, int line)
///
void k_texteditor__inlinenoteprovider_on_inline_notes_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__inlinenoteprovider_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__inlinenoteprovider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__InlineNoteProvider*
///
const char* k_texteditor__inlinenoteprovider_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param name const char*
///
void k_texteditor__inlinenoteprovider_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
bool k_texteditor__inlinenoteprovider_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
bool k_texteditor__inlinenoteprovider_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
bool k_texteditor__inlinenoteprovider_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
bool k_texteditor__inlinenoteprovider_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param b bool
///
bool k_texteditor__inlinenoteprovider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
QThread* k_texteditor__inlinenoteprovider_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param thread QThread*
///
bool k_texteditor__inlinenoteprovider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param interval int
///
int32_t k_texteditor__inlinenoteprovider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__inlinenoteprovider_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param id int
///
void k_texteditor__inlinenoteprovider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param id enum Qt__TimerId
///
void k_texteditor__inlinenoteprovider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__inlinenoteprovider_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param parent QObject*
///
void k_texteditor__inlinenoteprovider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param filterObj QObject*
///
void k_texteditor__inlinenoteprovider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param obj QObject*
///
void k_texteditor__inlinenoteprovider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__inlinenoteprovider_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__inlinenoteprovider_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
bool k_texteditor__inlinenoteprovider_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param receiver QObject*
///
bool k_texteditor__inlinenoteprovider_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__inlinenoteprovider_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
void k_texteditor__inlinenoteprovider_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
void k_texteditor__inlinenoteprovider_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__inlinenoteprovider_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param name const char*
///
QVariant* k_texteditor__inlinenoteprovider_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KTextEditor__InlineNoteProvider*
///
const char** k_texteditor__inlinenoteprovider_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__InlineNoteProvider*
///
QBindingStorage* k_texteditor__inlinenoteprovider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
const QBindingStorage* k_texteditor__inlinenoteprovider_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__InlineNoteProvider*
///
void k_texteditor__inlinenoteprovider_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self)
///
void k_texteditor__inlinenoteprovider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KTextEditor__InlineNoteProvider*
///
QObject* k_texteditor__inlinenoteprovider_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param classname const char*
///
bool k_texteditor__inlinenoteprovider_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__InlineNoteProvider*
///
void k_texteditor__inlinenoteprovider_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__inlinenoteprovider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__inlinenoteprovider_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__inlinenoteprovider_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal const char*
///
bool k_texteditor__inlinenoteprovider_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texteditor__inlinenoteprovider_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__inlinenoteprovider_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__inlinenoteprovider_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param param1 QObject*
///
void k_texteditor__inlinenoteprovider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, QObject* param1)
///
void k_texteditor__inlinenoteprovider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QEvent*
///
bool k_texteditor__inlinenoteprovider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QEvent*
///
bool k_texteditor__inlinenoteprovider_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback bool func(KTextEditor__InlineNoteProvider* self, QEvent* event)
///
void k_texteditor__inlinenoteprovider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__inlinenoteprovider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__inlinenoteprovider_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback bool func(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event)
///
void k_texteditor__inlinenoteprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QTimerEvent*
///
void k_texteditor__inlinenoteprovider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QTimerEvent*
///
void k_texteditor__inlinenoteprovider_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, QTimerEvent* event)
///
void k_texteditor__inlinenoteprovider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QChildEvent*
///
void k_texteditor__inlinenoteprovider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QChildEvent*
///
void k_texteditor__inlinenoteprovider_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, QChildEvent* event)
///
void k_texteditor__inlinenoteprovider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QEvent*
///
void k_texteditor__inlinenoteprovider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param event QEvent*
///
void k_texteditor__inlinenoteprovider_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, QEvent* event)
///
void k_texteditor__inlinenoteprovider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param signal QMetaMethod*
///
void k_texteditor__inlinenoteprovider_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param signal QMetaMethod*
///
void k_texteditor__inlinenoteprovider_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, QMetaMethod* signal)
///
void k_texteditor__inlinenoteprovider_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param signal QMetaMethod*
///
void k_texteditor__inlinenoteprovider_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param signal QMetaMethod*
///
void k_texteditor__inlinenoteprovider_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, QMetaMethod* signal)
///
void k_texteditor__inlinenoteprovider_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
///
QObject* k_texteditor__inlinenoteprovider_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
///
QObject* k_texteditor__inlinenoteprovider_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback QObject* func(KTextEditor__InlineNoteProvider* self)
///
void k_texteditor__inlinenoteprovider_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
///
int32_t k_texteditor__inlinenoteprovider_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
///
int32_t k_texteditor__inlinenoteprovider_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback int32_t func(KTextEditor__InlineNoteProvider* self)
///
void k_texteditor__inlinenoteprovider_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal const char*
///
int32_t k_texteditor__inlinenoteprovider_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal const char*
///
int32_t k_texteditor__inlinenoteprovider_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback int32_t func(KTextEditor__InlineNoteProvider* self, const char* signal)
///
void k_texteditor__inlinenoteprovider_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal QMetaMethod*
///
bool k_texteditor__inlinenoteprovider_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param signal QMetaMethod*
///
bool k_texteditor__inlinenoteprovider_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTextEditor__InlineNoteProvider*
/// @param callback bool func(KTextEditor__InlineNoteProvider* self, QMetaMethod* signal)
///
void k_texteditor__inlinenoteprovider_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__InlineNoteProvider*
/// @param callback void func(KTextEditor__InlineNoteProvider* self, const char* objectName)
///
void k_texteditor__inlinenoteprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__InlineNoteProvider*
///
void k_texteditor__inlinenoteprovider_delete(void* self);

#endif
