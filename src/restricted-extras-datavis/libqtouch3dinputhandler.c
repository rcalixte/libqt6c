#include "libq3dinputhandler.hpp"
#include "libqabstract3dinputhandler.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqevent.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "libqtouch3dinputhandler.hpp"
#include "libqtouch3dinputhandler.h"

QTouch3DInputHandler* q_touch3dinputhandler_new() {
    return QTouch3DInputHandler_New();
}

QTouch3DInputHandler* q_touch3dinputhandler_new2(void* parent) {
    return QTouch3DInputHandler_New2((QObject*)parent);
}

const QMetaObject* q_touch3dinputhandler_meta_object(const void* self) {
    return QTouch3DInputHandler_MetaObject((QTouch3DInputHandler*)self);
}

void q_touch3dinputhandler_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QTouch3DInputHandler_OnMetaObject((QTouch3DInputHandler*)self, (intptr_t)callback);
}

const QMetaObject* q_touch3dinputhandler_super_meta_object(const void* self) {
    return QTouch3DInputHandler_SuperMetaObject((QTouch3DInputHandler*)self);
}

void* q_touch3dinputhandler_metacast(void* self, const char* param1) {
    return QTouch3DInputHandler_Metacast((QTouch3DInputHandler*)self, param1);
}

void q_touch3dinputhandler_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTouch3DInputHandler_OnMetacast((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void* q_touch3dinputhandler_super_metacast(void* self, const char* param1) {
    return QTouch3DInputHandler_SuperMetacast((QTouch3DInputHandler*)self, param1);
}

int32_t q_touch3dinputhandler_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTouch3DInputHandler_Metacall((QTouch3DInputHandler*)self, param1, param2, param3);
}

void q_touch3dinputhandler_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTouch3DInputHandler_OnMetacall((QTouch3DInputHandler*)self, (intptr_t)callback);
}

int32_t q_touch3dinputhandler_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTouch3DInputHandler_SuperMetacall((QTouch3DInputHandler*)self, param1, param2, param3);
}

const char* q_touch3dinputhandler_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_touch3dinputhandler_touch_event(void* self, void* event) {
    QTouch3DInputHandler_TouchEvent((QTouch3DInputHandler*)self, (QTouchEvent*)event);
}

void q_touch3dinputhandler_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnTouchEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_super_touch_event(void* self, void* event) {
    QTouch3DInputHandler_SuperTouchEvent((QTouch3DInputHandler*)self, (QTouchEvent*)event);
}

const char* q_touch3dinputhandler_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_touch3dinputhandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_touch3dinputhandler_set_rotation_enabled(void* self, bool enable) {
    Q3DInputHandler_SetRotationEnabled((Q3DInputHandler*)self, enable);
}

bool q_touch3dinputhandler_is_rotation_enabled(const void* self) {
    return Q3DInputHandler_IsRotationEnabled((Q3DInputHandler*)self);
}

void q_touch3dinputhandler_set_zoom_enabled(void* self, bool enable) {
    Q3DInputHandler_SetZoomEnabled((Q3DInputHandler*)self, enable);
}

bool q_touch3dinputhandler_is_zoom_enabled(const void* self) {
    return Q3DInputHandler_IsZoomEnabled((Q3DInputHandler*)self);
}

void q_touch3dinputhandler_set_selection_enabled(void* self, bool enable) {
    Q3DInputHandler_SetSelectionEnabled((Q3DInputHandler*)self, enable);
}

bool q_touch3dinputhandler_is_selection_enabled(const void* self) {
    return Q3DInputHandler_IsSelectionEnabled((Q3DInputHandler*)self);
}

void q_touch3dinputhandler_set_zoom_at_target_enabled(void* self, bool enable) {
    Q3DInputHandler_SetZoomAtTargetEnabled((Q3DInputHandler*)self, enable);
}

bool q_touch3dinputhandler_is_zoom_at_target_enabled(const void* self) {
    return Q3DInputHandler_IsZoomAtTargetEnabled((Q3DInputHandler*)self);
}

