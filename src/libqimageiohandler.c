#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqimageiohandler.hpp"
#include "libqimageiohandler.h"

QImageIOHandler* q_imageiohandler_new() {
    return QImageIOHandler_new();
}

void q_imageiohandler_set_device(void* self, void* device) {
    QImageIOHandler_SetDevice((QImageIOHandler*)self, (QIODevice*)device);
}

QIODevice* q_imageiohandler_device(void* self) {
    return QImageIOHandler_Device((QImageIOHandler*)self);
}

void q_imageiohandler_set_format(void* self, const char* format) {
    QImageIOHandler_SetFormat((QImageIOHandler*)self, qstring(format));
}

void q_imageiohandler_set_format_with_format(void* self, const char* format) {
    QImageIOHandler_SetFormatWithFormat((QImageIOHandler*)self, qstring(format));
}

char* q_imageiohandler_format(void* self) {
    libqt_string _str = QImageIOHandler_Format((QImageIOHandler*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_imageiohandler_can_read(void* self) {
    return QImageIOHandler_CanRead((QImageIOHandler*)self);
}

void q_imageiohandler_on_can_read(void* self, bool (*slot)()) {
    QImageIOHandler_OnCanRead((QImageIOHandler*)self, (intptr_t)slot);
}

bool q_imageiohandler_qbase_can_read(void* self) {
    return QImageIOHandler_QBaseCanRead((QImageIOHandler*)self);
}

bool q_imageiohandler_read(void* self, void* image) {
    return QImageIOHandler_Read((QImageIOHandler*)self, (QImage*)image);
}

void q_imageiohandler_on_read(void* self, bool (*slot)(void*, void*)) {
    QImageIOHandler_OnRead((QImageIOHandler*)self, (intptr_t)slot);
}

bool q_imageiohandler_qbase_read(void* self, void* image) {
    return QImageIOHandler_QBaseRead((QImageIOHandler*)self, (QImage*)image);
}

bool q_imageiohandler_write(void* self, void* image) {
    return QImageIOHandler_Write((QImageIOHandler*)self, (QImage*)image);
}

void q_imageiohandler_on_write(void* self, bool (*slot)(void*, void*)) {
    QImageIOHandler_OnWrite((QImageIOHandler*)self, (intptr_t)slot);
}

bool q_imageiohandler_qbase_write(void* self, void* image) {
    return QImageIOHandler_QBaseWrite((QImageIOHandler*)self, (QImage*)image);
}

QVariant* q_imageiohandler_option(void* self, int64_t option) {
    return QImageIOHandler_Option((QImageIOHandler*)self, option);
}

void q_imageiohandler_on_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QImageIOHandler_OnOption((QImageIOHandler*)self, (intptr_t)slot);
}

QVariant* q_imageiohandler_qbase_option(void* self, int64_t option) {
    return QImageIOHandler_QBaseOption((QImageIOHandler*)self, option);
}

void q_imageiohandler_set_option(void* self, int64_t option, void* value) {
    QImageIOHandler_SetOption((QImageIOHandler*)self, option, (QVariant*)value);
}

void q_imageiohandler_on_set_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QImageIOHandler_OnSetOption((QImageIOHandler*)self, (intptr_t)slot);
}

void q_imageiohandler_qbase_set_option(void* self, int64_t option, void* value) {
    QImageIOHandler_QBaseSetOption((QImageIOHandler*)self, option, (QVariant*)value);
}

bool q_imageiohandler_supports_option(void* self, int64_t option) {
    return QImageIOHandler_SupportsOption((QImageIOHandler*)self, option);
}

void q_imageiohandler_on_supports_option(void* self, bool (*slot)(void*, int64_t)) {
    QImageIOHandler_OnSupportsOption((QImageIOHandler*)self, (intptr_t)slot);
}

bool q_imageiohandler_qbase_supports_option(void* self, int64_t option) {
    return QImageIOHandler_QBaseSupportsOption((QImageIOHandler*)self, option);
}

bool q_imageiohandler_jump_to_next_image(void* self) {
    return QImageIOHandler_JumpToNextImage((QImageIOHandler*)self);
}

void q_imageiohandler_on_jump_to_next_image(void* self, bool (*slot)()) {
    QImageIOHandler_OnJumpToNextImage((QImageIOHandler*)self, (intptr_t)slot);
}

bool q_imageiohandler_qbase_jump_to_next_image(void* self) {
    return QImageIOHandler_QBaseJumpToNextImage((QImageIOHandler*)self);
}

bool q_imageiohandler_jump_to_image(void* self, int imageNumber) {
    return QImageIOHandler_JumpToImage((QImageIOHandler*)self, imageNumber);
}

void q_imageiohandler_on_jump_to_image(void* self, bool (*slot)(void*, int)) {
    QImageIOHandler_OnJumpToImage((QImageIOHandler*)self, (intptr_t)slot);
}

bool q_imageiohandler_qbase_jump_to_image(void* self, int imageNumber) {
    return QImageIOHandler_QBaseJumpToImage((QImageIOHandler*)self, imageNumber);
}

int32_t q_imageiohandler_loop_count(void* self) {
    return QImageIOHandler_LoopCount((QImageIOHandler*)self);
}

void q_imageiohandler_on_loop_count(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnLoopCount((QImageIOHandler*)self, (intptr_t)slot);
}

int32_t q_imageiohandler_qbase_loop_count(void* self) {
    return QImageIOHandler_QBaseLoopCount((QImageIOHandler*)self);
}

int32_t q_imageiohandler_image_count(void* self) {
    return QImageIOHandler_ImageCount((QImageIOHandler*)self);
}

void q_imageiohandler_on_image_count(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnImageCount((QImageIOHandler*)self, (intptr_t)slot);
}

int32_t q_imageiohandler_qbase_image_count(void* self) {
    return QImageIOHandler_QBaseImageCount((QImageIOHandler*)self);
}

int32_t q_imageiohandler_next_image_delay(void* self) {
    return QImageIOHandler_NextImageDelay((QImageIOHandler*)self);
}

void q_imageiohandler_on_next_image_delay(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnNextImageDelay((QImageIOHandler*)self, (intptr_t)slot);
}

int32_t q_imageiohandler_qbase_next_image_delay(void* self) {
    return QImageIOHandler_QBaseNextImageDelay((QImageIOHandler*)self);
}

int32_t q_imageiohandler_current_image_number(void* self) {
    return QImageIOHandler_CurrentImageNumber((QImageIOHandler*)self);
}

void q_imageiohandler_on_current_image_number(void* self, int32_t (*slot)()) {
    QImageIOHandler_OnCurrentImageNumber((QImageIOHandler*)self, (intptr_t)slot);
}

int32_t q_imageiohandler_qbase_current_image_number(void* self) {
    return QImageIOHandler_QBaseCurrentImageNumber((QImageIOHandler*)self);
}

QRect* q_imageiohandler_current_image_rect(void* self) {
    return QImageIOHandler_CurrentImageRect((QImageIOHandler*)self);
}

void q_imageiohandler_on_current_image_rect(void* self, QRect* (*slot)()) {
    QImageIOHandler_OnCurrentImageRect((QImageIOHandler*)self, (intptr_t)slot);
}

QRect* q_imageiohandler_qbase_current_image_rect(void* self) {
    return QImageIOHandler_QBaseCurrentImageRect((QImageIOHandler*)self);
}

bool q_imageiohandler_allocate_image(void* size, int64_t format, void* image) {
    return QImageIOHandler_AllocateImage((QSize*)size, format, (QImage*)image);
}

void q_imageiohandler_delete(void* self) {
    QImageIOHandler_Delete((QImageIOHandler*)(self));
}

QImageIOPlugin* q_imageioplugin_new() {
    return QImageIOPlugin_new();
}

QImageIOPlugin* q_imageioplugin_new2(void* parent) {
    return QImageIOPlugin_new2((QObject*)parent);
}

QMetaObject* q_imageioplugin_meta_object(void* self) {
    return QImageIOPlugin_MetaObject((QImageIOPlugin*)self);
}

void* q_imageioplugin_metacast(void* self, const char* param1) {
    return QImageIOPlugin_Metacast((QImageIOPlugin*)self, param1);
}

int32_t q_imageioplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QImageIOPlugin_Metacall((QImageIOPlugin*)self, param1, param2, param3);
}

