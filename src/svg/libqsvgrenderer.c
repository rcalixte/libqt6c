#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqtransform.hpp"
#include "../libqxmlstream.hpp"
#include "../libqcoreevent.hpp"
#include "libqsvgrenderer.hpp"
#include "libqsvgrenderer.h"

QSvgRenderer* q_svgrenderer_new() {
    return QSvgRenderer_new();
}

QSvgRenderer* q_svgrenderer_new2(const char* filename) {
    return QSvgRenderer_new2(qstring(filename));
}

QSvgRenderer* q_svgrenderer_new3(const char* contents) {
    return QSvgRenderer_new3(qstring(contents));
}

QSvgRenderer* q_svgrenderer_new4(void* contents) {
    return QSvgRenderer_new4((QXmlStreamReader*)contents);
}

QSvgRenderer* q_svgrenderer_new5(void* parent) {
    return QSvgRenderer_new5((QObject*)parent);
}

QSvgRenderer* q_svgrenderer_new6(const char* filename, void* parent) {
    return QSvgRenderer_new6(qstring(filename), (QObject*)parent);
}

QSvgRenderer* q_svgrenderer_new7(const char* contents, void* parent) {
    return QSvgRenderer_new7(qstring(contents), (QObject*)parent);
}

QSvgRenderer* q_svgrenderer_new8(void* contents, void* parent) {
    return QSvgRenderer_new8((QXmlStreamReader*)contents, (QObject*)parent);
}

const QMetaObject* q_svgrenderer_meta_object(void* self) {
    return QSvgRenderer_MetaObject((QSvgRenderer*)self);
}

void* q_svgrenderer_metacast(void* self, const char* param1) {
    return QSvgRenderer_Metacast((QSvgRenderer*)self, param1);
}

int32_t q_svgrenderer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSvgRenderer_Metacall((QSvgRenderer*)self, param1, param2, param3);
}

void q_svgrenderer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSvgRenderer_OnMetacall((QSvgRenderer*)self, (intptr_t)slot);
}

int32_t q_svgrenderer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSvgRenderer_QBaseMetacall((QSvgRenderer*)self, param1, param2, param3);
}