void q_touch3dinputhandler_rotation_enabled_changed(void* self, bool enable) {
    Q3DInputHandler_RotationEnabledChanged((Q3DInputHandler*)self, enable);
}

void q_touch3dinputhandler_on_rotation_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DInputHandler_Connect_RotationEnabledChanged((Q3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_zoom_enabled_changed(void* self, bool enable) {
    Q3DInputHandler_ZoomEnabledChanged((Q3DInputHandler*)self, enable);
}

void q_touch3dinputhandler_on_zoom_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DInputHandler_Connect_ZoomEnabledChanged((Q3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_selection_enabled_changed(void* self, bool enable) {
    Q3DInputHandler_SelectionEnabledChanged((Q3DInputHandler*)self, enable);
}

void q_touch3dinputhandler_on_selection_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DInputHandler_Connect_SelectionEnabledChanged((Q3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_zoom_at_target_enabled_changed(void* self, bool enable) {
    Q3DInputHandler_ZoomAtTargetEnabledChanged((Q3DInputHandler*)self, enable);
}

void q_touch3dinputhandler_on_zoom_at_target_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DInputHandler_Connect_ZoomAtTargetEnabledChanged((Q3DInputHandler*)self, (intptr_t)callback);
}

int32_t q_touch3dinputhandler_input_view(const void* self) {
    return QAbstract3DInputHandler_InputView((QAbstract3DInputHandler*)self);
}

void q_touch3dinputhandler_set_input_view(void* self, int32_t inputView) {
    QAbstract3DInputHandler_SetInputView((QAbstract3DInputHandler*)self, inputView);
}

QPoint* q_touch3dinputhandler_input_position(const void* self) {
    return QAbstract3DInputHandler_InputPosition((QAbstract3DInputHandler*)self);
}

void q_touch3dinputhandler_set_input_position(void* self, const void* position) {
    QAbstract3DInputHandler_SetInputPosition((QAbstract3DInputHandler*)self, (QPoint*)position);
}

Q3DScene* q_touch3dinputhandler_scene(const void* self) {
    return QAbstract3DInputHandler_Scene((QAbstract3DInputHandler*)self);
}

void q_touch3dinputhandler_set_scene(void* self, void* scene) {
    QAbstract3DInputHandler_SetScene((QAbstract3DInputHandler*)self, (Q3DScene*)scene);
}

void q_touch3dinputhandler_position_changed(void* self, const void* position) {
    QAbstract3DInputHandler_PositionChanged((QAbstract3DInputHandler*)self, (QPoint*)position);
}

void q_touch3dinputhandler_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DInputHandler_Connect_PositionChanged((QAbstract3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_input_view_changed(void* self, int32_t view) {
    QAbstract3DInputHandler_InputViewChanged((QAbstract3DInputHandler*)self, view);
}

void q_touch3dinputhandler_on_input_view_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DInputHandler_Connect_InputViewChanged((QAbstract3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_scene_changed(void* self, void* scene) {
    QAbstract3DInputHandler_SceneChanged((QAbstract3DInputHandler*)self, (Q3DScene*)scene);
}

void q_touch3dinputhandler_on_scene_changed(void* self, void (*callback)(void*, void*)) {
    QAbstract3DInputHandler_Connect_SceneChanged((QAbstract3DInputHandler*)self, (intptr_t)callback);
}

const char* q_touch3dinputhandler_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_touch3dinputhandler_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_touch3dinputhandler_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_touch3dinputhandler_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_touch3dinputhandler_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_touch3dinputhandler_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_touch3dinputhandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_touch3dinputhandler_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_touch3dinputhandler_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_touch3dinputhandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_touch3dinputhandler_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_touch3dinputhandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_touch3dinputhandler_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_touch3dinputhandler_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_touch3dinputhandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_touch3dinputhandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_touch3dinputhandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_touch3dinputhandler_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_touch3dinputhandler_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_touch3dinputhandler_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_touch3dinputhandler_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_touch3dinputhandler_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_touch3dinputhandler_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_touch3dinputhandler_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_touch3dinputhandler_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_touch3dinputhandler_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_touch3dinputhandler_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_touch3dinputhandler_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_touch3dinputhandler_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_touch3dinputhandler_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_touch3dinputhandler_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_touch3dinputhandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_touch3dinputhandler_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_touch3dinputhandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_touch3dinputhandler_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_touch3dinputhandler_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_touch3dinputhandler_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_touch3dinputhandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_touch3dinputhandler_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_touch3dinputhandler_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_touch3dinputhandler_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_touch3dinputhandler_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_touch3dinputhandler_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_touch3dinputhandler_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_touch3dinputhandler_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_touch3dinputhandler_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_touch3dinputhandler_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_touch3dinputhandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_touch3dinputhandler_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_mouse_press_event(void* self, void* event, const void* mousePos) {
    QTouch3DInputHandler_MousePressEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_touch3dinputhandler_super_mouse_press_event(void* self, void* event, const void* mousePos) {
    QTouch3DInputHandler_SuperMousePressEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_touch3dinputhandler_on_mouse_press_event(void* self, void (*callback)(void*, void*, const void*)) {
    QTouch3DInputHandler_OnMousePressEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_mouse_release_event(void* self, void* event, const void* mousePos) {
    QTouch3DInputHandler_MouseReleaseEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_touch3dinputhandler_super_mouse_release_event(void* self, void* event, const void* mousePos) {
    QTouch3DInputHandler_SuperMouseReleaseEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_touch3dinputhandler_on_mouse_release_event(void* self, void (*callback)(void*, void*, const void*)) {
    QTouch3DInputHandler_OnMouseReleaseEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_mouse_move_event(void* self, void* event, const void* mousePos) {
    QTouch3DInputHandler_MouseMoveEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_touch3dinputhandler_super_mouse_move_event(void* self, void* event, const void* mousePos) {
    QTouch3DInputHandler_SuperMouseMoveEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_touch3dinputhandler_on_mouse_move_event(void* self, void (*callback)(void*, void*, const void*)) {
    QTouch3DInputHandler_OnMouseMoveEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_wheel_event(void* self, void* event) {
    QTouch3DInputHandler_WheelEvent((QTouch3DInputHandler*)self, (QWheelEvent*)event);
}

void q_touch3dinputhandler_super_wheel_event(void* self, void* event) {
    QTouch3DInputHandler_SuperWheelEvent((QTouch3DInputHandler*)self, (QWheelEvent*)event);
}

void q_touch3dinputhandler_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnWheelEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_mouse_double_click_event(void* self, void* event) {
    QTouch3DInputHandler_MouseDoubleClickEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event);
}

void q_touch3dinputhandler_super_mouse_double_click_event(void* self, void* event) {
    QTouch3DInputHandler_SuperMouseDoubleClickEvent((QTouch3DInputHandler*)self, (QMouseEvent*)event);
}

void q_touch3dinputhandler_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnMouseDoubleClickEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

bool q_touch3dinputhandler_event(void* self, void* event) {
    return QTouch3DInputHandler_Event((QTouch3DInputHandler*)self, (QEvent*)event);
}

bool q_touch3dinputhandler_super_event(void* self, void* event) {
    return QTouch3DInputHandler_SuperEvent((QTouch3DInputHandler*)self, (QEvent*)event);
}

void q_touch3dinputhandler_on_event(void* self, bool (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

bool q_touch3dinputhandler_event_filter(void* self, void* watched, void* event) {
    return QTouch3DInputHandler_EventFilter((QTouch3DInputHandler*)self, (QObject*)watched, (QEvent*)event);
}

bool q_touch3dinputhandler_super_event_filter(void* self, void* watched, void* event) {
    return QTouch3DInputHandler_SuperEventFilter((QTouch3DInputHandler*)self, (QObject*)watched, (QEvent*)event);
}

void q_touch3dinputhandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTouch3DInputHandler_OnEventFilter((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_timer_event(void* self, void* event) {
    QTouch3DInputHandler_TimerEvent((QTouch3DInputHandler*)self, (QTimerEvent*)event);
}

void q_touch3dinputhandler_super_timer_event(void* self, void* event) {
    QTouch3DInputHandler_SuperTimerEvent((QTouch3DInputHandler*)self, (QTimerEvent*)event);
}

void q_touch3dinputhandler_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnTimerEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_child_event(void* self, void* event) {
    QTouch3DInputHandler_ChildEvent((QTouch3DInputHandler*)self, (QChildEvent*)event);
}

void q_touch3dinputhandler_super_child_event(void* self, void* event) {
    QTouch3DInputHandler_SuperChildEvent((QTouch3DInputHandler*)self, (QChildEvent*)event);
}

void q_touch3dinputhandler_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnChildEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_custom_event(void* self, void* event) {
    QTouch3DInputHandler_CustomEvent((QTouch3DInputHandler*)self, (QEvent*)event);
}

void q_touch3dinputhandler_super_custom_event(void* self, void* event) {
    QTouch3DInputHandler_SuperCustomEvent((QTouch3DInputHandler*)self, (QEvent*)event);
}

void q_touch3dinputhandler_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTouch3DInputHandler_OnCustomEvent((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_connect_notify(void* self, const void* signal) {
    QTouch3DInputHandler_ConnectNotify((QTouch3DInputHandler*)self, (QMetaMethod*)signal);
}

void q_touch3dinputhandler_super_connect_notify(void* self, const void* signal) {
    QTouch3DInputHandler_SuperConnectNotify((QTouch3DInputHandler*)self, (QMetaMethod*)signal);
}

void q_touch3dinputhandler_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QTouch3DInputHandler_OnConnectNotify((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_disconnect_notify(void* self, const void* signal) {
    QTouch3DInputHandler_DisconnectNotify((QTouch3DInputHandler*)self, (QMetaMethod*)signal);
}

void q_touch3dinputhandler_super_disconnect_notify(void* self, const void* signal) {
    QTouch3DInputHandler_SuperDisconnectNotify((QTouch3DInputHandler*)self, (QMetaMethod*)signal);
}

void q_touch3dinputhandler_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QTouch3DInputHandler_OnDisconnectNotify((QTouch3DInputHandler*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_set_prev_distance(void* self, int distance) {
    QTouch3DInputHandler_SetPrevDistance((QTouch3DInputHandler*)self, distance);
}

int32_t q_touch3dinputhandler_prev_distance(const void* self) {
    return QTouch3DInputHandler_PrevDistance((QTouch3DInputHandler*)self);
}

void q_touch3dinputhandler_set_previous_input_pos(void* self, const void* position) {
    QTouch3DInputHandler_SetPreviousInputPos((QTouch3DInputHandler*)self, (QPoint*)position);
}

QPoint* q_touch3dinputhandler_previous_input_pos(const void* self) {
    return QTouch3DInputHandler_PreviousInputPos((QTouch3DInputHandler*)self);
}

QObject* q_touch3dinputhandler_sender(const void* self) {
    return QTouch3DInputHandler_Sender((QTouch3DInputHandler*)self);
}

int32_t q_touch3dinputhandler_sender_signal_index(const void* self) {
    return QTouch3DInputHandler_SenderSignalIndex((QTouch3DInputHandler*)self);
}

int32_t q_touch3dinputhandler_receivers(const void* self, const char* signal) {
    return QTouch3DInputHandler_Receivers((QTouch3DInputHandler*)self, signal);
}

bool q_touch3dinputhandler_is_signal_connected(const void* self, const void* signal) {
    return QTouch3DInputHandler_IsSignalConnected((QTouch3DInputHandler*)self, (QMetaMethod*)signal);
}

void q_touch3dinputhandler_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_touch3dinputhandler_delete(void* self) {
    QTouch3DInputHandler_Delete((QTouch3DInputHandler*)(self));
}
