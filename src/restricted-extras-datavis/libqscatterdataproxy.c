#include "libqabstractdataproxy.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqscatter3dseries.hpp"
#include "libqscatterdataitem.hpp"
#include "libqscatterdataproxy.hpp"
#include "libqscatterdataproxy.h"

QScatterDataProxy* q_scatterdataproxy_new() {
    return QScatterDataProxy_New();
}

QScatterDataProxy* q_scatterdataproxy_new2(void* parent) {
    return QScatterDataProxy_New2((QObject*)parent);
}

const QMetaObject* q_scatterdataproxy_meta_object(const void* self) {
    return QScatterDataProxy_MetaObject((QScatterDataProxy*)self);
}

void q_scatterdataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QScatterDataProxy_OnMetaObject((QScatterDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_scatterdataproxy_super_meta_object(const void* self) {
    return QScatterDataProxy_SuperMetaObject((QScatterDataProxy*)self);
}

void* q_scatterdataproxy_metacast(void* self, const char* param1) {
    return QScatterDataProxy_Metacast((QScatterDataProxy*)self, param1);
}

void q_scatterdataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QScatterDataProxy_OnMetacast((QScatterDataProxy*)self, (intptr_t)callback);
}

void* q_scatterdataproxy_super_metacast(void* self, const char* param1) {
    return QScatterDataProxy_SuperMetacast((QScatterDataProxy*)self, param1);
}

int32_t q_scatterdataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScatterDataProxy_Metacall((QScatterDataProxy*)self, param1, param2, param3);
}

void q_scatterdataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QScatterDataProxy_OnMetacall((QScatterDataProxy*)self, (intptr_t)callback);
}

int32_t q_scatterdataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScatterDataProxy_SuperMetacall((QScatterDataProxy*)self, param1, param2, param3);
}

const char* q_scatterdataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QScatter3DSeries* q_scatterdataproxy_series(const void* self) {
    return QScatterDataProxy_Series((QScatterDataProxy*)self);
}

int32_t q_scatterdataproxy_item_count(const void* self) {
    return QScatterDataProxy_ItemCount((QScatterDataProxy*)self);
}

libqt_list /* of QScatterDataItem* */ q_scatterdataproxy_array(const void* self) {
    libqt_list _arr = QScatterDataProxy_Array((QScatterDataProxy*)self);
    return _arr;
}

const QScatterDataItem* q_scatterdataproxy_item_at(const void* self, int index) {
    return QScatterDataProxy_ItemAt((QScatterDataProxy*)self, index);
}

void q_scatterdataproxy_reset_array(void* self, libqt_list /* of QScatterDataItem* */ newArray) {
    QScatterDataProxy_ResetArray((QScatterDataProxy*)self, newArray);
}

void q_scatterdataproxy_set_item(void* self, int index, const void* item) {
    QScatterDataProxy_SetItem((QScatterDataProxy*)self, index, (QScatterDataItem*)item);
}

void q_scatterdataproxy_set_items(void* self, int index, libqt_list /* of QScatterDataItem* */ items) {
    QScatterDataProxy_SetItems((QScatterDataProxy*)self, index, items);
}

int32_t q_scatterdataproxy_add_item(void* self, const void* item) {
    return QScatterDataProxy_AddItem((QScatterDataProxy*)self, (QScatterDataItem*)item);
}

int32_t q_scatterdataproxy_add_items(void* self, libqt_list /* of QScatterDataItem* */ items) {
    return QScatterDataProxy_AddItems((QScatterDataProxy*)self, items);
}

void q_scatterdataproxy_insert_item(void* self, int index, const void* item) {
    QScatterDataProxy_InsertItem((QScatterDataProxy*)self, index, (QScatterDataItem*)item);
}

void q_scatterdataproxy_insert_items(void* self, int index, libqt_list /* of QScatterDataItem* */ items) {
    QScatterDataProxy_InsertItems((QScatterDataProxy*)self, index, items);
}

void q_scatterdataproxy_remove_items(void* self, int index, int removeCount) {
    QScatterDataProxy_RemoveItems((QScatterDataProxy*)self, index, removeCount);
}

void q_scatterdataproxy_array_reset(void* self) {
    QScatterDataProxy_ArrayReset((QScatterDataProxy*)self);
}

