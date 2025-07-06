#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSEFFECT_H
#define SRCQT6C_LIBQGRAPHICSEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicseffect.html

/// q_graphicseffect_new constructs a new QGraphicsEffect object.
///
///
QGraphicsEffect* q_graphicseffect_new();

/// q_graphicseffect_new2 constructs a new QGraphicsEffect object.
///
/// ``` QObject* parent ```
QGraphicsEffect* q_graphicseffect_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsEffect* self ```
const QMetaObject* q_graphicseffect_meta_object(void* self);

/// ``` QGraphicsEffect* self, const char* param1 ```
void* q_graphicseffect_metacast(void* self, const char* param1);

/// ``` QGraphicsEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicseffect_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, int32_t (*slot)(QGraphicsEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicseffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicseffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicseffect_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// ``` QGraphicsEffect* self, QRectF* sourceRect ```
QRectF* q_graphicseffect_bounding_rect_for(void* self, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QRectF* (*slot)(QGraphicsEffect*, QRectF*) ```
void q_graphicseffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, QRectF* sourceRect ```
QRectF* q_graphicseffect_qbase_bounding_rect_for(void* self, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsEffect* self ```
QRectF* q_graphicseffect_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsEffect* self, bool enable ```
void q_graphicseffect_set_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsEffect* self, bool enabled ```
void q_graphicseffect_enabled_changed(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicseffect_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QPainter*) ```
void q_graphicseffect_on_draw(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_qbase_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// ``` QGraphicsEffect* self, int flags ```
void q_graphicseffect_source_changed(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, int) ```
void q_graphicseffect_on_source_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, int flags ```
void q_graphicseffect_qbase_source_changed(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_update_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)() ```
void q_graphicseffect_on_update_bounding_rect(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_qbase_update_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_source_is_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, bool (*slot)() ```
void q_graphicseffect_on_source_is_pixmap(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_qbase_source_is_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// ``` QGraphicsEffect* self ```
QRectF* q_graphicseffect_source_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QRectF* (*slot)() ```
void q_graphicseffect_on_source_bounding_rect(void* self, QRectF* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
QRectF* q_graphicseffect_qbase_source_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_draw_source(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QPainter*) ```
void q_graphicseffect_on_draw_source(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_qbase_draw_source(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self ```
QPixmap* q_graphicseffect_source_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)() ```
void q_graphicseffect_on_source_pixmap(void* self, QPixmap* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
QPixmap* q_graphicseffect_qbase_source_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicseffect_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicseffect_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QRectF* q_graphicseffect_source_bounding_rect1(void* self, int64_t system);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QRectF* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem) ```
void q_graphicseffect_on_source_bounding_rect1(void* self, QRectF* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QRectF* q_graphicseffect_qbase_source_bounding_rect1(void* self, int64_t system);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QPixmap* q_graphicseffect_source_pixmap1(void* self, int64_t system);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem) ```
void q_graphicseffect_on_source_pixmap1(void* self, QPixmap* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QPixmap* q_graphicseffect_qbase_source_pixmap1(void* self, int64_t system);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset ```
QPixmap* q_graphicseffect_source_pixmap2(void* self, int64_t system, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem, QPoint*) ```
void q_graphicseffect_on_source_pixmap2(void* self, QPixmap* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset ```
QPixmap* q_graphicseffect_qbase_source_pixmap2(void* self, int64_t system, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset, enum QGraphicsEffect__PixmapPadMode mode ```
QPixmap* q_graphicseffect_source_pixmap3(void* self, int64_t system, void* offset, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem, QPoint*, enum QGraphicsEffect__PixmapPadMode) ```
void q_graphicseffect_on_source_pixmap3(void* self, QPixmap* (*slot)(void*, int64_t, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset, enum QGraphicsEffect__PixmapPadMode mode ```
QPixmap* q_graphicseffect_qbase_source_pixmap3(void* self, int64_t system, void* offset, int64_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsEffect* self ```
const char* q_graphicseffect_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsEffect* self, char* name ```
void q_graphicseffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsEffect* self, bool b ```
bool q_graphicseffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsEffect* self ```
QThread* q_graphicseffect_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsEffect* self, QThread* thread ```
bool q_graphicseffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsEffect* self, int interval ```
int32_t q_graphicseffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsEffect* self, int id ```
void q_graphicseffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsEffect* self, enum Qt__TimerId id ```
void q_graphicseffect_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsEffect* self ```
libqt_list /* of QObject* */ q_graphicseffect_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsEffect* self, QObject* parent ```
void q_graphicseffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsEffect* self, QObject* filterObj ```
void q_graphicseffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsEffect* self, QObject* obj ```
void q_graphicseffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicseffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicseffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicseffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicseffect_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsEffect* self, const char* name, QVariant* value ```
bool q_graphicseffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsEffect* self, const char* name ```
QVariant* q_graphicseffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsEffect* self ```
const char** q_graphicseffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsEffect* self ```
QBindingStorage* q_graphicseffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsEffect* self ```
const QBindingStorage* q_graphicseffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsEffect* self, void (*slot)(QObject*) ```
void q_graphicseffect_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsEffect* self ```
QObject* q_graphicseffect_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsEffect* self, const char* classname ```
bool q_graphicseffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsEffect* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicseffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicseffect_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicseffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicseffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsEffect* self, QObject* param1 ```
void q_graphicseffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicseffect_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
bool q_graphicseffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
bool q_graphicseffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, bool (*slot)(QGraphicsEffect*, QEvent*) ```
void q_graphicseffect_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QObject* watched, QEvent* event ```
bool q_graphicseffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QObject* watched, QEvent* event ```
bool q_graphicseffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, bool (*slot)(QGraphicsEffect*, QObject*, QEvent*) ```
void q_graphicseffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QTimerEvent* event ```
void q_graphicseffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QTimerEvent* event ```
void q_graphicseffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QTimerEvent*) ```
void q_graphicseffect_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QChildEvent* event ```
void q_graphicseffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QChildEvent* event ```
void q_graphicseffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QChildEvent*) ```
void q_graphicseffect_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
void q_graphicseffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
void q_graphicseffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QEvent*) ```
void q_graphicseffect_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QMetaMethod*) ```
void q_graphicseffect_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QMetaMethod*) ```
void q_graphicseffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self ```
QObject* q_graphicseffect_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self ```
QObject* q_graphicseffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QObject* (*slot)() ```
void q_graphicseffect_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self ```
int32_t q_graphicseffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self ```
int32_t q_graphicseffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, int32_t (*slot)() ```
void q_graphicseffect_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, const char* signal ```
int32_t q_graphicseffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, const char* signal ```
int32_t q_graphicseffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, int32_t (*slot)(QGraphicsEffect*, const char*) ```
void q_graphicseffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
bool q_graphicseffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
bool q_graphicseffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, bool (*slot)(QGraphicsEffect*, QMetaMethod*) ```
void q_graphicseffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsEffect* self, void (*slot)(QObject*, const char*) ```
void q_graphicseffect_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#dtor.QGraphicsEffect)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html

/// q_graphicscolorizeeffect_new constructs a new QGraphicsColorizeEffect object.
///
///
QGraphicsColorizeEffect* q_graphicscolorizeeffect_new();

/// q_graphicscolorizeeffect_new2 constructs a new QGraphicsColorizeEffect object.
///
/// ``` QObject* parent ```
QGraphicsColorizeEffect* q_graphicscolorizeeffect_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsColorizeEffect* self ```
const QMetaObject* q_graphicscolorizeeffect_meta_object(void* self);

/// ``` QGraphicsColorizeEffect* self, const char* param1 ```
void* q_graphicscolorizeeffect_metacast(void* self, const char* param1);

/// ``` QGraphicsColorizeEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicscolorizeeffect_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsColorizeEffect* self, int32_t (*slot)(QGraphicsColorizeEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicscolorizeeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsColorizeEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicscolorizeeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicscolorizeeffect_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#color)
///
/// ``` QGraphicsColorizeEffect* self ```
QColor* q_graphicscolorizeeffect_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strength)
///
/// ``` QGraphicsColorizeEffect* self ```
double q_graphicscolorizeeffect_strength(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setColor)
///
/// ``` QGraphicsColorizeEffect* self, QColor* c ```
void q_graphicscolorizeeffect_set_color(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setStrength)
///
/// ``` QGraphicsColorizeEffect* self, double strength ```
void q_graphicscolorizeeffect_set_strength(void* self, double strength);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
///
/// ``` QGraphicsColorizeEffect* self, QColor* color ```
void q_graphicscolorizeeffect_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QColor*) ```
void q_graphicscolorizeeffect_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
///
/// ``` QGraphicsColorizeEffect* self, double strength ```
void q_graphicscolorizeeffect_strength_changed(void* self, double strength);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, double) ```
void q_graphicscolorizeeffect_on_strength_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QPainter*) ```
void q_graphicscolorizeeffect_on_draw(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// Base class method implementation
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_qbase_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicscolorizeeffect_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicscolorizeeffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsColorizeEffect* self ```
QRectF* q_graphicscolorizeeffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsColorizeEffect* self, bool enable ```
void q_graphicscolorizeeffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsColorizeEffect* self, bool enabled ```
void q_graphicscolorizeeffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicscolorizeeffect_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsColorizeEffect* self ```
const char* q_graphicscolorizeeffect_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsColorizeEffect* self, char* name ```
void q_graphicscolorizeeffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsColorizeEffect* self, bool b ```
bool q_graphicscolorizeeffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsColorizeEffect* self ```
QThread* q_graphicscolorizeeffect_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsColorizeEffect* self, QThread* thread ```
bool q_graphicscolorizeeffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsColorizeEffect* self, int interval ```
int32_t q_graphicscolorizeeffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsColorizeEffect* self, int id ```
void q_graphicscolorizeeffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsColorizeEffect* self, enum Qt__TimerId id ```
void q_graphicscolorizeeffect_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsColorizeEffect* self ```
libqt_list /* of QObject* */ q_graphicscolorizeeffect_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsColorizeEffect* self, QObject* parent ```
void q_graphicscolorizeeffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsColorizeEffect* self, QObject* filterObj ```
void q_graphicscolorizeeffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsColorizeEffect* self, QObject* obj ```
void q_graphicscolorizeeffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsColorizeEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicscolorizeeffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicscolorizeeffect_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsColorizeEffect* self, const char* name, QVariant* value ```
bool q_graphicscolorizeeffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsColorizeEffect* self, const char* name ```
QVariant* q_graphicscolorizeeffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsColorizeEffect* self ```
const char** q_graphicscolorizeeffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsColorizeEffect* self ```
QBindingStorage* q_graphicscolorizeeffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsColorizeEffect* self ```
const QBindingStorage* q_graphicscolorizeeffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QObject*) ```
void q_graphicscolorizeeffect_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsColorizeEffect* self ```
QObject* q_graphicscolorizeeffect_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsColorizeEffect* self, const char* classname ```
bool q_graphicscolorizeeffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsColorizeEffect* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicscolorizeeffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsColorizeEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicscolorizeeffect_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsColorizeEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsColorizeEffect* self, QObject* param1 ```
void q_graphicscolorizeeffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicscolorizeeffect_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* sourceRect ```
QRectF* q_graphicscolorizeeffect_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* sourceRect ```
QRectF* q_graphicscolorizeeffect_qbase_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* (*slot)(QGraphicsColorizeEffect*, QRectF*) ```
void q_graphicscolorizeeffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int flags ```
void q_graphicscolorizeeffect_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int flags ```
void q_graphicscolorizeeffect_qbase_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, int) ```
void q_graphicscolorizeeffect_on_source_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
bool q_graphicscolorizeeffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
bool q_graphicscolorizeeffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)(QGraphicsColorizeEffect*, QEvent*) ```
void q_graphicscolorizeeffect_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QObject* watched, QEvent* event ```
bool q_graphicscolorizeeffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QObject* watched, QEvent* event ```
bool q_graphicscolorizeeffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)(QGraphicsColorizeEffect*, QObject*, QEvent*) ```
void q_graphicscolorizeeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QTimerEvent* event ```
void q_graphicscolorizeeffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QTimerEvent* event ```
void q_graphicscolorizeeffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QTimerEvent*) ```
void q_graphicscolorizeeffect_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QChildEvent* event ```
void q_graphicscolorizeeffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QChildEvent* event ```
void q_graphicscolorizeeffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QChildEvent*) ```
void q_graphicscolorizeeffect_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
void q_graphicscolorizeeffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
void q_graphicscolorizeeffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QEvent*) ```
void q_graphicscolorizeeffect_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QMetaMethod*) ```
void q_graphicscolorizeeffect_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QMetaMethod*) ```
void q_graphicscolorizeeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)() ```
void q_graphicscolorizeeffect_on_update_bounding_rect(void* self, void (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)() ```
void q_graphicscolorizeeffect_on_source_is_pixmap(void* self, bool (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QRectF* q_graphicscolorizeeffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QRectF* q_graphicscolorizeeffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* (*slot)() ```
void q_graphicscolorizeeffect_on_source_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QPainter*) ```
void q_graphicscolorizeeffect_on_draw_source(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QPixmap* q_graphicscolorizeeffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QPixmap* q_graphicscolorizeeffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QPixmap* (*slot)() ```
void q_graphicscolorizeeffect_on_source_pixmap(void* self, QPixmap* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QObject* q_graphicscolorizeeffect_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QObject* q_graphicscolorizeeffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QObject* (*slot)() ```
void q_graphicscolorizeeffect_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
int32_t q_graphicscolorizeeffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
int32_t q_graphicscolorizeeffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int32_t (*slot)() ```
void q_graphicscolorizeeffect_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, const char* signal ```
int32_t q_graphicscolorizeeffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, const char* signal ```
int32_t q_graphicscolorizeeffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int32_t (*slot)(QGraphicsColorizeEffect*, const char*) ```
void q_graphicscolorizeeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
bool q_graphicscolorizeeffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
bool q_graphicscolorizeeffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)(QGraphicsColorizeEffect*, QMetaMethod*) ```
void q_graphicscolorizeeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QObject*, const char*) ```
void q_graphicscolorizeeffect_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#dtor.QGraphicsColorizeEffect)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsblureffect.html

/// q_graphicsblureffect_new constructs a new QGraphicsBlurEffect object.
///
///
QGraphicsBlurEffect* q_graphicsblureffect_new();

/// q_graphicsblureffect_new2 constructs a new QGraphicsBlurEffect object.
///
/// ``` QObject* parent ```
QGraphicsBlurEffect* q_graphicsblureffect_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsBlurEffect* self ```
const QMetaObject* q_graphicsblureffect_meta_object(void* self);

/// ``` QGraphicsBlurEffect* self, const char* param1 ```
void* q_graphicsblureffect_metacast(void* self, const char* param1);

/// ``` QGraphicsBlurEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsblureffect_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsBlurEffect* self, int32_t (*slot)(QGraphicsBlurEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicsblureffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsBlurEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsblureffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsblureffect_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// ``` QGraphicsBlurEffect* self, QRectF* rect ```
QRectF* q_graphicsblureffect_bounding_rect_for(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsBlurEffect* self, QRectF* (*slot)(QGraphicsBlurEffect*, QRectF*) ```
void q_graphicsblureffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// Base class method implementation
///
/// ``` QGraphicsBlurEffect* self, QRectF* rect ```
QRectF* q_graphicsblureffect_qbase_bounding_rect_for(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadius)
///
/// ``` QGraphicsBlurEffect* self ```
double q_graphicsblureffect_blur_radius(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHints)
///
/// ``` QGraphicsBlurEffect* self ```
int64_t q_graphicsblureffect_blur_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurRadius)
///
/// ``` QGraphicsBlurEffect* self, double blurRadius ```
void q_graphicsblureffect_set_blur_radius(void* self, double blurRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurHints)
///
/// ``` QGraphicsBlurEffect* self, int hints ```
void q_graphicsblureffect_set_blur_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
///
/// ``` QGraphicsBlurEffect* self, double blurRadius ```
void q_graphicsblureffect_blur_radius_changed(void* self, double blurRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, double) ```
void q_graphicsblureffect_on_blur_radius_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
///
/// ``` QGraphicsBlurEffect* self, int hints ```
void q_graphicsblureffect_blur_hints_changed(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, int) ```
void q_graphicsblureffect_on_blur_hints_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QPainter*) ```
void q_graphicsblureffect_on_draw(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// Base class method implementation
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_qbase_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsblureffect_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsblureffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsBlurEffect* self ```
QRectF* q_graphicsblureffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsBlurEffect* self, bool enable ```
void q_graphicsblureffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsBlurEffect* self, bool enabled ```
void q_graphicsblureffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicsblureffect_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsBlurEffect* self ```
const char* q_graphicsblureffect_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsBlurEffect* self, char* name ```
void q_graphicsblureffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsBlurEffect* self, bool b ```
bool q_graphicsblureffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsBlurEffect* self ```
QThread* q_graphicsblureffect_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsBlurEffect* self, QThread* thread ```
bool q_graphicsblureffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsBlurEffect* self, int interval ```
int32_t q_graphicsblureffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsBlurEffect* self, int id ```
void q_graphicsblureffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsBlurEffect* self, enum Qt__TimerId id ```
void q_graphicsblureffect_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsBlurEffect* self ```
libqt_list /* of QObject* */ q_graphicsblureffect_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsBlurEffect* self, QObject* parent ```
void q_graphicsblureffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsBlurEffect* self, QObject* filterObj ```
void q_graphicsblureffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsBlurEffect* self, QObject* obj ```
void q_graphicsblureffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsblureffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsBlurEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsblureffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsblureffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsblureffect_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsBlurEffect* self, const char* name, QVariant* value ```
bool q_graphicsblureffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsBlurEffect* self, const char* name ```
QVariant* q_graphicsblureffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsBlurEffect* self ```
const char** q_graphicsblureffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsBlurEffect* self ```
QBindingStorage* q_graphicsblureffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsBlurEffect* self ```
const QBindingStorage* q_graphicsblureffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QObject*) ```
void q_graphicsblureffect_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsBlurEffect* self ```
QObject* q_graphicsblureffect_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsBlurEffect* self, const char* classname ```
bool q_graphicsblureffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsBlurEffect* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicsblureffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsBlurEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsblureffect_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsblureffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsBlurEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsblureffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsBlurEffect* self, QObject* param1 ```
void q_graphicsblureffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsblureffect_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int flags ```
void q_graphicsblureffect_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int flags ```
void q_graphicsblureffect_qbase_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, int) ```
void q_graphicsblureffect_on_source_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
bool q_graphicsblureffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
bool q_graphicsblureffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)(QGraphicsBlurEffect*, QEvent*) ```
void q_graphicsblureffect_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsblureffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsblureffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)(QGraphicsBlurEffect*, QObject*, QEvent*) ```
void q_graphicsblureffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QTimerEvent* event ```
void q_graphicsblureffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QTimerEvent* event ```
void q_graphicsblureffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QTimerEvent*) ```
void q_graphicsblureffect_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QChildEvent* event ```
void q_graphicsblureffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QChildEvent* event ```
void q_graphicsblureffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QChildEvent*) ```
void q_graphicsblureffect_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
void q_graphicsblureffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
void q_graphicsblureffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QEvent*) ```
void q_graphicsblureffect_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QMetaMethod*) ```
void q_graphicsblureffect_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QMetaMethod*) ```
void q_graphicsblureffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)() ```
void q_graphicsblureffect_on_update_bounding_rect(void* self, void (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)() ```
void q_graphicsblureffect_on_source_is_pixmap(void* self, bool (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QRectF* q_graphicsblureffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QRectF* q_graphicsblureffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QRectF* (*slot)() ```
void q_graphicsblureffect_on_source_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QPainter*) ```
void q_graphicsblureffect_on_draw_source(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QPixmap* q_graphicsblureffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QPixmap* q_graphicsblureffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QPixmap* (*slot)() ```
void q_graphicsblureffect_on_source_pixmap(void* self, QPixmap* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QObject* q_graphicsblureffect_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QObject* q_graphicsblureffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QObject* (*slot)() ```
void q_graphicsblureffect_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
int32_t q_graphicsblureffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
int32_t q_graphicsblureffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int32_t (*slot)() ```
void q_graphicsblureffect_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, const char* signal ```
int32_t q_graphicsblureffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, const char* signal ```
int32_t q_graphicsblureffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int32_t (*slot)(QGraphicsBlurEffect*, const char*) ```
void q_graphicsblureffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
bool q_graphicsblureffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
bool q_graphicsblureffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)(QGraphicsBlurEffect*, QMetaMethod*) ```
void q_graphicsblureffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QObject*, const char*) ```
void q_graphicsblureffect_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#dtor.QGraphicsBlurEffect)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html

/// q_graphicsdropshadoweffect_new constructs a new QGraphicsDropShadowEffect object.
///
///
QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new();

/// q_graphicsdropshadoweffect_new2 constructs a new QGraphicsDropShadowEffect object.
///
/// ``` QObject* parent ```
QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsDropShadowEffect* self ```
const QMetaObject* q_graphicsdropshadoweffect_meta_object(void* self);

/// ``` QGraphicsDropShadowEffect* self, const char* param1 ```
void* q_graphicsdropshadoweffect_metacast(void* self, const char* param1);

/// ``` QGraphicsDropShadowEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsdropshadoweffect_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsDropShadowEffect* self, int32_t (*slot)(QGraphicsDropShadowEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicsdropshadoweffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsDropShadowEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsdropshadoweffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsdropshadoweffect_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* rect ```
QRectF* q_graphicsdropshadoweffect_bounding_rect_for(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* (*slot)(QGraphicsDropShadowEffect*, QRectF*) ```
void q_graphicsdropshadoweffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// Base class method implementation
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* rect ```
QRectF* q_graphicsdropshadoweffect_qbase_bounding_rect_for(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offset)
///
/// ``` QGraphicsDropShadowEffect* self ```
QPointF* q_graphicsdropshadoweffect_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#xOffset)
///
/// ``` QGraphicsDropShadowEffect* self ```
double q_graphicsdropshadoweffect_x_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#yOffset)
///
/// ``` QGraphicsDropShadowEffect* self ```
double q_graphicsdropshadoweffect_y_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadius)
///
/// ``` QGraphicsDropShadowEffect* self ```
double q_graphicsdropshadoweffect_blur_radius(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#color)
///
/// ``` QGraphicsDropShadowEffect* self ```
QColor* q_graphicsdropshadoweffect_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// ``` QGraphicsDropShadowEffect* self, QPointF* ofs ```
void q_graphicsdropshadoweffect_set_offset(void* self, void* ofs);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double dx, double dy ```
void q_graphicsdropshadoweffect_set_offset2(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double d ```
void q_graphicsdropshadoweffect_set_offset_with_qreal(void* self, double d);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setXOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double dx ```
void q_graphicsdropshadoweffect_set_x_offset(void* self, double dx);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setYOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double dy ```
void q_graphicsdropshadoweffect_set_y_offset(void* self, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setBlurRadius)
///
/// ``` QGraphicsDropShadowEffect* self, double blurRadius ```
void q_graphicsdropshadoweffect_set_blur_radius(void* self, double blurRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setColor)
///
/// ``` QGraphicsDropShadowEffect* self, QColor* color ```
void q_graphicsdropshadoweffect_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
///
/// ``` QGraphicsDropShadowEffect* self, QPointF* offset ```
void q_graphicsdropshadoweffect_offset_changed(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QPointF*) ```
void q_graphicsdropshadoweffect_on_offset_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
///
/// ``` QGraphicsDropShadowEffect* self, double blurRadius ```
void q_graphicsdropshadoweffect_blur_radius_changed(void* self, double blurRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, double) ```
void q_graphicsdropshadoweffect_on_blur_radius_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
///
/// ``` QGraphicsDropShadowEffect* self, QColor* color ```
void q_graphicsdropshadoweffect_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QColor*) ```
void q_graphicsdropshadoweffect_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QPainter*) ```
void q_graphicsdropshadoweffect_on_draw(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// Base class method implementation
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_qbase_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsdropshadoweffect_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsdropshadoweffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsDropShadowEffect* self ```
QRectF* q_graphicsdropshadoweffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsDropShadowEffect* self, bool enable ```
void q_graphicsdropshadoweffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsDropShadowEffect* self, bool enabled ```
void q_graphicsdropshadoweffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicsdropshadoweffect_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsDropShadowEffect* self ```
const char* q_graphicsdropshadoweffect_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsDropShadowEffect* self, char* name ```
void q_graphicsdropshadoweffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsDropShadowEffect* self, bool b ```
bool q_graphicsdropshadoweffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsDropShadowEffect* self ```
QThread* q_graphicsdropshadoweffect_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsDropShadowEffect* self, QThread* thread ```
bool q_graphicsdropshadoweffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsDropShadowEffect* self, int interval ```
int32_t q_graphicsdropshadoweffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsDropShadowEffect* self, int id ```
void q_graphicsdropshadoweffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsDropShadowEffect* self, enum Qt__TimerId id ```
void q_graphicsdropshadoweffect_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsDropShadowEffect* self ```
libqt_list /* of QObject* */ q_graphicsdropshadoweffect_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* parent ```
void q_graphicsdropshadoweffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* filterObj ```
void q_graphicsdropshadoweffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* obj ```
void q_graphicsdropshadoweffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsdropshadoweffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsdropshadoweffect_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsDropShadowEffect* self, const char* name, QVariant* value ```
bool q_graphicsdropshadoweffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsDropShadowEffect* self, const char* name ```
QVariant* q_graphicsdropshadoweffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsDropShadowEffect* self ```
const char** q_graphicsdropshadoweffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsDropShadowEffect* self ```
QBindingStorage* q_graphicsdropshadoweffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsDropShadowEffect* self ```
const QBindingStorage* q_graphicsdropshadoweffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QObject*) ```
void q_graphicsdropshadoweffect_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsDropShadowEffect* self ```
QObject* q_graphicsdropshadoweffect_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsDropShadowEffect* self, const char* classname ```
bool q_graphicsdropshadoweffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsDropShadowEffect* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicsdropshadoweffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsDropShadowEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsdropshadoweffect_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* param1 ```
void q_graphicsdropshadoweffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsdropshadoweffect_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int flags ```
void q_graphicsdropshadoweffect_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int flags ```
void q_graphicsdropshadoweffect_qbase_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, int) ```
void q_graphicsdropshadoweffect_on_source_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
bool q_graphicsdropshadoweffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
bool q_graphicsdropshadoweffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)(QGraphicsDropShadowEffect*, QEvent*) ```
void q_graphicsdropshadoweffect_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsdropshadoweffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsdropshadoweffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)(QGraphicsDropShadowEffect*, QObject*, QEvent*) ```
void q_graphicsdropshadoweffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QTimerEvent* event ```
void q_graphicsdropshadoweffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QTimerEvent* event ```
void q_graphicsdropshadoweffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QTimerEvent*) ```
void q_graphicsdropshadoweffect_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QChildEvent* event ```
void q_graphicsdropshadoweffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QChildEvent* event ```
void q_graphicsdropshadoweffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QChildEvent*) ```
void q_graphicsdropshadoweffect_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
void q_graphicsdropshadoweffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
void q_graphicsdropshadoweffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QEvent*) ```
void q_graphicsdropshadoweffect_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QMetaMethod*) ```
void q_graphicsdropshadoweffect_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QMetaMethod*) ```
void q_graphicsdropshadoweffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)() ```
void q_graphicsdropshadoweffect_on_update_bounding_rect(void* self, void (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)() ```
void q_graphicsdropshadoweffect_on_source_is_pixmap(void* self, bool (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QRectF* q_graphicsdropshadoweffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QRectF* q_graphicsdropshadoweffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* (*slot)() ```
void q_graphicsdropshadoweffect_on_source_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QPainter*) ```
void q_graphicsdropshadoweffect_on_draw_source(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QPixmap* q_graphicsdropshadoweffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QPixmap* q_graphicsdropshadoweffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QPixmap* (*slot)() ```
void q_graphicsdropshadoweffect_on_source_pixmap(void* self, QPixmap* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QObject* q_graphicsdropshadoweffect_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QObject* q_graphicsdropshadoweffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QObject* (*slot)() ```
void q_graphicsdropshadoweffect_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
int32_t q_graphicsdropshadoweffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
int32_t q_graphicsdropshadoweffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int32_t (*slot)() ```
void q_graphicsdropshadoweffect_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, const char* signal ```
int32_t q_graphicsdropshadoweffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, const char* signal ```
int32_t q_graphicsdropshadoweffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int32_t (*slot)(QGraphicsDropShadowEffect*, const char*) ```
void q_graphicsdropshadoweffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
bool q_graphicsdropshadoweffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
bool q_graphicsdropshadoweffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)(QGraphicsDropShadowEffect*, QMetaMethod*) ```
void q_graphicsdropshadoweffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QObject*, const char*) ```
void q_graphicsdropshadoweffect_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#dtor.QGraphicsDropShadowEffect)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsopacityeffect.html

/// q_graphicsopacityeffect_new constructs a new QGraphicsOpacityEffect object.
///
///
QGraphicsOpacityEffect* q_graphicsopacityeffect_new();

/// q_graphicsopacityeffect_new2 constructs a new QGraphicsOpacityEffect object.
///
/// ``` QObject* parent ```
QGraphicsOpacityEffect* q_graphicsopacityeffect_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsOpacityEffect* self ```
const QMetaObject* q_graphicsopacityeffect_meta_object(void* self);

