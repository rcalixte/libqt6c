#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include "../libqvectornd.hpp"
#include "libqcustom3ditem.hpp"
#include "libqcustom3ditem.h"

QCustom3DItem* q_custom3ditem_new() {
    return QCustom3DItem_New();
}

QCustom3DItem* q_custom3ditem_new2(const char* meshFile, const void* position, const void* scaling, const void* rotation, const void* texture) {
    return QCustom3DItem_New2(qstring(meshFile), (QVector3D*)position, (QVector3D*)scaling, (QQuaternion*)rotation, (QImage*)texture);
}

QCustom3DItem* q_custom3ditem_new3(void* parent) {
    return QCustom3DItem_New3((QObject*)parent);
}

QCustom3DItem* q_custom3ditem_new4(const char* meshFile, const void* position, const void* scaling, const void* rotation, const void* texture, void* parent) {
    return QCustom3DItem_New4(qstring(meshFile), (QVector3D*)position, (QVector3D*)scaling, (QQuaternion*)rotation, (QImage*)texture, (QObject*)parent);
}

const QMetaObject* q_custom3ditem_meta_object(const void* self) {
    return QCustom3DItem_MetaObject((QCustom3DItem*)self);
}

void q_custom3ditem_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QCustom3DItem_OnMetaObject((QCustom3DItem*)self, (intptr_t)callback);
}

const QMetaObject* q_custom3ditem_super_meta_object(const void* self) {
    return QCustom3DItem_SuperMetaObject((QCustom3DItem*)self);
}

void* q_custom3ditem_metacast(void* self, const char* param1) {
    return QCustom3DItem_Metacast((QCustom3DItem*)self, param1);
}

void q_custom3ditem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCustom3DItem_OnMetacast((QCustom3DItem*)self, (intptr_t)callback);
}

void* q_custom3ditem_super_metacast(void* self, const char* param1) {
    return QCustom3DItem_SuperMetacast((QCustom3DItem*)self, param1);
}

int32_t q_custom3ditem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCustom3DItem_Metacall((QCustom3DItem*)self, param1, param2, param3);
}

void q_custom3ditem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCustom3DItem_OnMetacall((QCustom3DItem*)self, (intptr_t)callback);
}

int32_t q_custom3ditem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCustom3DItem_SuperMetacall((QCustom3DItem*)self, param1, param2, param3);
}

const char* q_custom3ditem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3ditem_set_mesh_file(void* self, const char* meshFile) {
    QCustom3DItem_SetMeshFile((QCustom3DItem*)self, qstring(meshFile));
}

