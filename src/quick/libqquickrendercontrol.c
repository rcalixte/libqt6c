#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "libqquickwindow.hpp"
#include "../libqthread.hpp"
#include "../libqwindow.hpp"
#include "libqquickrendercontrol.hpp"
#include "libqquickrendercontrol.h"

QQuickRenderControl* q_quickrendercontrol_new() {
    return QQuickRenderControl_New();
}

QQuickRenderControl* q_quickrendercontrol_new2(void* parent) {
    return QQuickRenderControl_New2((QObject*)parent);
}

const QMetaObject* q_quickrendercontrol_meta_object(void* self) {
    return QQuickRenderControl_MetaObject((QQuickRenderControl*)self);
}

void q_quickrendercontrol_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickRenderControl_OnMetaObject((QQuickRenderControl*)self, (intptr_t)callback);
}

const QMetaObject* q_quickrendercontrol_super_meta_object(void* self) {
    return QQuickRenderControl_SuperMetaObject((QQuickRenderControl*)self);
}

void* q_quickrendercontrol_metacast(void* self, const char* param1) {
    return QQuickRenderControl_Metacast((QQuickRenderControl*)self, param1);
}

void q_quickrendercontrol_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickRenderControl_OnMetacast((QQuickRenderControl*)self, (intptr_t)callback);
}

void* q_quickrendercontrol_super_metacast(void* self, const char* param1) {
    return QQuickRenderControl_SuperMetacast((QQuickRenderControl*)self, param1);
}

int32_t q_quickrendercontrol_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickRenderControl_Metacall((QQuickRenderControl*)self, param1, param2, param3);
}

void q_quickrendercontrol_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickRenderControl_OnMetacall((QQuickRenderControl*)self, (intptr_t)callback);
}

int32_t q_quickrendercontrol_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickRenderControl_SuperMetacall((QQuickRenderControl*)self, param1, param2, param3);
}

const char* q_quickrendercontrol_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickrendercontrol_prepare_thread(void* self, void* targetThread) {
    QQuickRenderControl_PrepareThread((QQuickRenderControl*)self, (QThread*)targetThread);
}

void q_quickrendercontrol_set_samples(void* self, int sampleCount) {
    QQuickRenderControl_SetSamples((QQuickRenderControl*)self, sampleCount);
}

int32_t q_quickrendercontrol_samples(void* self) {
    return QQuickRenderControl_Samples((QQuickRenderControl*)self);
}

bool q_quickrendercontrol_initialize(void* self) {
    return QQuickRenderControl_Initialize((QQuickRenderControl*)self);
}

void q_quickrendercontrol_invalidate(void* self) {
    QQuickRenderControl_Invalidate((QQuickRenderControl*)self);
}

void q_quickrendercontrol_begin_frame(void* self) {
    QQuickRenderControl_BeginFrame((QQuickRenderControl*)self);
}

void q_quickrendercontrol_end_frame(void* self) {
    QQuickRenderControl_EndFrame((QQuickRenderControl*)self);
}

void q_quickrendercontrol_polish_items(void* self) {
    QQuickRenderControl_PolishItems((QQuickRenderControl*)self);
}

bool q_quickrendercontrol_sync(void* self) {
    return QQuickRenderControl_Sync((QQuickRenderControl*)self);
}

void q_quickrendercontrol_render(void* self) {
    QQuickRenderControl_Render((QQuickRenderControl*)self);
}

QWindow* q_quickrendercontrol_render_window_for(void* win) {
    return QQuickRenderControl_RenderWindowFor((QQuickWindow*)win);
}

QWindow* q_quickrendercontrol_render_window(void* self, void* offset) {
    return QQuickRenderControl_RenderWindow((QQuickRenderControl*)self, (QPoint*)offset);
}

void q_quickrendercontrol_on_render_window(void* self, QWindow* (*callback)(void*, void*)) {
    QQuickRenderControl_OnRenderWindow((QQuickRenderControl*)self, (intptr_t)callback);
}

