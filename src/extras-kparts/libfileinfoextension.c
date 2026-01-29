#include "libreadonlypart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libfileinfoextension.hpp"
#include "libfileinfoextension.h"

KParts__FileInfoExtension* k_parts__fileinfoextension_new(void* parent) {
    return KParts__FileInfoExtension_new((KParts__ReadOnlyPart*)parent);
}

const QMetaObject* k_parts__fileinfoextension_meta_object(void* self) {
    return KParts__FileInfoExtension_MetaObject((KParts__FileInfoExtension*)self);
}

void k_parts__fileinfoextension_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KParts__FileInfoExtension_OnMetaObject((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

const QMetaObject* k_parts__fileinfoextension_qbase_meta_object(void* self) {
    return KParts__FileInfoExtension_QBaseMetaObject((KParts__FileInfoExtension*)self);
}

void* k_parts__fileinfoextension_metacast(void* self, const char* param1) {
    return KParts__FileInfoExtension_Metacast((KParts__FileInfoExtension*)self, param1);
}

void k_parts__fileinfoextension_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KParts__FileInfoExtension_OnMetacast((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void* k_parts__fileinfoextension_qbase_metacast(void* self, const char* param1) {
    return KParts__FileInfoExtension_QBaseMetacast((KParts__FileInfoExtension*)self, param1);
}

int32_t k_parts__fileinfoextension_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__FileInfoExtension_Metacall((KParts__FileInfoExtension*)self, param1, param2, param3);
}

void k_parts__fileinfoextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__FileInfoExtension_OnMetacall((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

int32_t k_parts__fileinfoextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__FileInfoExtension_QBaseMetacall((KParts__FileInfoExtension*)self, param1, param2, param3);
}

const char* k_parts__fileinfoextension_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KParts__FileInfoExtension* k_parts__fileinfoextension_child_object(void* obj) {
    return KParts__FileInfoExtension_ChildObject((QObject*)obj);
}

bool k_parts__fileinfoextension_has_selection(void* self) {
    return KParts__FileInfoExtension_HasSelection((KParts__FileInfoExtension*)self);
}

void k_parts__fileinfoextension_on_has_selection(void* self, bool (*callback)()) {
    KParts__FileInfoExtension_OnHasSelection((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

bool k_parts__fileinfoextension_qbase_has_selection(void* self) {
    return KParts__FileInfoExtension_QBaseHasSelection((KParts__FileInfoExtension*)self);
}

int32_t k_parts__fileinfoextension_supported_query_modes(void* self) {
    return KParts__FileInfoExtension_SupportedQueryModes((KParts__FileInfoExtension*)self);
}

void k_parts__fileinfoextension_on_supported_query_modes(void* self, int32_t (*callback)()) {
    KParts__FileInfoExtension_OnSupportedQueryModes((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

int32_t k_parts__fileinfoextension_qbase_supported_query_modes(void* self) {
    return KParts__FileInfoExtension_QBaseSupportedQueryModes((KParts__FileInfoExtension*)self);
}

KFileItemList* k_parts__fileinfoextension_query_for(void* self, int32_t mode) {
    return KParts__FileInfoExtension_QueryFor((KParts__FileInfoExtension*)self, mode);
}

void k_parts__fileinfoextension_on_query_for(void* self, KFileItemList* (*callback)(void*, int32_t)) {
    KParts__FileInfoExtension_OnQueryFor((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

KFileItemList* k_parts__fileinfoextension_qbase_query_for(void* self, int32_t mode) {
    return KParts__FileInfoExtension_QBaseQueryFor((KParts__FileInfoExtension*)self, mode);
}

const char* k_parts__fileinfoextension_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__fileinfoextension_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__fileinfoextension_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__fileinfoextension_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__fileinfoextension_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__fileinfoextension_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__fileinfoextension_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__fileinfoextension_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__fileinfoextension_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__fileinfoextension_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__fileinfoextension_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__fileinfoextension_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_parts__fileinfoextension_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_parts__fileinfoextension_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__fileinfoextension_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__fileinfoextension_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__fileinfoextension_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__fileinfoextension_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__fileinfoextension_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__fileinfoextension_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__fileinfoextension_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__fileinfoextension_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__fileinfoextension_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_parts__fileinfoextension_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__fileinfoextension_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__fileinfoextension_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__fileinfoextension_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__fileinfoextension_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__fileinfoextension_dynamic_property_names\n");
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

QBindingStorage* k_parts__fileinfoextension_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__fileinfoextension_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__fileinfoextension_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__fileinfoextension_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__fileinfoextension_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__fileinfoextension_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__fileinfoextension_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_parts__fileinfoextension_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_parts__fileinfoextension_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_parts__fileinfoextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__fileinfoextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_parts__fileinfoextension_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__fileinfoextension_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_parts__fileinfoextension_event(void* self, void* event) {
    return KParts__FileInfoExtension_Event((KParts__FileInfoExtension*)self, (QEvent*)event);
}

bool k_parts__fileinfoextension_qbase_event(void* self, void* event) {
    return KParts__FileInfoExtension_QBaseEvent((KParts__FileInfoExtension*)self, (QEvent*)event);
}

void k_parts__fileinfoextension_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnEvent((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

bool k_parts__fileinfoextension_event_filter(void* self, void* watched, void* event) {
    return KParts__FileInfoExtension_EventFilter((KParts__FileInfoExtension*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__fileinfoextension_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__FileInfoExtension_QBaseEventFilter((KParts__FileInfoExtension*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__fileinfoextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__FileInfoExtension_OnEventFilter((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_timer_event(void* self, void* event) {
    KParts__FileInfoExtension_TimerEvent((KParts__FileInfoExtension*)self, (QTimerEvent*)event);
}

void k_parts__fileinfoextension_qbase_timer_event(void* self, void* event) {
    KParts__FileInfoExtension_QBaseTimerEvent((KParts__FileInfoExtension*)self, (QTimerEvent*)event);
}

void k_parts__fileinfoextension_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnTimerEvent((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_child_event(void* self, void* event) {
    KParts__FileInfoExtension_ChildEvent((KParts__FileInfoExtension*)self, (QChildEvent*)event);
}

void k_parts__fileinfoextension_qbase_child_event(void* self, void* event) {
    KParts__FileInfoExtension_QBaseChildEvent((KParts__FileInfoExtension*)self, (QChildEvent*)event);
}

void k_parts__fileinfoextension_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnChildEvent((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_custom_event(void* self, void* event) {
    KParts__FileInfoExtension_CustomEvent((KParts__FileInfoExtension*)self, (QEvent*)event);
}

void k_parts__fileinfoextension_qbase_custom_event(void* self, void* event) {
    KParts__FileInfoExtension_QBaseCustomEvent((KParts__FileInfoExtension*)self, (QEvent*)event);
}

void k_parts__fileinfoextension_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnCustomEvent((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_connect_notify(void* self, void* signal) {
    KParts__FileInfoExtension_ConnectNotify((KParts__FileInfoExtension*)self, (QMetaMethod*)signal);
}

void k_parts__fileinfoextension_qbase_connect_notify(void* self, void* signal) {
    KParts__FileInfoExtension_QBaseConnectNotify((KParts__FileInfoExtension*)self, (QMetaMethod*)signal);
}

void k_parts__fileinfoextension_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnConnectNotify((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_disconnect_notify(void* self, void* signal) {
    KParts__FileInfoExtension_DisconnectNotify((KParts__FileInfoExtension*)self, (QMetaMethod*)signal);
}

void k_parts__fileinfoextension_qbase_disconnect_notify(void* self, void* signal) {
    KParts__FileInfoExtension_QBaseDisconnectNotify((KParts__FileInfoExtension*)self, (QMetaMethod*)signal);
}

void k_parts__fileinfoextension_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnDisconnectNotify((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

QObject* k_parts__fileinfoextension_sender(void* self) {
    return KParts__FileInfoExtension_Sender((KParts__FileInfoExtension*)self);
}

QObject* k_parts__fileinfoextension_qbase_sender(void* self) {
    return KParts__FileInfoExtension_QBaseSender((KParts__FileInfoExtension*)self);
}

void k_parts__fileinfoextension_on_sender(void* self, QObject* (*callback)()) {
    KParts__FileInfoExtension_OnSender((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

int32_t k_parts__fileinfoextension_sender_signal_index(void* self) {
    return KParts__FileInfoExtension_SenderSignalIndex((KParts__FileInfoExtension*)self);
}

int32_t k_parts__fileinfoextension_qbase_sender_signal_index(void* self) {
    return KParts__FileInfoExtension_QBaseSenderSignalIndex((KParts__FileInfoExtension*)self);
}

void k_parts__fileinfoextension_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__FileInfoExtension_OnSenderSignalIndex((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

int32_t k_parts__fileinfoextension_receivers(void* self, const char* signal) {
    return KParts__FileInfoExtension_Receivers((KParts__FileInfoExtension*)self, signal);
}

int32_t k_parts__fileinfoextension_qbase_receivers(void* self, const char* signal) {
    return KParts__FileInfoExtension_QBaseReceivers((KParts__FileInfoExtension*)self, signal);
}

void k_parts__fileinfoextension_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__FileInfoExtension_OnReceivers((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

bool k_parts__fileinfoextension_is_signal_connected(void* self, void* signal) {
    return KParts__FileInfoExtension_IsSignalConnected((KParts__FileInfoExtension*)self, (QMetaMethod*)signal);
}

bool k_parts__fileinfoextension_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__FileInfoExtension_QBaseIsSignalConnected((KParts__FileInfoExtension*)self, (QMetaMethod*)signal);
}

void k_parts__fileinfoextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__FileInfoExtension_OnIsSignalConnected((KParts__FileInfoExtension*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__fileinfoextension_delete(void* self) {
    KParts__FileInfoExtension_Delete((KParts__FileInfoExtension*)(self));
}
