#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPAGEWIDGETMODEL_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPAGEWIDGETMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html)

/// k_pagewidgetitem_new constructs a new KPageWidgetItem object.
///
/// @param widget QWidget*
///
KPageWidgetItem* k_pagewidgetitem_new(void* widget);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html)

/// k_pagewidgetitem_new2 constructs a new KPageWidgetItem object.
///
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_pagewidgetitem_new2(void* widget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KPageWidgetItem*
///
const QMetaObject* k_pagewidgetitem_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetItem*
/// @param callback const QMetaObject* func()
///
void k_pagewidgetitem_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KPageWidgetItem*
///
const QMetaObject* k_pagewidgetitem_qbase_meta_object(void* self);

/// @param self KPageWidgetItem*
/// @param param1 const char*
///
void* k_pagewidgetitem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPageWidgetItem*
/// @param callback void* func(KPageWidgetItem* self, const char* param1)
///
void k_pagewidgetitem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPageWidgetItem*
/// @param param1 const char*
///
void* k_pagewidgetitem_qbase_metacast(void* self, const char* param1);

/// @param self KPageWidgetItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pagewidgetitem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPageWidgetItem*
/// @param callback int32_t func(KPageWidgetItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_pagewidgetitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPageWidgetItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pagewidgetitem_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_pagewidgetitem_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#widget)
///
/// @param self KPageWidgetItem*
///
QWidget* k_pagewidgetitem_widget(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setName)
///
/// @param self KPageWidgetItem*
/// @param name const char*
///
void k_pagewidgetitem_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPageWidgetItem*
///
const char* k_pagewidgetitem_name(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setHeader)
///
/// @param self KPageWidgetItem*
/// @param header const char*
///
void k_pagewidgetitem_set_header(void* self, const char* header);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#header)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPageWidgetItem*
///
const char* k_pagewidgetitem_header(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setIcon)
///
/// @param self KPageWidgetItem*
/// @param icon QIcon*
///
void k_pagewidgetitem_set_icon(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#icon)
///
/// @param self KPageWidgetItem*
///
QIcon* k_pagewidgetitem_icon(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setCheckable)
///
/// @param self KPageWidgetItem*
/// @param checkable bool
///
void k_pagewidgetitem_set_checkable(void* self, bool checkable);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isCheckable)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_checkable(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isChecked)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_checked(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isEnabled)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isHeaderVisible)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_header_visible(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setHeaderVisible)
///
/// @param self KPageWidgetItem*
/// @param visible bool
///
void k_pagewidgetitem_set_header_visible(void* self, bool visible);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#actions)
///
/// @param self KPageWidgetItem*
///
/// @return libqt_list of QAction*
///
libqt_list k_pagewidgetitem_actions(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setActions)
///
/// @param self KPageWidgetItem*
/// @param actions libqt_list of QAction*
///
void k_pagewidgetitem_set_actions(void* self, libqt_list actions);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setEnabled)
///
/// @param self KPageWidgetItem*
/// @param enabled bool
///
void k_pagewidgetitem_set_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setChecked)
///
/// @param self KPageWidgetItem*
/// @param checked bool
///
void k_pagewidgetitem_set_checked(void* self, bool checked);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#changed)
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_changed(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#changed)
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self)
///
void k_pagewidgetitem_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#toggled)
///
/// @param self KPageWidgetItem*
/// @param checked bool
///
void k_pagewidgetitem_toggled(void* self, bool checked);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#toggled)
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, bool checked)
///
void k_pagewidgetitem_on_toggled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#actionsChanged)
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_actions_changed(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#actionsChanged)
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self)
///
void k_pagewidgetitem_on_actions_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_pagewidgetitem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_pagewidgetitem_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPageWidgetItem*
///
const char* k_pagewidgetitem_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPageWidgetItem*
/// @param name char*
///
void k_pagewidgetitem_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPageWidgetItem*
/// @param b bool
///
bool k_pagewidgetitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPageWidgetItem*
///
QThread* k_pagewidgetitem_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPageWidgetItem*
/// @param thread QThread*
///
bool k_pagewidgetitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetItem*
/// @param interval int
///
int32_t k_pagewidgetitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetItem*
/// @param time int64_t of nanoseconds
///
int32_t k_pagewidgetitem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPageWidgetItem*
/// @param id int
///
void k_pagewidgetitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPageWidgetItem*
/// @param id enum Qt__TimerId
///
void k_pagewidgetitem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPageWidgetItem*
///
/// @return libqt_list of QObject*
///
libqt_list k_pagewidgetitem_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KPageWidgetItem*
/// @param parent QObject*
///
void k_pagewidgetitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPageWidgetItem*
/// @param filterObj QObject*
///
void k_pagewidgetitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPageWidgetItem*
/// @param obj QObject*
///
void k_pagewidgetitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_pagewidgetitem_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_pagewidgetitem_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPageWidgetItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_pagewidgetitem_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pagewidgetitem_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_pagewidgetitem_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetItem*
///
bool k_pagewidgetitem_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetItem*
/// @param receiver QObject*
///
bool k_pagewidgetitem_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_pagewidgetitem_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPageWidgetItem*
/// @param name const char*
/// @param value QVariant*
///
bool k_pagewidgetitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPageWidgetItem*
/// @param name const char*
///
QVariant* k_pagewidgetitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPageWidgetItem*
///
const char** k_pagewidgetitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPageWidgetItem*
///
QBindingStorage* k_pagewidgetitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPageWidgetItem*
///
const QBindingStorage* k_pagewidgetitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self)
///
void k_pagewidgetitem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KPageWidgetItem*
///
QObject* k_pagewidgetitem_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPageWidgetItem*
/// @param classname const char*
///
bool k_pagewidgetitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_pagewidgetitem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_pagewidgetitem_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_pagewidgetitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_pagewidgetitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPageWidgetItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_pagewidgetitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetItem*
/// @param signal const char*
///
bool k_pagewidgetitem_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_pagewidgetitem_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pagewidgetitem_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetItem*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pagewidgetitem_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetItem*
/// @param param1 QObject*
///
void k_pagewidgetitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, QObject* param1)
///
void k_pagewidgetitem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QEvent*
///
bool k_pagewidgetitem_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QEvent*
///
bool k_pagewidgetitem_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback bool func(KPageWidgetItem* self, QEvent* event)
///
void k_pagewidgetitem_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_pagewidgetitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_pagewidgetitem_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback bool func(KPageWidgetItem* self, QObject* watched, QEvent* event)
///
void k_pagewidgetitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QTimerEvent*
///
void k_pagewidgetitem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QTimerEvent*
///
void k_pagewidgetitem_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, QTimerEvent* event)
///
void k_pagewidgetitem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QChildEvent*
///
void k_pagewidgetitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QChildEvent*
///
void k_pagewidgetitem_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, QChildEvent* event)
///
void k_pagewidgetitem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QEvent*
///
void k_pagewidgetitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param event QEvent*
///
void k_pagewidgetitem_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, QEvent* event)
///
void k_pagewidgetitem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal QMetaMethod*
///
void k_pagewidgetitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal QMetaMethod*
///
void k_pagewidgetitem_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, QMetaMethod* signal)
///
void k_pagewidgetitem_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal QMetaMethod*
///
void k_pagewidgetitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal QMetaMethod*
///
void k_pagewidgetitem_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, QMetaMethod* signal)
///
void k_pagewidgetitem_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
///
QObject* k_pagewidgetitem_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
///
QObject* k_pagewidgetitem_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback QObject* func()
///
void k_pagewidgetitem_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
///
int32_t k_pagewidgetitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
///
int32_t k_pagewidgetitem_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback int32_t func()
///
void k_pagewidgetitem_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal const char*
///
int32_t k_pagewidgetitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal const char*
///
int32_t k_pagewidgetitem_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback int32_t func(KPageWidgetItem* self, const char* signal)
///
void k_pagewidgetitem_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal QMetaMethod*
///
bool k_pagewidgetitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param signal QMetaMethod*
///
bool k_pagewidgetitem_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetItem*
/// @param callback bool func(KPageWidgetItem* self, QMetaMethod* signal)
///
void k_pagewidgetitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetItem*
/// @param callback void func(KPageWidgetItem* self, const char* objectName)
///
void k_pagewidgetitem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpagewidgetitem.html#dtor.KPageWidgetItem)
///
/// Delete this object from C++ memory.
///
/// @param self KPageWidgetItem*
///
void k_pagewidgetitem_delete(void* self);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html)

