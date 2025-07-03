#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqsurface.hpp"
#include "libqsurfaceformat.hpp"
#include "libqcoreevent.hpp"
#include "libqoffscreensurface.hpp"
#include "libqoffscreensurface.h"

QOffscreenSurface* q_offscreensurface_new() {
    return QOffscreenSurface_new();
}

QOffscreenSurface* q_offscreensurface_new2(void* screen) {
    return QOffscreenSurface_new2((QScreen*)screen);
}

QOffscreenSurface* q_offscreensurface_new3(void* screen, void* parent) {
    return QOffscreenSurface_new3((QScreen*)screen, (QObject*)parent);
}

const QMetaObject* q_offscreensurface_meta_object(void* self) {
    return QOffscreenSurface_MetaObject((QOffscreenSurface*)self);
}

void* q_offscreensurface_metacast(void* self, const char* param1) {
    return QOffscreenSurface_Metacast((QOffscreenSurface*)self, param1);
}

int32_t q_offscreensurface_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QOffscreenSurface_Metacall((QOffscreenSurface*)self, param1, param2, param3);
}

void q_offscreensurface_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QOffscreenSurface_OnMetacall((QOffscreenSurface*)self, (intptr_t)slot);
}

int32_t q_offscreensurface_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QOffscreenSurface_QBaseMetacall((QOffscreenSurface*)self, param1, param2, param3);
}

