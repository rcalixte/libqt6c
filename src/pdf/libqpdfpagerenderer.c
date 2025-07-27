#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqpdfdocument.hpp"
#include "libqpdfdocumentrenderoptions.hpp"
#include "../libqsize.hpp"
#include "libqpdfpagerenderer.hpp"
#include "libqpdfpagerenderer.h"

QPdfPageRenderer* q_pdfpagerenderer_new() {
    return QPdfPageRenderer_new();
}

QPdfPageRenderer* q_pdfpagerenderer_new2(void* parent) {
    return QPdfPageRenderer_new2((QObject*)parent);
}

const QMetaObject* q_pdfpagerenderer_meta_object(void* self) {
    return QPdfPageRenderer_MetaObject((QPdfPageRenderer*)self);
}

void* q_pdfpagerenderer_metacast(void* self, const char* param1) {
    return QPdfPageRenderer_Metacast((QPdfPageRenderer*)self, param1);
}

int32_t q_pdfpagerenderer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfPageRenderer_Metacall((QPdfPageRenderer*)self, param1, param2, param3);
}

void q_pdfpagerenderer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPdfPageRenderer_OnMetacall((QPdfPageRenderer*)self, (intptr_t)slot);
}

int32_t q_pdfpagerenderer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfPageRenderer_QBaseMetacall((QPdfPageRenderer*)self, param1, param2, param3);
}

