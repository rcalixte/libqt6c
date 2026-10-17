#include "libq3dscene.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqevent.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "libqabstract3dinputhandler.hpp"
#include "libqabstract3dinputhandler.h"

const QMetaObject* q_abstract3dinputhandler_meta_object(const void* self) {
    return QAbstract3DInputHandler_MetaObject((QAbstract3DInputHandler*)self);
}

void* q_abstract3dinputhandler_metacast(void* self, const char* param1) {
    return QAbstract3DInputHandler_Metacast((QAbstract3DInputHandler*)self, param1);
}

int32_t q_abstract3dinputhandler_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstract3DInputHandler_Metacall((QAbstract3DInputHandler*)self, param1, param2, param3);
}

const char* q_abstract3dinputhandler_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstract3dinputhandler_mouse_double_click_event(void* self, void* event) {
    QAbstract3DInputHandler_MouseDoubleClickEvent((QAbstract3DInputHandler*)self, (QMouseEvent*)event);
}

void q_abstract3dinputhandler_touch_event(void* self, void* event) {
    QAbstract3DInputHandler_TouchEvent((QAbstract3DInputHandler*)self, (QTouchEvent*)event);
}

void q_abstract3dinputhandler_mouse_press_event(void* self, void* event, const void* mousePos) {
    QAbstract3DInputHandler_MousePressEvent((QAbstract3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_abstract3dinputhandler_mouse_release_event(void* self, void* event, const void* mousePos) {
    QAbstract3DInputHandler_MouseReleaseEvent((QAbstract3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_abstract3dinputhandler_mouse_move_event(void* self, void* event, const void* mousePos) {
    QAbstract3DInputHandler_MouseMoveEvent((QAbstract3DInputHandler*)self, (QMouseEvent*)event, (QPoint*)mousePos);
}

void q_abstract3dinputhandler_wheel_event(void* self, void* event) {
    QAbstract3DInputHandler_WheelEvent((QAbstract3DInputHandler*)self, (QWheelEvent*)event);
}

int32_t q_abstract3dinputhandler_input_view(const void* self) {
    return QAbstract3DInputHandler_InputView((QAbstract3DInputHandler*)self);
}

void q_abstract3dinputhandler_set_input_view(void* self, int32_t inputView) {
    QAbstract3DInputHandler_SetInputView((QAbstract3DInputHandler*)self, inputView);
}

QPoint* q_abstract3dinputhandler_input_position(const void* self) {
    return QAbstract3DInputHandler_InputPosition((QAbstract3DInputHandler*)self);
}

void q_abstract3dinputhandler_set_input_position(void* self, const void* position) {
    QAbstract3DInputHandler_SetInputPosition((QAbstract3DInputHandler*)self, (QPoint*)position);
}

Q3DScene* q_abstract3dinputhandler_scene(const void* self) {
    return QAbstract3DInputHandler_Scene((QAbstract3DInputHandler*)self);
}

void q_abstract3dinputhandler_set_scene(void* self, void* scene) {
    QAbstract3DInputHandler_SetScene((QAbstract3DInputHandler*)self, (Q3DScene*)scene);
}

void q_abstract3dinputhandler_position_changed(void* self, const void* position) {
    QAbstract3DInputHandler_PositionChanged((QAbstract3DInputHandler*)self, (QPoint*)position);
}

void q_abstract3dinputhandler_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DInputHandler_Connect_PositionChanged((QAbstract3DInputHandler*)self, (intptr_t)callback);
}

void q_abstract3dinputhandler_input_view_changed(void* self, int32_t view) {
    QAbstract3DInputHandler_InputViewChanged((QAbstract3DInputHandler*)self, view);
}

void q_abstract3dinputhandler_on_input_view_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DInputHandler_Connect_InputViewChanged((QAbstract3DInputHandler*)self, (intptr_t)callback);
}

void q_abstract3dinputhandler_scene_changed(void* self, void* scene) {
    QAbstract3DInputHandler_SceneChanged((QAbstract3DInputHandler*)self, (Q3DScene*)scene);
}

void q_abstract3dinputhandler_on_scene_changed(void* self, void (*callback)(void*, void*)) {
    QAbstract3DInputHandler_Connect_SceneChanged((QAbstract3DInputHandler*)self, (intptr_t)callback);
}

const char* q_abstract3dinputhandler_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstract3dinputhandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstract3dinputhandler_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_abstract3dinputhandler_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_abstract3dinputhandler_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstract3dinputhandler_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstract3dinputhandler_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstract3dinputhandler_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstract3dinputhandler_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstract3dinputhandler_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstract3dinputhandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstract3dinputhandler_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstract3dinputhandler_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstract3dinputhandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_abstract3dinputhandler_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_abstract3dinputhandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstract3dinputhandler_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstract3dinputhandler_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstract3dinputhandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstract3dinputhandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstract3dinputhandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstract3dinputhandler_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_abstract3dinputhandler_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstract3dinputhandler_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstract3dinputhandler_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_abstract3dinputhandler_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstract3dinputhandler_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_abstract3dinputhandler_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_abstract3dinputhandler_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_abstract3dinputhandler_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstract3dinputhandler_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstract3dinputhandler_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstract3dinputhandler_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstract3dinputhandler_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstract3dinputhandler_dynamic_property_names\n");
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

QBindingStorage* q_abstract3dinputhandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstract3dinputhandler_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstract3dinputhandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstract3dinputhandler_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstract3dinputhandler_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstract3dinputhandler_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstract3dinputhandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstract3dinputhandler_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_abstract3dinputhandler_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_abstract3dinputhandler_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_abstract3dinputhandler_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstract3dinputhandler_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_abstract3dinputhandler_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_abstract3dinputhandler_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_abstract3dinputhandler_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_abstract3dinputhandler_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_abstract3dinputhandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstract3dinputhandler_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_abstract3dinputhandler_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstract3dinputhandler_delete(void* self) {
    QAbstract3DInputHandler_Delete((QAbstract3DInputHandler*)(self));
}
