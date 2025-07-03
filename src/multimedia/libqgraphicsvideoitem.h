#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQGRAPHICSVIDEOITEM_H
#define SRC_MULTIMEDIAQT6C_LIBQGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqgraphicsitem.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqpainterpath.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqstyleoption.h"
#include "../libqvariant.h"
#include "libqvideosink.h"
#include "../libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicsvideoitem.html

/// q_graphicsvideoitem_new constructs a new QGraphicsVideoItem object.
///
///
QGraphicsVideoItem* q_graphicsvideoitem_new();

/// q_graphicsvideoitem_new2 constructs a new QGraphicsVideoItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsVideoItem* q_graphicsvideoitem_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsVideoItem* self ```
const QMetaObject* q_graphicsvideoitem_meta_object(void* self);

/// ``` QGraphicsVideoItem* self, const char* param1 ```
void* q_graphicsvideoitem_metacast(void* self, const char* param1);

/// ``` QGraphicsVideoItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsvideoitem_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)(QGraphicsVideoItem*, enum QMetaObject__Call, int, void*) ```
void q_graphicsvideoitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsvideoitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsvideoitem_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#videoSink)
///
/// ``` QGraphicsVideoItem* self ```
QVideoSink* q_graphicsvideoitem_video_sink(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#aspectRatioMode)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_aspect_ratio_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setAspectRatioMode)
///
/// ``` QGraphicsVideoItem* self, enum Qt__AspectRatioMode mode ```
void q_graphicsvideoitem_set_aspect_ratio_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#offset)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setOffset)
///
/// ``` QGraphicsVideoItem* self, QPointF* offset ```
void q_graphicsvideoitem_set_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#size)
///
/// ``` QGraphicsVideoItem* self ```
QSizeF* q_graphicsvideoitem_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setSize)
///
/// ``` QGraphicsVideoItem* self, QSizeF* size ```
void q_graphicsvideoitem_set_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSize)
///
/// ``` QGraphicsVideoItem* self ```
QSizeF* q_graphicsvideoitem_native_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, QRectF* (*slot)() ```
void q_graphicsvideoitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// ``` QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsvideoitem_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsvideoitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsvideoitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)() ```
void q_graphicsvideoitem_on_type(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
///
/// ``` QGraphicsVideoItem* self, QSizeF* size ```
void q_graphicsvideoitem_native_size_changed(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QSizeF*) ```
void q_graphicsvideoitem_on_native_size_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// ``` QGraphicsVideoItem* self, QTimerEvent* event ```
void q_graphicsvideoitem_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QTimerEvent*) ```
void q_graphicsvideoitem_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, QTimerEvent* event ```
void q_graphicsvideoitem_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsvideoitem_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, QVariant* (*slot)(QGraphicsVideoItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsvideoitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsvideoitem_qbase_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsvideoitem_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsvideoitem_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsVideoItem* self, enum Qt__GestureType typeVal ```
void q_graphicsvideoitem_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsVideoItem* self, enum Qt__GestureType typeVal ```
void q_graphicsvideoitem_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsVideoItem* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsvideoitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsVideoItem* self ```
const char* q_graphicsvideoitem_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsVideoItem* self, char* name ```
void q_graphicsvideoitem_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsVideoItem* self, bool b ```
bool q_graphicsvideoitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsVideoItem* self ```
QThread* q_graphicsvideoitem_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsVideoItem* self, QThread* thread ```
void q_graphicsvideoitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsVideoItem* self, int interval ```
int32_t q_graphicsvideoitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsVideoItem* self, int id ```
void q_graphicsvideoitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QObject* */ q_graphicsvideoitem_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsVideoItem* self, QObject* parent ```
void q_graphicsvideoitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsVideoItem* self, QObject* filterObj ```
void q_graphicsvideoitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsVideoItem* self, QObject* obj ```
void q_graphicsvideoitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsvideoitem_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsVideoItem* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsvideoitem_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsvideoitem_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsvideoitem_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsVideoItem* self, const char* name, QVariant* value ```
bool q_graphicsvideoitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsVideoItem* self, const char* name ```
QVariant* q_graphicsvideoitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsVideoItem* self ```
const char** q_graphicsvideoitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsVideoItem* self ```
QBindingStorage* q_graphicsvideoitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsVideoItem* self ```
const QBindingStorage* q_graphicsvideoitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QObject*) ```
void q_graphicsvideoitem_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsVideoItem* self ```
QObject* q_graphicsvideoitem_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsVideoItem* self, const char* classname ```
bool q_graphicsvideoitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsVideoItem* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsvideoitem_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsvideoitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsVideoItem* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsvideoitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsVideoItem* self, QObject* param1 ```
void q_graphicsvideoitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsvideoitem_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsScene* q_graphicsvideoitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsObject* q_graphicsvideoitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsWidget* q_graphicsvideoitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsWidget* q_graphicsvideoitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsWidget* q_graphicsvideoitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* parent ```
void q_graphicsvideoitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsObject* q_graphicsvideoitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsVideoItem* self ```
const QGraphicsObject* q_graphicsvideoitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItemGroup* q_graphicsvideoitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItemGroup* group ```
void q_graphicsvideoitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsvideoitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsVideoItem* self, int flags ```
void q_graphicsvideoitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsvideoitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsvideoitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsVideoItem* self ```
const char* q_graphicsvideoitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsVideoItem* self, const char* toolTip ```
void q_graphicsvideoitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsVideoItem* self ```
QCursor* q_graphicsvideoitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsVideoItem* self, QCursor* cursor ```
void q_graphicsvideoitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* parent ```
bool q_graphicsvideoitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsVideoItem* self, bool visible ```
void q_graphicsvideoitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsVideoItem* self, bool selected ```
void q_graphicsvideoitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsVideoItem* self, bool on ```
void q_graphicsvideoitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsVideoItem* self, double opacity ```
void q_graphicsvideoitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsEffect* q_graphicsvideoitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsVideoItem* self, QGraphicsEffect* effect ```
void q_graphicsvideoitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsVideoItem* self, int buttons ```
void q_graphicsvideoitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsVideoItem* self, bool active ```
void q_graphicsvideoitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item ```
void q_graphicsvideoitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsVideoItem* self, double x ```
void q_graphicsvideoitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsVideoItem* self, double y ```
void q_graphicsvideoitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsVideoItem* self, QPointF* pos ```
void q_graphicsvideoitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
void q_graphicsvideoitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsVideoItem* self, double dx, double dy ```
void q_graphicsvideoitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
void q_graphicsvideoitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsVideoItem* self ```
QTransform* q_graphicsvideoitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsVideoItem* self ```
QTransform* q_graphicsvideoitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsVideoItem* self, QTransform* viewportTransform ```
QTransform* q_graphicsvideoitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other ```
QTransform* q_graphicsvideoitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsVideoItem* self, QTransform* matrix ```
void q_graphicsvideoitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsVideoItem* self, double angle ```
void q_graphicsvideoitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsVideoItem* self, double scale ```
void q_graphicsvideoitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsvideoitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsVideoItem* self, libqt_list /* of QGraphicsTransform* */ transformations ```
void q_graphicsvideoitem_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsVideoItem* self, QPointF* origin ```
void q_graphicsvideoitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsVideoItem* self, double ax, double ay ```
void q_graphicsvideoitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsVideoItem* self, double z ```
void q_graphicsvideoitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* sibling ```
void q_graphicsvideoitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
bool q_graphicsvideoitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsVideoItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsvideoitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsVideoItem* self, double granularity ```
void q_graphicsvideoitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double width, double height ```
void q_graphicsvideoitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsVideoItem* self, double dx, double dy ```
void q_graphicsvideoitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsvideoitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsvideoitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsvideoitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsvideoitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* child ```
bool q_graphicsvideoitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsvideoitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsVideoItem* self, int key ```
QVariant* q_graphicsvideoitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsVideoItem* self, int key, QVariant* value ```
void q_graphicsvideoitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsVideoItem* self, int hints ```
void q_graphicsvideoitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* filterItem ```
void q_graphicsvideoitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* filterItem ```
void q_graphicsvideoitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsvideoitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsvideoitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsVideoItem* self, enum Qt__FocusReason focusReason ```
void q_graphicsvideoitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
void q_graphicsvideoitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect, int xmargin ```
void q_graphicsvideoitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsvideoitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsvideoitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsvideoitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsvideoitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsVideoItem* self, QTransform* matrix, bool combine ```
void q_graphicsvideoitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsVideoItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
bool q_graphicsvideoitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
void q_graphicsvideoitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsVideoItem* self, double dx, double dy, QRectF* rect ```
void q_graphicsvideoitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* ev ```
bool q_graphicsvideoitem_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* ev ```
bool q_graphicsvideoitem_qbase_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QEvent*) ```
void q_graphicsvideoitem_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QObject* watched, QEvent* event ```
bool q_graphicsvideoitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QObject* watched, QEvent* event ```
bool q_graphicsvideoitem_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QObject*, QEvent*) ```
void q_graphicsvideoitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QChildEvent* event ```
void q_graphicsvideoitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QChildEvent* event ```
void q_graphicsvideoitem_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QChildEvent*) ```
void q_graphicsvideoitem_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
void q_graphicsvideoitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
void q_graphicsvideoitem_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QEvent*) ```
void q_graphicsvideoitem_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QMetaMethod*) ```
void q_graphicsvideoitem_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QMetaMethod*) ```
void q_graphicsvideoitem_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int phase ```
void q_graphicsvideoitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int phase ```
void q_graphicsvideoitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, int) ```
void q_graphicsvideoitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_shape(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_qbase_shape(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* (*slot)() ```
void q_graphicsvideoitem_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
bool q_graphicsvideoitem_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
bool q_graphicsvideoitem_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QPointF*) ```
void q_graphicsvideoitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsvideoitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsvideoitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item ```
bool q_graphicsvideoitem_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item ```
bool q_graphicsvideoitem_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QGraphicsItem*) ```
void q_graphicsvideoitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* (*slot)() ```
void q_graphicsvideoitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsvideoitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsvideoitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QGraphicsItem*, QEvent*) ```
void q_graphicsvideoitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
bool q_graphicsvideoitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
bool q_graphicsvideoitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QEvent*) ```
void q_graphicsvideoitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsvideoitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsvideoitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsvideoitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QFocusEvent*) ```
void q_graphicsvideoitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QFocusEvent*) ```
void q_graphicsvideoitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsvideoitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsvideoitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsvideoitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QKeyEvent*) ```
void q_graphicsvideoitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QKeyEvent*) ```
void q_graphicsvideoitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsvideoitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsvideoitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicsvideoitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QInputMethodEvent* event ```
void q_graphicsvideoitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QInputMethodEvent* event ```
void q_graphicsvideoitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QInputMethodEvent*) ```
void q_graphicsvideoitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsvideoitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsvideoitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* (*slot)(QGraphicsVideoItem*, enum Qt__InputMethodQuery) ```
void q_graphicsvideoitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsvideoitem_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsvideoitem_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, enum QGraphicsItem__Extension) ```
void q_graphicsvideoitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsvideoitem_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsvideoitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsvideoitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* variant ```
QVariant* q_graphicsvideoitem_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* variant ```
QVariant* q_graphicsvideoitem_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* (*slot)(QGraphicsVideoItem*, QVariant*) ```
void q_graphicsvideoitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QObject* q_graphicsvideoitem_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QObject* q_graphicsvideoitem_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QObject* (*slot)() ```
void q_graphicsvideoitem_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)() ```
void q_graphicsvideoitem_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, const char* signal ```
int32_t q_graphicsvideoitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, const char* signal ```
int32_t q_graphicsvideoitem_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)(QGraphicsVideoItem*, const char*) ```
void q_graphicsvideoitem_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
bool q_graphicsvideoitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
bool q_graphicsvideoitem_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QMetaMethod*) ```
void q_graphicsvideoitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QObject*, const char*) ```
void q_graphicsvideoitem_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#dtor.QGraphicsVideoItem)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsvideoitem.html#types

typedef enum {
    QGRAPHICSVIDEOITEM__TYPE = 14
} QGraphicsVideoItem__;

#endif
