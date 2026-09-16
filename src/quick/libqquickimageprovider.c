#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpixmap.hpp"
#include "../qml/libqqmlengine.hpp"
#include "libqquickwindow.hpp"
#include "libqsgtexture.hpp"
#include "../libqsize.hpp"
#include "libqquickimageprovider.hpp"
#include "libqquickimageprovider.h"

QQuickTextureFactory* q_quicktexturefactory_new() {
    return QQuickTextureFactory_New();
}

const QMetaObject* q_quicktexturefactory_meta_object(void* self) {
    return QQuickTextureFactory_MetaObject((QQuickTextureFactory*)self);
}

void q_quicktexturefactory_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickTextureFactory_OnMetaObject((QQuickTextureFactory*)self, (intptr_t)callback);
}

const QMetaObject* q_quicktexturefactory_super_meta_object(void* self) {
    return QQuickTextureFactory_SuperMetaObject((QQuickTextureFactory*)self);
}

void* q_quicktexturefactory_metacast(void* self, const char* param1) {
    return QQuickTextureFactory_Metacast((QQuickTextureFactory*)self, param1);
}

void q_quicktexturefactory_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickTextureFactory_OnMetacast((QQuickTextureFactory*)self, (intptr_t)callback);
}

void* q_quicktexturefactory_super_metacast(void* self, const char* param1) {
    return QQuickTextureFactory_SuperMetacast((QQuickTextureFactory*)self, param1);
}

int32_t q_quicktexturefactory_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickTextureFactory_Metacall((QQuickTextureFactory*)self, param1, param2, param3);
}

void q_quicktexturefactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickTextureFactory_OnMetacall((QQuickTextureFactory*)self, (intptr_t)callback);
}

int32_t q_quicktexturefactory_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickTextureFactory_SuperMetacall((QQuickTextureFactory*)self, param1, param2, param3);
}

const char* q_quicktexturefactory_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSGTexture* q_quicktexturefactory_create_texture(void* self, void* window) {
    return QQuickTextureFactory_CreateTexture((QQuickTextureFactory*)self, (QQuickWindow*)window);
}

void q_quicktexturefactory_on_create_texture(void* self, QSGTexture* (*callback)(void*, void*)) {
    QQuickTextureFactory_OnCreateTexture((QQuickTextureFactory*)self, (intptr_t)callback);
}

QSGTexture* q_quicktexturefactory_super_create_texture(void* self, void* window) {
    return QQuickTextureFactory_SuperCreateTexture((QQuickTextureFactory*)self, (QQuickWindow*)window);
}

QSize* q_quicktexturefactory_texture_size(void* self) {
    return QQuickTextureFactory_TextureSize((QQuickTextureFactory*)self);
}

void q_quicktexturefactory_on_texture_size(void* self, QSize* (*callback)()) {
    QQuickTextureFactory_OnTextureSize((QQuickTextureFactory*)self, (intptr_t)callback);
}

QSize* q_quicktexturefactory_super_texture_size(void* self) {
    return QQuickTextureFactory_SuperTextureSize((QQuickTextureFactory*)self);
}

int32_t q_quicktexturefactory_texture_byte_count(void* self) {
    return QQuickTextureFactory_TextureByteCount((QQuickTextureFactory*)self);
}

void q_quicktexturefactory_on_texture_byte_count(void* self, int32_t (*callback)()) {
    QQuickTextureFactory_OnTextureByteCount((QQuickTextureFactory*)self, (intptr_t)callback);
}

int32_t q_quicktexturefactory_super_texture_byte_count(void* self) {
    return QQuickTextureFactory_SuperTextureByteCount((QQuickTextureFactory*)self);
}

QImage* q_quicktexturefactory_image(void* self) {
    return QQuickTextureFactory_Image((QQuickTextureFactory*)self);
}

void q_quicktexturefactory_on_image(void* self, QImage* (*callback)()) {
    QQuickTextureFactory_OnImage((QQuickTextureFactory*)self, (intptr_t)callback);
}

QImage* q_quicktexturefactory_super_image(void* self) {
    return QQuickTextureFactory_SuperImage((QQuickTextureFactory*)self);
}

QQuickTextureFactory* q_quicktexturefactory_texture_factory_for_image(void* image) {
    return QQuickTextureFactory_TextureFactoryForImage((QImage*)image);
}

const char* q_quicktexturefactory_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quicktexturefactory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quicktexturefactory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quicktexturefactory_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quicktexturefactory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quicktexturefactory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quicktexturefactory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quicktexturefactory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quicktexturefactory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quicktexturefactory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quicktexturefactory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quicktexturefactory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quicktexturefactory_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quicktexturefactory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quicktexturefactory_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quicktexturefactory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quicktexturefactory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quicktexturefactory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quicktexturefactory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quicktexturefactory_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quicktexturefactory_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quicktexturefactory_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quicktexturefactory_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quicktexturefactory_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quicktexturefactory_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quicktexturefactory_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quicktexturefactory_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quicktexturefactory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quicktexturefactory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quicktexturefactory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quicktexturefactory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quicktexturefactory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quicktexturefactory_dynamic_property_names\n");
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

