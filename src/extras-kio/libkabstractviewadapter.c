#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpalette.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libkabstractviewadapter.hpp"
#include "libkabstractviewadapter.h"

KAbstractViewAdapter* k_abstractviewadapter_new(void* parent) {
    return KAbstractViewAdapter_new((QObject*)parent);
}

QAbstractItemModel* k_abstractviewadapter_model(void* self) {
    return KAbstractViewAdapter_Model((KAbstractViewAdapter*)self);
}

void k_abstractviewadapter_on_model(void* self, QAbstractItemModel* (*callback)()) {
    KAbstractViewAdapter_OnModel((KAbstractViewAdapter*)self, (intptr_t)callback);
}

QAbstractItemModel* k_abstractviewadapter_qbase_model(void* self) {
    return KAbstractViewAdapter_QBaseModel((KAbstractViewAdapter*)self);
}

QSize* k_abstractviewadapter_icon_size(void* self) {
    return KAbstractViewAdapter_IconSize((KAbstractViewAdapter*)self);
}

void k_abstractviewadapter_on_icon_size(void* self, QSize* (*callback)()) {
    KAbstractViewAdapter_OnIconSize((KAbstractViewAdapter*)self, (intptr_t)callback);
}

QSize* k_abstractviewadapter_qbase_icon_size(void* self) {
    return KAbstractViewAdapter_QBaseIconSize((KAbstractViewAdapter*)self);
}

QPalette* k_abstractviewadapter_palette(void* self) {
    return KAbstractViewAdapter_Palette((KAbstractViewAdapter*)self);
}

void k_abstractviewadapter_on_palette(void* self, QPalette* (*callback)()) {
    KAbstractViewAdapter_OnPalette((KAbstractViewAdapter*)self, (intptr_t)callback);
}

QPalette* k_abstractviewadapter_qbase_palette(void* self) {
    return KAbstractViewAdapter_QBasePalette((KAbstractViewAdapter*)self);
}

QRect* k_abstractviewadapter_visible_area(void* self) {
    return KAbstractViewAdapter_VisibleArea((KAbstractViewAdapter*)self);
}

void k_abstractviewadapter_on_visible_area(void* self, QRect* (*callback)()) {
    KAbstractViewAdapter_OnVisibleArea((KAbstractViewAdapter*)self, (intptr_t)callback);
}

QRect* k_abstractviewadapter_qbase_visible_area(void* self) {
    return KAbstractViewAdapter_QBaseVisibleArea((KAbstractViewAdapter*)self);
}

QRect* k_abstractviewadapter_visual_rect(void* self, void* index) {
    return KAbstractViewAdapter_VisualRect((KAbstractViewAdapter*)self, (QModelIndex*)index);
}

void k_abstractviewadapter_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnVisualRect((KAbstractViewAdapter*)self, (intptr_t)callback);
}

QRect* k_abstractviewadapter_qbase_visual_rect(void* self, void* index) {
    return KAbstractViewAdapter_QBaseVisualRect((KAbstractViewAdapter*)self, (QModelIndex*)index);
}

void k_abstractviewadapter_connect(void* self, int32_t signal, void* receiver, const char* slot) {
    KAbstractViewAdapter_Connect((KAbstractViewAdapter*)self, signal, (QObject*)receiver, slot);
}

void k_abstractviewadapter_on_connect(void* self, void (*callback)(void*, int32_t, void*, const char*)) {
    KAbstractViewAdapter_OnConnect((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_qbase_connect(void* self, int32_t signal, void* receiver, const char* slot) {
    KAbstractViewAdapter_QBaseConnect((KAbstractViewAdapter*)self, signal, (QObject*)receiver, slot);
}

const QMetaObject* k_abstractviewadapter_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

void* k_abstractviewadapter_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

const char* k_abstractviewadapter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_abstractviewadapter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_abstractviewadapter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_abstractviewadapter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_abstractviewadapter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_abstractviewadapter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_abstractviewadapter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_abstractviewadapter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_abstractviewadapter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_abstractviewadapter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_abstractviewadapter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_abstractviewadapter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_abstractviewadapter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_abstractviewadapter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_abstractviewadapter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_abstractviewadapter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_abstractviewadapter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_abstractviewadapter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_abstractviewadapter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_abstractviewadapter_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_abstractviewadapter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_abstractviewadapter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_abstractviewadapter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_abstractviewadapter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_abstractviewadapter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_abstractviewadapter_dynamic_property_names");
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

QBindingStorage* k_abstractviewadapter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_abstractviewadapter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_abstractviewadapter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_abstractviewadapter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_abstractviewadapter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_abstractviewadapter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_abstractviewadapter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

const char* k_abstractviewadapter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_abstractviewadapter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_abstractviewadapter_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_abstractviewadapter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_abstractviewadapter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_abstractviewadapter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_abstractviewadapter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_abstractviewadapter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_abstractviewadapter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAbstractViewAdapter_Metacall((KAbstractViewAdapter*)self, param1, param2, param3);
}

int32_t k_abstractviewadapter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAbstractViewAdapter_QBaseMetacall((KAbstractViewAdapter*)self, param1, param2, param3);
}

void k_abstractviewadapter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KAbstractViewAdapter_OnMetacall((KAbstractViewAdapter*)self, (intptr_t)callback);
}

bool k_abstractviewadapter_event(void* self, void* event) {
    return KAbstractViewAdapter_Event((KAbstractViewAdapter*)self, (QEvent*)event);
}

