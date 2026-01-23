#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqpdfdocumentrenderoptions.hpp"
#include "libqpdfselection.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqpdfdocument.hpp"
#include "libqpdfdocument.h"

QPdfDocument* q_pdfdocument_new() {
    return QPdfDocument_new();
}

QPdfDocument* q_pdfdocument_new2(void* parent) {
    return QPdfDocument_new2((QObject*)parent);
}

const QMetaObject* q_pdfdocument_meta_object(void* self) {
    return QPdfDocument_MetaObject((QPdfDocument*)self);
}

void* q_pdfdocument_metacast(void* self, const char* param1) {
    return QPdfDocument_Metacast((QPdfDocument*)self, param1);
}

int32_t q_pdfdocument_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfDocument_Metacall((QPdfDocument*)self, param1, param2, param3);
}

void q_pdfdocument_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfDocument_OnMetacall((QPdfDocument*)self, (intptr_t)callback);
}

int32_t q_pdfdocument_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfDocument_QBaseMetacall((QPdfDocument*)self, param1, param2, param3);
}

const char* q_pdfdocument_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pdfdocument_load(void* self, const char* fileName) {
    return QPdfDocument_Load((QPdfDocument*)self, qstring(fileName));
}

int32_t q_pdfdocument_status(void* self) {
    return QPdfDocument_Status((QPdfDocument*)self);
}

void q_pdfdocument_load2(void* self, void* device) {
    QPdfDocument_Load2((QPdfDocument*)self, (QIODevice*)device);
}

void q_pdfdocument_set_password(void* self, const char* password) {
    QPdfDocument_SetPassword((QPdfDocument*)self, qstring(password));
}