const char* q_svgrenderer_tr(const char* s) {
    libqt_string _str = QSvgRenderer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_svgrenderer_is_valid(void* self) {
    return QSvgRenderer_IsValid((QSvgRenderer*)self);
}

QSize* q_svgrenderer_default_size(void* self) {
    return QSvgRenderer_DefaultSize((QSvgRenderer*)self);
}

QRect* q_svgrenderer_view_box(void* self) {
    return QSvgRenderer_ViewBox((QSvgRenderer*)self);
}

QRectF* q_svgrenderer_view_box_f(void* self) {
    return QSvgRenderer_ViewBoxF((QSvgRenderer*)self);
}

void q_svgrenderer_set_view_box(void* self, void* viewbox) {
    QSvgRenderer_SetViewBox((QSvgRenderer*)self, (QRect*)viewbox);
}

void q_svgrenderer_set_view_box_with_viewbox(void* self, void* viewbox) {
    QSvgRenderer_SetViewBoxWithViewbox((QSvgRenderer*)self, (QRectF*)viewbox);
}

int64_t q_svgrenderer_aspect_ratio_mode(void* self) {
    return QSvgRenderer_AspectRatioMode((QSvgRenderer*)self);
}

void q_svgrenderer_set_aspect_ratio_mode(void* self, int64_t mode) {
    QSvgRenderer_SetAspectRatioMode((QSvgRenderer*)self, mode);
}

bool q_svgrenderer_animated(void* self) {
    return QSvgRenderer_Animated((QSvgRenderer*)self);
}

int32_t q_svgrenderer_frames_per_second(void* self) {
    return QSvgRenderer_FramesPerSecond((QSvgRenderer*)self);
}

void q_svgrenderer_set_frames_per_second(void* self, int num) {
    QSvgRenderer_SetFramesPerSecond((QSvgRenderer*)self, num);
}

int32_t q_svgrenderer_current_frame(void* self) {
    return QSvgRenderer_CurrentFrame((QSvgRenderer*)self);
}

void q_svgrenderer_set_current_frame(void* self, int currentFrame) {
    QSvgRenderer_SetCurrentFrame((QSvgRenderer*)self, currentFrame);
}

int32_t q_svgrenderer_animation_duration(void* self) {
    return QSvgRenderer_AnimationDuration((QSvgRenderer*)self);
}

QRectF* q_svgrenderer_bounds_on_element(void* self, const char* id) {
    return QSvgRenderer_BoundsOnElement((QSvgRenderer*)self, qstring(id));
}

bool q_svgrenderer_element_exists(void* self, const char* id) {
    return QSvgRenderer_ElementExists((QSvgRenderer*)self, qstring(id));
}

QTransform* q_svgrenderer_transform_for_element(void* self, const char* id) {
    return QSvgRenderer_TransformForElement((QSvgRenderer*)self, qstring(id));
}

bool q_svgrenderer_load(void* self, const char* filename) {
    return QSvgRenderer_Load((QSvgRenderer*)self, qstring(filename));
}

bool q_svgrenderer_load_with_contents(void* self, const char* contents) {
    return QSvgRenderer_LoadWithContents((QSvgRenderer*)self, qstring(contents));
}

bool q_svgrenderer_load2(void* self, void* contents) {
    return QSvgRenderer_Load2((QSvgRenderer*)self, (QXmlStreamReader*)contents);
}

void q_svgrenderer_render(void* self, void* p) {
    QSvgRenderer_Render((QSvgRenderer*)self, (QPainter*)p);
}

void q_svgrenderer_render2(void* self, void* p, void* bounds) {
    QSvgRenderer_Render2((QSvgRenderer*)self, (QPainter*)p, (QRectF*)bounds);
}

void q_svgrenderer_render3(void* self, void* p, const char* elementId) {
    QSvgRenderer_Render3((QSvgRenderer*)self, (QPainter*)p, qstring(elementId));
}

void q_svgrenderer_repaint_needed(void* self) {
    QSvgRenderer_RepaintNeeded((QSvgRenderer*)self);
}

void q_svgrenderer_on_repaint_needed(void* self, void (*slot)(void*)) {
    QSvgRenderer_Connect_RepaintNeeded((QSvgRenderer*)self, (intptr_t)slot);
}

const char* q_svgrenderer_tr2(const char* s, const char* c) {
    libqt_string _str = QSvgRenderer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_svgrenderer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSvgRenderer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgrenderer_render32(void* self, void* p, const char* elementId, void* bounds) {
    QSvgRenderer_Render32((QSvgRenderer*)self, (QPainter*)p, qstring(elementId), (QRectF*)bounds);
}

const char* q_svgrenderer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgrenderer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_svgrenderer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_svgrenderer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_svgrenderer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_svgrenderer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_svgrenderer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_svgrenderer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_svgrenderer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_svgrenderer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_svgrenderer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_svgrenderer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_svgrenderer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_svgrenderer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_svgrenderer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_svgrenderer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_svgrenderer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_svgrenderer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_svgrenderer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_svgrenderer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_svgrenderer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_svgrenderer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_svgrenderer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_svgrenderer_dynamic_property_names(void* self) {
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

QBindingStorage* q_svgrenderer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_svgrenderer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_svgrenderer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_svgrenderer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_svgrenderer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_svgrenderer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_svgrenderer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_svgrenderer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_svgrenderer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_svgrenderer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_svgrenderer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_svgrenderer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_svgrenderer_event(void* self, void* event) {
    return QSvgRenderer_Event((QSvgRenderer*)self, (QEvent*)event);
}

bool q_svgrenderer_qbase_event(void* self, void* event) {
    return QSvgRenderer_QBaseEvent((QSvgRenderer*)self, (QEvent*)event);
}

void q_svgrenderer_on_event(void* self, bool (*slot)(void*, void*)) {
    QSvgRenderer_OnEvent((QSvgRenderer*)self, (intptr_t)slot);
}

bool q_svgrenderer_event_filter(void* self, void* watched, void* event) {
    return QSvgRenderer_EventFilter((QSvgRenderer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_svgrenderer_qbase_event_filter(void* self, void* watched, void* event) {
    return QSvgRenderer_QBaseEventFilter((QSvgRenderer*)self, (QObject*)watched, (QEvent*)event);
}

void q_svgrenderer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSvgRenderer_OnEventFilter((QSvgRenderer*)self, (intptr_t)slot);
}

void q_svgrenderer_timer_event(void* self, void* event) {
    QSvgRenderer_TimerEvent((QSvgRenderer*)self, (QTimerEvent*)event);
}

void q_svgrenderer_qbase_timer_event(void* self, void* event) {
    QSvgRenderer_QBaseTimerEvent((QSvgRenderer*)self, (QTimerEvent*)event);
}

void q_svgrenderer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnTimerEvent((QSvgRenderer*)self, (intptr_t)slot);
}

void q_svgrenderer_child_event(void* self, void* event) {
    QSvgRenderer_ChildEvent((QSvgRenderer*)self, (QChildEvent*)event);
}

void q_svgrenderer_qbase_child_event(void* self, void* event) {
    QSvgRenderer_QBaseChildEvent((QSvgRenderer*)self, (QChildEvent*)event);
}

void q_svgrenderer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnChildEvent((QSvgRenderer*)self, (intptr_t)slot);
}

void q_svgrenderer_custom_event(void* self, void* event) {
    QSvgRenderer_CustomEvent((QSvgRenderer*)self, (QEvent*)event);
}

void q_svgrenderer_qbase_custom_event(void* self, void* event) {
    QSvgRenderer_QBaseCustomEvent((QSvgRenderer*)self, (QEvent*)event);
}

void q_svgrenderer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnCustomEvent((QSvgRenderer*)self, (intptr_t)slot);
}

void q_svgrenderer_connect_notify(void* self, void* signal) {
    QSvgRenderer_ConnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

void q_svgrenderer_qbase_connect_notify(void* self, void* signal) {
    QSvgRenderer_QBaseConnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

void q_svgrenderer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnConnectNotify((QSvgRenderer*)self, (intptr_t)slot);
}

void q_svgrenderer_disconnect_notify(void* self, void* signal) {
    QSvgRenderer_DisconnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

void q_svgrenderer_qbase_disconnect_notify(void* self, void* signal) {
    QSvgRenderer_QBaseDisconnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

void q_svgrenderer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnDisconnectNotify((QSvgRenderer*)self, (intptr_t)slot);
}

QObject* q_svgrenderer_sender(void* self) {
    return QSvgRenderer_Sender((QSvgRenderer*)self);
}

QObject* q_svgrenderer_qbase_sender(void* self) {
    return QSvgRenderer_QBaseSender((QSvgRenderer*)self);
}

void q_svgrenderer_on_sender(void* self, QObject* (*slot)()) {
    QSvgRenderer_OnSender((QSvgRenderer*)self, (intptr_t)slot);
}

int32_t q_svgrenderer_sender_signal_index(void* self) {
    return QSvgRenderer_SenderSignalIndex((QSvgRenderer*)self);
}

int32_t q_svgrenderer_qbase_sender_signal_index(void* self) {
    return QSvgRenderer_QBaseSenderSignalIndex((QSvgRenderer*)self);
}

void q_svgrenderer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSvgRenderer_OnSenderSignalIndex((QSvgRenderer*)self, (intptr_t)slot);
}

int32_t q_svgrenderer_receivers(void* self, const char* signal) {
    return QSvgRenderer_Receivers((QSvgRenderer*)self, signal);
}

int32_t q_svgrenderer_qbase_receivers(void* self, const char* signal) {
    return QSvgRenderer_QBaseReceivers((QSvgRenderer*)self, signal);
}

void q_svgrenderer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSvgRenderer_OnReceivers((QSvgRenderer*)self, (intptr_t)slot);
}

bool q_svgrenderer_is_signal_connected(void* self, void* signal) {
    return QSvgRenderer_IsSignalConnected((QSvgRenderer*)self, (QMetaMethod*)signal);
}

bool q_svgrenderer_qbase_is_signal_connected(void* self, void* signal) {
    return QSvgRenderer_QBaseIsSignalConnected((QSvgRenderer*)self, (QMetaMethod*)signal);
}

void q_svgrenderer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSvgRenderer_OnIsSignalConnected((QSvgRenderer*)self, (intptr_t)slot);
}

void q_svgrenderer_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_svgrenderer_delete(void* self) {
    QSvgRenderer_Delete((QSvgRenderer*)(self));
}