void q_scatterdataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QScatterDataProxy_Connect_ArrayReset((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_items_added(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsAdded((QScatterDataProxy*)self, startIndex, count);
}

void q_scatterdataproxy_on_items_added(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsAdded((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_items_changed(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsChanged((QScatterDataProxy*)self, startIndex, count);
}

void q_scatterdataproxy_on_items_changed(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsChanged((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_items_removed(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsRemoved((QScatterDataProxy*)self, startIndex, count);
}

void q_scatterdataproxy_on_items_removed(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsRemoved((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_items_inserted(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsInserted((QScatterDataProxy*)self, startIndex, count);
}

void q_scatterdataproxy_on_items_inserted(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsInserted((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_item_count_changed(void* self, int count) {
    QScatterDataProxy_ItemCountChanged((QScatterDataProxy*)self, count);
}

void q_scatterdataproxy_on_item_count_changed(void* self, void (*callback)(void*, int)) {
    QScatterDataProxy_Connect_ItemCountChanged((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_series_changed(void* self, void* series) {
    QScatterDataProxy_SeriesChanged((QScatterDataProxy*)self, (QScatter3DSeries*)series);
}

void q_scatterdataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QScatterDataProxy_Connect_SeriesChanged((QScatterDataProxy*)self, (intptr_t)callback);
}

const char* q_scatterdataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scatterdataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_scatterdataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_scatterdataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatterdataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scatterdataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scatterdataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scatterdataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scatterdataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scatterdataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scatterdataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scatterdataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scatterdataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scatterdataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scatterdataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scatterdataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scatterdataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scatterdataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scatterdataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scatterdataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scatterdataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scatterdataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scatterdataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scatterdataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scatterdataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scatterdataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scatterdataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scatterdataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scatterdataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scatterdataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scatterdataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scatterdataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scatterdataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scatterdataproxy_dynamic_property_names\n");
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

QBindingStorage* q_scatterdataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scatterdataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scatterdataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scatterdataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scatterdataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scatterdataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scatterdataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scatterdataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scatterdataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scatterdataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scatterdataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scatterdataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scatterdataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scatterdataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scatterdataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scatterdataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scatterdataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scatterdataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_scatterdataproxy_event(void* self, void* event) {
    return QScatterDataProxy_Event((QScatterDataProxy*)self, (QEvent*)event);
}

bool q_scatterdataproxy_super_event(void* self, void* event) {
    return QScatterDataProxy_SuperEvent((QScatterDataProxy*)self, (QEvent*)event);
}

void q_scatterdataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QScatterDataProxy_OnEvent((QScatterDataProxy*)self, (intptr_t)callback);
}

bool q_scatterdataproxy_event_filter(void* self, void* watched, void* event) {
    return QScatterDataProxy_EventFilter((QScatterDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scatterdataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QScatterDataProxy_SuperEventFilter((QScatterDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_scatterdataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QScatterDataProxy_OnEventFilter((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_timer_event(void* self, void* event) {
    QScatterDataProxy_TimerEvent((QScatterDataProxy*)self, (QTimerEvent*)event);
}

void q_scatterdataproxy_super_timer_event(void* self, void* event) {
    QScatterDataProxy_SuperTimerEvent((QScatterDataProxy*)self, (QTimerEvent*)event);
}

void q_scatterdataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QScatterDataProxy_OnTimerEvent((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_child_event(void* self, void* event) {
    QScatterDataProxy_ChildEvent((QScatterDataProxy*)self, (QChildEvent*)event);
}

void q_scatterdataproxy_super_child_event(void* self, void* event) {
    QScatterDataProxy_SuperChildEvent((QScatterDataProxy*)self, (QChildEvent*)event);
}

void q_scatterdataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QScatterDataProxy_OnChildEvent((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_custom_event(void* self, void* event) {
    QScatterDataProxy_CustomEvent((QScatterDataProxy*)self, (QEvent*)event);
}

void q_scatterdataproxy_super_custom_event(void* self, void* event) {
    QScatterDataProxy_SuperCustomEvent((QScatterDataProxy*)self, (QEvent*)event);
}

void q_scatterdataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QScatterDataProxy_OnCustomEvent((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_connect_notify(void* self, const void* signal) {
    QScatterDataProxy_ConnectNotify((QScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_scatterdataproxy_super_connect_notify(void* self, const void* signal) {
    QScatterDataProxy_SuperConnectNotify((QScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_scatterdataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QScatterDataProxy_OnConnectNotify((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_scatterdataproxy_disconnect_notify(void* self, const void* signal) {
    QScatterDataProxy_DisconnectNotify((QScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_scatterdataproxy_super_disconnect_notify(void* self, const void* signal) {
    QScatterDataProxy_SuperDisconnectNotify((QScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_scatterdataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QScatterDataProxy_OnDisconnectNotify((QScatterDataProxy*)self, (intptr_t)callback);
}

QObject* q_scatterdataproxy_sender(const void* self) {
    return QScatterDataProxy_Sender((QScatterDataProxy*)self);
}

int32_t q_scatterdataproxy_sender_signal_index(const void* self) {
    return QScatterDataProxy_SenderSignalIndex((QScatterDataProxy*)self);
}

int32_t q_scatterdataproxy_receivers(const void* self, const char* signal) {
    return QScatterDataProxy_Receivers((QScatterDataProxy*)self, signal);
}

bool q_scatterdataproxy_is_signal_connected(const void* self, const void* signal) {
    return QScatterDataProxy_IsSignalConnected((QScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_scatterdataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scatterdataproxy_delete(void* self) {
    QScatterDataProxy_Delete((QScatterDataProxy*)(self));
}
