#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqregularexpression.hpp"
#include "../libqurl.hpp"
#include "libFilter.hpp"
#include "libFilter.h"

Konsole__Filter* k_onsole__filter_new() {
    return Konsole__Filter_new();
}

void k_onsole__filter_process(void* self) {
    Konsole__Filter_Process((Konsole__Filter*)self);
}

void k_onsole__filter_on_process(void* self, void (*callback)()) {
    Konsole__Filter_OnProcess((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_qbase_process(void* self) {
    Konsole__Filter_QBaseProcess((Konsole__Filter*)self);
}

void k_onsole__filter_reset(void* self) {
    Konsole__Filter_Reset((Konsole__Filter*)self);
}

Konsole__Filter__HotSpot* k_onsole__filter_hot_spot_at(void* self, int line, int column) {
    return Konsole__Filter_HotSpotAt((Konsole__Filter*)self, line, column);
}

void k_onsole__filter_add_hot_spot(void* self, void* param1) {
    Konsole__Filter_AddHotSpot((Konsole__Filter*)self, (Konsole__Filter__HotSpot*)param1);
}

void k_onsole__filter_on_add_hot_spot(void* self, void (*callback)(void*, void*)) {
    Konsole__Filter_OnAddHotSpot((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_qbase_add_hot_spot(void* self, void* param1) {
    Konsole__Filter_QBaseAddHotSpot((Konsole__Filter*)self, (Konsole__Filter__HotSpot*)param1);
}

const char* k_onsole__filter_buffer(void* self) {
    libqt_string _str = Konsole__Filter_Buffer((Konsole__Filter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__filter_on_buffer(void* self, const char* (*callback)()) {
    Konsole__Filter_OnBuffer((Konsole__Filter*)self, (intptr_t)callback);
}

const char* k_onsole__filter_qbase_buffer(void* self) {
    libqt_string _str = Konsole__Filter_QBaseBuffer((Konsole__Filter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__filter_get_line_column(void* self, int position, int* startLine, int* startColumn) {
    Konsole__Filter_GetLineColumn((Konsole__Filter*)self, position, startLine, startColumn);
}

void k_onsole__filter_on_get_line_column(void* self, void (*callback)(void*, int, int*, int*)) {
    Konsole__Filter_OnGetLineColumn((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_qbase_get_line_column(void* self, int position, int* startLine, int* startColumn) {
    Konsole__Filter_QBaseGetLineColumn((Konsole__Filter*)self, position, startLine, startColumn);
}

const QMetaObject* k_onsole__filter_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

void* k_onsole__filter_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

const char* k_onsole__filter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__filter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__filter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_onsole__filter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_onsole__filter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_onsole__filter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_onsole__filter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_onsole__filter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_onsole__filter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_onsole__filter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_onsole__filter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_onsole__filter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_onsole__filter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_onsole__filter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_onsole__filter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_onsole__filter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_onsole__filter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_onsole__filter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_onsole__filter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_onsole__filter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_onsole__filter_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_onsole__filter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_onsole__filter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_onsole__filter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_onsole__filter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_onsole__filter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__filter_dynamic_property_names");
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

QBindingStorage* k_onsole__filter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_onsole__filter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_onsole__filter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_onsole__filter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_onsole__filter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_onsole__filter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_onsole__filter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

const char* k_onsole__filter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__filter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_onsole__filter_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_onsole__filter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_onsole__filter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_onsole__filter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_onsole__filter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_onsole__filter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_onsole__filter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__Filter_Metacall((Konsole__Filter*)self, param1, param2, param3);
}

int32_t k_onsole__filter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__Filter_QBaseMetacall((Konsole__Filter*)self, param1, param2, param3);
}

void k_onsole__filter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Konsole__Filter_OnMetacall((Konsole__Filter*)self, (intptr_t)callback);
}

bool k_onsole__filter_event(void* self, void* event) {
    return Konsole__Filter_Event((Konsole__Filter*)self, (QEvent*)event);
}

bool k_onsole__filter_qbase_event(void* self, void* event) {
    return Konsole__Filter_QBaseEvent((Konsole__Filter*)self, (QEvent*)event);
}

void k_onsole__filter_on_event(void* self, bool (*callback)(void*, void*)) {
    Konsole__Filter_OnEvent((Konsole__Filter*)self, (intptr_t)callback);
}

bool k_onsole__filter_event_filter(void* self, void* watched, void* event) {
    return Konsole__Filter_EventFilter((Konsole__Filter*)self, (QObject*)watched, (QEvent*)event);
}

bool k_onsole__filter_qbase_event_filter(void* self, void* watched, void* event) {
    return Konsole__Filter_QBaseEventFilter((Konsole__Filter*)self, (QObject*)watched, (QEvent*)event);
}

void k_onsole__filter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Konsole__Filter_OnEventFilter((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_timer_event(void* self, void* event) {
    Konsole__Filter_TimerEvent((Konsole__Filter*)self, (QTimerEvent*)event);
}

void k_onsole__filter_qbase_timer_event(void* self, void* event) {
    Konsole__Filter_QBaseTimerEvent((Konsole__Filter*)self, (QTimerEvent*)event);
}

void k_onsole__filter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Konsole__Filter_OnTimerEvent((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_child_event(void* self, void* event) {
    Konsole__Filter_ChildEvent((Konsole__Filter*)self, (QChildEvent*)event);
}

void k_onsole__filter_qbase_child_event(void* self, void* event) {
    Konsole__Filter_QBaseChildEvent((Konsole__Filter*)self, (QChildEvent*)event);
}

void k_onsole__filter_on_child_event(void* self, void (*callback)(void*, void*)) {
    Konsole__Filter_OnChildEvent((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_custom_event(void* self, void* event) {
    Konsole__Filter_CustomEvent((Konsole__Filter*)self, (QEvent*)event);
}

void k_onsole__filter_qbase_custom_event(void* self, void* event) {
    Konsole__Filter_QBaseCustomEvent((Konsole__Filter*)self, (QEvent*)event);
}

void k_onsole__filter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Konsole__Filter_OnCustomEvent((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_connect_notify(void* self, void* signal) {
    Konsole__Filter_ConnectNotify((Konsole__Filter*)self, (QMetaMethod*)signal);
}

void k_onsole__filter_qbase_connect_notify(void* self, void* signal) {
    Konsole__Filter_QBaseConnectNotify((Konsole__Filter*)self, (QMetaMethod*)signal);
}

void k_onsole__filter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__Filter_OnConnectNotify((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_disconnect_notify(void* self, void* signal) {
    Konsole__Filter_DisconnectNotify((Konsole__Filter*)self, (QMetaMethod*)signal);
}

void k_onsole__filter_qbase_disconnect_notify(void* self, void* signal) {
    Konsole__Filter_QBaseDisconnectNotify((Konsole__Filter*)self, (QMetaMethod*)signal);
}

void k_onsole__filter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__Filter_OnDisconnectNotify((Konsole__Filter*)self, (intptr_t)callback);
}

QObject* k_onsole__filter_sender(void* self) {
    return Konsole__Filter_Sender((Konsole__Filter*)self);
}

QObject* k_onsole__filter_qbase_sender(void* self) {
    return Konsole__Filter_QBaseSender((Konsole__Filter*)self);
}

void k_onsole__filter_on_sender(void* self, QObject* (*callback)()) {
    Konsole__Filter_OnSender((Konsole__Filter*)self, (intptr_t)callback);
}

int32_t k_onsole__filter_sender_signal_index(void* self) {
    return Konsole__Filter_SenderSignalIndex((Konsole__Filter*)self);
}

int32_t k_onsole__filter_qbase_sender_signal_index(void* self) {
    return Konsole__Filter_QBaseSenderSignalIndex((Konsole__Filter*)self);
}

void k_onsole__filter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Konsole__Filter_OnSenderSignalIndex((Konsole__Filter*)self, (intptr_t)callback);
}

int32_t k_onsole__filter_receivers(void* self, const char* signal) {
    return Konsole__Filter_Receivers((Konsole__Filter*)self, signal);
}

int32_t k_onsole__filter_qbase_receivers(void* self, const char* signal) {
    return Konsole__Filter_QBaseReceivers((Konsole__Filter*)self, signal);
}

void k_onsole__filter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Konsole__Filter_OnReceivers((Konsole__Filter*)self, (intptr_t)callback);
}

bool k_onsole__filter_is_signal_connected(void* self, void* signal) {
    return Konsole__Filter_IsSignalConnected((Konsole__Filter*)self, (QMetaMethod*)signal);
}

bool k_onsole__filter_qbase_is_signal_connected(void* self, void* signal) {
    return Konsole__Filter_QBaseIsSignalConnected((Konsole__Filter*)self, (QMetaMethod*)signal);
}

void k_onsole__filter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Konsole__Filter_OnIsSignalConnected((Konsole__Filter*)self, (intptr_t)callback);
}

void k_onsole__filter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_onsole__filter_delete(void* self) {
    Konsole__Filter_Delete((Konsole__Filter*)(self));
}

Konsole__RegExpFilter* k_onsole__regexpfilter_new() {
    return Konsole__RegExpFilter_new();
}

void k_onsole__regexpfilter_set_reg_exp(void* self, void* text) {
    Konsole__RegExpFilter_SetRegExp((Konsole__RegExpFilter*)self, (QRegularExpression*)text);
}

QRegularExpression* k_onsole__regexpfilter_reg_exp(void* self) {
    return Konsole__RegExpFilter_RegExp((Konsole__RegExpFilter*)self);
}

void k_onsole__regexpfilter_process(void* self) {
    Konsole__RegExpFilter_Process((Konsole__RegExpFilter*)self);
}

void k_onsole__regexpfilter_on_process(void* self, void (*callback)()) {
    Konsole__RegExpFilter_OnProcess((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_qbase_process(void* self) {
    Konsole__RegExpFilter_QBaseProcess((Konsole__RegExpFilter*)self);
}

Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter_new_hot_spot(void* self, int startLine, int startColumn, int endLine, int endColumn) {
    return Konsole__RegExpFilter_NewHotSpot((Konsole__RegExpFilter*)self, startLine, startColumn, endLine, endColumn);
}

void k_onsole__regexpfilter_on_new_hot_spot(void* self, Konsole__RegExpFilter__HotSpot* (*callback)(void*, int, int, int, int)) {
    Konsole__RegExpFilter_OnNewHotSpot((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter_qbase_new_hot_spot(void* self, int startLine, int startColumn, int endLine, int endColumn) {
    return Konsole__RegExpFilter_QBaseNewHotSpot((Konsole__RegExpFilter*)self, startLine, startColumn, endLine, endColumn);
}

void k_onsole__regexpfilter_reset(void* self) {
    Konsole__Filter_Reset((Konsole__Filter*)self);
}

Konsole__Filter__HotSpot* k_onsole__regexpfilter_hot_spot_at(void* self, int line, int column) {
    return Konsole__Filter_HotSpotAt((Konsole__Filter*)self, line, column);
}

const QMetaObject* k_onsole__regexpfilter_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

void* k_onsole__regexpfilter_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

const char* k_onsole__regexpfilter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__regexpfilter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__regexpfilter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_onsole__regexpfilter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_onsole__regexpfilter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_onsole__regexpfilter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_onsole__regexpfilter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_onsole__regexpfilter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_onsole__regexpfilter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_onsole__regexpfilter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_onsole__regexpfilter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_onsole__regexpfilter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_onsole__regexpfilter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_onsole__regexpfilter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_onsole__regexpfilter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_onsole__regexpfilter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_onsole__regexpfilter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_onsole__regexpfilter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_onsole__regexpfilter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_onsole__regexpfilter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_onsole__regexpfilter_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_onsole__regexpfilter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_onsole__regexpfilter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_onsole__regexpfilter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_onsole__regexpfilter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_onsole__regexpfilter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__regexpfilter_dynamic_property_names");
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

QBindingStorage* k_onsole__regexpfilter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_onsole__regexpfilter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_onsole__regexpfilter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_onsole__regexpfilter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_onsole__regexpfilter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_onsole__regexpfilter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_onsole__regexpfilter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

const char* k_onsole__regexpfilter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__regexpfilter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_onsole__regexpfilter_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_onsole__regexpfilter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_onsole__regexpfilter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_onsole__regexpfilter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_onsole__regexpfilter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_onsole__regexpfilter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_onsole__regexpfilter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__RegExpFilter_Metacall((Konsole__RegExpFilter*)self, param1, param2, param3);
}

int32_t k_onsole__regexpfilter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__RegExpFilter_QBaseMetacall((Konsole__RegExpFilter*)self, param1, param2, param3);
}

void k_onsole__regexpfilter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Konsole__RegExpFilter_OnMetacall((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

bool k_onsole__regexpfilter_event(void* self, void* event) {
    return Konsole__RegExpFilter_Event((Konsole__RegExpFilter*)self, (QEvent*)event);
}

bool k_onsole__regexpfilter_qbase_event(void* self, void* event) {
    return Konsole__RegExpFilter_QBaseEvent((Konsole__RegExpFilter*)self, (QEvent*)event);
}

void k_onsole__regexpfilter_on_event(void* self, bool (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnEvent((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

bool k_onsole__regexpfilter_event_filter(void* self, void* watched, void* event) {
    return Konsole__RegExpFilter_EventFilter((Konsole__RegExpFilter*)self, (QObject*)watched, (QEvent*)event);
}

bool k_onsole__regexpfilter_qbase_event_filter(void* self, void* watched, void* event) {
    return Konsole__RegExpFilter_QBaseEventFilter((Konsole__RegExpFilter*)self, (QObject*)watched, (QEvent*)event);
}

void k_onsole__regexpfilter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Konsole__RegExpFilter_OnEventFilter((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_timer_event(void* self, void* event) {
    Konsole__RegExpFilter_TimerEvent((Konsole__RegExpFilter*)self, (QTimerEvent*)event);
}

void k_onsole__regexpfilter_qbase_timer_event(void* self, void* event) {
    Konsole__RegExpFilter_QBaseTimerEvent((Konsole__RegExpFilter*)self, (QTimerEvent*)event);
}

void k_onsole__regexpfilter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnTimerEvent((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_child_event(void* self, void* event) {
    Konsole__RegExpFilter_ChildEvent((Konsole__RegExpFilter*)self, (QChildEvent*)event);
}

void k_onsole__regexpfilter_qbase_child_event(void* self, void* event) {
    Konsole__RegExpFilter_QBaseChildEvent((Konsole__RegExpFilter*)self, (QChildEvent*)event);
}

void k_onsole__regexpfilter_on_child_event(void* self, void (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnChildEvent((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_custom_event(void* self, void* event) {
    Konsole__RegExpFilter_CustomEvent((Konsole__RegExpFilter*)self, (QEvent*)event);
}

void k_onsole__regexpfilter_qbase_custom_event(void* self, void* event) {
    Konsole__RegExpFilter_QBaseCustomEvent((Konsole__RegExpFilter*)self, (QEvent*)event);
}

void k_onsole__regexpfilter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnCustomEvent((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_connect_notify(void* self, void* signal) {
    Konsole__RegExpFilter_ConnectNotify((Konsole__RegExpFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__regexpfilter_qbase_connect_notify(void* self, void* signal) {
    Konsole__RegExpFilter_QBaseConnectNotify((Konsole__RegExpFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__regexpfilter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnConnectNotify((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_disconnect_notify(void* self, void* signal) {
    Konsole__RegExpFilter_DisconnectNotify((Konsole__RegExpFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__regexpfilter_qbase_disconnect_notify(void* self, void* signal) {
    Konsole__RegExpFilter_QBaseDisconnectNotify((Konsole__RegExpFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__regexpfilter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnDisconnectNotify((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_add_hot_spot(void* self, void* param1) {
    Konsole__RegExpFilter_AddHotSpot((Konsole__RegExpFilter*)self, (Konsole__Filter__HotSpot*)param1);
}

void k_onsole__regexpfilter_qbase_add_hot_spot(void* self, void* param1) {
    Konsole__RegExpFilter_QBaseAddHotSpot((Konsole__RegExpFilter*)self, (Konsole__Filter__HotSpot*)param1);
}

void k_onsole__regexpfilter_on_add_hot_spot(void* self, void (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnAddHotSpot((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

const char* k_onsole__regexpfilter_buffer(void* self) {
    libqt_string _str = Konsole__RegExpFilter_Buffer((Konsole__RegExpFilter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__regexpfilter_qbase_buffer(void* self) {
    libqt_string _str = Konsole__RegExpFilter_QBaseBuffer((Konsole__RegExpFilter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__regexpfilter_on_buffer(void* self, const char* (*callback)()) {
    Konsole__RegExpFilter_OnBuffer((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_get_line_column(void* self, int position, int* startLine, int* startColumn) {
    Konsole__RegExpFilter_GetLineColumn((Konsole__RegExpFilter*)self, position, startLine, startColumn);
}

void k_onsole__regexpfilter_qbase_get_line_column(void* self, int position, int* startLine, int* startColumn) {
    Konsole__RegExpFilter_QBaseGetLineColumn((Konsole__RegExpFilter*)self, position, startLine, startColumn);
}

void k_onsole__regexpfilter_on_get_line_column(void* self, void (*callback)(void*, int, int*, int*)) {
    Konsole__RegExpFilter_OnGetLineColumn((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

QObject* k_onsole__regexpfilter_sender(void* self) {
    return Konsole__RegExpFilter_Sender((Konsole__RegExpFilter*)self);
}

QObject* k_onsole__regexpfilter_qbase_sender(void* self) {
    return Konsole__RegExpFilter_QBaseSender((Konsole__RegExpFilter*)self);
}

void k_onsole__regexpfilter_on_sender(void* self, QObject* (*callback)()) {
    Konsole__RegExpFilter_OnSender((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

int32_t k_onsole__regexpfilter_sender_signal_index(void* self) {
    return Konsole__RegExpFilter_SenderSignalIndex((Konsole__RegExpFilter*)self);
}

int32_t k_onsole__regexpfilter_qbase_sender_signal_index(void* self) {
    return Konsole__RegExpFilter_QBaseSenderSignalIndex((Konsole__RegExpFilter*)self);
}

void k_onsole__regexpfilter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Konsole__RegExpFilter_OnSenderSignalIndex((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

int32_t k_onsole__regexpfilter_receivers(void* self, const char* signal) {
    return Konsole__RegExpFilter_Receivers((Konsole__RegExpFilter*)self, signal);
}

int32_t k_onsole__regexpfilter_qbase_receivers(void* self, const char* signal) {
    return Konsole__RegExpFilter_QBaseReceivers((Konsole__RegExpFilter*)self, signal);
}

void k_onsole__regexpfilter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Konsole__RegExpFilter_OnReceivers((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

bool k_onsole__regexpfilter_is_signal_connected(void* self, void* signal) {
    return Konsole__RegExpFilter_IsSignalConnected((Konsole__RegExpFilter*)self, (QMetaMethod*)signal);
}

bool k_onsole__regexpfilter_qbase_is_signal_connected(void* self, void* signal) {
    return Konsole__RegExpFilter_QBaseIsSignalConnected((Konsole__RegExpFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__regexpfilter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Konsole__RegExpFilter_OnIsSignalConnected((Konsole__RegExpFilter*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter_delete(void* self) {
    Konsole__RegExpFilter_Delete((Konsole__RegExpFilter*)(self));
}

Konsole__UrlFilter* k_onsole__urlfilter_new() {
    return Konsole__UrlFilter_new();
}

const QMetaObject* k_onsole__urlfilter_meta_object(void* self) {
    return Konsole__UrlFilter_MetaObject((Konsole__UrlFilter*)self);
}

void* k_onsole__urlfilter_metacast(void* self, const char* param1) {
    return Konsole__UrlFilter_Metacast((Konsole__UrlFilter*)self, param1);
}

int32_t k_onsole__urlfilter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__UrlFilter_Metacall((Konsole__UrlFilter*)self, param1, param2, param3);
}

void k_onsole__urlfilter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Konsole__UrlFilter_OnMetacall((Konsole__UrlFilter*)self, (intptr_t)callback);
}

int32_t k_onsole__urlfilter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__UrlFilter_QBaseMetacall((Konsole__UrlFilter*)self, param1, param2, param3);
}

const char* k_onsole__urlfilter_tr(const char* s) {
    libqt_string _str = Konsole__UrlFilter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Konsole__RegExpFilter__HotSpot* k_onsole__urlfilter_new_hot_spot(void* self, int param1, int param2, int param3, int param4) {
    return Konsole__UrlFilter_NewHotSpot((Konsole__UrlFilter*)self, param1, param2, param3, param4);
}

void k_onsole__urlfilter_on_new_hot_spot(void* self, Konsole__RegExpFilter__HotSpot* (*callback)(void*, int, int, int, int)) {
    Konsole__UrlFilter_OnNewHotSpot((Konsole__UrlFilter*)self, (intptr_t)callback);
}

Konsole__RegExpFilter__HotSpot* k_onsole__urlfilter_qbase_new_hot_spot(void* self, int param1, int param2, int param3, int param4) {
    return Konsole__UrlFilter_QBaseNewHotSpot((Konsole__UrlFilter*)self, param1, param2, param3, param4);
}

void k_onsole__urlfilter_activated(void* self, void* url, bool fromContextMenu) {
    Konsole__UrlFilter_Activated((Konsole__UrlFilter*)self, (QUrl*)url, fromContextMenu);
}

void k_onsole__urlfilter_on_activated(void* self, void (*callback)(void*, void*, bool)) {
    Konsole__UrlFilter_Connect_Activated((Konsole__UrlFilter*)self, (intptr_t)callback);
}

const char* k_onsole__urlfilter_tr2(const char* s, const char* c) {
    libqt_string _str = Konsole__UrlFilter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__urlfilter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Konsole__UrlFilter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__urlfilter_set_reg_exp(void* self, void* text) {
    Konsole__RegExpFilter_SetRegExp((Konsole__RegExpFilter*)self, (QRegularExpression*)text);
}

QRegularExpression* k_onsole__urlfilter_reg_exp(void* self) {
    return Konsole__RegExpFilter_RegExp((Konsole__RegExpFilter*)self);
}

void k_onsole__urlfilter_reset(void* self) {
    Konsole__Filter_Reset((Konsole__Filter*)self);
}

Konsole__Filter__HotSpot* k_onsole__urlfilter_hot_spot_at(void* self, int line, int column) {
    return Konsole__Filter_HotSpotAt((Konsole__Filter*)self, line, column);
}

const char* k_onsole__urlfilter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__urlfilter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_onsole__urlfilter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_onsole__urlfilter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_onsole__urlfilter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_onsole__urlfilter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_onsole__urlfilter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_onsole__urlfilter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_onsole__urlfilter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_onsole__urlfilter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_onsole__urlfilter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_onsole__urlfilter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_onsole__urlfilter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_onsole__urlfilter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_onsole__urlfilter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_onsole__urlfilter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_onsole__urlfilter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_onsole__urlfilter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_onsole__urlfilter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_onsole__urlfilter_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_onsole__urlfilter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_onsole__urlfilter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_onsole__urlfilter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_onsole__urlfilter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_onsole__urlfilter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__urlfilter_dynamic_property_names");
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

QBindingStorage* k_onsole__urlfilter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_onsole__urlfilter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_onsole__urlfilter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_onsole__urlfilter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_onsole__urlfilter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_onsole__urlfilter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_onsole__urlfilter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_onsole__urlfilter_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_onsole__urlfilter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_onsole__urlfilter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_onsole__urlfilter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_onsole__urlfilter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_onsole__urlfilter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_process(void* self) {
    Konsole__UrlFilter_Process((Konsole__UrlFilter*)self);
}

void k_onsole__urlfilter_qbase_process(void* self) {
    Konsole__UrlFilter_QBaseProcess((Konsole__UrlFilter*)self);
}

void k_onsole__urlfilter_on_process(void* self, void (*callback)()) {
    Konsole__UrlFilter_OnProcess((Konsole__UrlFilter*)self, (intptr_t)callback);
}

bool k_onsole__urlfilter_event(void* self, void* event) {
    return Konsole__UrlFilter_Event((Konsole__UrlFilter*)self, (QEvent*)event);
}

bool k_onsole__urlfilter_qbase_event(void* self, void* event) {
    return Konsole__UrlFilter_QBaseEvent((Konsole__UrlFilter*)self, (QEvent*)event);
}

void k_onsole__urlfilter_on_event(void* self, bool (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnEvent((Konsole__UrlFilter*)self, (intptr_t)callback);
}

bool k_onsole__urlfilter_event_filter(void* self, void* watched, void* event) {
    return Konsole__UrlFilter_EventFilter((Konsole__UrlFilter*)self, (QObject*)watched, (QEvent*)event);
}

bool k_onsole__urlfilter_qbase_event_filter(void* self, void* watched, void* event) {
    return Konsole__UrlFilter_QBaseEventFilter((Konsole__UrlFilter*)self, (QObject*)watched, (QEvent*)event);
}

void k_onsole__urlfilter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Konsole__UrlFilter_OnEventFilter((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_timer_event(void* self, void* event) {
    Konsole__UrlFilter_TimerEvent((Konsole__UrlFilter*)self, (QTimerEvent*)event);
}

void k_onsole__urlfilter_qbase_timer_event(void* self, void* event) {
    Konsole__UrlFilter_QBaseTimerEvent((Konsole__UrlFilter*)self, (QTimerEvent*)event);
}

void k_onsole__urlfilter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnTimerEvent((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_child_event(void* self, void* event) {
    Konsole__UrlFilter_ChildEvent((Konsole__UrlFilter*)self, (QChildEvent*)event);
}

void k_onsole__urlfilter_qbase_child_event(void* self, void* event) {
    Konsole__UrlFilter_QBaseChildEvent((Konsole__UrlFilter*)self, (QChildEvent*)event);
}

void k_onsole__urlfilter_on_child_event(void* self, void (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnChildEvent((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_custom_event(void* self, void* event) {
    Konsole__UrlFilter_CustomEvent((Konsole__UrlFilter*)self, (QEvent*)event);
}

void k_onsole__urlfilter_qbase_custom_event(void* self, void* event) {
    Konsole__UrlFilter_QBaseCustomEvent((Konsole__UrlFilter*)self, (QEvent*)event);
}

void k_onsole__urlfilter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnCustomEvent((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_connect_notify(void* self, void* signal) {
    Konsole__UrlFilter_ConnectNotify((Konsole__UrlFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__urlfilter_qbase_connect_notify(void* self, void* signal) {
    Konsole__UrlFilter_QBaseConnectNotify((Konsole__UrlFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__urlfilter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnConnectNotify((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_disconnect_notify(void* self, void* signal) {
    Konsole__UrlFilter_DisconnectNotify((Konsole__UrlFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__urlfilter_qbase_disconnect_notify(void* self, void* signal) {
    Konsole__UrlFilter_QBaseDisconnectNotify((Konsole__UrlFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__urlfilter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnDisconnectNotify((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_add_hot_spot(void* self, void* param1) {
    Konsole__UrlFilter_AddHotSpot((Konsole__UrlFilter*)self, (Konsole__Filter__HotSpot*)param1);
}

void k_onsole__urlfilter_qbase_add_hot_spot(void* self, void* param1) {
    Konsole__UrlFilter_QBaseAddHotSpot((Konsole__UrlFilter*)self, (Konsole__Filter__HotSpot*)param1);
}

void k_onsole__urlfilter_on_add_hot_spot(void* self, void (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnAddHotSpot((Konsole__UrlFilter*)self, (intptr_t)callback);
}

const char* k_onsole__urlfilter_buffer(void* self) {
    libqt_string _str = Konsole__UrlFilter_Buffer((Konsole__UrlFilter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__urlfilter_qbase_buffer(void* self) {
    libqt_string _str = Konsole__UrlFilter_QBaseBuffer((Konsole__UrlFilter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__urlfilter_on_buffer(void* self, const char* (*callback)()) {
    Konsole__UrlFilter_OnBuffer((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_get_line_column(void* self, int position, int* startLine, int* startColumn) {
    Konsole__UrlFilter_GetLineColumn((Konsole__UrlFilter*)self, position, startLine, startColumn);
}

void k_onsole__urlfilter_qbase_get_line_column(void* self, int position, int* startLine, int* startColumn) {
    Konsole__UrlFilter_QBaseGetLineColumn((Konsole__UrlFilter*)self, position, startLine, startColumn);
}

void k_onsole__urlfilter_on_get_line_column(void* self, void (*callback)(void*, int, int*, int*)) {
    Konsole__UrlFilter_OnGetLineColumn((Konsole__UrlFilter*)self, (intptr_t)callback);
}

QObject* k_onsole__urlfilter_sender(void* self) {
    return Konsole__UrlFilter_Sender((Konsole__UrlFilter*)self);
}

QObject* k_onsole__urlfilter_qbase_sender(void* self) {
    return Konsole__UrlFilter_QBaseSender((Konsole__UrlFilter*)self);
}

void k_onsole__urlfilter_on_sender(void* self, QObject* (*callback)()) {
    Konsole__UrlFilter_OnSender((Konsole__UrlFilter*)self, (intptr_t)callback);
}

int32_t k_onsole__urlfilter_sender_signal_index(void* self) {
    return Konsole__UrlFilter_SenderSignalIndex((Konsole__UrlFilter*)self);
}

int32_t k_onsole__urlfilter_qbase_sender_signal_index(void* self) {
    return Konsole__UrlFilter_QBaseSenderSignalIndex((Konsole__UrlFilter*)self);
}

void k_onsole__urlfilter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Konsole__UrlFilter_OnSenderSignalIndex((Konsole__UrlFilter*)self, (intptr_t)callback);
}

int32_t k_onsole__urlfilter_receivers(void* self, const char* signal) {
    return Konsole__UrlFilter_Receivers((Konsole__UrlFilter*)self, signal);
}

int32_t k_onsole__urlfilter_qbase_receivers(void* self, const char* signal) {
    return Konsole__UrlFilter_QBaseReceivers((Konsole__UrlFilter*)self, signal);
}

void k_onsole__urlfilter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Konsole__UrlFilter_OnReceivers((Konsole__UrlFilter*)self, (intptr_t)callback);
}

bool k_onsole__urlfilter_is_signal_connected(void* self, void* signal) {
    return Konsole__UrlFilter_IsSignalConnected((Konsole__UrlFilter*)self, (QMetaMethod*)signal);
}

bool k_onsole__urlfilter_qbase_is_signal_connected(void* self, void* signal) {
    return Konsole__UrlFilter_QBaseIsSignalConnected((Konsole__UrlFilter*)self, (QMetaMethod*)signal);
}

void k_onsole__urlfilter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Konsole__UrlFilter_OnIsSignalConnected((Konsole__UrlFilter*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_onsole__urlfilter_delete(void* self) {
    Konsole__UrlFilter_Delete((Konsole__UrlFilter*)(self));
}

Konsole__FilterObject* k_onsole__filterobject_new(void* filter) {
    return Konsole__FilterObject_new((Konsole__Filter__HotSpot*)filter);
}

const QMetaObject* k_onsole__filterobject_meta_object(void* self) {
    return Konsole__FilterObject_MetaObject((Konsole__FilterObject*)self);
}

void* k_onsole__filterobject_metacast(void* self, const char* param1) {
    return Konsole__FilterObject_Metacast((Konsole__FilterObject*)self, param1);
}

int32_t k_onsole__filterobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__FilterObject_Metacall((Konsole__FilterObject*)self, param1, param2, param3);
}

void k_onsole__filterobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Konsole__FilterObject_OnMetacall((Konsole__FilterObject*)self, (intptr_t)callback);
}

int32_t k_onsole__filterobject_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__FilterObject_QBaseMetacall((Konsole__FilterObject*)self, param1, param2, param3);
}

const char* k_onsole__filterobject_tr(const char* s) {
    libqt_string _str = Konsole__FilterObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__filterobject_emit_activated(void* self, void* url, bool fromContextMenu) {
    Konsole__FilterObject_EmitActivated((Konsole__FilterObject*)self, (QUrl*)url, fromContextMenu);
}

void k_onsole__filterobject_activate(void* self) {
    Konsole__FilterObject_Activate((Konsole__FilterObject*)self);
}

void k_onsole__filterobject_activated(void* self, void* url, bool fromContextMenu) {
    Konsole__FilterObject_Activated((Konsole__FilterObject*)self, (QUrl*)url, fromContextMenu);
}

void k_onsole__filterobject_on_activated(void* self, void (*callback)(void*, void*, bool)) {
    Konsole__FilterObject_Connect_Activated((Konsole__FilterObject*)self, (intptr_t)callback);
}

const char* k_onsole__filterobject_tr2(const char* s, const char* c) {
    libqt_string _str = Konsole__FilterObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__filterobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Konsole__FilterObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__filterobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__filterobject_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_onsole__filterobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_onsole__filterobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_onsole__filterobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_onsole__filterobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_onsole__filterobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_onsole__filterobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_onsole__filterobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_onsole__filterobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_onsole__filterobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_onsole__filterobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_onsole__filterobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_onsole__filterobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_onsole__filterobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_onsole__filterobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_onsole__filterobject_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_onsole__filterobject_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_onsole__filterobject_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_onsole__filterobject_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_onsole__filterobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_onsole__filterobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_onsole__filterobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_onsole__filterobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_onsole__filterobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__filterobject_dynamic_property_names");
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

QBindingStorage* k_onsole__filterobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_onsole__filterobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_onsole__filterobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_onsole__filterobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_onsole__filterobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_onsole__filterobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_onsole__filterobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_onsole__filterobject_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_onsole__filterobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_onsole__filterobject_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_onsole__filterobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_onsole__filterobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_onsole__filterobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_onsole__filterobject_event(void* self, void* event) {
    return Konsole__FilterObject_Event((Konsole__FilterObject*)self, (QEvent*)event);
}

bool k_onsole__filterobject_qbase_event(void* self, void* event) {
    return Konsole__FilterObject_QBaseEvent((Konsole__FilterObject*)self, (QEvent*)event);
}

void k_onsole__filterobject_on_event(void* self, bool (*callback)(void*, void*)) {
    Konsole__FilterObject_OnEvent((Konsole__FilterObject*)self, (intptr_t)callback);
}

bool k_onsole__filterobject_event_filter(void* self, void* watched, void* event) {
    return Konsole__FilterObject_EventFilter((Konsole__FilterObject*)self, (QObject*)watched, (QEvent*)event);
}

bool k_onsole__filterobject_qbase_event_filter(void* self, void* watched, void* event) {
    return Konsole__FilterObject_QBaseEventFilter((Konsole__FilterObject*)self, (QObject*)watched, (QEvent*)event);
}

void k_onsole__filterobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Konsole__FilterObject_OnEventFilter((Konsole__FilterObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_timer_event(void* self, void* event) {
    Konsole__FilterObject_TimerEvent((Konsole__FilterObject*)self, (QTimerEvent*)event);
}

void k_onsole__filterobject_qbase_timer_event(void* self, void* event) {
    Konsole__FilterObject_QBaseTimerEvent((Konsole__FilterObject*)self, (QTimerEvent*)event);
}

void k_onsole__filterobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Konsole__FilterObject_OnTimerEvent((Konsole__FilterObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_child_event(void* self, void* event) {
    Konsole__FilterObject_ChildEvent((Konsole__FilterObject*)self, (QChildEvent*)event);
}

void k_onsole__filterobject_qbase_child_event(void* self, void* event) {
    Konsole__FilterObject_QBaseChildEvent((Konsole__FilterObject*)self, (QChildEvent*)event);
}

void k_onsole__filterobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    Konsole__FilterObject_OnChildEvent((Konsole__FilterObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_custom_event(void* self, void* event) {
    Konsole__FilterObject_CustomEvent((Konsole__FilterObject*)self, (QEvent*)event);
}

void k_onsole__filterobject_qbase_custom_event(void* self, void* event) {
    Konsole__FilterObject_QBaseCustomEvent((Konsole__FilterObject*)self, (QEvent*)event);
}

void k_onsole__filterobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Konsole__FilterObject_OnCustomEvent((Konsole__FilterObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_connect_notify(void* self, void* signal) {
    Konsole__FilterObject_ConnectNotify((Konsole__FilterObject*)self, (QMetaMethod*)signal);
}

void k_onsole__filterobject_qbase_connect_notify(void* self, void* signal) {
    Konsole__FilterObject_QBaseConnectNotify((Konsole__FilterObject*)self, (QMetaMethod*)signal);
}

void k_onsole__filterobject_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__FilterObject_OnConnectNotify((Konsole__FilterObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_disconnect_notify(void* self, void* signal) {
    Konsole__FilterObject_DisconnectNotify((Konsole__FilterObject*)self, (QMetaMethod*)signal);
}

void k_onsole__filterobject_qbase_disconnect_notify(void* self, void* signal) {
    Konsole__FilterObject_QBaseDisconnectNotify((Konsole__FilterObject*)self, (QMetaMethod*)signal);
}

void k_onsole__filterobject_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__FilterObject_OnDisconnectNotify((Konsole__FilterObject*)self, (intptr_t)callback);
}

QObject* k_onsole__filterobject_sender(void* self) {
    return Konsole__FilterObject_Sender((Konsole__FilterObject*)self);
}

QObject* k_onsole__filterobject_qbase_sender(void* self) {
    return Konsole__FilterObject_QBaseSender((Konsole__FilterObject*)self);
}

void k_onsole__filterobject_on_sender(void* self, QObject* (*callback)()) {
    Konsole__FilterObject_OnSender((Konsole__FilterObject*)self, (intptr_t)callback);
}

int32_t k_onsole__filterobject_sender_signal_index(void* self) {
    return Konsole__FilterObject_SenderSignalIndex((Konsole__FilterObject*)self);
}

int32_t k_onsole__filterobject_qbase_sender_signal_index(void* self) {
    return Konsole__FilterObject_QBaseSenderSignalIndex((Konsole__FilterObject*)self);
}

void k_onsole__filterobject_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Konsole__FilterObject_OnSenderSignalIndex((Konsole__FilterObject*)self, (intptr_t)callback);
}

int32_t k_onsole__filterobject_receivers(void* self, const char* signal) {
    return Konsole__FilterObject_Receivers((Konsole__FilterObject*)self, signal);
}

int32_t k_onsole__filterobject_qbase_receivers(void* self, const char* signal) {
    return Konsole__FilterObject_QBaseReceivers((Konsole__FilterObject*)self, signal);
}

void k_onsole__filterobject_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Konsole__FilterObject_OnReceivers((Konsole__FilterObject*)self, (intptr_t)callback);
}

bool k_onsole__filterobject_is_signal_connected(void* self, void* signal) {
    return Konsole__FilterObject_IsSignalConnected((Konsole__FilterObject*)self, (QMetaMethod*)signal);
}

bool k_onsole__filterobject_qbase_is_signal_connected(void* self, void* signal) {
    return Konsole__FilterObject_QBaseIsSignalConnected((Konsole__FilterObject*)self, (QMetaMethod*)signal);
}

void k_onsole__filterobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Konsole__FilterObject_OnIsSignalConnected((Konsole__FilterObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_onsole__filterobject_delete(void* self) {
    Konsole__FilterObject_Delete((Konsole__FilterObject*)(self));
}

Konsole__FilterChain* k_onsole__filterchain_new(void* param1) {
    return Konsole__FilterChain_new((Konsole__FilterChain*)param1);
}

void k_onsole__filterchain_add_filter(void* self, void* filter) {
    Konsole__FilterChain_AddFilter((Konsole__FilterChain*)self, (Konsole__Filter*)filter);
}

void k_onsole__filterchain_remove_filter(void* self, void* filter) {
    Konsole__FilterChain_RemoveFilter((Konsole__FilterChain*)self, (Konsole__Filter*)filter);
}

bool k_onsole__filterchain_contains_filter(void* self, void* filter) {
    return Konsole__FilterChain_ContainsFilter((Konsole__FilterChain*)self, (Konsole__Filter*)filter);
}

void k_onsole__filterchain_clear(void* self) {
    Konsole__FilterChain_Clear((Konsole__FilterChain*)self);
}

void k_onsole__filterchain_reset(void* self) {
    Konsole__FilterChain_Reset((Konsole__FilterChain*)self);
}

void k_onsole__filterchain_process(void* self) {
    Konsole__FilterChain_Process((Konsole__FilterChain*)self);
}

Konsole__Filter__HotSpot* k_onsole__filterchain_hot_spot_at(void* self, int line, int column) {
    return Konsole__FilterChain_HotSpotAt((Konsole__FilterChain*)self, line, column);
}

libqt_list /* of Konsole__Filter__HotSpot* */ k_onsole__filterchain_hot_spots(void* self) {
    libqt_list _arr = Konsole__FilterChain_HotSpots((Konsole__FilterChain*)self);
    return _arr;
}

void k_onsole__filterchain_operator_assign(void* self, void* param1) {
    Konsole__FilterChain_OperatorAssign((Konsole__FilterChain*)self, (Konsole__FilterChain*)param1);
}

void k_onsole__filterchain_delete(void* self) {
    Konsole__FilterChain_Delete((Konsole__FilterChain*)(self));
}

Konsole__TerminalImageFilterChain* k_onsole__terminalimagefilterchain_new() {
    return Konsole__TerminalImageFilterChain_new();
}

Konsole__TerminalImageFilterChain* k_onsole__terminalimagefilterchain_new2(void* param1) {
    return Konsole__TerminalImageFilterChain_new2((Konsole__TerminalImageFilterChain*)param1);
}

void k_onsole__terminalimagefilterchain_add_filter(void* self, void* filter) {
    Konsole__FilterChain_AddFilter((Konsole__FilterChain*)self, (Konsole__Filter*)filter);
}

void k_onsole__terminalimagefilterchain_remove_filter(void* self, void* filter) {
    Konsole__FilterChain_RemoveFilter((Konsole__FilterChain*)self, (Konsole__Filter*)filter);
}

bool k_onsole__terminalimagefilterchain_contains_filter(void* self, void* filter) {
    return Konsole__FilterChain_ContainsFilter((Konsole__FilterChain*)self, (Konsole__Filter*)filter);
}

void k_onsole__terminalimagefilterchain_clear(void* self) {
    Konsole__FilterChain_Clear((Konsole__FilterChain*)self);
}

void k_onsole__terminalimagefilterchain_reset(void* self) {
    Konsole__FilterChain_Reset((Konsole__FilterChain*)self);
}

void k_onsole__terminalimagefilterchain_process(void* self) {
    Konsole__FilterChain_Process((Konsole__FilterChain*)self);
}

Konsole__Filter__HotSpot* k_onsole__terminalimagefilterchain_hot_spot_at(void* self, int line, int column) {
    return Konsole__FilterChain_HotSpotAt((Konsole__FilterChain*)self, line, column);
}

libqt_list /* of Konsole__Filter__HotSpot* */ k_onsole__terminalimagefilterchain_hot_spots(void* self) {
    libqt_list _arr = Konsole__FilterChain_HotSpots((Konsole__FilterChain*)self);
    return _arr;
}

void k_onsole__terminalimagefilterchain_operator_assign(void* self, void* param1) {
    Konsole__FilterChain_OperatorAssign((Konsole__FilterChain*)self, (Konsole__FilterChain*)param1);
}

void k_onsole__terminalimagefilterchain_delete(void* self) {
    Konsole__TerminalImageFilterChain_Delete((Konsole__TerminalImageFilterChain*)(self));
}

Konsole__Filter__HotSpot* k_onsole__filter__hotspot_new(int startLine, int startColumn, int endLine, int endColumn) {
    return Konsole__Filter__HotSpot_new(startLine, startColumn, endLine, endColumn);
}

Konsole__Filter__HotSpot* k_onsole__filter__hotspot_new2(void* param1) {
    return Konsole__Filter__HotSpot_new2((Konsole__Filter__HotSpot*)param1);
}

int32_t k_onsole__filter__hotspot_start_line(void* self) {
    return Konsole__Filter__HotSpot_StartLine((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__filter__hotspot_end_line(void* self) {
    return Konsole__Filter__HotSpot_EndLine((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__filter__hotspot_start_column(void* self) {
    return Konsole__Filter__HotSpot_StartColumn((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__filter__hotspot_end_column(void* self) {
    return Konsole__Filter__HotSpot_EndColumn((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__filter__hotspot_type(void* self) {
    return Konsole__Filter__HotSpot_Type((Konsole__Filter__HotSpot*)self);
}

void k_onsole__filter__hotspot_activate(void* self, const char* action) {
    Konsole__Filter__HotSpot_Activate((Konsole__Filter__HotSpot*)self, qstring(action));
}

void k_onsole__filter__hotspot_on_activate(void* self, void (*callback)(void*, const char*)) {
    Konsole__Filter__HotSpot_OnActivate((Konsole__Filter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__filter__hotspot_qbase_activate(void* self, const char* action) {
    Konsole__Filter__HotSpot_QBaseActivate((Konsole__Filter__HotSpot*)self, qstring(action));
}

libqt_list /* of QAction* */ k_onsole__filter__hotspot_actions(void* self) {
    libqt_list _arr = Konsole__Filter__HotSpot_Actions((Konsole__Filter__HotSpot*)self);
    return _arr;
}

void k_onsole__filter__hotspot_on_actions(void* self, QAction** (*callback)()) {
    Konsole__Filter__HotSpot_OnActions((Konsole__Filter__HotSpot*)self, (intptr_t)callback);
}

libqt_list /* of QAction* */ k_onsole__filter__hotspot_qbase_actions(void* self) {
    libqt_list _arr = Konsole__Filter__HotSpot_QBaseActions((Konsole__Filter__HotSpot*)self);
    return _arr;
}

void k_onsole__filter__hotspot_set_type(void* self, int32_t type) {
    Konsole__Filter__HotSpot_SetType((Konsole__Filter__HotSpot*)self, type);
}

void k_onsole__filter__hotspot_on_set_type(void* self, void (*callback)(void*, int32_t)) {
    Konsole__Filter__HotSpot_OnSetType((Konsole__Filter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__filter__hotspot_qbase_set_type(void* self, int32_t type) {
    Konsole__Filter__HotSpot_QBaseSetType((Konsole__Filter__HotSpot*)self, type);
}

void k_onsole__filter__hotspot_delete(void* self) {
    Konsole__Filter__HotSpot_Delete((Konsole__Filter__HotSpot*)(self));
}

Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter__hotspot_new(int startLine, int startColumn, int endLine, int endColumn) {
    return Konsole__RegExpFilter__HotSpot_new(startLine, startColumn, endLine, endColumn);
}

Konsole__RegExpFilter__HotSpot* k_onsole__regexpfilter__hotspot_new2(void* param1) {
    return Konsole__RegExpFilter__HotSpot_new2((Konsole__RegExpFilter__HotSpot*)param1);
}

void k_onsole__regexpfilter__hotspot_activate(void* self, const char* action) {
    Konsole__RegExpFilter__HotSpot_Activate((Konsole__RegExpFilter__HotSpot*)self, qstring(action));
}

void k_onsole__regexpfilter__hotspot_on_activate(void* self, void (*callback)(void*, const char*)) {
    Konsole__RegExpFilter__HotSpot_OnActivate((Konsole__RegExpFilter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter__hotspot_qbase_activate(void* self, const char* action) {
    Konsole__RegExpFilter__HotSpot_QBaseActivate((Konsole__RegExpFilter__HotSpot*)self, qstring(action));
}

void k_onsole__regexpfilter__hotspot_set_captured_texts(void* self, const char* texts[]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__regexpfilter__hotspot_set_captured_texts");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    Konsole__RegExpFilter__HotSpot_SetCapturedTexts((Konsole__RegExpFilter__HotSpot*)self, texts_list);
    free(texts_qstr);
}

const char** k_onsole__regexpfilter__hotspot_captured_texts(void* self) {
    libqt_list _arr = Konsole__RegExpFilter__HotSpot_CapturedTexts((Konsole__RegExpFilter__HotSpot*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__regexpfilter__hotspot_captured_texts");
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

int32_t k_onsole__regexpfilter__hotspot_start_line(void* self) {
    return Konsole__Filter__HotSpot_StartLine((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__regexpfilter__hotspot_end_line(void* self) {
    return Konsole__Filter__HotSpot_EndLine((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__regexpfilter__hotspot_start_column(void* self) {
    return Konsole__Filter__HotSpot_StartColumn((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__regexpfilter__hotspot_end_column(void* self) {
    return Konsole__Filter__HotSpot_EndColumn((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__regexpfilter__hotspot_type(void* self) {
    return Konsole__Filter__HotSpot_Type((Konsole__Filter__HotSpot*)self);
}

libqt_list /* of QAction* */ k_onsole__regexpfilter__hotspot_actions(void* self) {
    libqt_list _arr = Konsole__RegExpFilter__HotSpot_Actions((Konsole__RegExpFilter__HotSpot*)self);
    return _arr;
}

libqt_list /* of QAction* */ k_onsole__regexpfilter__hotspot_qbase_actions(void* self) {
    libqt_list _arr = Konsole__RegExpFilter__HotSpot_QBaseActions((Konsole__RegExpFilter__HotSpot*)self);
    return _arr;
}

void k_onsole__regexpfilter__hotspot_on_actions(void* self, QAction** (*callback)()) {
    Konsole__RegExpFilter__HotSpot_OnActions((Konsole__RegExpFilter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter__hotspot_set_type(void* self, int32_t type) {
    Konsole__RegExpFilter__HotSpot_SetType((Konsole__RegExpFilter__HotSpot*)self, type);
}

void k_onsole__regexpfilter__hotspot_qbase_set_type(void* self, int32_t type) {
    Konsole__RegExpFilter__HotSpot_QBaseSetType((Konsole__RegExpFilter__HotSpot*)self, type);
}

void k_onsole__regexpfilter__hotspot_on_set_type(void* self, void (*callback)(void*, int32_t)) {
    Konsole__RegExpFilter__HotSpot_OnSetType((Konsole__RegExpFilter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__regexpfilter__hotspot_delete(void* self) {
    Konsole__RegExpFilter__HotSpot_Delete((Konsole__RegExpFilter__HotSpot*)(self));
}

Konsole__UrlFilter__HotSpot* k_onsole__urlfilter__hotspot_new(int startLine, int startColumn, int endLine, int endColumn) {
    return Konsole__UrlFilter__HotSpot_new(startLine, startColumn, endLine, endColumn);
}

Konsole__FilterObject* k_onsole__urlfilter__hotspot_get_url_object(void* self) {
    return Konsole__UrlFilter__HotSpot_GetUrlObject((Konsole__UrlFilter__HotSpot*)self);
}

libqt_list /* of QAction* */ k_onsole__urlfilter__hotspot_actions(void* self) {
    libqt_list _arr = Konsole__UrlFilter__HotSpot_Actions((Konsole__UrlFilter__HotSpot*)self);
    return _arr;
}

void k_onsole__urlfilter__hotspot_on_actions(void* self, QAction** (*callback)()) {
    Konsole__UrlFilter__HotSpot_OnActions((Konsole__UrlFilter__HotSpot*)self, (intptr_t)callback);
}

libqt_list /* of QAction* */ k_onsole__urlfilter__hotspot_qbase_actions(void* self) {
    libqt_list _arr = Konsole__UrlFilter__HotSpot_QBaseActions((Konsole__UrlFilter__HotSpot*)self);
    return _arr;
}

void k_onsole__urlfilter__hotspot_activate(void* self, const char* action) {
    Konsole__UrlFilter__HotSpot_Activate((Konsole__UrlFilter__HotSpot*)self, qstring(action));
}

void k_onsole__urlfilter__hotspot_on_activate(void* self, void (*callback)(void*, const char*)) {
    Konsole__UrlFilter__HotSpot_OnActivate((Konsole__UrlFilter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__urlfilter__hotspot_qbase_activate(void* self, const char* action) {
    Konsole__UrlFilter__HotSpot_QBaseActivate((Konsole__UrlFilter__HotSpot*)self, qstring(action));
}

void k_onsole__urlfilter__hotspot_set_captured_texts(void* self, const char* texts[]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__urlfilter__hotspot_set_captured_texts");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    Konsole__RegExpFilter__HotSpot_SetCapturedTexts((Konsole__RegExpFilter__HotSpot*)self, texts_list);
    free(texts_qstr);
}

const char** k_onsole__urlfilter__hotspot_captured_texts(void* self) {
    libqt_list _arr = Konsole__RegExpFilter__HotSpot_CapturedTexts((Konsole__RegExpFilter__HotSpot*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__urlfilter__hotspot_captured_texts");
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

int32_t k_onsole__urlfilter__hotspot_start_line(void* self) {
    return Konsole__Filter__HotSpot_StartLine((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__urlfilter__hotspot_end_line(void* self) {
    return Konsole__Filter__HotSpot_EndLine((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__urlfilter__hotspot_start_column(void* self) {
    return Konsole__Filter__HotSpot_StartColumn((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__urlfilter__hotspot_end_column(void* self) {
    return Konsole__Filter__HotSpot_EndColumn((Konsole__Filter__HotSpot*)self);
}

int32_t k_onsole__urlfilter__hotspot_type(void* self) {
    return Konsole__Filter__HotSpot_Type((Konsole__Filter__HotSpot*)self);
}

void k_onsole__urlfilter__hotspot_set_type(void* self, int32_t type) {
    Konsole__UrlFilter__HotSpot_SetType((Konsole__UrlFilter__HotSpot*)self, type);
}

void k_onsole__urlfilter__hotspot_qbase_set_type(void* self, int32_t type) {
    Konsole__UrlFilter__HotSpot_QBaseSetType((Konsole__UrlFilter__HotSpot*)self, type);
}

void k_onsole__urlfilter__hotspot_on_set_type(void* self, void (*callback)(void*, int32_t)) {
    Konsole__UrlFilter__HotSpot_OnSetType((Konsole__UrlFilter__HotSpot*)self, (intptr_t)callback);
}

void k_onsole__urlfilter__hotspot_delete(void* self) {
    Konsole__UrlFilter__HotSpot_Delete((Konsole__UrlFilter__HotSpot*)(self));
}
