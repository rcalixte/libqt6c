#pragma once
#ifndef SRC_SVG_QT6C_LIBQGRAPHICSSVGITEM_H
#define SRC_SVG_QT6C_LIBQGRAPHICSSVGITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html

/// q_graphicssvgitem_new constructs a new QGraphicsSvgItem object.
///
QGraphicsSvgItem* q_graphicssvgitem_new();

/// q_graphicssvgitem_new2 constructs a new QGraphicsSvgItem object.
///
/// @param fileName const char*
QGraphicsSvgItem* q_graphicssvgitem_new2(const char* fileName);

/// q_graphicssvgitem_new3 constructs a new QGraphicsSvgItem object.
///
/// @param parentItem QGraphicsItem*
QGraphicsSvgItem* q_graphicssvgitem_new3(void* parentItem);

/// q_graphicssvgitem_new4 constructs a new QGraphicsSvgItem object.
///
/// @param fileName const char*
/// @param parentItem QGraphicsItem*
QGraphicsSvgItem* q_graphicssvgitem_new4(const char* fileName, void* parentItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsSvgItem*
const QMetaObject* q_graphicssvgitem_meta_object(void* self);

/// @param self QGraphicsSvgItem*
/// @param param1 const char*
void* q_graphicssvgitem_metacast(void* self, const char* param1);

/// @param self QGraphicsSvgItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicssvgitem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsSvgItem*
/// @param callback int32_t func(QGraphicsSvgItem* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_graphicssvgitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsSvgItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicssvgitem_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_graphicssvgitem_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setSharedRenderer)
///
/// @param self QGraphicsSvgItem*
/// @param renderer QSvgRenderer*
void q_graphicssvgitem_set_shared_renderer(void* self, void* renderer);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#renderer)
///
/// @param self QGraphicsSvgItem*
QSvgRenderer* q_graphicssvgitem_renderer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setElementId)
///
/// @param self QGraphicsSvgItem*
/// @param id const char*
void q_graphicssvgitem_set_element_id(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#elementId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsSvgItem*
const char* q_graphicssvgitem_element_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setCachingEnabled)
///
/// @param self QGraphicsSvgItem*
/// @param cachingEnabled bool
void q_graphicssvgitem_set_caching_enabled(void* self, bool cachingEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#isCachingEnabled)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_caching_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setMaximumCacheSize)
///
/// @param self QGraphicsSvgItem*
/// @param size QSize*
void q_graphicssvgitem_set_maximum_cache_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#maximumCacheSize)
///
/// @param self QGraphicsSvgItem*
QSize* q_graphicssvgitem_maximum_cache_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
///
/// @param self QGraphicsSvgItem*
QRectF* q_graphicssvgitem_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsSvgItem*
/// @param callback QRectF* func()
void q_graphicssvgitem_on_bounding_rect(void* self, QRectF* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
///
/// Base class method implementation
///
/// @param self QGraphicsSvgItem*
QRectF* q_graphicssvgitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
///
/// @param self QGraphicsSvgItem*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
void q_graphicssvgitem_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
void q_graphicssvgitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
///
/// Base class method implementation
///
/// @param self QGraphicsSvgItem*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
void q_graphicssvgitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
///
/// @param self QGraphicsSvgItem*
int32_t q_graphicssvgitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsSvgItem*
/// @param callback int32_t func()
void q_graphicssvgitem_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
///
/// Base class method implementation
///
/// @param self QGraphicsSvgItem*
int32_t q_graphicssvgitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_graphicssvgitem_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_graphicssvgitem_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsSvgItem*
/// @param type enum Qt__GestureType
void q_graphicssvgitem_grab_gesture(void* self, int64_t type);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QGraphicsSvgItem*
/// @param type enum Qt__GestureType
void q_graphicssvgitem_ungrab_gesture(void* self, int64_t type);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsSvgItem*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_graphicssvgitem_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsSvgItem*
const char* q_graphicssvgitem_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsSvgItem*
/// @param name char*
void q_graphicssvgitem_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsSvgItem*
/// @param b bool
bool q_graphicssvgitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsSvgItem*
QThread* q_graphicssvgitem_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsSvgItem*
/// @param thread QThread*
bool q_graphicssvgitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsSvgItem*
/// @param interval int
int32_t q_graphicssvgitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsSvgItem*
/// @param id int
void q_graphicssvgitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsSvgItem*
/// @param id enum Qt__TimerId
void q_graphicssvgitem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsSvgItem*
libqt_list /* of QObject* */ q_graphicssvgitem_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsSvgItem*
/// @param parent QObject*
void q_graphicssvgitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsSvgItem*
/// @param filterObj QObject*
void q_graphicssvgitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsSvgItem*
/// @param obj QObject*
void q_graphicssvgitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_graphicssvgitem_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsSvgItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_graphicssvgitem_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_graphicssvgitem_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_graphicssvgitem_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsSvgItem*
/// @param name const char*
/// @param value QVariant*
bool q_graphicssvgitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsSvgItem*
/// @param name const char*
QVariant* q_graphicssvgitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsSvgItem*
const char** q_graphicssvgitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsSvgItem*
QBindingStorage* q_graphicssvgitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsSvgItem*
const QBindingStorage* q_graphicssvgitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self)
void q_graphicssvgitem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsSvgItem*
QObject* q_graphicssvgitem_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsSvgItem*
/// @param classname const char*
bool q_graphicssvgitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsSvgItem*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_graphicssvgitem_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsSvgItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_graphicssvgitem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_graphicssvgitem_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsSvgItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_graphicssvgitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsSvgItem*
/// @param param1 QObject*
void q_graphicssvgitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QObject* param1)
void q_graphicssvgitem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self QGraphicsSvgItem*
QGraphicsScene* q_graphicssvgitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self QGraphicsSvgItem*
QGraphicsItem* q_graphicssvgitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self QGraphicsSvgItem*
QGraphicsItem* q_graphicssvgitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self QGraphicsSvgItem*
QGraphicsObject* q_graphicssvgitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self QGraphicsSvgItem*
QGraphicsWidget* q_graphicssvgitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self QGraphicsSvgItem*
QGraphicsWidget* q_graphicssvgitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self QGraphicsSvgItem*
QGraphicsWidget* q_graphicssvgitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self QGraphicsSvgItem*
QGraphicsItem* q_graphicssvgitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QGraphicsSvgItem*
/// @param parent QGraphicsItem*
void q_graphicssvgitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self QGraphicsSvgItem*
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsSvgItem*
QGraphicsObject* q_graphicssvgitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsSvgItem*
const QGraphicsObject* q_graphicssvgitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self QGraphicsSvgItem*
QGraphicsItemGroup* q_graphicssvgitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QGraphicsSvgItem*
/// @param group QGraphicsItemGroup*
void q_graphicssvgitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self QGraphicsSvgItem*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
int32_t q_graphicssvgitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsSvgItem*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
void q_graphicssvgitem_set_flag(void* self, int32_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QGraphicsSvgItem*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
void q_graphicssvgitem_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self QGraphicsSvgItem*
///
/// @return enum QGraphicsItem__CacheMode
int32_t q_graphicssvgitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsSvgItem*
/// @param mode enum QGraphicsItem__CacheMode
void q_graphicssvgitem_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self QGraphicsSvgItem*
///
/// @return enum QGraphicsItem__PanelModality
int32_t q_graphicssvgitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QGraphicsSvgItem*
/// @param panelModality enum QGraphicsItem__PanelModality
void q_graphicssvgitem_set_panel_modality(void* self, int32_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsSvgItem*
const char* q_graphicssvgitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QGraphicsSvgItem*
/// @param toolTip const char*
void q_graphicssvgitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self QGraphicsSvgItem*
QCursor* q_graphicssvgitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QGraphicsSvgItem*
/// @param cursor QCursor*
void q_graphicssvgitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self QGraphicsSvgItem*
/// @param parent QGraphicsItem*
bool q_graphicssvgitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QGraphicsSvgItem*
/// @param visible bool
void q_graphicssvgitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QGraphicsSvgItem*
/// @param enabled bool
void q_graphicssvgitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QGraphicsSvgItem*
/// @param selected bool
void q_graphicssvgitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QGraphicsSvgItem*
/// @param on bool
void q_graphicssvgitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QGraphicsSvgItem*
/// @param opacity double
void q_graphicssvgitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self QGraphicsSvgItem*
QGraphicsEffect* q_graphicssvgitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QGraphicsSvgItem*
/// @param effect QGraphicsEffect*
void q_graphicssvgitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self QGraphicsSvgItem*
///
/// @return flag of enum Qt__MouseButton
int64_t q_graphicssvgitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QGraphicsSvgItem*
/// @param buttons flag of enum Qt__MouseButton
void q_graphicssvgitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QGraphicsSvgItem*
/// @param enabled bool
void q_graphicssvgitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QGraphicsSvgItem*
/// @param enabled bool
void q_graphicssvgitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QGraphicsSvgItem*
/// @param enabled bool
void q_graphicssvgitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QGraphicsSvgItem*
/// @param enabled bool
void q_graphicssvgitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QGraphicsSvgItem*
/// @param active bool
void q_graphicssvgitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self QGraphicsSvgItem*
QGraphicsItem* q_graphicssvgitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
void q_graphicssvgitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self QGraphicsSvgItem*
QGraphicsItem* q_graphicssvgitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self QGraphicsSvgItem*
QGraphicsItem* q_graphicssvgitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self QGraphicsSvgItem*
QPointF* q_graphicssvgitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QGraphicsSvgItem*
/// @param x double
void q_graphicssvgitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QGraphicsSvgItem*
/// @param y double
void q_graphicssvgitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self QGraphicsSvgItem*
QPointF* q_graphicssvgitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsSvgItem*
/// @param pos QPointF*
void q_graphicssvgitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
void q_graphicssvgitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QGraphicsSvgItem*
/// @param dx double
/// @param dy double
void q_graphicssvgitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_graphicssvgitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self QGraphicsSvgItem*
QTransform* q_graphicssvgitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self QGraphicsSvgItem*
QTransform* q_graphicssvgitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self QGraphicsSvgItem*
/// @param viewportTransform QTransform*
QTransform* q_graphicssvgitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QGraphicsSvgItem*
/// @param other QGraphicsItem*
QTransform* q_graphicssvgitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsSvgItem*
/// @param matrix QTransform*
void q_graphicssvgitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QGraphicsSvgItem*
/// @param angle double
void q_graphicssvgitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QGraphicsSvgItem*
/// @param scale double
void q_graphicssvgitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self QGraphicsSvgItem*
libqt_list /* of QGraphicsTransform* */ q_graphicssvgitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QGraphicsSvgItem*
/// @param transformations libqt_list /* of QGraphicsTransform* */
void q_graphicssvgitem_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self QGraphicsSvgItem*
QPointF* q_graphicssvgitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsSvgItem*
/// @param origin QPointF*
void q_graphicssvgitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsSvgItem*
/// @param ax double
/// @param ay double
void q_graphicssvgitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QGraphicsSvgItem*
/// @param z double
void q_graphicssvgitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QGraphicsSvgItem*
/// @param sibling QGraphicsItem*
void q_graphicssvgitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self QGraphicsSvgItem*
QRectF* q_graphicssvgitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self QGraphicsSvgItem*
QRectF* q_graphicssvgitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self QGraphicsSvgItem*
QPainterPath* q_graphicssvgitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QGraphicsSvgItem*
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
bool q_graphicssvgitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self QGraphicsSvgItem*
/// @param itemToDeviceTransform QTransform*
QRegion* q_graphicssvgitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self QGraphicsSvgItem*
double q_graphicssvgitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QGraphicsSvgItem*
/// @param granularity double
void q_graphicssvgitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
void q_graphicssvgitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsSvgItem*
/// @param dx double
/// @param dy double
void q_graphicssvgitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param point QPointF*
QPointF* q_graphicssvgitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsSvgItem*
/// @param point QPointF*
QPointF* q_graphicssvgitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsSvgItem*
/// @param point QPointF*
QPointF* q_graphicssvgitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param rect QRectF*
QRectF* q_graphicssvgitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
QRectF* q_graphicssvgitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
QRectF* q_graphicssvgitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
QPainterPath* q_graphicssvgitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsSvgItem*
/// @param path QPainterPath*
QPainterPath* q_graphicssvgitem_map_to_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsSvgItem*
/// @param path QPainterPath*
QPainterPath* q_graphicssvgitem_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param point QPointF*
QPointF* q_graphicssvgitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsSvgItem*
/// @param point QPointF*
QPointF* q_graphicssvgitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsSvgItem*
/// @param point QPointF*
QPointF* q_graphicssvgitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param rect QRectF*
QRectF* q_graphicssvgitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
QRectF* q_graphicssvgitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
QRectF* q_graphicssvgitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
QPainterPath* q_graphicssvgitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsSvgItem*
/// @param path QPainterPath*
QPainterPath* q_graphicssvgitem_map_from_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsSvgItem*
/// @param path QPainterPath*
QPainterPath* q_graphicssvgitem_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
QPointF* q_graphicssvgitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
QPointF* q_graphicssvgitem_map_to_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
QPointF* q_graphicssvgitem_map_to_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicssvgitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicssvgitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicssvgitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
QPointF* q_graphicssvgitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
QPointF* q_graphicssvgitem_map_from_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
QPointF* q_graphicssvgitem_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicssvgitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicssvgitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicssvgitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self QGraphicsSvgItem*
/// @param child QGraphicsItem*
bool q_graphicssvgitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self QGraphicsSvgItem*
/// @param other QGraphicsItem*
QGraphicsItem* q_graphicssvgitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self QGraphicsSvgItem*
bool q_graphicssvgitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self QGraphicsSvgItem*
/// @param key int
QVariant* q_graphicssvgitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QGraphicsSvgItem*
/// @param key int
/// @param value QVariant*
void q_graphicssvgitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self QGraphicsSvgItem*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_graphicssvgitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QGraphicsSvgItem*
/// @param hints flag of enum Qt__InputMethodHint
void q_graphicssvgitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QGraphicsSvgItem*
/// @param filterItem QGraphicsItem*
void q_graphicssvgitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QGraphicsSvgItem*
/// @param filterItem QGraphicsItem*
void q_graphicssvgitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsSvgItem*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
void q_graphicssvgitem_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsSvgItem*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
void q_graphicssvgitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsSvgItem*
/// @param focusReason enum Qt__FocusReason
void q_graphicssvgitem_set_focus1(void* self, int32_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
void q_graphicssvgitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
/// @param xmargin int
void q_graphicssvgitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
void q_graphicssvgitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
void q_graphicssvgitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsSvgItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
void q_graphicssvgitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QGraphicsSvgItem*
/// @param other QGraphicsItem*
/// @param ok bool*
QTransform* q_graphicssvgitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsSvgItem*
/// @param matrix QTransform*
/// @param combine bool
void q_graphicssvgitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QGraphicsSvgItem*
/// @param mode enum Qt__ItemSelectionMode
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items1(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
bool q_graphicssvgitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsSvgItem*
/// @param rect QRectF*
void q_graphicssvgitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsSvgItem*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
void q_graphicssvgitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param ev QEvent*
bool q_graphicssvgitem_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param ev QEvent*
bool q_graphicssvgitem_qbase_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QEvent* ev)
void q_graphicssvgitem_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicssvgitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicssvgitem_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QObject* watched, QEvent* event)
void q_graphicssvgitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QTimerEvent*
void q_graphicssvgitem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QTimerEvent*
void q_graphicssvgitem_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QTimerEvent* event)
void q_graphicssvgitem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QChildEvent*
void q_graphicssvgitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QChildEvent*
void q_graphicssvgitem_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QChildEvent* event)
void q_graphicssvgitem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QEvent*
void q_graphicssvgitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QEvent*
void q_graphicssvgitem_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QEvent* event)
void q_graphicssvgitem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal QMetaMethod*
void q_graphicssvgitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal QMetaMethod*
void q_graphicssvgitem_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QMetaMethod* signal)
void q_graphicssvgitem_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal QMetaMethod*
void q_graphicssvgitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal QMetaMethod*
void q_graphicssvgitem_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QMetaMethod* signal)
void q_graphicssvgitem_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param phase int
void q_graphicssvgitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param phase int
void q_graphicssvgitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, int phase)
void q_graphicssvgitem_on_advance(void* self, void (*callback)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
QPainterPath* q_graphicssvgitem_shape(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
QPainterPath* q_graphicssvgitem_qbase_shape(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback QPainterPath* func()
void q_graphicssvgitem_on_shape(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param point QPointF*
bool q_graphicssvgitem_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param point QPointF*
bool q_graphicssvgitem_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QPointF* point)
void q_graphicssvgitem_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicssvgitem_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicssvgitem_qbase_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode)
void q_graphicssvgitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicssvgitem_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicssvgitem_qbase_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode)
void q_graphicssvgitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
bool q_graphicssvgitem_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param item QGraphicsItem*
bool q_graphicssvgitem_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QGraphicsItem* item)
void q_graphicssvgitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
QPainterPath* q_graphicssvgitem_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
QPainterPath* q_graphicssvgitem_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback QPainterPath* func()
void q_graphicssvgitem_on_opaque_area(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param watched QGraphicsItem*
/// @param event QEvent*
bool q_graphicssvgitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param watched QGraphicsItem*
/// @param event QEvent*
bool q_graphicssvgitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event)
void q_graphicssvgitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QEvent*
bool q_graphicssvgitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QEvent*
bool q_graphicssvgitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QEvent* event)
void q_graphicssvgitem_on_scene_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneContextMenuEvent*
void q_graphicssvgitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneContextMenuEvent*
void q_graphicssvgitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event)
void q_graphicssvgitem_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event)
void q_graphicssvgitem_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event)
void q_graphicssvgitem_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event)
void q_graphicssvgitem_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicssvgitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event)
void q_graphicssvgitem_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QFocusEvent*
void q_graphicssvgitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QFocusEvent*
void q_graphicssvgitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QFocusEvent* event)
void q_graphicssvgitem_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QFocusEvent*
void q_graphicssvgitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QFocusEvent*
void q_graphicssvgitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QFocusEvent* event)
void q_graphicssvgitem_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicssvgitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicssvgitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event)
void q_graphicssvgitem_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicssvgitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicssvgitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event)
void q_graphicssvgitem_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicssvgitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicssvgitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event)
void q_graphicssvgitem_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QKeyEvent*
void q_graphicssvgitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QKeyEvent*
void q_graphicssvgitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QKeyEvent* event)
void q_graphicssvgitem_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QKeyEvent*
void q_graphicssvgitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QKeyEvent*
void q_graphicssvgitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QKeyEvent* event)
void q_graphicssvgitem_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event)
void q_graphicssvgitem_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event)
void q_graphicssvgitem_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event)
void q_graphicssvgitem_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicssvgitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event)
void q_graphicssvgitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneWheelEvent*
void q_graphicssvgitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QGraphicsSceneWheelEvent*
void q_graphicssvgitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event)
void q_graphicssvgitem_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QInputMethodEvent*
void q_graphicssvgitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param event QInputMethodEvent*
void q_graphicssvgitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, QInputMethodEvent* event)
void q_graphicssvgitem_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param query enum Qt__InputMethodQuery
QVariant* q_graphicssvgitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param query enum Qt__InputMethodQuery
QVariant* q_graphicssvgitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback QVariant* func(QGraphicsSvgItem* self, enum Qt__InputMethodQuery query)
void q_graphicssvgitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
QVariant* q_graphicssvgitem_item_change(void* self, int32_t change, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
QVariant* q_graphicssvgitem_qbase_item_change(void* self, int32_t change, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback QVariant* func(QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value)
void q_graphicssvgitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param extension enum QGraphicsItem__Extension
bool q_graphicssvgitem_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param extension enum QGraphicsItem__Extension
bool q_graphicssvgitem_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension)
void q_graphicssvgitem_on_supports_extension(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
void q_graphicssvgitem_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
void q_graphicssvgitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension, QVariant* variant)
void q_graphicssvgitem_on_set_extension(void* self, void (*callback)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param variant QVariant*
QVariant* q_graphicssvgitem_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param variant QVariant*
QVariant* q_graphicssvgitem_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback QVariant* func(QGraphicsSvgItem* self, QVariant* variant)
void q_graphicssvgitem_on_extension(void* self, QVariant* (*callback)(void*, void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func()
void q_graphicssvgitem_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
QObject* q_graphicssvgitem_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
QObject* q_graphicssvgitem_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback QObject* func()
void q_graphicssvgitem_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
int32_t q_graphicssvgitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
int32_t q_graphicssvgitem_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback int32_t func()
void q_graphicssvgitem_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal const char*
int32_t q_graphicssvgitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal const char*
int32_t q_graphicssvgitem_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback int32_t func(QGraphicsSvgItem* self, const char* signal)
void q_graphicssvgitem_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal QMetaMethod*
bool q_graphicssvgitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param signal QMetaMethod*
bool q_graphicssvgitem_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback bool func(QGraphicsSvgItem* self, QMetaMethod* signal)
void q_graphicssvgitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func()
void q_graphicssvgitem_on_add_to_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func()
void q_graphicssvgitem_on_remove_from_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSvgItem*
/// @param callback void func()
void q_graphicssvgitem_on_prepare_geometry_change(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsSvgItem*
/// @param callback void func(QGraphicsSvgItem* self, const char* objectName)
void q_graphicssvgitem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#dtor.QGraphicsSvgItem)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSvgItem*
void q_graphicssvgitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html#types

typedef enum {
    QGRAPHICSSVGITEM__TYPE = 13
} QGraphicsSvgItem__;

#endif
