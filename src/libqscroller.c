#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqscrollerproperties.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqscroller.hpp"
#include "libqscroller.h"

/// https://doc.qt.io/qt-6/qscroller.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScroller* self ```
QMetaObject* q_scroller_meta_object(void* self) {
    return QScroller_MetaObject((QScroller*)self);
}

/// ``` QScroller* self, const char* param1 ```
void* q_scroller_metacast(void* self, const char* param1) {
    return QScroller_Metacast((QScroller*)self, param1);
}

/// ``` QScroller* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scroller_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScroller_Metacall((QScroller*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scroller_tr(const char* s) {
    libqt_string _str = QScroller_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
///
/// ``` QObject* target ```
bool q_scroller_has_scroller(void* target) {
    return QScroller_HasScroller((QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
///
/// ``` QObject* target ```
QScroller* q_scroller_scroller(void* target) {
    return QScroller_Scroller((QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
///
/// ``` QObject* target ```
QScroller* q_scroller_scroller_with_target(void* target) {
    return QScroller_ScrollerWithTarget((QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
///
/// ``` QObject* target ```
int64_t q_scroller_grab_gesture(void* target) {
    return QScroller_GrabGesture((QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
///
/// ``` QObject* target ```
int64_t q_scroller_grabbed_gesture(void* target) {
    return QScroller_GrabbedGesture((QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
///
/// ``` QObject* target ```
void q_scroller_ungrab_gesture(void* target) {
    QScroller_UngrabGesture((QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
///
///
libqt_list /* of QScroller* */ q_scroller_active_scrollers() {
    libqt_list _arr = QScroller_ActiveScrollers();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#target)
///
/// ``` QScroller* self ```
QObject* q_scroller_target(void* self) {
    return QScroller_Target((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#state)
///
/// ``` QScroller* self ```
int64_t q_scroller_state(void* self) {
    return QScroller_State((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
///
/// ``` QScroller* self, enum QScroller__Input input, QPointF* position ```
bool q_scroller_handle_input(void* self, int64_t input, void* position) {
    return QScroller_HandleInput((QScroller*)self, input, (QPointF*)position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stop)
///
/// ``` QScroller* self ```
void q_scroller_stop(void* self) {
    QScroller_Stop((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#velocity)
///
/// ``` QScroller* self ```
QPointF* q_scroller_velocity(void* self) {
    return QScroller_Velocity((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
///
/// ``` QScroller* self ```
QPointF* q_scroller_final_position(void* self) {
    return QScroller_FinalPosition((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
///
/// ``` QScroller* self ```
QPointF* q_scroller_pixel_per_meter(void* self) {
    return QScroller_PixelPerMeter((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
///
/// ``` QScroller* self ```
QScrollerProperties* q_scroller_scroller_properties(void* self) {
    return QScroller_ScrollerProperties((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
///
/// ``` QScroller* self, double* positions[] ```
void q_scroller_set_snap_positions_x(void* self, double* positions[]) {
    size_t positions_len = 0;
    while (positions[positions_len] != NULL) {
        positions_len++;
    }
    libqt_list positions_list = {
        .len = positions_len,
        .data = {(double*)positions},
    };
    QScroller_SetSnapPositionsX((QScroller*)self, positions_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
///
/// ``` QScroller* self, double first, double interval ```
void q_scroller_set_snap_positions_x2(void* self, double first, double interval) {
    QScroller_SetSnapPositionsX2((QScroller*)self, first, interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
///
/// ``` QScroller* self, double* positions[] ```
void q_scroller_set_snap_positions_y(void* self, double* positions[]) {
    size_t positions_len = 0;
    while (positions[positions_len] != NULL) {
        positions_len++;
    }
    libqt_list positions_list = {
        .len = positions_len,
        .data = {(double*)positions},
    };
    QScroller_SetSnapPositionsY((QScroller*)self, positions_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
///
/// ``` QScroller* self, double first, double interval ```
void q_scroller_set_snap_positions_y2(void* self, double first, double interval) {
    QScroller_SetSnapPositionsY2((QScroller*)self, first, interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
///
/// ``` QScroller* self, QScrollerProperties* prop ```
void q_scroller_set_scroller_properties(void* self, void* prop) {
    QScroller_SetScrollerProperties((QScroller*)self, (QScrollerProperties*)prop);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
///
/// ``` QScroller* self, QPointF* pos ```
void q_scroller_scroll_to(void* self, void* pos) {
    QScroller_ScrollTo((QScroller*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
///
/// ``` QScroller* self, QPointF* pos, int scrollTime ```
void q_scroller_scroll_to2(void* self, void* pos, int scrollTime) {
    QScroller_ScrollTo2((QScroller*)self, (QPointF*)pos, scrollTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
///
/// ``` QScroller* self, QRectF* rect, double xmargin, double ymargin ```
void q_scroller_ensure_visible(void* self, void* rect, double xmargin, double ymargin) {
    QScroller_EnsureVisible((QScroller*)self, (QRectF*)rect, xmargin, ymargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
///
/// ``` QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime ```
void q_scroller_ensure_visible2(void* self, void* rect, double xmargin, double ymargin, int scrollTime) {
    QScroller_EnsureVisible2((QScroller*)self, (QRectF*)rect, xmargin, ymargin, scrollTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
///
/// ``` QScroller* self ```
void q_scroller_resend_prepare_event(void* self) {
    QScroller_ResendPrepareEvent((QScroller*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
///
/// ``` QScroller* self, enum QScroller__State newstate ```
void q_scroller_state_changed(void* self, int64_t newstate) {
    QScroller_StateChanged((QScroller*)self, newstate);
}

/// ``` QScroller* self, void (*slot)(QScroller*, enum QScroller__State) ```
void q_scroller_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QScroller_Connect_StateChanged((QScroller*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
///
/// ``` QScroller* self, QScrollerProperties* param1 ```
void q_scroller_scroller_properties_changed(void* self, void* param1) {
    QScroller_ScrollerPropertiesChanged((QScroller*)self, (QScrollerProperties*)param1);
}

/// ``` QScroller* self, void (*slot)(QScroller*, QScrollerProperties*) ```
void q_scroller_on_scroller_properties_changed(void* self, void (*slot)(void*, void*)) {
    QScroller_Connect_ScrollerPropertiesChanged((QScroller*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scroller_tr2(const char* s, const char* c) {
    libqt_string _str = QScroller_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scroller_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScroller_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
///
/// ``` QObject* target, enum QScroller__ScrollerGestureType gestureType ```
int64_t q_scroller_grab_gesture2(void* target, int64_t gestureType) {
    return QScroller_GrabGesture2((QObject*)target, gestureType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
///
/// ``` QScroller* self, enum QScroller__Input input, QPointF* position, long long timestamp ```
bool q_scroller_handle_input3(void* self, int64_t input, void* position, long long timestamp) {
    return QScroller_HandleInput3((QScroller*)self, input, (QPointF*)position, timestamp);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QScroller* self, QEvent* event ```
bool q_scroller_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QScroller* self, QObject* watched, QEvent* event ```
bool q_scroller_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScroller* self ```
const char* q_scroller_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScroller* self, const char* name ```
void q_scroller_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScroller* self ```
bool q_scroller_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScroller* self ```
bool q_scroller_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScroller* self ```
bool q_scroller_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScroller* self ```
bool q_scroller_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScroller* self, bool b ```
bool q_scroller_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScroller* self ```
QThread* q_scroller_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScroller* self, QThread* thread ```
void q_scroller_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScroller* self, int interval ```
int32_t q_scroller_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScroller* self, int id ```
void q_scroller_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScroller* self ```
libqt_list /* of QObject* */ q_scroller_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QScroller* self, QObject* parent ```
void q_scroller_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScroller* self, QObject* filterObj ```
void q_scroller_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScroller* self, QObject* obj ```
void q_scroller_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scroller_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScroller* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scroller_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scroller_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scroller_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScroller* self ```
void q_scroller_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScroller* self ```
void q_scroller_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScroller* self, const char* name, QVariant* value ```
bool q_scroller_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScroller* self, const char* name ```
QVariant* q_scroller_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScroller* self ```
const char** q_scroller_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScroller* self ```
QBindingStorage* q_scroller_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScroller* self ```
QBindingStorage* q_scroller_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScroller* self ```
void q_scroller_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QScroller* self, void (*slot)(QObject*) ```
void q_scroller_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScroller* self ```
QObject* q_scroller_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScroller* self, const char* classname ```
bool q_scroller_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScroller* self ```
void q_scroller_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScroller* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scroller_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scroller_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScroller* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scroller_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScroller* self, QObject* param1 ```
void q_scroller_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QScroller* self, void (*slot)(QObject*, QObject*) ```
void q_scroller_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}
