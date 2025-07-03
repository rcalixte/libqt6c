#pragma once
#ifndef SRCQT6C_LIBQUNDOGROUP_H
#define SRCQT6C_LIBQUNDOGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqundostack.h"

/// https://doc.qt.io/qt-6/qundogroup.html

/// q_undogroup_new constructs a new QUndoGroup object.
///
///
QUndoGroup* q_undogroup_new();

/// q_undogroup_new2 constructs a new QUndoGroup object.
///
/// ``` QObject* parent ```
QUndoGroup* q_undogroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUndoGroup* self ```
const QMetaObject* q_undogroup_meta_object(void* self);

/// ``` QUndoGroup* self, const char* param1 ```
void* q_undogroup_metacast(void* self, const char* param1);

/// ``` QUndoGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undogroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QUndoGroup* self, int32_t (*slot)(QUndoGroup*, enum QMetaObject__Call, int, void*) ```
void q_undogroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QUndoGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undogroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_undogroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#addStack)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_add_stack(void* self, void* stack);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#removeStack)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_remove_stack(void* self, void* stack);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#stacks)
///
/// ``` QUndoGroup* self ```
libqt_list /* of QUndoStack* */ q_undogroup_stacks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#activeStack)
///
/// ``` QUndoGroup* self ```
QUndoStack* q_undogroup_active_stack(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// ``` QUndoGroup* self, QObject* parent ```
QAction* q_undogroup_create_undo_action(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// ``` QUndoGroup* self, QObject* parent ```
QAction* q_undogroup_create_redo_action(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canUndo)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_can_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canRedo)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_can_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undoText)
///
/// ``` QUndoGroup* self ```
const char* q_undogroup_undo_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redoText)
///
/// ``` QUndoGroup* self ```
const char* q_undogroup_redo_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#isClean)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_clean(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undo)
///
/// ``` QUndoGroup* self ```
void q_undogroup_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redo)
///
/// ``` QUndoGroup* self ```
void q_undogroup_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#setActiveStack)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_set_active_stack(void* self, void* stack);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_active_stack_changed(void* self, void* stack);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QUndoStack*) ```
void q_undogroup_on_active_stack_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
///
/// ``` QUndoGroup* self, int idx ```
void q_undogroup_index_changed(void* self, int idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, int) ```
void q_undogroup_on_index_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
///
/// ``` QUndoGroup* self, bool clean ```
void q_undogroup_clean_changed(void* self, bool clean);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, bool) ```
void q_undogroup_on_clean_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
///
/// ``` QUndoGroup* self, bool canUndo ```
void q_undogroup_can_undo_changed(void* self, bool canUndo);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, bool) ```
void q_undogroup_on_can_undo_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
///
/// ``` QUndoGroup* self, bool canRedo ```
void q_undogroup_can_redo_changed(void* self, bool canRedo);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, bool) ```
void q_undogroup_on_can_redo_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
///
/// ``` QUndoGroup* self, const char* undoText ```
void q_undogroup_undo_text_changed(void* self, const char* undoText);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, const char*) ```
void q_undogroup_on_undo_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
///
/// ``` QUndoGroup* self, const char* redoText ```
void q_undogroup_redo_text_changed(void* self, const char* redoText);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, const char*) ```
void q_undogroup_on_redo_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_undogroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_undogroup_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// ``` QUndoGroup* self, QObject* parent, const char* prefix ```
QAction* q_undogroup_create_undo_action2(void* self, void* parent, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// ``` QUndoGroup* self, QObject* parent, const char* prefix ```
QAction* q_undogroup_create_redo_action2(void* self, void* parent, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUndoGroup* self ```
const char* q_undogroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUndoGroup* self, char* name ```
void q_undogroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUndoGroup* self, bool b ```
bool q_undogroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUndoGroup* self ```
QThread* q_undogroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUndoGroup* self, QThread* thread ```
void q_undogroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoGroup* self, int interval ```
int32_t q_undogroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUndoGroup* self, int id ```
void q_undogroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUndoGroup* self ```
libqt_list /* of QObject* */ q_undogroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QUndoGroup* self, QObject* parent ```
void q_undogroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUndoGroup* self, QObject* filterObj ```
void q_undogroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUndoGroup* self, QObject* obj ```
void q_undogroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_undogroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_undogroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_undogroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_undogroup_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUndoGroup* self ```
void q_undogroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUndoGroup* self ```
void q_undogroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUndoGroup* self, const char* name, QVariant* value ```
bool q_undogroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUndoGroup* self, const char* name ```
QVariant* q_undogroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUndoGroup* self ```
const char** q_undogroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoGroup* self ```
QBindingStorage* q_undogroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoGroup* self ```
const QBindingStorage* q_undogroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoGroup* self ```
void q_undogroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoGroup* self, void (*slot)(QObject*) ```
void q_undogroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUndoGroup* self ```
QObject* q_undogroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUndoGroup* self, const char* classname ```
bool q_undogroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUndoGroup* self ```
void q_undogroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_undogroup_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undogroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undogroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoGroup* self, QObject* param1 ```
void q_undogroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoGroup* self, void (*slot)(QObject*, QObject*) ```
void q_undogroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
bool q_undogroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
bool q_undogroup_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, bool (*slot)(QUndoGroup*, QEvent*) ```
void q_undogroup_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QObject* watched, QEvent* event ```
bool q_undogroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QObject* watched, QEvent* event ```
bool q_undogroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, bool (*slot)(QUndoGroup*, QObject*, QEvent*) ```
void q_undogroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QTimerEvent* event ```
void q_undogroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QTimerEvent* event ```
void q_undogroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QTimerEvent*) ```
void q_undogroup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QChildEvent* event ```
void q_undogroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QChildEvent* event ```
void q_undogroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QChildEvent*) ```
void q_undogroup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
void q_undogroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
void q_undogroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QEvent*) ```
void q_undogroup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QMetaMethod*) ```
void q_undogroup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QMetaMethod*) ```
void q_undogroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self ```
QObject* q_undogroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self ```
QObject* q_undogroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, QObject* (*slot)() ```
void q_undogroup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self ```
int32_t q_undogroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self ```
int32_t q_undogroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, int32_t (*slot)() ```
void q_undogroup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, const char* signal ```
int32_t q_undogroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, const char* signal ```
int32_t q_undogroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, int32_t (*slot)(QUndoGroup*, const char*) ```
void q_undogroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
bool q_undogroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
bool q_undogroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, bool (*slot)(QUndoGroup*, QMetaMethod*) ```
void q_undogroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QUndoGroup* self, void (*slot)(QObject*, const char*) ```
void q_undogroup_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#dtor.QUndoGroup)
///
/// Delete this object from C++ memory.
///
/// ``` QUndoGroup* self ```
void q_undogroup_delete(void* self);

#endif
