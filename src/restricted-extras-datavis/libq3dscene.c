#include "libq3dcamera.hpp"
#include "libq3dlight.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "libq3dscene.hpp"
#include "libq3dscene.h"

Q3DScene* q_3dscene_new() {
    return Q3DScene_New();
}

Q3DScene* q_3dscene_new2(void* parent) {
    return Q3DScene_New2((QObject*)parent);
}

const QMetaObject* q_3dscene_meta_object(const void* self) {
    return Q3DScene_MetaObject((Q3DScene*)self);
}

void q_3dscene_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    Q3DScene_OnMetaObject((Q3DScene*)self, (intptr_t)callback);
}

const QMetaObject* q_3dscene_super_meta_object(const void* self) {
    return Q3DScene_SuperMetaObject((Q3DScene*)self);
}

void* q_3dscene_metacast(void* self, const char* param1) {
    return Q3DScene_Metacast((Q3DScene*)self, param1);
}

void q_3dscene_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Q3DScene_OnMetacast((Q3DScene*)self, (intptr_t)callback);
}

void* q_3dscene_super_metacast(void* self, const char* param1) {
    return Q3DScene_SuperMetacast((Q3DScene*)self, param1);
}

int32_t q_3dscene_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DScene_Metacall((Q3DScene*)self, param1, param2, param3);
}

void q_3dscene_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Q3DScene_OnMetacall((Q3DScene*)self, (intptr_t)callback);
}

int32_t q_3dscene_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DScene_SuperMetacall((Q3DScene*)self, param1, param2, param3);
}

const char* q_3dscene_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRect* q_3dscene_viewport(const void* self) {
    return Q3DScene_Viewport((Q3DScene*)self);
}

QRect* q_3dscene_primary_sub_viewport(const void* self) {
    return Q3DScene_PrimarySubViewport((Q3DScene*)self);
}

void q_3dscene_set_primary_sub_viewport(void* self, const void* primarySubViewport) {
    Q3DScene_SetPrimarySubViewport((Q3DScene*)self, (QRect*)primarySubViewport);
}

bool q_3dscene_is_point_in_primary_sub_view(void* self, const void* point) {
    return Q3DScene_IsPointInPrimarySubView((Q3DScene*)self, (QPoint*)point);
}

QRect* q_3dscene_secondary_sub_viewport(const void* self) {
    return Q3DScene_SecondarySubViewport((Q3DScene*)self);
}

void q_3dscene_set_secondary_sub_viewport(void* self, const void* secondarySubViewport) {
    Q3DScene_SetSecondarySubViewport((Q3DScene*)self, (QRect*)secondarySubViewport);
}

bool q_3dscene_is_point_in_secondary_sub_view(void* self, const void* point) {
    return Q3DScene_IsPointInSecondarySubView((Q3DScene*)self, (QPoint*)point);
}

void q_3dscene_set_selection_query_position(void* self, const void* point) {
    Q3DScene_SetSelectionQueryPosition((Q3DScene*)self, (QPoint*)point);
}

QPoint* q_3dscene_selection_query_position(const void* self) {
    return Q3DScene_SelectionQueryPosition((Q3DScene*)self);
}

QPoint* q_3dscene_invalid_selection_point() {
    return Q3DScene_InvalidSelectionPoint();
}

void q_3dscene_set_graph_position_query(void* self, const void* point) {
    Q3DScene_SetGraphPositionQuery((Q3DScene*)self, (QPoint*)point);
}

QPoint* q_3dscene_graph_position_query(const void* self) {
    return Q3DScene_GraphPositionQuery((Q3DScene*)self);
}

void q_3dscene_set_slicing_active(void* self, bool isSlicing) {
    Q3DScene_SetSlicingActive((Q3DScene*)self, isSlicing);
}

bool q_3dscene_is_slicing_active(const void* self) {
    return Q3DScene_IsSlicingActive((Q3DScene*)self);
}

void q_3dscene_set_secondary_subview_on_top(void* self, bool isSecondaryOnTop) {
    Q3DScene_SetSecondarySubviewOnTop((Q3DScene*)self, isSecondaryOnTop);
}

bool q_3dscene_is_secondary_subview_on_top(const void* self) {
    return Q3DScene_IsSecondarySubviewOnTop((Q3DScene*)self);
}