QBindingStorage* q_quicktexturefactory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quicktexturefactory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quicktexturefactory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quicktexturefactory_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quicktexturefactory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quicktexturefactory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quicktexturefactory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quicktexturefactory_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quicktexturefactory_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quicktexturefactory_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quicktexturefactory_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quicktexturefactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quicktexturefactory_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quicktexturefactory_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quicktexturefactory_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quicktexturefactory_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quicktexturefactory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quicktexturefactory_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quicktexturefactory_event(void* self, void* event) {
    return QQuickTextureFactory_Event((QQuickTextureFactory*)self, (QEvent*)event);
}

bool q_quicktexturefactory_super_event(void* self, void* event) {
    return QQuickTextureFactory_SuperEvent((QQuickTextureFactory*)self, (QEvent*)event);
}

void q_quicktexturefactory_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickTextureFactory_OnEvent((QQuickTextureFactory*)self, (intptr_t)callback);
}

bool q_quicktexturefactory_event_filter(void* self, void* watched, void* event) {
    return QQuickTextureFactory_EventFilter((QQuickTextureFactory*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quicktexturefactory_super_event_filter(void* self, void* watched, void* event) {
    return QQuickTextureFactory_SuperEventFilter((QQuickTextureFactory*)self, (QObject*)watched, (QEvent*)event);
}

void q_quicktexturefactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickTextureFactory_OnEventFilter((QQuickTextureFactory*)self, (intptr_t)callback);
}

void q_quicktexturefactory_timer_event(void* self, void* event) {
    QQuickTextureFactory_TimerEvent((QQuickTextureFactory*)self, (QTimerEvent*)event);
}

void q_quicktexturefactory_super_timer_event(void* self, void* event) {
    QQuickTextureFactory_SuperTimerEvent((QQuickTextureFactory*)self, (QTimerEvent*)event);
}

void q_quicktexturefactory_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickTextureFactory_OnTimerEvent((QQuickTextureFactory*)self, (intptr_t)callback);
}

void q_quicktexturefactory_child_event(void* self, void* event) {
    QQuickTextureFactory_ChildEvent((QQuickTextureFactory*)self, (QChildEvent*)event);
}

void q_quicktexturefactory_super_child_event(void* self, void* event) {
    QQuickTextureFactory_SuperChildEvent((QQuickTextureFactory*)self, (QChildEvent*)event);
}

void q_quicktexturefactory_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickTextureFactory_OnChildEvent((QQuickTextureFactory*)self, (intptr_t)callback);
}

void q_quicktexturefactory_custom_event(void* self, void* event) {
    QQuickTextureFactory_CustomEvent((QQuickTextureFactory*)self, (QEvent*)event);
}

void q_quicktexturefactory_super_custom_event(void* self, void* event) {
    QQuickTextureFactory_SuperCustomEvent((QQuickTextureFactory*)self, (QEvent*)event);
}

void q_quicktexturefactory_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickTextureFactory_OnCustomEvent((QQuickTextureFactory*)self, (intptr_t)callback);
}

void q_quicktexturefactory_connect_notify(void* self, void* signal) {
    QQuickTextureFactory_ConnectNotify((QQuickTextureFactory*)self, (QMetaMethod*)signal);
}

void q_quicktexturefactory_super_connect_notify(void* self, void* signal) {
    QQuickTextureFactory_SuperConnectNotify((QQuickTextureFactory*)self, (QMetaMethod*)signal);
}

void q_quicktexturefactory_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickTextureFactory_OnConnectNotify((QQuickTextureFactory*)self, (intptr_t)callback);
}

void q_quicktexturefactory_disconnect_notify(void* self, void* signal) {
    QQuickTextureFactory_DisconnectNotify((QQuickTextureFactory*)self, (QMetaMethod*)signal);
}

void q_quicktexturefactory_super_disconnect_notify(void* self, void* signal) {
    QQuickTextureFactory_SuperDisconnectNotify((QQuickTextureFactory*)self, (QMetaMethod*)signal);
}

void q_quicktexturefactory_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickTextureFactory_OnDisconnectNotify((QQuickTextureFactory*)self, (intptr_t)callback);
}

QObject* q_quicktexturefactory_sender(void* self) {
    return QQuickTextureFactory_Sender((QQuickTextureFactory*)self);
}

QObject* q_quicktexturefactory_super_sender(void* self) {
    return QQuickTextureFactory_SuperSender((QQuickTextureFactory*)self);
}

void q_quicktexturefactory_on_sender(void* self, QObject* (*callback)()) {
    QQuickTextureFactory_OnSender((QQuickTextureFactory*)self, (intptr_t)callback);
}

int32_t q_quicktexturefactory_sender_signal_index(void* self) {
    return QQuickTextureFactory_SenderSignalIndex((QQuickTextureFactory*)self);
}

int32_t q_quicktexturefactory_super_sender_signal_index(void* self) {
    return QQuickTextureFactory_SuperSenderSignalIndex((QQuickTextureFactory*)self);
}

void q_quicktexturefactory_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickTextureFactory_OnSenderSignalIndex((QQuickTextureFactory*)self, (intptr_t)callback);
}

int32_t q_quicktexturefactory_receivers(void* self, const char* signal) {
    return QQuickTextureFactory_Receivers((QQuickTextureFactory*)self, signal);
}

int32_t q_quicktexturefactory_super_receivers(void* self, const char* signal) {
    return QQuickTextureFactory_SuperReceivers((QQuickTextureFactory*)self, signal);
}

