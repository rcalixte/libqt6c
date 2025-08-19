#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSITEMANIMATION_H
#define SRCQT6C_LIBQGRAPHICSITEMANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicsitemanimation.html

/// q_graphicsitemanimation_new constructs a new QGraphicsItemAnimation object.
///
QGraphicsItemAnimation* q_graphicsitemanimation_new();

/// q_graphicsitemanimation_new2 constructs a new QGraphicsItemAnimation object.
///
/// @param parent QObject*
QGraphicsItemAnimation* q_graphicsitemanimation_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsItemAnimation*
const QMetaObject* q_graphicsitemanimation_meta_object(void* self);

/// @param self QGraphicsItemAnimation*
/// @param param1 const char*
void* q_graphicsitemanimation_metacast(void* self, const char* param1);

/// @param self QGraphicsItemAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsitemanimation_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsItemAnimation*
/// @param callback int32_t fn(QGraphicsItemAnimation*, enum QMetaObject__Call, int, void*)
void q_graphicsitemanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsItemAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsitemanimation_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_graphicsitemanimation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#item)
///
/// @param self QGraphicsItemAnimation*
QGraphicsItem* q_graphicsitemanimation_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setItem)
///
/// @param self QGraphicsItemAnimation*
/// @param item QGraphicsItem*
void q_graphicsitemanimation_set_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#timeLine)
///
/// @param self QGraphicsItemAnimation*
QTimeLine* q_graphicsitemanimation_time_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTimeLine)
///
/// @param self QGraphicsItemAnimation*
/// @param timeLine QTimeLine*
void q_graphicsitemanimation_set_time_line(void* self, void* timeLine);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
QPointF* q_graphicsitemanimation_pos_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posList)
///
/// @param self QGraphicsItemAnimation*
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_pos_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setPosAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
/// @param pos QPointF*
void q_graphicsitemanimation_set_pos_at(void* self, double step, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#transformAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
QTransform* q_graphicsitemanimation_transform_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_rotation_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationList)
///
/// @param self QGraphicsItemAnimation*
libqt_list /* of libqt_pair  tuple of double and double  */ q_graphicsitemanimation_rotation_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setRotationAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
/// @param angle double
void q_graphicsitemanimation_set_rotation_at(void* self, double step, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#xTranslationAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_x_translation_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#yTranslationAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_y_translation_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#translationList)
///
/// @param self QGraphicsItemAnimation*
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_translation_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTranslationAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
/// @param dx double
/// @param dy double
void q_graphicsitemanimation_set_translation_at(void* self, double step, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalScaleAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_vertical_scale_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalScaleAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_horizontal_scale_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#scaleList)
///
/// @param self QGraphicsItemAnimation*
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_scale_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setScaleAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
/// @param sx double
/// @param sy double
void q_graphicsitemanimation_set_scale_at(void* self, double step, double sx, double sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalShearAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_vertical_shear_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalShearAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
double q_graphicsitemanimation_horizontal_shear_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#shearList)
///
/// @param self QGraphicsItemAnimation*
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_shear_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setShearAt)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
/// @param sh double
/// @param sv double
void q_graphicsitemanimation_set_shear_at(void* self, double step, double sh, double sv);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#clear)
///
/// @param self QGraphicsItemAnimation*
void q_graphicsitemanimation_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setStep)
///
/// @param self QGraphicsItemAnimation*
/// @param x double
void q_graphicsitemanimation_set_step(void* self, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
void q_graphicsitemanimation_before_animation_step(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, double)
void q_graphicsitemanimation_on_before_animation_step(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
///
/// Base class method implementation
///
/// @param self QGraphicsItemAnimation*
/// @param step double
void q_graphicsitemanimation_qbase_before_animation_step(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
///
/// @param self QGraphicsItemAnimation*
/// @param step double
void q_graphicsitemanimation_after_animation_step(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, double)
void q_graphicsitemanimation_on_after_animation_step(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
///
/// Base class method implementation
///
/// @param self QGraphicsItemAnimation*
/// @param step double
void q_graphicsitemanimation_qbase_after_animation_step(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_graphicsitemanimation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_graphicsitemanimation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsItemAnimation*
const char* q_graphicsitemanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsItemAnimation*
/// @param name char*
void q_graphicsitemanimation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsItemAnimation*
bool q_graphicsitemanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsItemAnimation*
bool q_graphicsitemanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsItemAnimation*
bool q_graphicsitemanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsItemAnimation*
bool q_graphicsitemanimation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsItemAnimation*
/// @param b bool
bool q_graphicsitemanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsItemAnimation*
QThread* q_graphicsitemanimation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsItemAnimation*
/// @param thread QThread*
bool q_graphicsitemanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsItemAnimation*
/// @param interval int
int32_t q_graphicsitemanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsItemAnimation*
/// @param id int
void q_graphicsitemanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsItemAnimation*
/// @param id enum Qt__TimerId
void q_graphicsitemanimation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsItemAnimation*
libqt_list /* of QObject* */ q_graphicsitemanimation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsItemAnimation*
/// @param parent QObject*
void q_graphicsitemanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsItemAnimation*
/// @param filterObj QObject*
void q_graphicsitemanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsItemAnimation*
/// @param obj QObject*
void q_graphicsitemanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_graphicsitemanimation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsItemAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_graphicsitemanimation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_graphicsitemanimation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_graphicsitemanimation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsItemAnimation*
void q_graphicsitemanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsItemAnimation*
void q_graphicsitemanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsItemAnimation*
/// @param name const char*
/// @param value QVariant*
bool q_graphicsitemanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsItemAnimation*
/// @param name const char*
QVariant* q_graphicsitemanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsItemAnimation*
const char** q_graphicsitemanimation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsItemAnimation*
QBindingStorage* q_graphicsitemanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsItemAnimation*
const QBindingStorage* q_graphicsitemanimation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsItemAnimation*
void q_graphicsitemanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*)
void q_graphicsitemanimation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsItemAnimation*
QObject* q_graphicsitemanimation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsItemAnimation*
/// @param classname const char*
bool q_graphicsitemanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsItemAnimation*
void q_graphicsitemanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsItemAnimation*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_graphicsitemanimation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsItemAnimation*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_graphicsitemanimation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsitemanimation_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsItemAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsitemanimation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsItemAnimation*
/// @param param1 QObject*
void q_graphicsitemanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, QObject*)
void q_graphicsitemanimation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QEvent*
bool q_graphicsitemanimation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QEvent*
bool q_graphicsitemanimation_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback bool fn(QGraphicsItemAnimation*, QEvent*)
void q_graphicsitemanimation_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicsitemanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param watched QObject*
/// @param event QEvent*
bool q_graphicsitemanimation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback bool fn(QGraphicsItemAnimation*, QObject*, QEvent*)
void q_graphicsitemanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QTimerEvent*
void q_graphicsitemanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QTimerEvent*
void q_graphicsitemanimation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, QTimerEvent*)
void q_graphicsitemanimation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QChildEvent*
void q_graphicsitemanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QChildEvent*
void q_graphicsitemanimation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, QChildEvent*)
void q_graphicsitemanimation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QEvent*
void q_graphicsitemanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param event QEvent*
void q_graphicsitemanimation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, QEvent*)
void q_graphicsitemanimation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal QMetaMethod*
void q_graphicsitemanimation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal QMetaMethod*
void q_graphicsitemanimation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, QMetaMethod*)
void q_graphicsitemanimation_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal QMetaMethod*
void q_graphicsitemanimation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal QMetaMethod*
void q_graphicsitemanimation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, QMetaMethod*)
void q_graphicsitemanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
QObject* q_graphicsitemanimation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
QObject* q_graphicsitemanimation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback QObject* fn()
void q_graphicsitemanimation_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
int32_t q_graphicsitemanimation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
int32_t q_graphicsitemanimation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback int32_t fn()
void q_graphicsitemanimation_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal const char*
int32_t q_graphicsitemanimation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal const char*
int32_t q_graphicsitemanimation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback int32_t fn(QGraphicsItemAnimation*, const char*)
void q_graphicsitemanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal QMetaMethod*
bool q_graphicsitemanimation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param signal QMetaMethod*
bool q_graphicsitemanimation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsItemAnimation*
/// @param callback bool fn(QGraphicsItemAnimation*, QMetaMethod*)
void q_graphicsitemanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsItemAnimation*
/// @param callback void fn(QGraphicsItemAnimation*, const char*)
void q_graphicsitemanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#dtor.QGraphicsItemAnimation)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsItemAnimation*
void q_graphicsitemanimation_delete(void* self);

#endif
