#pragma once
#ifndef MULTIMEDIA_LIBQGRAPHICSVIDEOITEM_H
#define MULTIMEDIA_LIBQGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html)

/// q_graphicsvideoitem_new constructs a new QGraphicsVideoItem object.
///
QGraphicsVideoItem* q_graphicsvideoitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html)

/// q_graphicsvideoitem_new2 constructs a new QGraphicsVideoItem object.
///
/// @param parent QGraphicsItem*
///
QGraphicsVideoItem* q_graphicsvideoitem_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGraphicsVideoItem*
///
const QMetaObject* q_graphicsvideoitem_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsVideoItem*
/// @param callback const QMetaObject* func(const QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGraphicsVideoItem*
///
const QMetaObject* q_graphicsvideoitem_super_meta_object(const void* self);

/// @param self QGraphicsVideoItem*
/// @param param1 const char*
///
void* q_graphicsvideoitem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsVideoItem*
/// @param callback void* func(QGraphicsVideoItem* self, const char* param1)
///
void q_graphicsvideoitem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsVideoItem*
/// @param param1 const char*
///
void* q_graphicsvideoitem_super_metacast(void* self, const char* param1);

/// @param self QGraphicsVideoItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsvideoitem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsVideoItem*
/// @param callback int32_t func(QGraphicsVideoItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsvideoitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsVideoItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsvideoitem_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsvideoitem_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#videoSink)
///
/// @param self const QGraphicsVideoItem*
///
QVideoSink* q_graphicsvideoitem_video_sink(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#aspectRatioMode)
///
/// @param self const QGraphicsVideoItem*
///
/// @return enum Qt__AspectRatioMode
///
int32_t q_graphicsvideoitem_aspect_ratio_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setAspectRatioMode)
///
/// @param self QGraphicsVideoItem*
/// @param mode enum Qt__AspectRatioMode
///
void q_graphicsvideoitem_set_aspect_ratio_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#offset)
///
/// @param self const QGraphicsVideoItem*
///
QPointF* q_graphicsvideoitem_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setOffset)
///
/// @param self QGraphicsVideoItem*
/// @param offset QPointF*
///
void q_graphicsvideoitem_set_offset(void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#size)
///
/// @param self const QGraphicsVideoItem*
///
QSizeF* q_graphicsvideoitem_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setSize)
///
/// @param self QGraphicsVideoItem*
/// @param size QSizeF*
///
void q_graphicsvideoitem_set_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSize)
///
/// @param self const QGraphicsVideoItem*
///
QSizeF* q_graphicsvideoitem_native_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// @param self const QGraphicsVideoItem*
///
QRectF* q_graphicsvideoitem_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsVideoItem*
/// @param callback QRectF* func(const QGraphicsVideoItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsvideoitem_on_bounding_rect(const void* self, QRectF* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// Base class method implementation
///
/// @param self const QGraphicsVideoItem*
///
QRectF* q_graphicsvideoitem_super_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// @param self QGraphicsVideoItem*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicsvideoitem_paint(void* self, void* painter, const void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_graphicsvideoitem_on_paint(void* self, void (*callback)(void*, void*, const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// Base class method implementation
///
/// @param self QGraphicsVideoItem*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicsvideoitem_super_paint(void* self, void* painter, const void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// @param self const QGraphicsVideoItem*
///
int32_t q_graphicsvideoitem_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsVideoItem*
/// @param callback int32_t func(const QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_type(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// Base class method implementation
///
/// @param self const QGraphicsVideoItem*
///
int32_t q_graphicsvideoitem_super_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
///
/// @param self QGraphicsVideoItem*
/// @param size QSizeF*
///
void q_graphicsvideoitem_native_size_changed(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QSizeF* size)
///
void q_graphicsvideoitem_on_native_size_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// @param self QGraphicsVideoItem*
/// @param event QTimerEvent*
///
void q_graphicsvideoitem_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QTimerEvent* event)
///
void q_graphicsvideoitem_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsVideoItem*
/// @param event QTimerEvent*
///
void q_graphicsvideoitem_super_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// @param self QGraphicsVideoItem*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_graphicsvideoitem_item_change(void* self, int32_t change, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsVideoItem*
/// @param callback QVariant* func(QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsvideoitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// Base class method implementation
///
/// @param self QGraphicsVideoItem*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_graphicsvideoitem_super_item_change(void* self, int32_t change, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsvideoitem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsvideoitem_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsObject
///
/// Upcasts to a QGraphicsItem object
///
/// @param self QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_as_q_graphics_item(void* self);