Q3DCamera* q_3dscene_active_camera(const void* self) {
    return Q3DScene_ActiveCamera((Q3DScene*)self);
}

void q_3dscene_set_active_camera(void* self, void* camera) {
    Q3DScene_SetActiveCamera((Q3DScene*)self, (Q3DCamera*)camera);
}

Q3DLight* q_3dscene_active_light(const void* self) {
    return Q3DScene_ActiveLight((Q3DScene*)self);
}

void q_3dscene_set_active_light(void* self, void* light) {
    Q3DScene_SetActiveLight((Q3DScene*)self, (Q3DLight*)light);
}

float q_3dscene_device_pixel_ratio(const void* self) {
    return Q3DScene_DevicePixelRatio((Q3DScene*)self);
}

void q_3dscene_set_device_pixel_ratio(void* self, float pixelRatio) {
    Q3DScene_SetDevicePixelRatio((Q3DScene*)self, pixelRatio);
}

void q_3dscene_viewport_changed(void* self, const void* viewport) {
    Q3DScene_ViewportChanged((Q3DScene*)self, (QRect*)viewport);
}

void q_3dscene_on_viewport_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_Connect_ViewportChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_primary_sub_viewport_changed(void* self, const void* subViewport) {
    Q3DScene_PrimarySubViewportChanged((Q3DScene*)self, (QRect*)subViewport);
}

void q_3dscene_on_primary_sub_viewport_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_Connect_PrimarySubViewportChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_secondary_sub_viewport_changed(void* self, const void* subViewport) {
    Q3DScene_SecondarySubViewportChanged((Q3DScene*)self, (QRect*)subViewport);
}

void q_3dscene_on_secondary_sub_viewport_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_Connect_SecondarySubViewportChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_secondary_subview_on_top_changed(void* self, bool isSecondaryOnTop) {
    Q3DScene_SecondarySubviewOnTopChanged((Q3DScene*)self, isSecondaryOnTop);
}

