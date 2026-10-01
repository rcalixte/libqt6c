#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKVIEWSTATESERIALIZER_H
#define EXTRAS_KWIDGETSADDONS_LIBKVIEWSTATESERIALIZER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

struct pair_int_int;

typedef struct pair_int_int pair_int_int;

#ifndef PAIR_INT_INT
#define PAIR_INT_INT
struct pair_int_int {
    int first;
    int second;
};
#endif

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html)

/// k_viewstateserializer_new constructs a new KViewStateSerializer object.
///
KViewStateSerializer* k_viewstateserializer_new();

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html)

/// k_viewstateserializer_new2 constructs a new KViewStateSerializer object.
///
/// @param parent QObject*
///
KViewStateSerializer* k_viewstateserializer_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KViewStateSerializer*
///
const QMetaObject* k_viewstateserializer_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KViewStateSerializer*
/// @param callback const QMetaObject* func(const KViewStateSerializer* self)
///
void k_viewstateserializer_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KViewStateSerializer*
///
const QMetaObject* k_viewstateserializer_super_meta_object(const void* self);

/// @param self KViewStateSerializer*
/// @param param1 const char*
///
void* k_viewstateserializer_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KViewStateSerializer*
/// @param callback void* func(KViewStateSerializer* self, const char* param1)
///
void k_viewstateserializer_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KViewStateSerializer*
/// @param param1 const char*
///
void* k_viewstateserializer_super_metacast(void* self, const char* param1);

