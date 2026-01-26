#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmetatype.hpp"
#include "libqobject.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqmimedata.hpp"
#include "libqmimedata.h"

QMimeData* q_mimedata_new() {
    return QMimeData_new();
}

const QMetaObject* q_mimedata_meta_object(void* self) {
    return QMimeData_MetaObject((QMimeData*)self);
}

void q_mimedata_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QMimeData_OnMetaObject((QMimeData*)self, (intptr_t)callback);
}

const QMetaObject* q_mimedata_qbase_meta_object(void* self) {
    return QMimeData_QBaseMetaObject((QMimeData*)self);
}

void* q_mimedata_metacast(void* self, const char* param1) {
    return QMimeData_Metacast((QMimeData*)self, param1);
}

void q_mimedata_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QMimeData_OnMetacast((QMimeData*)self, (intptr_t)callback);
}

void* q_mimedata_qbase_metacast(void* self, const char* param1) {
    return QMimeData_QBaseMetacast((QMimeData*)self, param1);
}

int32_t q_mimedata_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMimeData_Metacall((QMimeData*)self, param1, param2, param3);
}

void q_mimedata_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMimeData_OnMetacall((QMimeData*)self, (intptr_t)callback);
}

int32_t q_mimedata_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMimeData_QBaseMetacall((QMimeData*)self, param1, param2, param3);
}

const char* q_mimedata_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QUrl* */ q_mimedata_urls(void* self) {
    libqt_list _arr = QMimeData_Urls((QMimeData*)self);
    return _arr;
}

void q_mimedata_set_urls(void* self, libqt_list /* of QUrl* */ urls) {
    QMimeData_SetUrls((QMimeData*)self, urls);
}

bool q_mimedata_has_urls(void* self) {
    return QMimeData_HasUrls((QMimeData*)self);
}