/// ``` QGraphicsOpacityEffect* self, const char* param1 ```
void* q_graphicsopacityeffect_metacast(void* self, const char* param1);

/// ``` QGraphicsOpacityEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsopacityeffect_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsOpacityEffect* self, int32_t (*slot)(QGraphicsOpacityEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicsopacityeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsOpacityEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsopacityeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsopacityeffect_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacity)
///
/// ``` QGraphicsOpacityEffect* self ```
double q_graphicsopacityeffect_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMask)
///
/// ``` QGraphicsOpacityEffect* self ```
QBrush* q_graphicsopacityeffect_opacity_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacity)
///
/// ``` QGraphicsOpacityEffect* self, double opacity ```
void q_graphicsopacityeffect_set_opacity(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacityMask)
///
/// ``` QGraphicsOpacityEffect* self, QBrush* mask ```
void q_graphicsopacityeffect_set_opacity_mask(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
///
/// ``` QGraphicsOpacityEffect* self, double opacity ```
void q_graphicsopacityeffect_opacity_changed(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, double) ```
void q_graphicsopacityeffect_on_opacity_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
///
/// ``` QGraphicsOpacityEffect* self, QBrush* mask ```
void q_graphicsopacityeffect_opacity_mask_changed(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QBrush*) ```
void q_graphicsopacityeffect_on_opacity_mask_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QPainter*) ```
void q_graphicsopacityeffect_on_draw(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// Base class method implementation
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_qbase_draw(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsopacityeffect_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsopacityeffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsOpacityEffect* self ```
QRectF* q_graphicsopacityeffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsOpacityEffect* self, bool enable ```
void q_graphicsopacityeffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsOpacityEffect* self, bool enabled ```
void q_graphicsopacityeffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicsopacityeffect_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsOpacityEffect* self ```
const char* q_graphicsopacityeffect_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsOpacityEffect* self, char* name ```
void q_graphicsopacityeffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsOpacityEffect* self, bool b ```
bool q_graphicsopacityeffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsOpacityEffect* self ```
QThread* q_graphicsopacityeffect_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsOpacityEffect* self, QThread* thread ```
bool q_graphicsopacityeffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsOpacityEffect* self, int interval ```
int32_t q_graphicsopacityeffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsOpacityEffect* self, int id ```
void q_graphicsopacityeffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsOpacityEffect* self, enum Qt__TimerId id ```
void q_graphicsopacityeffect_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsOpacityEffect* self ```
libqt_list /* of QObject* */ q_graphicsopacityeffect_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsOpacityEffect* self, QObject* parent ```
void q_graphicsopacityeffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsOpacityEffect* self, QObject* filterObj ```
void q_graphicsopacityeffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsOpacityEffect* self, QObject* obj ```
void q_graphicsopacityeffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsopacityeffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsOpacityEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsopacityeffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsopacityeffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsopacityeffect_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsOpacityEffect* self, const char* name, QVariant* value ```
bool q_graphicsopacityeffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsOpacityEffect* self, const char* name ```
QVariant* q_graphicsopacityeffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsOpacityEffect* self ```
const char** q_graphicsopacityeffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsOpacityEffect* self ```
QBindingStorage* q_graphicsopacityeffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsOpacityEffect* self ```
const QBindingStorage* q_graphicsopacityeffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QObject*) ```
void q_graphicsopacityeffect_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsOpacityEffect* self ```
QObject* q_graphicsopacityeffect_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsOpacityEffect* self, const char* classname ```
bool q_graphicsopacityeffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsOpacityEffect* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicsopacityeffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsOpacityEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsopacityeffect_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsopacityeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsOpacityEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsopacityeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsOpacityEffect* self, QObject* param1 ```
void q_graphicsopacityeffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsopacityeffect_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* sourceRect ```
QRectF* q_graphicsopacityeffect_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* sourceRect ```
QRectF* q_graphicsopacityeffect_qbase_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* (*slot)(QGraphicsOpacityEffect*, QRectF*) ```
void q_graphicsopacityeffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int flags ```
void q_graphicsopacityeffect_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int flags ```
void q_graphicsopacityeffect_qbase_source_changed(void* self, int64_t flags);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, int) ```
void q_graphicsopacityeffect_on_source_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
bool q_graphicsopacityeffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
bool q_graphicsopacityeffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)(QGraphicsOpacityEffect*, QEvent*) ```
void q_graphicsopacityeffect_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsopacityeffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsopacityeffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)(QGraphicsOpacityEffect*, QObject*, QEvent*) ```
void q_graphicsopacityeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QTimerEvent* event ```
void q_graphicsopacityeffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QTimerEvent* event ```
void q_graphicsopacityeffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QTimerEvent*) ```
void q_graphicsopacityeffect_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QChildEvent* event ```
void q_graphicsopacityeffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QChildEvent* event ```
void q_graphicsopacityeffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QChildEvent*) ```
void q_graphicsopacityeffect_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
void q_graphicsopacityeffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
void q_graphicsopacityeffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QEvent*) ```
void q_graphicsopacityeffect_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QMetaMethod*) ```
void q_graphicsopacityeffect_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QMetaMethod*) ```
void q_graphicsopacityeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)() ```
void q_graphicsopacityeffect_on_update_bounding_rect(void* self, void (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)() ```
void q_graphicsopacityeffect_on_source_is_pixmap(void* self, bool (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QRectF* q_graphicsopacityeffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QRectF* q_graphicsopacityeffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* (*slot)() ```
void q_graphicsopacityeffect_on_source_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QPainter*) ```
void q_graphicsopacityeffect_on_draw_source(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QPixmap* q_graphicsopacityeffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QPixmap* q_graphicsopacityeffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QPixmap* (*slot)() ```
void q_graphicsopacityeffect_on_source_pixmap(void* self, QPixmap* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QObject* q_graphicsopacityeffect_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QObject* q_graphicsopacityeffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QObject* (*slot)() ```
void q_graphicsopacityeffect_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
int32_t q_graphicsopacityeffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
int32_t q_graphicsopacityeffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int32_t (*slot)() ```
void q_graphicsopacityeffect_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, const char* signal ```
int32_t q_graphicsopacityeffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, const char* signal ```
int32_t q_graphicsopacityeffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int32_t (*slot)(QGraphicsOpacityEffect*, const char*) ```
void q_graphicsopacityeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
bool q_graphicsopacityeffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
bool q_graphicsopacityeffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)(QGraphicsOpacityEffect*, QMetaMethod*) ```
void q_graphicsopacityeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QObject*, const char*) ```
void q_graphicsopacityeffect_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#dtor.QGraphicsOpacityEffect)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicseffect.html#types

typedef enum {
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEATTACHED = 1,
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEDETACHED = 2,
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEBOUNDINGRECTCHANGED = 4,
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEINVALIDATED = 8
} QGraphicsEffect__ChangeFlag;

typedef enum {
    QGRAPHICSEFFECT_PIXMAPPADMODE_NOPAD = 0,
    QGRAPHICSEFFECT_PIXMAPPADMODE_PADTOTRANSPARENTBORDER = 1,
    QGRAPHICSEFFECT_PIXMAPPADMODE_PADTOEFFECTIVEBOUNDINGRECT = 2
} QGraphicsEffect__PixmapPadMode;

typedef enum {
    QGRAPHICSBLUREFFECT_BLURHINT_PERFORMANCEHINT = 0,
    QGRAPHICSBLUREFFECT_BLURHINT_QUALITYHINT = 1,
    QGRAPHICSBLUREFFECT_BLURHINT_ANIMATIONHINT = 2
} QGraphicsBlurEffect__BlurHint;

#endif