const char* q_custom3ditem_mesh_file(const void* self) {
    libqt_string _str = QCustom3DItem_MeshFile((QCustom3DItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3ditem_set_texture_file(void* self, const char* textureFile) {
    QCustom3DItem_SetTextureFile((QCustom3DItem*)self, qstring(textureFile));
}

const char* q_custom3ditem_texture_file(const void* self) {
    libqt_string _str = QCustom3DItem_TextureFile((QCustom3DItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3ditem_set_position(void* self, const void* position) {
    QCustom3DItem_SetPosition((QCustom3DItem*)self, (QVector3D*)position);
}

QVector3D* q_custom3ditem_position(const void* self) {
    return QCustom3DItem_Position((QCustom3DItem*)self);
}

void q_custom3ditem_set_position_absolute(void* self, bool positionAbsolute) {
    QCustom3DItem_SetPositionAbsolute((QCustom3DItem*)self, positionAbsolute);
}

bool q_custom3ditem_is_position_absolute(const void* self) {
    return QCustom3DItem_IsPositionAbsolute((QCustom3DItem*)self);
}

void q_custom3ditem_set_scaling(void* self, const void* scaling) {
    QCustom3DItem_SetScaling((QCustom3DItem*)self, (QVector3D*)scaling);
}

QVector3D* q_custom3ditem_scaling(const void* self) {
    return QCustom3DItem_Scaling((QCustom3DItem*)self);
}

void q_custom3ditem_set_scaling_absolute(void* self, bool scalingAbsolute) {
    QCustom3DItem_SetScalingAbsolute((QCustom3DItem*)self, scalingAbsolute);
}

bool q_custom3ditem_is_scaling_absolute(const void* self) {
    return QCustom3DItem_IsScalingAbsolute((QCustom3DItem*)self);
}

void q_custom3ditem_set_rotation(void* self, const void* rotation) {
    QCustom3DItem_SetRotation((QCustom3DItem*)self, (QQuaternion*)rotation);
}

QQuaternion* q_custom3ditem_rotation(void* self) {
    return QCustom3DItem_Rotation((QCustom3DItem*)self);
}

void q_custom3ditem_set_visible(void* self, bool visible) {
    QCustom3DItem_SetVisible((QCustom3DItem*)self, visible);
}

bool q_custom3ditem_is_visible(const void* self) {
    return QCustom3DItem_IsVisible((QCustom3DItem*)self);
}

void q_custom3ditem_set_shadow_casting(void* self, bool enabled) {
    QCustom3DItem_SetShadowCasting((QCustom3DItem*)self, enabled);
}

bool q_custom3ditem_is_shadow_casting(const void* self) {
    return QCustom3DItem_IsShadowCasting((QCustom3DItem*)self);
}

void q_custom3ditem_set_rotation_axis_and_angle(void* self, const void* axis, float angle) {
    QCustom3DItem_SetRotationAxisAndAngle((QCustom3DItem*)self, (QVector3D*)axis, angle);
}

void q_custom3ditem_set_texture_image(void* self, const void* textureImage) {
    QCustom3DItem_SetTextureImage((QCustom3DItem*)self, (QImage*)textureImage);
}

void q_custom3ditem_mesh_file_changed(void* self, const char* meshFile) {
    QCustom3DItem_MeshFileChanged((QCustom3DItem*)self, qstring(meshFile));
}

void q_custom3ditem_on_mesh_file_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DItem_Connect_MeshFileChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_texture_file_changed(void* self, const char* textureFile) {
    QCustom3DItem_TextureFileChanged((QCustom3DItem*)self, qstring(textureFile));
}

void q_custom3ditem_on_texture_file_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DItem_Connect_TextureFileChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_position_changed(void* self, const void* position) {
    QCustom3DItem_PositionChanged((QCustom3DItem*)self, (QVector3D*)position);
}

void q_custom3ditem_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_PositionChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_position_absolute_changed(void* self, bool positionAbsolute) {
    QCustom3DItem_PositionAbsoluteChanged((QCustom3DItem*)self, positionAbsolute);
}

void q_custom3ditem_on_position_absolute_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_PositionAbsoluteChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_scaling_changed(void* self, const void* scaling) {
    QCustom3DItem_ScalingChanged((QCustom3DItem*)self, (QVector3D*)scaling);
}

void q_custom3ditem_on_scaling_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_ScalingChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_rotation_changed(void* self, const void* rotation) {
    QCustom3DItem_RotationChanged((QCustom3DItem*)self, (QQuaternion*)rotation);
}

void q_custom3ditem_on_rotation_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_RotationChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_visible_changed(void* self, bool visible) {
    QCustom3DItem_VisibleChanged((QCustom3DItem*)self, visible);
}

void q_custom3ditem_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_VisibleChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_shadow_casting_changed(void* self, bool shadowCasting) {
    QCustom3DItem_ShadowCastingChanged((QCustom3DItem*)self, shadowCasting);
}

void q_custom3ditem_on_shadow_casting_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_ShadowCastingChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_scaling_absolute_changed(void* self, bool scalingAbsolute) {
    QCustom3DItem_ScalingAbsoluteChanged((QCustom3DItem*)self, scalingAbsolute);
}

void q_custom3ditem_on_scaling_absolute_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_ScalingAbsoluteChanged((QCustom3DItem*)self, (intptr_t)callback);
}

const char* q_custom3ditem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_custom3ditem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_custom3ditem_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3ditem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_custom3ditem_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_custom3ditem_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_custom3ditem_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_custom3ditem_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_custom3ditem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_custom3ditem_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_custom3ditem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_custom3ditem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_custom3ditem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_custom3ditem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_custom3ditem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_custom3ditem_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_custom3ditem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_custom3ditem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_custom3ditem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_custom3ditem_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_custom3ditem_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_custom3ditem_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_custom3ditem_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_custom3ditem_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_custom3ditem_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_custom3ditem_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_custom3ditem_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_custom3ditem_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_custom3ditem_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_custom3ditem_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_custom3ditem_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_custom3ditem_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_custom3ditem_dynamic_property_names\n");
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

QBindingStorage* q_custom3ditem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_custom3ditem_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_custom3ditem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_custom3ditem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_custom3ditem_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_custom3ditem_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_custom3ditem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_custom3ditem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_custom3ditem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_custom3ditem_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_custom3ditem_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_custom3ditem_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_custom3ditem_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_custom3ditem_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_custom3ditem_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_custom3ditem_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_custom3ditem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_custom3ditem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_custom3ditem_event(void* self, void* event) {
    return QCustom3DItem_Event((QCustom3DItem*)self, (QEvent*)event);
}

bool q_custom3ditem_super_event(void* self, void* event) {
    return QCustom3DItem_SuperEvent((QCustom3DItem*)self, (QEvent*)event);
}

void q_custom3ditem_on_event(void* self, bool (*callback)(void*, void*)) {
    QCustom3DItem_OnEvent((QCustom3DItem*)self, (intptr_t)callback);
}

bool q_custom3ditem_event_filter(void* self, void* watched, void* event) {
    return QCustom3DItem_EventFilter((QCustom3DItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_custom3ditem_super_event_filter(void* self, void* watched, void* event) {
    return QCustom3DItem_SuperEventFilter((QCustom3DItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_custom3ditem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCustom3DItem_OnEventFilter((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_timer_event(void* self, void* event) {
    QCustom3DItem_TimerEvent((QCustom3DItem*)self, (QTimerEvent*)event);
}

void q_custom3ditem_super_timer_event(void* self, void* event) {
    QCustom3DItem_SuperTimerEvent((QCustom3DItem*)self, (QTimerEvent*)event);
}

void q_custom3ditem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DItem_OnTimerEvent((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_child_event(void* self, void* event) {
    QCustom3DItem_ChildEvent((QCustom3DItem*)self, (QChildEvent*)event);
}

void q_custom3ditem_super_child_event(void* self, void* event) {
    QCustom3DItem_SuperChildEvent((QCustom3DItem*)self, (QChildEvent*)event);
}

void q_custom3ditem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DItem_OnChildEvent((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_custom_event(void* self, void* event) {
    QCustom3DItem_CustomEvent((QCustom3DItem*)self, (QEvent*)event);
}

void q_custom3ditem_super_custom_event(void* self, void* event) {
    QCustom3DItem_SuperCustomEvent((QCustom3DItem*)self, (QEvent*)event);
}

void q_custom3ditem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DItem_OnCustomEvent((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_connect_notify(void* self, const void* signal) {
    QCustom3DItem_ConnectNotify((QCustom3DItem*)self, (QMetaMethod*)signal);
}

void q_custom3ditem_super_connect_notify(void* self, const void* signal) {
    QCustom3DItem_SuperConnectNotify((QCustom3DItem*)self, (QMetaMethod*)signal);
}

void q_custom3ditem_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_OnConnectNotify((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3ditem_disconnect_notify(void* self, const void* signal) {
    QCustom3DItem_DisconnectNotify((QCustom3DItem*)self, (QMetaMethod*)signal);
}

void q_custom3ditem_super_disconnect_notify(void* self, const void* signal) {
    QCustom3DItem_SuperDisconnectNotify((QCustom3DItem*)self, (QMetaMethod*)signal);
}

void q_custom3ditem_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_OnDisconnectNotify((QCustom3DItem*)self, (intptr_t)callback);
}

QObject* q_custom3ditem_sender(const void* self) {
    return QCustom3DItem_Sender((QCustom3DItem*)self);
}

int32_t q_custom3ditem_sender_signal_index(const void* self) {
    return QCustom3DItem_SenderSignalIndex((QCustom3DItem*)self);
}

int32_t q_custom3ditem_receivers(const void* self, const char* signal) {
    return QCustom3DItem_Receivers((QCustom3DItem*)self, signal);
}

bool q_custom3ditem_is_signal_connected(const void* self, const void* signal) {
    return QCustom3DItem_IsSignalConnected((QCustom3DItem*)self, (QMetaMethod*)signal);
}

void q_custom3ditem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_custom3ditem_delete(void* self) {
    QCustom3DItem_Delete((QCustom3DItem*)(self));
}
