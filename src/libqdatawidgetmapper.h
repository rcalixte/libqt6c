#pragma once
#ifndef SRC_QT6C_LIBQDATAWIDGETMAPPER_H
#define SRC_QT6C_LIBQDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html

/// q_datawidgetmapper_new constructs a new QDataWidgetMapper object.
///
QDataWidgetMapper* q_datawidgetmapper_new();

/// q_datawidgetmapper_new2 constructs a new QDataWidgetMapper object.
///
/// @param parent QObject*
QDataWidgetMapper* q_datawidgetmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDataWidgetMapper*
const QMetaObject* q_datawidgetmapper_meta_object(void* self);

/// @param self QDataWidgetMapper*
/// @param param1 const char*
void* q_datawidgetmapper_metacast(void* self, const char* param1);

/// @param self QDataWidgetMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_datawidgetmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDataWidgetMapper*
/// @param callback int32_t func(QDataWidgetMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_datawidgetmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDataWidgetMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_datawidgetmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_datawidgetmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setModel)
///
/// @param self QDataWidgetMapper*
/// @param model QAbstractItemModel*
void q_datawidgetmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#model)
///
/// @param self QDataWidgetMapper*
QAbstractItemModel* q_datawidgetmapper_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setItemDelegate)
///
/// @param self QDataWidgetMapper*
/// @param delegate QAbstractItemDelegate*
void q_datawidgetmapper_set_item_delegate(void* self, void* delegate);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#itemDelegate)
///
/// @param self QDataWidgetMapper*
QAbstractItemDelegate* q_datawidgetmapper_item_delegate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setRootIndex)
///
/// @param self QDataWidgetMapper*
/// @param index QModelIndex*
void q_datawidgetmapper_set_root_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#rootIndex)
///
/// @param self QDataWidgetMapper*
QModelIndex* q_datawidgetmapper_root_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setOrientation)
///
/// @param self QDataWidgetMapper*
/// @param aOrientation enum Qt__Orientation
void q_datawidgetmapper_set_orientation(void* self, int32_t aOrientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#orientation)
///
/// @param self QDataWidgetMapper*
///
/// @return enum Qt__Orientation
int32_t q_datawidgetmapper_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setSubmitPolicy)
///
/// @param self QDataWidgetMapper*
/// @param policy enum QDataWidgetMapper__SubmitPolicy
void q_datawidgetmapper_set_submit_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submitPolicy)
///
/// @param self QDataWidgetMapper*
///
/// @return enum QDataWidgetMapper__SubmitPolicy
int32_t q_datawidgetmapper_submit_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
///
/// @param self QDataWidgetMapper*
/// @param widget QWidget*
/// @param section int
void q_datawidgetmapper_add_mapping(void* self, void* widget, int section);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
///
/// @param self QDataWidgetMapper*
/// @param widget QWidget*
/// @param section int
/// @param propertyName const char*
void q_datawidgetmapper_add_mapping2(void* self, void* widget, int section, const char* propertyName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#removeMapping)
///
/// @param self QDataWidgetMapper*
/// @param widget QWidget*
void q_datawidgetmapper_remove_mapping(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedSection)
///
/// @param self QDataWidgetMapper*
/// @param widget QWidget*
int32_t q_datawidgetmapper_mapped_section(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedPropertyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDataWidgetMapper*
/// @param widget QWidget*
char* q_datawidgetmapper_mapped_property_name(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedWidgetAt)
///
/// @param self QDataWidgetMapper*
/// @param section int
QWidget* q_datawidgetmapper_mapped_widget_at(void* self, int section);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#clearMapping)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_clear_mapping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndex)
///
/// @param self QDataWidgetMapper*
int32_t q_datawidgetmapper_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#revert)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submit)
///
/// @param self QDataWidgetMapper*
bool q_datawidgetmapper_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toFirst)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_to_first(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toLast)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_to_last(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toNext)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_to_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toPrevious)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_to_previous(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// @param self QDataWidgetMapper*
/// @param index int
void q_datawidgetmapper_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, int index)
void q_datawidgetmapper_on_set_current_index(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// Base class method implementation
///
/// @param self QDataWidgetMapper*
/// @param index int
void q_datawidgetmapper_qbase_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentModelIndex)
///
/// @param self QDataWidgetMapper*
/// @param index QModelIndex*
void q_datawidgetmapper_set_current_model_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
///
/// @param self QDataWidgetMapper*
/// @param index int
void q_datawidgetmapper_current_index_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, int index)
void q_datawidgetmapper_on_current_index_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_datawidgetmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_datawidgetmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDataWidgetMapper*
const char* q_datawidgetmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDataWidgetMapper*
/// @param name char*
void q_datawidgetmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDataWidgetMapper*
bool q_datawidgetmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDataWidgetMapper*
bool q_datawidgetmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDataWidgetMapper*
bool q_datawidgetmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDataWidgetMapper*
bool q_datawidgetmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDataWidgetMapper*
/// @param b bool
bool q_datawidgetmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDataWidgetMapper*
QThread* q_datawidgetmapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDataWidgetMapper*
/// @param thread QThread*
bool q_datawidgetmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDataWidgetMapper*
/// @param interval int
int32_t q_datawidgetmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDataWidgetMapper*
/// @param id int
void q_datawidgetmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDataWidgetMapper*
/// @param id enum Qt__TimerId
void q_datawidgetmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDataWidgetMapper*
libqt_list /* of QObject* */ q_datawidgetmapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDataWidgetMapper*
/// @param parent QObject*
void q_datawidgetmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDataWidgetMapper*
/// @param filterObj QObject*
void q_datawidgetmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDataWidgetMapper*
/// @param obj QObject*
void q_datawidgetmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_datawidgetmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDataWidgetMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_datawidgetmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_datawidgetmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_datawidgetmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDataWidgetMapper*
/// @param name const char*
/// @param value QVariant*
bool q_datawidgetmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDataWidgetMapper*
/// @param name const char*
QVariant* q_datawidgetmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDataWidgetMapper*
const char** q_datawidgetmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDataWidgetMapper*
QBindingStorage* q_datawidgetmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDataWidgetMapper*
const QBindingStorage* q_datawidgetmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self)
void q_datawidgetmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDataWidgetMapper*
QObject* q_datawidgetmapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDataWidgetMapper*
/// @param classname const char*
bool q_datawidgetmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDataWidgetMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_datawidgetmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDataWidgetMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_datawidgetmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_datawidgetmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDataWidgetMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_datawidgetmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDataWidgetMapper*
/// @param param1 QObject*
void q_datawidgetmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, QObject* param1)
void q_datawidgetmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QEvent*
bool q_datawidgetmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QEvent*
bool q_datawidgetmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback bool func(QDataWidgetMapper* self, QEvent* event)
void q_datawidgetmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_datawidgetmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_datawidgetmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback bool func(QDataWidgetMapper* self, QObject* watched, QEvent* event)
void q_datawidgetmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QTimerEvent*
void q_datawidgetmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QTimerEvent*
void q_datawidgetmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, QTimerEvent* event)
void q_datawidgetmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QChildEvent*
void q_datawidgetmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QChildEvent*
void q_datawidgetmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, QChildEvent* event)
void q_datawidgetmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QEvent*
void q_datawidgetmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param event QEvent*
void q_datawidgetmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, QEvent* event)
void q_datawidgetmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal QMetaMethod*
void q_datawidgetmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal QMetaMethod*
void q_datawidgetmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, QMetaMethod* signal)
void q_datawidgetmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal QMetaMethod*
void q_datawidgetmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal QMetaMethod*
void q_datawidgetmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, QMetaMethod* signal)
void q_datawidgetmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
QObject* q_datawidgetmapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
QObject* q_datawidgetmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback QObject* func()
void q_datawidgetmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
int32_t q_datawidgetmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
int32_t q_datawidgetmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback int32_t func()
void q_datawidgetmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal const char*
int32_t q_datawidgetmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal const char*
int32_t q_datawidgetmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback int32_t func(QDataWidgetMapper* self, const char* signal)
void q_datawidgetmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal QMetaMethod*
bool q_datawidgetmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param signal QMetaMethod*
bool q_datawidgetmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDataWidgetMapper*
/// @param callback bool func(QDataWidgetMapper* self, QMetaMethod* signal)
void q_datawidgetmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDataWidgetMapper*
/// @param callback void func(QDataWidgetMapper* self, const char* objectName)
void q_datawidgetmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#dtor.QDataWidgetMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QDataWidgetMapper*
void q_datawidgetmapper_delete(void* self);

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html#types

typedef enum {
    QDATAWIDGETMAPPER_SUBMITPOLICY_AUTOSUBMIT = 0,
    QDATAWIDGETMAPPER_SUBMITPOLICY_MANUALSUBMIT = 1
} QDataWidgetMapper__SubmitPolicy;

#endif
