#pragma once
#ifndef SRCQT6C_LIBQCOMPLETER_H
#define SRCQT6C_LIBQCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qcompleter.html

/// q_completer_new constructs a new QCompleter object.
///
///
QCompleter* q_completer_new();

/// q_completer_new2 constructs a new QCompleter object.
///
/// ``` QAbstractItemModel* model ```
QCompleter* q_completer_new2(void* model);

/// q_completer_new3 constructs a new QCompleter object.
///
/// ``` const char* completions[] ```
QCompleter* q_completer_new3(const char* completions[]);

/// q_completer_new4 constructs a new QCompleter object.
///
/// ``` QObject* parent ```
QCompleter* q_completer_new4(void* parent);

/// q_completer_new5 constructs a new QCompleter object.
///
/// ``` QAbstractItemModel* model, QObject* parent ```
QCompleter* q_completer_new5(void* model, void* parent);

/// q_completer_new6 constructs a new QCompleter object.
///
/// ``` const char* completions[], QObject* parent ```
QCompleter* q_completer_new6(const char* completions[], void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCompleter* self ```
QMetaObject* q_completer_meta_object(void* self);

/// ``` QCompleter* self, const char* param1 ```
void* q_completer_metacast(void* self, const char* param1);

/// ``` QCompleter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_completer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, int32_t (*slot)(QCompleter*, enum QMetaObject__Call, int, void*) ```
void q_completer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCompleter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_completer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_completer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
///
/// ``` QCompleter* self, QWidget* widget ```
void q_completer_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#widget)
///
/// ``` QCompleter* self ```
QWidget* q_completer_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModel)
///
/// ``` QCompleter* self, QAbstractItemModel* c ```
void q_completer_set_model(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#model)
///
/// ``` QCompleter* self ```
QAbstractItemModel* q_completer_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
///
/// ``` QCompleter* self, enum QCompleter__CompletionMode mode ```
void q_completer_set_completion_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
///
/// ``` QCompleter* self ```
int64_t q_completer_completion_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
///
/// ``` QCompleter* self, int filterMode ```
void q_completer_set_filter_mode(void* self, int64_t filterMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
///
/// ``` QCompleter* self ```
int64_t q_completer_filter_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#popup)
///
/// ``` QCompleter* self ```
QAbstractItemView* q_completer_popup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
///
/// ``` QCompleter* self, QAbstractItemView* popup ```
void q_completer_set_popup(void* self, void* popup);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
///
/// ``` QCompleter* self, enum Qt__CaseSensitivity caseSensitivity ```
void q_completer_set_case_sensitivity(void* self, int64_t caseSensitivity);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
///
/// ``` QCompleter* self ```
int64_t q_completer_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
///
/// ``` QCompleter* self, enum QCompleter__ModelSorting sorting ```
void q_completer_set_model_sorting(void* self, int64_t sorting);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
///
/// ``` QCompleter* self ```
int64_t q_completer_model_sorting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
///
/// ``` QCompleter* self, int column ```
void q_completer_set_completion_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
///
/// ``` QCompleter* self ```
int32_t q_completer_completion_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
///
/// ``` QCompleter* self, int role ```
void q_completer_set_completion_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
///
/// ``` QCompleter* self ```
int32_t q_completer_completion_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
///
/// ``` QCompleter* self ```
bool q_completer_wrap_around(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
///
/// ``` QCompleter* self ```
int32_t q_completer_max_visible_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
///
/// ``` QCompleter* self, int maxItems ```
void q_completer_set_max_visible_items(void* self, int maxItems);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
///
/// ``` QCompleter* self ```
int32_t q_completer_completion_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
///
/// ``` QCompleter* self, int row ```
bool q_completer_set_current_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
///
/// ``` QCompleter* self ```
int32_t q_completer_current_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
///
/// ``` QCompleter* self ```
QModelIndex* q_completer_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
///
/// ``` QCompleter* self ```
const char* q_completer_current_completion(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
///
/// ``` QCompleter* self ```
QAbstractItemModel* q_completer_completion_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
///
/// ``` QCompleter* self ```
const char* q_completer_completion_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
///
/// ``` QCompleter* self, const char* prefix ```
void q_completer_set_completion_prefix(void* self, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// ``` QCompleter* self ```
void q_completer_complete(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
///
/// ``` QCompleter* self, bool wrap ```
void q_completer_set_wrap_around(void* self, bool wrap);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// ``` QCompleter* self, QModelIndex* index ```
const char* q_completer_path_from_index(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, const char* (*slot)(QCompleter*, QModelIndex*) ```
void q_completer_on_path_from_index(void* self, const char* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCompleter* self, QModelIndex* index ```
const char* q_completer_qbase_path_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// ``` QCompleter* self, const char* path ```
const char** q_completer_split_path(void* self, const char* path);

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, const char** (*slot)(QCompleter*, const char*) ```
void q_completer_on_split_path(void* self, const char** (*slot)(void*, const char*));

/// Base class method implementation
///
/// ``` QCompleter* self, const char* path ```
const char** q_completer_qbase_split_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// ``` QCompleter* self, QObject* o, QEvent* e ```
bool q_completer_event_filter(void* self, void* o, void* e);

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, bool (*slot)(QCompleter*, QObject*, QEvent*) ```
void q_completer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QCompleter* self, QObject* o, QEvent* e ```
bool q_completer_qbase_event_filter(void* self, void* o, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// ``` QCompleter* self, QEvent* param1 ```
bool q_completer_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, bool (*slot)(QCompleter*, QEvent*) ```
void q_completer_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCompleter* self, QEvent* param1 ```
bool q_completer_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// ``` QCompleter* self, const char* text ```
void q_completer_activated(void* self, const char* text);

/// ``` QCompleter* self, void (*slot)(QCompleter*, const char*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// ``` QCompleter* self, QModelIndex* index ```
void q_completer_activated_with_index(void* self, void* index);

/// ``` QCompleter* self, void (*slot)(QCompleter*, QModelIndex*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// ``` QCompleter* self, const char* text ```
void q_completer_highlighted(void* self, const char* text);

/// ``` QCompleter* self, void (*slot)(QCompleter*, const char*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// ``` QCompleter* self, QModelIndex* index ```
void q_completer_highlighted_with_index(void* self, void* index);

/// ``` QCompleter* self, void (*slot)(QCompleter*, QModelIndex*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_completer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_completer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// ``` QCompleter* self, QRect* rect ```
void q_completer_complete1(void* self, void* rect);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCompleter* self ```
const char* q_completer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCompleter* self, char* name ```
void q_completer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCompleter* self ```
bool q_completer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCompleter* self ```
bool q_completer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCompleter* self ```
bool q_completer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCompleter* self ```
bool q_completer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCompleter* self, bool b ```
bool q_completer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCompleter* self ```
QThread* q_completer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCompleter* self, QThread* thread ```
void q_completer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCompleter* self, int interval ```
int32_t q_completer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCompleter* self, int id ```
void q_completer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCompleter* self ```
libqt_list /* of QObject* */ q_completer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCompleter* self, QObject* parent ```
void q_completer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCompleter* self, QObject* filterObj ```
void q_completer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCompleter* self, QObject* obj ```
void q_completer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_completer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCompleter* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_completer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_completer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_completer_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCompleter* self ```
void q_completer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCompleter* self ```
void q_completer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCompleter* self, const char* name, QVariant* value ```
bool q_completer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCompleter* self, const char* name ```
QVariant* q_completer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCompleter* self ```
const char** q_completer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCompleter* self ```
QBindingStorage* q_completer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCompleter* self ```
QBindingStorage* q_completer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCompleter* self ```
void q_completer_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QCompleter* self, void (*slot)(QObject*) ```
void q_completer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCompleter* self ```
QObject* q_completer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCompleter* self, const char* classname ```
bool q_completer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCompleter* self ```
void q_completer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCompleter* self, int interval, enum Qt__TimerType timerType ```
int32_t q_completer_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_completer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCompleter* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_completer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCompleter* self, QObject* param1 ```
void q_completer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QCompleter* self, void (*slot)(QObject*, QObject*) ```
void q_completer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QTimerEvent* event ```
void q_completer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QTimerEvent* event ```
void q_completer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QTimerEvent*) ```
void q_completer_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QChildEvent* event ```
void q_completer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QChildEvent* event ```
void q_completer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QChildEvent*) ```
void q_completer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QEvent* event ```
void q_completer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QEvent* event ```
void q_completer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QEvent*) ```
void q_completer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QMetaMethod*) ```
void q_completer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QMetaMethod*) ```
void q_completer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self ```
QObject* q_completer_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self ```
QObject* q_completer_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, QObject* (*slot)() ```
void q_completer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self ```
int32_t q_completer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self ```
int32_t q_completer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, int32_t (*slot)() ```
void q_completer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, const char* signal ```
int32_t q_completer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, const char* signal ```
int32_t q_completer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, int32_t (*slot)(QCompleter*, const char*) ```
void q_completer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
bool q_completer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
bool q_completer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, bool (*slot)(QCompleter*, QMetaMethod*) ```
void q_completer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QCompleter* self ```
void q_completer_delete(void* self);

/// https://doc.qt.io/qt-6/qcompleter.html#types

typedef enum {
    QCOMPLETER_COMPLETIONMODE_POPUPCOMPLETION = 0,
    QCOMPLETER_COMPLETIONMODE_UNFILTEREDPOPUPCOMPLETION = 1,
    QCOMPLETER_COMPLETIONMODE_INLINECOMPLETION = 2
} QCompleter__CompletionMode;

typedef enum {
    QCOMPLETER_MODELSORTING_UNSORTEDMODEL = 0,
    QCOMPLETER_MODELSORTING_CASESENSITIVELYSORTEDMODEL = 1,
    QCOMPLETER_MODELSORTING_CASEINSENSITIVELYSORTEDMODEL = 2
} QCompleter__ModelSorting;

#endif
