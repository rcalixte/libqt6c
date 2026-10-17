#include "libq3dobject.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvectornd.hpp"
#include "libq3dcamera.hpp"
#include "libq3dcamera.h"

Q3DCamera* q_3dcamera_new() {
    return Q3DCamera_New();
}

Q3DCamera* q_3dcamera_new2(void* parent) {
    return Q3DCamera_New2((QObject*)parent);
}

const QMetaObject* q_3dcamera_meta_object(const void* self) {
    return Q3DCamera_MetaObject((Q3DCamera*)self);
}

void q_3dcamera_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    Q3DCamera_OnMetaObject((Q3DCamera*)self, (intptr_t)callback);
}

const QMetaObject* q_3dcamera_super_meta_object(const void* self) {
    return Q3DCamera_SuperMetaObject((Q3DCamera*)self);
}

void* q_3dcamera_metacast(void* self, const char* param1) {
    return Q3DCamera_Metacast((Q3DCamera*)self, param1);
}

void q_3dcamera_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Q3DCamera_OnMetacast((Q3DCamera*)self, (intptr_t)callback);
}

void* q_3dcamera_super_metacast(void* self, const char* param1) {
    return Q3DCamera_SuperMetacast((Q3DCamera*)self, param1);
}

int32_t q_3dcamera_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DCamera_Metacall((Q3DCamera*)self, param1, param2, param3);
}

void q_3dcamera_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Q3DCamera_OnMetacall((Q3DCamera*)self, (intptr_t)callback);
}

int32_t q_3dcamera_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DCamera_SuperMetacall((Q3DCamera*)self, param1, param2, param3);
}

const char* q_3dcamera_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

float q_3dcamera_x_rotation(const void* self) {
    return Q3DCamera_XRotation((Q3DCamera*)self);
}

void q_3dcamera_set_x_rotation(void* self, float rotation) {
    Q3DCamera_SetXRotation((Q3DCamera*)self, rotation);
}

float q_3dcamera_y_rotation(const void* self) {
    return Q3DCamera_YRotation((Q3DCamera*)self);
}

void q_3dcamera_set_y_rotation(void* self, float rotation) {
    Q3DCamera_SetYRotation((Q3DCamera*)self, rotation);
}

bool q_3dcamera_wrap_x_rotation(const void* self) {
    return Q3DCamera_WrapXRotation((Q3DCamera*)self);
}

void q_3dcamera_set_wrap_x_rotation(void* self, bool isEnabled) {
    Q3DCamera_SetWrapXRotation((Q3DCamera*)self, isEnabled);
}

bool q_3dcamera_wrap_y_rotation(const void* self) {
    return Q3DCamera_WrapYRotation((Q3DCamera*)self);
}

void q_3dcamera_set_wrap_y_rotation(void* self, bool isEnabled) {
    Q3DCamera_SetWrapYRotation((Q3DCamera*)self, isEnabled);
}

void q_3dcamera_copy_values_from(void* self, const void* source) {
    Q3DCamera_CopyValuesFrom((Q3DCamera*)self, (Q3DObject*)source);
}