/// k_pagewidgetmodel_new constructs a new KPageWidgetModel object.
///
KPageWidgetModel* k_pagewidgetmodel_new();

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html)

/// k_pagewidgetmodel_new2 constructs a new KPageWidgetModel object.
///
/// @param parent QObject*
///
KPageWidgetModel* k_pagewidgetmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KPageWidgetModel*
///
const QMetaObject* k_pagewidgetmodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback const QMetaObject* func()
///
void k_pagewidgetmodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
///
const QMetaObject* k_pagewidgetmodel_qbase_meta_object(void* self);

/// @param self KPageWidgetModel*
/// @param param1 const char*
///
void* k_pagewidgetmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback void* func(KPageWidgetModel* self, const char* param1)
///
void k_pagewidgetmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param param1 const char*
///
void* k_pagewidgetmodel_qbase_metacast(void* self, const char* param1);

/// @param self KPageWidgetModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pagewidgetmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func(KPageWidgetModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_pagewidgetmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pagewidgetmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_pagewidgetmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addPage)
///
/// @param self KPageWidgetModel*
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_pagewidgetmodel_add_page(void* self, void* widget, const char* name);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addPage)
///
/// @param self KPageWidgetModel*
/// @param item KPageWidgetItem*
///
void k_pagewidgetmodel_add_page2(void* self, void* item);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#insertPage)
///
/// @param self KPageWidgetModel*
/// @param before KPageWidgetItem*
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_pagewidgetmodel_insert_page(void* self, void* before, void* widget, const char* name);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#insertPage)
///
/// @param self KPageWidgetModel*
/// @param before KPageWidgetItem*
/// @param item KPageWidgetItem*
///
void k_pagewidgetmodel_insert_page2(void* self, void* before, void* item);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addSubPage)
///
/// @param self KPageWidgetModel*
/// @param parent KPageWidgetItem*
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_pagewidgetmodel_add_sub_page(void* self, void* parent, void* widget, const char* name);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addSubPage)
///
/// @param self KPageWidgetModel*
/// @param parent KPageWidgetItem*
/// @param item KPageWidgetItem*
///
void k_pagewidgetmodel_add_sub_page2(void* self, void* parent, void* item);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#removePage)
///
/// @param self KPageWidgetModel*
/// @param item KPageWidgetItem*
///
void k_pagewidgetmodel_remove_page(void* self, void* item);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#columnCount)
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
int32_t k_pagewidgetmodel_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func(KPageWidgetModel* self, QModelIndex* parent)
///
void k_pagewidgetmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
int32_t k_pagewidgetmodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#data)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_pagewidgetmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback QVariant* func(KPageWidgetModel* self, QModelIndex* index, int role)
///
void k_pagewidgetmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#data)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_pagewidgetmodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#setData)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_pagewidgetmodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_pagewidgetmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#setData)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_pagewidgetmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#flags)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_pagewidgetmodel_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func(KPageWidgetModel* self, QModelIndex* index)
///
void k_pagewidgetmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#flags)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_pagewidgetmodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_pagewidgetmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback QModelIndex* func(KPageWidgetModel* self, int row, int column, QModelIndex* parent)
///
void k_pagewidgetmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_pagewidgetmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#parent)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
QModelIndex* k_pagewidgetmodel_parent(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback QModelIndex* func(KPageWidgetModel* self, QModelIndex* index)
///
void k_pagewidgetmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
QModelIndex* k_pagewidgetmodel_qbase_parent(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#rowCount)
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
int32_t k_pagewidgetmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func(KPageWidgetModel* self, QModelIndex* parent)
///
void k_pagewidgetmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
int32_t k_pagewidgetmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#item)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
KPageWidgetItem* k_pagewidgetmodel_item(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
///
/// @param self KPageWidgetModel*
/// @param item KPageWidgetItem*
///
QModelIndex* k_pagewidgetmodel_index2(void* self, void* item);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#toggled)
///
/// @param self KPageWidgetModel*
/// @param page KPageWidgetItem*
/// @param checked bool
///
void k_pagewidgetmodel_toggled(void* self, void* page, bool checked);

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#toggled)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, KPageWidgetItem* page, bool checked)
///
void k_pagewidgetmodel_on_toggled(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_pagewidgetmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_pagewidgetmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
///
bool k_pagewidgetmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KPageWidgetModel*
/// @param row int
///
bool k_pagewidgetmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KPageWidgetModel*
/// @param column int
///
bool k_pagewidgetmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KPageWidgetModel*
/// @param row int
///
bool k_pagewidgetmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KPageWidgetModel*
/// @param column int
///
bool k_pagewidgetmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_pagewidgetmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_pagewidgetmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
bool k_pagewidgetmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KPageWidgetModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_pagewidgetmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_pagewidgetmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KPageWidgetModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_pagewidgetmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self)
///
void k_pagewidgetmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self)
///
void k_pagewidgetmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_pagewidgetmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KPageWidgetModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_pagewidgetmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_pagewidgetmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KPageWidgetModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_pagewidgetmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_pagewidgetmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KPageWidgetModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_pagewidgetmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_pagewidgetmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KPageWidgetModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_pagewidgetmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_pagewidgetmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KPageWidgetModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_pagewidgetmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_pagewidgetmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPageWidgetModel*
///
const char* k_pagewidgetmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPageWidgetModel*
/// @param name char*
///
void k_pagewidgetmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPageWidgetModel*
/// @param b bool
///
bool k_pagewidgetmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPageWidgetModel*
///
QThread* k_pagewidgetmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPageWidgetModel*
/// @param thread QThread*
///
bool k_pagewidgetmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetModel*
/// @param interval int
///
int32_t k_pagewidgetmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetModel*
/// @param time int64_t of nanoseconds
///
int32_t k_pagewidgetmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPageWidgetModel*
/// @param id int
///
void k_pagewidgetmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPageWidgetModel*
/// @param id enum Qt__TimerId
///
void k_pagewidgetmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPageWidgetModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_pagewidgetmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KPageWidgetModel*
/// @param parent QObject*
///
void k_pagewidgetmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPageWidgetModel*
/// @param filterObj QObject*
///
void k_pagewidgetmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPageWidgetModel*
/// @param obj QObject*
///
void k_pagewidgetmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_pagewidgetmodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_pagewidgetmodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPageWidgetModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_pagewidgetmodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pagewidgetmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_pagewidgetmodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetModel*
/// @param receiver QObject*
///
bool k_pagewidgetmodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_pagewidgetmodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPageWidgetModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_pagewidgetmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPageWidgetModel*
/// @param name const char*
///
QVariant* k_pagewidgetmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPageWidgetModel*
///
const char** k_pagewidgetmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPageWidgetModel*
///
QBindingStorage* k_pagewidgetmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPageWidgetModel*
///
const QBindingStorage* k_pagewidgetmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self)
///
void k_pagewidgetmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPageWidgetModel*
/// @param classname const char*
///
bool k_pagewidgetmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_pagewidgetmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPageWidgetModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_pagewidgetmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_pagewidgetmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_pagewidgetmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPageWidgetModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_pagewidgetmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetModel*
/// @param signal const char*
///
bool k_pagewidgetmodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_pagewidgetmodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pagewidgetmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPageWidgetModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pagewidgetmodel_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetModel*
/// @param param1 QObject*
///
void k_pagewidgetmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QObject* param1)
///
void k_pagewidgetmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_pagewidgetmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_pagewidgetmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QModelIndex* func(KPageWidgetModel* self, int row, int column, QModelIndex* idx)
///
void k_pagewidgetmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* parent)
///
void k_pagewidgetmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_pagewidgetmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_pagewidgetmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QVariant* func(KPageWidgetModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_pagewidgetmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_pagewidgetmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_pagewidgetmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_pagewidgetmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_pagewidgetmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_pagewidgetmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback libqt_map of int to QVariant* func(KPageWidgetModel* self, QModelIndex* index)
///
void k_pagewidgetmodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_pagewidgetmodel_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_pagewidgetmodel_qbase_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_pagewidgetmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
bool k_pagewidgetmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
bool k_pagewidgetmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* index)
///
void k_pagewidgetmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
const char** k_pagewidgetmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
const char** k_pagewidgetmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback const char** func()
///
void k_pagewidgetmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_pagewidgetmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_pagewidgetmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QMimeData* func(KPageWidgetModel* self, libqt_list of QModelIndex* indexes)
///
void k_pagewidgetmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_pagewidgetmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_pagewidgetmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_pagewidgetmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_pagewidgetmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func()
///
void k_pagewidgetmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_pagewidgetmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_pagewidgetmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func()
///
void k_pagewidgetmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, int row, int count, QModelIndex* parent)
///
void k_pagewidgetmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, int column, int count, QModelIndex* parent)
///
void k_pagewidgetmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, int row, int count, QModelIndex* parent)
///
void k_pagewidgetmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, int column, int count, QModelIndex* parent)
///
void k_pagewidgetmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_pagewidgetmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_pagewidgetmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_pagewidgetmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_pagewidgetmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_pagewidgetmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_pagewidgetmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
void k_pagewidgetmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
void k_pagewidgetmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent)
///
void k_pagewidgetmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
///
bool k_pagewidgetmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* parent)
///
void k_pagewidgetmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_pagewidgetmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_pagewidgetmodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, int column, enum Qt__SortOrder order)
///
void k_pagewidgetmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
QModelIndex* k_pagewidgetmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
QModelIndex* k_pagewidgetmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QModelIndex* func(KPageWidgetModel* self, QModelIndex* index)
///
void k_pagewidgetmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_pagewidgetmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_pagewidgetmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback libqt_list of QModelIndex* func(KPageWidgetModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_pagewidgetmodel_on_match(void* self, libqt_list (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
QSize* k_pagewidgetmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
///
QSize* k_pagewidgetmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QSize* func(KPageWidgetModel* self, QModelIndex* index)
///
void k_pagewidgetmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_pagewidgetmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_pagewidgetmodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback libqt_map of int to char* func()
///
void k_pagewidgetmodel_on_role_names(void* self, libqt_map (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_pagewidgetmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_pagewidgetmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_pagewidgetmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
bool k_pagewidgetmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func()
///
void k_pagewidgetmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QEvent*
///
bool k_pagewidgetmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QEvent*
///
bool k_pagewidgetmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QEvent* event)
///
void k_pagewidgetmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_pagewidgetmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_pagewidgetmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QObject* watched, QEvent* event)
///
void k_pagewidgetmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QTimerEvent*
///
void k_pagewidgetmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QTimerEvent*
///
void k_pagewidgetmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QTimerEvent* event)
///
void k_pagewidgetmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QChildEvent*
///
void k_pagewidgetmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QChildEvent*
///
void k_pagewidgetmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QChildEvent* event)
///
void k_pagewidgetmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QEvent*
///
void k_pagewidgetmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param event QEvent*
///
void k_pagewidgetmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QEvent* event)
///
void k_pagewidgetmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal QMetaMethod*
///
void k_pagewidgetmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal QMetaMethod*
///
void k_pagewidgetmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QMetaMethod* signal)
///
void k_pagewidgetmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal QMetaMethod*
///
void k_pagewidgetmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal QMetaMethod*
///
void k_pagewidgetmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QMetaMethod* signal)
///
void k_pagewidgetmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
///
QModelIndex* k_pagewidgetmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
///
QModelIndex* k_pagewidgetmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QModelIndex* func(KPageWidgetModel* self, int row, int column)
///
void k_pagewidgetmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_pagewidgetmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_pagewidgetmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_pagewidgetmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_pagewidgetmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_pagewidgetmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_pagewidgetmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_pagewidgetmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_pagewidgetmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_pagewidgetmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_pagewidgetmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_pagewidgetmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_pagewidgetmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_pagewidgetmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func()
///
void k_pagewidgetmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_pagewidgetmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_pagewidgetmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* from, QModelIndex* to)
///
void k_pagewidgetmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_pagewidgetmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_pagewidgetmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_pagewidgetmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_pagewidgetmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_pagewidgetmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback libqt_list of QModelIndex* func()
///
void k_pagewidgetmodel_on_persistent_index_list(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
QObject* k_pagewidgetmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
QObject* k_pagewidgetmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback QObject* func()
///
void k_pagewidgetmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
///
int32_t k_pagewidgetmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
///
int32_t k_pagewidgetmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func()
///
void k_pagewidgetmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal const char*
///
int32_t k_pagewidgetmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal const char*
///
int32_t k_pagewidgetmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback int32_t func(KPageWidgetModel* self, const char* signal)
///
void k_pagewidgetmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal QMetaMethod*
///
bool k_pagewidgetmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param signal QMetaMethod*
///
bool k_pagewidgetmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPageWidgetModel*
/// @param callback bool func(KPageWidgetModel* self, QMetaMethod* signal)
///
void k_pagewidgetmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* parent, int first, int last)
///
void k_pagewidgetmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self)
///
void k_pagewidgetmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self)
///
void k_pagewidgetmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_pagewidgetmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_pagewidgetmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_pagewidgetmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_pagewidgetmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPageWidgetModel*
/// @param callback void func(KPageWidgetModel* self, const char* objectName)
///
void k_pagewidgetmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#dtor.KPageWidgetModel)
///
/// Delete this object from C++ memory.
///
/// @param self KPageWidgetModel*
///
void k_pagewidgetmodel_delete(void* self);

#endif
