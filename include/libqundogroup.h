#pragma once
#ifndef SRC_QT6C_LIBQUNDOGROUP_H
#define SRC_QT6C_LIBQUNDOGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QUndoGroup*
///
const QMetaObject* q_undogroup_meta_object(void* self);

/// @param self QUndoGroup*
/// @param param1 const char*
///
void* q_undogroup_metacast(void* self, const char* param1);

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
int32_t q_undogroup_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param self QUndoGroup*
///
/// @return libqt_list of QUndoStack*
///
libqt_list q_undogroup_stacks(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStack)
///
/// @param self QUndoGroup*
///
QUndoStack* q_undogroup_active_stack(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// @param self QUndoGroup*
/// @param parent QObject*
///
QAction* q_undogroup_create_undo_action(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// @param self QUndoGroup*
/// @param parent QObject*
///
QAction* q_undogroup_create_redo_action(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndo)
///
/// @param self QUndoGroup*
///
bool q_undogroup_can_undo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedo)
///
/// @param self QUndoGroup*
///
bool q_undogroup_can_redo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoGroup*
///
const char* q_undogroup_undo_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoGroup*
///
const char* q_undogroup_redo_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#isClean)
///
/// @param self QUndoGroup*
///
bool q_undogroup_is_clean(void* self);

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
/// @param self QUndoGroup*
/// @param parent QObject*
/// @param prefix const char*
///
QAction* q_undogroup_create_undo_action2(void* self, void* parent, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// @param self QUndoGroup*
/// @param parent QObject*
/// @param prefix const char*
///
QAction* q_undogroup_create_redo_action2(void* self, void* parent, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoGroup*
///
const char* q_undogroup_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QUndoGroup*
/// @param name char*
///
void q_undogroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QUndoGroup*
///
bool q_undogroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QUndoGroup*
///
bool q_undogroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QUndoGroup*
///
bool q_undogroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QUndoGroup*
///
bool q_undogroup_signals_blocked(void* self);

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
/// @param self QUndoGroup*
///
QThread* q_undogroup_thread(void* self);

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
/// @param self QUndoGroup*
///
/// @return libqt_list of QObject*
///
libqt_list q_undogroup_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_undogroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUndoGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_undogroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_undogroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_undogroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QUndoGroup*
///
void q_undogroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QUndoGroup*
///
void q_undogroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QUndoGroup*
/// @param name const char*
/// @param value QVariant*
///
bool q_undogroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QUndoGroup*
/// @param name const char*
///
QVariant* q_undogroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUndoGroup*
///
const char** q_undogroup_dynamic_property_names(void* self);

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
/// @param self QUndoGroup*
///
const QBindingStorage* q_undogroup_binding_storage2(void* self);

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
/// @param self QUndoGroup*
///
QObject* q_undogroup_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QUndoGroup*
/// @param classname const char*
///
bool q_undogroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QUndoGroup*
///
void q_undogroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUndoGroup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_undogroup_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_undogroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUndoGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_undogroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_undogroup_qbase_event(void* self, void* event);

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
bool q_undogroup_qbase_event_filter(void* self, void* watched, void* event);

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
void q_undogroup_qbase_timer_event(void* self, void* event);

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
void q_undogroup_qbase_child_event(void* self, void* event);

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
void q_undogroup_qbase_custom_event(void* self, void* event);

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
void q_undogroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QMetaMethod* signal)
///
void q_undogroup_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
void q_undogroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback void func(QUndoGroup* self, QMetaMethod* signal)
///
void q_undogroup_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
///
QObject* q_undogroup_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
///
QObject* q_undogroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback QObject* func()
///
void q_undogroup_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
///
int32_t q_undogroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
///
int32_t q_undogroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback int32_t func()
///
void q_undogroup_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal const char*
///
int32_t q_undogroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal const char*
///
int32_t q_undogroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback int32_t func(QUndoGroup* self, const char* signal)
///
void q_undogroup_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
bool q_undogroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param signal QMetaMethod*
///
bool q_undogroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoGroup*
/// @param callback bool func(QUndoGroup* self, QMetaMethod* signal)
///
void q_undogroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