const char* q_offscreensurface_tr(const char* s) {
    libqt_string _str = QOffscreenSurface_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_offscreensurface_surface_type(void* self) {
    return QOffscreenSurface_SurfaceType((QOffscreenSurface*)self);
}

void q_offscreensurface_on_surface_type(void* self, int64_t (*slot)()) {
    QOffscreenSurface_OnSurfaceType((QOffscreenSurface*)self, (intptr_t)slot);
}

int64_t q_offscreensurface_qbase_surface_type(void* self) {
    return QOffscreenSurface_QBaseSurfaceType((QOffscreenSurface*)self);
}

void q_offscreensurface_create(void* self) {
    QOffscreenSurface_Create((QOffscreenSurface*)self);
}

void q_offscreensurface_destroy(void* self) {
    QOffscreenSurface_Destroy((QOffscreenSurface*)self);
}

bool q_offscreensurface_is_valid(void* self) {
    return QOffscreenSurface_IsValid((QOffscreenSurface*)self);
}

void q_offscreensurface_set_format(void* self, void* format) {
    QOffscreenSurface_SetFormat((QOffscreenSurface*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_offscreensurface_format(void* self) {
    return QOffscreenSurface_Format((QOffscreenSurface*)self);
}

void q_offscreensurface_on_format(void* self, QSurfaceFormat* (*slot)()) {
    QOffscreenSurface_OnFormat((QOffscreenSurface*)self, (intptr_t)slot);
}

QSurfaceFormat* q_offscreensurface_qbase_format(void* self) {
    return QOffscreenSurface_QBaseFormat((QOffscreenSurface*)self);
}

QSurfaceFormat* q_offscreensurface_requested_format(void* self) {
    return QOffscreenSurface_RequestedFormat((QOffscreenSurface*)self);
}

QSize* q_offscreensurface_size(void* self) {
    return QOffscreenSurface_Size((QOffscreenSurface*)self);
}

void q_offscreensurface_on_size(void* self, QSize* (*slot)()) {
    QOffscreenSurface_OnSize((QOffscreenSurface*)self, (intptr_t)slot);
}

QSize* q_offscreensurface_qbase_size(void* self) {
    return QOffscreenSurface_QBaseSize((QOffscreenSurface*)self);
}

QScreen* q_offscreensurface_screen(void* self) {
    return QOffscreenSurface_Screen((QOffscreenSurface*)self);
}

void q_offscreensurface_set_screen(void* self, void* screen) {
    QOffscreenSurface_SetScreen((QOffscreenSurface*)self, (QScreen*)screen);
}

void* q_offscreensurface_resolve_interface(void* self, const char* name, int revision) {
    return QOffscreenSurface_ResolveInterface((QOffscreenSurface*)self, name, revision);
}

void q_offscreensurface_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int)) {
    QOffscreenSurface_OnResolveInterface((QOffscreenSurface*)self, (intptr_t)slot);
}

void* q_offscreensurface_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QOffscreenSurface_QBaseResolveInterface((QOffscreenSurface*)self, name, revision);
}

void q_offscreensurface_screen_changed(void* self, void* screen) {
    QOffscreenSurface_ScreenChanged((QOffscreenSurface*)self, (QScreen*)screen);
}

void q_offscreensurface_on_screen_changed(void* self, void (*slot)(void*, void*)) {
    QOffscreenSurface_Connect_ScreenChanged((QOffscreenSurface*)self, (intptr_t)slot);
}

const char* q_offscreensurface_tr2(const char* s, const char* c) {
    libqt_string _str = QOffscreenSurface_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_offscreensurface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QOffscreenSurface_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_offscreensurface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_offscreensurface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_offscreensurface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_offscreensurface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_offscreensurface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_offscreensurface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_offscreensurface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_offscreensurface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_offscreensurface_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_offscreensurface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_offscreensurface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_offscreensurface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_offscreensurface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_offscreensurface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_offscreensurface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_offscreensurface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_offscreensurface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_offscreensurface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_offscreensurface_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_offscreensurface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_offscreensurface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_offscreensurface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_offscreensurface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_offscreensurface_dynamic_property_names(void* self) {
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
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_offscreensurface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_offscreensurface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_offscreensurface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_offscreensurface_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_offscreensurface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_offscreensurface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_offscreensurface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_offscreensurface_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_offscreensurface_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_offscreensurface_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_offscreensurface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_offscreensurface_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int64_t q_offscreensurface_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

bool q_offscreensurface_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

bool q_offscreensurface_event(void* self, void* event) {
    return QOffscreenSurface_Event((QOffscreenSurface*)self, (QEvent*)event);
}

bool q_offscreensurface_qbase_event(void* self, void* event) {
    return QOffscreenSurface_QBaseEvent((QOffscreenSurface*)self, (QEvent*)event);
}

void q_offscreensurface_on_event(void* self, bool (*slot)(void*, void*)) {
    QOffscreenSurface_OnEvent((QOffscreenSurface*)self, (intptr_t)slot);
}

bool q_offscreensurface_event_filter(void* self, void* watched, void* event) {
    return QOffscreenSurface_EventFilter((QOffscreenSurface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_offscreensurface_qbase_event_filter(void* self, void* watched, void* event) {
    return QOffscreenSurface_QBaseEventFilter((QOffscreenSurface*)self, (QObject*)watched, (QEvent*)event);
}

void q_offscreensurface_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QOffscreenSurface_OnEventFilter((QOffscreenSurface*)self, (intptr_t)slot);
}

void q_offscreensurface_timer_event(void* self, void* event) {
    QOffscreenSurface_TimerEvent((QOffscreenSurface*)self, (QTimerEvent*)event);
}

void q_offscreensurface_qbase_timer_event(void* self, void* event) {
    QOffscreenSurface_QBaseTimerEvent((QOffscreenSurface*)self, (QTimerEvent*)event);
}

void q_offscreensurface_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QOffscreenSurface_OnTimerEvent((QOffscreenSurface*)self, (intptr_t)slot);
}

void q_offscreensurface_child_event(void* self, void* event) {
    QOffscreenSurface_ChildEvent((QOffscreenSurface*)self, (QChildEvent*)event);
}

void q_offscreensurface_qbase_child_event(void* self, void* event) {
    QOffscreenSurface_QBaseChildEvent((QOffscreenSurface*)self, (QChildEvent*)event);
}

void q_offscreensurface_on_child_event(void* self, void (*slot)(void*, void*)) {
    QOffscreenSurface_OnChildEvent((QOffscreenSurface*)self, (intptr_t)slot);
}

void q_offscreensurface_custom_event(void* self, void* event) {
    QOffscreenSurface_CustomEvent((QOffscreenSurface*)self, (QEvent*)event);
}

void q_offscreensurface_qbase_custom_event(void* self, void* event) {
    QOffscreenSurface_QBaseCustomEvent((QOffscreenSurface*)self, (QEvent*)event);
}

void q_offscreensurface_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QOffscreenSurface_OnCustomEvent((QOffscreenSurface*)self, (intptr_t)slot);
}

void q_offscreensurface_connect_notify(void* self, void* signal) {
    QOffscreenSurface_ConnectNotify((QOffscreenSurface*)self, (QMetaMethod*)signal);
}

void q_offscreensurface_qbase_connect_notify(void* self, void* signal) {
    QOffscreenSurface_QBaseConnectNotify((QOffscreenSurface*)self, (QMetaMethod*)signal);
}

void q_offscreensurface_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QOffscreenSurface_OnConnectNotify((QOffscreenSurface*)self, (intptr_t)slot);
}

void q_offscreensurface_disconnect_notify(void* self, void* signal) {
    QOffscreenSurface_DisconnectNotify((QOffscreenSurface*)self, (QMetaMethod*)signal);
}

void q_offscreensurface_qbase_disconnect_notify(void* self, void* signal) {
    QOffscreenSurface_QBaseDisconnectNotify((QOffscreenSurface*)self, (QMetaMethod*)signal);
}

void q_offscreensurface_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QOffscreenSurface_OnDisconnectNotify((QOffscreenSurface*)self, (intptr_t)slot);
}

QObject* q_offscreensurface_sender(void* self) {
    return QOffscreenSurface_Sender((QOffscreenSurface*)self);
}

QObject* q_offscreensurface_qbase_sender(void* self) {
    return QOffscreenSurface_QBaseSender((QOffscreenSurface*)self);
}

void q_offscreensurface_on_sender(void* self, QObject* (*slot)()) {
    QOffscreenSurface_OnSender((QOffscreenSurface*)self, (intptr_t)slot);
}

int32_t q_offscreensurface_sender_signal_index(void* self) {
    return QOffscreenSurface_SenderSignalIndex((QOffscreenSurface*)self);
}

int32_t q_offscreensurface_qbase_sender_signal_index(void* self) {
    return QOffscreenSurface_QBaseSenderSignalIndex((QOffscreenSurface*)self);
}

void q_offscreensurface_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QOffscreenSurface_OnSenderSignalIndex((QOffscreenSurface*)self, (intptr_t)slot);
}

int32_t q_offscreensurface_receivers(void* self, const char* signal) {
    return QOffscreenSurface_Receivers((QOffscreenSurface*)self, signal);
}

int32_t q_offscreensurface_qbase_receivers(void* self, const char* signal) {
    return QOffscreenSurface_QBaseReceivers((QOffscreenSurface*)self, signal);
}

void q_offscreensurface_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QOffscreenSurface_OnReceivers((QOffscreenSurface*)self, (intptr_t)slot);
}

bool q_offscreensurface_is_signal_connected(void* self, void* signal) {
    return QOffscreenSurface_IsSignalConnected((QOffscreenSurface*)self, (QMetaMethod*)signal);
}

bool q_offscreensurface_qbase_is_signal_connected(void* self, void* signal) {
    return QOffscreenSurface_QBaseIsSignalConnected((QOffscreenSurface*)self, (QMetaMethod*)signal);
}

void q_offscreensurface_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QOffscreenSurface_OnIsSignalConnected((QOffscreenSurface*)self, (intptr_t)slot);
}

void q_offscreensurface_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_offscreensurface_delete(void* self) {
    QOffscreenSurface_Delete((QOffscreenSurface*)(self));
}
