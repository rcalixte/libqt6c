#include "libqaudioengine.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include "../libqvectornd.hpp"
#include "libqaudioroom.hpp"
#include "libqaudioroom.h"

QAudioRoom* q_audioroom_new(void* engine) {
    return QAudioRoom_new((QAudioEngine*)engine);
}

const QMetaObject* q_audioroom_meta_object(void* self) {
    return QAudioRoom_MetaObject((QAudioRoom*)self);
}

void* q_audioroom_metacast(void* self, const char* param1) {
    return QAudioRoom_Metacast((QAudioRoom*)self, param1);
}

int32_t q_audioroom_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioRoom_Metacall((QAudioRoom*)self, param1, param2, param3);
}

void q_audioroom_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioRoom_OnMetacall((QAudioRoom*)self, (intptr_t)callback);
}

int32_t q_audioroom_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioRoom_QBaseMetacall((QAudioRoom*)self, param1, param2, param3);
}

const char* q_audioroom_tr(const char* s) {
    libqt_string _str = QAudioRoom_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audioroom_set_position(void* self, void* pos) {
    QAudioRoom_SetPosition((QAudioRoom*)self, (QVector3D*)pos);
}

QVector3D* q_audioroom_position(void* self) {
    return QAudioRoom_Position((QAudioRoom*)self);
}

void q_audioroom_set_dimensions(void* self, void* dim) {
    QAudioRoom_SetDimensions((QAudioRoom*)self, (QVector3D*)dim);
}

QVector3D* q_audioroom_dimensions(void* self) {
    return QAudioRoom_Dimensions((QAudioRoom*)self);
}

void q_audioroom_set_rotation(void* self, void* q) {
    QAudioRoom_SetRotation((QAudioRoom*)self, (QQuaternion*)q);
}

QQuaternion* q_audioroom_rotation(void* self) {
    return QAudioRoom_Rotation((QAudioRoom*)self);
}

void q_audioroom_set_wall_material(void* self, int32_t wall, int32_t material) {
    QAudioRoom_SetWallMaterial((QAudioRoom*)self, wall, material);
}

int32_t q_audioroom_wall_material(void* self, int32_t wall) {
    return QAudioRoom_WallMaterial((QAudioRoom*)self, wall);
}

void q_audioroom_set_reflection_gain(void* self, float factor) {
    QAudioRoom_SetReflectionGain((QAudioRoom*)self, factor);
}

float q_audioroom_reflection_gain(void* self) {
    return QAudioRoom_ReflectionGain((QAudioRoom*)self);
}

void q_audioroom_set_reverb_gain(void* self, float factor) {
    QAudioRoom_SetReverbGain((QAudioRoom*)self, factor);
}

float q_audioroom_reverb_gain(void* self) {
    return QAudioRoom_ReverbGain((QAudioRoom*)self);
}

void q_audioroom_set_reverb_time(void* self, float factor) {
    QAudioRoom_SetReverbTime((QAudioRoom*)self, factor);
}

float q_audioroom_reverb_time(void* self) {
    return QAudioRoom_ReverbTime((QAudioRoom*)self);
}

void q_audioroom_set_reverb_brightness(void* self, float factor) {
    QAudioRoom_SetReverbBrightness((QAudioRoom*)self, factor);
}

float q_audioroom_reverb_brightness(void* self) {
    return QAudioRoom_ReverbBrightness((QAudioRoom*)self);
}

void q_audioroom_position_changed(void* self) {
    QAudioRoom_PositionChanged((QAudioRoom*)self);
}

void q_audioroom_on_position_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_PositionChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_dimensions_changed(void* self) {
    QAudioRoom_DimensionsChanged((QAudioRoom*)self);
}

void q_audioroom_on_dimensions_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_DimensionsChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_rotation_changed(void* self) {
    QAudioRoom_RotationChanged((QAudioRoom*)self);
}

void q_audioroom_on_rotation_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_RotationChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_walls_changed(void* self) {
    QAudioRoom_WallsChanged((QAudioRoom*)self);
}

void q_audioroom_on_walls_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_WallsChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_reflection_gain_changed(void* self) {
    QAudioRoom_ReflectionGainChanged((QAudioRoom*)self);
}

void q_audioroom_on_reflection_gain_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_ReflectionGainChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_reverb_gain_changed(void* self) {
    QAudioRoom_ReverbGainChanged((QAudioRoom*)self);
}

void q_audioroom_on_reverb_gain_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_ReverbGainChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_reverb_time_changed(void* self) {
    QAudioRoom_ReverbTimeChanged((QAudioRoom*)self);
}

void q_audioroom_on_reverb_time_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_ReverbTimeChanged((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_reverb_brightness_changed(void* self) {
    QAudioRoom_ReverbBrightnessChanged((QAudioRoom*)self);
}

void q_audioroom_on_reverb_brightness_changed(void* self, void (*callback)(void*)) {
    QAudioRoom_Connect_ReverbBrightnessChanged((QAudioRoom*)self, (intptr_t)callback);
}

const char* q_audioroom_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioRoom_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audioroom_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioRoom_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audioroom_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audioroom_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audioroom_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audioroom_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audioroom_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audioroom_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audioroom_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audioroom_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audioroom_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audioroom_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_audioroom_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audioroom_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audioroom_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audioroom_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audioroom_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audioroom_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audioroom_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audioroom_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audioroom_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audioroom_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_audioroom_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audioroom_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audioroom_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audioroom_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audioroom_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_audioroom_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_audioroom_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audioroom_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audioroom_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audioroom_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audioroom_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audioroom_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audioroom_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_audioroom_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_audioroom_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_audioroom_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audioroom_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_audioroom_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audioroom_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audioroom_event(void* self, void* event) {
    return QAudioRoom_Event((QAudioRoom*)self, (QEvent*)event);
}

bool q_audioroom_qbase_event(void* self, void* event) {
    return QAudioRoom_QBaseEvent((QAudioRoom*)self, (QEvent*)event);
}

void q_audioroom_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioRoom_OnEvent((QAudioRoom*)self, (intptr_t)callback);
}

bool q_audioroom_event_filter(void* self, void* watched, void* event) {
    return QAudioRoom_EventFilter((QAudioRoom*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audioroom_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioRoom_QBaseEventFilter((QAudioRoom*)self, (QObject*)watched, (QEvent*)event);
}

void q_audioroom_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioRoom_OnEventFilter((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_timer_event(void* self, void* event) {
    QAudioRoom_TimerEvent((QAudioRoom*)self, (QTimerEvent*)event);
}

void q_audioroom_qbase_timer_event(void* self, void* event) {
    QAudioRoom_QBaseTimerEvent((QAudioRoom*)self, (QTimerEvent*)event);
}

void q_audioroom_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioRoom_OnTimerEvent((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_child_event(void* self, void* event) {
    QAudioRoom_ChildEvent((QAudioRoom*)self, (QChildEvent*)event);
}

void q_audioroom_qbase_child_event(void* self, void* event) {
    QAudioRoom_QBaseChildEvent((QAudioRoom*)self, (QChildEvent*)event);
}

void q_audioroom_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioRoom_OnChildEvent((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_custom_event(void* self, void* event) {
    QAudioRoom_CustomEvent((QAudioRoom*)self, (QEvent*)event);
}

void q_audioroom_qbase_custom_event(void* self, void* event) {
    QAudioRoom_QBaseCustomEvent((QAudioRoom*)self, (QEvent*)event);
}

void q_audioroom_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioRoom_OnCustomEvent((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_connect_notify(void* self, void* signal) {
    QAudioRoom_ConnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

void q_audioroom_qbase_connect_notify(void* self, void* signal) {
    QAudioRoom_QBaseConnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

void q_audioroom_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioRoom_OnConnectNotify((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_disconnect_notify(void* self, void* signal) {
    QAudioRoom_DisconnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

void q_audioroom_qbase_disconnect_notify(void* self, void* signal) {
    QAudioRoom_QBaseDisconnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

void q_audioroom_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioRoom_OnDisconnectNotify((QAudioRoom*)self, (intptr_t)callback);
}

QObject* q_audioroom_sender(void* self) {
    return QAudioRoom_Sender((QAudioRoom*)self);
}

QObject* q_audioroom_qbase_sender(void* self) {
    return QAudioRoom_QBaseSender((QAudioRoom*)self);
}

void q_audioroom_on_sender(void* self, QObject* (*callback)()) {
    QAudioRoom_OnSender((QAudioRoom*)self, (intptr_t)callback);
}

int32_t q_audioroom_sender_signal_index(void* self) {
    return QAudioRoom_SenderSignalIndex((QAudioRoom*)self);
}

int32_t q_audioroom_qbase_sender_signal_index(void* self) {
    return QAudioRoom_QBaseSenderSignalIndex((QAudioRoom*)self);
}

void q_audioroom_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioRoom_OnSenderSignalIndex((QAudioRoom*)self, (intptr_t)callback);
}

int32_t q_audioroom_receivers(void* self, const char* signal) {
    return QAudioRoom_Receivers((QAudioRoom*)self, signal);
}

int32_t q_audioroom_qbase_receivers(void* self, const char* signal) {
    return QAudioRoom_QBaseReceivers((QAudioRoom*)self, signal);
}

void q_audioroom_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioRoom_OnReceivers((QAudioRoom*)self, (intptr_t)callback);
}

bool q_audioroom_is_signal_connected(void* self, void* signal) {
    return QAudioRoom_IsSignalConnected((QAudioRoom*)self, (QMetaMethod*)signal);
}

bool q_audioroom_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioRoom_QBaseIsSignalConnected((QAudioRoom*)self, (QMetaMethod*)signal);
}

void q_audioroom_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioRoom_OnIsSignalConnected((QAudioRoom*)self, (intptr_t)callback);
}

void q_audioroom_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audioroom_delete(void* self) {
    QAudioRoom_Delete((QAudioRoom*)(self));
}