void q_3dscene_on_secondary_subview_on_top_changed(void* self, void (*callback)(void*, bool)) {
    Q3DScene_Connect_SecondarySubviewOnTopChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_slicing_active_changed(void* self, bool isSlicingActive) {
    Q3DScene_SlicingActiveChanged((Q3DScene*)self, isSlicingActive);
}

void q_3dscene_on_slicing_active_changed(void* self, void (*callback)(void*, bool)) {
    Q3DScene_Connect_SlicingActiveChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_active_camera_changed(void* self, void* camera) {
    Q3DScene_ActiveCameraChanged((Q3DScene*)self, (Q3DCamera*)camera);
}

void q_3dscene_on_active_camera_changed(void* self, void (*callback)(void*, void*)) {
    Q3DScene_Connect_ActiveCameraChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_active_light_changed(void* self, void* light) {
    Q3DScene_ActiveLightChanged((Q3DScene*)self, (Q3DLight*)light);
}

void q_3dscene_on_active_light_changed(void* self, void (*callback)(void*, void*)) {
    Q3DScene_Connect_ActiveLightChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_device_pixel_ratio_changed(void* self, float pixelRatio) {
    Q3DScene_DevicePixelRatioChanged((Q3DScene*)self, pixelRatio);
}

void q_3dscene_on_device_pixel_ratio_changed(void* self, void (*callback)(void*, float)) {
    Q3DScene_Connect_DevicePixelRatioChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_selection_query_position_changed(void* self, const void* position) {
    Q3DScene_SelectionQueryPositionChanged((Q3DScene*)self, (QPoint*)position);
}

void q_3dscene_on_selection_query_position_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_Connect_SelectionQueryPositionChanged((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_graph_position_query_changed(void* self, const void* position) {
    Q3DScene_GraphPositionQueryChanged((Q3DScene*)self, (QPoint*)position);
}

void q_3dscene_on_graph_position_query_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_Connect_GraphPositionQueryChanged((Q3DScene*)self, (intptr_t)callback);
}

const char* q_3dscene_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dscene_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dscene_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dscene_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_3dscene_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_3dscene_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_3dscene_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_3dscene_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_3dscene_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_3dscene_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_3dscene_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_3dscene_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_3dscene_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_3dscene_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_3dscene_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_3dscene_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_3dscene_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_3dscene_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_3dscene_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_3dscene_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_3dscene_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_3dscene_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_3dscene_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_3dscene_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_3dscene_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_3dscene_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_3dscene_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_3dscene_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_3dscene_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_3dscene_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_3dscene_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_3dscene_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_3dscene_dynamic_property_names\n");
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

QBindingStorage* q_3dscene_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_3dscene_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_3dscene_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_3dscene_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_3dscene_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_3dscene_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_3dscene_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_3dscene_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_3dscene_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_3dscene_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_3dscene_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_3dscene_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_3dscene_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_3dscene_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_3dscene_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_3dscene_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_3dscene_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_3dscene_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_3dscene_event(void* self, void* event) {
    return Q3DScene_Event((Q3DScene*)self, (QEvent*)event);
}

bool q_3dscene_super_event(void* self, void* event) {
    return Q3DScene_SuperEvent((Q3DScene*)self, (QEvent*)event);
}

void q_3dscene_on_event(void* self, bool (*callback)(void*, void*)) {
    Q3DScene_OnEvent((Q3DScene*)self, (intptr_t)callback);
}

bool q_3dscene_event_filter(void* self, void* watched, void* event) {
    return Q3DScene_EventFilter((Q3DScene*)self, (QObject*)watched, (QEvent*)event);
}

bool q_3dscene_super_event_filter(void* self, void* watched, void* event) {
    return Q3DScene_SuperEventFilter((Q3DScene*)self, (QObject*)watched, (QEvent*)event);
}

void q_3dscene_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Q3DScene_OnEventFilter((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_timer_event(void* self, void* event) {
    Q3DScene_TimerEvent((Q3DScene*)self, (QTimerEvent*)event);
}

void q_3dscene_super_timer_event(void* self, void* event) {
    Q3DScene_SuperTimerEvent((Q3DScene*)self, (QTimerEvent*)event);
}

void q_3dscene_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Q3DScene_OnTimerEvent((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_child_event(void* self, void* event) {
    Q3DScene_ChildEvent((Q3DScene*)self, (QChildEvent*)event);
}

void q_3dscene_super_child_event(void* self, void* event) {
    Q3DScene_SuperChildEvent((Q3DScene*)self, (QChildEvent*)event);
}

void q_3dscene_on_child_event(void* self, void (*callback)(void*, void*)) {
    Q3DScene_OnChildEvent((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_custom_event(void* self, void* event) {
    Q3DScene_CustomEvent((Q3DScene*)self, (QEvent*)event);
}

void q_3dscene_super_custom_event(void* self, void* event) {
    Q3DScene_SuperCustomEvent((Q3DScene*)self, (QEvent*)event);
}

void q_3dscene_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Q3DScene_OnCustomEvent((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_connect_notify(void* self, const void* signal) {
    Q3DScene_ConnectNotify((Q3DScene*)self, (QMetaMethod*)signal);
}

void q_3dscene_super_connect_notify(void* self, const void* signal) {
    Q3DScene_SuperConnectNotify((Q3DScene*)self, (QMetaMethod*)signal);
}

void q_3dscene_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_OnConnectNotify((Q3DScene*)self, (intptr_t)callback);
}

void q_3dscene_disconnect_notify(void* self, const void* signal) {
    Q3DScene_DisconnectNotify((Q3DScene*)self, (QMetaMethod*)signal);
}

void q_3dscene_super_disconnect_notify(void* self, const void* signal) {
    Q3DScene_SuperDisconnectNotify((Q3DScene*)self, (QMetaMethod*)signal);
}

void q_3dscene_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DScene_OnDisconnectNotify((Q3DScene*)self, (intptr_t)callback);
}

QObject* q_3dscene_sender(const void* self) {
    return Q3DScene_Sender((Q3DScene*)self);
}

int32_t q_3dscene_sender_signal_index(const void* self) {
    return Q3DScene_SenderSignalIndex((Q3DScene*)self);
}

int32_t q_3dscene_receivers(const void* self, const char* signal) {
    return Q3DScene_Receivers((Q3DScene*)self, signal);
}

bool q_3dscene_is_signal_connected(const void* self, const void* signal) {
    return Q3DScene_IsSignalConnected((Q3DScene*)self, (QMetaMethod*)signal);
}

void q_3dscene_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_3dscene_delete(void* self) {
    Q3DScene_Delete((Q3DScene*)(self));
}