const char* q_pdfpagerenderer_tr(const char* s) {
    libqt_string _str = QPdfPageRenderer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pdfpagerenderer_render_mode(void* self) {
    return QPdfPageRenderer_RenderMode((QPdfPageRenderer*)self);
}

void q_pdfpagerenderer_set_render_mode(void* self, int64_t mode) {
    QPdfPageRenderer_SetRenderMode((QPdfPageRenderer*)self, mode);
}

QPdfDocument* q_pdfpagerenderer_document(void* self) {
    return QPdfPageRenderer_Document((QPdfPageRenderer*)self);
}

void q_pdfpagerenderer_set_document(void* self, void* document) {
    QPdfPageRenderer_SetDocument((QPdfPageRenderer*)self, (QPdfDocument*)document);
}

uint64_t q_pdfpagerenderer_request_page(void* self, int pageNumber, void* imageSize) {
    return QPdfPageRenderer_RequestPage((QPdfPageRenderer*)self, pageNumber, (QSize*)imageSize);
}

void q_pdfpagerenderer_document_changed(void* self, void* document) {
    QPdfPageRenderer_DocumentChanged((QPdfPageRenderer*)self, (QPdfDocument*)document);
}

void q_pdfpagerenderer_on_document_changed(void* self, void (*slot)(void*, void*)) {
    QPdfPageRenderer_Connect_DocumentChanged((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_render_mode_changed(void* self, int64_t renderMode) {
    QPdfPageRenderer_RenderModeChanged((QPdfPageRenderer*)self, renderMode);
}

void q_pdfpagerenderer_on_render_mode_changed(void* self, void (*slot)(void*, int64_t)) {
    QPdfPageRenderer_Connect_RenderModeChanged((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_page_rendered(void* self, int pageNumber, void* imageSize, void* image, void* options, uint64_t requestId) {
    QPdfPageRenderer_PageRendered((QPdfPageRenderer*)self, pageNumber, (QSize*)imageSize, (QImage*)image, (QPdfDocumentRenderOptions*)options, requestId);
}

void q_pdfpagerenderer_on_page_rendered(void* self, void (*slot)(void*, int, void*, void*, void*, uint64_t)) {
    QPdfPageRenderer_Connect_PageRendered((QPdfPageRenderer*)self, (intptr_t)slot);
}

const char* q_pdfpagerenderer_tr2(const char* s, const char* c) {
    libqt_string _str = QPdfPageRenderer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfpagerenderer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPdfPageRenderer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t q_pdfpagerenderer_request_page3(void* self, int pageNumber, void* imageSize, void* options) {
    return QPdfPageRenderer_RequestPage3((QPdfPageRenderer*)self, pageNumber, (QSize*)imageSize, (QPdfDocumentRenderOptions*)options);
}

const char* q_pdfpagerenderer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfpagerenderer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfpagerenderer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfpagerenderer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfpagerenderer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfpagerenderer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfpagerenderer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfpagerenderer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfpagerenderer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfpagerenderer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pdfpagerenderer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfpagerenderer_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfpagerenderer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfpagerenderer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdfpagerenderer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfpagerenderer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfpagerenderer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfpagerenderer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfpagerenderer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfpagerenderer_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfpagerenderer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfpagerenderer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfpagerenderer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfpagerenderer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfpagerenderer_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_pdfpagerenderer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfpagerenderer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfpagerenderer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfpagerenderer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_pdfpagerenderer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pdfpagerenderer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfpagerenderer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pdfpagerenderer_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pdfpagerenderer_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pdfpagerenderer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pdfpagerenderer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pdfpagerenderer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfpagerenderer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_pdfpagerenderer_event(void* self, void* event) {
    return QPdfPageRenderer_Event((QPdfPageRenderer*)self, (QEvent*)event);
}

bool q_pdfpagerenderer_qbase_event(void* self, void* event) {
    return QPdfPageRenderer_QBaseEvent((QPdfPageRenderer*)self, (QEvent*)event);
}

void q_pdfpagerenderer_on_event(void* self, bool (*slot)(void*, void*)) {
    QPdfPageRenderer_OnEvent((QPdfPageRenderer*)self, (intptr_t)slot);
}

bool q_pdfpagerenderer_event_filter(void* self, void* watched, void* event) {
    return QPdfPageRenderer_EventFilter((QPdfPageRenderer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfpagerenderer_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfPageRenderer_QBaseEventFilter((QPdfPageRenderer*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfpagerenderer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPdfPageRenderer_OnEventFilter((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_timer_event(void* self, void* event) {
    QPdfPageRenderer_TimerEvent((QPdfPageRenderer*)self, (QTimerEvent*)event);
}

void q_pdfpagerenderer_qbase_timer_event(void* self, void* event) {
    QPdfPageRenderer_QBaseTimerEvent((QPdfPageRenderer*)self, (QTimerEvent*)event);
}

void q_pdfpagerenderer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPdfPageRenderer_OnTimerEvent((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_child_event(void* self, void* event) {
    QPdfPageRenderer_ChildEvent((QPdfPageRenderer*)self, (QChildEvent*)event);
}

void q_pdfpagerenderer_qbase_child_event(void* self, void* event) {
    QPdfPageRenderer_QBaseChildEvent((QPdfPageRenderer*)self, (QChildEvent*)event);
}

void q_pdfpagerenderer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPdfPageRenderer_OnChildEvent((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_custom_event(void* self, void* event) {
    QPdfPageRenderer_CustomEvent((QPdfPageRenderer*)self, (QEvent*)event);
}

void q_pdfpagerenderer_qbase_custom_event(void* self, void* event) {
    QPdfPageRenderer_QBaseCustomEvent((QPdfPageRenderer*)self, (QEvent*)event);
}

void q_pdfpagerenderer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPdfPageRenderer_OnCustomEvent((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_connect_notify(void* self, void* signal) {
    QPdfPageRenderer_ConnectNotify((QPdfPageRenderer*)self, (QMetaMethod*)signal);
}

void q_pdfpagerenderer_qbase_connect_notify(void* self, void* signal) {
    QPdfPageRenderer_QBaseConnectNotify((QPdfPageRenderer*)self, (QMetaMethod*)signal);
}

void q_pdfpagerenderer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfPageRenderer_OnConnectNotify((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_disconnect_notify(void* self, void* signal) {
    QPdfPageRenderer_DisconnectNotify((QPdfPageRenderer*)self, (QMetaMethod*)signal);
}

void q_pdfpagerenderer_qbase_disconnect_notify(void* self, void* signal) {
    QPdfPageRenderer_QBaseDisconnectNotify((QPdfPageRenderer*)self, (QMetaMethod*)signal);
}

void q_pdfpagerenderer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfPageRenderer_OnDisconnectNotify((QPdfPageRenderer*)self, (intptr_t)slot);
}

QObject* q_pdfpagerenderer_sender(void* self) {
    return QPdfPageRenderer_Sender((QPdfPageRenderer*)self);
}

QObject* q_pdfpagerenderer_qbase_sender(void* self) {
    return QPdfPageRenderer_QBaseSender((QPdfPageRenderer*)self);
}

void q_pdfpagerenderer_on_sender(void* self, QObject* (*slot)()) {
    QPdfPageRenderer_OnSender((QPdfPageRenderer*)self, (intptr_t)slot);
}

int32_t q_pdfpagerenderer_sender_signal_index(void* self) {
    return QPdfPageRenderer_SenderSignalIndex((QPdfPageRenderer*)self);
}

int32_t q_pdfpagerenderer_qbase_sender_signal_index(void* self) {
    return QPdfPageRenderer_QBaseSenderSignalIndex((QPdfPageRenderer*)self);
}

void q_pdfpagerenderer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPdfPageRenderer_OnSenderSignalIndex((QPdfPageRenderer*)self, (intptr_t)slot);
}

int32_t q_pdfpagerenderer_receivers(void* self, const char* signal) {
    return QPdfPageRenderer_Receivers((QPdfPageRenderer*)self, signal);
}

int32_t q_pdfpagerenderer_qbase_receivers(void* self, const char* signal) {
    return QPdfPageRenderer_QBaseReceivers((QPdfPageRenderer*)self, signal);
}

void q_pdfpagerenderer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPdfPageRenderer_OnReceivers((QPdfPageRenderer*)self, (intptr_t)slot);
}

bool q_pdfpagerenderer_is_signal_connected(void* self, void* signal) {
    return QPdfPageRenderer_IsSignalConnected((QPdfPageRenderer*)self, (QMetaMethod*)signal);
}

bool q_pdfpagerenderer_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfPageRenderer_QBaseIsSignalConnected((QPdfPageRenderer*)self, (QMetaMethod*)signal);
}

void q_pdfpagerenderer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPdfPageRenderer_OnIsSignalConnected((QPdfPageRenderer*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_pdfpagerenderer_delete(void* self) {
    QPdfPageRenderer_Delete((QPdfPageRenderer*)(self));
}
