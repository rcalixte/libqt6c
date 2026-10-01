#pragma once
#ifndef LIBQGRAPHICSANCHORLAYOUT_H
#define LIBQGRAPHICSANCHORLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGraphicsAnchor*
///
const QMetaObject* q_graphicsanchor_meta_object(const void* self);

/// @param self QGraphicsAnchor*
/// @param param1 const char*
///
void* q_graphicsanchor_metacast(void* self, const char* param1);

/// @param self QGraphicsAnchor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsanchor_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsanchor_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSpacing)
///
/// @param self QGraphicsAnchor*
/// @param spacing double
///
void q_graphicsanchor_set_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#unsetSpacing)
///
/// @param self QGraphicsAnchor*
///
void q_graphicsanchor_unset_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#spacing)
///
/// @param self const QGraphicsAnchor*
///
double q_graphicsanchor_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSizePolicy)
///
/// @param self QGraphicsAnchor*
/// @param policy enum QSizePolicy__Policy
///
void q_graphicsanchor_set_size_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#sizePolicy)
///
/// @param self const QGraphicsAnchor*
///
/// @return enum QSizePolicy__Policy
///
int32_t q_graphicsanchor_size_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsanchor_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsanchor_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QGraphicsAnchor*
/// @param event QEvent*
///
bool q_graphicsanchor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QGraphicsAnchor*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsanchor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsAnchor*
///
const char* q_graphicsanchor_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsAnchor*
/// @param name const char*
///
void q_graphicsanchor_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGraphicsAnchor*
///
bool q_graphicsanchor_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGraphicsAnchor*
///
bool q_graphicsanchor_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGraphicsAnchor*
///
bool q_graphicsanchor_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGraphicsAnchor*
///
bool q_graphicsanchor_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsAnchor*
/// @param b bool
///
bool q_graphicsanchor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGraphicsAnchor*
///
QThread* q_graphicsanchor_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsAnchor*
/// @param thread QThread*
///
bool q_graphicsanchor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsAnchor*
/// @param interval int
///
int32_t q_graphicsanchor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsAnchor*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsanchor_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsAnchor*
/// @param id int
///
void q_graphicsanchor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsAnchor*
/// @param id enum Qt__TimerId
///
void q_graphicsanchor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGraphicsAnchor*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsanchor_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsAnchor*
/// @param parent QObject*
///
void q_graphicsanchor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsAnchor*
/// @param filterObj QObject*
///
void q_graphicsanchor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsAnchor*
/// @param obj QObject*
///
void q_graphicsanchor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsanchor_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsanchor_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsAnchor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsanchor_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsanchor_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsanchor_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsAnchor*
///
bool q_graphicsanchor_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsAnchor*
/// @param receiver QObject*
///
bool q_graphicsanchor_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsanchor_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGraphicsAnchor*
///
void q_graphicsanchor_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGraphicsAnchor*
///
void q_graphicsanchor_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsAnchor*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsanchor_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGraphicsAnchor*
/// @param name const char*
///
QVariant* q_graphicsanchor_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGraphicsAnchor*
///
const char** q_graphicsanchor_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsAnchor*
///
QBindingStorage* q_graphicsanchor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGraphicsAnchor*
///
const QBindingStorage* q_graphicsanchor_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsAnchor*
///
void q_graphicsanchor_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsAnchor*
/// @param callback void func(QGraphicsAnchor* self)
///
void q_graphicsanchor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGraphicsAnchor*
///
QObject* q_graphicsanchor_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGraphicsAnchor*
/// @param classname const char*
///
bool q_graphicsanchor_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsAnchor*
///
void q_graphicsanchor_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsAnchor*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsanchor_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsAnchor*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsanchor_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsanchor_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicsanchor_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsAnchor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsanchor_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsAnchor*
/// @param signal const char*
///
bool q_graphicsanchor_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsAnchor*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicsanchor_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsAnchor*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsanchor_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsAnchor*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsanchor_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsAnchor*
/// @param param1 QObject*
///
void q_graphicsanchor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsAnchor*
/// @param callback void func(QGraphicsAnchor* self, QObject* param1)
///
void q_graphicsanchor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsAnchor*
/// @param callback void func(QGraphicsAnchor* self, const char* objectName)
///
void q_graphicsanchor_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#dtor.QGraphicsAnchor)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsAnchor*
///
void q_graphicsanchor_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html)

/// q_graphicsanchorlayout_new constructs a new QGraphicsAnchorLayout object.
///
QGraphicsAnchorLayout* q_graphicsanchorlayout_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html)

