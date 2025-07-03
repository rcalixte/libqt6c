#include "libqevent.hpp"
#include "libqcolor.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqmovie.hpp"
#include "libqmovie.h"

QMovie* q_movie_new() {
    return QMovie_new();
}

QMovie* q_movie_new2(void* device) {
    return QMovie_new2((QIODevice*)device);
}

QMovie* q_movie_new3(const char* fileName) {
    return QMovie_new3(qstring(fileName));
}

QMovie* q_movie_new4(void* parent) {
    return QMovie_new4((QObject*)parent);
}

QMovie* q_movie_new5(void* device, const char* format) {
    return QMovie_new5((QIODevice*)device, qstring(format));
}

QMovie* q_movie_new6(void* device, const char* format, void* parent) {
    return QMovie_new6((QIODevice*)device, qstring(format), (QObject*)parent);
}

QMovie* q_movie_new7(const char* fileName, const char* format) {
    return QMovie_new7(qstring(fileName), qstring(format));
}

QMovie* q_movie_new8(const char* fileName, const char* format, void* parent) {
    return QMovie_new8(qstring(fileName), qstring(format), (QObject*)parent);
}

const QMetaObject* q_movie_meta_object(void* self) {
    return QMovie_MetaObject((QMovie*)self);
}

void* q_movie_metacast(void* self, const char* param1) {
    return QMovie_Metacast((QMovie*)self, param1);
}

int32_t q_movie_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMovie_Metacall((QMovie*)self, param1, param2, param3);
}

void q_movie_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMovie_OnMetacall((QMovie*)self, (intptr_t)slot);
}

int32_t q_movie_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMovie_QBaseMetacall((QMovie*)self, param1, param2, param3);
}