void q_imageioplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QImageIOPlugin_OnMetacall((QImageIOPlugin*)self, (intptr_t)slot);
}

int32_t q_imageioplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QImageIOPlugin_QBaseMetacall((QImageIOPlugin*)self, param1, param2, param3);
}

const char* q_imageioplugin_tr(const char* s) {
    libqt_string _str = QImageIOPlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_imageioplugin_capabilities(void* self, void* device, const char* format) {
    return QImageIOPlugin_Capabilities((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

void q_imageioplugin_on_capabilities(void* self, int64_t (*slot)(void*, void*, const char*)) {
    QImageIOPlugin_OnCapabilities((QImageIOPlugin*)self, (intptr_t)slot);
}

int64_t q_imageioplugin_qbase_capabilities(void* self, void* device, const char* format) {
    return QImageIOPlugin_QBaseCapabilities((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

QImageIOHandler* q_imageioplugin_create(void* self, void* device, const char* format) {
    return QImageIOPlugin_Create((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

void q_imageioplugin_on_create(void* self, QImageIOHandler* (*slot)(void*, void*, const char*)) {
    QImageIOPlugin_OnCreate((QImageIOPlugin*)self, (intptr_t)slot);
}

QImageIOHandler* q_imageioplugin_qbase_create(void* self, void* device, const char* format) {
    return QImageIOPlugin_QBaseCreate((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

const char* q_imageioplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QImageIOPlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imageioplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QImageIOPlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imageioplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imageioplugin_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_imageioplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_imageioplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_imageioplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_imageioplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_imageioplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_imageioplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_imageioplugin_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_imageioplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_imageioplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_imageioplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_imageioplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_imageioplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_imageioplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_imageioplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_imageioplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_imageioplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_imageioplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_imageioplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_imageioplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_imageioplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_imageioplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_imageioplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_imageioplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_imageioplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_imageioplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_imageioplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_imageioplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_imageioplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_imageioplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_imageioplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_imageioplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_imageioplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_imageioplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_imageioplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_imageioplugin_event(void* self, void* event) {
    return QImageIOPlugin_Event((QImageIOPlugin*)self, (QEvent*)event);
}

bool q_imageioplugin_qbase_event(void* self, void* event) {
    return QImageIOPlugin_QBaseEvent((QImageIOPlugin*)self, (QEvent*)event);
}

void q_imageioplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QImageIOPlugin_OnEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

bool q_imageioplugin_event_filter(void* self, void* watched, void* event) {
    return QImageIOPlugin_EventFilter((QImageIOPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_imageioplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QImageIOPlugin_QBaseEventFilter((QImageIOPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_imageioplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QImageIOPlugin_OnEventFilter((QImageIOPlugin*)self, (intptr_t)slot);
}

void q_imageioplugin_timer_event(void* self, void* event) {
    QImageIOPlugin_TimerEvent((QImageIOPlugin*)self, (QTimerEvent*)event);
}

void q_imageioplugin_qbase_timer_event(void* self, void* event) {
    QImageIOPlugin_QBaseTimerEvent((QImageIOPlugin*)self, (QTimerEvent*)event);
}

void q_imageioplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnTimerEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

void q_imageioplugin_child_event(void* self, void* event) {
    QImageIOPlugin_ChildEvent((QImageIOPlugin*)self, (QChildEvent*)event);
}

void q_imageioplugin_qbase_child_event(void* self, void* event) {
    QImageIOPlugin_QBaseChildEvent((QImageIOPlugin*)self, (QChildEvent*)event);
}

void q_imageioplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnChildEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

void q_imageioplugin_custom_event(void* self, void* event) {
    QImageIOPlugin_CustomEvent((QImageIOPlugin*)self, (QEvent*)event);
}

void q_imageioplugin_qbase_custom_event(void* self, void* event) {
    QImageIOPlugin_QBaseCustomEvent((QImageIOPlugin*)self, (QEvent*)event);
}

void q_imageioplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnCustomEvent((QImageIOPlugin*)self, (intptr_t)slot);
}

void q_imageioplugin_connect_notify(void* self, void* signal) {
    QImageIOPlugin_ConnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_qbase_connect_notify(void* self, void* signal) {
    QImageIOPlugin_QBaseConnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnConnectNotify((QImageIOPlugin*)self, (intptr_t)slot);
}

void q_imageioplugin_disconnect_notify(void* self, void* signal) {
    QImageIOPlugin_DisconnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_qbase_disconnect_notify(void* self, void* signal) {
    QImageIOPlugin_QBaseDisconnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QImageIOPlugin_OnDisconnectNotify((QImageIOPlugin*)self, (intptr_t)slot);
}

QObject* q_imageioplugin_sender(void* self) {
    return QImageIOPlugin_Sender((QImageIOPlugin*)self);
}

QObject* q_imageioplugin_qbase_sender(void* self) {
    return QImageIOPlugin_QBaseSender((QImageIOPlugin*)self);
}

void q_imageioplugin_on_sender(void* self, QObject* (*slot)()) {
    QImageIOPlugin_OnSender((QImageIOPlugin*)self, (intptr_t)slot);
}

int32_t q_imageioplugin_sender_signal_index(void* self) {
    return QImageIOPlugin_SenderSignalIndex((QImageIOPlugin*)self);
}

int32_t q_imageioplugin_qbase_sender_signal_index(void* self) {
    return QImageIOPlugin_QBaseSenderSignalIndex((QImageIOPlugin*)self);
}

void q_imageioplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QImageIOPlugin_OnSenderSignalIndex((QImageIOPlugin*)self, (intptr_t)slot);
}

int32_t q_imageioplugin_receivers(void* self, const char* signal) {
    return QImageIOPlugin_Receivers((QImageIOPlugin*)self, signal);
}

int32_t q_imageioplugin_qbase_receivers(void* self, const char* signal) {
    return QImageIOPlugin_QBaseReceivers((QImageIOPlugin*)self, signal);
}

void q_imageioplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QImageIOPlugin_OnReceivers((QImageIOPlugin*)self, (intptr_t)slot);
}

bool q_imageioplugin_is_signal_connected(void* self, void* signal) {
    return QImageIOPlugin_IsSignalConnected((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

bool q_imageioplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QImageIOPlugin_QBaseIsSignalConnected((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QImageIOPlugin_OnIsSignalConnected((QImageIOPlugin*)self, (intptr_t)slot);
}

void q_imageioplugin_delete(void* self) {
    QImageIOPlugin_Delete((QImageIOPlugin*)(self));
}