/// Inherited from QGraphicsObject
///
/// Downcasts to a QGraphicsVideoItem object
///
/// @param _qgraphicsitem QGraphicsItem*
///
QGraphicsVideoItem* q_graphicsvideoitem_from_q_graphics_item(void* _qgraphicsitem);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsVideoItem*
/// @param type enum Qt__GestureType
///
void q_graphicsvideoitem_grab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QGraphicsVideoItem*
/// @param type enum Qt__GestureType
///
void q_graphicsvideoitem_ungrab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsVideoItem*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_graphicsvideoitem_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsVideoItem*
///
const char* q_graphicsvideoitem_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsVideoItem*
/// @param name const char*
///
void q_graphicsvideoitem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsVideoItem*
/// @param b bool
///
bool q_graphicsvideoitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGraphicsVideoItem*
///
QThread* q_graphicsvideoitem_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsVideoItem*
/// @param thread QThread*
///
bool q_graphicsvideoitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsVideoItem*
/// @param interval int
///
int32_t q_graphicsvideoitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsVideoItem*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsvideoitem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsVideoItem*
/// @param id int
///
void q_graphicsvideoitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsVideoItem*
/// @param id enum Qt__TimerId
///
void q_graphicsvideoitem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGraphicsVideoItem*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsvideoitem_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsVideoItem*
/// @param parent QObject*
///
void q_graphicsvideoitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsVideoItem*
/// @param filterObj QObject*
///
void q_graphicsvideoitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsVideoItem*
/// @param obj QObject*
///
void q_graphicsvideoitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsvideoitem_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsvideoitem_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsVideoItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsvideoitem_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsvideoitem_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsvideoitem_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsVideoItem*
/// @param receiver QObject*
///
bool q_graphicsvideoitem_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsvideoitem_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGraphicsVideoItem*
///
void q_graphicsvideoitem_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGraphicsVideoItem*
///
void q_graphicsvideoitem_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsVideoItem*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsvideoitem_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGraphicsVideoItem*
/// @param name const char*
///
QVariant* q_graphicsvideoitem_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGraphicsVideoItem*
///
const char** q_graphicsvideoitem_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsVideoItem*
///
QBindingStorage* q_graphicsvideoitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGraphicsVideoItem*
///
const QBindingStorage* q_graphicsvideoitem_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGraphicsVideoItem*
///
QObject* q_graphicsvideoitem_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGraphicsVideoItem*
/// @param classname const char*
///
bool q_graphicsvideoitem_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsVideoItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsvideoitem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsVideoItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsvideoitem_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsvideoitem_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicsvideoitem_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsVideoItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsvideoitem_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsVideoItem*
/// @param signal const char*
///
bool q_graphicsvideoitem_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsVideoItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicsvideoitem_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsVideoItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsvideoitem_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsVideoItem*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsvideoitem_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsVideoItem*
/// @param param1 QObject*
///
void q_graphicsvideoitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QObject* param1)
///
void q_graphicsvideoitem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsScene* q_graphicsvideoitem_scene(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_parent_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_top_level_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsObject* q_graphicsvideoitem_parent_object(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsWidget* q_graphicsvideoitem_parent_widget(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsWidget* q_graphicsvideoitem_top_level_widget(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsWidget* q_graphicsvideoitem_window(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_panel(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QGraphicsVideoItem*
/// @param parent QGraphicsItem*
///
void q_graphicsvideoitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self const QGraphicsVideoItem*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsvideoitem_child_items(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_widget(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_window(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_panel(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsVideoItem*
///
QGraphicsObject* q_graphicsvideoitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self const QGraphicsVideoItem*
///
const QGraphicsObject* q_graphicsvideoitem_to_graphics_object2(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItemGroup* q_graphicsvideoitem_group(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QGraphicsVideoItem*
/// @param group QGraphicsItemGroup*
///
void q_graphicsvideoitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self const QGraphicsVideoItem*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
///
int32_t q_graphicsvideoitem_flags(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsVideoItem*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
///
void q_graphicsvideoitem_set_flag(void* self, int32_t flag);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QGraphicsVideoItem*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
///
void q_graphicsvideoitem_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self const QGraphicsVideoItem*
///
/// @return enum QGraphicsItem__CacheMode
///
int32_t q_graphicsvideoitem_cache_mode(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsVideoItem*
/// @param mode enum QGraphicsItem__CacheMode
///
void q_graphicsvideoitem_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self const QGraphicsVideoItem*
///
/// @return enum QGraphicsItem__PanelModality
///
int32_t q_graphicsvideoitem_panel_modality(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QGraphicsVideoItem*
/// @param panelModality enum QGraphicsItem__PanelModality
///
void q_graphicsvideoitem_set_panel_modality(void* self, int32_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_blocked_by_modal_panel(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsVideoItem*
///
const char* q_graphicsvideoitem_tool_tip(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QGraphicsVideoItem*
/// @param toolTip const char*
///
void q_graphicsvideoitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self const QGraphicsVideoItem*
///
QCursor* q_graphicsvideoitem_cursor(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QGraphicsVideoItem*
/// @param cursor QCursor*
///
void q_graphicsvideoitem_set_cursor(void* self, const void* cursor);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_has_cursor(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_visible(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self const QGraphicsVideoItem*
/// @param parent QGraphicsItem*
///
bool q_graphicsvideoitem_is_visible_to(const void* self, const void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QGraphicsVideoItem*
/// @param visible bool
///
void q_graphicsvideoitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_enabled(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QGraphicsVideoItem*
/// @param enabled bool
///
void q_graphicsvideoitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_selected(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QGraphicsVideoItem*
/// @param selected bool
///
void q_graphicsvideoitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_accept_drops(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QGraphicsVideoItem*
/// @param on bool
///
void q_graphicsvideoitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_opacity(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_effective_opacity(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QGraphicsVideoItem*
/// @param opacity double
///
void q_graphicsvideoitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsEffect* q_graphicsvideoitem_graphics_effect(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QGraphicsVideoItem*
/// @param effect QGraphicsEffect*
///
void q_graphicsvideoitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self const QGraphicsVideoItem*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_graphicsvideoitem_accepted_mouse_buttons(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QGraphicsVideoItem*
/// @param buttons flag of enum Qt__MouseButton
///
void q_graphicsvideoitem_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_accept_hover_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QGraphicsVideoItem*
/// @param enabled bool
///
void q_graphicsvideoitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_accept_touch_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QGraphicsVideoItem*
/// @param enabled bool
///
void q_graphicsvideoitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_filters_child_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QGraphicsVideoItem*
/// @param enabled bool
///
void q_graphicsvideoitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_handles_child_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QGraphicsVideoItem*
/// @param enabled bool
///
void q_graphicsvideoitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_active(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QGraphicsVideoItem*
/// @param active bool
///
void q_graphicsvideoitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_has_focus(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_focus_proxy(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QGraphicsVideoItem*
/// @param item QGraphicsItem*
///
void q_graphicsvideoitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_focus_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self const QGraphicsVideoItem*
///
QGraphicsItem* q_graphicsvideoitem_focus_scope_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self const QGraphicsVideoItem*
///
QPointF* q_graphicsvideoitem_pos(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_x(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QGraphicsVideoItem*
/// @param x double
///
void q_graphicsvideoitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_y(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QGraphicsVideoItem*
/// @param y double
///
void q_graphicsvideoitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self const QGraphicsVideoItem*
///
QPointF* q_graphicsvideoitem_scene_pos(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsVideoItem*
/// @param pos QPointF*
///
void q_graphicsvideoitem_set_pos(void* self, const void* pos);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsVideoItem*
/// @param x double
/// @param y double
///
void q_graphicsvideoitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QGraphicsVideoItem*
/// @param dx double
/// @param dy double
///
void q_graphicsvideoitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsvideoitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self const QGraphicsVideoItem*
///
QTransform* q_graphicsvideoitem_transform(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self const QGraphicsVideoItem*
///
QTransform* q_graphicsvideoitem_scene_transform(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self const QGraphicsVideoItem*
/// @param viewportTransform QTransform*
///
QTransform* q_graphicsvideoitem_device_transform(const void* self, const void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self const QGraphicsVideoItem*
/// @param other QGraphicsItem*
///
QTransform* q_graphicsvideoitem_item_transform(const void* self, const void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsVideoItem*
/// @param matrix QTransform*
///
void q_graphicsvideoitem_set_transform(void* self, const void* matrix);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QGraphicsVideoItem*
/// @param angle double
///
void q_graphicsvideoitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_rotation(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QGraphicsVideoItem*
/// @param scale double
///
void q_graphicsvideoitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_scale(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self const QGraphicsVideoItem*
///
/// @return libqt_list of QGraphicsTransform*
///
libqt_list q_graphicsvideoitem_transformations(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QGraphicsVideoItem*
/// @param transformations libqt_list of QGraphicsTransform*
///
void q_graphicsvideoitem_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self const QGraphicsVideoItem*
///
QPointF* q_graphicsvideoitem_transform_origin_point(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsVideoItem*
/// @param origin QPointF*
///
void q_graphicsvideoitem_set_transform_origin_point(void* self, const void* origin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsVideoItem*
/// @param ax double
/// @param ay double
///
void q_graphicsvideoitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_z_value(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QGraphicsVideoItem*
/// @param z double
///
void q_graphicsvideoitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QGraphicsVideoItem*
/// @param sibling QGraphicsItem*
///
void q_graphicsvideoitem_stack_before(void* self, const void* sibling);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self const QGraphicsVideoItem*
///
QRectF* q_graphicsvideoitem_children_bounding_rect(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self const QGraphicsVideoItem*
///
QRectF* q_graphicsvideoitem_scene_bounding_rect(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_clipped(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self const QGraphicsVideoItem*
///
QPainterPath* q_graphicsvideoitem_clip_path(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self const QGraphicsVideoItem*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsvideoitem_colliding_items(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_obscured(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
bool q_graphicsvideoitem_is_obscured2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self const QGraphicsVideoItem*
/// @param itemToDeviceTransform QTransform*
///
QRegion* q_graphicsvideoitem_bounding_region(const void* self, const void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self const QGraphicsVideoItem*
///
double q_graphicsvideoitem_bounding_region_granularity(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QGraphicsVideoItem*
/// @param granularity double
///
void q_graphicsvideoitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
void q_graphicsvideoitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsVideoItem*
/// @param dx double
/// @param dy double
///
void q_graphicsvideoitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_graphicsvideoitem_map_to_item(const void* self, const void* item, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param point QPointF*
///
QPointF* q_graphicsvideoitem_map_to_parent(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param point QPointF*
///
QPointF* q_graphicsvideoitem_map_to_scene(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QPolygonF* q_graphicsvideoitem_map_to_item2(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QPolygonF* q_graphicsvideoitem_map_to_parent2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QPolygonF* q_graphicsvideoitem_map_to_scene2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_graphicsvideoitem_map_rect_to_item(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QRectF* q_graphicsvideoitem_map_rect_to_parent(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QRectF* q_graphicsvideoitem_map_rect_to_scene(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_graphicsvideoitem_map_to_item3(const void* self, const void* item, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_graphicsvideoitem_map_to_parent3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_graphicsvideoitem_map_to_scene3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsvideoitem_map_to_item4(const void* self, const void* item, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsvideoitem_map_to_parent4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsvideoitem_map_to_scene4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_graphicsvideoitem_map_from_item(const void* self, const void* item, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param point QPointF*
///
QPointF* q_graphicsvideoitem_map_from_parent(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param point QPointF*
///
QPointF* q_graphicsvideoitem_map_from_scene(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QPolygonF* q_graphicsvideoitem_map_from_item2(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QPolygonF* q_graphicsvideoitem_map_from_parent2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QPolygonF* q_graphicsvideoitem_map_from_scene2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_graphicsvideoitem_map_rect_from_item(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QRectF* q_graphicsvideoitem_map_rect_from_parent(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
QRectF* q_graphicsvideoitem_map_rect_from_scene(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_graphicsvideoitem_map_from_item3(const void* self, const void* item, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_graphicsvideoitem_map_from_parent3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_graphicsvideoitem_map_from_scene3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsvideoitem_map_from_item4(const void* self, const void* item, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsvideoitem_map_from_parent4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsvideoitem_map_from_scene4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicsvideoitem_map_to_item5(const void* self, const void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicsvideoitem_map_to_parent5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicsvideoitem_map_to_scene5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_graphicsvideoitem_map_to_item6(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_graphicsvideoitem_map_to_parent6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_graphicsvideoitem_map_to_scene6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicsvideoitem_map_rect_to_item2(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicsvideoitem_map_rect_to_parent2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicsvideoitem_map_rect_to_scene2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicsvideoitem_map_from_item5(const void* self, const void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicsvideoitem_map_from_parent5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicsvideoitem_map_from_scene5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_graphicsvideoitem_map_from_item6(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_graphicsvideoitem_map_from_parent6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_graphicsvideoitem_map_from_scene6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicsvideoitem_map_rect_from_item2(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicsvideoitem_map_rect_from_parent2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self const QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicsvideoitem_map_rect_from_scene2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self const QGraphicsVideoItem*
/// @param child QGraphicsItem*
///
bool q_graphicsvideoitem_is_ancestor_of(const void* self, const void* child);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self const QGraphicsVideoItem*
/// @param other QGraphicsItem*
///
QGraphicsItem* q_graphicsvideoitem_common_ancestor_item(const void* self, const void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self const QGraphicsVideoItem*
///
bool q_graphicsvideoitem_is_under_mouse(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self const QGraphicsVideoItem*
/// @param key int
///
QVariant* q_graphicsvideoitem_data(const void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QGraphicsVideoItem*
/// @param key int
/// @param value QVariant*
///
void q_graphicsvideoitem_set_data(void* self, int key, const void* value);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self const QGraphicsVideoItem*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_graphicsvideoitem_input_method_hints(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QGraphicsVideoItem*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_graphicsvideoitem_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QGraphicsVideoItem*
/// @param filterItem QGraphicsItem*
///
void q_graphicsvideoitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QGraphicsVideoItem*
/// @param filterItem QGraphicsItem*
///
void q_graphicsvideoitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsVideoItem*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
///
void q_graphicsvideoitem_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsVideoItem*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
///
void q_graphicsvideoitem_set_cache_mode2(void* self, int32_t mode, const void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self const QGraphicsVideoItem*
/// @param blockingPanel QGraphicsItem**
///
bool q_graphicsvideoitem_is_blocked_by_modal_panel1(const void* self, void** blockingPanel);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsVideoItem*
/// @param focusReason enum Qt__FocusReason
///
void q_graphicsvideoitem_set_focus1(void* self, int32_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
/// @param rect QRectF*
///
void q_graphicsvideoitem_ensure_visible1(void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
/// @param rect QRectF*
/// @param xmargin int
///
void q_graphicsvideoitem_ensure_visible22(void* self, const void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_graphicsvideoitem_ensure_visible3(void* self, const void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
///
void q_graphicsvideoitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsVideoItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
///
void q_graphicsvideoitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self const QGraphicsVideoItem*
/// @param other QGraphicsItem*
/// @param ok bool*
///
QTransform* q_graphicsvideoitem_item_transform2(const void* self, const void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsVideoItem*
/// @param matrix QTransform*
/// @param combine bool
///
void q_graphicsvideoitem_set_transform2(void* self, const void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self const QGraphicsVideoItem*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsvideoitem_colliding_items1(const void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self const QGraphicsVideoItem*
/// @param rect QRectF*
///
bool q_graphicsvideoitem_is_obscured1(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsVideoItem*
/// @param rect QRectF*
///
void q_graphicsvideoitem_update1(void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsVideoItem*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
///
void q_graphicsvideoitem_scroll3(void* self, double dx, double dy, const void* rect);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param ev QEvent*
///
bool q_graphicsvideoitem_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param ev QEvent*
///
bool q_graphicsvideoitem_super_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QEvent* ev)
///
void q_graphicsvideoitem_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsvideoitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsvideoitem_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QObject* watched, QEvent* event)
///
void q_graphicsvideoitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QChildEvent*
///
void q_graphicsvideoitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QChildEvent*
///
void q_graphicsvideoitem_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QChildEvent* event)
///
void q_graphicsvideoitem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QEvent*
///
void q_graphicsvideoitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QEvent*
///
void q_graphicsvideoitem_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QEvent* event)
///
void q_graphicsvideoitem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param signal QMetaMethod*
///
void q_graphicsvideoitem_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param signal QMetaMethod*
///
void q_graphicsvideoitem_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QMetaMethod* signal)
///
void q_graphicsvideoitem_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param signal QMetaMethod*
///
void q_graphicsvideoitem_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param signal QMetaMethod*
///
void q_graphicsvideoitem_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QMetaMethod* signal)
///
void q_graphicsvideoitem_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param phase int
///
void q_graphicsvideoitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param phase int
///
void q_graphicsvideoitem_super_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, int phase)
///
void q_graphicsvideoitem_on_advance(void* self, void (*callback)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
QPainterPath* q_graphicsvideoitem_shape(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
QPainterPath* q_graphicsvideoitem_super_shape(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback QPainterPath* func(QGraphicsVideoItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsvideoitem_on_shape(const void* self, QPainterPath* (*callback)(const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param point QPointF*
///
bool q_graphicsvideoitem_contains(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param point QPointF*
///
bool q_graphicsvideoitem_super_contains(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QPointF* point)
///
void q_graphicsvideoitem_on_contains(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicsvideoitem_collides_with_item(const void* self, const void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicsvideoitem_super_collides_with_item(const void* self, const void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode)
///
void q_graphicsvideoitem_on_collides_with_item(const void* self, bool (*callback)(const void*, const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicsvideoitem_collides_with_path(const void* self, const void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicsvideoitem_super_collides_with_path(const void* self, const void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode)
///
void q_graphicsvideoitem_on_collides_with_path(const void* self, bool (*callback)(const void*, const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
///
bool q_graphicsvideoitem_is_obscured_by(const void* self, const void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param item QGraphicsItem*
///
bool q_graphicsvideoitem_super_is_obscured_by(const void* self, const void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QGraphicsItem* item)
///
void q_graphicsvideoitem_on_is_obscured_by(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
QPainterPath* q_graphicsvideoitem_opaque_area(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
QPainterPath* q_graphicsvideoitem_super_opaque_area(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback QPainterPath* func(QGraphicsVideoItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsvideoitem_on_opaque_area(const void* self, QPainterPath* (*callback)(const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_graphicsvideoitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_graphicsvideoitem_super_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event)
///
void q_graphicsvideoitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QEvent*
///
bool q_graphicsvideoitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QEvent*
///
bool q_graphicsvideoitem_super_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QEvent* event)
///
void q_graphicsvideoitem_on_scene_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_graphicsvideoitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_graphicsvideoitem_super_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event)
///
void q_graphicsvideoitem_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_super_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsvideoitem_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_super_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsvideoitem_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_super_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsvideoitem_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsvideoitem_super_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsvideoitem_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QFocusEvent*
///
void q_graphicsvideoitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QFocusEvent*
///
void q_graphicsvideoitem_super_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QFocusEvent* event)
///
void q_graphicsvideoitem_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QFocusEvent*
///
void q_graphicsvideoitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QFocusEvent*
///
void q_graphicsvideoitem_super_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QFocusEvent* event)
///
void q_graphicsvideoitem_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicsvideoitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicsvideoitem_super_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event)
///
void q_graphicsvideoitem_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicsvideoitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicsvideoitem_super_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event)
///
void q_graphicsvideoitem_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicsvideoitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicsvideoitem_super_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event)
///
void q_graphicsvideoitem_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QKeyEvent*
///
void q_graphicsvideoitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QKeyEvent*
///
void q_graphicsvideoitem_super_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QKeyEvent* event)
///
void q_graphicsvideoitem_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QKeyEvent*
///
void q_graphicsvideoitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QKeyEvent*
///
void q_graphicsvideoitem_super_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QKeyEvent* event)
///
void q_graphicsvideoitem_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_super_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsvideoitem_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_super_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsvideoitem_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_super_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsvideoitem_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsvideoitem_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsvideoitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneWheelEvent*
///
void q_graphicsvideoitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QGraphicsSceneWheelEvent*
///
void q_graphicsvideoitem_super_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event)
///
void q_graphicsvideoitem_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QInputMethodEvent*
///
void q_graphicsvideoitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param event QInputMethodEvent*
///
void q_graphicsvideoitem_super_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, QInputMethodEvent* event)
///
void q_graphicsvideoitem_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsvideoitem_input_method_query(const void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsvideoitem_super_input_method_query(const void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback QVariant* func(QGraphicsVideoItem* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsvideoitem_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param extension enum QGraphicsItem__Extension
///
bool q_graphicsvideoitem_supports_extension(const void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param extension enum QGraphicsItem__Extension
///
bool q_graphicsvideoitem_super_supports_extension(const void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension)
///
void q_graphicsvideoitem_on_supports_extension(const void* self, bool (*callback)(const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_graphicsvideoitem_set_extension(void* self, int32_t extension, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_graphicsvideoitem_super_set_extension(void* self, int32_t extension, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension, QVariant* variant)
///
void q_graphicsvideoitem_on_set_extension(void* self, void (*callback)(void*, int32_t, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param variant QVariant*
///
QVariant* q_graphicsvideoitem_extension(const void* self, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param variant QVariant*
///
QVariant* q_graphicsvideoitem_super_extension(const void* self, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback QVariant* func(QGraphicsVideoItem* self, QVariant* variant)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsvideoitem_on_extension(const void* self, QVariant* (*callback)(const void*, const void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_super_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
QObject* q_graphicsvideoitem_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
QObject* q_graphicsvideoitem_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback QObject* func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
int32_t q_graphicsvideoitem_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
///
int32_t q_graphicsvideoitem_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback int32_t func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param signal const char*
///
int32_t q_graphicsvideoitem_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param signal const char*
///
int32_t q_graphicsvideoitem_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback int32_t func(QGraphicsVideoItem* self, const char* signal)
///
void q_graphicsvideoitem_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param signal QMetaMethod*
///
bool q_graphicsvideoitem_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param signal QMetaMethod*
///
bool q_graphicsvideoitem_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsVideoItem*
/// @param callback bool func(QGraphicsVideoItem* self, QMetaMethod* signal)
///
void q_graphicsvideoitem_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_super_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_add_to_index(void* self, void (*callback)(void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_super_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_remove_from_index(void* self, void (*callback)(void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_super_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self)
///
void q_graphicsvideoitem_on_prepare_geometry_change(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsVideoItem*
/// @param callback void func(QGraphicsVideoItem* self, const char* objectName)
///
void q_graphicsvideoitem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#dtor.QGraphicsVideoItem)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsVideoItem*
///
void q_graphicsvideoitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#public-types)

typedef enum {
    QGRAPHICSVIDEOITEM__TYPE = 14
} QGraphicsVideoItem__;

#endif