bool k_abstractviewadapter_qbase_event(void* self, void* event) {
    return KAbstractViewAdapter_QBaseEvent((KAbstractViewAdapter*)self, (QEvent*)event);
}

void k_abstractviewadapter_on_event(void* self, bool (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnEvent((KAbstractViewAdapter*)self, (intptr_t)callback);
}

bool k_abstractviewadapter_event_filter(void* self, void* watched, void* event) {
    return KAbstractViewAdapter_EventFilter((KAbstractViewAdapter*)self, (QObject*)watched, (QEvent*)event);
}

bool k_abstractviewadapter_qbase_event_filter(void* self, void* watched, void* event) {
    return KAbstractViewAdapter_QBaseEventFilter((KAbstractViewAdapter*)self, (QObject*)watched, (QEvent*)event);
}

void k_abstractviewadapter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KAbstractViewAdapter_OnEventFilter((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_timer_event(void* self, void* event) {
    KAbstractViewAdapter_TimerEvent((KAbstractViewAdapter*)self, (QTimerEvent*)event);
}

void k_abstractviewadapter_qbase_timer_event(void* self, void* event) {
    KAbstractViewAdapter_QBaseTimerEvent((KAbstractViewAdapter*)self, (QTimerEvent*)event);
}

void k_abstractviewadapter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnTimerEvent((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_child_event(void* self, void* event) {
    KAbstractViewAdapter_ChildEvent((KAbstractViewAdapter*)self, (QChildEvent*)event);
}

void k_abstractviewadapter_qbase_child_event(void* self, void* event) {
    KAbstractViewAdapter_QBaseChildEvent((KAbstractViewAdapter*)self, (QChildEvent*)event);
}

void k_abstractviewadapter_on_child_event(void* self, void (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnChildEvent((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_custom_event(void* self, void* event) {
    KAbstractViewAdapter_CustomEvent((KAbstractViewAdapter*)self, (QEvent*)event);
}

void k_abstractviewadapter_qbase_custom_event(void* self, void* event) {
    KAbstractViewAdapter_QBaseCustomEvent((KAbstractViewAdapter*)self, (QEvent*)event);
}

void k_abstractviewadapter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnCustomEvent((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_connect_notify(void* self, void* signal) {
    KAbstractViewAdapter_ConnectNotify((KAbstractViewAdapter*)self, (QMetaMethod*)signal);
}

void k_abstractviewadapter_qbase_connect_notify(void* self, void* signal) {
    KAbstractViewAdapter_QBaseConnectNotify((KAbstractViewAdapter*)self, (QMetaMethod*)signal);
}

void k_abstractviewadapter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnConnectNotify((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_disconnect_notify(void* self, void* signal) {
    KAbstractViewAdapter_DisconnectNotify((KAbstractViewAdapter*)self, (QMetaMethod*)signal);
}

void k_abstractviewadapter_qbase_disconnect_notify(void* self, void* signal) {
    KAbstractViewAdapter_QBaseDisconnectNotify((KAbstractViewAdapter*)self, (QMetaMethod*)signal);
}

void k_abstractviewadapter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnDisconnectNotify((KAbstractViewAdapter*)self, (intptr_t)callback);
}

QObject* k_abstractviewadapter_sender(void* self) {
    return KAbstractViewAdapter_Sender((KAbstractViewAdapter*)self);
}

QObject* k_abstractviewadapter_qbase_sender(void* self) {
    return KAbstractViewAdapter_QBaseSender((KAbstractViewAdapter*)self);
}

void k_abstractviewadapter_on_sender(void* self, QObject* (*callback)()) {
    KAbstractViewAdapter_OnSender((KAbstractViewAdapter*)self, (intptr_t)callback);
}

int32_t k_abstractviewadapter_sender_signal_index(void* self) {
    return KAbstractViewAdapter_SenderSignalIndex((KAbstractViewAdapter*)self);
}

int32_t k_abstractviewadapter_qbase_sender_signal_index(void* self) {
    return KAbstractViewAdapter_QBaseSenderSignalIndex((KAbstractViewAdapter*)self);
}

void k_abstractviewadapter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KAbstractViewAdapter_OnSenderSignalIndex((KAbstractViewAdapter*)self, (intptr_t)callback);
}

int32_t k_abstractviewadapter_receivers(void* self, const char* signal) {
    return KAbstractViewAdapter_Receivers((KAbstractViewAdapter*)self, signal);
}

int32_t k_abstractviewadapter_qbase_receivers(void* self, const char* signal) {
    return KAbstractViewAdapter_QBaseReceivers((KAbstractViewAdapter*)self, signal);
}

void k_abstractviewadapter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KAbstractViewAdapter_OnReceivers((KAbstractViewAdapter*)self, (intptr_t)callback);
}

bool k_abstractviewadapter_is_signal_connected(void* self, void* signal) {
    return KAbstractViewAdapter_IsSignalConnected((KAbstractViewAdapter*)self, (QMetaMethod*)signal);
}

bool k_abstractviewadapter_qbase_is_signal_connected(void* self, void* signal) {
    return KAbstractViewAdapter_QBaseIsSignalConnected((KAbstractViewAdapter*)self, (QMetaMethod*)signal);
}

void k_abstractviewadapter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KAbstractViewAdapter_OnIsSignalConnected((KAbstractViewAdapter*)self, (intptr_t)callback);
}

void k_abstractviewadapter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_abstractviewadapter_delete(void* self) {
    KAbstractViewAdapter_Delete((KAbstractViewAdapter*)(self));
}
