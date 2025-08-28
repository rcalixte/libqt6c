#pragma once
#ifndef SRCQT6C_LIBQUNDOSTACK_H
#define SRCQT6C_LIBQUNDOSTACK_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qundocommand.html

/// q_undocommand_new constructs a new QUndoCommand object.
///
QUndoCommand* q_undocommand_new();

/// q_undocommand_new2 constructs a new QUndoCommand object.
///
/// @param text const char*
QUndoCommand* q_undocommand_new2(const char* text);

/// q_undocommand_new3 constructs a new QUndoCommand object.
///
/// @param parent QUndoCommand*
QUndoCommand* q_undocommand_new3(void* parent);

/// q_undocommand_new4 constructs a new QUndoCommand object.
///
/// @param text const char*
/// @param parent QUndoCommand*
QUndoCommand* q_undocommand_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
///
/// @param self QUndoCommand*
void q_undocommand_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
///
/// Allows for overriding the related default method
///
/// @param self QUndoCommand*
/// @param callback void func()
void q_undocommand_on_undo(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
///
/// Base class method implementation
///
/// @param self QUndoCommand*
void q_undocommand_qbase_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
///
/// @param self QUndoCommand*
void q_undocommand_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
///
/// Allows for overriding the related default method
///
/// @param self QUndoCommand*
/// @param callback void func()
void q_undocommand_on_redo(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
///
/// Base class method implementation
///
/// @param self QUndoCommand*
void q_undocommand_qbase_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoCommand*
const char* q_undocommand_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#actionText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoCommand*
const char* q_undocommand_action_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setText)
///
/// @param self QUndoCommand*
/// @param text const char*
void q_undocommand_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
///
/// @param self QUndoCommand*
bool q_undocommand_is_obsolete(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
///
/// @param self QUndoCommand*
/// @param obsolete bool
void q_undocommand_set_obsolete(void* self, bool obsolete);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
///
/// @param self QUndoCommand*
int32_t q_undocommand_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
///
/// Allows for overriding the related default method
///
/// @param self QUndoCommand*
/// @param callback int32_t func()
void q_undocommand_on_id(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
///
/// Base class method implementation
///
/// @param self QUndoCommand*
int32_t q_undocommand_qbase_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
///
/// @param self QUndoCommand*
/// @param other QUndoCommand*
bool q_undocommand_merge_with(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
///
/// Allows for overriding the related default method
///
/// @param self QUndoCommand*
/// @param callback bool func(QUndoCommand* self, QUndoCommand* other)
void q_undocommand_on_merge_with(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
///
/// Base class method implementation
///
/// @param self QUndoCommand*
/// @param other QUndoCommand*
bool q_undocommand_qbase_merge_with(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#childCount)
///
/// @param self QUndoCommand*
int32_t q_undocommand_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#child)
///
/// @param self QUndoCommand*
/// @param index int
const QUndoCommand* q_undocommand_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#dtor.QUndoCommand)
///
/// Delete this object from C++ memory.
///
/// @param self QUndoCommand*
void q_undocommand_delete(void* self);

/// https://doc.qt.io/qt-6/qundostack.html

/// q_undostack_new constructs a new QUndoStack object.
///
QUndoStack* q_undostack_new();

/// q_undostack_new2 constructs a new QUndoStack object.
///
/// @param parent QObject*
QUndoStack* q_undostack_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QUndoStack*
const QMetaObject* q_undostack_meta_object(void* self);

/// @param self QUndoStack*
/// @param param1 const char*
void* q_undostack_metacast(void* self, const char* param1);

/// @param self QUndoStack*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_undostack_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QUndoStack*
/// @param callback int32_t func(QUndoStack* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_undostack_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QUndoStack*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_undostack_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_undostack_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#clear)
///
/// @param self QUndoStack*
void q_undostack_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#push)
///
/// @param self QUndoStack*
/// @param cmd QUndoCommand*
void q_undostack_push(void* self, void* cmd);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndo)
///
/// @param self QUndoStack*
bool q_undostack_can_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedo)
///
/// @param self QUndoStack*
bool q_undostack_can_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoStack*
const char* q_undostack_undo_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoStack*
const char* q_undostack_redo_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#count)
///
/// @param self QUndoStack*
int32_t q_undostack_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#index)
///
/// @param self QUndoStack*
int32_t q_undostack_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoStack*
/// @param idx int
const char* q_undostack_text(void* self, int idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
///
/// @param self QUndoStack*
/// @param parent QObject*
QAction* q_undostack_create_undo_action(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
///
/// @param self QUndoStack*
/// @param parent QObject*
QAction* q_undostack_create_redo_action(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isActive)
///
/// @param self QUndoStack*
bool q_undostack_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isClean)
///
/// @param self QUndoStack*
bool q_undostack_is_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
///
/// @param self QUndoStack*
int32_t q_undostack_clean_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
///
/// @param self QUndoStack*
/// @param text const char*
void q_undostack_begin_macro(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#endMacro)
///
/// @param self QUndoStack*
void q_undostack_end_macro(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
///
/// @param self QUndoStack*
/// @param limit int
void q_undostack_set_undo_limit(void* self, int limit);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
///
/// @param self QUndoStack*
int32_t q_undostack_undo_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#command)
///
/// @param self QUndoStack*
/// @param index int
const QUndoCommand* q_undostack_command(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setClean)
///
/// @param self QUndoStack*
void q_undostack_set_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#resetClean)
///
/// @param self QUndoStack*
void q_undostack_reset_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setIndex)
///
/// @param self QUndoStack*
/// @param idx int
void q_undostack_set_index(void* self, int idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undo)
///
/// @param self QUndoStack*
void q_undostack_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redo)
///
/// @param self QUndoStack*
void q_undostack_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
///
/// @param self QUndoStack*
void q_undostack_set_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
///
/// @param self QUndoStack*
/// @param idx int
void q_undostack_index_changed(void* self, int idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, int idx)
void q_undostack_on_index_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
///
/// @param self QUndoStack*
/// @param clean bool
void q_undostack_clean_changed(void* self, bool clean);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, bool clean)
void q_undostack_on_clean_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
///
/// @param self QUndoStack*
/// @param canUndo bool
void q_undostack_can_undo_changed(void* self, bool canUndo);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, bool canUndo)
void q_undostack_on_can_undo_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
///
/// @param self QUndoStack*
/// @param canRedo bool
void q_undostack_can_redo_changed(void* self, bool canRedo);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, bool canRedo)
void q_undostack_on_can_redo_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
///
/// @param self QUndoStack*
/// @param undoText const char*
void q_undostack_undo_text_changed(void* self, const char* undoText);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, const char* undoText)
void q_undostack_on_undo_text_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
///
/// @param self QUndoStack*
/// @param redoText const char*
void q_undostack_redo_text_changed(void* self, const char* redoText);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, const char* redoText)
void q_undostack_on_redo_text_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_undostack_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_undostack_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
///
/// @param self QUndoStack*
/// @param parent QObject*
/// @param prefix const char*
QAction* q_undostack_create_undo_action2(void* self, void* parent, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
///
/// @param self QUndoStack*
/// @param parent QObject*
/// @param prefix const char*
QAction* q_undostack_create_redo_action2(void* self, void* parent, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
///
/// @param self QUndoStack*
/// @param active bool
void q_undostack_set_active1(void* self, bool active);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoStack*
const char* q_undostack_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QUndoStack*
/// @param name char*
void q_undostack_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QUndoStack*
bool q_undostack_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QUndoStack*
bool q_undostack_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QUndoStack*
bool q_undostack_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QUndoStack*
bool q_undostack_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QUndoStack*
/// @param b bool
bool q_undostack_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QUndoStack*
QThread* q_undostack_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUndoStack*
/// @param thread QThread*
bool q_undostack_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoStack*
/// @param interval int
int32_t q_undostack_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUndoStack*
/// @param id int
void q_undostack_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUndoStack*
/// @param id enum Qt__TimerId
void q_undostack_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QUndoStack*
libqt_list /* of QObject* */ q_undostack_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QUndoStack*
/// @param parent QObject*
void q_undostack_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QUndoStack*
/// @param filterObj QObject*
void q_undostack_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QUndoStack*
/// @param obj QObject*
void q_undostack_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_undostack_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUndoStack*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_undostack_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_undostack_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_undostack_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QUndoStack*
void q_undostack_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QUndoStack*
void q_undostack_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QUndoStack*
/// @param name const char*
/// @param value QVariant*
bool q_undostack_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QUndoStack*
/// @param name const char*
QVariant* q_undostack_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUndoStack*
const char** q_undostack_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUndoStack*
QBindingStorage* q_undostack_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUndoStack*
const QBindingStorage* q_undostack_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoStack*
void q_undostack_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self)
void q_undostack_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QUndoStack*
QObject* q_undostack_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QUndoStack*
/// @param classname const char*
bool q_undostack_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QUndoStack*
void q_undostack_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUndoStack*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_undostack_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoStack*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_undostack_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_undostack_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUndoStack*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_undostack_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoStack*
/// @param param1 QObject*
void q_undostack_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, QObject* param1)
void q_undostack_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param event QEvent*
bool q_undostack_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param event QEvent*
bool q_undostack_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback bool func(QUndoStack* self, QEvent* event)
void q_undostack_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param watched QObject*
/// @param event QEvent*
bool q_undostack_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param watched QObject*
/// @param event QEvent*
bool q_undostack_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback bool func(QUndoStack* self, QObject* watched, QEvent* event)
void q_undostack_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param event QTimerEvent*
void q_undostack_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param event QTimerEvent*
void q_undostack_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, QTimerEvent* event)
void q_undostack_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param event QChildEvent*
void q_undostack_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param event QChildEvent*
void q_undostack_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, QChildEvent* event)
void q_undostack_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param event QEvent*
void q_undostack_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param event QEvent*
void q_undostack_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, QEvent* event)
void q_undostack_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param signal QMetaMethod*
void q_undostack_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param signal QMetaMethod*
void q_undostack_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, QMetaMethod* signal)
void q_undostack_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param signal QMetaMethod*
void q_undostack_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param signal QMetaMethod*
void q_undostack_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, QMetaMethod* signal)
void q_undostack_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
QObject* q_undostack_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
QObject* q_undostack_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback QObject* func()
void q_undostack_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
int32_t q_undostack_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
int32_t q_undostack_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback int32_t func()
void q_undostack_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param signal const char*
int32_t q_undostack_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param signal const char*
int32_t q_undostack_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback int32_t func(QUndoStack* self, const char* signal)
void q_undostack_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoStack*
/// @param signal QMetaMethod*
bool q_undostack_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoStack*
/// @param signal QMetaMethod*
bool q_undostack_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoStack*
/// @param callback bool func(QUndoStack* self, QMetaMethod* signal)
void q_undostack_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QUndoStack*
/// @param callback void func(QUndoStack* self, const char* objectName)
void q_undostack_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#dtor.QUndoStack)
///
/// Delete this object from C++ memory.
///
/// @param self QUndoStack*
void q_undostack_delete(void* self);

#endif