/// q_graphicsanchorlayout_new2 constructs a new QGraphicsAnchorLayout object.
///
/// @param parent QGraphicsLayoutItem*
///
QGraphicsAnchorLayout* q_graphicsanchorlayout_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchor)
///
/// @param self QGraphicsAnchorLayout*
/// @param firstItem QGraphicsLayoutItem*
/// @param firstEdge enum Qt__AnchorPoint
/// @param secondItem QGraphicsLayoutItem*
/// @param secondEdge enum Qt__AnchorPoint
///
QGraphicsAnchor* q_graphicsanchorlayout_add_anchor(void* self, void* firstItem, int32_t firstEdge, void* secondItem, int32_t secondEdge);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#anchor)
///
/// @param self QGraphicsAnchorLayout*
/// @param firstItem QGraphicsLayoutItem*
/// @param firstEdge enum Qt__AnchorPoint
/// @param secondItem QGraphicsLayoutItem*
/// @param secondEdge enum Qt__AnchorPoint
///
QGraphicsAnchor* q_graphicsanchorlayout_anchor(void* self, void* firstItem, int32_t firstEdge, void* secondItem, int32_t secondEdge);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addCornerAnchors)
///
/// @param self QGraphicsAnchorLayout*
/// @param firstItem QGraphicsLayoutItem*
/// @param firstCorner enum Qt__Corner
/// @param secondItem QGraphicsLayoutItem*
/// @param secondCorner enum Qt__Corner
///
void q_graphicsanchorlayout_add_corner_anchors(void* self, void* firstItem, int32_t firstCorner, void* secondItem, int32_t secondCorner);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
///
/// @param self QGraphicsAnchorLayout*
/// @param firstItem QGraphicsLayoutItem*
/// @param secondItem QGraphicsLayoutItem*
///
void q_graphicsanchorlayout_add_anchors(void* self, void* firstItem, void* secondItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setHorizontalSpacing)
///
/// @param self QGraphicsAnchorLayout*
/// @param spacing double
///
void q_graphicsanchorlayout_set_horizontal_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setVerticalSpacing)
///
/// @param self QGraphicsAnchorLayout*
/// @param spacing double
///
void q_graphicsanchorlayout_set_vertical_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setSpacing)
///
/// @param self QGraphicsAnchorLayout*
/// @param spacing double
///
void q_graphicsanchorlayout_set_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#horizontalSpacing)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_horizontal_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#verticalSpacing)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_vertical_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
///
/// @param self QGraphicsAnchorLayout*
/// @param index int
///
void q_graphicsanchorlayout_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, int index)
///
void q_graphicsanchorlayout_on_remove_at(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
///
/// Base class method implementation
///
/// @param self QGraphicsAnchorLayout*
/// @param index int
///
void q_graphicsanchorlayout_super_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
///
/// @param self QGraphicsAnchorLayout*
/// @param rect QRectF*
///
void q_graphicsanchorlayout_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, QRectF* rect)
///
void q_graphicsanchorlayout_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsAnchorLayout*
/// @param rect QRectF*
///
void q_graphicsanchorlayout_super_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
///
/// @param self const QGraphicsAnchorLayout*
///
int32_t q_graphicsanchorlayout_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback int32_t func(const QGraphicsAnchorLayout* self)
///
void q_graphicsanchorlayout_on_count(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
///
/// Base class method implementation
///
/// @param self const QGraphicsAnchorLayout*
///
int32_t q_graphicsanchorlayout_super_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
///
/// @param self const QGraphicsAnchorLayout*
/// @param index int
///
QGraphicsLayoutItem* q_graphicsanchorlayout_item_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback QGraphicsLayoutItem* func(const QGraphicsAnchorLayout* self, int index)
///
void q_graphicsanchorlayout_on_item_at(void* self, QGraphicsLayoutItem* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self const QGraphicsAnchorLayout*
/// @param index int
///
QGraphicsLayoutItem* q_graphicsanchorlayout_super_item_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
///
/// @param self QGraphicsAnchorLayout*
///
void q_graphicsanchorlayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self)
///
void q_graphicsanchorlayout_on_invalidate(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QGraphicsAnchorLayout*
///
void q_graphicsanchorlayout_super_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
///
/// @param self const QGraphicsAnchorLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicsanchorlayout_size_hint(const void* self, int32_t which, const void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback QSizeF* func(const QGraphicsAnchorLayout* self, enum Qt__SizeHint which, QSizeF* constraint)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsanchorlayout_on_size_hint(void* self, QSizeF* (*callback)(const void*, int32_t, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QGraphicsAnchorLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicsanchorlayout_super_size_hint(const void* self, int32_t which, const void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
///
/// @param self QGraphicsAnchorLayout*
/// @param firstItem QGraphicsLayoutItem*
/// @param secondItem QGraphicsLayoutItem*
/// @param orientations flag of enum Qt__Orientation
///
void q_graphicsanchorlayout_add_anchors3(void* self, void* firstItem, void* secondItem, int32_t orientations);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// @param self QGraphicsAnchorLayout*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_graphicsanchorlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// @param self QGraphicsAnchorLayout*
///
void q_graphicsanchorlayout_activate(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// @param self const QGraphicsAnchorLayout*
///
bool q_graphicsanchorlayout_is_activated(const void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// @param enable bool
///
void q_graphicsanchorlayout_set_instant_invalidate_propagation(bool enable);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
bool q_graphicsanchorlayout_instant_invalidate_propagation();

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsAnchorLayout*
/// @param policy QSizePolicy*
///
void q_graphicsanchorlayout_set_size_policy(void* self, const void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsAnchorLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_graphicsanchorlayout_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self const QGraphicsAnchorLayout*
///
QSizePolicy* q_graphicsanchorlayout_size_policy(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsAnchorLayout*
/// @param size QSizeF*
///
void q_graphicsanchorlayout_set_minimum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsAnchorLayout*
/// @param w double
/// @param h double
///
void q_graphicsanchorlayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self const QGraphicsAnchorLayout*
///
QSizeF* q_graphicsanchorlayout_minimum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsAnchorLayout*
/// @param width double
///
void q_graphicsanchorlayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_minimum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsAnchorLayout*
/// @param height double
///
void q_graphicsanchorlayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_minimum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsAnchorLayout*
/// @param size QSizeF*
///
void q_graphicsanchorlayout_set_preferred_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsAnchorLayout*
/// @param w double
/// @param h double
///
void q_graphicsanchorlayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self const QGraphicsAnchorLayout*
///
QSizeF* q_graphicsanchorlayout_preferred_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsAnchorLayout*
/// @param width double
///
void q_graphicsanchorlayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_preferred_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsAnchorLayout*
/// @param height double
///
void q_graphicsanchorlayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_preferred_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsAnchorLayout*
/// @param size QSizeF*
///
void q_graphicsanchorlayout_set_maximum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsAnchorLayout*
/// @param w double
/// @param h double
///
void q_graphicsanchorlayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self const QGraphicsAnchorLayout*
///
QSizeF* q_graphicsanchorlayout_maximum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsAnchorLayout*
/// @param width double
///
void q_graphicsanchorlayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_maximum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsAnchorLayout*
/// @param height double
///
void q_graphicsanchorlayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self const QGraphicsAnchorLayout*
///
double q_graphicsanchorlayout_maximum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self const QGraphicsAnchorLayout*
///
QRectF* q_graphicsanchorlayout_geometry(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self const QGraphicsAnchorLayout*
///
QRectF* q_graphicsanchorlayout_contents_rect(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsAnchorLayout*
/// @param which enum Qt__SizeHint
///
QSizeF* q_graphicsanchorlayout_effective_size_hint(const void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self const QGraphicsAnchorLayout*
///
QGraphicsLayoutItem* q_graphicsanchorlayout_parent_layout_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsAnchorLayout*
/// @param parent QGraphicsLayoutItem*
///
void q_graphicsanchorlayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self const QGraphicsAnchorLayout*
///
bool q_graphicsanchorlayout_is_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self const QGraphicsAnchorLayout*
///
QGraphicsItem* q_graphicsanchorlayout_graphics_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self const QGraphicsAnchorLayout*
///
bool q_graphicsanchorlayout_owned_by_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsAnchorLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_graphicsanchorlayout_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsAnchorLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicsanchorlayout_effective_size_hint2(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsAnchorLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicsanchorlayout_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsAnchorLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicsanchorlayout_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom)
///
void q_graphicsanchorlayout_on_get_contents_margins(void* self, void (*callback)(const void*, double*, double*, double*, double*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
///
void q_graphicsanchorlayout_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
///
void q_graphicsanchorlayout_super_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self)
///
void q_graphicsanchorlayout_on_update_geometry(void* self, void (*callback)(void*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param e QEvent*
///
void q_graphicsanchorlayout_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param e QEvent*
///
void q_graphicsanchorlayout_super_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, QEvent* e)
///
void q_graphicsanchorlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsAnchorLayout*
///
bool q_graphicsanchorlayout_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsAnchorLayout*
///
bool q_graphicsanchorlayout_super_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback bool func(QGraphicsAnchorLayout* self)
///
void q_graphicsanchorlayout_on_is_empty(void* self, bool (*callback)(const void*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicsanchorlayout_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicsanchorlayout_super_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem)
///
void q_graphicsanchorlayout_on_add_child_layout_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param item QGraphicsItem*
///
void q_graphicsanchorlayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param item QGraphicsItem*
///
void q_graphicsanchorlayout_super_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, QGraphicsItem* item)
///
void q_graphicsanchorlayout_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param ownedByLayout bool
///
void q_graphicsanchorlayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param ownedByLayout bool
///
void q_graphicsanchorlayout_super_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsAnchorLayout*
/// @param callback void func(QGraphicsAnchorLayout* self, bool ownedByLayout)
///
void q_graphicsanchorlayout_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#dtor.QGraphicsAnchorLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsAnchorLayout*
///
void q_graphicsanchorlayout_delete(void* self);

#endif
