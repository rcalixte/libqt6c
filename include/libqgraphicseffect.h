#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSEFFECT_H
#define SRC_QT6C_LIBQGRAPHICSEFFECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html)

/// q_graphicseffect_new constructs a new QGraphicsEffect object.
///
QGraphicsEffect* q_graphicseffect_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html)

/// q_graphicseffect_new2 constructs a new QGraphicsEffect object.
///
/// @param parent QObject*
///
QGraphicsEffect* q_graphicseffect_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsEffect*
///
const QMetaObject* q_graphicseffect_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback const QMetaObject* func()
///
void q_graphicseffect_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
///
const QMetaObject* q_graphicseffect_qbase_meta_object(void* self);

/// @param self QGraphicsEffect*
/// @param param1 const char*
///
void* q_graphicseffect_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback void* func(QGraphicsEffect* self, const char* param1)
///
void q_graphicseffect_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param param1 const char*
///
void* q_graphicseffect_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicseffect_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback int32_t func(QGraphicsEffect* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicseffect_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicseffect_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicseffect_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// @param self QGraphicsEffect*
/// @param sourceRect QRectF*
///
QRectF* q_graphicseffect_bounding_rect_for(void* self, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QRectF* func(QGraphicsEffect* self, QRectF* sourceRect)
///
void q_graphicseffect_on_bounding_rect_for(void* self, QRectF* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param sourceRect QRectF*
///
QRectF* q_graphicseffect_qbase_bounding_rect_for(void* self, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// @param self QGraphicsEffect*
///
QRectF* q_graphicseffect_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_is_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// @param self QGraphicsEffect*
/// @param enable bool
///
void q_graphicseffect_set_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsEffect*
/// @param enabled bool
///
void q_graphicseffect_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, bool enabled)
///
void q_graphicseffect_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// @param self QGraphicsEffect*
/// @param painter QPainter*
///
void q_graphicseffect_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QPainter* painter)
///
void q_graphicseffect_on_draw(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param painter QPainter*
///
void q_graphicseffect_qbase_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// @param self QGraphicsEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicseffect_source_changed(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, flag of enum QGraphicsEffect__ChangeFlag flags)
///
void q_graphicseffect_on_source_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicseffect_qbase_source_changed(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_update_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback void func()
///
void q_graphicseffect_on_update_bounding_rect(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_qbase_update_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_source_is_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback bool func()
///
void q_graphicseffect_on_source_is_pixmap(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_qbase_source_is_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// @param self QGraphicsEffect*
///
QRectF* q_graphicseffect_source_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QRectF* func()
///
void q_graphicseffect_on_source_bounding_rect(void* self, QRectF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
///
QRectF* q_graphicseffect_qbase_source_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// @param self QGraphicsEffect*
/// @param painter QPainter*
///
void q_graphicseffect_draw_source(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QPainter* painter)
///
void q_graphicseffect_on_draw_source(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param painter QPainter*
///
void q_graphicseffect_qbase_draw_source(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// @param self QGraphicsEffect*
///
QPixmap* q_graphicseffect_source_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QPixmap* func()
///
void q_graphicseffect_on_source_pixmap(void* self, QPixmap* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
///
QPixmap* q_graphicseffect_qbase_source_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicseffect_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicseffect_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
///
QRectF* q_graphicseffect_source_bounding_rect1(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QRectF* func(QGraphicsEffect* self, enum Qt__CoordinateSystem system)
///
void q_graphicseffect_on_source_bounding_rect1(void* self, QRectF* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
///
QRectF* q_graphicseffect_qbase_source_bounding_rect1(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
///
QPixmap* q_graphicseffect_source_pixmap1(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QPixmap* func(QGraphicsEffect* self, enum Qt__CoordinateSystem system)
///
void q_graphicseffect_on_source_pixmap1(void* self, QPixmap* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
///
QPixmap* q_graphicseffect_qbase_source_pixmap1(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
/// @param offset QPoint*
///
QPixmap* q_graphicseffect_source_pixmap2(void* self, int32_t system, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QPixmap* func(QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset)
///
void q_graphicseffect_on_source_pixmap2(void* self, QPixmap* (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
/// @param offset QPoint*
///
QPixmap* q_graphicseffect_qbase_source_pixmap2(void* self, int32_t system, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
/// @param offset QPoint*
/// @param mode enum QGraphicsEffect__PixmapPadMode
///
QPixmap* q_graphicseffect_source_pixmap3(void* self, int32_t system, void* offset, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsEffect*
/// @param callback QPixmap* func(QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset, enum QGraphicsEffect__PixmapPadMode mode)
///
void q_graphicseffect_on_source_pixmap3(void* self, QPixmap* (*callback)(void*, int32_t, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Base class method implementation
///
/// @param self QGraphicsEffect*
/// @param system enum Qt__CoordinateSystem
/// @param offset QPoint*
/// @param mode enum QGraphicsEffect__PixmapPadMode
///
QPixmap* q_graphicseffect_qbase_source_pixmap3(void* self, int32_t system, void* offset, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsEffect*
///
const char* q_graphicseffect_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsEffect*
/// @param name char*
///
void q_graphicseffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsEffect*
///
bool q_graphicseffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsEffect*
/// @param b bool
///
bool q_graphicseffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsEffect*
///
QThread* q_graphicseffect_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsEffect*
/// @param thread QThread*
///
bool q_graphicseffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsEffect*
/// @param interval int
///
int32_t q_graphicseffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsEffect*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicseffect_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsEffect*
/// @param id int
///
void q_graphicseffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsEffect*
/// @param id enum Qt__TimerId
///
void q_graphicseffect_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsEffect*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicseffect_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsEffect*
/// @param parent QObject*
///
void q_graphicseffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsEffect*
/// @param filterObj QObject*
///
void q_graphicseffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsEffect*
/// @param obj QObject*
///
void q_graphicseffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicseffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicseffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicseffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicseffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsEffect*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicseffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsEffect*
/// @param name const char*
///
QVariant* q_graphicseffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsEffect*
///
const char** q_graphicseffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsEffect*
///
QBindingStorage* q_graphicseffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsEffect*
///
const QBindingStorage* q_graphicseffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self)
///
void q_graphicseffect_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsEffect*
///
QObject* q_graphicseffect_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsEffect*
/// @param classname const char*
///
bool q_graphicseffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsEffect*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicseffect_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsEffect*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicseffect_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicseffect_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicseffect_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsEffect*
/// @param param1 QObject*
///
void q_graphicseffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QObject* param1)
///
void q_graphicseffect_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QEvent*
///
bool q_graphicseffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QEvent*
///
bool q_graphicseffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback bool func(QGraphicsEffect* self, QEvent* event)
///
void q_graphicseffect_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicseffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicseffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback bool func(QGraphicsEffect* self, QObject* watched, QEvent* event)
///
void q_graphicseffect_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QTimerEvent*
///
void q_graphicseffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QTimerEvent*
///
void q_graphicseffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QTimerEvent* event)
///
void q_graphicseffect_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QChildEvent*
///
void q_graphicseffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QChildEvent*
///
void q_graphicseffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QChildEvent* event)
///
void q_graphicseffect_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QEvent*
///
void q_graphicseffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param event QEvent*
///
void q_graphicseffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QEvent* event)
///
void q_graphicseffect_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal QMetaMethod*
///
void q_graphicseffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal QMetaMethod*
///
void q_graphicseffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QMetaMethod* signal)
///
void q_graphicseffect_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal QMetaMethod*
///
void q_graphicseffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal QMetaMethod*
///
void q_graphicseffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, QMetaMethod* signal)
///
void q_graphicseffect_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
///
QObject* q_graphicseffect_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
///
QObject* q_graphicseffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback QObject* func()
///
void q_graphicseffect_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
///
int32_t q_graphicseffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
///
int32_t q_graphicseffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback int32_t func()
///
void q_graphicseffect_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal const char*
///
int32_t q_graphicseffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal const char*
///
int32_t q_graphicseffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback int32_t func(QGraphicsEffect* self, const char* signal)
///
void q_graphicseffect_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal QMetaMethod*
///
bool q_graphicseffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param signal QMetaMethod*
///
bool q_graphicseffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsEffect*
/// @param callback bool func(QGraphicsEffect* self, QMetaMethod* signal)
///
void q_graphicseffect_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsEffect*
/// @param callback void func(QGraphicsEffect* self, const char* objectName)
///
void q_graphicseffect_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#dtor.QGraphicsEffect)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsEffect*
///
void q_graphicseffect_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html)

/// q_graphicscolorizeeffect_new constructs a new QGraphicsColorizeEffect object.
///
QGraphicsColorizeEffect* q_graphicscolorizeeffect_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html)

/// q_graphicscolorizeeffect_new2 constructs a new QGraphicsColorizeEffect object.
///
/// @param parent QObject*
///
QGraphicsColorizeEffect* q_graphicscolorizeeffect_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsColorizeEffect*
///
const QMetaObject* q_graphicscolorizeeffect_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback const QMetaObject* func()
///
void q_graphicscolorizeeffect_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsColorizeEffect*
///
const QMetaObject* q_graphicscolorizeeffect_qbase_meta_object(void* self);

/// @param self QGraphicsColorizeEffect*
/// @param param1 const char*
///
void* q_graphicscolorizeeffect_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void* func(QGraphicsColorizeEffect* self, const char* param1)
///
void q_graphicscolorizeeffect_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsColorizeEffect*
/// @param param1 const char*
///
void* q_graphicscolorizeeffect_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsColorizeEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicscolorizeeffect_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback int32_t func(QGraphicsColorizeEffect* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicscolorizeeffect_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsColorizeEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicscolorizeeffect_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicscolorizeeffect_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#color)
///
/// @param self QGraphicsColorizeEffect*
///
QColor* q_graphicscolorizeeffect_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strength)
///
/// @param self QGraphicsColorizeEffect*
///
double q_graphicscolorizeeffect_strength(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setColor)
///
/// @param self QGraphicsColorizeEffect*
/// @param c QColor*
///
void q_graphicscolorizeeffect_set_color(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setStrength)
///
/// @param self QGraphicsColorizeEffect*
/// @param strength double
///
void q_graphicscolorizeeffect_set_strength(void* self, double strength);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
///
/// @param self QGraphicsColorizeEffect*
/// @param color QColor*
///
void q_graphicscolorizeeffect_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QColor* color)
///
void q_graphicscolorizeeffect_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
///
/// @param self QGraphicsColorizeEffect*
/// @param strength double
///
void q_graphicscolorizeeffect_strength_changed(void* self, double strength);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, double strength)
///
void q_graphicscolorizeeffect_on_strength_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// @param self QGraphicsColorizeEffect*
/// @param painter QPainter*
///
void q_graphicscolorizeeffect_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QPainter* painter)
///
void q_graphicscolorizeeffect_on_draw(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// Base class method implementation
///
/// @param self QGraphicsColorizeEffect*
/// @param painter QPainter*
///
void q_graphicscolorizeeffect_qbase_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicscolorizeeffect_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicscolorizeeffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// @param self QGraphicsColorizeEffect*
///
QRectF* q_graphicscolorizeeffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// @param self QGraphicsColorizeEffect*
/// @param enable bool
///
void q_graphicscolorizeeffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsColorizeEffect*
/// @param enabled bool
///
void q_graphicscolorizeeffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, bool enabled)
///
void q_graphicscolorizeeffect_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsColorizeEffect*
///
const char* q_graphicscolorizeeffect_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsColorizeEffect*
/// @param name char*
///
void q_graphicscolorizeeffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsColorizeEffect*
/// @param b bool
///
bool q_graphicscolorizeeffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsColorizeEffect*
///
QThread* q_graphicscolorizeeffect_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsColorizeEffect*
/// @param thread QThread*
///
bool q_graphicscolorizeeffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsColorizeEffect*
/// @param interval int
///
int32_t q_graphicscolorizeeffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsColorizeEffect*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicscolorizeeffect_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsColorizeEffect*
/// @param id int
///
void q_graphicscolorizeeffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsColorizeEffect*
/// @param id enum Qt__TimerId
///
void q_graphicscolorizeeffect_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsColorizeEffect*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicscolorizeeffect_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsColorizeEffect*
/// @param parent QObject*
///
void q_graphicscolorizeeffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsColorizeEffect*
/// @param filterObj QObject*
///
void q_graphicscolorizeeffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsColorizeEffect*
/// @param obj QObject*
///
void q_graphicscolorizeeffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicscolorizeeffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsColorizeEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicscolorizeeffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicscolorizeeffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicscolorizeeffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsColorizeEffect*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicscolorizeeffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsColorizeEffect*
/// @param name const char*
///
QVariant* q_graphicscolorizeeffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsColorizeEffect*
///
const char** q_graphicscolorizeeffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsColorizeEffect*
///
QBindingStorage* q_graphicscolorizeeffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsColorizeEffect*
///
const QBindingStorage* q_graphicscolorizeeffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self)
///
void q_graphicscolorizeeffect_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsColorizeEffect*
///
QObject* q_graphicscolorizeeffect_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsColorizeEffect*
/// @param classname const char*
///
bool q_graphicscolorizeeffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsColorizeEffect*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicscolorizeeffect_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsColorizeEffect*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicscolorizeeffect_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicscolorizeeffect_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsColorizeEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicscolorizeeffect_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsColorizeEffect*
/// @param param1 QObject*
///
void q_graphicscolorizeeffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QObject* param1)
///
void q_graphicscolorizeeffect_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param sourceRect QRectF*
///
QRectF* q_graphicscolorizeeffect_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param sourceRect QRectF*
///
QRectF* q_graphicscolorizeeffect_qbase_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback QRectF* func(QGraphicsColorizeEffect* self, QRectF* sourceRect)
///
void q_graphicscolorizeeffect_on_bounding_rect_for(void* self, QRectF* (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicscolorizeeffect_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicscolorizeeffect_qbase_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, flag of enum QGraphicsEffect__ChangeFlag flags)
///
void q_graphicscolorizeeffect_on_source_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QEvent*
///
bool q_graphicscolorizeeffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QEvent*
///
bool q_graphicscolorizeeffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback bool func(QGraphicsColorizeEffect* self, QEvent* event)
///
void q_graphicscolorizeeffect_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicscolorizeeffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicscolorizeeffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback bool func(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event)
///
void q_graphicscolorizeeffect_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QTimerEvent*
///
void q_graphicscolorizeeffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QTimerEvent*
///
void q_graphicscolorizeeffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QTimerEvent* event)
///
void q_graphicscolorizeeffect_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QChildEvent*
///
void q_graphicscolorizeeffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QChildEvent*
///
void q_graphicscolorizeeffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QChildEvent* event)
///
void q_graphicscolorizeeffect_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QEvent*
///
void q_graphicscolorizeeffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param event QEvent*
///
void q_graphicscolorizeeffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QEvent* event)
///
void q_graphicscolorizeeffect_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal QMetaMethod*
///
void q_graphicscolorizeeffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal QMetaMethod*
///
void q_graphicscolorizeeffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QMetaMethod* signal)
///
void q_graphicscolorizeeffect_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal QMetaMethod*
///
void q_graphicscolorizeeffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal QMetaMethod*
///
void q_graphicscolorizeeffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QMetaMethod* signal)
///
void q_graphicscolorizeeffect_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func()
///
void q_graphicscolorizeeffect_on_update_bounding_rect(void* self, void (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
bool q_graphicscolorizeeffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback bool func()
///
void q_graphicscolorizeeffect_on_source_is_pixmap(void* self, bool (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
QRectF* q_graphicscolorizeeffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
QRectF* q_graphicscolorizeeffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback QRectF* func()
///
void q_graphicscolorizeeffect_on_source_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param painter QPainter*
///
void q_graphicscolorizeeffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param painter QPainter*
///
void q_graphicscolorizeeffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, QPainter* painter)
///
void q_graphicscolorizeeffect_on_draw_source(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
QPixmap* q_graphicscolorizeeffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
QPixmap* q_graphicscolorizeeffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback QPixmap* func()
///
void q_graphicscolorizeeffect_on_source_pixmap(void* self, QPixmap* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
QObject* q_graphicscolorizeeffect_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
QObject* q_graphicscolorizeeffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback QObject* func()
///
void q_graphicscolorizeeffect_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
int32_t q_graphicscolorizeeffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
///
int32_t q_graphicscolorizeeffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback int32_t func()
///
void q_graphicscolorizeeffect_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal const char*
///
int32_t q_graphicscolorizeeffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal const char*
///
int32_t q_graphicscolorizeeffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback int32_t func(QGraphicsColorizeEffect* self, const char* signal)
///
void q_graphicscolorizeeffect_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal QMetaMethod*
///
bool q_graphicscolorizeeffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param signal QMetaMethod*
///
bool q_graphicscolorizeeffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsColorizeEffect*
/// @param callback bool func(QGraphicsColorizeEffect* self, QMetaMethod* signal)
///
void q_graphicscolorizeeffect_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsColorizeEffect*
/// @param callback void func(QGraphicsColorizeEffect* self, const char* objectName)
///
void q_graphicscolorizeeffect_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#dtor.QGraphicsColorizeEffect)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsColorizeEffect*
///
void q_graphicscolorizeeffect_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html)

/// q_graphicsblureffect_new constructs a new QGraphicsBlurEffect object.
///
QGraphicsBlurEffect* q_graphicsblureffect_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html)

/// q_graphicsblureffect_new2 constructs a new QGraphicsBlurEffect object.
///
/// @param parent QObject*
///
QGraphicsBlurEffect* q_graphicsblureffect_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsBlurEffect*
///
const QMetaObject* q_graphicsblureffect_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsBlurEffect*
/// @param callback const QMetaObject* func()
///
void q_graphicsblureffect_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsBlurEffect*
///
const QMetaObject* q_graphicsblureffect_qbase_meta_object(void* self);

/// @param self QGraphicsBlurEffect*
/// @param param1 const char*
///
void* q_graphicsblureffect_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void* func(QGraphicsBlurEffect* self, const char* param1)
///
void q_graphicsblureffect_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsBlurEffect*
/// @param param1 const char*
///
void* q_graphicsblureffect_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsBlurEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsblureffect_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsBlurEffect*
/// @param callback int32_t func(QGraphicsBlurEffect* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsblureffect_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsBlurEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsblureffect_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsblureffect_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// @param self QGraphicsBlurEffect*
/// @param rect QRectF*
///
QRectF* q_graphicsblureffect_bounding_rect_for(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsBlurEffect*
/// @param callback QRectF* func(QGraphicsBlurEffect* self, QRectF* rect)
///
void q_graphicsblureffect_on_bounding_rect_for(void* self, QRectF* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// Base class method implementation
///
/// @param self QGraphicsBlurEffect*
/// @param rect QRectF*
///
QRectF* q_graphicsblureffect_qbase_bounding_rect_for(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadius)
///
/// @param self QGraphicsBlurEffect*
///
double q_graphicsblureffect_blur_radius(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHints)
///
/// @param self QGraphicsBlurEffect*
///
/// @return flag of enum QGraphicsBlurEffect__BlurHint
///
int32_t q_graphicsblureffect_blur_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurRadius)
///
/// @param self QGraphicsBlurEffect*
/// @param blurRadius double
///
void q_graphicsblureffect_set_blur_radius(void* self, double blurRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurHints)
///
/// @param self QGraphicsBlurEffect*
/// @param hints flag of enum QGraphicsBlurEffect__BlurHint
///
void q_graphicsblureffect_set_blur_hints(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
///
/// @param self QGraphicsBlurEffect*
/// @param blurRadius double
///
void q_graphicsblureffect_blur_radius_changed(void* self, double blurRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, double blurRadius)
///
void q_graphicsblureffect_on_blur_radius_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
///
/// @param self QGraphicsBlurEffect*
/// @param hints flag of enum QGraphicsBlurEffect__BlurHint
///
void q_graphicsblureffect_blur_hints_changed(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, flag of enum QGraphicsBlurEffect__BlurHint hints)
///
void q_graphicsblureffect_on_blur_hints_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// @param self QGraphicsBlurEffect*
/// @param painter QPainter*
///
void q_graphicsblureffect_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QPainter* painter)
///
void q_graphicsblureffect_on_draw(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// Base class method implementation
///
/// @param self QGraphicsBlurEffect*
/// @param painter QPainter*
///
void q_graphicsblureffect_qbase_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsblureffect_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsblureffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// @param self QGraphicsBlurEffect*
///
QRectF* q_graphicsblureffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// @param self QGraphicsBlurEffect*
/// @param enable bool
///
void q_graphicsblureffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsBlurEffect*
/// @param enabled bool
///
void q_graphicsblureffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, bool enabled)
///
void q_graphicsblureffect_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsBlurEffect*
///
const char* q_graphicsblureffect_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsBlurEffect*
/// @param name char*
///
void q_graphicsblureffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsBlurEffect*
/// @param b bool
///
bool q_graphicsblureffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsBlurEffect*
///
QThread* q_graphicsblureffect_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsBlurEffect*
/// @param thread QThread*
///
bool q_graphicsblureffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsBlurEffect*
/// @param interval int
///
int32_t q_graphicsblureffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsBlurEffect*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsblureffect_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsBlurEffect*
/// @param id int
///
void q_graphicsblureffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsBlurEffect*
/// @param id enum Qt__TimerId
///
void q_graphicsblureffect_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsBlurEffect*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsblureffect_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsBlurEffect*
/// @param parent QObject*
///
void q_graphicsblureffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsBlurEffect*
/// @param filterObj QObject*
///
void q_graphicsblureffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsBlurEffect*
/// @param obj QObject*
///
void q_graphicsblureffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsblureffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsBlurEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsblureffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsblureffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsblureffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsBlurEffect*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsblureffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsBlurEffect*
/// @param name const char*
///
QVariant* q_graphicsblureffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsBlurEffect*
///
const char** q_graphicsblureffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsBlurEffect*
///
QBindingStorage* q_graphicsblureffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsBlurEffect*
///
const QBindingStorage* q_graphicsblureffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self)
///
void q_graphicsblureffect_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsBlurEffect*
///
QObject* q_graphicsblureffect_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsBlurEffect*
/// @param classname const char*
///
bool q_graphicsblureffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsBlurEffect*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsblureffect_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsBlurEffect*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsblureffect_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsblureffect_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsBlurEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsblureffect_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsBlurEffect*
/// @param param1 QObject*
///
void q_graphicsblureffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QObject* param1)
///
void q_graphicsblureffect_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicsblureffect_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicsblureffect_qbase_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, flag of enum QGraphicsEffect__ChangeFlag flags)
///
void q_graphicsblureffect_on_source_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QEvent*
///
bool q_graphicsblureffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QEvent*
///
bool q_graphicsblureffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback bool func(QGraphicsBlurEffect* self, QEvent* event)
///
void q_graphicsblureffect_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsblureffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsblureffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback bool func(QGraphicsBlurEffect* self, QObject* watched, QEvent* event)
///
void q_graphicsblureffect_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QTimerEvent*
///
void q_graphicsblureffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QTimerEvent*
///
void q_graphicsblureffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QTimerEvent* event)
///
void q_graphicsblureffect_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QChildEvent*
///
void q_graphicsblureffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QChildEvent*
///
void q_graphicsblureffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QChildEvent* event)
///
void q_graphicsblureffect_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QEvent*
///
void q_graphicsblureffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param event QEvent*
///
void q_graphicsblureffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QEvent* event)
///
void q_graphicsblureffect_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal QMetaMethod*
///
void q_graphicsblureffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal QMetaMethod*
///
void q_graphicsblureffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QMetaMethod* signal)
///
void q_graphicsblureffect_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal QMetaMethod*
///
void q_graphicsblureffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal QMetaMethod*
///
void q_graphicsblureffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QMetaMethod* signal)
///
void q_graphicsblureffect_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func()
///
void q_graphicsblureffect_on_update_bounding_rect(void* self, void (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
bool q_graphicsblureffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback bool func()
///
void q_graphicsblureffect_on_source_is_pixmap(void* self, bool (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
QRectF* q_graphicsblureffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
QRectF* q_graphicsblureffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback QRectF* func()
///
void q_graphicsblureffect_on_source_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param painter QPainter*
///
void q_graphicsblureffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param painter QPainter*
///
void q_graphicsblureffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, QPainter* painter)
///
void q_graphicsblureffect_on_draw_source(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
QPixmap* q_graphicsblureffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
QPixmap* q_graphicsblureffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback QPixmap* func()
///
void q_graphicsblureffect_on_source_pixmap(void* self, QPixmap* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
QObject* q_graphicsblureffect_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
QObject* q_graphicsblureffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback QObject* func()
///
void q_graphicsblureffect_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
int32_t q_graphicsblureffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
///
int32_t q_graphicsblureffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback int32_t func()
///
void q_graphicsblureffect_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal const char*
///
int32_t q_graphicsblureffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal const char*
///
int32_t q_graphicsblureffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback int32_t func(QGraphicsBlurEffect* self, const char* signal)
///
void q_graphicsblureffect_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal QMetaMethod*
///
bool q_graphicsblureffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param signal QMetaMethod*
///
bool q_graphicsblureffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsBlurEffect*
/// @param callback bool func(QGraphicsBlurEffect* self, QMetaMethod* signal)
///
void q_graphicsblureffect_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsBlurEffect*
/// @param callback void func(QGraphicsBlurEffect* self, const char* objectName)
///
void q_graphicsblureffect_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#dtor.QGraphicsBlurEffect)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsBlurEffect*
///
void q_graphicsblureffect_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html)

/// q_graphicsdropshadoweffect_new constructs a new QGraphicsDropShadowEffect object.
///
QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html)

/// q_graphicsdropshadoweffect_new2 constructs a new QGraphicsDropShadowEffect object.
///
/// @param parent QObject*
///
QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsDropShadowEffect*
///
const QMetaObject* q_graphicsdropshadoweffect_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback const QMetaObject* func()
///
void q_graphicsdropshadoweffect_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsDropShadowEffect*
///
const QMetaObject* q_graphicsdropshadoweffect_qbase_meta_object(void* self);

/// @param self QGraphicsDropShadowEffect*
/// @param param1 const char*
///
void* q_graphicsdropshadoweffect_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void* func(QGraphicsDropShadowEffect* self, const char* param1)
///
void q_graphicsdropshadoweffect_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsDropShadowEffect*
/// @param param1 const char*
///
void* q_graphicsdropshadoweffect_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsDropShadowEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsdropshadoweffect_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback int32_t func(QGraphicsDropShadowEffect* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsdropshadoweffect_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsDropShadowEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsdropshadoweffect_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsdropshadoweffect_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// @param self QGraphicsDropShadowEffect*
/// @param rect QRectF*
///
QRectF* q_graphicsdropshadoweffect_bounding_rect_for(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback QRectF* func(QGraphicsDropShadowEffect* self, QRectF* rect)
///
void q_graphicsdropshadoweffect_on_bounding_rect_for(void* self, QRectF* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// Base class method implementation
///
/// @param self QGraphicsDropShadowEffect*
/// @param rect QRectF*
///
QRectF* q_graphicsdropshadoweffect_qbase_bounding_rect_for(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offset)
///
/// @param self QGraphicsDropShadowEffect*
///
QPointF* q_graphicsdropshadoweffect_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#xOffset)
///
/// @param self QGraphicsDropShadowEffect*
///
double q_graphicsdropshadoweffect_x_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#yOffset)
///
/// @param self QGraphicsDropShadowEffect*
///
double q_graphicsdropshadoweffect_y_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadius)
///
/// @param self QGraphicsDropShadowEffect*
///
double q_graphicsdropshadoweffect_blur_radius(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#color)
///
/// @param self QGraphicsDropShadowEffect*
///
QColor* q_graphicsdropshadoweffect_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// @param self QGraphicsDropShadowEffect*
/// @param ofs QPointF*
///
void q_graphicsdropshadoweffect_set_offset(void* self, void* ofs);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// @param self QGraphicsDropShadowEffect*
/// @param dx double
/// @param dy double
///
void q_graphicsdropshadoweffect_set_offset2(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// @param self QGraphicsDropShadowEffect*
/// @param d double
///
void q_graphicsdropshadoweffect_set_offset3(void* self, double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setXOffset)
///
/// @param self QGraphicsDropShadowEffect*
/// @param dx double
///
void q_graphicsdropshadoweffect_set_x_offset(void* self, double dx);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setYOffset)
///
/// @param self QGraphicsDropShadowEffect*
/// @param dy double
///
void q_graphicsdropshadoweffect_set_y_offset(void* self, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setBlurRadius)
///
/// @param self QGraphicsDropShadowEffect*
/// @param blurRadius double
///
void q_graphicsdropshadoweffect_set_blur_radius(void* self, double blurRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setColor)
///
/// @param self QGraphicsDropShadowEffect*
/// @param color QColor*
///
void q_graphicsdropshadoweffect_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param offset QPointF*
///
void q_graphicsdropshadoweffect_offset_changed(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QPointF* offset)
///
void q_graphicsdropshadoweffect_on_offset_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param blurRadius double
///
void q_graphicsdropshadoweffect_blur_radius_changed(void* self, double blurRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, double blurRadius)
///
void q_graphicsdropshadoweffect_on_blur_radius_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param color QColor*
///
void q_graphicsdropshadoweffect_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QColor* color)
///
void q_graphicsdropshadoweffect_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// @param self QGraphicsDropShadowEffect*
/// @param painter QPainter*
///
void q_graphicsdropshadoweffect_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QPainter* painter)
///
void q_graphicsdropshadoweffect_on_draw(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// Base class method implementation
///
/// @param self QGraphicsDropShadowEffect*
/// @param painter QPainter*
///
void q_graphicsdropshadoweffect_qbase_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsdropshadoweffect_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsdropshadoweffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// @param self QGraphicsDropShadowEffect*
///
QRectF* q_graphicsdropshadoweffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// @param self QGraphicsDropShadowEffect*
/// @param enable bool
///
void q_graphicsdropshadoweffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param enabled bool
///
void q_graphicsdropshadoweffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, bool enabled)
///
void q_graphicsdropshadoweffect_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsDropShadowEffect*
///
const char* q_graphicsdropshadoweffect_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsDropShadowEffect*
/// @param name char*
///
void q_graphicsdropshadoweffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsDropShadowEffect*
/// @param b bool
///
bool q_graphicsdropshadoweffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsDropShadowEffect*
///
QThread* q_graphicsdropshadoweffect_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsDropShadowEffect*
/// @param thread QThread*
///
bool q_graphicsdropshadoweffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsDropShadowEffect*
/// @param interval int
///
int32_t q_graphicsdropshadoweffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsDropShadowEffect*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsdropshadoweffect_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsDropShadowEffect*
/// @param id int
///
void q_graphicsdropshadoweffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsDropShadowEffect*
/// @param id enum Qt__TimerId
///
void q_graphicsdropshadoweffect_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsDropShadowEffect*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsdropshadoweffect_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsDropShadowEffect*
/// @param parent QObject*
///
void q_graphicsdropshadoweffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsDropShadowEffect*
/// @param filterObj QObject*
///
void q_graphicsdropshadoweffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsDropShadowEffect*
/// @param obj QObject*
///
void q_graphicsdropshadoweffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsdropshadoweffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsDropShadowEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsdropshadoweffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsdropshadoweffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsdropshadoweffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsDropShadowEffect*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsdropshadoweffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsDropShadowEffect*
/// @param name const char*
///
QVariant* q_graphicsdropshadoweffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsDropShadowEffect*
///
const char** q_graphicsdropshadoweffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsDropShadowEffect*
///
QBindingStorage* q_graphicsdropshadoweffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsDropShadowEffect*
///
const QBindingStorage* q_graphicsdropshadoweffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self)
///
void q_graphicsdropshadoweffect_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsDropShadowEffect*
///
QObject* q_graphicsdropshadoweffect_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsDropShadowEffect*
/// @param classname const char*
///
bool q_graphicsdropshadoweffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsDropShadowEffect*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsdropshadoweffect_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsDropShadowEffect*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsdropshadoweffect_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsdropshadoweffect_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsDropShadowEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsdropshadoweffect_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsDropShadowEffect*
/// @param param1 QObject*
///
void q_graphicsdropshadoweffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QObject* param1)
///
void q_graphicsdropshadoweffect_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicsdropshadoweffect_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicsdropshadoweffect_qbase_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, flag of enum QGraphicsEffect__ChangeFlag flags)
///
void q_graphicsdropshadoweffect_on_source_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QEvent*
///
bool q_graphicsdropshadoweffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QEvent*
///
bool q_graphicsdropshadoweffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback bool func(QGraphicsDropShadowEffect* self, QEvent* event)
///
void q_graphicsdropshadoweffect_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsdropshadoweffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsdropshadoweffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback bool func(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event)
///
void q_graphicsdropshadoweffect_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QTimerEvent*
///
void q_graphicsdropshadoweffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QTimerEvent*
///
void q_graphicsdropshadoweffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QTimerEvent* event)
///
void q_graphicsdropshadoweffect_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QChildEvent*
///
void q_graphicsdropshadoweffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QChildEvent*
///
void q_graphicsdropshadoweffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QChildEvent* event)
///
void q_graphicsdropshadoweffect_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QEvent*
///
void q_graphicsdropshadoweffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param event QEvent*
///
void q_graphicsdropshadoweffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QEvent* event)
///
void q_graphicsdropshadoweffect_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal QMetaMethod*
///
void q_graphicsdropshadoweffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal QMetaMethod*
///
void q_graphicsdropshadoweffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QMetaMethod* signal)
///
void q_graphicsdropshadoweffect_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal QMetaMethod*
///
void q_graphicsdropshadoweffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal QMetaMethod*
///
void q_graphicsdropshadoweffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QMetaMethod* signal)
///
void q_graphicsdropshadoweffect_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func()
///
void q_graphicsdropshadoweffect_on_update_bounding_rect(void* self, void (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
bool q_graphicsdropshadoweffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback bool func()
///
void q_graphicsdropshadoweffect_on_source_is_pixmap(void* self, bool (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
QRectF* q_graphicsdropshadoweffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
QRectF* q_graphicsdropshadoweffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback QRectF* func()
///
void q_graphicsdropshadoweffect_on_source_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param painter QPainter*
///
void q_graphicsdropshadoweffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param painter QPainter*
///
void q_graphicsdropshadoweffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, QPainter* painter)
///
void q_graphicsdropshadoweffect_on_draw_source(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
QPixmap* q_graphicsdropshadoweffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
QPixmap* q_graphicsdropshadoweffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback QPixmap* func()
///
void q_graphicsdropshadoweffect_on_source_pixmap(void* self, QPixmap* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
QObject* q_graphicsdropshadoweffect_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
QObject* q_graphicsdropshadoweffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback QObject* func()
///
void q_graphicsdropshadoweffect_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
int32_t q_graphicsdropshadoweffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
///
int32_t q_graphicsdropshadoweffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback int32_t func()
///
void q_graphicsdropshadoweffect_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal const char*
///
int32_t q_graphicsdropshadoweffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal const char*
///
int32_t q_graphicsdropshadoweffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback int32_t func(QGraphicsDropShadowEffect* self, const char* signal)
///
void q_graphicsdropshadoweffect_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal QMetaMethod*
///
bool q_graphicsdropshadoweffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param signal QMetaMethod*
///
bool q_graphicsdropshadoweffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback bool func(QGraphicsDropShadowEffect* self, QMetaMethod* signal)
///
void q_graphicsdropshadoweffect_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsDropShadowEffect*
/// @param callback void func(QGraphicsDropShadowEffect* self, const char* objectName)
///
void q_graphicsdropshadoweffect_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#dtor.QGraphicsDropShadowEffect)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsDropShadowEffect*
///
void q_graphicsdropshadoweffect_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html)

/// q_graphicsopacityeffect_new constructs a new QGraphicsOpacityEffect object.
///
QGraphicsOpacityEffect* q_graphicsopacityeffect_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html)

/// q_graphicsopacityeffect_new2 constructs a new QGraphicsOpacityEffect object.
///
/// @param parent QObject*
///
QGraphicsOpacityEffect* q_graphicsopacityeffect_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsOpacityEffect*
///
const QMetaObject* q_graphicsopacityeffect_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback const QMetaObject* func()
///
void q_graphicsopacityeffect_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsOpacityEffect*
///
const QMetaObject* q_graphicsopacityeffect_qbase_meta_object(void* self);

/// @param self QGraphicsOpacityEffect*
/// @param param1 const char*
///
void* q_graphicsopacityeffect_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void* func(QGraphicsOpacityEffect* self, const char* param1)
///
void q_graphicsopacityeffect_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsOpacityEffect*
/// @param param1 const char*
///
void* q_graphicsopacityeffect_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsOpacityEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsopacityeffect_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback int32_t func(QGraphicsOpacityEffect* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsopacityeffect_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsOpacityEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsopacityeffect_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsopacityeffect_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacity)
///
/// @param self QGraphicsOpacityEffect*
///
double q_graphicsopacityeffect_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMask)
///
/// @param self QGraphicsOpacityEffect*
///
QBrush* q_graphicsopacityeffect_opacity_mask(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacity)
///
/// @param self QGraphicsOpacityEffect*
/// @param opacity double
///
void q_graphicsopacityeffect_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacityMask)
///
/// @param self QGraphicsOpacityEffect*
/// @param mask QBrush*
///
void q_graphicsopacityeffect_set_opacity_mask(void* self, void* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
///
/// @param self QGraphicsOpacityEffect*
/// @param opacity double
///
void q_graphicsopacityeffect_opacity_changed(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, double opacity)
///
void q_graphicsopacityeffect_on_opacity_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
///
/// @param self QGraphicsOpacityEffect*
/// @param mask QBrush*
///
void q_graphicsopacityeffect_opacity_mask_changed(void* self, void* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QBrush* mask)
///
void q_graphicsopacityeffect_on_opacity_mask_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// @param self QGraphicsOpacityEffect*
/// @param painter QPainter*
///
void q_graphicsopacityeffect_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QPainter* painter)
///
void q_graphicsopacityeffect_on_draw(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// Base class method implementation
///
/// @param self QGraphicsOpacityEffect*
/// @param painter QPainter*
///
void q_graphicsopacityeffect_qbase_draw(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsopacityeffect_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsopacityeffect_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// @param self QGraphicsOpacityEffect*
///
QRectF* q_graphicsopacityeffect_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_is_enabled(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// @param self QGraphicsOpacityEffect*
/// @param enable bool
///
void q_graphicsopacityeffect_set_enabled(void* self, bool enable);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_update(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsOpacityEffect*
/// @param enabled bool
///
void q_graphicsopacityeffect_enabled_changed(void* self, bool enabled);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, bool enabled)
///
void q_graphicsopacityeffect_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsOpacityEffect*
///
const char* q_graphicsopacityeffect_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsOpacityEffect*
/// @param name char*
///
void q_graphicsopacityeffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsOpacityEffect*
/// @param b bool
///
bool q_graphicsopacityeffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsOpacityEffect*
///
QThread* q_graphicsopacityeffect_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsOpacityEffect*
/// @param thread QThread*
///
bool q_graphicsopacityeffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsOpacityEffect*
/// @param interval int
///
int32_t q_graphicsopacityeffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsOpacityEffect*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsopacityeffect_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsOpacityEffect*
/// @param id int
///
void q_graphicsopacityeffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsOpacityEffect*
/// @param id enum Qt__TimerId
///
void q_graphicsopacityeffect_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsOpacityEffect*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsopacityeffect_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsOpacityEffect*
/// @param parent QObject*
///
void q_graphicsopacityeffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsOpacityEffect*
/// @param filterObj QObject*
///
void q_graphicsopacityeffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsOpacityEffect*
/// @param obj QObject*
///
void q_graphicsopacityeffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsopacityeffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsOpacityEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsopacityeffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsopacityeffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsopacityeffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsOpacityEffect*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsopacityeffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsOpacityEffect*
/// @param name const char*
///
QVariant* q_graphicsopacityeffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsOpacityEffect*
///
const char** q_graphicsopacityeffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsOpacityEffect*
///
QBindingStorage* q_graphicsopacityeffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsOpacityEffect*
///
const QBindingStorage* q_graphicsopacityeffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self)
///
void q_graphicsopacityeffect_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsOpacityEffect*
///
QObject* q_graphicsopacityeffect_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsOpacityEffect*
/// @param classname const char*
///
bool q_graphicsopacityeffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsOpacityEffect*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsopacityeffect_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsOpacityEffect*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsopacityeffect_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsopacityeffect_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsOpacityEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsopacityeffect_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsOpacityEffect*
/// @param param1 QObject*
///
void q_graphicsopacityeffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QObject* param1)
///
void q_graphicsopacityeffect_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param sourceRect QRectF*
///
QRectF* q_graphicsopacityeffect_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param sourceRect QRectF*
///
QRectF* q_graphicsopacityeffect_qbase_bounding_rect_for(void* self, void* sourceRect);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback QRectF* func(QGraphicsOpacityEffect* self, QRectF* sourceRect)
///
void q_graphicsopacityeffect_on_bounding_rect_for(void* self, QRectF* (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicsopacityeffect_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param flags flag of enum QGraphicsEffect__ChangeFlag
///
void q_graphicsopacityeffect_qbase_source_changed(void* self, int32_t flags);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, flag of enum QGraphicsEffect__ChangeFlag flags)
///
void q_graphicsopacityeffect_on_source_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QEvent*
///
bool q_graphicsopacityeffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QEvent*
///
bool q_graphicsopacityeffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback bool func(QGraphicsOpacityEffect* self, QEvent* event)
///
void q_graphicsopacityeffect_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsopacityeffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsopacityeffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback bool func(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event)
///
void q_graphicsopacityeffect_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QTimerEvent*
///
void q_graphicsopacityeffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QTimerEvent*
///
void q_graphicsopacityeffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QTimerEvent* event)
///
void q_graphicsopacityeffect_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QChildEvent*
///
void q_graphicsopacityeffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QChildEvent*
///
void q_graphicsopacityeffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QChildEvent* event)
///
void q_graphicsopacityeffect_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QEvent*
///
void q_graphicsopacityeffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param event QEvent*
///
void q_graphicsopacityeffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QEvent* event)
///
void q_graphicsopacityeffect_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal QMetaMethod*
///
void q_graphicsopacityeffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal QMetaMethod*
///
void q_graphicsopacityeffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QMetaMethod* signal)
///
void q_graphicsopacityeffect_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal QMetaMethod*
///
void q_graphicsopacityeffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal QMetaMethod*
///
void q_graphicsopacityeffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QMetaMethod* signal)
///
void q_graphicsopacityeffect_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_qbase_update_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func()
///
void q_graphicsopacityeffect_on_update_bounding_rect(void* self, void (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
bool q_graphicsopacityeffect_qbase_source_is_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback bool func()
///
void q_graphicsopacityeffect_on_source_is_pixmap(void* self, bool (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
QRectF* q_graphicsopacityeffect_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
QRectF* q_graphicsopacityeffect_qbase_source_bounding_rect(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback QRectF* func()
///
void q_graphicsopacityeffect_on_source_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param painter QPainter*
///
void q_graphicsopacityeffect_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param painter QPainter*
///
void q_graphicsopacityeffect_qbase_draw_source(void* self, void* painter);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, QPainter* painter)
///
void q_graphicsopacityeffect_on_draw_source(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
QPixmap* q_graphicsopacityeffect_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
QPixmap* q_graphicsopacityeffect_qbase_source_pixmap(void* self);

/// Inherited from QGraphicsEffect
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback QPixmap* func()
///
void q_graphicsopacityeffect_on_source_pixmap(void* self, QPixmap* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
QObject* q_graphicsopacityeffect_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
QObject* q_graphicsopacityeffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback QObject* func()
///
void q_graphicsopacityeffect_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
int32_t q_graphicsopacityeffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
///
int32_t q_graphicsopacityeffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback int32_t func()
///
void q_graphicsopacityeffect_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal const char*
///
int32_t q_graphicsopacityeffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal const char*
///
int32_t q_graphicsopacityeffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback int32_t func(QGraphicsOpacityEffect* self, const char* signal)
///
void q_graphicsopacityeffect_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal QMetaMethod*
///
bool q_graphicsopacityeffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param signal QMetaMethod*
///
bool q_graphicsopacityeffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsOpacityEffect*
/// @param callback bool func(QGraphicsOpacityEffect* self, QMetaMethod* signal)
///
void q_graphicsopacityeffect_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsOpacityEffect*
/// @param callback void func(QGraphicsOpacityEffect* self, const char* objectName)
///
void q_graphicsopacityeffect_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#dtor.QGraphicsOpacityEffect)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsOpacityEffect*
///
void q_graphicsopacityeffect_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#public-types)

typedef enum {
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEATTACHED = 1,
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEDETACHED = 2,
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEBOUNDINGRECTCHANGED = 4,
    QGRAPHICSEFFECT_CHANGEFLAG_SOURCEINVALIDATED = 8
} QGraphicsEffect__ChangeFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#public-types)

typedef enum {
    QGRAPHICSEFFECT_PIXMAPPADMODE_NOPAD = 0,
    QGRAPHICSEFFECT_PIXMAPPADMODE_PADTOTRANSPARENTBORDER = 1,
    QGRAPHICSEFFECT_PIXMAPPADMODE_PADTOEFFECTIVEBOUNDINGRECT = 2
} QGraphicsEffect__PixmapPadMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#public-types)

typedef enum {
    QGRAPHICSBLUREFFECT_BLURHINT_PERFORMANCEHINT = 0,
    QGRAPHICSBLUREFFECT_BLURHINT_QUALITYHINT = 1,
    QGRAPHICSBLUREFFECT_BLURHINT_ANIMATIONHINT = 2
} QGraphicsBlurEffect__BlurHint;

#endif