QWindow* q_quickrendercontrol_super_render_window(void* self, void* offset) {
    return QQuickRenderControl_SuperRenderWindow((QQuickRenderControl*)self, (QPoint*)offset);
}

QQuickWindow* q_quickrendercontrol_window(void* self) {
    return QQuickRenderControl_Window((QQuickRenderControl*)self);
}

void q_quickrendercontrol_render_requested(void* self) {
    QQuickRenderControl_RenderRequested((QQuickRenderControl*)self);
}

void q_quickrendercontrol_on_render_requested(void* self, void (*callback)(void*)) {
    QQuickRenderControl_Connect_RenderRequested((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_scene_changed(void* self) {
    QQuickRenderControl_SceneChanged((QQuickRenderControl*)self);
}

void q_quickrendercontrol_on_scene_changed(void* self, void (*callback)(void*)) {
    QQuickRenderControl_Connect_SceneChanged((QQuickRenderControl*)self, (intptr_t)callback);
}

const char* q_quickrendercontrol_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickrendercontrol_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWindow* q_quickrendercontrol_render_window_for2(void* win, void* offset) {
    return QQuickRenderControl_RenderWindowFor2((QQuickWindow*)win, (QPoint*)offset);
}

const char* q_quickrendercontrol_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickrendercontrol_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickrendercontrol_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickrendercontrol_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickrendercontrol_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickrendercontrol_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickrendercontrol_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickrendercontrol_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickrendercontrol_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickrendercontrol_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickrendercontrol_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickrendercontrol_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickrendercontrol_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickrendercontrol_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickrendercontrol_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickrendercontrol_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickrendercontrol_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickrendercontrol_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickrendercontrol_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickrendercontrol_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickrendercontrol_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickrendercontrol_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickrendercontrol_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickrendercontrol_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickrendercontrol_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickrendercontrol_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickrendercontrol_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickrendercontrol_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickrendercontrol_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickrendercontrol_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickrendercontrol_dynamic_property_names\n");
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

QBindingStorage* q_quickrendercontrol_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickrendercontrol_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickrendercontrol_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickrendercontrol_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickrendercontrol_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickrendercontrol_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickrendercontrol_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickrendercontrol_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickrendercontrol_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickrendercontrol_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickrendercontrol_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickrendercontrol_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickrendercontrol_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickrendercontrol_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickrendercontrol_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickrendercontrol_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickrendercontrol_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickrendercontrol_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickrendercontrol_event(void* self, void* event) {
    return QQuickRenderControl_Event((QQuickRenderControl*)self, (QEvent*)event);
}

bool q_quickrendercontrol_super_event(void* self, void* event) {
    return QQuickRenderControl_SuperEvent((QQuickRenderControl*)self, (QEvent*)event);
}

void q_quickrendercontrol_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickRenderControl_OnEvent((QQuickRenderControl*)self, (intptr_t)callback);
}

bool q_quickrendercontrol_event_filter(void* self, void* watched, void* event) {
    return QQuickRenderControl_EventFilter((QQuickRenderControl*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickrendercontrol_super_event_filter(void* self, void* watched, void* event) {
    return QQuickRenderControl_SuperEventFilter((QQuickRenderControl*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickrendercontrol_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickRenderControl_OnEventFilter((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_timer_event(void* self, void* event) {
    QQuickRenderControl_TimerEvent((QQuickRenderControl*)self, (QTimerEvent*)event);
}

void q_quickrendercontrol_super_timer_event(void* self, void* event) {
    QQuickRenderControl_SuperTimerEvent((QQuickRenderControl*)self, (QTimerEvent*)event);
}

void q_quickrendercontrol_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickRenderControl_OnTimerEvent((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_child_event(void* self, void* event) {
    QQuickRenderControl_ChildEvent((QQuickRenderControl*)self, (QChildEvent*)event);
}

void q_quickrendercontrol_super_child_event(void* self, void* event) {
    QQuickRenderControl_SuperChildEvent((QQuickRenderControl*)self, (QChildEvent*)event);
}

void q_quickrendercontrol_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickRenderControl_OnChildEvent((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_custom_event(void* self, void* event) {
    QQuickRenderControl_CustomEvent((QQuickRenderControl*)self, (QEvent*)event);
}

void q_quickrendercontrol_super_custom_event(void* self, void* event) {
    QQuickRenderControl_SuperCustomEvent((QQuickRenderControl*)self, (QEvent*)event);
}

void q_quickrendercontrol_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickRenderControl_OnCustomEvent((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_connect_notify(void* self, void* signal) {
    QQuickRenderControl_ConnectNotify((QQuickRenderControl*)self, (QMetaMethod*)signal);
}

void q_quickrendercontrol_super_connect_notify(void* self, void* signal) {
    QQuickRenderControl_SuperConnectNotify((QQuickRenderControl*)self, (QMetaMethod*)signal);
}

void q_quickrendercontrol_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickRenderControl_OnConnectNotify((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_disconnect_notify(void* self, void* signal) {
    QQuickRenderControl_DisconnectNotify((QQuickRenderControl*)self, (QMetaMethod*)signal);
}

void q_quickrendercontrol_super_disconnect_notify(void* self, void* signal) {
    QQuickRenderControl_SuperDisconnectNotify((QQuickRenderControl*)self, (QMetaMethod*)signal);
}

void q_quickrendercontrol_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickRenderControl_OnDisconnectNotify((QQuickRenderControl*)self, (intptr_t)callback);
}

QObject* q_quickrendercontrol_sender(void* self) {
    return QQuickRenderControl_Sender((QQuickRenderControl*)self);
}

QObject* q_quickrendercontrol_super_sender(void* self) {
    return QQuickRenderControl_SuperSender((QQuickRenderControl*)self);
}

void q_quickrendercontrol_on_sender(void* self, QObject* (*callback)()) {
    QQuickRenderControl_OnSender((QQuickRenderControl*)self, (intptr_t)callback);
}

int32_t q_quickrendercontrol_sender_signal_index(void* self) {
    return QQuickRenderControl_SenderSignalIndex((QQuickRenderControl*)self);
}

int32_t q_quickrendercontrol_super_sender_signal_index(void* self) {
    return QQuickRenderControl_SuperSenderSignalIndex((QQuickRenderControl*)self);
}

void q_quickrendercontrol_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickRenderControl_OnSenderSignalIndex((QQuickRenderControl*)self, (intptr_t)callback);
}

int32_t q_quickrendercontrol_receivers(void* self, const char* signal) {
    return QQuickRenderControl_Receivers((QQuickRenderControl*)self, signal);
}

int32_t q_quickrendercontrol_super_receivers(void* self, const char* signal) {
    return QQuickRenderControl_SuperReceivers((QQuickRenderControl*)self, signal);
}

void q_quickrendercontrol_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickRenderControl_OnReceivers((QQuickRenderControl*)self, (intptr_t)callback);
}

bool q_quickrendercontrol_is_signal_connected(void* self, void* signal) {
    return QQuickRenderControl_IsSignalConnected((QQuickRenderControl*)self, (QMetaMethod*)signal);
}

bool q_quickrendercontrol_super_is_signal_connected(void* self, void* signal) {
    return QQuickRenderControl_SuperIsSignalConnected((QQuickRenderControl*)self, (QMetaMethod*)signal);
}

void q_quickrendercontrol_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickRenderControl_OnIsSignalConnected((QQuickRenderControl*)self, (intptr_t)callback);
}

void q_quickrendercontrol_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickrendercontrol_delete(void* self) {
    QQuickRenderControl_Delete((QQuickRenderControl*)(self));
}