void q_3dcamera_on_copy_values_from(void* self, void (*callback)(void*, const void*)) {
    Q3DCamera_OnCopyValuesFrom((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_super_copy_values_from(void* self, const void* source) {
    Q3DCamera_SuperCopyValuesFrom((Q3DCamera*)self, (Q3DObject*)source);
}

int32_t q_3dcamera_camera_preset(const void* self) {
    return Q3DCamera_CameraPreset((Q3DCamera*)self);
}

void q_3dcamera_set_camera_preset(void* self, int32_t preset) {
    Q3DCamera_SetCameraPreset((Q3DCamera*)self, preset);
}

float q_3dcamera_zoom_level(const void* self) {
    return Q3DCamera_ZoomLevel((Q3DCamera*)self);
}

void q_3dcamera_set_zoom_level(void* self, float zoomLevel) {
    Q3DCamera_SetZoomLevel((Q3DCamera*)self, zoomLevel);
}

float q_3dcamera_min_zoom_level(const void* self) {
    return Q3DCamera_MinZoomLevel((Q3DCamera*)self);
}

void q_3dcamera_set_min_zoom_level(void* self, float zoomLevel) {
    Q3DCamera_SetMinZoomLevel((Q3DCamera*)self, zoomLevel);
}

float q_3dcamera_max_zoom_level(const void* self) {
    return Q3DCamera_MaxZoomLevel((Q3DCamera*)self);
}

void q_3dcamera_set_max_zoom_level(void* self, float zoomLevel) {
    Q3DCamera_SetMaxZoomLevel((Q3DCamera*)self, zoomLevel);
}

void q_3dcamera_set_camera_position(void* self, float horizontal, float vertical) {
    Q3DCamera_SetCameraPosition((Q3DCamera*)self, horizontal, vertical);
}

QVector3D* q_3dcamera_target(const void* self) {
    return Q3DCamera_Target((Q3DCamera*)self);
}

void q_3dcamera_set_target(void* self, const void* target) {
    Q3DCamera_SetTarget((Q3DCamera*)self, (QVector3D*)target);
}

void q_3dcamera_x_rotation_changed(void* self, float rotation) {
    Q3DCamera_XRotationChanged((Q3DCamera*)self, rotation);
}

void q_3dcamera_on_x_rotation_changed(void* self, void (*callback)(void*, float)) {
    Q3DCamera_Connect_XRotationChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_y_rotation_changed(void* self, float rotation) {
    Q3DCamera_YRotationChanged((Q3DCamera*)self, rotation);
}

void q_3dcamera_on_y_rotation_changed(void* self, void (*callback)(void*, float)) {
    Q3DCamera_Connect_YRotationChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_zoom_level_changed(void* self, float zoomLevel) {
    Q3DCamera_ZoomLevelChanged((Q3DCamera*)self, zoomLevel);
}

void q_3dcamera_on_zoom_level_changed(void* self, void (*callback)(void*, float)) {
    Q3DCamera_Connect_ZoomLevelChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_camera_preset_changed(void* self, int32_t preset) {
    Q3DCamera_CameraPresetChanged((Q3DCamera*)self, preset);
}

void q_3dcamera_on_camera_preset_changed(void* self, void (*callback)(void*, int32_t)) {
    Q3DCamera_Connect_CameraPresetChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_wrap_x_rotation_changed(void* self, bool isEnabled) {
    Q3DCamera_WrapXRotationChanged((Q3DCamera*)self, isEnabled);
}

void q_3dcamera_on_wrap_x_rotation_changed(void* self, void (*callback)(void*, bool)) {
    Q3DCamera_Connect_WrapXRotationChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_wrap_y_rotation_changed(void* self, bool isEnabled) {
    Q3DCamera_WrapYRotationChanged((Q3DCamera*)self, isEnabled);
}

void q_3dcamera_on_wrap_y_rotation_changed(void* self, void (*callback)(void*, bool)) {
    Q3DCamera_Connect_WrapYRotationChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_target_changed(void* self, const void* target) {
    Q3DCamera_TargetChanged((Q3DCamera*)self, (QVector3D*)target);
}

void q_3dcamera_on_target_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DCamera_Connect_TargetChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_min_zoom_level_changed(void* self, float zoomLevel) {
    Q3DCamera_MinZoomLevelChanged((Q3DCamera*)self, zoomLevel);
}

void q_3dcamera_on_min_zoom_level_changed(void* self, void (*callback)(void*, float)) {
    Q3DCamera_Connect_MinZoomLevelChanged((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_max_zoom_level_changed(void* self, float zoomLevel) {
    Q3DCamera_MaxZoomLevelChanged((Q3DCamera*)self, zoomLevel);
}

void q_3dcamera_on_max_zoom_level_changed(void* self, void (*callback)(void*, float)) {
    Q3DCamera_Connect_MaxZoomLevelChanged((Q3DCamera*)self, (intptr_t)callback);
}

const char* q_3dcamera_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dcamera_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dcamera_set_camera_position3(void* self, float horizontal, float vertical, float zoom) {
    Q3DCamera_SetCameraPosition3((Q3DCamera*)self, horizontal, vertical, zoom);
}

Q3DScene* q_3dcamera_parent_scene(void* self) {
    return Q3DObject_ParentScene((Q3DObject*)self);
}

QVector3D* q_3dcamera_position(const void* self) {
    return Q3DObject_Position((Q3DObject*)self);
}

void q_3dcamera_set_position(void* self, const void* position) {
    Q3DObject_SetPosition((Q3DObject*)self, (QVector3D*)position);
}

void q_3dcamera_position_changed(void* self, const void* position) {
    Q3DObject_PositionChanged((Q3DObject*)self, (QVector3D*)position);
}

void q_3dcamera_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DObject_Connect_PositionChanged((Q3DObject*)self, (intptr_t)callback);
}

const char* q_3dcamera_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dcamera_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_3dcamera_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_3dcamera_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_3dcamera_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_3dcamera_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_3dcamera_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_3dcamera_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_3dcamera_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_3dcamera_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_3dcamera_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_3dcamera_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_3dcamera_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_3dcamera_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_3dcamera_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_3dcamera_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_3dcamera_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_3dcamera_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_3dcamera_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_3dcamera_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_3dcamera_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_3dcamera_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_3dcamera_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_3dcamera_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_3dcamera_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_3dcamera_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_3dcamera_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_3dcamera_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_3dcamera_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_3dcamera_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_3dcamera_dynamic_property_names\n");
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

QBindingStorage* q_3dcamera_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_3dcamera_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_3dcamera_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_3dcamera_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_3dcamera_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_3dcamera_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_3dcamera_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_3dcamera_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_3dcamera_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_3dcamera_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_3dcamera_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_3dcamera_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_3dcamera_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_3dcamera_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_3dcamera_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_3dcamera_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_3dcamera_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_3dcamera_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_3dcamera_event(void* self, void* event) {
    return Q3DCamera_Event((Q3DCamera*)self, (QEvent*)event);
}

bool q_3dcamera_super_event(void* self, void* event) {
    return Q3DCamera_SuperEvent((Q3DCamera*)self, (QEvent*)event);
}

void q_3dcamera_on_event(void* self, bool (*callback)(void*, void*)) {
    Q3DCamera_OnEvent((Q3DCamera*)self, (intptr_t)callback);
}

bool q_3dcamera_event_filter(void* self, void* watched, void* event) {
    return Q3DCamera_EventFilter((Q3DCamera*)self, (QObject*)watched, (QEvent*)event);
}

bool q_3dcamera_super_event_filter(void* self, void* watched, void* event) {
    return Q3DCamera_SuperEventFilter((Q3DCamera*)self, (QObject*)watched, (QEvent*)event);
}

void q_3dcamera_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Q3DCamera_OnEventFilter((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_timer_event(void* self, void* event) {
    Q3DCamera_TimerEvent((Q3DCamera*)self, (QTimerEvent*)event);
}

void q_3dcamera_super_timer_event(void* self, void* event) {
    Q3DCamera_SuperTimerEvent((Q3DCamera*)self, (QTimerEvent*)event);
}

void q_3dcamera_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Q3DCamera_OnTimerEvent((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_child_event(void* self, void* event) {
    Q3DCamera_ChildEvent((Q3DCamera*)self, (QChildEvent*)event);
}

void q_3dcamera_super_child_event(void* self, void* event) {
    Q3DCamera_SuperChildEvent((Q3DCamera*)self, (QChildEvent*)event);
}

void q_3dcamera_on_child_event(void* self, void (*callback)(void*, void*)) {
    Q3DCamera_OnChildEvent((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_custom_event(void* self, void* event) {
    Q3DCamera_CustomEvent((Q3DCamera*)self, (QEvent*)event);
}

void q_3dcamera_super_custom_event(void* self, void* event) {
    Q3DCamera_SuperCustomEvent((Q3DCamera*)self, (QEvent*)event);
}

void q_3dcamera_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Q3DCamera_OnCustomEvent((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_connect_notify(void* self, const void* signal) {
    Q3DCamera_ConnectNotify((Q3DCamera*)self, (QMetaMethod*)signal);
}

void q_3dcamera_super_connect_notify(void* self, const void* signal) {
    Q3DCamera_SuperConnectNotify((Q3DCamera*)self, (QMetaMethod*)signal);
}

void q_3dcamera_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DCamera_OnConnectNotify((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_disconnect_notify(void* self, const void* signal) {
    Q3DCamera_DisconnectNotify((Q3DCamera*)self, (QMetaMethod*)signal);
}

void q_3dcamera_super_disconnect_notify(void* self, const void* signal) {
    Q3DCamera_SuperDisconnectNotify((Q3DCamera*)self, (QMetaMethod*)signal);
}

void q_3dcamera_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DCamera_OnDisconnectNotify((Q3DCamera*)self, (intptr_t)callback);
}

void q_3dcamera_set_dirty(void* self, bool dirty) {
    Q3DCamera_SetDirty((Q3DCamera*)self, dirty);
}

bool q_3dcamera_is_dirty(const void* self) {
    return Q3DCamera_IsDirty((Q3DCamera*)self);
}

QObject* q_3dcamera_sender(const void* self) {
    return Q3DCamera_Sender((Q3DCamera*)self);
}

int32_t q_3dcamera_sender_signal_index(const void* self) {
    return Q3DCamera_SenderSignalIndex((Q3DCamera*)self);
}

int32_t q_3dcamera_receivers(const void* self, const char* signal) {
    return Q3DCamera_Receivers((Q3DCamera*)self, signal);
}

bool q_3dcamera_is_signal_connected(const void* self, const void* signal) {
    return Q3DCamera_IsSignalConnected((Q3DCamera*)self, (QMetaMethod*)signal);
}

void q_3dcamera_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_3dcamera_delete(void* self) {
    Q3DCamera_Delete((Q3DCamera*)(self));
}