const char* q_mimedata_text(void* self) {
    libqt_string _str = QMimeData_Text((QMimeData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mimedata_set_text(void* self, const char* text) {
    QMimeData_SetText((QMimeData*)self, qstring(text));
}

bool q_mimedata_has_text(void* self) {
    return QMimeData_HasText((QMimeData*)self);
}

const char* q_mimedata_html(void* self) {
    libqt_string _str = QMimeData_Html((QMimeData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mimedata_set_html(void* self, const char* html) {
    QMimeData_SetHtml((QMimeData*)self, qstring(html));
}

bool q_mimedata_has_html(void* self) {
    return QMimeData_HasHtml((QMimeData*)self);
}

QVariant* q_mimedata_image_data(void* self) {
    return QMimeData_ImageData((QMimeData*)self);
}

void q_mimedata_set_image_data(void* self, void* image) {
    QMimeData_SetImageData((QMimeData*)self, (QVariant*)image);
}

bool q_mimedata_has_image(void* self) {
    return QMimeData_HasImage((QMimeData*)self);
}

QVariant* q_mimedata_color_data(void* self) {
    return QMimeData_ColorData((QMimeData*)self);
}

void q_mimedata_set_color_data(void* self, void* color) {
    QMimeData_SetColorData((QMimeData*)self, (QVariant*)color);
}

bool q_mimedata_has_color(void* self) {
    return QMimeData_HasColor((QMimeData*)self);
}

char* q_mimedata_data(void* self, const char* mimetype) {
    libqt_string _str = QMimeData_Data((QMimeData*)self, qstring(mimetype));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mimedata_set_data(void* self, const char* mimetype, const char* data) {
    QMimeData_SetData((QMimeData*)self, qstring(mimetype), qstring(data));
}

void q_mimedata_remove_format(void* self, const char* mimetype) {
    QMimeData_RemoveFormat((QMimeData*)self, qstring(mimetype));
}

bool q_mimedata_has_format(void* self, const char* mimetype) {
    return QMimeData_HasFormat((QMimeData*)self, qstring(mimetype));
}

void q_mimedata_on_has_format(void* self, bool (*callback)(void*, const char*)) {
    QMimeData_OnHasFormat((QMimeData*)self, (intptr_t)callback);
}

bool q_mimedata_qbase_has_format(void* self, const char* mimetype) {
    return QMimeData_QBaseHasFormat((QMimeData*)self, qstring(mimetype));
}

const char** q_mimedata_formats(void* self) {
    libqt_list _arr = QMimeData_Formats((QMimeData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimedata_formats\n");
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

void q_mimedata_on_formats(void* self, const char** (*callback)()) {
    QMimeData_OnFormats((QMimeData*)self, (intptr_t)callback);
}

const char** q_mimedata_qbase_formats(void* self) {
    libqt_list _arr = QMimeData_QBaseFormats((QMimeData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimedata_formats\n");
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

void q_mimedata_clear(void* self) {
    QMimeData_Clear((QMimeData*)self);
}

QVariant* q_mimedata_retrieve_data(void* self, const char* mimetype, void* preferredType) {
    return QMimeData_RetrieveData((QMimeData*)self, qstring(mimetype), (QMetaType*)preferredType);
}

void q_mimedata_on_retrieve_data(void* self, QVariant* (*callback)(void*, const char*, void*)) {
    QMimeData_OnRetrieveData((QMimeData*)self, (intptr_t)callback);
}

QVariant* q_mimedata_qbase_retrieve_data(void* self, const char* mimetype, void* preferredType) {
    return QMimeData_QBaseRetrieveData((QMimeData*)self, qstring(mimetype), (QMetaType*)preferredType);
}

const char* q_mimedata_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mimedata_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mimedata_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mimedata_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mimedata_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mimedata_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mimedata_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mimedata_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mimedata_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mimedata_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mimedata_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mimedata_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_mimedata_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_mimedata_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mimedata_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mimedata_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mimedata_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_mimedata_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mimedata_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mimedata_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mimedata_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mimedata_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mimedata_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mimedata_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mimedata_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mimedata_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mimedata_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mimedata_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimedata_dynamic_property_names\n");
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

QBindingStorage* q_mimedata_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mimedata_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mimedata_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mimedata_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mimedata_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mimedata_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mimedata_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_mimedata_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_mimedata_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_mimedata_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_mimedata_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_mimedata_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_mimedata_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mimedata_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mimedata_event(void* self, void* event) {
    return QMimeData_Event((QMimeData*)self, (QEvent*)event);
}

bool q_mimedata_qbase_event(void* self, void* event) {
    return QMimeData_QBaseEvent((QMimeData*)self, (QEvent*)event);
}

void q_mimedata_on_event(void* self, bool (*callback)(void*, void*)) {
    QMimeData_OnEvent((QMimeData*)self, (intptr_t)callback);
}

bool q_mimedata_event_filter(void* self, void* watched, void* event) {
    return QMimeData_EventFilter((QMimeData*)self, (QObject*)watched, (QEvent*)event);
}

bool q_mimedata_qbase_event_filter(void* self, void* watched, void* event) {
    return QMimeData_QBaseEventFilter((QMimeData*)self, (QObject*)watched, (QEvent*)event);
}

void q_mimedata_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMimeData_OnEventFilter((QMimeData*)self, (intptr_t)callback);
}

void q_mimedata_timer_event(void* self, void* event) {
    QMimeData_TimerEvent((QMimeData*)self, (QTimerEvent*)event);
}

void q_mimedata_qbase_timer_event(void* self, void* event) {
    QMimeData_QBaseTimerEvent((QMimeData*)self, (QTimerEvent*)event);
}

void q_mimedata_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMimeData_OnTimerEvent((QMimeData*)self, (intptr_t)callback);
}

void q_mimedata_child_event(void* self, void* event) {
    QMimeData_ChildEvent((QMimeData*)self, (QChildEvent*)event);
}

void q_mimedata_qbase_child_event(void* self, void* event) {
    QMimeData_QBaseChildEvent((QMimeData*)self, (QChildEvent*)event);
}

void q_mimedata_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMimeData_OnChildEvent((QMimeData*)self, (intptr_t)callback);
}

void q_mimedata_custom_event(void* self, void* event) {
    QMimeData_CustomEvent((QMimeData*)self, (QEvent*)event);
}

void q_mimedata_qbase_custom_event(void* self, void* event) {
    QMimeData_QBaseCustomEvent((QMimeData*)self, (QEvent*)event);
}

void q_mimedata_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMimeData_OnCustomEvent((QMimeData*)self, (intptr_t)callback);
}

void q_mimedata_connect_notify(void* self, void* signal) {
    QMimeData_ConnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

void q_mimedata_qbase_connect_notify(void* self, void* signal) {
    QMimeData_QBaseConnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

void q_mimedata_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMimeData_OnConnectNotify((QMimeData*)self, (intptr_t)callback);
}

void q_mimedata_disconnect_notify(void* self, void* signal) {
    QMimeData_DisconnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

void q_mimedata_qbase_disconnect_notify(void* self, void* signal) {
    QMimeData_QBaseDisconnectNotify((QMimeData*)self, (QMetaMethod*)signal);
}

void q_mimedata_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMimeData_OnDisconnectNotify((QMimeData*)self, (intptr_t)callback);
}

QObject* q_mimedata_sender(void* self) {
    return QMimeData_Sender((QMimeData*)self);
}

QObject* q_mimedata_qbase_sender(void* self) {
    return QMimeData_QBaseSender((QMimeData*)self);
}

void q_mimedata_on_sender(void* self, QObject* (*callback)()) {
    QMimeData_OnSender((QMimeData*)self, (intptr_t)callback);
}

int32_t q_mimedata_sender_signal_index(void* self) {
    return QMimeData_SenderSignalIndex((QMimeData*)self);
}

int32_t q_mimedata_qbase_sender_signal_index(void* self) {
    return QMimeData_QBaseSenderSignalIndex((QMimeData*)self);
}

void q_mimedata_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMimeData_OnSenderSignalIndex((QMimeData*)self, (intptr_t)callback);
}

int32_t q_mimedata_receivers(void* self, const char* signal) {
    return QMimeData_Receivers((QMimeData*)self, signal);
}

int32_t q_mimedata_qbase_receivers(void* self, const char* signal) {
    return QMimeData_QBaseReceivers((QMimeData*)self, signal);
}

void q_mimedata_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMimeData_OnReceivers((QMimeData*)self, (intptr_t)callback);
}

bool q_mimedata_is_signal_connected(void* self, void* signal) {
    return QMimeData_IsSignalConnected((QMimeData*)self, (QMetaMethod*)signal);
}

bool q_mimedata_qbase_is_signal_connected(void* self, void* signal) {
    return QMimeData_QBaseIsSignalConnected((QMimeData*)self, (QMetaMethod*)signal);
}

void q_mimedata_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMimeData_OnIsSignalConnected((QMimeData*)self, (intptr_t)callback);
}

void q_mimedata_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mimedata_delete(void* self) {
    QMimeData_Delete((QMimeData*)(self));
}
