#pragma once
#ifndef SRC_SVGQT6C_LIBQGRAPHICSSVGITEM_H
#define SRC_SVGQT6C_LIBQGRAPHICSSVGITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqcursor.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsitem.h"
#include "../libqgraphicsscene.h"
#include "../libqgraphicstransform.h"
#include "../libqgraphicswidget.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqpainterpath.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqstyleoption.h"
#include "libqsvgrenderer.h"
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "../libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html

/// q_graphicssvgitem_new constructs a new QGraphicsSvgItem object.
///
///
QGraphicsSvgItem* q_graphicssvgitem_new();

/// q_graphicssvgitem_new2 constructs a new QGraphicsSvgItem object.
///
/// ``` const char* fileName ```
QGraphicsSvgItem* q_graphicssvgitem_new2(const char* fileName);

/// q_graphicssvgitem_new3 constructs a new QGraphicsSvgItem object.
///
/// ``` QGraphicsItem* parentItem ```
QGraphicsSvgItem* q_graphicssvgitem_new3(void* parentItem);

/// q_graphicssvgitem_new4 constructs a new QGraphicsSvgItem object.
///
/// ``` const char* fileName, QGraphicsItem* parentItem ```
QGraphicsSvgItem* q_graphicssvgitem_new4(const char* fileName, void* parentItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsSvgItem* self ```
QMetaObject* q_graphicssvgitem_meta_object(void* self);

/// ``` QGraphicsSvgItem* self, const char* param1 ```
void* q_graphicssvgitem_metacast(void* self, const char* param1);

/// ``` QGraphicsSvgItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicssvgitem_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)(QGraphicsSvgItem*, enum QMetaObject__Call, int, void*) ```
void q_graphicssvgitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicssvgitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicssvgitem_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setSharedRenderer)
///
/// ``` QGraphicsSvgItem* self, QSvgRenderer* renderer ```
void q_graphicssvgitem_set_shared_renderer(void* self, void* renderer);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#renderer)
///
/// ``` QGraphicsSvgItem* self ```
QSvgRenderer* q_graphicssvgitem_renderer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setElementId)
///
/// ``` QGraphicsSvgItem* self, const char* id ```
void q_graphicssvgitem_set_element_id(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#elementId)
///
/// ``` QGraphicsSvgItem* self ```
const char* q_graphicssvgitem_element_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setCachingEnabled)
///
/// ``` QGraphicsSvgItem* self, bool cachingEnabled ```
void q_graphicssvgitem_set_caching_enabled(void* self, bool cachingEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#isCachingEnabled)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_caching_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setMaximumCacheSize)
///
/// ``` QGraphicsSvgItem* self, QSize* size ```
void q_graphicssvgitem_set_maximum_cache_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#maximumCacheSize)
///
/// ``` QGraphicsSvgItem* self ```
QSize* q_graphicssvgitem_maximum_cache_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, QRectF* (*slot)() ```
void q_graphicssvgitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
///
/// ``` QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicssvgitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicssvgitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicssvgitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)() ```
void q_graphicssvgitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicssvgitem_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicssvgitem_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsSvgItem* self, enum Qt__GestureType typeVal ```
void q_graphicssvgitem_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsSvgItem* self, enum Qt__GestureType typeVal ```
void q_graphicssvgitem_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsSvgItem* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicssvgitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsSvgItem* self ```
const char* q_graphicssvgitem_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsSvgItem* self, const char* name ```
void q_graphicssvgitem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsSvgItem* self, bool b ```
bool q_graphicssvgitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsSvgItem* self ```
QThread* q_graphicssvgitem_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsSvgItem* self, QThread* thread ```
void q_graphicssvgitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsSvgItem* self, int interval ```
int32_t q_graphicssvgitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsSvgItem* self, int id ```
void q_graphicssvgitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QObject* */ q_graphicssvgitem_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsSvgItem* self, QObject* parent ```
void q_graphicssvgitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsSvgItem* self, QObject* filterObj ```
void q_graphicssvgitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsSvgItem* self, QObject* obj ```
void q_graphicssvgitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicssvgitem_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsSvgItem* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicssvgitem_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicssvgitem_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicssvgitem_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsSvgItem* self, const char* name, QVariant* value ```
bool q_graphicssvgitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsSvgItem* self, const char* name ```
QVariant* q_graphicssvgitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsSvgItem* self ```
const char** q_graphicssvgitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsSvgItem* self ```
QBindingStorage* q_graphicssvgitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsSvgItem* self ```
QBindingStorage* q_graphicssvgitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QObject*) ```
void q_graphicssvgitem_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsSvgItem* self ```
QObject* q_graphicssvgitem_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsSvgItem* self, const char* classname ```
bool q_graphicssvgitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsSvgItem* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicssvgitem_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicssvgitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsSvgItem* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicssvgitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsSvgItem* self, QObject* param1 ```
void q_graphicssvgitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QObject*, QObject*) ```
void q_graphicssvgitem_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsScene* q_graphicssvgitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsObject* q_graphicssvgitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsWidget* q_graphicssvgitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsWidget* q_graphicssvgitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsWidget* q_graphicssvgitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* parent ```
void q_graphicssvgitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsObject* q_graphicssvgitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsObject* q_graphicssvgitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItemGroup* q_graphicssvgitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItemGroup* group ```
void q_graphicssvgitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicssvgitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsSvgItem* self, int flags ```
void q_graphicssvgitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicssvgitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicssvgitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsSvgItem* self ```
const char* q_graphicssvgitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsSvgItem* self, const char* toolTip ```
void q_graphicssvgitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsSvgItem* self ```
QCursor* q_graphicssvgitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsSvgItem* self, QCursor* cursor ```
void q_graphicssvgitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* parent ```
bool q_graphicssvgitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsSvgItem* self, bool visible ```
void q_graphicssvgitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsSvgItem* self, bool selected ```
void q_graphicssvgitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsSvgItem* self, bool on ```
void q_graphicssvgitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsSvgItem* self, double opacity ```
void q_graphicssvgitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsEffect* q_graphicssvgitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsSvgItem* self, QGraphicsEffect* effect ```
void q_graphicssvgitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsSvgItem* self, int buttons ```
void q_graphicssvgitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsSvgItem* self, bool active ```
void q_graphicssvgitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item ```
void q_graphicssvgitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsSvgItem* self ```
QPointF* q_graphicssvgitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsSvgItem* self, double x ```
void q_graphicssvgitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsSvgItem* self, double y ```
void q_graphicssvgitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsSvgItem* self ```
QPointF* q_graphicssvgitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsSvgItem* self, QPointF* pos ```
void q_graphicssvgitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
void q_graphicssvgitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsSvgItem* self, double dx, double dy ```
void q_graphicssvgitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
void q_graphicssvgitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsSvgItem* self ```
QTransform* q_graphicssvgitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsSvgItem* self ```
QTransform* q_graphicssvgitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsSvgItem* self, QTransform* viewportTransform ```
QTransform* q_graphicssvgitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other ```
QTransform* q_graphicssvgitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsSvgItem* self, QTransform* matrix ```
void q_graphicssvgitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsSvgItem* self, double angle ```
void q_graphicssvgitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsSvgItem* self, double scale ```
void q_graphicssvgitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicssvgitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsSvgItem* self, QGraphicsTransform* transformations[] ```
void q_graphicssvgitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsSvgItem* self ```
QPointF* q_graphicssvgitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsSvgItem* self, QPointF* origin ```
void q_graphicssvgitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsSvgItem* self, double ax, double ay ```
void q_graphicssvgitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsSvgItem* self, double z ```
void q_graphicssvgitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* sibling ```
void q_graphicssvgitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
bool q_graphicssvgitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsSvgItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicssvgitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsSvgItem* self, double granularity ```
void q_graphicssvgitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double width, double height ```
void q_graphicssvgitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsSvgItem* self, double dx, double dy ```
void q_graphicssvgitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicssvgitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicssvgitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicssvgitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicssvgitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* child ```
bool q_graphicssvgitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicssvgitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsSvgItem* self, int key ```
QVariant* q_graphicssvgitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsSvgItem* self, int key, QVariant* value ```
void q_graphicssvgitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsSvgItem* self, int hints ```
void q_graphicssvgitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* filterItem ```
void q_graphicssvgitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* filterItem ```
void q_graphicssvgitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicssvgitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicssvgitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsSvgItem* self, enum Qt__FocusReason focusReason ```
void q_graphicssvgitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
void q_graphicssvgitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect, int xmargin ```
void q_graphicssvgitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicssvgitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicssvgitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicssvgitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicssvgitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsSvgItem* self, QTransform* matrix, bool combine ```
void q_graphicssvgitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsSvgItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
bool q_graphicssvgitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
void q_graphicssvgitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsSvgItem* self, double dx, double dy, QRectF* rect ```
void q_graphicssvgitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* ev ```
bool q_graphicssvgitem_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* ev ```
bool q_graphicssvgitem_qbase_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QEvent*) ```
void q_graphicssvgitem_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QObject* watched, QEvent* event ```
bool q_graphicssvgitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QObject* watched, QEvent* event ```
bool q_graphicssvgitem_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QObject*, QEvent*) ```
void q_graphicssvgitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QTimerEvent* event ```
void q_graphicssvgitem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QTimerEvent* event ```
void q_graphicssvgitem_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QTimerEvent*) ```
void q_graphicssvgitem_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QChildEvent* event ```
void q_graphicssvgitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QChildEvent* event ```
void q_graphicssvgitem_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QChildEvent*) ```
void q_graphicssvgitem_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
void q_graphicssvgitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
void q_graphicssvgitem_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QEvent*) ```
void q_graphicssvgitem_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QMetaMethod*) ```
void q_graphicssvgitem_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QMetaMethod*) ```
void q_graphicssvgitem_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int phase ```
void q_graphicssvgitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int phase ```
void q_graphicssvgitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, int) ```
void q_graphicssvgitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_qbase_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* (*slot)() ```
void q_graphicssvgitem_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
bool q_graphicssvgitem_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
bool q_graphicssvgitem_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QPointF*) ```
void q_graphicssvgitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicssvgitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicssvgitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item ```
bool q_graphicssvgitem_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item ```
bool q_graphicssvgitem_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QGraphicsItem*) ```
void q_graphicssvgitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* (*slot)() ```
void q_graphicssvgitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicssvgitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicssvgitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QGraphicsItem*, QEvent*) ```
void q_graphicssvgitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
bool q_graphicssvgitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
bool q_graphicssvgitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QEvent*) ```
void q_graphicssvgitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicssvgitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicssvgitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicssvgitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QFocusEvent*) ```
void q_graphicssvgitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QFocusEvent*) ```
void q_graphicssvgitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssvgitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssvgitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssvgitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QKeyEvent*) ```
void q_graphicssvgitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QKeyEvent*) ```
void q_graphicssvgitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicssvgitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicssvgitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicssvgitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QInputMethodEvent* event ```
void q_graphicssvgitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QInputMethodEvent* event ```
void q_graphicssvgitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QInputMethodEvent*) ```
void q_graphicssvgitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicssvgitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicssvgitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* (*slot)(QGraphicsSvgItem*, enum Qt__InputMethodQuery) ```
void q_graphicssvgitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicssvgitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicssvgitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* (*slot)(QGraphicsSvgItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicssvgitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicssvgitem_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicssvgitem_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, enum QGraphicsItem__Extension) ```
void q_graphicssvgitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicssvgitem_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicssvgitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicssvgitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* variant ```
QVariant* q_graphicssvgitem_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* variant ```
QVariant* q_graphicssvgitem_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* (*slot)(QGraphicsSvgItem*, QVariant*) ```
void q_graphicssvgitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QObject* q_graphicssvgitem_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QObject* q_graphicssvgitem_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QObject* (*slot)() ```
void q_graphicssvgitem_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)() ```
void q_graphicssvgitem_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, const char* signal ```
int32_t q_graphicssvgitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, const char* signal ```
int32_t q_graphicssvgitem_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)(QGraphicsSvgItem*, const char*) ```
void q_graphicssvgitem_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
bool q_graphicssvgitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
bool q_graphicssvgitem_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QMetaMethod*) ```
void q_graphicssvgitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html#types

typedef enum {
    QGRAPHICSSVGITEM__TYPE = 13
} QGraphicsSvgItem__;

#endif
