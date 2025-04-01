#pragma once
#ifndef SRCQT6C_LIBQUNDOSTACK_H
#define SRCQT6C_LIBQUNDOSTACK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qundocommand.html

/// q_undocommand_new constructs a new QUndoCommand object.
///
///
QUndoCommand* q_undocommand_new();

/// q_undocommand_new2 constructs a new QUndoCommand object.
///
/// ``` const char* text ```
QUndoCommand* q_undocommand_new2(const char* text);

/// q_undocommand_new3 constructs a new QUndoCommand object.
///
/// ``` QUndoCommand* parent ```
QUndoCommand* q_undocommand_new3(void* parent);

/// q_undocommand_new4 constructs a new QUndoCommand object.
///
/// ``` const char* text, QUndoCommand* parent ```
QUndoCommand* q_undocommand_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
///
/// ``` QUndoCommand* self ```
void q_undocommand_undo(void* self);

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, void (*slot)() ```
void q_undocommand_on_undo(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QUndoCommand* self ```
void q_undocommand_qbase_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
///
/// ``` QUndoCommand* self ```
void q_undocommand_redo(void* self);

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, void (*slot)() ```
void q_undocommand_on_redo(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QUndoCommand* self ```
void q_undocommand_qbase_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#text)
///
/// ``` QUndoCommand* self ```
const char* q_undocommand_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#actionText)
///
/// ``` QUndoCommand* self ```
const char* q_undocommand_action_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setText)
///
/// ``` QUndoCommand* self, const char* text ```
void q_undocommand_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
///
/// ``` QUndoCommand* self ```
bool q_undocommand_is_obsolete(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
///
/// ``` QUndoCommand* self, bool obsolete ```
void q_undocommand_set_obsolete(void* self, bool obsolete);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
///
/// ``` QUndoCommand* self ```
int32_t q_undocommand_id(void* self);

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, int32_t (*slot)() ```
void q_undocommand_on_id(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QUndoCommand* self ```
int32_t q_undocommand_qbase_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
///
/// ``` QUndoCommand* self, QUndoCommand* other ```
bool q_undocommand_merge_with(void* self, void* other);

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, bool (*slot)(QUndoCommand*, QUndoCommand*) ```
void q_undocommand_on_merge_with(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QUndoCommand* self, QUndoCommand* other ```
bool q_undocommand_qbase_merge_with(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#childCount)
///
/// ``` QUndoCommand* self ```
int32_t q_undocommand_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#child)
///
/// ``` QUndoCommand* self, int index ```
QUndoCommand* q_undocommand_child(void* self, int index);

/// Delete this object from C++ memory.
///
/// ``` QUndoCommand* self ```
void q_undocommand_delete(void* self);

/// https://doc.qt.io/qt-6/qundostack.html

/// q_undostack_new constructs a new QUndoStack object.
///
///
QUndoStack* q_undostack_new();

/// q_undostack_new2 constructs a new QUndoStack object.
///
/// ``` QObject* parent ```
QUndoStack* q_undostack_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUndoStack* self ```
QMetaObject* q_undostack_meta_object(void* self);

/// ``` QUndoStack* self, const char* param1 ```
void* q_undostack_metacast(void* self, const char* param1);

/// ``` QUndoStack* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undostack_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QUndoStack* self, int32_t (*slot)(QUndoStack*, enum QMetaObject__Call, int, void*) ```
void q_undostack_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QUndoStack* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undostack_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_undostack_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#clear)
///
/// ``` QUndoStack* self ```
void q_undostack_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#push)
///
/// ``` QUndoStack* self, QUndoCommand* cmd ```
void q_undostack_push(void* self, void* cmd);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndo)
///
/// ``` QUndoStack* self ```
bool q_undostack_can_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedo)
///
/// ``` QUndoStack* self ```
bool q_undostack_can_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoText)
///
/// ``` QUndoStack* self ```
const char* q_undostack_undo_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoText)
///
/// ``` QUndoStack* self ```
const char* q_undostack_redo_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#count)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#index)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#text)
///
/// ``` QUndoStack* self, int idx ```
const char* q_undostack_text(void* self, int idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
///
/// ``` QUndoStack* self, QObject* parent ```
QAction* q_undostack_create_undo_action(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
///
/// ``` QUndoStack* self, QObject* parent ```
QAction* q_undostack_create_redo_action(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isActive)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isClean)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_clean_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
///
/// ``` QUndoStack* self, const char* text ```
void q_undostack_begin_macro(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#endMacro)
///
/// ``` QUndoStack* self ```
void q_undostack_end_macro(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
///
/// ``` QUndoStack* self, int limit ```
void q_undostack_set_undo_limit(void* self, int limit);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_undo_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#command)
///
/// ``` QUndoStack* self, int index ```
QUndoCommand* q_undostack_command(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setClean)
///
/// ``` QUndoStack* self ```
void q_undostack_set_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#resetClean)
///
/// ``` QUndoStack* self ```
void q_undostack_reset_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setIndex)
///
/// ``` QUndoStack* self, int idx ```
void q_undostack_set_index(void* self, int idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undo)
///
/// ``` QUndoStack* self ```
void q_undostack_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redo)
///
/// ``` QUndoStack* self ```
void q_undostack_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
///
/// ``` QUndoStack* self ```
void q_undostack_set_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
///
/// ``` QUndoStack* self, int idx ```
void q_undostack_index_changed(void* self, int idx);

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, int) ```
void q_undostack_on_index_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
///
/// ``` QUndoStack* self, bool clean ```
void q_undostack_clean_changed(void* self, bool clean);

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, bool) ```
void q_undostack_on_clean_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
///
/// ``` QUndoStack* self, bool canUndo ```
void q_undostack_can_undo_changed(void* self, bool canUndo);

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, bool) ```
void q_undostack_on_can_undo_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
///
/// ``` QUndoStack* self, bool canRedo ```
void q_undostack_can_redo_changed(void* self, bool canRedo);

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, bool) ```
void q_undostack_on_can_redo_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
///
/// ``` QUndoStack* self, const char* undoText ```
void q_undostack_undo_text_changed(void* self, const char* undoText);

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, const char*) ```
void q_undostack_on_undo_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
///
/// ``` QUndoStack* self, const char* redoText ```
void q_undostack_redo_text_changed(void* self, const char* redoText);

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, const char*) ```
void q_undostack_on_redo_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_undostack_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_undostack_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
///
/// ``` QUndoStack* self, QObject* parent, const char* prefix ```
QAction* q_undostack_create_undo_action2(void* self, void* parent, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
///
/// ``` QUndoStack* self, QObject* parent, const char* prefix ```
QAction* q_undostack_create_redo_action2(void* self, void* parent, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
///
/// ``` QUndoStack* self, bool active ```
void q_undostack_set_active1(void* self, bool active);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUndoStack* self ```
const char* q_undostack_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUndoStack* self, const char* name ```
void q_undostack_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUndoStack* self ```
bool q_undostack_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUndoStack* self, bool b ```
bool q_undostack_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUndoStack* self ```
QThread* q_undostack_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUndoStack* self, QThread* thread ```
void q_undostack_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoStack* self, int interval ```
int32_t q_undostack_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUndoStack* self, int id ```
void q_undostack_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUndoStack* self ```
libqt_list /* of QObject* */ q_undostack_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QUndoStack* self, QObject* parent ```
void q_undostack_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUndoStack* self, QObject* filterObj ```
void q_undostack_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUndoStack* self, QObject* obj ```
void q_undostack_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_undostack_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoStack* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_undostack_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_undostack_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_undostack_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUndoStack* self ```
void q_undostack_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUndoStack* self ```
void q_undostack_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUndoStack* self, const char* name, QVariant* value ```
bool q_undostack_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUndoStack* self, const char* name ```
QVariant* q_undostack_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUndoStack* self ```
const char** q_undostack_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoStack* self ```
QBindingStorage* q_undostack_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoStack* self ```
QBindingStorage* q_undostack_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoStack* self ```
void q_undostack_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QUndoStack* self, void (*slot)(QObject*) ```
void q_undostack_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUndoStack* self ```
QObject* q_undostack_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUndoStack* self, const char* classname ```
bool q_undostack_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUndoStack* self ```
void q_undostack_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoStack* self, int interval, enum Qt__TimerType timerType ```
int32_t q_undostack_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undostack_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoStack* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undostack_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoStack* self, QObject* param1 ```
void q_undostack_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QUndoStack* self, void (*slot)(QObject*, QObject*) ```
void q_undostack_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
bool q_undostack_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
bool q_undostack_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, bool (*slot)(QUndoStack*, QEvent*) ```
void q_undostack_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QObject* watched, QEvent* event ```
bool q_undostack_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QObject* watched, QEvent* event ```
bool q_undostack_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, bool (*slot)(QUndoStack*, QObject*, QEvent*) ```
void q_undostack_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QTimerEvent* event ```
void q_undostack_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QTimerEvent* event ```
void q_undostack_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QTimerEvent*) ```
void q_undostack_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QChildEvent* event ```
void q_undostack_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QChildEvent* event ```
void q_undostack_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QChildEvent*) ```
void q_undostack_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
void q_undostack_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
void q_undostack_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QEvent*) ```
void q_undostack_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QMetaMethod*) ```
void q_undostack_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QMetaMethod*) ```
void q_undostack_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self ```
QObject* q_undostack_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self ```
QObject* q_undostack_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, QObject* (*slot)() ```
void q_undostack_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self ```
int32_t q_undostack_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self ```
int32_t q_undostack_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, int32_t (*slot)() ```
void q_undostack_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, const char* signal ```
int32_t q_undostack_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, const char* signal ```
int32_t q_undostack_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, int32_t (*slot)(QUndoStack*, const char*) ```
void q_undostack_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
bool q_undostack_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
bool q_undostack_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, bool (*slot)(QUndoStack*, QMetaMethod*) ```
void q_undostack_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QUndoStack* self ```
void q_undostack_delete(void* self);

#endif