void q_quicktexturefactory_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickTextureFactory_OnReceivers((QQuickTextureFactory*)self, (intptr_t)callback);
}

bool q_quicktexturefactory_is_signal_connected(void* self, void* signal) {
    return QQuickTextureFactory_IsSignalConnected((QQuickTextureFactory*)self, (QMetaMethod*)signal);
}

bool q_quicktexturefactory_super_is_signal_connected(void* self, void* signal) {
    return QQuickTextureFactory_SuperIsSignalConnected((QQuickTextureFactory*)self, (QMetaMethod*)signal);
}

void q_quicktexturefactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickTextureFactory_OnIsSignalConnected((QQuickTextureFactory*)self, (intptr_t)callback);
}

void q_quicktexturefactory_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quicktexturefactory_delete(void* self) {
    QQuickTextureFactory_Delete((QQuickTextureFactory*)(self));
}

QQuickImageResponse* q_quickimageresponse_new() {
    return QQuickImageResponse_New();
}

const QMetaObject* q_quickimageresponse_meta_object(void* self) {
    return QQuickImageResponse_MetaObject((QQuickImageResponse*)self);
}

void q_quickimageresponse_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickImageResponse_OnMetaObject((QQuickImageResponse*)self, (intptr_t)callback);
}

const QMetaObject* q_quickimageresponse_super_meta_object(void* self) {
    return QQuickImageResponse_SuperMetaObject((QQuickImageResponse*)self);
}

void* q_quickimageresponse_metacast(void* self, const char* param1) {
    return QQuickImageResponse_Metacast((QQuickImageResponse*)self, param1);
}

void q_quickimageresponse_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickImageResponse_OnMetacast((QQuickImageResponse*)self, (intptr_t)callback);
}

void* q_quickimageresponse_super_metacast(void* self, const char* param1) {
    return QQuickImageResponse_SuperMetacast((QQuickImageResponse*)self, param1);
}

int32_t q_quickimageresponse_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickImageResponse_Metacall((QQuickImageResponse*)self, param1, param2, param3);
}

void q_quickimageresponse_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickImageResponse_OnMetacall((QQuickImageResponse*)self, (intptr_t)callback);
}

int32_t q_quickimageresponse_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickImageResponse_SuperMetacall((QQuickImageResponse*)self, param1, param2, param3);
}

const char* q_quickimageresponse_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQuickTextureFactory* q_quickimageresponse_texture_factory(void* self) {
    return QQuickImageResponse_TextureFactory((QQuickImageResponse*)self);
}

void q_quickimageresponse_on_texture_factory(void* self, QQuickTextureFactory* (*callback)()) {
    QQuickImageResponse_OnTextureFactory((QQuickImageResponse*)self, (intptr_t)callback);
}

QQuickTextureFactory* q_quickimageresponse_super_texture_factory(void* self) {
    return QQuickImageResponse_SuperTextureFactory((QQuickImageResponse*)self);
}