/// @param self KViewStateSerializer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_viewstateserializer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KViewStateSerializer*
/// @param callback int32_t func(KViewStateSerializer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_viewstateserializer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KViewStateSerializer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_viewstateserializer_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_viewstateserializer_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#view)
///
/// @param self const KViewStateSerializer*
///
QAbstractItemView* k_viewstateserializer_view(const void* self);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#setView)
///
/// @param self KViewStateSerializer*
/// @param view QAbstractItemView*
///
void k_viewstateserializer_set_view(void* self, void* view);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#selectionModel)
///
/// @param self const KViewStateSerializer*
///
QItemSelectionModel* k_viewstateserializer_selection_model(const void* self);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#setSelectionModel)
///
/// @param self KViewStateSerializer*
/// @param selectionModel QItemSelectionModel*
///
void k_viewstateserializer_set_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#selectionKeys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KViewStateSerializer*
///
const char** k_viewstateserializer_selection_keys(const void* self);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#expansionKeys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KViewStateSerializer*
///
const char** k_viewstateserializer_expansion_keys(const void* self);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#currentIndexKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KViewStateSerializer*
///
const char* k_viewstateserializer_current_index_key(const void* self);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#scrollState)
///
/// @param self const KViewStateSerializer*
///
/// @return pair_int_int tuple of int and int
///
pair_int_int k_viewstateserializer_scroll_state(const void* self);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreSelection)
///
/// @param self KViewStateSerializer*
/// @param indexStrings const char**
///
void k_viewstateserializer_restore_selection(void* self, const char* indexStrings[static 1]);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreCurrentItem)
///
/// @param self KViewStateSerializer*
/// @param indexString const char*
///
void k_viewstateserializer_restore_current_item(void* self, const char* indexString);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreExpanded)
///
/// @param self KViewStateSerializer*
/// @param indexStrings const char**
///
void k_viewstateserializer_restore_expanded(void* self, const char* indexStrings[static 1]);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreScrollState)
///
/// @param self KViewStateSerializer*
/// @param verticalScoll int
/// @param horizontalScroll int
///
void k_viewstateserializer_restore_scroll_state(void* self, int verticalScoll, int horizontalScroll);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
///
/// @warning This method must be implemented with `k_viewstateserializer_on_index_from_config_string` before it can be called.
///
/// @param self const KViewStateSerializer*
/// @param model QAbstractItemModel*
/// @param key const char*
///
QModelIndex* k_viewstateserializer_index_from_config_string(const void* self, const void* model, const char* key);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
///
/// Allows for overriding the related default method
///
/// @param self const KViewStateSerializer*
/// @param callback QModelIndex* func(const KViewStateSerializer* self, QAbstractItemModel* model, const char* key)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_viewstateserializer_on_index_from_config_string(const void* self, QModelIndex* (*callback)(const void*, const void*, const char*));

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
///
/// @warning This method must be implemented with `k_viewstateserializer_on_index_to_config_string` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KViewStateSerializer*
/// @param index QModelIndex*
///
const char* k_viewstateserializer_index_to_config_string(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
///
/// Allows for overriding the related default method
///
/// @param self const KViewStateSerializer*
/// @param callback const char* func(const KViewStateSerializer* self, QModelIndex* index)
///
void k_viewstateserializer_on_index_to_config_string(const void* self, const char* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreState)
///
/// @param self KViewStateSerializer*
///
void k_viewstateserializer_restore_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_viewstateserializer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_viewstateserializer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KViewStateSerializer*
///
const char* k_viewstateserializer_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KViewStateSerializer*
/// @param name const char*
///
void k_viewstateserializer_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KViewStateSerializer*
///
bool k_viewstateserializer_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KViewStateSerializer*
///
bool k_viewstateserializer_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KViewStateSerializer*
///
bool k_viewstateserializer_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KViewStateSerializer*
///
bool k_viewstateserializer_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KViewStateSerializer*
/// @param b bool
///
bool k_viewstateserializer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KViewStateSerializer*
///
QThread* k_viewstateserializer_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KViewStateSerializer*
/// @param thread QThread*
///
bool k_viewstateserializer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateSerializer*
/// @param interval int
///
int32_t k_viewstateserializer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateSerializer*
/// @param time int64_t of nanoseconds
///
int32_t k_viewstateserializer_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KViewStateSerializer*
/// @param id int
///
void k_viewstateserializer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KViewStateSerializer*
/// @param id enum Qt__TimerId
///
void k_viewstateserializer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KViewStateSerializer*
///
/// @return libqt_list of QObject*
///
libqt_list k_viewstateserializer_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KViewStateSerializer*
/// @param parent QObject*
///
void k_viewstateserializer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KViewStateSerializer*
/// @param filterObj QObject*
///
void k_viewstateserializer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KViewStateSerializer*
/// @param obj QObject*
///
void k_viewstateserializer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_viewstateserializer_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_viewstateserializer_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KViewStateSerializer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_viewstateserializer_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_viewstateserializer_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_viewstateserializer_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KViewStateSerializer*
///
bool k_viewstateserializer_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KViewStateSerializer*
/// @param receiver QObject*
///
bool k_viewstateserializer_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_viewstateserializer_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KViewStateSerializer*
///
void k_viewstateserializer_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KViewStateSerializer*
///
void k_viewstateserializer_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KViewStateSerializer*
/// @param name const char*
/// @param value QVariant*
///
bool k_viewstateserializer_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KViewStateSerializer*
/// @param name const char*
///
QVariant* k_viewstateserializer_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KViewStateSerializer*
///
const char** k_viewstateserializer_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KViewStateSerializer*
///
QBindingStorage* k_viewstateserializer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KViewStateSerializer*
///
const QBindingStorage* k_viewstateserializer_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
///
void k_viewstateserializer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self)
///
void k_viewstateserializer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KViewStateSerializer*
///
QObject* k_viewstateserializer_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KViewStateSerializer*
/// @param classname const char*
///
bool k_viewstateserializer_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KViewStateSerializer*
///
void k_viewstateserializer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateSerializer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_viewstateserializer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateSerializer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_viewstateserializer_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_viewstateserializer_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_viewstateserializer_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KViewStateSerializer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_viewstateserializer_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KViewStateSerializer*
/// @param signal const char*
///
bool k_viewstateserializer_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KViewStateSerializer*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_viewstateserializer_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KViewStateSerializer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_viewstateserializer_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KViewStateSerializer*
/// @param receiver QObject*
/// @param member const char*
///
bool k_viewstateserializer_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
/// @param param1 QObject*
///
void k_viewstateserializer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QObject* param1)
///
void k_viewstateserializer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
///
bool k_viewstateserializer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
///
bool k_viewstateserializer_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback bool func(KViewStateSerializer* self, QEvent* event)
///
void k_viewstateserializer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_viewstateserializer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_viewstateserializer_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback bool func(KViewStateSerializer* self, QObject* watched, QEvent* event)
///
void k_viewstateserializer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QTimerEvent*
///
void k_viewstateserializer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QTimerEvent*
///
void k_viewstateserializer_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QTimerEvent* event)
///
void k_viewstateserializer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QChildEvent*
///
void k_viewstateserializer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QChildEvent*
///
void k_viewstateserializer_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QChildEvent* event)
///
void k_viewstateserializer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
///
void k_viewstateserializer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
///
void k_viewstateserializer_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QEvent* event)
///
void k_viewstateserializer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
///
void k_viewstateserializer_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
///
void k_viewstateserializer_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QMetaMethod* signal)
///
void k_viewstateserializer_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
///
void k_viewstateserializer_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
///
void k_viewstateserializer_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QMetaMethod* signal)
///
void k_viewstateserializer_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KViewStateSerializer*
///
QObject* k_viewstateserializer_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KViewStateSerializer*
///
QObject* k_viewstateserializer_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param callback QObject* func(KViewStateSerializer* self)
///
void k_viewstateserializer_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KViewStateSerializer*
///
int32_t k_viewstateserializer_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KViewStateSerializer*
///
int32_t k_viewstateserializer_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param callback int32_t func(KViewStateSerializer* self)
///
void k_viewstateserializer_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param signal const char*
///
int32_t k_viewstateserializer_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param signal const char*
///
int32_t k_viewstateserializer_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param callback int32_t func(KViewStateSerializer* self, const char* signal)
///
void k_viewstateserializer_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param signal QMetaMethod*
///
bool k_viewstateserializer_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param signal QMetaMethod*
///
bool k_viewstateserializer_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KViewStateSerializer*
/// @param callback bool func(KViewStateSerializer* self, QMetaMethod* signal)
///
void k_viewstateserializer_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, const char* objectName)
///
void k_viewstateserializer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kviewstateserializer.html#dtor.KViewStateSerializer)
///
/// Delete this object from C++ memory.
///
/// @param self KViewStateSerializer*
///
void k_viewstateserializer_delete(void* self);

#endif
