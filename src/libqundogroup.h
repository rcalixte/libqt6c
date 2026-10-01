#pragma once
#ifndef LIBQUNDOGROUP_H
#define LIBQUNDOGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html)

/// q_undogroup_new constructs a new QUndoGroup object.
///
QUndoGroup* q_undogroup_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html)

/// q_undogroup_new2 constructs a new QUndoGroup object.
///
/// @param parent QObject*
///
QUndoGroup* q_undogroup_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QUndoGroup*
///
const QMetaObject* q_undogroup_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QUndoGroup*
/// @param callback const QMetaObject* func(const QUndoGroup* self)
///
void q_undogroup_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QUndoGroup*
///
const QMetaObject* q_undogroup_super_meta_object(const void* self);

/// @param self QUndoGroup*
/// @param param1 const char*
///
void* q_undogroup_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QUndoGroup*
/// @param callback void* func(QUndoGroup* self, const char* param1)
///
void q_undogroup_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QUndoGroup*
/// @param param1 const char*
///
void* q_undogroup_super_metacast(void* self, const char* param1);

/// @param self QUndoGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_undogroup_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QUndoGroup*
/// @param callback int32_t func(QUndoGroup* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_undogroup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QUndoGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_undogroup_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_undogroup_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#addStack)
///
/// @param self QUndoGroup*
/// @param stack QUndoStack*
///
void q_undogroup_add_stack(void* self, void* stack);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#removeStack)
///
/// @param self QUndoGroup*
/// @param stack QUndoStack*
///
void q_undogroup_remove_stack(void* self, void* stack);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#stacks)
///
/// @param self const QUndoGroup*
///
/// @return libqt_list of QUndoStack*
///
libqt_list q_undogroup_stacks(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStack)
///
/// @param self const QUndoGroup*
///
QUndoStack* q_undogroup_active_stack(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// @param self const QUndoGroup*
/// @param parent QObject*
///
QAction* q_undogroup_create_undo_action(const void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// @param self const QUndoGroup*
/// @param parent QObject*
///
QAction* q_undogroup_create_redo_action(const void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndo)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_can_undo(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedo)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_can_redo(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QUndoGroup*
///
const char* q_undogroup_undo_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QUndoGroup*
///
const char* q_undogroup_redo_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#isClean)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_is_clean(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undo)
///
/// @param self QUndoGroup*
///
void q_undogroup_undo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redo)
///
/// @param self QUndoGroup*
///
void q_undogroup_redo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#setActiveStack)
///
/// @param self QUndoGroup*
/// @param stack QUndoStack*
///
void q_undogroup_set_active_stack(void* self, void* stack);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
///
/// @param self QUndoGroup*
/// @param stack QUndoStack*
///
void q_undogroup_active_stack_changed(void* self, void* stack);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QUndoStack* stack)
///
void q_undogroup_on_active_stack_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
///
/// @param self QUndoGroup*
/// @param idx int
///
void q_undogroup_index_changed(void* self, int idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, int idx)
///
void q_undogroup_on_index_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
///
/// @param self QUndoGroup*
/// @param clean bool
///
void q_undogroup_clean_changed(void* self, bool clean);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, bool clean)
///
void q_undogroup_on_clean_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
///
/// @param self QUndoGroup*
/// @param canUndo bool
///
void q_undogroup_can_undo_changed(void* self, bool canUndo);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, bool canUndo)
///
void q_undogroup_on_can_undo_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
///
/// @param self QUndoGroup*
/// @param canRedo bool
///
void q_undogroup_can_redo_changed(void* self, bool canRedo);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, bool canRedo)
///
void q_undogroup_on_can_redo_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
///
/// @param self QUndoGroup*
/// @param undoText const char*
///
void q_undogroup_undo_text_changed(void* self, const char* undoText);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, const char* undoText)
///
void q_undogroup_on_undo_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
///
/// @param self QUndoGroup*
/// @param redoText const char*
///
void q_undogroup_redo_text_changed(void* self, const char* redoText);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, const char* redoText)
///
void q_undogroup_on_redo_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_undogroup_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_undogroup_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// @param self const QUndoGroup*
/// @param parent QObject*
/// @param prefix const char*
///
QAction* q_undogroup_create_undo_action2(const void* self, void* parent, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// @param self const QUndoGroup*
/// @param parent QObject*
/// @param prefix const char*
///
QAction* q_undogroup_create_redo_action2(const void* self, void* parent, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QUndoGroup*
///
const char* q_undogroup_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QUndoGroup*
/// @param name const char*
///
void q_undogroup_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QUndoGroup*
/// @param b bool
///
bool q_undogroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QUndoGroup*
///
QThread* q_undogroup_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUndoGroup*
/// @param thread QThread*
///
bool q_undogroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoGroup*
/// @param interval int
///
int32_t q_undogroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoGroup*
/// @param time int64_t of nanoseconds
///
int32_t q_undogroup_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUndoGroup*
/// @param id int
///
void q_undogroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUndoGroup*
/// @param id enum Qt__TimerId
///
void q_undogroup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QUndoGroup*
///
/// @return libqt_list of QObject*
///
libqt_list q_undogroup_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QUndoGroup*
/// @param parent QObject*
///
void q_undogroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QUndoGroup*
/// @param filterObj QObject*
///
void q_undogroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QUndoGroup*
/// @param obj QObject*
///
void q_undogroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_undogroup_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_undogroup_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QUndoGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_undogroup_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_undogroup_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_undogroup_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QUndoGroup*
///
bool q_undogroup_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QUndoGroup*
/// @param receiver QObject*
///
bool q_undogroup_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_undogroup_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QUndoGroup*
///
void q_undogroup_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QUndoGroup*
///
void q_undogroup_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QUndoGroup*
/// @param name const char*
/// @param value QVariant*
///
bool q_undogroup_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QUndoGroup*
/// @param name const char*
///
QVariant* q_undogroup_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QUndoGroup*
///
const char** q_undogroup_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUndoGroup*
///
QBindingStorage* q_undogroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QUndoGroup*
///
const QBindingStorage* q_undogroup_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoGroup*
///
void q_undogroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self)
///
void q_undogroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QUndoGroup*
///
QObject* q_undogroup_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QUndoGroup*
/// @param classname const char*
///
bool q_undogroup_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QUndoGroup*
///
void q_undogroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_undogroup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoGroup*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_undogroup_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_undogroup_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_undogroup_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QUndoGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_undogroup_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QUndoGroup*
/// @param signal const char*
///
bool q_undogroup_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QUndoGroup*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_undogroup_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QUndoGroup*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_undogroup_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QUndoGroup*
/// @param receiver QObject*
/// @param member const char*
///
bool q_undogroup_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoGroup*
/// @param param1 QObject*
///
void q_undogroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QObject* param1)
///
void q_undogroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QEvent*
///
bool q_undogroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QEvent*
///
bool q_undogroup_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback bool func(QUndoGroup* self, QEvent* event)
///
void q_undogroup_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_undogroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_undogroup_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback bool func(QUndoGroup* self, QObject* watched, QEvent* event)
///
void q_undogroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QTimerEvent*
///
void q_undogroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QTimerEvent*
///
void q_undogroup_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QTimerEvent* event)
///
void q_undogroup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QChildEvent*
///
void q_undogroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QChildEvent*
///
void q_undogroup_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QChildEvent* event)
///
void q_undogroup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QEvent*
///
void q_undogroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param event QEvent*
///
void q_undogroup_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QEvent* event)
///
void q_undogroup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QMetaMethod* signal)
///
void q_undogroup_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QMetaMethod* signal)
///
void q_undogroup_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QUndoGroup*
///
QObject* q_undogroup_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QUndoGroup*
///
QObject* q_undogroup_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback QObject* func(QUndoGroup* self)
///
void q_undogroup_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QUndoGroup*
///
int32_t q_undogroup_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QUndoGroup*
///
int32_t q_undogroup_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback int32_t func(QUndoGroup* self)
///
void q_undogroup_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QUndoGroup*
/// @param signal const char*
///
int32_t q_undogroup_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QUndoGroup*
/// @param signal const char*
///
int32_t q_undogroup_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback int32_t func(QUndoGroup* self, const char* signal)
///
void q_undogroup_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QUndoGroup*
/// @param signal QMetaMethod*
///
bool q_undogroup_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QUndoGroup*
/// @param signal QMetaMethod*
///
bool q_undogroup_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback bool func(QUndoGroup* self, QMetaMethod* signal)
///
void q_undogroup_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, const char* objectName)
///
void q_undogroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#dtor.QUndoGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QUndoGroup*
///
void q_undogroup_delete(void* self);

#endif