const char* q_quickimageresponse_error_string(void* self) {
    libqt_string _str = QQuickImageResponse_ErrorString((QQuickImageResponse*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickimageresponse_on_error_string(void* self, const char* (*callback)()) {
    QQuickImageResponse_OnErrorString((QQuickImageResponse*)self, (intptr_t)callback);
}

const char* q_quickimageresponse_super_error_string(void* self) {
    libqt_string _str = QQuickImageResponse_SuperErrorString((QQuickImageResponse*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickimageresponse_cancel(void* self) {
    QQuickImageResponse_Cancel((QQuickImageResponse*)self);
}

void q_quickimageresponse_on_cancel(void* self, void (*callback)()) {
    QQuickImageResponse_OnCancel((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_super_cancel(void* self) {
    QQuickImageResponse_SuperCancel((QQuickImageResponse*)self);
}

void q_quickimageresponse_finished(void* self) {
    QQuickImageResponse_Finished((QQuickImageResponse*)self);
}

void q_quickimageresponse_on_finished(void* self, void (*callback)(void*)) {
    QQuickImageResponse_Connect_Finished((QQuickImageResponse*)self, (intptr_t)callback);
}

const char* q_quickimageresponse_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickimageresponse_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickimageresponse_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickimageresponse_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickimageresponse_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickimageresponse_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickimageresponse_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickimageresponse_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickimageresponse_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickimageresponse_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickimageresponse_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickimageresponse_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickimageresponse_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickimageresponse_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickimageresponse_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickimageresponse_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickimageresponse_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickimageresponse_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickimageresponse_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickimageresponse_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickimageresponse_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickimageresponse_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickimageresponse_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickimageresponse_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickimageresponse_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickimageresponse_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickimageresponse_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickimageresponse_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickimageresponse_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickimageresponse_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickimageresponse_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickimageresponse_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickimageresponse_dynamic_property_names\n");
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

QBindingStorage* q_quickimageresponse_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickimageresponse_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickimageresponse_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickimageresponse_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickimageresponse_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickimageresponse_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickimageresponse_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickimageresponse_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickimageresponse_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickimageresponse_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickimageresponse_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickimageresponse_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickimageresponse_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickimageresponse_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickimageresponse_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickimageresponse_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickimageresponse_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickimageresponse_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickimageresponse_event(void* self, void* event) {
    return QQuickImageResponse_Event((QQuickImageResponse*)self, (QEvent*)event);
}

bool q_quickimageresponse_super_event(void* self, void* event) {
    return QQuickImageResponse_SuperEvent((QQuickImageResponse*)self, (QEvent*)event);
}

void q_quickimageresponse_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickImageResponse_OnEvent((QQuickImageResponse*)self, (intptr_t)callback);
}

bool q_quickimageresponse_event_filter(void* self, void* watched, void* event) {
    return QQuickImageResponse_EventFilter((QQuickImageResponse*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickimageresponse_super_event_filter(void* self, void* watched, void* event) {
    return QQuickImageResponse_SuperEventFilter((QQuickImageResponse*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickimageresponse_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickImageResponse_OnEventFilter((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_timer_event(void* self, void* event) {
    QQuickImageResponse_TimerEvent((QQuickImageResponse*)self, (QTimerEvent*)event);
}

void q_quickimageresponse_super_timer_event(void* self, void* event) {
    QQuickImageResponse_SuperTimerEvent((QQuickImageResponse*)self, (QTimerEvent*)event);
}

void q_quickimageresponse_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickImageResponse_OnTimerEvent((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_child_event(void* self, void* event) {
    QQuickImageResponse_ChildEvent((QQuickImageResponse*)self, (QChildEvent*)event);
}

void q_quickimageresponse_super_child_event(void* self, void* event) {
    QQuickImageResponse_SuperChildEvent((QQuickImageResponse*)self, (QChildEvent*)event);
}

void q_quickimageresponse_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickImageResponse_OnChildEvent((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_custom_event(void* self, void* event) {
    QQuickImageResponse_CustomEvent((QQuickImageResponse*)self, (QEvent*)event);
}

void q_quickimageresponse_super_custom_event(void* self, void* event) {
    QQuickImageResponse_SuperCustomEvent((QQuickImageResponse*)self, (QEvent*)event);
}

void q_quickimageresponse_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickImageResponse_OnCustomEvent((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_connect_notify(void* self, void* signal) {
    QQuickImageResponse_ConnectNotify((QQuickImageResponse*)self, (QMetaMethod*)signal);
}

void q_quickimageresponse_super_connect_notify(void* self, void* signal) {
    QQuickImageResponse_SuperConnectNotify((QQuickImageResponse*)self, (QMetaMethod*)signal);
}

void q_quickimageresponse_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickImageResponse_OnConnectNotify((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_disconnect_notify(void* self, void* signal) {
    QQuickImageResponse_DisconnectNotify((QQuickImageResponse*)self, (QMetaMethod*)signal);
}

void q_quickimageresponse_super_disconnect_notify(void* self, void* signal) {
    QQuickImageResponse_SuperDisconnectNotify((QQuickImageResponse*)self, (QMetaMethod*)signal);
}

void q_quickimageresponse_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickImageResponse_OnDisconnectNotify((QQuickImageResponse*)self, (intptr_t)callback);
}

QObject* q_quickimageresponse_sender(void* self) {
    return QQuickImageResponse_Sender((QQuickImageResponse*)self);
}

QObject* q_quickimageresponse_super_sender(void* self) {
    return QQuickImageResponse_SuperSender((QQuickImageResponse*)self);
}

void q_quickimageresponse_on_sender(void* self, QObject* (*callback)()) {
    QQuickImageResponse_OnSender((QQuickImageResponse*)self, (intptr_t)callback);
}

int32_t q_quickimageresponse_sender_signal_index(void* self) {
    return QQuickImageResponse_SenderSignalIndex((QQuickImageResponse*)self);
}

int32_t q_quickimageresponse_super_sender_signal_index(void* self) {
    return QQuickImageResponse_SuperSenderSignalIndex((QQuickImageResponse*)self);
}

void q_quickimageresponse_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickImageResponse_OnSenderSignalIndex((QQuickImageResponse*)self, (intptr_t)callback);
}

int32_t q_quickimageresponse_receivers(void* self, const char* signal) {
    return QQuickImageResponse_Receivers((QQuickImageResponse*)self, signal);
}

int32_t q_quickimageresponse_super_receivers(void* self, const char* signal) {
    return QQuickImageResponse_SuperReceivers((QQuickImageResponse*)self, signal);
}

void q_quickimageresponse_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickImageResponse_OnReceivers((QQuickImageResponse*)self, (intptr_t)callback);
}

bool q_quickimageresponse_is_signal_connected(void* self, void* signal) {
    return QQuickImageResponse_IsSignalConnected((QQuickImageResponse*)self, (QMetaMethod*)signal);
}

bool q_quickimageresponse_super_is_signal_connected(void* self, void* signal) {
    return QQuickImageResponse_SuperIsSignalConnected((QQuickImageResponse*)self, (QMetaMethod*)signal);
}

void q_quickimageresponse_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickImageResponse_OnIsSignalConnected((QQuickImageResponse*)self, (intptr_t)callback);
}

void q_quickimageresponse_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickimageresponse_delete(void* self) {
    QQuickImageResponse_Delete((QQuickImageResponse*)(self));
}

QQuickImageProvider* q_quickimageprovider_new(int32_t type) {
    return QQuickImageProvider_New(type);
}

QQuickImageProvider* q_quickimageprovider_new2(int32_t type, int32_t flags) {
    return QQuickImageProvider_New2(type, flags);
}

const QMetaObject* q_quickimageprovider_meta_object(void* self) {
    return QQuickImageProvider_MetaObject((QQuickImageProvider*)self);
}

void q_quickimageprovider_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickImageProvider_OnMetaObject((QQuickImageProvider*)self, (intptr_t)callback);
}

const QMetaObject* q_quickimageprovider_super_meta_object(void* self) {
    return QQuickImageProvider_SuperMetaObject((QQuickImageProvider*)self);
}

void* q_quickimageprovider_metacast(void* self, const char* param1) {
    return QQuickImageProvider_Metacast((QQuickImageProvider*)self, param1);
}

void q_quickimageprovider_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickImageProvider_OnMetacast((QQuickImageProvider*)self, (intptr_t)callback);
}

void* q_quickimageprovider_super_metacast(void* self, const char* param1) {
    return QQuickImageProvider_SuperMetacast((QQuickImageProvider*)self, param1);
}

int32_t q_quickimageprovider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickImageProvider_Metacall((QQuickImageProvider*)self, param1, param2, param3);
}

void q_quickimageprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickImageProvider_OnMetacall((QQuickImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickimageprovider_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickImageProvider_SuperMetacall((QQuickImageProvider*)self, param1, param2, param3);
}

const char* q_quickimageprovider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_quickimageprovider_image_type(void* self) {
    return QQuickImageProvider_ImageType((QQuickImageProvider*)self);
}

void q_quickimageprovider_on_image_type(void* self, int32_t (*callback)()) {
    QQuickImageProvider_OnImageType((QQuickImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickimageprovider_super_image_type(void* self) {
    return QQuickImageProvider_SuperImageType((QQuickImageProvider*)self);
}

int32_t q_quickimageprovider_flags(void* self) {
    return QQuickImageProvider_Flags((QQuickImageProvider*)self);
}

void q_quickimageprovider_on_flags(void* self, int32_t (*callback)()) {
    QQuickImageProvider_OnFlags((QQuickImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickimageprovider_super_flags(void* self) {
    return QQuickImageProvider_SuperFlags((QQuickImageProvider*)self);
}

QImage* q_quickimageprovider_request_image(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickImageProvider_RequestImage((QQuickImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void q_quickimageprovider_on_request_image(void* self, QImage* (*callback)(void*, const char*, void*, void*)) {
    QQuickImageProvider_OnRequestImage((QQuickImageProvider*)self, (intptr_t)callback);
}

QImage* q_quickimageprovider_super_request_image(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickImageProvider_SuperRequestImage((QQuickImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QPixmap* q_quickimageprovider_request_pixmap(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickImageProvider_RequestPixmap((QQuickImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void q_quickimageprovider_on_request_pixmap(void* self, QPixmap* (*callback)(void*, const char*, void*, void*)) {
    QQuickImageProvider_OnRequestPixmap((QQuickImageProvider*)self, (intptr_t)callback);
}

QPixmap* q_quickimageprovider_super_request_pixmap(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickImageProvider_SuperRequestPixmap((QQuickImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QQuickTextureFactory* q_quickimageprovider_request_texture(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickImageProvider_RequestTexture((QQuickImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void q_quickimageprovider_on_request_texture(void* self, QQuickTextureFactory* (*callback)(void*, const char*, void*, void*)) {
    QQuickImageProvider_OnRequestTexture((QQuickImageProvider*)self, (intptr_t)callback);
}

QQuickTextureFactory* q_quickimageprovider_super_request_texture(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickImageProvider_SuperRequestTexture((QQuickImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

const char* q_quickimageprovider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickimageprovider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickimageprovider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickimageprovider_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickimageprovider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickimageprovider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickimageprovider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickimageprovider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickimageprovider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickimageprovider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickimageprovider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickimageprovider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickimageprovider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickimageprovider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickimageprovider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickimageprovider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickimageprovider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickimageprovider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickimageprovider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickimageprovider_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickimageprovider_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickimageprovider_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickimageprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickimageprovider_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickimageprovider_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickimageprovider_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickimageprovider_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickimageprovider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickimageprovider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickimageprovider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickimageprovider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickimageprovider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickimageprovider_dynamic_property_names\n");
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

QBindingStorage* q_quickimageprovider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickimageprovider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickimageprovider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickimageprovider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickimageprovider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickimageprovider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickimageprovider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickimageprovider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickimageprovider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickimageprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickimageprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickimageprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickimageprovider_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickimageprovider_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickimageprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickimageprovider_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickimageprovider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickimageprovider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickimageprovider_event(void* self, void* event) {
    return QQuickImageProvider_Event((QQuickImageProvider*)self, (QEvent*)event);
}

bool q_quickimageprovider_super_event(void* self, void* event) {
    return QQuickImageProvider_SuperEvent((QQuickImageProvider*)self, (QEvent*)event);
}

void q_quickimageprovider_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickImageProvider_OnEvent((QQuickImageProvider*)self, (intptr_t)callback);
}

bool q_quickimageprovider_event_filter(void* self, void* watched, void* event) {
    return QQuickImageProvider_EventFilter((QQuickImageProvider*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickimageprovider_super_event_filter(void* self, void* watched, void* event) {
    return QQuickImageProvider_SuperEventFilter((QQuickImageProvider*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickimageprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickImageProvider_OnEventFilter((QQuickImageProvider*)self, (intptr_t)callback);
}

void q_quickimageprovider_timer_event(void* self, void* event) {
    QQuickImageProvider_TimerEvent((QQuickImageProvider*)self, (QTimerEvent*)event);
}

void q_quickimageprovider_super_timer_event(void* self, void* event) {
    QQuickImageProvider_SuperTimerEvent((QQuickImageProvider*)self, (QTimerEvent*)event);
}

void q_quickimageprovider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickImageProvider_OnTimerEvent((QQuickImageProvider*)self, (intptr_t)callback);
}

void q_quickimageprovider_child_event(void* self, void* event) {
    QQuickImageProvider_ChildEvent((QQuickImageProvider*)self, (QChildEvent*)event);
}

void q_quickimageprovider_super_child_event(void* self, void* event) {
    QQuickImageProvider_SuperChildEvent((QQuickImageProvider*)self, (QChildEvent*)event);
}

void q_quickimageprovider_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickImageProvider_OnChildEvent((QQuickImageProvider*)self, (intptr_t)callback);
}

void q_quickimageprovider_custom_event(void* self, void* event) {
    QQuickImageProvider_CustomEvent((QQuickImageProvider*)self, (QEvent*)event);
}

void q_quickimageprovider_super_custom_event(void* self, void* event) {
    QQuickImageProvider_SuperCustomEvent((QQuickImageProvider*)self, (QEvent*)event);
}

void q_quickimageprovider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickImageProvider_OnCustomEvent((QQuickImageProvider*)self, (intptr_t)callback);
}

void q_quickimageprovider_connect_notify(void* self, void* signal) {
    QQuickImageProvider_ConnectNotify((QQuickImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickimageprovider_super_connect_notify(void* self, void* signal) {
    QQuickImageProvider_SuperConnectNotify((QQuickImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickimageprovider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickImageProvider_OnConnectNotify((QQuickImageProvider*)self, (intptr_t)callback);
}

void q_quickimageprovider_disconnect_notify(void* self, void* signal) {
    QQuickImageProvider_DisconnectNotify((QQuickImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickimageprovider_super_disconnect_notify(void* self, void* signal) {
    QQuickImageProvider_SuperDisconnectNotify((QQuickImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickimageprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickImageProvider_OnDisconnectNotify((QQuickImageProvider*)self, (intptr_t)callback);
}

QObject* q_quickimageprovider_sender(void* self) {
    return QQuickImageProvider_Sender((QQuickImageProvider*)self);
}

QObject* q_quickimageprovider_super_sender(void* self) {
    return QQuickImageProvider_SuperSender((QQuickImageProvider*)self);
}

void q_quickimageprovider_on_sender(void* self, QObject* (*callback)()) {
    QQuickImageProvider_OnSender((QQuickImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickimageprovider_sender_signal_index(void* self) {
    return QQuickImageProvider_SenderSignalIndex((QQuickImageProvider*)self);
}

int32_t q_quickimageprovider_super_sender_signal_index(void* self) {
    return QQuickImageProvider_SuperSenderSignalIndex((QQuickImageProvider*)self);
}

void q_quickimageprovider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickImageProvider_OnSenderSignalIndex((QQuickImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickimageprovider_receivers(void* self, const char* signal) {
    return QQuickImageProvider_Receivers((QQuickImageProvider*)self, signal);
}

int32_t q_quickimageprovider_super_receivers(void* self, const char* signal) {
    return QQuickImageProvider_SuperReceivers((QQuickImageProvider*)self, signal);
}

void q_quickimageprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickImageProvider_OnReceivers((QQuickImageProvider*)self, (intptr_t)callback);
}

bool q_quickimageprovider_is_signal_connected(void* self, void* signal) {
    return QQuickImageProvider_IsSignalConnected((QQuickImageProvider*)self, (QMetaMethod*)signal);
}

bool q_quickimageprovider_super_is_signal_connected(void* self, void* signal) {
    return QQuickImageProvider_SuperIsSignalConnected((QQuickImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickimageprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickImageProvider_OnIsSignalConnected((QQuickImageProvider*)self, (intptr_t)callback);
}

void q_quickimageprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickimageprovider_delete(void* self) {
    QQuickImageProvider_Delete((QQuickImageProvider*)(self));
}

QQuickAsyncImageProvider* q_quickasyncimageprovider_new() {
    return QQuickAsyncImageProvider_New();
}

QQuickImageResponse* q_quickasyncimageprovider_request_image_response(void* self, const char* id, void* requestedSize) {
    return QQuickAsyncImageProvider_RequestImageResponse((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)requestedSize);
}

void q_quickasyncimageprovider_on_request_image_response(void* self, QQuickImageResponse* (*callback)(void*, const char*, void*)) {
    QQuickAsyncImageProvider_OnRequestImageResponse((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

QQuickImageResponse* q_quickasyncimageprovider_super_request_image_response(void* self, const char* id, void* requestedSize) {
    return QQuickAsyncImageProvider_SuperRequestImageResponse((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)requestedSize);
}

const char* q_quickasyncimageprovider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickasyncimageprovider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickasyncimageprovider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickasyncimageprovider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickasyncimageprovider_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickasyncimageprovider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickasyncimageprovider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickasyncimageprovider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickasyncimageprovider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickasyncimageprovider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickasyncimageprovider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickasyncimageprovider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickasyncimageprovider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickasyncimageprovider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickasyncimageprovider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickasyncimageprovider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickasyncimageprovider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickasyncimageprovider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickasyncimageprovider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickasyncimageprovider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickasyncimageprovider_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickasyncimageprovider_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickasyncimageprovider_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickasyncimageprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickasyncimageprovider_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickasyncimageprovider_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickasyncimageprovider_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickasyncimageprovider_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickasyncimageprovider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickasyncimageprovider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickasyncimageprovider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickasyncimageprovider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickasyncimageprovider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickasyncimageprovider_dynamic_property_names\n");
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

QBindingStorage* q_quickasyncimageprovider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickasyncimageprovider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickasyncimageprovider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickasyncimageprovider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickasyncimageprovider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickasyncimageprovider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickasyncimageprovider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickasyncimageprovider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickasyncimageprovider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickasyncimageprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickasyncimageprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickasyncimageprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickasyncimageprovider_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickasyncimageprovider_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickasyncimageprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickasyncimageprovider_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickasyncimageprovider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickasyncimageprovider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const QMetaObject* q_quickasyncimageprovider_meta_object(void* self) {
    return QQuickAsyncImageProvider_MetaObject((QQuickAsyncImageProvider*)self);
}

const QMetaObject* q_quickasyncimageprovider_super_meta_object(void* self) {
    return QQuickAsyncImageProvider_SuperMetaObject((QQuickAsyncImageProvider*)self);
}

void q_quickasyncimageprovider_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickAsyncImageProvider_OnMetaObject((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void* q_quickasyncimageprovider_metacast(void* self, const char* param1) {
    return QQuickAsyncImageProvider_Metacast((QQuickAsyncImageProvider*)self, param1);
}

void* q_quickasyncimageprovider_super_metacast(void* self, const char* param1) {
    return QQuickAsyncImageProvider_SuperMetacast((QQuickAsyncImageProvider*)self, param1);
}

void q_quickasyncimageprovider_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickAsyncImageProvider_OnMetacast((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickasyncimageprovider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickAsyncImageProvider_Metacall((QQuickAsyncImageProvider*)self, param1, param2, param3);
}

int32_t q_quickasyncimageprovider_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickAsyncImageProvider_SuperMetacall((QQuickAsyncImageProvider*)self, param1, param2, param3);
}

void q_quickasyncimageprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickAsyncImageProvider_OnMetacall((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickasyncimageprovider_image_type(void* self) {
    return QQuickAsyncImageProvider_ImageType((QQuickAsyncImageProvider*)self);
}

int32_t q_quickasyncimageprovider_super_image_type(void* self) {
    return QQuickAsyncImageProvider_SuperImageType((QQuickAsyncImageProvider*)self);
}

void q_quickasyncimageprovider_on_image_type(void* self, int32_t (*callback)()) {
    QQuickAsyncImageProvider_OnImageType((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickasyncimageprovider_flags(void* self) {
    return QQuickAsyncImageProvider_Flags((QQuickAsyncImageProvider*)self);
}

int32_t q_quickasyncimageprovider_super_flags(void* self) {
    return QQuickAsyncImageProvider_SuperFlags((QQuickAsyncImageProvider*)self);
}

void q_quickasyncimageprovider_on_flags(void* self, int32_t (*callback)()) {
    QQuickAsyncImageProvider_OnFlags((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

QImage* q_quickasyncimageprovider_request_image(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickAsyncImageProvider_RequestImage((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QImage* q_quickasyncimageprovider_super_request_image(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickAsyncImageProvider_SuperRequestImage((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void q_quickasyncimageprovider_on_request_image(void* self, QImage* (*callback)(void*, const char*, void*, void*)) {
    QQuickAsyncImageProvider_OnRequestImage((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

QPixmap* q_quickasyncimageprovider_request_pixmap(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickAsyncImageProvider_RequestPixmap((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QPixmap* q_quickasyncimageprovider_super_request_pixmap(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickAsyncImageProvider_SuperRequestPixmap((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void q_quickasyncimageprovider_on_request_pixmap(void* self, QPixmap* (*callback)(void*, const char*, void*, void*)) {
    QQuickAsyncImageProvider_OnRequestPixmap((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

QQuickTextureFactory* q_quickasyncimageprovider_request_texture(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickAsyncImageProvider_RequestTexture((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

QQuickTextureFactory* q_quickasyncimageprovider_super_request_texture(void* self, const char* id, void* size, void* requestedSize) {
    return QQuickAsyncImageProvider_SuperRequestTexture((QQuickAsyncImageProvider*)self, qstring(id), (QSize*)size, (QSize*)requestedSize);
}

void q_quickasyncimageprovider_on_request_texture(void* self, QQuickTextureFactory* (*callback)(void*, const char*, void*, void*)) {
    QQuickAsyncImageProvider_OnRequestTexture((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

bool q_quickasyncimageprovider_event(void* self, void* event) {
    return QQuickAsyncImageProvider_Event((QQuickAsyncImageProvider*)self, (QEvent*)event);
}

bool q_quickasyncimageprovider_super_event(void* self, void* event) {
    return QQuickAsyncImageProvider_SuperEvent((QQuickAsyncImageProvider*)self, (QEvent*)event);
}

void q_quickasyncimageprovider_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnEvent((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

bool q_quickasyncimageprovider_event_filter(void* self, void* watched, void* event) {
    return QQuickAsyncImageProvider_EventFilter((QQuickAsyncImageProvider*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickasyncimageprovider_super_event_filter(void* self, void* watched, void* event) {
    return QQuickAsyncImageProvider_SuperEventFilter((QQuickAsyncImageProvider*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickasyncimageprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickAsyncImageProvider_OnEventFilter((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_timer_event(void* self, void* event) {
    QQuickAsyncImageProvider_TimerEvent((QQuickAsyncImageProvider*)self, (QTimerEvent*)event);
}

void q_quickasyncimageprovider_super_timer_event(void* self, void* event) {
    QQuickAsyncImageProvider_SuperTimerEvent((QQuickAsyncImageProvider*)self, (QTimerEvent*)event);
}

void q_quickasyncimageprovider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnTimerEvent((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_child_event(void* self, void* event) {
    QQuickAsyncImageProvider_ChildEvent((QQuickAsyncImageProvider*)self, (QChildEvent*)event);
}

void q_quickasyncimageprovider_super_child_event(void* self, void* event) {
    QQuickAsyncImageProvider_SuperChildEvent((QQuickAsyncImageProvider*)self, (QChildEvent*)event);
}

void q_quickasyncimageprovider_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnChildEvent((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_custom_event(void* self, void* event) {
    QQuickAsyncImageProvider_CustomEvent((QQuickAsyncImageProvider*)self, (QEvent*)event);
}

void q_quickasyncimageprovider_super_custom_event(void* self, void* event) {
    QQuickAsyncImageProvider_SuperCustomEvent((QQuickAsyncImageProvider*)self, (QEvent*)event);
}

void q_quickasyncimageprovider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnCustomEvent((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_connect_notify(void* self, void* signal) {
    QQuickAsyncImageProvider_ConnectNotify((QQuickAsyncImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickasyncimageprovider_super_connect_notify(void* self, void* signal) {
    QQuickAsyncImageProvider_SuperConnectNotify((QQuickAsyncImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickasyncimageprovider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnConnectNotify((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_disconnect_notify(void* self, void* signal) {
    QQuickAsyncImageProvider_DisconnectNotify((QQuickAsyncImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickasyncimageprovider_super_disconnect_notify(void* self, void* signal) {
    QQuickAsyncImageProvider_SuperDisconnectNotify((QQuickAsyncImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickasyncimageprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnDisconnectNotify((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

QObject* q_quickasyncimageprovider_sender(void* self) {
    return QQuickAsyncImageProvider_Sender((QQuickAsyncImageProvider*)self);
}

QObject* q_quickasyncimageprovider_super_sender(void* self) {
    return QQuickAsyncImageProvider_SuperSender((QQuickAsyncImageProvider*)self);
}

void q_quickasyncimageprovider_on_sender(void* self, QObject* (*callback)()) {
    QQuickAsyncImageProvider_OnSender((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickasyncimageprovider_sender_signal_index(void* self) {
    return QQuickAsyncImageProvider_SenderSignalIndex((QQuickAsyncImageProvider*)self);
}

int32_t q_quickasyncimageprovider_super_sender_signal_index(void* self) {
    return QQuickAsyncImageProvider_SuperSenderSignalIndex((QQuickAsyncImageProvider*)self);
}

void q_quickasyncimageprovider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickAsyncImageProvider_OnSenderSignalIndex((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

int32_t q_quickasyncimageprovider_receivers(void* self, const char* signal) {
    return QQuickAsyncImageProvider_Receivers((QQuickAsyncImageProvider*)self, signal);
}

int32_t q_quickasyncimageprovider_super_receivers(void* self, const char* signal) {
    return QQuickAsyncImageProvider_SuperReceivers((QQuickAsyncImageProvider*)self, signal);
}

void q_quickasyncimageprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickAsyncImageProvider_OnReceivers((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

bool q_quickasyncimageprovider_is_signal_connected(void* self, void* signal) {
    return QQuickAsyncImageProvider_IsSignalConnected((QQuickAsyncImageProvider*)self, (QMetaMethod*)signal);
}

bool q_quickasyncimageprovider_super_is_signal_connected(void* self, void* signal) {
    return QQuickAsyncImageProvider_SuperIsSignalConnected((QQuickAsyncImageProvider*)self, (QMetaMethod*)signal);
}

void q_quickasyncimageprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickAsyncImageProvider_OnIsSignalConnected((QQuickAsyncImageProvider*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickasyncimageprovider_delete(void* self) {
    QQuickAsyncImageProvider_Delete((QQuickAsyncImageProvider*)(self));
}
