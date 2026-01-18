#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqpdflink.hpp"
#include "../libqpoint.hpp"
#include "libqpdfpagenavigator.hpp"
#include "libqpdfpagenavigator.h"

QPdfPageNavigator* q_pdfpagenavigator_new() {
    return QPdfPageNavigator_new();
}

QPdfPageNavigator* q_pdfpagenavigator_new2(void* parent) {
    return QPdfPageNavigator_new2((QObject*)parent);
}

const QMetaObject* q_pdfpagenavigator_meta_object(void* self) {
    return QPdfPageNavigator_MetaObject((QPdfPageNavigator*)self);
}

void* q_pdfpagenavigator_metacast(void* self, const char* param1) {
    return QPdfPageNavigator_Metacast((QPdfPageNavigator*)self, param1);
}

int32_t q_pdfpagenavigator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfPageNavigator_Metacall((QPdfPageNavigator*)self, param1, param2, param3);
}

void q_pdfpagenavigator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfPageNavigator_OnMetacall((QPdfPageNavigator*)self, (intptr_t)callback);
}

int32_t q_pdfpagenavigator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfPageNavigator_QBaseMetacall((QPdfPageNavigator*)self, param1, param2, param3);
}

const char* q_pdfpagenavigator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pdfpagenavigator_current_page(void* self) {
    return QPdfPageNavigator_CurrentPage((QPdfPageNavigator*)self);
}

QPointF* q_pdfpagenavigator_current_location(void* self) {
    return QPdfPageNavigator_CurrentLocation((QPdfPageNavigator*)self);
}

double q_pdfpagenavigator_current_zoom(void* self) {
    return QPdfPageNavigator_CurrentZoom((QPdfPageNavigator*)self);
}

bool q_pdfpagenavigator_back_available(void* self) {
    return QPdfPageNavigator_BackAvailable((QPdfPageNavigator*)self);
}