const char* q_movie_tr(const char* s) {
    libqt_string _str = QMovie_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_movie_supported_formats() {
    libqt_list _arr = QMovie_SupportedFormats();
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

void q_movie_set_device(void* self, void* device) {
    QMovie_SetDevice((QMovie*)self, (QIODevice*)device);
}

QIODevice* q_movie_device(void* self) {
    return QMovie_Device((QMovie*)self);
}

void q_movie_set_file_name(void* self, const char* fileName) {
    QMovie_SetFileName((QMovie*)self, qstring(fileName));
}

const char* q_movie_file_name(void* self) {
    libqt_string _str = QMovie_FileName((QMovie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_movie_set_format(void* self, const char* format) {
    QMovie_SetFormat((QMovie*)self, qstring(format));
}

char* q_movie_format(void* self) {
    libqt_string _str = QMovie_Format((QMovie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_movie_set_background_color(void* self, void* color) {
    QMovie_SetBackgroundColor((QMovie*)self, (QColor*)color);
}

QColor* q_movie_background_color(void* self) {
    return QMovie_BackgroundColor((QMovie*)self);
}

int64_t q_movie_state(void* self) {
    return QMovie_State((QMovie*)self);
}

QRect* q_movie_frame_rect(void* self) {
    return QMovie_FrameRect((QMovie*)self);
}

QImage* q_movie_current_image(void* self) {
    return QMovie_CurrentImage((QMovie*)self);
}

QPixmap* q_movie_current_pixmap(void* self) {
    return QMovie_CurrentPixmap((QMovie*)self);
}

bool q_movie_is_valid(void* self) {
    return QMovie_IsValid((QMovie*)self);
}

int64_t q_movie_last_error(void* self) {
    return QMovie_LastError((QMovie*)self);
}

const char* q_movie_last_error_string(void* self) {
    libqt_string _str = QMovie_LastErrorString((QMovie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_movie_jump_to_frame(void* self, int frameNumber) {
    return QMovie_JumpToFrame((QMovie*)self, frameNumber);
}

int32_t q_movie_loop_count(void* self) {
    return QMovie_LoopCount((QMovie*)self);
}

int32_t q_movie_frame_count(void* self) {
    return QMovie_FrameCount((QMovie*)self);
}

int32_t q_movie_next_frame_delay(void* self) {
    return QMovie_NextFrameDelay((QMovie*)self);
}

int32_t q_movie_current_frame_number(void* self) {
    return QMovie_CurrentFrameNumber((QMovie*)self);
}

int32_t q_movie_speed(void* self) {
    return QMovie_Speed((QMovie*)self);
}

QSize* q_movie_scaled_size(void* self) {
    return QMovie_ScaledSize((QMovie*)self);
}

void q_movie_set_scaled_size(void* self, void* size) {
    QMovie_SetScaledSize((QMovie*)self, (QSize*)size);
}

int64_t q_movie_cache_mode(void* self) {
    return QMovie_CacheMode((QMovie*)self);
}

void q_movie_set_cache_mode(void* self, int64_t mode) {
    QMovie_SetCacheMode((QMovie*)self, mode);
}

void q_movie_started(void* self) {
    QMovie_Started((QMovie*)self);
}

void q_movie_on_started(void* self, void (*slot)(void*)) {
    QMovie_Connect_Started((QMovie*)self, (intptr_t)slot);
}

void q_movie_resized(void* self, void* size) {
    QMovie_Resized((QMovie*)self, (QSize*)size);
}

void q_movie_on_resized(void* self, void (*slot)(void*, void*)) {
    QMovie_Connect_Resized((QMovie*)self, (intptr_t)slot);
}

void q_movie_updated(void* self, void* rect) {
    QMovie_Updated((QMovie*)self, (QRect*)rect);
}

void q_movie_on_updated(void* self, void (*slot)(void*, void*)) {
    QMovie_Connect_Updated((QMovie*)self, (intptr_t)slot);
}

void q_movie_state_changed(void* self, int64_t state) {
    QMovie_StateChanged((QMovie*)self, state);
}

void q_movie_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QMovie_Connect_StateChanged((QMovie*)self, (intptr_t)slot);
}

void q_movie_error(void* self, int64_t errorVal) {
    QMovie_Error((QMovie*)self, errorVal);
}

void q_movie_on_error(void* self, void (*slot)(void*, int64_t)) {
    QMovie_Connect_Error((QMovie*)self, (intptr_t)slot);
}

void q_movie_finished(void* self) {
    QMovie_Finished((QMovie*)self);
}

void q_movie_on_finished(void* self, void (*slot)(void*)) {
    QMovie_Connect_Finished((QMovie*)self, (intptr_t)slot);
}

void q_movie_frame_changed(void* self, int frameNumber) {
    QMovie_FrameChanged((QMovie*)self, frameNumber);
}

void q_movie_on_frame_changed(void* self, void (*slot)(void*, int)) {
    QMovie_Connect_FrameChanged((QMovie*)self, (intptr_t)slot);
}

void q_movie_start(void* self) {
    QMovie_Start((QMovie*)self);
}

bool q_movie_jump_to_next_frame(void* self) {
    return QMovie_JumpToNextFrame((QMovie*)self);
}

void q_movie_set_paused(void* self, bool paused) {
    QMovie_SetPaused((QMovie*)self, paused);
}

void q_movie_stop(void* self) {
    QMovie_Stop((QMovie*)self);
}

void q_movie_set_speed(void* self, int percentSpeed) {
    QMovie_SetSpeed((QMovie*)self, percentSpeed);
}

const char* q_movie_tr2(const char* s, const char* c) {
    libqt_string _str = QMovie_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_movie_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMovie_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_movie_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_movie_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_movie_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_movie_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_movie_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_movie_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_movie_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_movie_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_movie_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_movie_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_movie_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_movie_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_movie_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_movie_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_movie_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_movie_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_movie_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_movie_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_movie_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_movie_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_movie_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_movie_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_movie_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_movie_dynamic_property_names(void* self) {
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

QBindingStorage* q_movie_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_movie_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_movie_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_movie_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_movie_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_movie_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_movie_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_movie_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_movie_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_movie_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_movie_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_movie_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_movie_event(void* self, void* event) {
    return QMovie_Event((QMovie*)self, (QEvent*)event);
}

bool q_movie_qbase_event(void* self, void* event) {
    return QMovie_QBaseEvent((QMovie*)self, (QEvent*)event);
}

void q_movie_on_event(void* self, bool (*slot)(void*, void*)) {
    QMovie_OnEvent((QMovie*)self, (intptr_t)slot);
}

bool q_movie_event_filter(void* self, void* watched, void* event) {
    return QMovie_EventFilter((QMovie*)self, (QObject*)watched, (QEvent*)event);
}

bool q_movie_qbase_event_filter(void* self, void* watched, void* event) {
    return QMovie_QBaseEventFilter((QMovie*)self, (QObject*)watched, (QEvent*)event);
}

void q_movie_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMovie_OnEventFilter((QMovie*)self, (intptr_t)slot);
}

void q_movie_timer_event(void* self, void* event) {
    QMovie_TimerEvent((QMovie*)self, (QTimerEvent*)event);
}

void q_movie_qbase_timer_event(void* self, void* event) {
    QMovie_QBaseTimerEvent((QMovie*)self, (QTimerEvent*)event);
}

void q_movie_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMovie_OnTimerEvent((QMovie*)self, (intptr_t)slot);
}

void q_movie_child_event(void* self, void* event) {
    QMovie_ChildEvent((QMovie*)self, (QChildEvent*)event);
}

void q_movie_qbase_child_event(void* self, void* event) {
    QMovie_QBaseChildEvent((QMovie*)self, (QChildEvent*)event);
}

void q_movie_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMovie_OnChildEvent((QMovie*)self, (intptr_t)slot);
}

void q_movie_custom_event(void* self, void* event) {
    QMovie_CustomEvent((QMovie*)self, (QEvent*)event);
}

void q_movie_qbase_custom_event(void* self, void* event) {
    QMovie_QBaseCustomEvent((QMovie*)self, (QEvent*)event);
}

void q_movie_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMovie_OnCustomEvent((QMovie*)self, (intptr_t)slot);
}

void q_movie_connect_notify(void* self, void* signal) {
    QMovie_ConnectNotify((QMovie*)self, (QMetaMethod*)signal);
}

void q_movie_qbase_connect_notify(void* self, void* signal) {
    QMovie_QBaseConnectNotify((QMovie*)self, (QMetaMethod*)signal);
}

void q_movie_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMovie_OnConnectNotify((QMovie*)self, (intptr_t)slot);
}

void q_movie_disconnect_notify(void* self, void* signal) {
    QMovie_DisconnectNotify((QMovie*)self, (QMetaMethod*)signal);
}

void q_movie_qbase_disconnect_notify(void* self, void* signal) {
    QMovie_QBaseDisconnectNotify((QMovie*)self, (QMetaMethod*)signal);
}

void q_movie_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMovie_OnDisconnectNotify((QMovie*)self, (intptr_t)slot);
}

QObject* q_movie_sender(void* self) {
    return QMovie_Sender((QMovie*)self);
}

QObject* q_movie_qbase_sender(void* self) {
    return QMovie_QBaseSender((QMovie*)self);
}

void q_movie_on_sender(void* self, QObject* (*slot)()) {
    QMovie_OnSender((QMovie*)self, (intptr_t)slot);
}

int32_t q_movie_sender_signal_index(void* self) {
    return QMovie_SenderSignalIndex((QMovie*)self);
}

int32_t q_movie_qbase_sender_signal_index(void* self) {
    return QMovie_QBaseSenderSignalIndex((QMovie*)self);
}

void q_movie_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMovie_OnSenderSignalIndex((QMovie*)self, (intptr_t)slot);
}

int32_t q_movie_receivers(void* self, const char* signal) {
    return QMovie_Receivers((QMovie*)self, signal);
}

int32_t q_movie_qbase_receivers(void* self, const char* signal) {
    return QMovie_QBaseReceivers((QMovie*)self, signal);
}

void q_movie_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMovie_OnReceivers((QMovie*)self, (intptr_t)slot);
}

bool q_movie_is_signal_connected(void* self, void* signal) {
    return QMovie_IsSignalConnected((QMovie*)self, (QMetaMethod*)signal);
}

bool q_movie_qbase_is_signal_connected(void* self, void* signal) {
    return QMovie_QBaseIsSignalConnected((QMovie*)self, (QMetaMethod*)signal);
}

void q_movie_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMovie_OnIsSignalConnected((QMovie*)self, (intptr_t)slot);
}

void q_movie_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_movie_delete(void* self) {
    QMovie_Delete((QMovie*)(self));
}
