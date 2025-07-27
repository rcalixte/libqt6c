#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqscrollerproperties.hpp"
#include "libqscroller.hpp"
#include "libqscroller.h"

const QMetaObject* q_scroller_meta_object(void* self) {
    return QScroller_MetaObject((QScroller*)self);
}

void* q_scroller_metacast(void* self, const char* param1) {
    return QScroller_Metacast((QScroller*)self, param1);
}

int32_t q_scroller_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScroller_Metacall((QScroller*)self, param1, param2, param3);
}

const char* q_scroller_tr(const char* s) {
    libqt_string _str = QScroller_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scroller_has_scroller(void* target) {
    return QScroller_HasScroller((QObject*)target);
}

QScroller* q_scroller_scroller(void* target) {
    return QScroller_Scroller((QObject*)target);
}

const QScroller* q_scroller_scroller2(void* target) {
    return QScroller_Scroller2((QObject*)target);
}

int64_t q_scroller_grab_gesture(void* target) {
    return QScroller_GrabGesture((QObject*)target);
}

int64_t q_scroller_grabbed_gesture(void* target) {
    return QScroller_GrabbedGesture((QObject*)target);
}

void q_scroller_ungrab_gesture(void* target) {
    QScroller_UngrabGesture((QObject*)target);
}

libqt_list /* of QScroller* */ q_scroller_active_scrollers() {
    libqt_list _arr = QScroller_ActiveScrollers();
    return _arr;
}

QObject* q_scroller_target(void* self) {
    return QScroller_Target((QScroller*)self);
}

int64_t q_scroller_state(void* self) {
    return QScroller_State((QScroller*)self);
}

bool q_scroller_handle_input(void* self, int64_t input, void* position) {
    return QScroller_HandleInput((QScroller*)self, input, (QPointF*)position);
}

void q_scroller_stop(void* self) {
    QScroller_Stop((QScroller*)self);
}

QPointF* q_scroller_velocity(void* self) {
    return QScroller_Velocity((QScroller*)self);
}

QPointF* q_scroller_final_position(void* self) {
    return QScroller_FinalPosition((QScroller*)self);
}

QPointF* q_scroller_pixel_per_meter(void* self) {
    return QScroller_PixelPerMeter((QScroller*)self);
}

QScrollerProperties* q_scroller_scroller_properties(void* self) {
    return QScroller_ScrollerProperties((QScroller*)self);
}

void q_scroller_set_snap_positions_x(void* self, libqt_list positions) {
    QScroller_SetSnapPositionsX((QScroller*)self, positions);
}

void q_scroller_set_snap_positions_x2(void* self, double first, double interval) {
    QScroller_SetSnapPositionsX2((QScroller*)self, first, interval);
}

void q_scroller_set_snap_positions_y(void* self, libqt_list positions) {
    QScroller_SetSnapPositionsY((QScroller*)self, positions);
}

void q_scroller_set_snap_positions_y2(void* self, double first, double interval) {
    QScroller_SetSnapPositionsY2((QScroller*)self, first, interval);
}

void q_scroller_set_scroller_properties(void* self, void* prop) {
    QScroller_SetScrollerProperties((QScroller*)self, (QScrollerProperties*)prop);
}

void q_scroller_scroll_to(void* self, void* pos) {
    QScroller_ScrollTo((QScroller*)self, (QPointF*)pos);
}

void q_scroller_scroll_to2(void* self, void* pos, int scrollTime) {
    QScroller_ScrollTo2((QScroller*)self, (QPointF*)pos, scrollTime);
}

void q_scroller_ensure_visible(void* self, void* rect, double xmargin, double ymargin) {
    QScroller_EnsureVisible((QScroller*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_scroller_ensure_visible2(void* self, void* rect, double xmargin, double ymargin, int scrollTime) {
    QScroller_EnsureVisible2((QScroller*)self, (QRectF*)rect, xmargin, ymargin, scrollTime);
}

void q_scroller_resend_prepare_event(void* self) {
    QScroller_ResendPrepareEvent((QScroller*)self);
}

void q_scroller_state_changed(void* self, int64_t newstate) {
    QScroller_StateChanged((QScroller*)self, newstate);
}

void q_scroller_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QScroller_Connect_StateChanged((QScroller*)self, (intptr_t)slot);
}

void q_scroller_scroller_properties_changed(void* self, void* param1) {
    QScroller_ScrollerPropertiesChanged((QScroller*)self, (QScrollerProperties*)param1);
}

void q_scroller_on_scroller_properties_changed(void* self, void (*slot)(void*, void*)) {
    QScroller_Connect_ScrollerPropertiesChanged((QScroller*)self, (intptr_t)slot);
}

const char* q_scroller_tr2(const char* s, const char* c) {
    libqt_string _str = QScroller_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scroller_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScroller_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_scroller_grab_gesture2(void* target, int64_t gestureType) {
    return QScroller_GrabGesture2((QObject*)target, gestureType);
}

bool q_scroller_handle_input3(void* self, int64_t input, void* position, long long timestamp) {
    return QScroller_HandleInput3((QScroller*)self, input, (QPointF*)position, timestamp);
}

bool q_scroller_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_scroller_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_scroller_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scroller_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scroller_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scroller_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scroller_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scroller_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scroller_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scroller_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scroller_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scroller_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scroller_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scroller_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scroller_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scroller_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scroller_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scroller_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scroller_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scroller_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scroller_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scroller_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scroller_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scroller_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scroller_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scroller_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scroller_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scroller_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scroller_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scroller_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scroller_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scroller_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scroller_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scroller_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scroller_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scroller_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scroller_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scroller_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scroller_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scroller_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_scroller_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}