bool q_pdfpagenavigator_forward_available(void* self) {
    return QPdfPageNavigator_ForwardAvailable((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_clear(void* self) {
    QPdfPageNavigator_Clear((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_jump(void* self, void* destination) {
    QPdfPageNavigator_Jump((QPdfPageNavigator*)self, (QPdfLink*)destination);
}

void q_pdfpagenavigator_jump2(void* self, int page, void* location) {
    QPdfPageNavigator_Jump2((QPdfPageNavigator*)self, page, (QPointF*)location);
}

void q_pdfpagenavigator_update(void* self, int page, void* location, double zoom) {
    QPdfPageNavigator_Update((QPdfPageNavigator*)self, page, (QPointF*)location, zoom);
}

void q_pdfpagenavigator_forward(void* self) {
    QPdfPageNavigator_Forward((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_back(void* self) {
    QPdfPageNavigator_Back((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_current_page_changed(void* self, int page) {
    QPdfPageNavigator_CurrentPageChanged((QPdfPageNavigator*)self, page);
}

void q_pdfpagenavigator_on_current_page_changed(void* self, void (*callback)(void*, int)) {
    QPdfPageNavigator_Connect_CurrentPageChanged((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_current_location_changed(void* self, void* location) {
    QPdfPageNavigator_CurrentLocationChanged((QPdfPageNavigator*)self, (QPointF*)location);
}

void q_pdfpagenavigator_on_current_location_changed(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_Connect_CurrentLocationChanged((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_current_zoom_changed(void* self, double zoom) {
    QPdfPageNavigator_CurrentZoomChanged((QPdfPageNavigator*)self, zoom);
}

void q_pdfpagenavigator_on_current_zoom_changed(void* self, void (*callback)(void*, double)) {
    QPdfPageNavigator_Connect_CurrentZoomChanged((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_back_available_changed(void* self, bool available) {
    QPdfPageNavigator_BackAvailableChanged((QPdfPageNavigator*)self, available);
}

void q_pdfpagenavigator_on_back_available_changed(void* self, void (*callback)(void*, bool)) {
    QPdfPageNavigator_Connect_BackAvailableChanged((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_forward_available_changed(void* self, bool available) {
    QPdfPageNavigator_ForwardAvailableChanged((QPdfPageNavigator*)self, available);
}

void q_pdfpagenavigator_on_forward_available_changed(void* self, void (*callback)(void*, bool)) {
    QPdfPageNavigator_Connect_ForwardAvailableChanged((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_jumped(void* self, void* current) {
    QPdfPageNavigator_Jumped((QPdfPageNavigator*)self, (QPdfLink*)current);
}

void q_pdfpagenavigator_on_jumped(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_Connect_Jumped((QPdfPageNavigator*)self, (intptr_t)callback);
}

QPdfLink* q_pdfpagenavigator_current_link(void* self) {
    return QPdfPageNavigator_CurrentLink((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_on_current_link(void* self, QPdfLink* (*callback)()) {
    QPdfPageNavigator_OnCurrentLink((QPdfPageNavigator*)self, (intptr_t)callback);
}

QPdfLink* q_pdfpagenavigator_qbase_current_link(void* self) {
    return QPdfPageNavigator_QBaseCurrentLink((QPdfPageNavigator*)self);
}

const char* q_pdfpagenavigator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfpagenavigator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpagenavigator_jump3(void* self, int page, void* location, double zoom) {
    QPdfPageNavigator_Jump3((QPdfPageNavigator*)self, page, (QPointF*)location, zoom);
}

const char* q_pdfpagenavigator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpagenavigator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfpagenavigator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfpagenavigator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfpagenavigator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfpagenavigator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfpagenavigator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfpagenavigator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfpagenavigator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfpagenavigator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pdfpagenavigator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfpagenavigator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfpagenavigator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfpagenavigator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdfpagenavigator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfpagenavigator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfpagenavigator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfpagenavigator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfpagenavigator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfpagenavigator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfpagenavigator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfpagenavigator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfpagenavigator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfpagenavigator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfpagenavigator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfpagenavigator_dynamic_property_names\n");
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

QBindingStorage* q_pdfpagenavigator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfpagenavigator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfpagenavigator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfpagenavigator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pdfpagenavigator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pdfpagenavigator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfpagenavigator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pdfpagenavigator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pdfpagenavigator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pdfpagenavigator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfpagenavigator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pdfpagenavigator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfpagenavigator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pdfpagenavigator_event(void* self, void* event) {
    return QPdfPageNavigator_Event((QPdfPageNavigator*)self, (QEvent*)event);
}

bool q_pdfpagenavigator_qbase_event(void* self, void* event) {
    return QPdfPageNavigator_QBaseEvent((QPdfPageNavigator*)self, (QEvent*)event);
}

void q_pdfpagenavigator_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfPageNavigator_OnEvent((QPdfPageNavigator*)self, (intptr_t)callback);
}

bool q_pdfpagenavigator_event_filter(void* self, void* watched, void* event) {
    return QPdfPageNavigator_EventFilter((QPdfPageNavigator*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfpagenavigator_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfPageNavigator_QBaseEventFilter((QPdfPageNavigator*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfpagenavigator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfPageNavigator_OnEventFilter((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_timer_event(void* self, void* event) {
    QPdfPageNavigator_TimerEvent((QPdfPageNavigator*)self, (QTimerEvent*)event);
}

void q_pdfpagenavigator_qbase_timer_event(void* self, void* event) {
    QPdfPageNavigator_QBaseTimerEvent((QPdfPageNavigator*)self, (QTimerEvent*)event);
}

void q_pdfpagenavigator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_OnTimerEvent((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_child_event(void* self, void* event) {
    QPdfPageNavigator_ChildEvent((QPdfPageNavigator*)self, (QChildEvent*)event);
}

void q_pdfpagenavigator_qbase_child_event(void* self, void* event) {
    QPdfPageNavigator_QBaseChildEvent((QPdfPageNavigator*)self, (QChildEvent*)event);
}

void q_pdfpagenavigator_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_OnChildEvent((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_custom_event(void* self, void* event) {
    QPdfPageNavigator_CustomEvent((QPdfPageNavigator*)self, (QEvent*)event);
}

void q_pdfpagenavigator_qbase_custom_event(void* self, void* event) {
    QPdfPageNavigator_QBaseCustomEvent((QPdfPageNavigator*)self, (QEvent*)event);
}

void q_pdfpagenavigator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_OnCustomEvent((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_connect_notify(void* self, void* signal) {
    QPdfPageNavigator_ConnectNotify((QPdfPageNavigator*)self, (QMetaMethod*)signal);
}

void q_pdfpagenavigator_qbase_connect_notify(void* self, void* signal) {
    QPdfPageNavigator_QBaseConnectNotify((QPdfPageNavigator*)self, (QMetaMethod*)signal);
}

void q_pdfpagenavigator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_OnConnectNotify((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_disconnect_notify(void* self, void* signal) {
    QPdfPageNavigator_DisconnectNotify((QPdfPageNavigator*)self, (QMetaMethod*)signal);
}

void q_pdfpagenavigator_qbase_disconnect_notify(void* self, void* signal) {
    QPdfPageNavigator_QBaseDisconnectNotify((QPdfPageNavigator*)self, (QMetaMethod*)signal);
}

void q_pdfpagenavigator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfPageNavigator_OnDisconnectNotify((QPdfPageNavigator*)self, (intptr_t)callback);
}

QObject* q_pdfpagenavigator_sender(void* self) {
    return QPdfPageNavigator_Sender((QPdfPageNavigator*)self);
}

QObject* q_pdfpagenavigator_qbase_sender(void* self) {
    return QPdfPageNavigator_QBaseSender((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_on_sender(void* self, QObject* (*callback)()) {
    QPdfPageNavigator_OnSender((QPdfPageNavigator*)self, (intptr_t)callback);
}

int32_t q_pdfpagenavigator_sender_signal_index(void* self) {
    return QPdfPageNavigator_SenderSignalIndex((QPdfPageNavigator*)self);
}

int32_t q_pdfpagenavigator_qbase_sender_signal_index(void* self) {
    return QPdfPageNavigator_QBaseSenderSignalIndex((QPdfPageNavigator*)self);
}

void q_pdfpagenavigator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfPageNavigator_OnSenderSignalIndex((QPdfPageNavigator*)self, (intptr_t)callback);
}

int32_t q_pdfpagenavigator_receivers(void* self, const char* signal) {
    return QPdfPageNavigator_Receivers((QPdfPageNavigator*)self, signal);
}

int32_t q_pdfpagenavigator_qbase_receivers(void* self, const char* signal) {
    return QPdfPageNavigator_QBaseReceivers((QPdfPageNavigator*)self, signal);
}

void q_pdfpagenavigator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfPageNavigator_OnReceivers((QPdfPageNavigator*)self, (intptr_t)callback);
}

bool q_pdfpagenavigator_is_signal_connected(void* self, void* signal) {
    return QPdfPageNavigator_IsSignalConnected((QPdfPageNavigator*)self, (QMetaMethod*)signal);
}

bool q_pdfpagenavigator_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfPageNavigator_QBaseIsSignalConnected((QPdfPageNavigator*)self, (QMetaMethod*)signal);
}

void q_pdfpagenavigator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfPageNavigator_OnIsSignalConnected((QPdfPageNavigator*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfpagenavigator_delete(void* self) {
    QPdfPageNavigator_Delete((QPdfPageNavigator*)(self));
}
