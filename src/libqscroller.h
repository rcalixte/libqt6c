#pragma once
#ifndef SRC_QT6C_LIBQSCROLLER_H
#define SRC_QT6C_LIBQSCROLLER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QScroller*
///
const QMetaObject* q_scroller_meta_object(void* self);

/// @param self QScroller*
/// @param param1 const char*
///
void* q_scroller_metacast(void* self, const char* param1);

/// @param self QScroller*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scroller_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scroller_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
///
/// @param target QObject*
///
bool q_scroller_has_scroller(void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scroller)
///
/// @param target QObject*
///
QScroller* q_scroller_scroller(void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scroller)
///
/// @param target QObject*
///
const QScroller* q_scroller_scroller2(void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
///
/// @param target QObject*
///
/// @return enum Qt__GestureType
///
int32_t q_scroller_grab_gesture(void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
///
/// @param target QObject*
///
/// @return enum Qt__GestureType
///
int32_t q_scroller_grabbed_gesture(void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
///
/// @param target QObject*
///
void q_scroller_ungrab_gesture(void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
///
/// @return libqt_list of QScroller*
///
libqt_list q_scroller_active_scrollers();

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#target)
///
/// @param self QScroller*
///
QObject* q_scroller_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#state)
///
/// @param self QScroller*
///
/// @return enum QScroller__State
///
int32_t q_scroller_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#handleInput)
///
/// @param self QScroller*
/// @param input enum QScroller__Input
/// @param position QPointF*
///
bool q_scroller_handle_input(void* self, int32_t input, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stop)
///
/// @param self QScroller*
///
void q_scroller_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#velocity)
///
/// @param self QScroller*
///
QPointF* q_scroller_velocity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
///
/// @param self QScroller*
///
QPointF* q_scroller_final_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
///
/// @param self QScroller*
///
QPointF* q_scroller_pixel_per_meter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
///
/// @param self QScroller*
///
QScrollerProperties* q_scroller_scroller_properties(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
///
/// @param self QScroller*
/// @param positions libqt_list of double
///
void q_scroller_set_snap_positions_x(void* self, libqt_list /* of double */ positions);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
///
/// @param self QScroller*
/// @param first double
/// @param interval double
///
void q_scroller_set_snap_positions_x2(void* self, double first, double interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
///
/// @param self QScroller*
/// @param positions libqt_list of double
///
void q_scroller_set_snap_positions_y(void* self, libqt_list /* of double */ positions);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
///
/// @param self QScroller*
/// @param first double
/// @param interval double
///
void q_scroller_set_snap_positions_y2(void* self, double first, double interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
///
/// @param self QScroller*
/// @param prop QScrollerProperties*
///
void q_scroller_set_scroller_properties(void* self, void* prop);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
///
/// @param self QScroller*
/// @param pos QPointF*
///
void q_scroller_scroll_to(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
///
/// @param self QScroller*
/// @param pos QPointF*
/// @param scrollTime int
///
void q_scroller_scroll_to2(void* self, void* pos, int scrollTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
///
/// @param self QScroller*
/// @param rect QRectF*
/// @param xmargin double
/// @param ymargin double
///
void q_scroller_ensure_visible(void* self, void* rect, double xmargin, double ymargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
///
/// @param self QScroller*
/// @param rect QRectF*
/// @param xmargin double
/// @param ymargin double
/// @param scrollTime int
///
void q_scroller_ensure_visible2(void* self, void* rect, double xmargin, double ymargin, int scrollTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
///
/// @param self QScroller*
///
void q_scroller_resend_prepare_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
///
/// @param self QScroller*
/// @param newstate enum QScroller__State
///
void q_scroller_state_changed(void* self, int32_t newstate);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
///
/// @param self QScroller*
/// @param callback void func(QScroller* self, enum QScroller__State newstate)
///
void q_scroller_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
///
/// @param self QScroller*
/// @param param1 QScrollerProperties*
///
void q_scroller_scroller_properties_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
///
/// @param self QScroller*
/// @param callback void func(QScroller* self, QScrollerProperties* param1)
///
void q_scroller_on_scroller_properties_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scroller_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scroller_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
///
/// @param target QObject*
/// @param gestureType enum QScroller__ScrollerGestureType
///
/// @return enum Qt__GestureType
///
int32_t q_scroller_grab_gesture2(void* target, int32_t gestureType);

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#handleInput)
///
/// @param self QScroller*
/// @param input enum QScroller__Input
/// @param position QPointF*
/// @param timestamp long long
///
bool q_scroller_handle_input3(void* self, int32_t input, void* position, long long timestamp);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QScroller*
/// @param event QEvent*
///
bool q_scroller_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QScroller*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scroller_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QScroller*
///
const char* q_scroller_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QScroller*
/// @param name char*
///
void q_scroller_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QScroller*
///
bool q_scroller_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QScroller*
///
bool q_scroller_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QScroller*
///
bool q_scroller_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QScroller*
///
bool q_scroller_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QScroller*
/// @param b bool
///
bool q_scroller_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QScroller*
///
QThread* q_scroller_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScroller*
/// @param thread QThread*
///
bool q_scroller_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScroller*
/// @param interval int
///
int32_t q_scroller_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScroller*
/// @param time int64_t of nanoseconds
///
int32_t q_scroller_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScroller*
/// @param id int
///
void q_scroller_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScroller*
/// @param id enum Qt__TimerId
///
void q_scroller_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QScroller*
///
/// @return libqt_list of QObject*
///
libqt_list q_scroller_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QScroller*
/// @param parent QObject*
///
void q_scroller_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QScroller*
/// @param filterObj QObject*
///
void q_scroller_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QScroller*
/// @param obj QObject*
///
void q_scroller_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scroller_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QScroller*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scroller_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scroller_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scroller_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QScroller*
///
void q_scroller_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QScroller*
///
void q_scroller_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QScroller*
/// @param name const char*
/// @param value QVariant*
///
bool q_scroller_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QScroller*
/// @param name const char*
///
QVariant* q_scroller_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QScroller*
///
const char** q_scroller_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScroller*
///
QBindingStorage* q_scroller_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScroller*
///
const QBindingStorage* q_scroller_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScroller*
///
void q_scroller_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScroller*
/// @param callback void func(QScroller* self)
///
void q_scroller_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QScroller*
///
QObject* q_scroller_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QScroller*
/// @param classname const char*
///
bool q_scroller_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QScroller*
///
void q_scroller_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScroller*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scroller_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScroller*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scroller_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scroller_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QScroller*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scroller_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScroller*
/// @param param1 QObject*
///
void q_scroller_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScroller*
/// @param callback void func(QScroller* self, QObject* param1)
///
void q_scroller_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QScroller*
/// @param callback void func(QScroller* self, const char* objectName)
///
void q_scroller_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#public-types)

typedef enum {
    QSCROLLER_STATE_INACTIVE = 0,
    QSCROLLER_STATE_PRESSED = 1,
    QSCROLLER_STATE_DRAGGING = 2,
    QSCROLLER_STATE_SCROLLING = 3
} QScroller__State;

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#public-types)

typedef enum {
    QSCROLLER_SCROLLERGESTURETYPE_TOUCHGESTURE = 0,
    QSCROLLER_SCROLLERGESTURETYPE_LEFTMOUSEBUTTONGESTURE = 1,
    QSCROLLER_SCROLLERGESTURETYPE_RIGHTMOUSEBUTTONGESTURE = 2,
    QSCROLLER_SCROLLERGESTURETYPE_MIDDLEMOUSEBUTTONGESTURE = 3
} QScroller__ScrollerGestureType;

/// [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#public-types)

typedef enum {
    QSCROLLER_INPUT_INPUTPRESS = 1,
    QSCROLLER_INPUT_INPUTMOVE = 2,
    QSCROLLER_INPUT_INPUTRELEASE = 3
} QScroller__Input;

#endif