const char* q_pdfdocument_password(void* self) {
    libqt_string _str = QPdfDocument_Password((QPdfDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_pdfdocument_meta_data(void* self, int32_t field) {
    return QPdfDocument_MetaData((QPdfDocument*)self, field);
}

int32_t q_pdfdocument_error(void* self) {
    return QPdfDocument_Error((QPdfDocument*)self);
}

void q_pdfdocument_close(void* self) {
    QPdfDocument_Close((QPdfDocument*)self);
}

int32_t q_pdfdocument_page_count(void* self) {
    return QPdfDocument_PageCount((QPdfDocument*)self);
}

QSizeF* q_pdfdocument_page_point_size(void* self, int page) {
    return QPdfDocument_PagePointSize((QPdfDocument*)self, page);
}

const char* q_pdfdocument_page_label(void* self, int page) {
    libqt_string _str = QPdfDocument_PageLabel((QPdfDocument*)self, page);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pdfdocument_page_index_for_label(void* self, const char* label) {
    return QPdfDocument_PageIndexForLabel((QPdfDocument*)self, qstring(label));
}

QAbstractListModel* q_pdfdocument_page_model(void* self) {
    return QPdfDocument_PageModel((QPdfDocument*)self);
}

QImage* q_pdfdocument_render(void* self, int page, void* imageSize) {
    return QPdfDocument_Render((QPdfDocument*)self, page, (QSize*)imageSize);
}

QPdfSelection* q_pdfdocument_get_selection(void* self, int page, void* start, void* end) {
    return QPdfDocument_GetSelection((QPdfDocument*)self, page, (QPointF*)start, (QPointF*)end);
}

QPdfSelection* q_pdfdocument_get_selection_at_index(void* self, int page, int startIndex, int maxLength) {
    return QPdfDocument_GetSelectionAtIndex((QPdfDocument*)self, page, startIndex, maxLength);
}

QPdfSelection* q_pdfdocument_get_all_text(void* self, int page) {
    return QPdfDocument_GetAllText((QPdfDocument*)self, page);
}

void q_pdfdocument_password_changed(void* self) {
    QPdfDocument_PasswordChanged((QPdfDocument*)self);
}

void q_pdfdocument_on_password_changed(void* self, void (*callback)(void*)) {
    QPdfDocument_Connect_PasswordChanged((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_password_required(void* self) {
    QPdfDocument_PasswordRequired((QPdfDocument*)self);
}

void q_pdfdocument_on_password_required(void* self, void (*callback)(void*)) {
    QPdfDocument_Connect_PasswordRequired((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_status_changed(void* self, int32_t status) {
    QPdfDocument_StatusChanged((QPdfDocument*)self, status);
}

void q_pdfdocument_on_status_changed(void* self, void (*callback)(void*, int32_t)) {
    QPdfDocument_Connect_StatusChanged((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_page_count_changed(void* self, int pageCount) {
    QPdfDocument_PageCountChanged((QPdfDocument*)self, pageCount);
}

void q_pdfdocument_on_page_count_changed(void* self, void (*callback)(void*, int)) {
    QPdfDocument_Connect_PageCountChanged((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_page_model_changed(void* self) {
    QPdfDocument_PageModelChanged((QPdfDocument*)self);
}

void q_pdfdocument_on_page_model_changed(void* self, void (*callback)(void*)) {
    QPdfDocument_Connect_PageModelChanged((QPdfDocument*)self, (intptr_t)callback);
}

const char* q_pdfdocument_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfdocument_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QImage* q_pdfdocument_render3(void* self, int page, void* imageSize, void* options) {
    return QPdfDocument_Render3((QPdfDocument*)self, page, (QSize*)imageSize, (QPdfDocumentRenderOptions*)options);
}

const char* q_pdfdocument_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfdocument_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfdocument_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfdocument_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfdocument_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfdocument_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfdocument_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfdocument_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfdocument_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfdocument_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_pdfdocument_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_pdfdocument_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfdocument_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfdocument_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfdocument_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdfdocument_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfdocument_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfdocument_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfdocument_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfdocument_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfdocument_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfdocument_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfdocument_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfdocument_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfdocument_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfdocument_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfdocument_dynamic_property_names\n");
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

QBindingStorage* q_pdfdocument_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfdocument_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfdocument_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfdocument_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pdfdocument_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pdfdocument_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfdocument_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pdfdocument_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pdfdocument_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_pdfdocument_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_pdfdocument_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfdocument_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pdfdocument_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfdocument_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pdfdocument_event(void* self, void* event) {
    return QPdfDocument_Event((QPdfDocument*)self, (QEvent*)event);
}

bool q_pdfdocument_qbase_event(void* self, void* event) {
    return QPdfDocument_QBaseEvent((QPdfDocument*)self, (QEvent*)event);
}

void q_pdfdocument_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfDocument_OnEvent((QPdfDocument*)self, (intptr_t)callback);
}

bool q_pdfdocument_event_filter(void* self, void* watched, void* event) {
    return QPdfDocument_EventFilter((QPdfDocument*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfdocument_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfDocument_QBaseEventFilter((QPdfDocument*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfdocument_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfDocument_OnEventFilter((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_timer_event(void* self, void* event) {
    QPdfDocument_TimerEvent((QPdfDocument*)self, (QTimerEvent*)event);
}

void q_pdfdocument_qbase_timer_event(void* self, void* event) {
    QPdfDocument_QBaseTimerEvent((QPdfDocument*)self, (QTimerEvent*)event);
}

void q_pdfdocument_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfDocument_OnTimerEvent((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_child_event(void* self, void* event) {
    QPdfDocument_ChildEvent((QPdfDocument*)self, (QChildEvent*)event);
}

void q_pdfdocument_qbase_child_event(void* self, void* event) {
    QPdfDocument_QBaseChildEvent((QPdfDocument*)self, (QChildEvent*)event);
}

void q_pdfdocument_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfDocument_OnChildEvent((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_custom_event(void* self, void* event) {
    QPdfDocument_CustomEvent((QPdfDocument*)self, (QEvent*)event);
}

void q_pdfdocument_qbase_custom_event(void* self, void* event) {
    QPdfDocument_QBaseCustomEvent((QPdfDocument*)self, (QEvent*)event);
}

void q_pdfdocument_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfDocument_OnCustomEvent((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_connect_notify(void* self, void* signal) {
    QPdfDocument_ConnectNotify((QPdfDocument*)self, (QMetaMethod*)signal);
}

void q_pdfdocument_qbase_connect_notify(void* self, void* signal) {
    QPdfDocument_QBaseConnectNotify((QPdfDocument*)self, (QMetaMethod*)signal);
}

void q_pdfdocument_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfDocument_OnConnectNotify((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_disconnect_notify(void* self, void* signal) {
    QPdfDocument_DisconnectNotify((QPdfDocument*)self, (QMetaMethod*)signal);
}

void q_pdfdocument_qbase_disconnect_notify(void* self, void* signal) {
    QPdfDocument_QBaseDisconnectNotify((QPdfDocument*)self, (QMetaMethod*)signal);
}

void q_pdfdocument_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfDocument_OnDisconnectNotify((QPdfDocument*)self, (intptr_t)callback);
}

QObject* q_pdfdocument_sender(void* self) {
    return QPdfDocument_Sender((QPdfDocument*)self);
}

QObject* q_pdfdocument_qbase_sender(void* self) {
    return QPdfDocument_QBaseSender((QPdfDocument*)self);
}

void q_pdfdocument_on_sender(void* self, QObject* (*callback)()) {
    QPdfDocument_OnSender((QPdfDocument*)self, (intptr_t)callback);
}

int32_t q_pdfdocument_sender_signal_index(void* self) {
    return QPdfDocument_SenderSignalIndex((QPdfDocument*)self);
}

int32_t q_pdfdocument_qbase_sender_signal_index(void* self) {
    return QPdfDocument_QBaseSenderSignalIndex((QPdfDocument*)self);
}

void q_pdfdocument_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfDocument_OnSenderSignalIndex((QPdfDocument*)self, (intptr_t)callback);
}

int32_t q_pdfdocument_receivers(void* self, const char* signal) {
    return QPdfDocument_Receivers((QPdfDocument*)self, signal);
}

int32_t q_pdfdocument_qbase_receivers(void* self, const char* signal) {
    return QPdfDocument_QBaseReceivers((QPdfDocument*)self, signal);
}

void q_pdfdocument_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfDocument_OnReceivers((QPdfDocument*)self, (intptr_t)callback);
}

bool q_pdfdocument_is_signal_connected(void* self, void* signal) {
    return QPdfDocument_IsSignalConnected((QPdfDocument*)self, (QMetaMethod*)signal);
}

bool q_pdfdocument_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfDocument_QBaseIsSignalConnected((QPdfDocument*)self, (QMetaMethod*)signal);
}

void q_pdfdocument_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfDocument_OnIsSignalConnected((QPdfDocument*)self, (intptr_t)callback);
}

void q_pdfdocument_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfdocument_delete(void* self) {
    QPdfDocument_Delete((QPdfDocument*)(self));
}
