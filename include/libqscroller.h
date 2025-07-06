#pragma once
#ifndef SRCQT6C_LIBQSCROLLER_H
#define SRCQT6C_LIBQSCROLLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qscroller.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScroller* self ```
const QMetaObject* q_scroller_meta_object(void* self);

/// ``` QScroller* self, const char* param1 ```
void* q_scroller_metacast(void* self, const char* param1);

/// ``` QScroller* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scroller_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scroller_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
///
/// ``` QObject* target ```
bool q_scroller_has_scroller(void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
///
/// ``` QObject* target ```
QScroller* q_scroller_scroller(void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
///
/// ``` QObject* target ```
const QScroller* q_scroller_scroller_with_target(void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
///
/// ``` QObject* target ```
int64_t q_scroller_grab_gesture(void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
///
/// ``` QObject* target ```
int64_t q_scroller_grabbed_gesture(void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
///
/// ``` QObject* target ```
void q_scroller_ungrab_gesture(void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
///
///
libqt_list /* of QScroller* */ q_scroller_active_scrollers();

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#target)
///
/// ``` QScroller* self ```
QObject* q_scroller_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#state)
///
/// ``` QScroller* self ```
int64_t q_scroller_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
///
/// ``` QScroller* self, enum QScroller__Input input, QPointF* position ```
bool q_scroller_handle_input(void* self, int64_t input, void* position);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stop)
///
/// ``` QScroller* self ```
void q_scroller_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#velocity)
///
/// ``` QScroller* self ```
QPointF* q_scroller_velocity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
///
/// ``` QScroller* self ```
QPointF* q_scroller_final_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
///
/// ``` QScroller* self ```
QPointF* q_scroller_pixel_per_meter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
///
/// ``` QScroller* self ```
QScrollerProperties* q_scroller_scroller_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
///
/// ``` QScroller* self, libqt_list /* of double */ positions ```
void q_scroller_set_snap_positions_x(void* self, libqt_list positions);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
///
/// ``` QScroller* self, double first, double interval ```
void q_scroller_set_snap_positions_x2(void* self, double first, double interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
///
/// ``` QScroller* self, libqt_list /* of double */ positions ```
void q_scroller_set_snap_positions_y(void* self, libqt_list positions);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
///
/// ``` QScroller* self, double first, double interval ```
void q_scroller_set_snap_positions_y2(void* self, double first, double interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
///
/// ``` QScroller* self, QScrollerProperties* prop ```
void q_scroller_set_scroller_properties(void* self, void* prop);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
///
/// ``` QScroller* self, QPointF* pos ```
void q_scroller_scroll_to(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
///
/// ``` QScroller* self, QPointF* pos, int scrollTime ```
void q_scroller_scroll_to2(void* self, void* pos, int scrollTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
///
/// ``` QScroller* self, QRectF* rect, double xmargin, double ymargin ```
void q_scroller_ensure_visible(void* self, void* rect, double xmargin, double ymargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
///
/// ``` QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime ```
void q_scroller_ensure_visible2(void* self, void* rect, double xmargin, double ymargin, int scrollTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
///
/// ``` QScroller* self ```
void q_scroller_resend_prepare_event(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
///
/// ``` QScroller* self, enum QScroller__State newstate ```
void q_scroller_state_changed(void* self, int64_t newstate);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
///
/// ``` QScroller* self, void (*slot)(QScroller*, enum QScroller__State) ```
void q_scroller_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
///
/// ``` QScroller* self, QScrollerProperties* param1 ```
void q_scroller_scroller_properties_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
///
/// ``` QScroller* self, void (*slot)(QScroller*, QScrollerProperties*) ```
void q_scroller_on_scroller_properties_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scroller_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scroller_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
///
/// ``` QObject* target, enum QScroller__ScrollerGestureType gestureType ```
int64_t q_scroller_grab_gesture2(void* target, int64_t gestureType);

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
///
/// ``` QScroller* self, enum QScroller__Input input, QPointF* position, long long timestamp ```
bool q_scroller_handle_input3(void* self, int64_t input, void* position, long long timestamp);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QScroller* self, QEvent* event ```
bool q_scroller_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QScroller* self, QObject* watched, QEvent* event ```
bool q_scroller_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScroller* self ```
const char* q_scroller_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScroller* self, char* name ```
void q_scroller_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScroller* self ```
bool q_scroller_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScroller* self ```
bool q_scroller_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScroller* self ```
bool q_scroller_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScroller* self ```
bool q_scroller_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScroller* self, bool b ```
bool q_scroller_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScroller* self ```
QThread* q_scroller_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScroller* self, QThread* thread ```
bool q_scroller_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScroller* self, int interval ```
int32_t q_scroller_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScroller* self, int id ```
void q_scroller_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScroller* self, enum Qt__TimerId id ```
void q_scroller_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScroller* self ```
libqt_list /* of QObject* */ q_scroller_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QScroller* self, QObject* parent ```
void q_scroller_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScroller* self, QObject* filterObj ```
void q_scroller_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScroller* self, QObject* obj ```
void q_scroller_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scroller_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScroller* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scroller_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scroller_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scroller_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScroller* self ```
void q_scroller_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScroller* self ```
void q_scroller_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScroller* self, const char* name, QVariant* value ```
bool q_scroller_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScroller* self, const char* name ```
QVariant* q_scroller_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScroller* self ```
const char** q_scroller_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScroller* self ```
QBindingStorage* q_scroller_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScroller* self ```
const QBindingStorage* q_scroller_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScroller* self ```
void q_scroller_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScroller* self, void (*slot)(QObject*) ```
void q_scroller_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScroller* self ```
QObject* q_scroller_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScroller* self, const char* classname ```
bool q_scroller_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScroller* self ```
void q_scroller_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScroller* self, QThread* thread, Disambiguated_t* param2 ```
bool q_scroller_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScroller* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scroller_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scroller_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScroller* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scroller_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScroller* self, QObject* param1 ```
void q_scroller_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScroller* self, void (*slot)(QObject*, QObject*) ```
void q_scroller_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QScroller* self, void (*slot)(QObject*, const char*) ```
void q_scroller_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// https://doc.qt.io/qt-6/qscroller.html#types

typedef enum {
    QSCROLLER_STATE_INACTIVE = 0,
    QSCROLLER_STATE_PRESSED = 1,
    QSCROLLER_STATE_DRAGGING = 2,
    QSCROLLER_STATE_SCROLLING = 3
} QScroller__State;

typedef enum {
    QSCROLLER_SCROLLERGESTURETYPE_TOUCHGESTURE = 0,
    QSCROLLER_SCROLLERGESTURETYPE_LEFTMOUSEBUTTONGESTURE = 1,
    QSCROLLER_SCROLLERGESTURETYPE_RIGHTMOUSEBUTTONGESTURE = 2,
    QSCROLLER_SCROLLERGESTURETYPE_MIDDLEMOUSEBUTTONGESTURE = 3
} QScroller__ScrollerGestureType;

typedef enum {
    QSCROLLER_INPUT_INPUTPRESS = 1,
    QSCROLLER_INPUT_INPUTMOVE = 2,
    QSCROLLER_INPUT_INPUTRELEASE = 3
} QScroller__Input;

#endif
