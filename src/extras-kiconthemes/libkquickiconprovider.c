#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpixmap.hpp"
#include "../qml/libqqmlengine.hpp"
#include "../quick/libqquickimageprovider.hpp"
#include "../libqsize.hpp"
#include "libkquickiconprovider.hpp"
#include "libkquickiconprovider.h"

KQuickIconProvider* k_quickiconprovider_new() {
    return KQuickIconProvider_New();
}

QPixmap* k_quickiconprovider_request_pixmap(void* self, const char* id, void* size, void* requestedSize) {
    return KQuickIconProvider_RequestPixmap((KQuickIconProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void k_quickiconprovider_on_request_pixmap(void* self, QPixmap* (*callback)(void*, const char*, void*, void*)) {
    KQuickIconProvider_OnRequestPixmap((KQuickIconProvider*)self, (intptr_t)callback);
}

QPixmap* k_quickiconprovider_super_request_pixmap(void* self, const char* id, void* size, void* requestedSize) {
    return KQuickIconProvider_SuperRequestPixmap((KQuickIconProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

const char* k_quickiconprovider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_quickiconprovider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_quickiconprovider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_quickiconprovider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_quickiconprovider_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_quickiconprovider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_quickiconprovider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_quickiconprovider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_quickiconprovider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_quickiconprovider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_quickiconprovider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_quickiconprovider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_quickiconprovider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_quickiconprovider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_quickiconprovider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_quickiconprovider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_quickiconprovider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_quickiconprovider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_quickiconprovider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_quickiconprovider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_quickiconprovider_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_quickiconprovider_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_quickiconprovider_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_quickiconprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_quickiconprovider_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_quickiconprovider_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_quickiconprovider_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_quickiconprovider_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_quickiconprovider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_quickiconprovider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_quickiconprovider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_quickiconprovider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_quickiconprovider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_quickiconprovider_dynamic_property_names\n");
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

QBindingStorage* k_quickiconprovider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_quickiconprovider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_quickiconprovider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_quickiconprovider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_quickiconprovider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_quickiconprovider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_quickiconprovider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_quickiconprovider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_quickiconprovider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_quickiconprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_quickiconprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_quickiconprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_quickiconprovider_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_quickiconprovider_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_quickiconprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_quickiconprovider_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_quickiconprovider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_quickiconprovider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const QMetaObject* k_quickiconprovider_meta_object(void* self) {
    return KQuickIconProvider_MetaObject((KQuickIconProvider*)self);
}

const QMetaObject* k_quickiconprovider_super_meta_object(void* self) {
    return KQuickIconProvider_SuperMetaObject((KQuickIconProvider*)self);
}

void k_quickiconprovider_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KQuickIconProvider_OnMetaObject((KQuickIconProvider*)self, (intptr_t)callback);
}

void* k_quickiconprovider_metacast(void* self, const char* param1) {
    return KQuickIconProvider_Metacast((KQuickIconProvider*)self, param1);
}

void* k_quickiconprovider_super_metacast(void* self, const char* param1) {
    return KQuickIconProvider_SuperMetacast((KQuickIconProvider*)self, param1);
}

void k_quickiconprovider_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KQuickIconProvider_OnMetacast((KQuickIconProvider*)self, (intptr_t)callback);
}

int32_t k_quickiconprovider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KQuickIconProvider_Metacall((KQuickIconProvider*)self, param1, param2, param3);
}

int32_t k_quickiconprovider_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KQuickIconProvider_SuperMetacall((KQuickIconProvider*)self, param1, param2, param3);
}

void k_quickiconprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KQuickIconProvider_OnMetacall((KQuickIconProvider*)self, (intptr_t)callback);
}

int32_t k_quickiconprovider_image_type(void* self) {
    return KQuickIconProvider_ImageType((KQuickIconProvider*)self);
}

int32_t k_quickiconprovider_super_image_type(void* self) {
    return KQuickIconProvider_SuperImageType((KQuickIconProvider*)self);
}

void k_quickiconprovider_on_image_type(void* self, int32_t (*callback)()) {
    KQuickIconProvider_OnImageType((KQuickIconProvider*)self, (intptr_t)callback);
}

int32_t k_quickiconprovider_flags(void* self) {
    return KQuickIconProvider_Flags((KQuickIconProvider*)self);
}

int32_t k_quickiconprovider_super_flags(void* self) {
    return KQuickIconProvider_SuperFlags((KQuickIconProvider*)self);
}

void k_quickiconprovider_on_flags(void* self, int32_t (*callback)()) {
    KQuickIconProvider_OnFlags((KQuickIconProvider*)self, (intptr_t)callback);
}

QImage* k_quickiconprovider_request_image(void* self, const char* id, void* size, void* requestedSize) {
    return KQuickIconProvider_RequestImage((KQuickIconProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QImage* k_quickiconprovider_super_request_image(void* self, const char* id, void* size, void* requestedSize) {
    return KQuickIconProvider_SuperRequestImage((KQuickIconProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void k_quickiconprovider_on_request_image(void* self, QImage* (*callback)(void*, const char*, void*, void*)) {
    KQuickIconProvider_OnRequestImage((KQuickIconProvider*)self, (intptr_t)callback);
}

QQuickTextureFactory* k_quickiconprovider_request_texture(void* self, const char* id, void* size, void* requestedSize) {
    return KQuickIconProvider_RequestTexture((KQuickIconProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QQuickTextureFactory* k_quickiconprovider_super_request_texture(void* self, const char* id, void* size, void* requestedSize) {
    return KQuickIconProvider_SuperRequestTexture((KQuickIconProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void k_quickiconprovider_on_request_texture(void* self, QQuickTextureFactory* (*callback)(void*, const char*, void*, void*)) {
    KQuickIconProvider_OnRequestTexture((KQuickIconProvider*)self, (intptr_t)callback);
}

bool k_quickiconprovider_event(void* self, void* event) {
    return KQuickIconProvider_Event((KQuickIconProvider*)self, (QEvent*)event);
}

bool k_quickiconprovider_super_event(void* self, void* event) {
    return KQuickIconProvider_SuperEvent((KQuickIconProvider*)self, (QEvent*)event);
}

void k_quickiconprovider_on_event(void* self, bool (*callback)(void*, void*)) {
    KQuickIconProvider_OnEvent((KQuickIconProvider*)self, (intptr_t)callback);
}

bool k_quickiconprovider_event_filter(void* self, void* watched, void* event) {
    return KQuickIconProvider_EventFilter((KQuickIconProvider*)self, (QObject*)watched, (QEvent*)event);
}

bool k_quickiconprovider_super_event_filter(void* self, void* watched, void* event) {
    return KQuickIconProvider_SuperEventFilter((KQuickIconProvider*)self, (QObject*)watched, (QEvent*)event);
}

void k_quickiconprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KQuickIconProvider_OnEventFilter((KQuickIconProvider*)self, (intptr_t)callback);
}

void k_quickiconprovider_timer_event(void* self, void* event) {
    KQuickIconProvider_TimerEvent((KQuickIconProvider*)self, (QTimerEvent*)event);
}

void k_quickiconprovider_super_timer_event(void* self, void* event) {
    KQuickIconProvider_SuperTimerEvent((KQuickIconProvider*)self, (QTimerEvent*)event);
}

void k_quickiconprovider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KQuickIconProvider_OnTimerEvent((KQuickIconProvider*)self, (intptr_t)callback);
}

void k_quickiconprovider_child_event(void* self, void* event) {
    KQuickIconProvider_ChildEvent((KQuickIconProvider*)self, (QChildEvent*)event);
}

void k_quickiconprovider_super_child_event(void* self, void* event) {
    KQuickIconProvider_SuperChildEvent((KQuickIconProvider*)self, (QChildEvent*)event);
}

void k_quickiconprovider_on_child_event(void* self, void (*callback)(void*, void*)) {
    KQuickIconProvider_OnChildEvent((KQuickIconProvider*)self, (intptr_t)callback);
}

void k_quickiconprovider_custom_event(void* self, void* event) {
    KQuickIconProvider_CustomEvent((KQuickIconProvider*)self, (QEvent*)event);
}

void k_quickiconprovider_super_custom_event(void* self, void* event) {
    KQuickIconProvider_SuperCustomEvent((KQuickIconProvider*)self, (QEvent*)event);
}

void k_quickiconprovider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KQuickIconProvider_OnCustomEvent((KQuickIconProvider*)self, (intptr_t)callback);
}

void k_quickiconprovider_connect_notify(void* self, void* signal) {
    KQuickIconProvider_ConnectNotify((KQuickIconProvider*)self, (QMetaMethod*)signal);
}

void k_quickiconprovider_super_connect_notify(void* self, void* signal) {
    KQuickIconProvider_SuperConnectNotify((KQuickIconProvider*)self, (QMetaMethod*)signal);
}

void k_quickiconprovider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KQuickIconProvider_OnConnectNotify((KQuickIconProvider*)self, (intptr_t)callback);
}

void k_quickiconprovider_disconnect_notify(void* self, void* signal) {
    KQuickIconProvider_DisconnectNotify((KQuickIconProvider*)self, (QMetaMethod*)signal);
}

void k_quickiconprovider_super_disconnect_notify(void* self, void* signal) {
    KQuickIconProvider_SuperDisconnectNotify((KQuickIconProvider*)self, (QMetaMethod*)signal);
}

void k_quickiconprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KQuickIconProvider_OnDisconnectNotify((KQuickIconProvider*)self, (intptr_t)callback);
}

QObject* k_quickiconprovider_sender(void* self) {
    return KQuickIconProvider_Sender((KQuickIconProvider*)self);
}

QObject* k_quickiconprovider_super_sender(void* self) {
    return KQuickIconProvider_SuperSender((KQuickIconProvider*)self);
}

void k_quickiconprovider_on_sender(void* self, QObject* (*callback)()) {
    KQuickIconProvider_OnSender((KQuickIconProvider*)self, (intptr_t)callback);
}

int32_t k_quickiconprovider_sender_signal_index(void* self) {
    return KQuickIconProvider_SenderSignalIndex((KQuickIconProvider*)self);
}

int32_t k_quickiconprovider_super_sender_signal_index(void* self) {
    return KQuickIconProvider_SuperSenderSignalIndex((KQuickIconProvider*)self);
}

void k_quickiconprovider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KQuickIconProvider_OnSenderSignalIndex((KQuickIconProvider*)self, (intptr_t)callback);
}

int32_t k_quickiconprovider_receivers(void* self, const char* signal) {
    return KQuickIconProvider_Receivers((KQuickIconProvider*)self, signal);
}

int32_t k_quickiconprovider_super_receivers(void* self, const char* signal) {
    return KQuickIconProvider_SuperReceivers((KQuickIconProvider*)self, signal);
}

void k_quickiconprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KQuickIconProvider_OnReceivers((KQuickIconProvider*)self, (intptr_t)callback);
}

bool k_quickiconprovider_is_signal_connected(void* self, void* signal) {
    return KQuickIconProvider_IsSignalConnected((KQuickIconProvider*)self, (QMetaMethod*)signal);
}

bool k_quickiconprovider_super_is_signal_connected(void* self, void* signal) {
    return KQuickIconProvider_SuperIsSignalConnected((KQuickIconProvider*)self, (QMetaMethod*)signal);
}

void k_quickiconprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KQuickIconProvider_OnIsSignalConnected((KQuickIconProvider*)self, (intptr_t)callback);
}

void k_quickiconprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_quickiconprovider_delete(void* self) {
    KQuickIconProvider_Delete((KQuickIconProvider*)(self));
}
